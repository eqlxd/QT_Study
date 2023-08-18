#include "mainwindow.h"
#include "../globalapp.h"
#include "hwwidgetu.h"
#include "hwwidgetd.h"
#include "mathwidgetu.h"
#include "mathwidgetd.h"
#include <gwidget/gruninfowidget.h>
#include <GInsData/GInsDataInterface.hpp>
#include <QDebug>
#include <QtWidgets>
#include <QVBoxLayout>
#include <QStackedLayout>
#include <QTimer>
#include <QFileDialog>
#include <QMessageBox>

#pragma execution_character_set("utf-8")

/***************************** MainWindowPrivate *****************************/
class MainWindowPrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(MainWindow)
public:
    explicit MainWindowPrivate(MainWindow *iParent)
      : QObject(iParent), dd(iParent)
    {
    }

    GIns::Data::GInsDataSourcePtr m_dataSource;
    bool m_isWriting = false;

    QAction *m_actHardware = nullptr;
    QAction *m_actMath = nullptr;

    QStackedLayout *m_centLayout = nullptr;
    HwWidgetU *m_hwUp = nullptr;
    HwWidgetD *m_hwDown = nullptr;
    MathWidgetU *m_mathUp = nullptr;
    MathWidgetD *m_mathDown = nullptr;

    GRunInfoWidget *m_runInfo = nullptr;

public:
    void initMenu();
    void initToolbar();
    void initCenterWidget();
    void initConnect();

public slots:
    void onMenuAddConfig();
    void onMenuOpenConfig();
    void onMenuSaveConfig();
    void onMenuSaveAsConfig();
    void onMenuAbout();
    void onMenuQuit();

    void onToolbarHW();    // 硬件通道
    void onToolbarMath(); // 数学运算
};

void MainWindowPrivate::initMenu()
{
    QMenuBar *menu_bar = new QMenuBar(dd);
    QMenu *set = new QMenu("设置", dd);
    QMenu *help = new QMenu("帮助", dd);

    menu_bar->addMenu(set);
    menu_bar->addMenu(help);
    dd->setMenuBar(menu_bar);

    set->addAction("新建配置", this, &MainWindowPrivate::onMenuAddConfig);
    set->addAction("打开配置", this, &MainWindowPrivate::onMenuOpenConfig);
    set->addAction("保存配置", this, &MainWindowPrivate::onMenuSaveConfig);
//    set->addAction("另存配置", this, &MainWindowPrivate::onMenuSaveAsConfig);

    help->addAction("关于", this, &MainWindowPrivate::onMenuAbout);
    help->addAction("退出", this, &MainWindowPrivate::onMenuQuit);
}

void MainWindowPrivate::initToolbar()
{
    QToolBar *tool_bar = new QToolBar(dd);
    dd->addToolBar(tool_bar);

    m_actHardware = tool_bar->addAction("硬件通道", this, &MainWindowPrivate::onToolbarHW);
    m_actMath = tool_bar->addAction("数学运算", this, &MainWindowPrivate::onToolbarMath);
}

void MainWindowPrivate::initCenterWidget()
{
    QWidget *center_widget = new QWidget(dd);
    m_centLayout = new QStackedLayout(center_widget);

    m_hwUp = new HwWidgetU(dd);
    m_hwDown = new HwWidgetD(dd);
    QVBoxLayout *vbox1 = new QVBoxLayout;
    vbox1->addWidget(m_hwUp);
    vbox1->addWidget(m_hwDown);
    QWidget *w1 = new QWidget(dd);
    w1->setLayout(vbox1);
    m_centLayout->addWidget(w1);

    m_mathUp = new MathWidgetU(dd);
    m_mathDown = new MathWidgetD(dd);
    QVBoxLayout *vbox2 = new QVBoxLayout;
    vbox2->addWidget(m_mathUp);
    vbox2->addWidget(m_mathDown);
    QWidget *w2 = new QWidget(dd);
    w2->setLayout(vbox2);
    m_centLayout->addWidget(w2);
    dd->setCentralWidget(center_widget);
}

void MainWindowPrivate::initConnect()
{
    connect(GApp, &GlobalApp::deviceConnectOk, this, [=]()
    {
        if (!m_hwDown->checkData())
        {
            QMessageBox::warning(nullptr, "打开配置", "配置数据和设备数据不符，请确认！");
            return;
        }

        m_hwUp->setConnectOk();
        m_hwDown->setDataRate();
        m_hwDown->setTableData();

        m_actMath->setEnabled(true);
        GApp->startReading();
    });

    connect(m_mathUp, &MathWidgetU::rosettesSeted, m_mathDown, &MathWidgetD::setRosetteData);
    connect(m_mathUp, &MathWidgetU::pcbSeted, m_mathDown, &MathWidgetD::setPcbData);
    connect(m_mathUp, &MathWidgetU::startWrite, m_mathDown, &MathWidgetD::startWrite);
    connect(m_mathUp, &MathWidgetU::startWrite, this, [=]() { m_isWriting = true; });
    connect(m_mathUp, &MathWidgetU::startSaveFile, m_mathDown, &MathWidgetD::startSaveFile);
    connect(m_mathUp, &MathWidgetU::stopSaveFile, m_mathDown, &MathWidgetD::stopSaveFile);
}

void MainWindowPrivate::onMenuAddConfig()
{
    if (m_isWriting)
        return;

    m_hwUp->clear();
    m_hwDown->clear();
    m_mathUp->clear();
    m_mathDown->clear();
}

