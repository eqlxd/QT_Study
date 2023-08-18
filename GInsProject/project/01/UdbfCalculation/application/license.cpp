#include <QApplication>
#include <QMutex>
#include <QDebug>
#include <QDir>
#include <QFile>
#include <QDate>
#include <QCryptographicHash>
#include "license.h"

QMutex lic_mutex;
License *lic_instance = nullptr;

const QString cLicenseFileName = "license.dat";

License::License(QObject *iParent)
    : QObject(iParent)
{
}

License::~License()
{
}

License *License::instance(QObject *iParent)
{
    Q_UNUSED(iParent);
    if (!lic_instance)
    {
        QMutexLocker locker(&lic_mutex);
        if (!lic_instance)
        {
            lic_instance = new License(qApp);
        }
    }

    return lic_instance;
}

void License::release()
{
    if (lic_instance)
    {
        QMutexLocker locker(&lic_mutex);

        delete lic_instance;
        lic_instance = nullptr;
    }
}

bool License::createLicenseFile(const QString &iAccount, const QString &iStartDate, int iUseDay, QFile *iFile)
{
    QDate end_data = QDate::fromString(iStartDate, "yyyyMMdd").addDays(iUseDay);
    QString account_info = QString("__%1__%2__%3__%4__")
            .arg(QString(iAccount)).arg(QString(iStartDate)).arg(iUseDay).arg(end_data.toString("yyyyMMdd"));

    QByteArray info_hash = makHash(account_info.toUtf8());
    QByteArray head = QString("RISKCONTROL").toUtf8();
    QByteArray separate1 = QByteArray::fromHex("EF57");
    QByteArray user_id = iAccount.toUtf8();
    QByteArray separate2 = QByteArray::fromHex("267F");
    QByteArray start_date = iStartDate.toUtf8();
    QByteArray separate3 = QByteArray::fromHex("7F20");
    QByteArray use_day = QString("%1").arg(iUseDay).toUtf8();
    QByteArray separate4 = QByteArray::fromHex("F070"); // 原文信息与密文分隔符
    QByteArray end = QByteArray::fromHex("CAFEBABE");
    QByteArray lic_data = LIC->notReadAscii(head) + separate1 + head.front() +
            LIC->notReadAscii(user_id) + separate2 + user_id.front() +
            LIC->notReadAscii(start_date) + separate3 + start_date.front() +
            LIC->notReadAscii(use_day) + separate4 + use_day.front() +
            info_hash + end;

    iFile->write(lic_data);
    return true;
}

QByteArray License::loadLicenseFile(const QString &iFileName)
{
    QFile file(QDir::toNativeSeparators(iFileName));
    if (!file.open(QIODevice::ReadOnly))
    {
        qWarning () << file.errorString();
        return QByteArray();
    }

    return file.readAll();
}

QByteArray License::makHash(const QString &iData)
{
    return QCryptographicHash::hash(iData.toUtf8(), QCryptographicHash::Sha1);
}

QVariantMap License::getUseDate(const QString &iUserId)
{
    QVariantMap result;

    QByteArray data = loadLicenseFile(cLicenseFileName);
    if (data.isEmpty())
    {
        return QVariantMap();
    }

    int account_count = data.count(notReadAscii("RISKCONTROL"));
    for (int n = 0, offset = 0; n <account_count; ++n)
    {
        int start_index = data.indexOf(notReadAscii("RISKCONTROL"), offset);
        int end_index = data.indexOf(QByteArray::fromHex("CAFEBABE"), offset);
        int length = end_index - start_index + 4;
        QByteArray lic_data = data.mid(offset, length);

        int sp1_index = lic_data.indexOf(QByteArray::fromHex("EF57"));
        int sp2_index = lic_data.indexOf(QByteArray::fromHex("267F"));
        int sp3_index = lic_data.indexOf(QByteArray::fromHex("7F20"));
        int sp4_index = lic_data.indexOf(QByteArray::fromHex("F070"));
        int last_index = lic_data.indexOf(QByteArray::fromHex("CAFEBABE"));

        QByteArray head_ = lic_data.mid(0, sp1_index);
        if (head_ != notReadAscii("RISKCONTROL"))
        {
            offset++;
            continue;
        }
        unsigned char head_key = lic_data.at(sp1_index + 2);
        LIC->readableAscii(head_, head_key);

        QByteArray user_ = lic_data.mid(sp1_index + 3, sp2_index - sp1_index - 3);
        if (user_ != notReadAscii(iUserId.toUtf8()))
        {
            offset += length;
            continue;
        }
        unsigned char user_key = lic_data.at(sp2_index + 2);
        LIC->readableAscii(user_, user_key);

        QByteArray start_date_ = lic_data.mid(sp2_index + 3, sp3_index - sp2_index - 3);
        unsigned char start_date_key = lic_data.at(sp3_index + 2);
        QString start_date = LIC->readableAscii(start_date_, start_date_key);

        QByteArray use_day_ = lic_data.mid(sp3_index + 3, sp4_index - sp3_index - 3);
        unsigned char use_day_key = lic_data.at(sp4_index + 2);
        QString use_day = LIC->readableAscii(use_day_, use_day_key);
        QString end_date = LIC->getEndDate(start_date, use_day.toInt());

        /*QByteArray hash_data = */lic_data.mid(sp4_index + 3, last_index - sp4_index - 3);
        result.insert("start", start_date);
        result.insert("end", end_date);

        offset += length;
        break;
    }

    return result;
}

QString License::getEndDate(const QString &iStartDate, int iUseDay)
{
    QDate start = QDate::fromString(iStartDate, "yyyyMMdd");
    QDate end = start.addDays(iUseDay);
    return end.toString("yyyyMMdd");
}

/*
 * 使16进制数据不可见
 * 取后一个字节 加 当前字节
 * 最后一个字节 加 第一个字节
 */
QByteArray License::notReadAscii(const QByteArray &iData)
{
    QByteArray result;
    for (int n = 0; n < iData.count(); ++n)
    {
        unsigned char byte = 0x0;
        unsigned char byte1 = iData.at(n);
        if (n != iData.count() - 1)
        {
            unsigned char byte2 = iData.at(n + 1);
            byte = byte1 + byte2;
        }
        else
        {
            unsigned char byte2 = iData.at(0);
            byte = byte1 + byte2;
        }
        result.append(byte);
    }
    return result;
}

QByteArray License::readableAscii(const QByteArray &iData, unsigned char iFirst)
{
    QByteArray result;
    for (int n = iData.count() - 1; n >= 0; --n)
    {
        unsigned char byte = 0x0;
        unsigned char byte1 = iData.at(n);
        if (n == (iData.count() - 1))
        {
            byte = byte1 - iFirst;
        }
        else
        {
            byte = byte1 - result.at(0);
        }
        result.prepend(byte);
    }
    return result;
}
