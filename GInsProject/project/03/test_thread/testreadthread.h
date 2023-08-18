#ifndef TESTREADTHREAD_H
#define TESTREADTHREAD_H

#include <gglobal/dpoint.h>
#include <QThread>
#include <GInsData/GInsDataInterface.hpp>

class TestReadThread : public QThread
{
    Q_OBJECT
    G_DECLARE_DP(TestReadThread)
public:
    explicit TestReadThread(QObject *iParent = nullptr);

    void setDataSource(GIns::Data::GInsDataSourcePtr iPtr);
    void setStop();

protected:
    void run() override;
};

#endif // TESTREADTHREAD_H
