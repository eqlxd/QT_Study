#include "globalapp.h"
#include "readbuffer.h"
#include "giwriter.h"
#include "udbfwriter.h"
#include <QDebug>
#include <QThread>
#include <QFile>
#include <QDir>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QSettings>

using namespace std;

/***************************** GlobalAppPrivate *****************************/
class GlobalAppPrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(GlobalApp)
public:
    explicit GlobalAppPrivate(GlobalApp *iParent)
      : QObject(iParent), dd(iParent)
    {
        Q_UNUSED(dd);
    }

    bool m_connectFlag  =false;

    ReadBuffer *m_readBuffer = nullptr;
    QVariantMap m_readHeader;

    GiWriter *m_writer = nullptr;
    QThread *m_thread = nullptr;

    UdbfWriter *m_udbf = nullptr;
    QThread *m_udbfThread = nullptr;

    QString m_writeBufferName;
    QString m_writeBufferId;

    GIns::Data::IGInsVariablePtr m_timestamp;
    char *m_buffer = nullptr;

    QVariantMap m_udbfConfig;
};

#include "globalapp.moc"

/***************************** GlobalApp *****************************/
GlobalApp::GlobalApp(QObject *iParent)
    : QObject{iParent},
      dp(new GlobalAppPrivate(this))
{
    qRegisterMetaType<QMap<QString,double>>("QMap<QString,double> &");
}

GlobalApp::~GlobalApp()
{
    if (dp->m_buffer)
    {
        delete[] dp->m_buffer;
        dp->m_buffer = nullptr;
    }
}

void GlobalApp::setUdbfConfig(const QVariantMap &iData)
{
    QSettings setting("config.ini", QSettings::IniFormat);

    setting.beginGroup("UDBF");
    QStringList key_list = iData.keys();
    for (const QString &key : qAsConst(key_list))
    {
        setting.setValue(key, iData.value(key));
    }
    setting.endGroup();
}

QVariantMap GlobalApp::getUdbfConfig(bool iReset)
{
    if (dp->m_udbfConfig.isEmpty() || iReset)
    {
        QSettings setting("config.ini", QSettings::IniFormat);
        setting.beginGroup("UDBF");
        QString path = setting.value("save_path", QString()).toString();
        setting.endGroup();

        setting.beginGroup("ReadBuffer");
        int buffer_index = setting.value("buffer_index", 0).toInt();
        setting.endGroup();

        dp->m_udbfConfig.clear();
        dp->m_udbfConfig.insert("save_path", path);
        dp->m_udbfConfig.insert("buffer_index", buffer_index);
    }
    qDebug() << "m_udbfConfig=" << dp->m_udbfConfig;

    return dp->m_udbfConfig;
}

bool GlobalApp::connectDevice(const QString &iIp)
{
    QVariantMap cfg = getUdbfConfig();
    int buffer_index = cfg.value("buffer_index", 0).toInt();

    m_dataSource = GIns::Data::IGInsDataSource::CreateIGInsDataSourcePtr(iIp.toStdString(), buffer_index);
    if (!m_dataSource)
        return false;

    dp->m_readBuffer = new ReadBuffer(this);
    connect(dp->m_readBuffer, &ReadBuffer::dataReaded, this, &GlobalApp::dataReaded);

    dp->m_connectFlag = true;
    qInfo() << "create data source index=" << buffer_index;

    return true;
}

bool GlobalApp::isConnect()
{
    return dp->m_connectFlag;
}

void GlobalApp::initReadHeader()
{
    QString serial_number = m_dataSource->HeaderInterface()->GetSerialNumber();
    double data_rate = m_dataSource->HeaderInterface()->GetDataRateHz();
    int var_count = m_dataSource->HeaderInterface()->GetVariableCount();

    dp->m_readHeader.insert("serial_number", serial_number);
    dp->m_readHeader.insert("data_rate", data_rate);
    dp->m_readHeader.insert("var_count", var_count);
}

