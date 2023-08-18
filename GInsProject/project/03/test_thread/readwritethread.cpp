#include "readwritethread.h"
#include <GInsData/GInsTime.h>
#include <QDebug>

using namespace std;

/***************************** ReadWriteThreadPrivate *****************************/
class ReadWriteThreadPrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(ReadWriteThread)
public:
    explicit ReadWriteThreadPrivate(ReadWriteThread *iParent)
      : QObject(iParent), dd(iParent)
    {
        Q_UNUSED(dd);
    }

    bool m_flag = true;

    GIns::Data::GInsDataSourcePtr m_dataSource;
};

#include "readwritethread.moc"

/***************************** ReadWriteThread *****************************/
ReadWriteThread::ReadWriteThread(QObject *iParent)
    : QThread{iParent},
      dp(new ReadWriteThreadPrivate(this))
{
}

void ReadWriteThread::setDataSource(GIns::Data::GInsDataSourcePtr iPtr)
{
    dp->m_dataSource = iPtr;
}

void ReadWriteThread::setStop()
{
    dp->m_flag = false;
}

void ReadWriteThread::run()
{
    string buffer_name = "ReadWriteTestBuffer";
    string buffer_id;
    size_t buffer_size = 50000000;
    size_t segment_size = 50000000;
    GIns::Data::GInsDataBufferPtr write_stream_buffer = GIns::Data::IGInsDataBuffer::Create(buffer_name, buffer_id, buffer_size, segment_size);
    if (!write_stream_buffer)
    {
        GIns::Data::IGInsDataBuffer::Delete(write_stream_buffer);
        qWarning() << "Create data buffer error!";
        return;
    }
    buffer_id = write_stream_buffer->GetID();
    qDebug() << "buffer_id=" << QString::fromStdString(buffer_id);

    GIns::Data::GInsDataHeaderPtr write_buffer_header = GIns::Data::IGInsDataHeader::Create();

    vector<GIns::Data::IGInsVariablePtr> read_var_list;
    dp->m_dataSource->HeaderInterface()->GetGInsVariables(read_var_list);

    GIns::Data::IGInsVariablePtr read_var_timestamp = dp->m_dataSource->HeaderInterface()->GetGInsTimestampVariable();
    write_buffer_header->SetTimestampConfiguration(36526, 1, 0.000000001, TTransferFormat::TransferFormatUSInt64);

    double sample_rate = dp->m_dataSource->HeaderInterface()->GetDataRateHz();
    write_buffer_header->SetDataRate(sample_rate);
    qDebug() << "sample_rate=" << sample_rate;

    write_buffer_header->SetDataSourceInfo(buffer_id.c_str(), buffer_name.c_str());

    for (const auto &it : read_var_list)
    {
        string read_var_name = it->GetName();
        string read_var_unit = it->GetUnit();
        uint16_t precision = it->GetPrecision();
        uint16_t filed_len = it->GetFieldLen();
        bool rtn = write_buffer_header->AddVariable_New(read_var_name.c_str(), read_var_unit.c_str(), TransferFormatDouble, precision, filed_len);
        if (!rtn)
        {
            qCritical() << "write buffer add variable error! read_var_name=" << QString::fromStdString(read_var_name);
            return;
        }
    }

    write_stream_buffer->SetHeader_Object(write_buffer_header);

////////////////////////////////////////////////////////////////////////////////////////////
    std::vector<GIns::Data::IGInsVariablePtr> write_var_buffer;
    write_stream_buffer->HeaderInterface()->GetGInsVariables(write_var_buffer);
    qDebug() << "write_var_buffer.size()=" << write_var_buffer.size();

    GIns::Data::IGInsVariablePtr write_var_timestamp = write_stream_buffer->HeaderInterface()->GetGInsTimestampVariable();

    GIns::Data::FrameBuffer write_buffer(1);
    write_buffer.SetFrameWidth(write_stream_buffer->HeaderInterface()->GetDataFrameLength());
    if (!write_stream_buffer->InitializeFrame(write_buffer))
    {
        qCritical() << "init frame buffer error!";
        GIns::Data::IGInsDataBuffer::Delete(write_stream_buffer);
        return;
    }

    char *buf = new char[write_stream_buffer->HeaderInterface()->GetDataFrameLength()];
    write_buffer.SetDataSourcePointer(buf, write_stream_buffer->HeaderInterface()->GetDataFrameLength());

//    TOleTime oleTime = ga_GetOleTime_RTC();
//    uint64_t timestamp = ga_GetDCTimeNSFromOLETime(&oleTime);
//    uint64_t nsPerSample = 1000000000 / sample_rate;
//    uint64_t msPerSample = 1000 / sample_rate;

    GIns::Data::FrameBuffer read_buffer(dp->m_dataSource->GetFrameWidth());
    while (dp->m_flag)
    {
        size_t size = 0;
        bool rtn = dp->m_dataSource->GetNextFrames_All(read_buffer, size);
        if (!rtn)
            continue;

        // 一帧一帧的读数据再写
        for (GIns::Data::Frame f = read_buffer.begin(); f != read_buffer.end(); ++f)
        {
            uint64_t timestamp = read_var_timestamp->ConvertFromInputFrameToDCSystemTime(*f);
            write_var_timestamp->CopyDataToInputFrame((char*)&timestamp, buf);
//            timestamp += nsPerSample;

            auto write_it = write_var_buffer.begin();
            for (size_t n = 0; n < read_var_list.size(); ++n, ++write_it)
            {
                double var_data = read_var_list.at(n)->ConvertFromInputFrameToDouble(*f);
                write_it->get()->ConvertFromDoubleToInputFrame(var_data, buf);
            }

            if (!write_stream_buffer->AppendDataFrames(write_buffer))
            {
                qWarning() << "frame buffer append data error!";
            }
        } // End for
    } // End while
}
