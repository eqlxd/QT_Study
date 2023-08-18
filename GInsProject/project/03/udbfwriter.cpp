#include "udbfwriter.h"
#include "globalapp.h"
#include <QDebug>

/***************************** UdbfWriterPrivate *****************************/
class UdbfWriterPrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(UdbfWriter)
public:
    explicit UdbfWriterPrivate(UdbfWriter *iParent)
      : QObject(iParent), dd(iParent)
    {
        Q_UNUSED(dd);
    }

    GIns::Data::GInsDataBufferPtr m_fileBuffer;
    GIns::Data::GInsDataHeaderPtr m_fileHeader;
    GIns::Data::FrameBuffer m_udbfFrameBuffer;
    std::vector<GIns::Data::IGInsVariablePtr> m_fileChannels;

    GIns::Data::IGInsVariablePtr m_timestamp;
    char *m_buffer = nullptr;

    bool m_isInit = false;
};

#include "udbfwriter.moc"

/***************************** UdbfWriter *****************************/
UdbfWriter::UdbfWriter(QObject *iParent)
    : QObject{iParent},
      dp(new UdbfWriterPrivate(this))
{
}

bool UdbfWriter::init(const QString &iPath, const double &iDataRate, const QVariantList &iChannelList,
                      const size_t iMaxFileLen, const QString &iBufferName, const QString &iBufferId)
{
    // 1. create file
    dp->m_fileBuffer = GIns::Data::IGInsDataBuffer::Create_UDBFFile(iPath.toStdString(), iMaxFileLen, 0);
    if (!dp->m_fileBuffer)
    {
        qWarning() << "create UDBF buffer failed!";
        return false;
    }
    qDebug() << __FUNCTION__ << "Create_UDBFFile ok.";

    // 2. create header
    dp->m_fileHeader = GIns::Data::IGInsDataHeader::Create();
    dp->m_fileHeader->SetTimestampConfiguration(36526, 1, 0.000000001, TTransferFormat::TransferFormatUSInt64);
    dp->m_fileHeader->SetDataRate(iDataRate);
    dp->m_fileHeader->SetDataSourceInfo(iBufferName.toStdString().c_str(), iBufferId.toStdString().c_str());
    qDebug() << __FUNCTION__ << "Create header ok.";

    // 3. add channel
    for (const QVariant &iVar : iChannelList)
    {
        QVariantMap var_map = iVar.toMap();

        QString var_name = var_map.value("name").toString();
        QString var_unit = var_map.value("unit").toString();
        int var_precision = var_map.value("precision").toInt();
        int var_filed_len = var_map.value("field_len").toInt();
        bool add_rtn = dp->m_fileHeader->AddVariable_New(var_name.toStdString().c_str(),
                                          var_unit.toStdString().c_str(),
                                          TransferFormatDouble,
                                          (unsigned short)var_precision,
                                          (unsigned short)var_filed_len);
        if (!add_rtn)
        {
            qWarning() << "UDBF add var failed！ var_name=" << var_name;
            return false;
        }
    }
    dp->m_fileBuffer->SetHeader_Object(dp->m_fileHeader);
    qDebug() << __FUNCTION__ << "SetHeader_Object ok.";

    // 4. init frame
    uint16_t rtn = dp->m_fileHeader->GetGInsVariables(dp->m_fileChannels);
    if (rtn != dp->m_fileChannels.size())
    {
        qWarning() << "udbf GetGInsVariables error! rtn=" << rtn;
        return false;
    }
    qDebug() << __FUNCTION__ << "GetGInsVariables rtn=" << rtn << "dp->m_fileChannels.size()=" << dp->m_fileChannels.size();

    size_t frame_length = dp->m_fileHeader->GetDataFrameLength();
    dp->m_timestamp = dp->m_fileHeader->GetGInsTimestampVariable();
    dp->m_udbfFrameBuffer.SetFrameWidth(frame_length);
    if (!dp->m_fileBuffer->InitializeFrame(dp->m_udbfFrameBuffer))
    {
        qCritical() << "udbf InitializeFrame error!";
        GIns::Data::IGInsDataBuffer::Delete(dp->m_fileBuffer);
        return false;
    }
    qDebug() << __FUNCTION__ << "InitializeFrame ok.  frame_length=" << frame_length;

    dp->m_buffer = new char[frame_length];
    dp->m_udbfFrameBuffer.SetDataSourcePointer(dp->m_buffer, frame_length);
    qDebug() << __FUNCTION__ << "SetDataSourcePointer";

    dp->m_isInit = true;

    return true;
}

bool UdbfWriter::isInit()
{
    return dp->m_isInit;
}

void UdbfWriter::writeUdbf(const qulonglong &iTimestamp, const QMap<QString, double> &iData)
{
    dp->m_timestamp->CopyDataToInputFrame((char *)&iTimestamp , dp->m_buffer);
    for (auto it = dp->m_fileChannels.begin(); it != dp->m_fileChannels.end(); ++it)
    {
        double value = iData.value(it->get()->GetName());
        it->get()->ConvertFromDoubleToInputFrame(value, dp->m_buffer);
    }
    dp->m_fileBuffer->AppendDataFrames(dp->m_udbfFrameBuffer);
}