QVariant GlobalApp::getReaderHeader(const QString &iName)
{
    return dp->m_readHeader.value(iName, QVariant());
}

QVariantList GlobalApp::getVariables()
{
    if (!m_dataSource)
        return QVariantList();

    vector<GIns::Data::IGInsVariablePtr> var_list;
    m_dataSource->HeaderInterface()->GetGInsVariables(var_list);

    QVariantList result;
    for (const auto &it : var_list)
    {
        QString id = it->GetID();
        QString name = it->GetName();
        QString unit = it->GetUnit();
        size_t data_size = it->GetDataSize();
        int field_len = it->GetFieldLen();
        int precision = it->GetPrecision();

        QVariantMap item;
        item.insert("id", id);
        item.insert("name", name);
        item.insert("unit", unit);
        item.insert("data_size", data_size);
        item.insert("field_len", field_len);
        item.insert("precision", precision);
        result.append(item);
    }

    return result;
}

size_t GlobalApp::getFrameWidth()
{
    return m_dataSource->GetFrameWidth();
}

bool GlobalApp::initWriteBuffer(const QString &iBufferName, const size_t &iBufferSize, const size_t &iSegmentSize)
{
    // 1. Gi
    std::string buffer_id;
    m_writeBuffer = GIns::Data::IGInsDataBuffer::Create(iBufferName.toStdString(),
                                                           buffer_id, iBufferSize, iSegmentSize);
    if (!m_writeBuffer)
    {
        string error_msg;
        m_dataSource->GetLastError(error_msg);
        qCritical() << "create data buffer failed! error=" << QString::fromStdString(error_msg);

        GIns::Data::IGInsDataBuffer::Delete(m_writeBuffer);
        return false;
    }

    dp->m_writeBufferName = iBufferName;
    dp->m_writeBufferId = QString::fromStdString(buffer_id);

    // 2. thread
    dp->m_writer = new GiWriter;
    dp->m_thread = new QThread;
    dp->m_writer->moveToThread(dp->m_thread);

    // windows / linux placeholders写法不同!!
    auto callback = std::bind(&GlobalApp::write, GApp, std::placeholders::_1, std::placeholders::_2);
    dp->m_writer->setWriteCallback(callback);

    return true;
}

bool GlobalApp::setWriteheader(const double &iDataRate, bool iReset)
{
    if (!iReset)
    {
        m_writeHeader = GIns::Data::IGInsDataHeader::Create();
        m_writeHeader->SetTimestampConfiguration(36526, 1, 0.000000001, TTransferFormat::TransferFormatUSInt64);
        m_writeHeader->SetDataRate(iDataRate);
        m_writeHeader->SetDataSourceInfo(dp->m_writeBufferId.toStdString().c_str(), dp->m_writeBufferName.toStdString().c_str());
    }
    else
    {
        GIns::Data::GInsDataHeaderPtr swap_header = GIns::Data::IGInsDataHeader::Create();
        swap_header->SetTimestampConfiguration(36526, 1, 0.000000001, TTransferFormat::TransferFormatUSInt64);
        swap_header->SetDataRate(iDataRate);
        swap_header->SetDataSourceInfo(dp->m_writeBufferId.toStdString().c_str(), dp->m_writeBufferName.toStdString().c_str());
        m_writeHeader.swap(swap_header);
    }

    return m_writeBuffer->SetHeader_Object(m_writeHeader);
}

bool GlobalApp::addChannles(const QVariantList &iChannelList)
{
    if (!m_writeHeader)
    {
        qWarning() << "m_writeHeader is nullptr!";
        return false;
    }

    for (const QVariant &iVar : iChannelList)
    {
        QVariantMap var_map = iVar.toMap();

        QString var_name = var_map.value("name").toString();
        QString var_unit = var_map.value("unit").toString();
        int var_precision = var_map.value("precision").toInt();
        int var_filed_len = var_map.value("field_len").toInt();
        bool add_rtn = m_writeHeader->AddVariable_New(var_name.toStdString().c_str(),
                                          var_unit.toStdString().c_str(),
                                          TransferFormatDouble,
                                          (unsigned short)var_precision,
                                          (unsigned short)var_filed_len);
        if (!add_rtn)
            return false;
    }

    return m_writeBuffer->SetHeader_Object(m_writeHeader);
}

