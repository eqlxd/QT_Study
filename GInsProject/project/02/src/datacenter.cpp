#include "datacenter.h"

/******************************** DataCenterPrivate ********************************/
class DataCenterPrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(DataCenter)
public:
    explicit DataCenterPrivate(DataCenter *iParent)
      : QObject(iParent), dd(iParent)
    {
        Q_UNUSED(dd);
    }
};

#include "datacenter.moc"

/******************************** DataCenter ********************************/
DataCenter::DataCenter(QObject *iParent)
    : QObject{iParent},
      dp(new DataCenterPrivate(this))
{
}

DataCenter::~DataCenter()
{
}
