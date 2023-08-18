#include <QCoreApplication>
#include <QMap>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QMap<QString, int> map;
    map["one"] = 1;
    map["three"] = 3;
    map["seven"] = 7;
    map.insert("twelve", 12);
    int num1 = map["one"];
    int num2 = map["three"];
    int num3 = map["two"];
    qDebug()<<num1<<'\n';
    qDebug()<<num2<<'\n';
    qDebug()<<num3<<'\n';
    qDebug()<<map<<'\n';

    return a.exec();
}
