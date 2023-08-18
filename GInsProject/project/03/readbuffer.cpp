#include "readbuffer.h"
#include "globalapp.h"
#include <QDebug>
#include <QThread>

/***************************** ReadThread *****************************/
class ReadThread : public QThread
{
    Q_OBJECT
public:
    explicit ReadThread(QObject *iParent = nullptr)
        : QThread(iParent)
    {
    }

    bool m_flag = true;

signals:
    void dataReaded(const QVariantMap &);

public:
    void setStop() { m_flag = false; }

protected:
    void run() override;
};

void ReadThread::run()
{
    GIns::Data::FrameBuffer frame_buffer(GApp->getFrameWidth());

    GIns::Data::IGInsVariablePtr timestamp_var = GApp->m_dataSource->HeaderInterface()->GetGInsTimestampVariable();
    std::vector<GIns::Data::IGInsVariablePtr> var_list;
    GApp->m_dataSource->HeaderInterface()->GetGInsVariables(var_list);

    size_t data_size=0;
    GApp->m_dataSource->GetNextFrames_Limit(frame_buffer, data_size, 0);

    while (m_flag)
    {
        size_t size = 0;
        if (GApp->m_dataSource->GetNextFrames_All(frame_buffer, size))
        {
            for (GIns::Data::Frame f = frame_buffer.begin(); f != frame_buffer.end(); ++f)
            {
                QVariantMap data;
                data.insert("time", timestamp_var->ConvertFromInputFrameToDCSystemTime(*f));

                for (size_t n = 0; n < var_list.size(); ++n)
                {
                    QString var_name = var_list.at(n)->GetName();
                    double value = var_list.at(n)->ConvertFromInputFrameToDouble(*f);
                    data.insert(var_name, value);
                }

                emit dataReaded(data);
            } // End for
        }
    } // End while
}

/***************************** ReadBufferPrivate *****************************/
class ReadBufferPrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(ReadBuffer)
public:
    explicit ReadBufferPrivate(ReadBuffer *iParent)
      : QObject(iParent), dd(iParent)
    {
        Q_UNUSED(dd);
    }

    ReadThread *m_thread = nullptr;
};

#include "readbuffer.moc"

/***************************** ReadBuffer *****************************/
ReadBuffer::ReadBuffer(QObject *iParent)
    : QObject{iParent},
      dp(new ReadBufferPrivate(this))
{
    if (!dp->m_thread)
    {
        dp->m_thread = new ReadThread(this);
        connect(dp->m_thread, &ReadThread::dataReaded, this, &ReadBuffer::dataReaded);
    }
}

void ReadBuffer::startReading()
{
    if (dp->m_thread->isRunning())
    {
        qWarning() << "read thread already running!";
        return;
    }

    dp->m_thread->start();
}

void ReadBuffer::endReading()
{
    dp->m_thread->setStop();
    dp->m_thread->quit();
    dp->m_thread->wait();
}
