#ifndef DATACENTER_H
#define DATACENTER_H

#include <gglobal/dpoint.h>
#include <QObject>

class DataCenter : public QObject
{
    Q_OBJECT
    G_DECLARE_DP(DataCenter)
public:
    explicit DataCenter(QObject *iParent = nullptr);
    ~DataCenter();

signals:

};

#endif // DATACENTER_H
