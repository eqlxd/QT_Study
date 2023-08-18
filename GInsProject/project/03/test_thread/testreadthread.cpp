#include "testreadthread.h"
#include <QDebug>

/***************************** ReadThreadPrivate *****************************/
class TestReadThreadPrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(TestReadThread)
public:
    explicit TestReadThreadPrivate(TestReadThread *iParent)
      : QObject(iParent), dd(iParent)
    {
        Q_UNUSED(dd);
    }

    GIns::Data::GInsDataSourcePtr m_dataSource;
    bool m_flag = true;
};

#include "testreadthread.moc"

/***************************** ReadThread *****************************/
TestReadThread::TestReadThread(QObject *iParent)
    : QThread{iParent},
      dp(new TestReadThreadPrivate(this))
{
}

void TestReadThread::setDataSource(GIns::Data::GInsDataSourcePtr iPtr)
{
    dp->m_dataSource = iPtr;
}

void TestReadThread::setStop()
{
    dp->m_flag = false;
}

void TestReadThread::run()
{
    GIns::Data::FrameBuffer frame_buffer(dp->m_dataSource->GetFrameWidth());

#if 1
    size_t dataSize=0;
    dp->m_dataSource->GetNextFrames_Limit(frame_buffer, dataSize, 0);
#endif

    GIns::Data::IGInsVariablePtr timestamp_var = dp->m_dataSource->HeaderInterface()->GetGInsTimestampVariable();

    std::vector<GIns::Data::IGInsVariablePtr> var_list;
    dp->m_dataSource->HeaderInterface()->GetGInsVariables(var_list);

    while (dp->m_flag)
    {
        size_t size = 0;
        if (dp->m_dataSource->GetNextFrames_All(frame_buffer, size))
        {
            for (GIns::Data::Frame f = frame_buffer.begin(); f != frame_buffer.end(); ++f)
            {
                qDebug() << timestamp_var->ConvertFromInputFrameToDCSystemTime(*f)
                        << var_list.at(0)->ConvertFromInputFrameToDouble(*f)
                        << var_list.at(1)->ConvertFromInputFrameToDouble(*f)
                        << var_list.at(2)->ConvertFromInputFrameToDouble(*f)
                        << var_list.at(3)->ConvertFromInputFrameToDouble(*f);
            }
        }// End if
    }
}
