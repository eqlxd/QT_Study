#include "widget.h"
#include <QDebug>
#include <QFormLayout>
#include <QVBoxLayout>
#include <QFileDialog>
#include <QMessageBox>
#include <QSettings>
#include <QApplication>
#include <QDir>

#pragma execution_character_set("utf-8")

Widget::Widget(QWidget *iParent)
    : QWidget(iParent)
{
    resize(840, 400);
    setWindowIcon(QIcon(":/image/logo.png"));

    m_thread = new ConvertThread;
    initLayout();
    initTrayIcon();
    qDebug() << "main thread id=" << QThread::currentThreadId();

    QTimer::singleShot(100, this, [=]()
    {
        QSettings setting(m_iniPath, QSettings::IniFormat);

        int auto_start = setting.value("AutoStart").toInt();
        if (auto_start == 1)
        {
            startConvert();
        }
    });

    // 创建log文件夹
    QString dir_path = qApp->applicationDirPath();
#ifdef QT_DEBUG
    if (dir_path.endsWith("/debug"))
        dir_path.remove("/debug");
#endif

#ifdef QT_NO_DEBUG
    if (dir_path.endsWith("/release"))
        dir_path.remove("/release");
#endif

    QDir dir(dir_path);
    dir.mkdir("log");
}

Widget::~Widget()
{
}

void Widget::initLayout()
{
    m_interval = new QSpinBox(this);
    m_input = new QLineEdit(this);
    m_output = new QLineEdit(this);

    m_interval->setRange(0, 99999);
    m_interval->setSuffix(" 分钟");
    m_interval->setFixedWidth(120);

    QSettings setting(m_iniPath, QSettings::IniFormat);
    m_interval->setValue(setting.value(m_iniInterval, 1).toInt());
    QString input = setting.value(m_iniInput).toString();
    QString output = setting.value(m_iniOutput).toString();
    if (!input.isEmpty())
    {
        m_input->setText(QDir::toNativeSeparators(input));
    }
    if (!output.isEmpty())
    {
        m_output->setText(QDir::toNativeSeparators(output));
    }

    QPushButton *set_input = new QPushButton("...", this);
    set_input->setFixedWidth(30);
    QHBoxLayout *hbox1 = new QHBoxLayout;
    hbox1->addWidget(m_input);
    hbox1->addWidget(set_input);

    QPushButton *set_output = new QPushButton("...", this);
    set_output->setFixedWidth(30);
    QHBoxLayout *hbox2 = new QHBoxLayout;
    hbox2->addWidget(m_output);
    hbox2->addWidget(set_output);

    QFormLayout *form = new QFormLayout;
    form->addRow("转换间隔时间", m_interval);
    form->addRow("UDBF文件夹", hbox1);
    form->addRow("FAMOS文件夹", hbox2);

    m_log = new QTextEdit(this);
    m_log->setReadOnly(true);
    m_startStop = new QPushButton("开始", this);

    QVBoxLayout *vbox = new QVBoxLayout(this);
    vbox->addLayout(form);
    vbox->addWidget(m_log);
    vbox->addWidget(m_startStop);

    connect(m_log, &QTextEdit::textChanged, this, [=]() { m_log->moveCursor(QTextCursor::End); });
    connect(m_interval, qOverload<int>(&QSpinBox::valueChanged), this, [=]()
    {
        QSettings setting(m_iniPath, QSettings::IniFormat);
        setting.setValue(m_iniInterval, m_interval->value());

        m_thread->setInterval(m_interval->value());
    });
    connect(set_input, &QPushButton::clicked, this, &Widget::onSetInpuDir);
    connect(set_output, &QPushButton::clicked, this, &Widget::onSetOutputDir);
    connect(m_startStop, &QPushButton::clicked, this, &Widget::onStartStop);
    connect(m_thread, &ConvertThread::convertMsg, this, [=](const QString &iMsg)
    {
        m_log->append(iMsg);

        QString today = QDate::currentDate().toString("yyyyMMdd");
        m_logFile.setFileName("log/" + today + ".log");
        if (!m_logFile.open(QFile::WriteOnly | QFile::Append))
        {
            qWarning() << m_logFile.errorString();
            return;
        }

        m_logFile.write(iMsg.toUtf8());
        m_logFile.write("\r\n");
        m_logFile.close();
    });
}

void Widget::initTrayIcon()
{
    m_trayIcon = new QSystemTrayIcon(this);
    m_trayIcon->setToolTip("UDBF文件转换");
    m_trayIcon->setIcon(QIcon(":/image/logo.png"));

    QMenu *menu = new QMenu(this);
    QAction *act_show = new QAction("显示主界面");
    QAction *act_quit = new QAction("退出");
    menu->addAction(act_show);
    menu->addAction(act_quit);
    m_trayIcon->setContextMenu(menu);

    m_trayIcon->show();

    connect(act_show, &QAction::triggered, this, &QWidget::show);
    connect(act_quit, &QAction::triggered, qApp, &QApplication::quit);
    connect(m_trayIcon, &QSystemTrayIcon::activated, this, [=](QSystemTrayIcon::ActivationReason iReason)
    {
        if (iReason == QSystemTrayIcon::DoubleClick)
            this->show();
    });
}

void Widget::startConvert()
{
    QString input_path = m_input->text();
    QString output_path = m_output->text();
    if (input_path.isEmpty() || output_path.isEmpty())
    {
        QMessageBox::warning(this, "转换", "输入目录或输出目录为空！");
        return;
    }

    m_thread->setDir(input_path, output_path);
    m_thread->setInterval(m_interval->value());
    m_thread->start();

    m_startStop->setText("停止");
}

void Widget::onSetInpuDir()
{
    QString dir = QFileDialog::getExistingDirectory(nullptr, "选择UDBF文件夹");
    if (dir.isEmpty())
        return;

    QString path = QDir::toNativeSeparators(dir);
    m_input->setText(path);

    QSettings setting(m_iniPath, QSettings::IniFormat);
    setting.setValue(m_iniInput, path);
}

void Widget::onSetOutputDir()
{
    QString dir = QFileDialog::getExistingDirectory(nullptr, "选择FAMOS文件夹");
    if (dir.isEmpty())
        return;

    QString path = QDir::toNativeSeparators(dir);
    m_output->setText(path);

    QSettings setting(m_iniPath, QSettings::IniFormat);
    setting.setValue(m_iniOutput, path);
}

void Widget::onStartStop()
{
    if (m_startStop->text() == "开始")
    {
        startConvert();
    }
    else if (m_startStop->text() == "停止")
    {
        m_thread->quit();
        m_startStop->setText("开始");
    }
}

void Widget::closeEvent(QCloseEvent *iEvent)
{
    hide();
    iEvent->ignore();
}
