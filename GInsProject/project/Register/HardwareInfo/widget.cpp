#include "widget.h"
#include <gglobal/license.h>
#include <QDebug>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QFile>
#include <QMessageBox>

#pragma execution_character_set("utf-8")

class WidgetPrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(Widget)
public:
    explicit WidgetPrivate(Widget *iParent)
      : QObject(iParent), dd(iParent)
    {
    }

    GLicense m_license;

    QLineEdit *m_cpuName = nullptr;
    QLineEdit *m_cpuId = nullptr;
    QLineEdit *m_diskId = nullptr;
    QLineEdit *m_mainId = nullptr;
    QLineEdit *m_sysInfo = nullptr;

public:
    void initLayout();
    void setUiData();

public slots:
    void onButtonClicked();
};

void WidgetPrivate::initLayout()
{
    m_cpuName = new QLineEdit(dd);
    m_cpuId = new QLineEdit(dd);
    m_diskId = new QLineEdit(dd);
    m_mainId = new QLineEdit(dd);
    m_sysInfo = new QLineEdit(dd);

    m_cpuName->setReadOnly(true);
    m_cpuId->setReadOnly(true);
    m_diskId->setReadOnly(true);
    m_mainId->setReadOnly(true);
    m_sysInfo->setReadOnly(true);

    QFormLayout *form_layout = new QFormLayout;
    form_layout->addRow("CPU Name:", m_cpuName);
    form_layout->addRow("CPU ID:", m_cpuId);
    form_layout->addRow("Disk ID:", m_diskId);
    form_layout->addRow("Main ID:", m_mainId);
    form_layout->addRow("System", m_sysInfo);

    QPushButton *btn = new QPushButton("生成系统信息", dd);
    connect(btn, &QPushButton::clicked, this, &WidgetPrivate::onButtonClicked);

    QHBoxLayout *hbox = new QHBoxLayout;
    hbox->setMargin(0);
    hbox->addWidget(btn, 0, Qt::AlignCenter);

    QVBoxLayout *vbox = new QVBoxLayout(dd);
    vbox->addLayout(form_layout);
    vbox->addLayout(hbox);
}

void WidgetPrivate::setUiData()
{
    QVariantMap data = m_license.getSystemInfo();
    m_cpuName->setText(data.value("cpu_name").toString());
    m_cpuId->setText(data.value("cpu_id").toString());
    m_diskId->setText(data.value("disk_id").toString());
    m_mainId->setText(data.value("main_id").toString());

    QString sys_data = data.value("product_type").toString() + " " +
            data.value("product_version").toString() + " " +
            data.value("kernel_version").toString();
    m_sysInfo->setText(sys_data);
}

void WidgetPrivate::onButtonClicked()
{
    QVariantMap data = m_license.getSystemInfo();
    QString cpu_name = data.value("cpu_name").toString();
    QString cpu_id = data.value("cpu_id").toString();
    QString disk_id = data.value("disk_id").toString();
    QString main_id = data.value("main_id").toString();
    QString product_type = data.value("product_type").toString();
    QString product_version = data.value("product_version").toString();
    QString kernel_version = data.value("kernel_version").toString();

    QString s_data = cpu_name + "|" + cpu_id + "|" + disk_id + "|" +
            main_id + "|" + product_type + "|" + product_version + "|" +
            kernel_version;
    QByteArray base64 = s_data.toUtf8().toBase64(QByteArray::OmitTrailingEquals);

    QFile file("hd_info.dat");
    file.open(QFile::WriteOnly);
    file.write(base64);
    file.close();

    QMessageBox::information(dd, "HeardInfo", "创建系统信息文件完成.");
}

#include "widget.moc"

Widget::Widget(QWidget *iParent)
    : QWidget(iParent),
      dp(new WidgetPrivate(this))
{
    this->setFixedSize(700, 210);

    dp->initLayout();
    dp->setUiData();
}

Widget::~Widget()
{
}
