#include <QCoreApplication>
#include <MacWB.h>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int num0;
    num0= 2;
 //   qDebug() <<MyBrackets(num0);
    qDebug() <<MyBrackets02("s00","s01");

    return a.exec();

}
