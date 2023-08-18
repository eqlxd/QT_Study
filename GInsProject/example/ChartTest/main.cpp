#include "randomdatathread.h"
#include "widget.h"
#include "chartwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qRegisterMetaType< QList<int> >("QList<int>&");

    ChartWidget *qchart_widget = new  ChartWidget;
    qchart_widget->init();
    qchart_widget->show();
    qchart_widget->move(100, 50);


    Widget w;
    w.show();
    w.move(100, 700);

    RandomDataThread *thread = new RandomDataThread;
    thread->start();

    QObject::connect(thread, &RandomDataThread::dataChanged, &w, &Widget::setData);
    QObject::connect(thread, &RandomDataThread::dataChanged, qchart_widget, &ChartWidget::setData);

    return a.exec();
}
