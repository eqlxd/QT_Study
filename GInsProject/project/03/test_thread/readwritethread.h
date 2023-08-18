#ifndef READWRITETHREAD_H
#define READWRITETHREAD_H

#include <gglobal/dpoint.h>
#include <QThread>
#include <GInsData/GInsDataInterface.hpp>

class ReadWriteThread : public QThread
{
    Q_OBJECT
    G_DECLARE_DP(ReadWriteThread)
public:
    explicit ReadWriteThread(QObject *iParent = nullptr);

    void setDataSource(GIns::Data::GInsDataSourcePtr iPtr);
    void setStop();

protected:
    void run() override;
};

#endif // READWRITETHREAD_H
