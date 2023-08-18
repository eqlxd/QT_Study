#include "license.h"
#include <QDebug>
#include <QProcess>
#include <QCryptographicHash>
#include <QSysInfo>
#include <QRandomGenerator>

/**************************** GLicensePrivate ****************************/
class GLicensePrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(GLicense)
    //=: Glicense  * const dd;可以在此定义，因为在.h文件中，
    //定义了GLicnesePrivate是GLicense的友元函数
public:
    explicit GLicensePrivate(GLicense *iParent)
      : QObject(iParent), dd(iParent)
    {
        Q_UNUSED(dd);
        //#define Q_UNUSED(x) (void)x;
        //=:(void)dd;防止编译器发出警告，警告dd没有被调用
    }

    QString getWMIC(const QString &iCmd);
    QString getSystemInfo(const QString &iCmd);

    QByteArray notReadAscii(const QByteArray &iData);
    QByteArray readableAscii(const QByteArray &iData, unsigned char iFirst);

    QByteArray getSeparate();
    QByteArray int2ByteArray(const int &iData, const int &iByteCount = 1);
};

QString GLicensePrivate::getWMIC(const QString &iCmd)
{
    //获取cpu名称：wmic cpu get Name
    //获取cpu核心数：wmic cpu get NumberOfCores
    //获取cpu线程数：wmic cpu get NumberOfLogicalProcessors
    //查询cpu序列号：wmic cpu get processorid
    //查询主板序列号：wmic baseboard get serialnumber
    //查询BIOS序列号：wmic bios get serialnumber
    //查看硬盘：wmic diskdrive get serialnumber
    QProcess p;
    p.start(iCmd);
    p.waitForFinished();

    QString result = QString::fromLocal8Bit(p.readAllStandardOutput());
    QStringList list = iCmd.split(" ");
    result = result.remove(list.last(), Qt::CaseInsensitive);
    result = result.replace("\r", "");
    result = result.replace("\n", "");
    result = result.simplified();

    return result;
}

QString GLicensePrivate::getSystemInfo(const QString &iCmd)
{
    if (iCmd == "kernel_version")
        return QSysInfo::kernelVersion();
    else if (iCmd == "product_version")
        return QSysInfo::productVersion();
    else if (iCmd == "product_type")
        return QSysInfo::productType();

    return QString();
}

/*
 * 使16进制数据不可见
 * 取后一个字节 加 当前字节
 * 最后一个字节 加 第一个字节
 */
QByteArray GLicensePrivate::notReadAscii(const QByteArray &iData)
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

QByteArray GLicensePrivate::readableAscii(const QByteArray &iData, unsigned char iFirst)
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

QByteArray GLicensePrivate::getSeparate()
{
    QByteArray result;

    int len = QRandomGenerator::global()->bounded(1, 16);
    result.append(int2ByteArray(len));
#ifdef QT_DEBUG
    qDebug() << "len=" << len;
#endif

    for (int n = 0; n < len; ++n)
    {
        // ASCII  33 ~ 126  可见字符串
        int index = QRandomGenerator::global()->bounded(33, 126);
        QByteArray hex = int2ByteArray(index);
        // TODO: 是否要去重？
        result.append(hex);
    }
#ifdef QT_DEBUG
    qDebug() << "result=" << result.toHex().toUpper();
#endif

    return result;
}

QByteArray GLicensePrivate::int2ByteArray(const int &iData, const int &iByteCount)
{
    return QByteArray::fromHex( QString("%1").arg(iData, iByteCount << 1, 16, QChar('0')).toUtf8() );
}

#include "license.moc"

/**************************** GLicense ****************************/
GLicense::GLicense(QObject *iParent)
    : QObject{iParent}
{
}

GLicense::~GLicense()
{
}

QVariantMap GLicense::getSystemInfo()
{
    QString cpu_name = dp->getWMIC("wmic cpu get Name");
    QString cpu_id = dp->getWMIC("wmic cpu get processorid");
    QString disk_id = dp->getWMIC("wmic diskdrive get serialnumber");
    QString main_id = dp->getWMIC("wmic baseboard get serialnumber");
    QString product_type = dp->getSystemInfo("product_type");
    QString product_version = dp->getSystemInfo("product_version");
    QString kernel_version = dp->getSystemInfo("kernel_version");

    QVariantMap result;
    result.insert("cpu_name", cpu_name);
    result.insert("cpu_id", cpu_id);
    result.insert("disk_id", disk_id);
    result.insert("main_id", main_id);
    result.insert("product_type", product_type);
    result.insert("product_version", product_version);
    result.insert("kernel_version", kernel_version);

    return result;
}

