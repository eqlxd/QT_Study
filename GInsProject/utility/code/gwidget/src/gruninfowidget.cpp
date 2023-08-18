#include "gruninfowidget.h"
#include <iostream>
#include <QDebug>
#include <QKeyEvent>
#include <QCloseEvent>
#include <QMutexLocker>

#pragma execution_character_set("utf-8")

#if defined(PrintMsg)
#undef PrintMsg
#endif
#define PrintMsg GRunMessageInfo::instance()

/******************************** GRunMessageInfo ********************************/
class GRunMessageInfo : public QObject
{
    Q_OBJECT
private:
    explicit GRunMessageInfo(QObject *iParent = nullptr)
        : QObject(iParent)
    {
    }

public:
    static GRunMessageInfo *instance()
    {
        static QMutex mutex;
        static GRunMessageInfo *instance = nullptr;

        if (!instance)
        {
            QMutexLocker locker(&mutex);
            if (!instance)
            {
                instance = new GRunMessageInfo;
            }
        }

        return instance;
    }

    static void installMessageHandler(QtMessageHandler iHandler)
    {
        qInstallMessageHandler(iHandler);
    }

    static void uninstallMessageHandler()
    {
        qInstallMessageHandler(nullptr);
    }

signals:
    void infoMsg(const QString &iMsg, const QString &iFileInfo);
    void debugMsg(const QString &iMsg, const QString &iFileInfo);
    void warningMsg(const QString &iMsg, const QString &iFileInfo);
    void criticalMsg(const QString &iMsg, const QString &iFileInfo);
    void fatalMsg(const QString &iMsg, const QString &iFileInfo);
};

/******************************** GRunInfoWidgetPrivate ********************************/
class GRunInfoWidgetPrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(GRunInfoWidget)
public:
    enum MsgType
    {
        Info = 0,
        Debug = 1,
        Warning = 2,
        Critical = 3,
        Fatal = 4
    };

public:
    explicit GRunInfoWidgetPrivate(GRunInfoWidget *iParent)
        : QObject(iParent), dd(iParent)
    {
        connect(PrintMsg, &GRunMessageInfo::infoMsg, this, &GRunInfoWidgetPrivate::addInfoMsg);
        connect(PrintMsg, &GRunMessageInfo::debugMsg, this, &GRunInfoWidgetPrivate::addDebugMsg);
        connect(PrintMsg, &GRunMessageInfo::warningMsg, this, &GRunInfoWidgetPrivate::addWarningMsg);
        connect(PrintMsg, &GRunMessageInfo::criticalMsg, this, &GRunInfoWidgetPrivate::addCriticalMsg);
        connect(PrintMsg, &GRunMessageInfo::fatalMsg, this, &GRunInfoWidgetPrivate::addFatalMsg);

        Q_UNUSED(dd);
    }

    ~GRunInfoWidgetPrivate()
    {
        if (m_msgFile.isOpen())
        {
            m_fileStream.flush();
            m_msgFile.close();
        }
    }

    GRunMessageInfo *m_runMsgInfo = nullptr;

    bool m_fileInfo = false;
    bool m_dbInfo = false;
    bool m_save2File = false;
    QFile m_msgFile;
    QTextStream m_fileStream;
    // qDebug中输出字符串变量时首尾会多一组双引号!
    const QString m_sqlFlag = "\"[SQL]:";

    void appendMessage(const QString &iTitle, const QString &iMsg, const QString &iFileInfo);
    void showHelp();

public:
    static void msgHandler(QtMsgType iType, const QMessageLogContext &iContext, const QString &iMsg);

public slots:
    void addInfoMsg(const QString &iMsg, const QString &iFileInfo);
    void addDebugMsg(const QString &iMsg, const QString &iFileInfo);
    void addWarningMsg(const QString &iMsg, const QString &iFileInfo);
    void addCriticalMsg(const QString &iMsg, const QString &iFileInfo);
    void addFatalMsg(const QString &iMsg, const QString &iFileInfo);
    void saveMsgToFile(GRunInfoWidgetPrivate::MsgType iType, const QString &iMsg, const QString &iFileInfo);
};

