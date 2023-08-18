#include "testwritethread.h"
#include <GinsData/GInsTime.h>
#include <QDebug>

/***************************** TestWriteThreadPrivate *****************************/
class TestWriteThreadPrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(TestWriteThread)
public:
    explicit TestWriteThreadPrivate(TestWriteThread *iParent)
      : QObject(iParent), dd(iParent)
    {
        Q_UNUSED(dd);
    }

    bool m_flag = true;

    GIns::Data::GInsDataBufferPtr m_streamBuffer;
    double m_sampleRate = 0;
};

#include "testwritethread.moc"

/***************************** WriteThread *****************************/
TestWriteThread::TestWriteThread(QObject *iParent)
    : QThread{iParent},
      dp(new TestWriteThreadPrivate(this))
{
}

void TestWriteThread::setDataBuffer(GIns::Data::GInsDataBufferPtr iBuffer)
{
    dp->m_streamBuffer = iBuffer;
}

void TestWriteThread::setDataRate(const double &iRate)
{
    dp->m_sampleRate = iRate;
}

void TestWriteThread::setStop()
{
    dp->m_flag = false;
}

void TestWriteThread::run()
{
    // vecotor of buffer-variables
    std::vector<GIns::Data::IGInsVariablePtr> var_buffer;
    dp->m_streamBuffer->HeaderInterface()->GetGInsVariables(var_buffer);

    // get timestamp variable
    GIns::Data::IGInsVariablePtr var_timestamp = dp->m_streamBuffer->HeaderInterface()->GetGInsTimestampVariable();

    // init framebuffer
    GIns::Data::FrameBuffer frame_buffer(1);
    frame_buffer.SetFrameWidth(dp->m_streamBuffer->HeaderInterface()->GetDataFrameLength());
    if (!dp->m_streamBuffer->InitializeFrame(frame_buffer))
    {
        qCritical() << "init frame buffer error!";
        GIns::Data::IGInsDataBuffer::Delete(dp->m_streamBuffer);
        return;
    }

    char *buf = new char[dp->m_streamBuffer->HeaderInterface()->GetDataFrameLength()];
    frame_buffer.SetDataSourcePointer(buf, dp->m_streamBuffer->HeaderInterface()->GetDataFrameLength());

    // get start time in DCTimeFormat
    TOleTime oleTime = ga_GetOleTime_RTC();
    uint64_t timestamp = ga_GetDCTimeNSFromOLETime(&oleTime);
    uint64_t nsPerSample = 1000000000 / dp->m_sampleRate;
    uint64_t msPerSample = 1000 / dp->m_sampleRate;

    while (dp->m_flag)
    {
        var_timestamp->CopyDataToInputFrame((char*)&timestamp, buf);
        timestamp += nsPerSample;

        for (std::vector<GIns::Data::IGInsVariablePtr>::iterator it = var_buffer.begin(); it != var_buffer.end(); ++it)
        {
            double value = rand() % 100;
            it->get()->ConvertFromDoubleToInputFrame(value, buf);
        }

        if (!dp->m_streamBuffer->AppendDataFrames(frame_buffer))
        {
            qWarning() << "frame buffer append data error!";
        }
    }

    delete []buf;
    GIns::Data::IGInsDataBuffer::Delete(dp->m_streamBuffer);
}
