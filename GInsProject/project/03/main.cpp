#include "widget/test_mainwindow.h"
#include "widget/mainwindow.h"
#include <gwidget/gruninfowidget.h>
#include <gglobal/license.h>
#include <QApplication>
#include <QMessageBox>
#include <QFile>
#include <QSettings>

#pragma execution_character_set("utf-8")

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 1. 校验授权信息
    QFile file("license.dat");
    if (!file.open(QFile::ReadOnly))
    {
        QString error_msg = QString("打开授权文件失败！\n错误：%1").arg(file.errorString());
        QMessageBox::critical(nullptr, "Rosetts & PCB Strain Rate", error_msg);
        return 0;
    }

    QSettings setting("config.ini", QSettings::IniFormat);
    setting.beginGroup("License");
    int lic_type = setting.value("Type", 0).toInt();
    setting.endGroup();

    QByteArray lic_data;
    if (lic_type == 1)
    {
        lic_data = file.readAll();
    }
    else if (lic_type == 2)
    {
        QString file_data =file.readAll();
        lic_data = QByteArray::fromHex(file_data.toUtf8());
    }
    file.close();

    GLicense lic;
    if (!lic.authentication(lic_data))
    {
        QMessageBox::critical(nullptr, "Rosetts & PCB Strain Rate", "授权文件校验失败！");
        return 0;
    }

    // 2.
    GRunInfoWidget::installMessageHandler();

    // 3.
#if 1
    MainWindow w;
#else
    TestMainWindow w;
#endif
    w.show();

    return a.exec();
}
