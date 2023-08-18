#include "widget.h"
#include <gglobal/license.h>
#include <QProcess>
#include <QApplication>
#include <QFile>

#pragma execution_character_set("utf-8")

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString exe_name = a.applicationDisplayName() + ".exe";
    QProcess process;
    process.start("tasklist", QStringList() << "/FI" << "imagename eq " + exe_name);
    process.waitForFinished(1000);

    QString tasks = QString::fromLocal8Bit(process.readAll());
    int pos = tasks.indexOf(exe_name);
    bool contains = tasks.midRef(pos + 14).contains(exe_name);
    if (contains)
        return 0;

    QFile file("license.dat");
    if (!file.open(QFile::ReadOnly))
    {
        QString error_msg = QString("打开授权文件失败！\n错误：%1").arg(file.errorString());
        QMessageBox::critical(nullptr, "Rosetts & PCB Strain Rate", error_msg);
        return 0;
    }

    QByteArray file_data = file.readAll();
    file.close();

    GLicense lic;
    if (!lic.authentication(file_data))
    {
        QMessageBox::critical(nullptr, "Rosetts & PCB Strain Rate", "授权文件校验失败！");
        return 0;
    }

    Widget w;
    w.show();

    return a.exec();
}
