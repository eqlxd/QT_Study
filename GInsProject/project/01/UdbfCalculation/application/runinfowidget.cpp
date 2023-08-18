#include "runinfowidget.h"
#include "messageinfo.h"
#include <QDebug>
#include <QKeyEvent>
#include <fcommon/fcommon>

# if IS_WINDOWS
    /* QtCreator + VS编译器时，设置执行字符集为UTF8！！！*/
    #pragma execution_character_set("utf-8")
#endif


class RunInfoWidgetPrivate : public QObject
{
    Q_OBJECT
public:
    explicit RunInfoWidgetPrivate(RunInfoWidget *parent)
        : QObject(parent), dd(parent), m_fileInfo(false)
    {
        connect(MSG, SIGNAL(debugMsg(QString,QString)), this, SLOT(addDebugMsg(QString,QString)));
        connect(MSG, SIGNAL(warningMsg(QString,QString)), this, SLOT(addWarningMsg(QString,QString)));
        connect(MSG, SIGNAL(criticalMsg(QString,QString)), this, SLOT(addCriticalMsg(QString,QString)));
        connect(MSG, SIGNAL(fatalMsg(QString,QString)), this, SLOT(addFatalMsg(QString,QString)));
    }

    RunInfoWidget * const dd;
    bool m_fileInfo;

public slots:
    void addDebugMsg(const QString &msg, const QString &file_info);
    void addWarningMsg(const QString &msg, const QString &file_info);
    void addCriticalMsg(const QString &msg, const QString &file_info);
    void addFatalMsg(const QString &msg, const QString &file_info);
};

void RunInfoWidgetPrivate::addDebugMsg(const QString &msg, const QString &file_info)
{
    if (m_fileInfo) dd->append(file_info + "  " + msg);
    else dd->append(msg);
}

void RunInfoWidgetPrivate::addWarningMsg(const QString &msg, const QString &file_info)
{
    /* TODO: 黄色*/
    if (m_fileInfo) dd->append("[Warning]: " + file_info + "  " + msg);
    else dd->append("[Warning]: " + msg);
}

void RunInfoWidgetPrivate::addCriticalMsg(const QString &msg, const QString &file_info)
{
    /* TODO: 红色*/
    if (m_fileInfo) dd->append("[Error]: " + file_info + "  " + msg);
    else dd->append("[Error]: " + msg);
}

void RunInfoWidgetPrivate::addFatalMsg(const QString &msg, const QString &file_info)
{
    /* TODO: 没想好*/
    if (m_fileInfo) dd->append(file_info + "  " + msg);
    else dd->append(msg);
}


#include "runinfowidget.moc"


RunInfoWidget::RunInfoWidget(QWidget *iParent)
    : QTextEdit(iParent), dp(new RunInfoWidgetPrivate(this))
{
    setReadOnly(true);
    setFontFamily("微软雅黑");
    setFontPointSize(12);
    resize(800, 600);
    setWindowTitle("Run Info");
}

void RunInfoWidget::keyPressEvent(QKeyEvent *iEvent)
{
    switch(iEvent->key())
    {
    case Qt::Key_F9:
        dp->m_fileInfo = !dp->m_fileInfo;
        break;
    case Qt::Key_F10:
        clear();
        break;
    }
    QTextEdit::keyPressEvent(iEvent);
}

void RunInfoWidget::closeEvent(QCloseEvent *)
{
    hide();
    clear();
}
