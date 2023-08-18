#include "messageinfo.h"
#include <QMutex>
#include <fthread/fthread>
#include <fcommon/ftemplate.h>

class MessageInfoPrivate : public QObject
{
    Q_OBJECT
public:
    explicit MessageInfoPrivate(MessageInfo *parent)
        : QObject(parent), dd(parent)
    {
    }

    MessageInfo * const dd;

public:
    static void msgHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg);
};

void MessageInfoPrivate::msgHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg)
{
    /*QMutexLocker locker(&MessageInfoPrivate::m_mutex);*/
    switch (type)
    {
    case QtDebugMsg:
        MSG->instance()->debugMsg(msg, QString("%1 %2").arg(context.file).arg(context.line));
        break;
    case QtWarningMsg:
        MSG->instance()->warningMsg(msg, QString("%1 %2").arg(context.file).arg(context.line));
        break;
    case QtCriticalMsg:
        MSG->instance()->criticalMsg(msg, QString("%1 %2").arg(context.file).arg(context.line));
        break;
    case QtFatalMsg:
        MSG->instance()->fatalMsg(msg, QString("%1 %2").arg(context.file).arg(context.line));
        break;
    }
}

#include "messageinfo.moc"


MessageInfo::MessageInfo(QObject *parent)
    : QObject(parent), dp(new MessageInfoPrivate(this))
{
}

MessageInfo *MessageInfo::instance()
{
    static QMutex mutex;
    static MessageInfo *instance = NULL;
    if (!instance)
    {
        QMutexLocker locker(&mutex);
        if (!instance)
        {
            instance = new MessageInfo();
        }
    }
    return instance;
}

void MessageInfo::installMessageHandler()
{
    /*dp->m_debugStream = new DebugStream(std::cout);*/
    qInstallMessageHandler(MessageInfoPrivate::msgHandler);
}
