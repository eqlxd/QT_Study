#include "randomdatathread.h"
#include <QDebug>
#include <QRandomGenerator>
#include <QEventLoop>
#include <QTimer>

RandomDataThread::RandomDataThread(QObject *iParent)
    : QThread(iParent)
{
    m_timer = new QTimer;
    m_timer->setInterval(5000);
    m_timer->setSingleShot(true);
    m_timer->start();
}

void RandomDataThread::run()
{
    QEventLoop loop;
    QTimer::singleShot(3000, &loop, &QEventLoop::quit);
    loop.exec();

    QList<int> data_list;
    int count = 1;

#if 1
    while (true && count)
    {
        while (data_list.count() < 1000)
        {
            data_list << QRandomGenerator::global()->bounded(1, 100);
        }
        emit dataChanged(data_list);

        QTimer::singleShot(1000, &loop, &QEventLoop::quit);
        loop.exec();

        count--;
    }
#else
    while (true)
    {
        data_list << QRandomGenerator::global()->bounded(1, 100);
        emit dataChanged(data_list);
//        qDebug() << "data_list.count()=" << data_list.count();

        QTimer::singleShot(100, &loop, &QEventLoop::quit);
        loop.exec();
    }
#endif



//    data_list << 0 << 1 << 2;
//    emit dataChanged(data_list);
}
