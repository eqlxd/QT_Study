#include "ScanDialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ScanDialog w;
    w.show();
    return a.exec();
}
