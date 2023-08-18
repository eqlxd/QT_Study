#ifndef TESTWRITETHREAD_H
#define TESTWRITETHREAD_H

#include <gglobal/dpoint.h>
#include <QThread>
#include <GInsData/GInsDataInterface.hpp>

class TestWriteThread : public QThread
{
    Q_OBJECT
    G_DECLARE_DP(TestWriteThread)
public:
    explicit TestWriteThread(QObject *iParent = nullptr);

    void setDataBuffer(GIns::Data::GInsDataBufferPtr iBuffer);
    void setDataRate(const double &iRate);
    void setStop();

protected:
    void run() override;
};

#endif // TESTWRITETHREAD_H
