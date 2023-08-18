#include "hwwidgetu.h"
#include "../globalapp.h"
#include <QDebug>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QRegExpValidator>
#include <QMessageBox>
#include <QProcess>
#include <QTimer>

#pragma execution_character_set("utf-8")

/***************************** HwWidgetUPrivate *****************************/
class HwWidgetUPrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(HwWidgetU)
public:
    explicit HwWidgetUPrivate(HwWidgetU *iParent)
      : QObject(iParent), dd(iParent)
    {
    }

    QLineEdit *m_ip = nullptr;
    QPushButton *m_connect = nullptr;

public:
    void initLayout();

public slots:
    void onConnect();
};

void HwWidgetUPrivate::initLayout()
{
    QRegExp reg_exp_ip("((25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9][0-9]|[0-9])[\\.]){3}(25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9][0-9]|[0-9])");

    m_ip = new QLineEdit(dd);
    m_ip->setValidator(new QRegExpValidator(reg_exp_ip,this));
    m_ip->setFixedWidth(200);

#ifdef QT_DEBUG
    m_ip->setText("192.168.1.18");
#endif

    m_connect = new QPushButton("获取通道", dd);
    m_connect->setMaximumWidth(100);
    connect(m_connect, &QPushButton::clicked, this, &HwWidgetUPrivate::onConnect);

    QVBoxLayout *vbox1 = new QVBoxLayout;
    vbox1->addWidget(new QLabel("Gantner控制器IP地址:", dd));
    vbox1->addWidget(m_ip);
    vbox1->addStretch();

    QVBoxLayout *vbox2 = new QVBoxLayout;
    vbox2->addWidget(new QLabel("", dd));
    vbox2->addWidget(m_connect);
    vbox2->addStretch();

    QWidget *stretch_w = new QWidget(dd);
    stretch_w->setMinimumWidth(800);

    QGridLayout *grid_layout = new QGridLayout(dd);
    grid_layout->addLayout(vbox1, 0, 0, 1, 1);
    grid_layout->addLayout(vbox2, 0, 1, 1, 1);
    grid_layout->addWidget(stretch_w, 0, 2, 1, 1);
}

void HwWidgetUPrivate::onConnect()
{
    QString ip = m_ip->text();
    if (ip.isEmpty())
    {
        QMessageBox::critical(dd, "获取通道", "设备IP地址不能为空，请先填写设备IP地址！");
        return;
    }

    if (!GApp->connectDevice(ip))
    {
        QMessageBox::critical(dd, "获取通道", "初始化设备对象失败！");
        return;
    }

    GApp->initReadHeader();
    emit GApp->deviceConnectOk();
}

#include "hwwidgetu.moc"

/***************************** HwWidgetU *****************************/
HwWidgetU::HwWidgetU(QWidget *iParent)
    : QWidget{iParent},
      dp(new HwWidgetUPrivate(this))
{
    setMaximumHeight(100);
    dp->initLayout();

    // 使LineEdit底边与PushButton对齐
    QTimer::singleShot(200, this, [=]()
    {
        dp->m_ip->setMinimumHeight(28);
    });
}

void HwWidgetU::setIpAddress(const QString &iIp)
{
    dp->m_ip->setText(iIp);
}

QString HwWidgetU::getIpAddress()
{
    return dp->m_ip->text();
}

void HwWidgetU::setConnectOk()
{
    dp->m_ip->setReadOnly(true);
    dp->m_connect->setEnabled(false);

    // 初始化WriteBuffer
    QString buffer_name = "PostBuffer";
    {
        // PostBuffer0， PostBuffer1，PostBuffer2......
        QProcess process;
        process.start("tasklist", QStringList() << "/FI" << "imagename eq Rosettes_PCBStrainRate.exe");
        process.waitForFinished(1000);

        QString tasks = QString::fromLocal8Bit(process.readAll());
        int process_count = tasks.count("Rosettes_PCBStrainRate", Qt::CaseInsensitive);
        if (process_count > 0)
        {
            process_count -= 1;
        }

        buffer_name += QString::number(process_count);
    }

    if (!GApp->initWriteBuffer(buffer_name, 50000000, 50000000))
    {
        qWarning() << "Write Buffer创建失败！";
        return;
    }

    double data_rate = GApp->getReaderHeader("data_rate").toDouble();
    bool rtn = GApp->setWriteheader(data_rate);

    qInfo() << "连接设备成功, Write Buffer创建成功.  rtn=" << rtn;
}

void HwWidgetU::clear()
{
    dp->m_ip->clear();
}
