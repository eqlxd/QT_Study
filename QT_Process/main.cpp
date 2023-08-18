#include <QCoreApplication>
#include <QProcess>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QProcess p;
    p.start(iCmd);
    p.waitForFinished();
    return a.exec();
}