void MainWindowPrivate::onMenuOpenConfig()
{
    if (m_isWriting)
        return;

    QString path = QFileDialog::getOpenFileName(nullptr, "打开配置", QString(), "*.cfg");
    if (path.isEmpty())
        return;

    bool is_ok = false;
    QString json = GApp->fileString(path, &is_ok);
    if (!is_ok)
    {
        QMessageBox::warning(nullptr, "打开配置", "解析配置文件失败！");
        return;
    }

    QString error;
    QVariantMap cfg_data = GApp->jsonString2Variant(json, &error).toMap();
    if (!error.isEmpty())
    {
        QString err_msg = "配置文件数据错误！\n" + error;
        QMessageBox::warning(nullptr, "打开配置", err_msg);
        return;
    }

    QVariantMap hw_data = cfg_data.value("hw").toMap();
    QVariantList table_data = hw_data.value("table_data").toList();

    // 如果已经连了设备，那么需要做数据验证
    if (GApp->isConnect())
    {
        QVariantList dev_data = m_hwDown->getTableData();
        if (table_data.count() != dev_data.count())
        {
            QMessageBox::warning(nullptr, "打开配置", "配置数据和设备数据不符，请确认！");
            return;
        }

        for (int n = 0; n <dev_data.count(); ++n)
        {
            QVariantMap t_data = table_data.at(n).toMap();
            QVariantMap d_data = dev_data.at(n).toMap();

            if (t_data.value("name").toString() != d_data.value("name").toString())
            {
                QMessageBox::warning(nullptr, "打开配置", "配置数据和设备数据不符，请确认！");
                return;
            }
        } // End for
    }

    m_hwUp->setIpAddress(hw_data.value("ip").toString());
    m_hwDown->setDataRate(hw_data.value("data_rate").toDouble());
    m_hwDown->setTableData(table_data);

    m_mathDown->setMathData(cfg_data.value("math").toMap());
    qInfo() << "open config ok.";
}

void MainWindowPrivate::onMenuSaveConfig()
{
    if (m_isWriting)
        return;

    QVariantMap hw_cfg;
    hw_cfg.insert("ip", m_hwUp->getIpAddress());
    hw_cfg.insert("data_rate", m_hwDown->getDataRate());
    hw_cfg.insert("table_data", m_hwDown->getTableData());

    QVariantMap math_cfg = m_mathDown->getMathData();

    QString path = QFileDialog::getSaveFileName(nullptr, "保存配置");
    if (path.isEmpty())
    {
        QMessageBox::warning(nullptr, "保存配置", "保存路径不能为空！");
        return;
    }

    if (!path.contains(".cfg"))
        path += ".cfg";

    QVariantMap cfg_data;
    cfg_data.insert("hw", hw_cfg);
    cfg_data.insert("math", math_cfg);
    QString json = GApp->variant2JsonString(cfg_data);
    if (!GApp->createFile(path, json))
    {
        QMessageBox::warning(nullptr, "保存配置", "创建配置文件失败！");
    }
}

void MainWindowPrivate::onMenuSaveAsConfig()
{
    qDebug() << __FUNCTION__;
}

void MainWindowPrivate::onMenuAbout()
{
    QString file_name = qApp->applicationDirPath() + "/程序说明.pdf";
    QDesktopServices::openUrl(QUrl::fromLocalFile(file_name));
}

void MainWindowPrivate::onMenuQuit()
{
    dd->close();
}

void MainWindowPrivate::onToolbarHW()
{
    m_centLayout->setCurrentIndex(0);
}

void MainWindowPrivate::onToolbarMath()
{
    m_centLayout->setCurrentIndex(1);
}

#include "mainwindow.moc"

/***************************** MainWindow *****************************/
MainWindow::MainWindow(QWidget *iParent)
    : QMainWindow{iParent},
      dp(new MainWindowPrivate(this))
{
    resize(1024, 768);
    setMinimumSize(800, 600);

    setWindowTitle("Rosetts & PCB Strain Rate");

    dp->initMenu();
    dp->initToolbar();
    dp->initCenterWidget();
    dp->initConnect();

    dp->m_centLayout->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
}

void MainWindow::keyPressEvent(QKeyEvent *iEvent)
{
    switch(iEvent->key())
    {
    case Qt::Key_F1:
    {
        if (!dp->m_runInfo)
        {
            dp->m_runInfo = new GRunInfoWidget;
        }

        dp->m_runInfo->show();
        dp->m_runInfo->activateWindow();
        break;
    }
    case Qt::Key_F2:
        break;
    case Qt::Key_F3:
        break;
    case Qt::Key_F4:
        break;
    case Qt::Key_F5:
        break;
    case Qt::Key_F6:
        break;
    case Qt::Key_F7:
        break;
    case Qt::Key_F8:
        break;
    case Qt::Key_F9:
        qInfo() << "###### info ######";
        break;
    case Qt::Key_F10:
        qDebug() << "###### debug ######";
        break;
    case Qt::Key_F11:
        qWarning() << "###### warning ######";
        break;
    case Qt::Key_F12:
        qCritical() << "###### error ######";
        break;
    }
    QWidget::keyPressEvent(iEvent);
}

void MainWindow::closeEvent(QCloseEvent *)
{
    GApp->endReading();
    GApp->endWriting();

    if (dp->m_runInfo)
    {
        dp->m_runInfo->deleteLater();
    }
}
