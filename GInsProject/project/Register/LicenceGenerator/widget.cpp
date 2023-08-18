#include "widget.h"
#include <gglobal/license.h>
#include <QDebug>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QFile>
#include <QMessageBox>
#include <QFileDialog>

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

    QLineEdit *m_path = nullptr;

public:
    void initLayout();

public slots:
    void onSetPath();
    void onGenerate();
};

void WidgetPrivate::initLayout()
{
    QLabel *label = new QLabel("系统信息路径:", dd);
    m_path = new QLineEdit(dd);
    QVBoxLayout *vbox1 = new QVBoxLayout;
    vbox1->addWidget(label, 0, Qt::AlignLeft);
    vbox1->addWidget(m_path);
    vbox1->addStretch();

    QPushButton *btn1 = new QPushButton("选择系统信息文件", dd);
    QPushButton *btn2 = new QPushButton("制作授权文件", dd);
    connect(btn1, &QPushButton::clicked, this, &WidgetPrivate::onSetPath);
    connect(btn2, &QPushButton::clicked, this, &WidgetPrivate::onGenerate);

    QVBoxLayout *vbox2 = new QVBoxLayout;
    vbox2->setContentsMargins(50, 10, 50, 5);
    vbox2->addWidget(btn1);
    vbox2->addWidget(btn2);

    QVBoxLayout *main_box = new QVBoxLayout(dd);
    main_box->addLayout(vbox1);
    main_box->addLayout(vbox2);
}

void WidgetPrivate::onSetPath()
{
    QString file_name = QFileDialog::getOpenFileName(dd, "选择系统信息文件", QString(), "*.dat");
    qDebug() << file_name;
    if (file_name.isEmpty())
        return;

    m_path->setText(QDir::toNativeSeparators(file_name));
}

void WidgetPrivate::onGenerate()
{
    QString file_name = m_path->text();
    qDebug() << file_name;
    if (file_name.isEmpty())
        return;

    QFile file(file_name);
    file.open(QFile::ReadOnly);
    QByteArray hd_data =  QByteArray::fromBase64(file.readAll(), QByteArray::OmitTrailingEquals);
    QStringList list = QString(hd_data).split("|");
    qDebug() << list;
    file.close();

    QVariantMap info_data;
    info_data.insert("cpu_name", list.at(0));
    info_data.insert("cpu_id", list.at(1));
    info_data.insert("disk_id", list.at(2));
    info_data.insert("main_id", list.at(3));
    info_data.insert("product_type", list.at(4));
    info_data.insert("product_version", list.at(5));
    info_data.insert("kernel_version", list.at(6));

    file.setFileName("license.dat");
    if (!file.open(QFile::WriteOnly | QFile::Truncate))
    {
        QString error_msg = QString("创建授权文件失败！\n错误：%1").arg(file.errorString());
        QMessageBox::warning(dd, "制作授权文件", error_msg);
        return;
    }

    GLicense license;
    QByteArray lic_data = license.generate(info_data);
    file.write(lic_data);
    file.close();

    QMessageBox::information(dd, "制作授权文件", "授权文件制作完成.");
}

#include "widget.moc"

Widget::Widget(QWidget *iParent)
    : QWidget(iParent),
      dp(new WidgetPrivate(this))
{
    this->setFixedSize(600, 230);

    dp->initLayout();
}

Widget::~Widget()
{
}