bool GlobalApp::readyToWrite()
{
    if (!m_writeChannels.empty())
    {
        m_writeChannels.clear();
    }

    if (dp->m_buffer)
    {
        delete[] dp->m_buffer;
        dp->m_buffer = nullptr;
    }

    size_t frame_length = m_writeHeader->GetDataFrameLength();
    uint16_t rtn = m_writeHeader->GetGInsVariables(m_writeChannels);
    if (rtn != m_writeChannels.size())
    {
        qWarning() << "readyToWrite GetGInsVariables error! rtn=" << rtn;
        return false;
    }

    dp->m_timestamp = m_writeHeader->GetGInsTimestampVariable();
    m_frameBuffer.SetFrameWidth(frame_length);
    if (!m_writeBuffer->InitializeFrame(m_frameBuffer))
    {
        qCritical() << "InitializeFrame error!";
        GIns::Data::IGInsDataBuffer::Delete(m_writeBuffer);
        return false;
    }

    dp->m_buffer = new char[frame_length];
    m_frameBuffer.SetDataSourcePointer(dp->m_buffer, frame_length);

#if 0
    {
        qDebug() << __FUNCTION__ << "m_writeChannels.size()=" << m_writeChannels.size() << "frame_length=" << frame_length;
        for (auto it = m_writeChannels.begin(); it != m_writeChannels.end(); ++it)
        {
            qDebug() << __FUNCTION__ << "ch_name=" << it->get()->GetName();
        }
    }
#endif

    return true;
}

void GlobalApp::write(const qulonglong &iTimestamp, const QMap<QString, double> &iData)
{
    if (m_writeChannels.empty() || iData.isEmpty())
    {
        qDebug() << m_writeChannels.size() << iData.size();
        return;
    }

    dp->m_timestamp->CopyDataToInputFrame((char *)&iTimestamp , dp->m_buffer);
    for (auto it = m_writeChannels.begin(); it != m_writeChannels.end(); ++it)
    {
        double value = iData.value(it->get()->GetName());
#ifdef QT_DEBUG
        qDebug() << iTimestamp << it->get()->GetName() << value; // << "\n";
#endif
        it->get()->ConvertFromDoubleToInputFrame(value, dp->m_buffer);
    }
    m_writeBuffer->AppendDataFrames(m_frameBuffer);
}

bool GlobalApp::initFileBuffer(const QString &iPath, const double &iDataRate, const QVariantList &iChannelList, const size_t iMaxFileLen)
{
    if (!dp->m_udbf)
    {
        dp->m_udbf = new UdbfWriter;
        dp->m_udbfThread = new QThread;
        dp->m_udbf->moveToThread(dp->m_udbfThread);
        dp->m_udbfThread->start();
    }

    if (dp->m_udbf->isInit())
        return true;

    if (!dp->m_udbf->init(iPath, iDataRate, iChannelList, iMaxFileLen, dp->m_writeBufferId, dp->m_writeBufferName))
        return false;

    connect(dp->m_writer, &GiWriter::resultData, dp->m_udbf, &UdbfWriter::writeUdbf);

    return true;
}

void GlobalApp::closeFileBuffer()
{
    if (dp->m_udbf)
    {
        disconnect(dp->m_writer, &GiWriter::resultData, dp->m_udbf, &UdbfWriter::writeUdbf);

        dp->m_udbfThread->quit();
        dp->m_udbfThread->wait();

        delete dp->m_udbf;
        dp->m_udbf = nullptr;

        delete dp->m_udbfThread;
        dp->m_udbfThread = nullptr;
    }
}