void GRunInfoWidgetPrivate::appendMessage(const QString &iTitle, const QString &iMsg, const QString &iFileInfo)
{
    QString message = iMsg;
    if (!m_dbInfo)
    {
        if (message.startsWith(m_sqlFlag))
            return;
    }
    else
    {
        // 去掉SQL语句打印最后的双引号
        if (message.startsWith(m_sqlFlag))
            message.chop(1);
        // 去掉SQL语句开头的 SQL 标签
        message.remove(m_sqlFlag);
    }

    if (m_fileInfo)
    {
        message.prepend(iFileInfo + "  ");
    }

    if (!iTitle.isEmpty())
    {
        message.prepend(iTitle);
    }

    dd->append(message);
}

void GRunInfoWidgetPrivate::showHelp()
{
    QString help_string = "###########################  HELP  ###########################\n"
            "F1  : 查看帮助信息\n"
            "F2  : 打开或关闭上下文信息\n"
            "F3  : 打开或关闭SQL语句\n"
            "F4  : 保存后台信息到日志文件\n"
            "F5  : 清屏\n"
            "###########################  HELP  ###########################";
    dd->clear();
    dd->append(help_string);
}

void GRunInfoWidgetPrivate::msgHandler(QtMsgType iType, const QMessageLogContext &iContext, const QString &iMsg)
{
    switch (iType)
    {
    case QtInfoMsg:
        emit PrintMsg->infoMsg(iMsg, QString("%1 %2").arg(iContext.file, iContext.line));
        break;
    case QtDebugMsg:
        emit PrintMsg->debugMsg(iMsg, QString("%1 %2").arg(iContext.file, iContext.line));
        break;
    case QtWarningMsg:
        emit PrintMsg->warningMsg(iMsg, QString("%1 %2").arg(iContext.file, iContext.line));
        break;
    case QtCriticalMsg:
        emit PrintMsg->criticalMsg(iMsg, QString("%1 %2").arg(iContext.file, iContext.line));
        break;
    case QtFatalMsg:
        emit PrintMsg->fatalMsg(iMsg, QString("%1 %2").arg(iContext.file, iContext.line));
        break;
    }
}


void GRunInfoWidgetPrivate::addInfoMsg(const QString &iMsg, const QString &iFileInfo)
{
    saveMsgToFile(Info, iMsg, iFileInfo);

    appendMessage(QString(), iMsg, iFileInfo);
    std::cout << iMsg.toStdString() << std::endl;
}

void GRunInfoWidgetPrivate::addDebugMsg(const QString &iMsg, const QString &iFileInfo)
{
    saveMsgToFile(Debug, iMsg, iFileInfo);

    appendMessage(QString(), iMsg, iFileInfo);
    std::cout << iMsg.toStdString() << std::endl;
}

void GRunInfoWidgetPrivate::addWarningMsg(const QString &iMsg, const QString &iFileInfo)
{
    saveMsgToFile(Warning, iMsg, iFileInfo);

    // 黄色
    appendMessage("[Warning]: ", iMsg, iFileInfo);
    std::cout << iMsg.toStdString() << std::endl;
}

void GRunInfoWidgetPrivate::addCriticalMsg(const QString &iMsg, const QString &iFileInfo)
{
    saveMsgToFile(Critical, iMsg, iFileInfo);

    // TODO: 红色
    appendMessage("[Error]: ", iMsg, iFileInfo);
    std::cout << iMsg.toStdString() << std::endl;
}

void GRunInfoWidgetPrivate::addFatalMsg(const QString &iMsg, const QString &iFileInfo)
{
    saveMsgToFile(Fatal, iMsg, iFileInfo);

    // TODO: 没想好
    appendMessage("[Fatal]: ", iMsg, iFileInfo);
    std::cout << iMsg.toStdString() << std::endl;
}

