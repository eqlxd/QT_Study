#include "widget.h"
#include <QApplication>
#include <gwidget/gruninfowidget.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    GRunInfoWidget::installMessageHandler();

    Widget w;
    w.show();

    return a.exec();
}