GiWriter *GlobalApp::getWriter()
{
    return dp->m_writer;
}

QString GlobalApp::variant2JsonString(const QVariant &iVariant, QString *oError)
{
    if (iVariant.type() == QVariant::List)
    {
        return QString(QJsonDocument(QJsonArray::fromVariantList(iVariant.toList())).toJson());
    }
    else if (iVariant.type() == QVariant::StringList)
    {
        return QString(QJsonDocument(QJsonArray::fromStringList(iVariant.toStringList())).toJson());
    }
    else if (iVariant.type() == QVariant::Map)
    {
        return QString(QJsonDocument(QJsonObject::fromVariantMap(iVariant.toMap())).toJson());
    }

    if (oError)
    {
        *oError = iVariant.toString();
    }

    return QString();
}

QVariant GlobalApp::jsonString2Variant(const QString &iString, QString *oError)
{
    QJsonParseError json_parse_err;
    QJsonDocument json_doc = QJsonDocument::fromJson(iString.toUtf8(), &json_parse_err);
    if (json_parse_err.error != QJsonParseError::NoError)
    {
        if (oError)
        {
            *oError = json_parse_err.errorString();
        }
        return QVariant();
    }

    return json_doc.toVariant();
}

bool GlobalApp::createFile(const QString &iFileName, const QString &iData, const QString &iCode, bool iBomHead, bool iAppend)
{
    QIODevice::OpenMode flags = QIODevice::WriteOnly | QIODevice::Text;
    if (iAppend)
        flags |= QIODevice::Append;

    QFile file(QDir::toNativeSeparators(iFileName));
    if (!file.open(flags))
        return false;

    QTextStream stream(&file);
    if (iCode.startsWith("UTF", Qt::CaseInsensitive))
    {
        stream.setCodec(iCode.toStdString().c_str());
        stream.setGenerateByteOrderMark(iBomHead);
    }
    stream << iData;
    file.close();

    return true;
}

QString GlobalApp::fileString(const QString &iFileName, bool *oOk, const QString &iCode)
{
    QFile file(QDir::toNativeSeparators(iFileName));
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        if (oOk)
        {
            *oOk = false;
        }
        return QString();
    }

    QTextStream stream(&file);
    stream.setCodec(iCode.toStdString().c_str());
    QString result = stream.readAll();
    file.close();

    /* remove UTF BOM */
    if (iCode.startsWith("UTF", Qt::CaseInsensitive))
    {
        if (result.at(0) == 0xEF && result.at(1) == 0xBB && result.at(2) == 0xBF)
        {
            result.remove(0, 3);
        }
    }

    if (oOk)
    {
        *oOk = true;
    }

    return result;
}

void GlobalApp::startReading()
{
    dp->m_readBuffer->startReading();
}

void GlobalApp::endReading()
{
    if (!dp->m_readBuffer)
        return;

    dp->m_readBuffer->endReading();
}

void GlobalApp::startWriting()
{
    if (dp->m_thread->isRunning())
    {
        qWarning() << "bufer write thread already running!";
        return;
    }

    dp->m_thread->start();
    connect(this, &GlobalApp::dataReaded, dp->m_writer, &GiWriter::onWrite2);
}

void GlobalApp::endWriting()
{
    if (dp->m_writer)
    {
        disconnect(this, &GlobalApp::dataReaded, dp->m_writer, &GiWriter::onWrite2);

        delete dp->m_writer;
        dp->m_writer = nullptr;
    }

    if (dp->m_thread)
    {
        dp->m_thread->quit();
        dp->m_thread->wait();
    }
}

bool GlobalApp::isWriting()
{
    if (!dp->m_thread)
    {
        qWarning() << "m_thread not create!";
        return true;
    }

    return dp->m_thread->isRunning();
}
