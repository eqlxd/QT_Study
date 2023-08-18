#include "widget/mainwindow.h"
#include <gwidget/gruninfowidget.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    GRunInfoWidget::installMessageHandler();

    MainWindow w;
    w.initLayout();
    w.show();

    return a.exec();
}
