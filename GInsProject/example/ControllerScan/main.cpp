#include "ScanDialog.h"
#include "democtrlchosen.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DemoCtrlChosen w;
    w.show();
    return a.exec();
}
