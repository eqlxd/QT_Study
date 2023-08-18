#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QDir>
#include <QFile>
#include <QDataStream>
#include <QCryptographicHash>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    m_license = new GLicense(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_get_info_button_clicked()
{
    qDebug() << __FUNCTION__;

    QVariantMap info = m_license->getSystemInfo();
    QString cpu_name = info.value("cpu_name").toString();
    QString cpu_id = info.value("cpu_id").toString();
    QString disk_id = info.value("disk_id").toString();
    QString main_id = info.value("main_id").toString();
    QString product_type = info.value("product_type").toString();
    QString product_version = info.value("product_version").toString();
    QString kernel_version = info.value("kernel_version").toString();

    QString s_data = cpu_name + "|" + cpu_id + "|" + disk_id + "|" +
            main_id + "|" + product_type + "|" + product_version + "|" +
            kernel_version;
    qDebug() << s_data;
    QByteArray base64 = s_data.toUtf8().toBase64(QByteArray::OmitTrailingEquals);
    qDebug() << base64;

    QFile file("hd_info.dat");
    file.open(QFile::WriteOnly);
    file.write(base64);
    file.close();

    qDebug() << "=============================";
    QByteArray de_data = QByteArray::fromBase64(base64, QByteArray::OmitTrailingEquals);
    qDebug() << de_data;
}


void Widget::on_generate_button_clicked()
{
    QFile file("hd_info.dat");
    file.open(QFile::ReadOnly);
    QByteArray hd_data =  QByteArray::fromBase64(file.readAll(), QByteArray::OmitTrailingEquals);
    QStringList list = QString(hd_data).split("|");
    qDebug() << list;
    file.close();

    QVariantMap data_map;
    data_map.insert("cpu_name", list.at(0));
    data_map.insert("cpu_id", list.at(1));
    data_map.insert("disk_id", list.at(2));
    data_map.insert("main_id", list.at(3));
    data_map.insert("product_type", list.at(4));
    data_map.insert("product_version", list.at(5));
    data_map.insert("kernel_version", list.at(6));
    QByteArray lic_data = m_license->generate(data_map);

    QFile file2("test_license.dat");
    if (!file2.open(QFile::WriteOnly | QFile::Truncate))
    {
        qDebug() << file.errorString();
        return;
    }
    qDebug() << "open ok.";

    file2.write(lic_data);
    file2.close();
    qDebug() << "file close.";
}


void Widget::on_auth_button_clicked()
{
    QFile file("test_license.dat");
    file.open(QFile::ReadOnly);
    QByteArray file_data = file.readAll();
    file.close();

    qDebug() << "auth=" <<  m_license->authentication(file_data);
}

