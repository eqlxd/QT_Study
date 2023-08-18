#ifndef RANDOMDATATHREAD_H
#define RANDOMDATATHREAD_H

#include <QThread>

class RandomDataThread : public QThread
{
    Q_OBJECT
public:
    explicit RandomDataThread(QObject *iParent = nullptr);

    void run() override;

signals:
    void dataChanged(const QList<int> &iDataList);

private:
    QTimer *m_timer = nullptr;
};

#endif // RANDOMDATATHREAD_H
