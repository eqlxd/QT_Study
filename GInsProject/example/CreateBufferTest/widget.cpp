#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QThread>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_bufferName = "CreateBufferTest";
}

Widget::~Widget()
{
    delete ui;
    GIns::Data::IGInsDataBuffer::Delete(m_writeBuffer);

    delete[] m_buffer;
    m_buffer = nullptr;
}


void Widget::on_create_buffer_clicked()
{
    qDebug() << __FUNCTION__;

    std::string buffer_id;
    m_writeBuffer = GIns::Data::IGInsDataBuffer::Create(m_bufferName.toStdString(), buffer_id, 50000000, 50000000);
    if (!m_writeBuffer)
    {
        ui->textEdit->append("Create Buffer failed!");
        GIns::Data::IGInsDataBuffer::Delete(m_writeBuffer);
    }
    else
    {
        ui->textEdit->append("Create Buffer ok.");

       m_bufferId = QString::fromStdString(buffer_id);
        ui->textEdit->append(QString("buffer_id=%1").arg(m_bufferId));
    }
}


void Widget::on_create_header_clicked()
{
    qDebug() << __FUNCTION__;

    m_writeHeader = GIns::Data::IGInsDataHeader::Create();
    m_writeHeader->SetTimestampConfiguration(36526, 1, 0.000000001, TTransferFormat::TransferFormatUSInt64);
    m_writeHeader->SetDataRate(500);
    m_writeHeader->SetDataSourceInfo(m_bufferId.toStdString().c_str(), m_bufferName.toStdString().c_str());
    m_writeBuffer->SetHeader_Object(m_writeHeader);

    if (!m_writeHeader)
    {
        ui->textEdit->append("Create Header failed!");
    }
    else
    {
        ui->textEdit->append("Create Header ok.");
    }
}


void Widget::on_add_channel_clicked()
{
    qDebug() << __FUNCTION__;

    static int count = 1;

    QString var_name = QString("var%1").arg(count);
    bool rtn = m_writeHeader->AddVariable_New(var_name.toStdString().c_str(), "V", TransferFormatDouble, 3, 8);
    if (rtn)
    {
        ui->textEdit->append(QString("Add channel %1 ok.").arg(var_name));
    }
    else
    {
        ui->textEdit->append(QString("Add channel %1 error!").arg(var_name));
    }
    m_writeBuffer->SetHeader_Object(m_writeHeader);

    count++;
}


void Widget::on_init_frame_clicked()
{
    qDebug() << __FUNCTION__;

    uint16_t rtn = m_writeHeader->GetGInsVariables(m_writeChannels);
    if (rtn != m_writeChannels.size())
    {
        ui->textEdit->append("Init frame buffer GetGInsVariables failed!");
        return;
    }

    m_timestamp = m_writeHeader->GetGInsTimestampVariable();

    size_t frame_length = m_writeHeader->GetDataFrameLength();
    m_frameBuffer.SetFrameWidth(frame_length);
    if (!m_writeBuffer->InitializeFrame(m_frameBuffer))
    {
        ui->textEdit->append("Init frame buffer InitializeFrame failed!");
        GIns::Data::IGInsDataBuffer::Delete(m_writeBuffer);
        return;
    }

    m_buffer = new char[frame_length];
    m_frameBuffer.SetDataSourcePointer(m_buffer, frame_length);

    TOleTime oleTime = ga_GetOleTime_RTC();
    m_oleTimestamp = ga_GetDCTimeNSFromOLETime(&oleTime);
}


void Widget::on_gi_write_clicked()
{
    qDebug() << __FUNCTION__;

    auto write_fun = [=]()
    {
        static double value = 0.0;
        static uint64_t nsPerSample = 1000000000 / 500;
        static uint64_t msPerSample = 1000 / 500;

        while (true)
        {
            m_timestamp->CopyDataToInputFrame((char *)&m_oleTimestamp , m_buffer);
            m_oleTimestamp += nsPerSample;

            for (std::vector<GIns::Data::IGInsVariablePtr>::iterator it = m_writeChannels.begin(); it != m_writeChannels.end(); ++it)
            {
                value = rand() % 100;
                it->get()->ConvertFromDoubleToInputFrame(value, m_buffer);
            }

            if (!m_writeBuffer->AppendDataFrames(m_frameBuffer))
            {
                qDebug() << "error appending data frames";
            }

            QThread::msleep(msPerSample);
        }
    };

    m_thread = std::thread(write_fun);
}
