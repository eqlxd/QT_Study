#ifndef MESSAGEINFO_H
#define MESSAGEINFO_H

#include <fglobal/fglobal.h>
#include <QObject>

#if defined(MSG)
#undef MSG
#endif
#define MSG MessageInfo::instance()

class MessageInfo : public QObject
{
    Q_OBJECT
    F_DECLARE_PRIVATE(MessageInfo)
private:
    explicit MessageInfo(QObject *parent = 0);

public:
    static MessageInfo *instance();

    void installMessageHandler();

signals:
    void debugMsg(const QString &msg, const QString &file_info);
    void warningMsg(const QString &msg, const QString &file_info);
    void criticalMsg(const QString &msg, const QString &file_info);
    void fatalMsg(const QString &msg, const QString &file_info);
};

#endif // MESSAGEINFO_H
