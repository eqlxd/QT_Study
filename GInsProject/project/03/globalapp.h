#ifndef GLOBALAPP_H
#define GLOBALAPP_H

#include <gglobal/dpoint.h>
#include <gglobal/singleton.h>
#include <GInsData/GInsDataInterface.hpp>
#include <QObject>

#if defined(GApp)
#undef GApp
#endif
#define GApp GlobalApp::instance()

class GiWriter;
class GlobalApp : public QObject
{
    Q_OBJECT
    G_DECLARE_DP(GlobalApp)
    SINGLETON(GlobalApp, QObject)
public:
    void setUdbfConfig(const QVariantMap &iData);
    QVariantMap getUdbfConfig(bool iReset = false);

    bool connectDevice(const QString &iIp);
    bool isConnect();

    // read
    void initReadHeader();
    QVariant getReaderHeader(const QString &iName);
    QVariantList getVariables();
    size_t getFrameWidth();

    // write
    bool initWriteBuffer(const QString &iBufferName, const size_t &iBufferSize, const size_t &iSegmentSize);
    bool setWriteheader(const double &iDataRate, bool iReset = false);
    bool addChannles(const QVariantList &iChannelList);
    bool readyToWrite();
    // run in thread
    void write(const qulonglong &iTimestamp, const QMap<QString, double> &iData);

    // UDBF file
    bool initFileBuffer(const QString &iPath, const double &iDataRate, const QVariantList &iChannelList, const size_t iMaxFileLen = 3600);
    void closeFileBuffer();

    GiWriter *getWriter();

    static QString variant2JsonString(const QVariant &iVariant, QString *oError = nullptr);
    static QVariant jsonString2Variant(const QString &iString, QString *oError = nullptr);

    static bool createFile(const QString &iFileName, const QString &iData,
                           const QString &iCode = QString("UTF-8"), bool iBomHead = true,
                           bool iAppend = false);
    static QString fileString(const QString &iFileName, bool *oOk = nullptr,
                              const QString &iCode = QString("UTF-8"));

signals:
    void deviceConnectOk();
    void dataReaded(const QVariantMap &);


public slots:
    void startReading();
    void endReading();

    void startWriting();
    void endWriting();
    bool isWriting();

public:
    // input
    GIns::Data::GInsDataSourcePtr m_dataSource;
    // output buffer
    GIns::Data::GInsDataBufferPtr m_writeBuffer;
    GIns::Data::GInsDataHeaderPtr m_writeHeader;
    GIns::Data::FrameBuffer m_frameBuffer;
    std::vector<GIns::Data::IGInsVariablePtr> m_writeChannels;
};

#endif // GLOBALAPP_H
