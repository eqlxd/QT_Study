#include "mainwindow.h"
#include "chartwidget.h"
#include <QDebug>
#include <QKeyEvent>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QTimer>
#include <QPainter>
#include <QPaintEvent>
#include <QPen>
#include <QStackedWidget>

#pragma execution_character_set("utf-8")

/******************************** ModuleWidget ********************************/
class ModuleWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ModuleWidget(const QPixmap &iIcon, const QString &iName, const QString &iDesc, QWidget *iParent = nullptr)
        : QWidget(iParent)
    {
        m_icon = new QLabel(this);
        m_name = new QLabel(iName, this);
        m_describe = new QLabel(iDesc, this);

        m_icon->setPixmap(iIcon);

        QFont font_title("微软雅黑", 20);
        font_title.setBold(true);
        m_name->setFont(font_title);

        QFont font_desc("微软雅黑", 12);
        m_describe->setFont(font_desc);

        QVBoxLayout *vbox = new QVBoxLayout;
        vbox->addStretch();
        vbox->addWidget(m_name);
        vbox->addWidget(m_describe);
        vbox->addStretch();

        QHBoxLayout *hbox = new QHBoxLayout(this);
        hbox->addWidget(m_icon);
        hbox->addLayout(vbox);
        hbox->addStretch();

        this->installEventFilter(this);
        m_icon->installEventFilter(this);
        m_name->installEventFilter(this);
        m_describe->installEventFilter(this);
    }

    bool eventFilter(QObject *iWatched, QEvent *iEvent) override
    {
        static bool is_press = false;

        if (iEvent->type() == QEvent::MouseButtonPress)
        {
            is_press = true;
            return true;
        }

        if (iEvent->type() == QEvent::MouseButtonRelease)
        {
            if (is_press)
            {
                is_press = false;

                emit this->clicked();
            }
            return true;
        }

        return QObject::eventFilter(iWatched, iEvent);
    }

protected:
    void paintEvent(QPaintEvent *) override
    {
        QPainter painter(this);
        QPen pen("black");
        pen.setWidth(1);
        painter.setPen(pen);
        painter.drawRect(QRect(-1, -1, size().width() - 1, size().height() - 1));
    }

signals:
    void clicked();

public:
    QLabel *m_icon = nullptr;
    QLabel *m_name = nullptr;
    QLabel *m_describe = nullptr;
};

/******************************** MainWindowPrivate ********************************/
class MainWindowPrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(MainWindow)
public:
    explicit MainWindowPrivate(MainWindow *iParent)
      : QObject(iParent), dd(iParent)
    {
        m_runInfo = new GRunInfoWidget;
    }

    GRunInfoWidget *m_runInfo = nullptr;

    QStackedWidget *m_stackWidget = nullptr;
    // 硬件配置
    ModuleWidget *m_deviceConfig = nullptr;
    // 数据分析
    ModuleWidget *m_dataAnalyze = nullptr;
    // 数据存储
    ModuleWidget *m_dataStorage = nullptr;
    // 图表
    ModuleWidget *m_chart = nullptr;

    // 图表界面
    ChartWidget *m_chartWidget = nullptr;

public:
    void initLayout();
};

void MainWindowPrivate::initLayout()
{
    m_deviceConfig = new ModuleWidget(QPixmap(":/image/device.png"), "硬件配置", "甘纳设备参数设置", dd);
    m_dataAnalyze = new ModuleWidget(QPixmap(":/image/analyze.png"), "数据分析", "设备通道和虚拟通道设置", dd);
    m_dataStorage = new ModuleWidget(QPixmap(":/image/storage.png"), "数据保存", "设置数据保存条件", dd);
    m_chart = new ModuleWidget(QPixmap(":/image/chart.png"), "图表", "XY、YT、FFT等图表", dd);

    connect(m_deviceConfig, &ModuleWidget::clicked, this, [=]() { qDebug() << "硬件配置"; });
    connect(m_dataAnalyze, &ModuleWidget::clicked, this, [=]() { qDebug() << "数据分析"; });
    connect(m_dataStorage, &ModuleWidget::clicked, this, [=]() { qDebug() << "数据保存"; });
    connect(m_chart, &ModuleWidget::clicked, [=]()
    {
        m_stackWidget->setCurrentWidget(m_chartWidget);
    });

    QWidget *main_widget = new QWidget(dd);
    QGridLayout *layout = new QGridLayout(main_widget);
    layout->setSpacing(0);
    layout->setMargin(0);
    layout->addWidget(m_deviceConfig, 0, 0, 1, 1);
    layout->addWidget(m_dataAnalyze, 0, 1, 1, 1);
    layout->addWidget(m_dataStorage, 1, 0, 1, 1);
    layout->addWidget(m_chart, 1, 1, 1, 1);

    m_stackWidget = new QStackedWidget(dd);
    m_stackWidget->addWidget(main_widget);

    {
        m_chartWidget = new ChartWidget(dd);
        m_stackWidget->addWidget(m_chartWidget);

        connect(m_chartWidget, &ChartWidget::backToMain, this, [=]()
        {
            m_stackWidget->setCurrentIndex(0);
        });
    }

    dd->setCentralWidget(m_stackWidget);
}

#include "mainwindow.moc"

/******************************** MainWindow ********************************/
MainWindow::MainWindow(QWidget *iParent)
    : QMainWindow(iParent),
      dp(new MainWindowPrivate(this))
{
    resize(1024, 768);
}

MainWindow::~MainWindow()
{
}

void MainWindow::initLayout()
{
    dp->initLayout();
}

void MainWindow::keyPressEvent(QKeyEvent *iEvent)
{
    if (iEvent->key() == Qt::Key_F1)
    {
        if (!dp->m_runInfo)
        {
            dp->m_runInfo = new GRunInfoWidget;
        }

        dp->m_runInfo->show();
        dp->m_runInfo->raise();
    }
}

void MainWindow::closeEvent(QCloseEvent *)
{
    if (dp->m_runInfo)
    {
        dp->m_runInfo->deleteLater();
    }
}
