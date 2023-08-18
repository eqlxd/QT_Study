#ifndef READBUFFER_H
#define READBUFFER_H

#include <gglobal/dpoint.h>
#include <GInsData/GInsDataInterface.hpp>
#include <QObject>

class ReadBuffer : public QObject
{
    Q_OBJECT
    G_DECLARE_DP(ReadBuffer)
public:
    explicit ReadBuffer(QObject *iParent = nullptr);

signals:
    void dataReaded(const QVariantMap &);

public slots:
    void startReading();
    void endReading();
};

#endif // READBUFFER_H