QByteArray GLicense::generate(const QVariantMap &iData)
{
    QString cpu_name = iData.value("cpu_name").toString();
    QString cpu_id = iData.value("cpu_id").toString();
    QString disk_id = iData.value("disk_id").toString();
    QString main_id = iData.value("main_id").toString();
    QString product_type = iData.value("product_type").toString();
    QString product_version = iData.value("product_version").toString();
    QString kernel_version = iData.value("kernel_version").toString();
    qDebug() << cpu_name << dp->notReadAscii(cpu_name.toUtf8()).toHex().toUpper();
    qDebug() << cpu_id << dp->notReadAscii(cpu_id.toUtf8()).toHex().toUpper();
    qDebug() << disk_id << dp->notReadAscii(disk_id.toUtf8()).toHex().toUpper();
    qDebug() << main_id << dp->notReadAscii(main_id.toUtf8()).toHex().toUpper();
    qDebug() << product_type << dp->notReadAscii(product_type.toUtf8()).toHex().toUpper();
    qDebug() << product_version << dp->notReadAscii(product_version.toUtf8()).toHex().toUpper();
    qDebug() << kernel_version << dp->notReadAscii(kernel_version.toUtf8()).toHex().toUpper();

    QString data_source = QString("__%1__%2__%3__%4__%5__%6__%7").arg(cpu_name).arg(cpu_id).arg(disk_id).arg(main_id)
            .arg(product_type).arg(product_version).arg(kernel_version);
    QByteArray hash = QCryptographicHash::hash(data_source.toUtf8(), QCryptographicHash::Keccak_384);
#ifdef QT_DEBUG
    qDebug() << "hash=" << hash.toHex().toUpper();
#endif

    // 分隔符 = 1 byte长度 + N byte随机数(ASCII)
    QByteArray data1 = cpu_name.toUtf8();
    QByteArray data2 = cpu_id.toUtf8();
    QByteArray data3 = disk_id.toUtf8();
    QByteArray data4 = main_id.toUtf8();
    QByteArray data5 = product_type.toUtf8();
    QByteArray data6 = product_version.toUtf8();
    QByteArray data7 = kernel_version.toUtf8();

    QByteArray lic_data = dp->getSeparate() + hash +
            dp->notReadAscii(data1) + dp->getSeparate() +
            dp->notReadAscii(data2) + dp->getSeparate() +
            dp->notReadAscii(data3) + dp->getSeparate() +
            dp->notReadAscii(data4) + dp->getSeparate() +
            dp->notReadAscii(data5) + dp->getSeparate() +
            dp->notReadAscii(data6) + dp->getSeparate() +
            dp->notReadAscii(data7) + dp->getSeparate();
#ifdef QT_DEBUG
    qDebug() << "lic_data=" << lic_data.toHex().toUpper();
#endif

    return lic_data;
}

bool GLicense::authentication(const QByteArray &iData)
{
    QVariantMap sys_info = getSystemInfo();
    QString cpu_name = sys_info.value("cpu_name").toString();
    QString cpu_id = sys_info.value("cpu_id").toString();
    QString disk_id = sys_info.value("disk_id").toString();
    QString main_id = sys_info.value("main_id").toString();
    QString product_type = sys_info.value("product_type").toString();
    QString product_version = sys_info.value("product_version").toString();
    QString kernel_version = sys_info.value("kernel_version").toString();

    QString data_source = QString("__%1__%2__%3__%4__%5__%6__%7").arg(cpu_name).arg(cpu_id).arg(disk_id).arg(main_id)
            .arg(product_type).arg(product_version).arg(kernel_version);
    QByteArray hash = QCryptographicHash::hash(data_source.toUtf8(), QCryptographicHash::Keccak_384);
#ifdef QT_DEBUG
    qDebug() << "hash=" << hash.toHex().toUpper();
#endif

    return iData.contains(hash);
}
