#ifndef UDBFWRITER_H
#define UDBFWRITER_H

#include <gglobal/dpoint.h>
#include <GInsData/GInsDataInterface.hpp>
#include <QObject>

class UdbfWriter : public QObject
{
    Q_OBJECT
    G_DECLARE_DP(UdbfWriter)
public:
    explicit UdbfWriter(QObject *iParent = nullptr);

    bool init(const QString &iPath, const double &iDataRate, const QVariantList &iChannelList, const size_t iMaxFileLen,
              const QString &iBufferName, const QString &iBufferId);

    bool isInit();

public slots:
    void writeUdbf(const qulonglong &iTimestamp, const QMap<QString, double> &iData);
};

#endif // UDBFWRITER_H