void GRunInfoWidgetPrivate::saveMsgToFile(MsgType iType, const QString &iMsg, const QString &iFileInfo)
{
    if (!m_save2File)
        return;

    if (!m_msgFile.isOpen())
    {
        m_msgFile.setFileName("msg_file.log");
        if (!m_msgFile.open(QIODevice::ReadWrite | QIODevice::Append))
        {
            qWarning() << "Open log file failed! Error=" << m_msgFile.errorString();
            return;
        }
        m_fileStream.setDevice(&m_msgFile);
    }

    QString message = iMsg;
    // 去掉SQL语句打印最后的双引号 和 开头的 SQL 标签
    if (message.startsWith(m_sqlFlag))
    {
        message.chop(1);
        message.remove(m_sqlFlag);
    }

    switch (iType)
    {
    case Info:
        if (m_fileInfo)
        {
            m_fileStream << ("[info]: " + iFileInfo + "  " + message);
        }
        else
        {
            m_fileStream <<message;
        }
        break;
    case Debug:
        if (m_fileInfo)
        {
            m_fileStream << "[Debug]: " + (iFileInfo + "  " + message);
        }
        else
        {
            m_fileStream <<message;
        }
        break;
    case Warning:
        if (m_fileInfo)
        {
            m_fileStream << ("[Warning]: " + iFileInfo + "  " + message);
        }
        else
        {
            m_fileStream << ("[Warning]: " + message);
        }
        break;
    case Critical:
        if (m_fileInfo)
        {
            m_fileStream << ("[Critical]: " + iFileInfo + "  " + message);
        }
        else
        {
            m_fileStream << ("[Error]: " + message);
        }
        break;
    case Fatal:
        if (m_fileInfo)
        {
            m_fileStream << ("[Fatal]: " + iFileInfo + "  " + message);
        }
        else
        {
            m_fileStream << message;
        }
        break;
    }
    m_fileStream << "\n";
    m_fileStream.flush();
}

#include "gruninfowidget.moc"

/******************************** GRunInfoWidget ********************************/
GRunInfoWidget::GRunInfoWidget(QWidget *iParent)
    : QTextEdit{iParent},
      dp(new GRunInfoWidgetPrivate(this))
{
    setReadOnly(true);
    setFontFamily("微软雅黑");
    setFontPointSize(12);
    resize(800, 600);
    setWindowTitle("Run Info");
}

void GRunInfoWidget::installMessageHandler()
{
    PrintMsg->installMessageHandler(GRunInfoWidgetPrivate::msgHandler);
}

void GRunInfoWidget::uninstallMessageHandler()
{
    PrintMsg->uninstallMessageHandler();
}

void GRunInfoWidget::keyPressEvent(QKeyEvent *iEvent)
{
    switch(iEvent->key())
    {
    case Qt::Key_F1:
        dp->showHelp();
        break;
    case Qt::Key_F2:
        dp->m_fileInfo = !dp->m_fileInfo;
        if (dp->m_fileInfo)
            qDebug() << "Print File Info.";
        else
            qDebug() << "Print No File Info.";
        break;
    case Qt::Key_F3:
        dp->m_dbInfo = !dp->m_dbInfo;
        if (dp->m_dbInfo)
            qDebug() << "Print SQL Info.";
        else
            qDebug() << "Print No SQL Info.";
        break;
    case Qt::Key_F4:
        dp->m_save2File = !dp->m_save2File;
        if (dp->m_save2File)
            qDebug() << "Save Log File.";
        else
            qDebug() << "Not Save Log File.";
        break;
    case Qt::Key_F5:
        clear();
        break;
    }

    QTextEdit::keyPressEvent(iEvent);
}

void GRunInfoWidget::closeEvent(QCloseEvent *)
{
    hide();
    clear();
}
