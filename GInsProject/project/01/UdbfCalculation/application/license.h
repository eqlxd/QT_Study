#ifndef LICENSE_H
#define LICENSE_H

#include <QObject>

#if defined(LIC)
#undef LIC
#endif
#define LIC License::instance()

class QFile;
class License : public QObject
{
    Q_OBJECT
private:
    explicit License(QObject *iParent = nullptr);
    ~License();

public:
    static License *instance(QObject *iParent = 0);
    static void release();

    static bool createLicenseFile(const QString &iAccount, const QString &iStartDate, int iUseDay, QFile *iFile);
    static QByteArray loadLicenseFile(const QString &iFileName);
    static QByteArray makHash(const QString &iData);
    // 取该用户授权的使用时间段
    static QVariantMap getUseDate(const QString &iUserId);
    static QString getEndDate(const QString &iStartDate, int iUseDay);

    static QByteArray notReadAscii(const QByteArray &iData);
    static QByteArray readableAscii(const QByteArray &iData, unsigned char iFirst);
};

extern const QString cLicenseFileName;
#endif // LICENSE_H
