#include "test_mainwindow.h"
#include "test_thread/testreadthread.h"
#include "test_thread/testwritethread.h"
#include "test_thread/readwritethread.h"
#include <GInsData/GInsDataInterface.hpp>
#include <QDebug>
#include <QtWidgets>
#include <QVBoxLayout>

#pragma execution_character_set("utf-8")

using namespace std;

/***************************** TestMainWindowPrivate *****************************/
class TestMainWindowPrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(TestMainWindow)
public:
    explicit TestMainWindowPrivate(TestMainWindow *iParent)
      : QObject(iParent), dd(iParent)
    {
    }

    GIns::Data::GInsDataSourcePtr m_dataSource;
    TestReadThread *m_readThread = nullptr;
    TestWriteThread *m_writeThread = nullptr;
    ReadWriteThread *m_rwThread = nullptr;

    QLineEdit *m_ipEdit = nullptr;
    QPushButton *m_connectBtn = nullptr;

public:
    void initLayou();
    void initGInsApi();

public slots:
    void onConnectDevice();
    void onReadTest();
    void onWriteTest();
    void onRWTest();
};

void TestMainWindowPrivate::initLayou()
{
    QRegExp reg_exp_ip("((25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9][0-9]|[0-9])[\\.]){3}(25[0-5]|2[0-4][0-9]|1[0-9][0-9]|[1-9][0-9]|[0-9])");

    m_ipEdit = new QLineEdit(dd);
    m_ipEdit->setValidator(new QRegExpValidator(reg_exp_ip,this));
    m_ipEdit->setMinimumWidth(200);
    m_ipEdit->setMaximumWidth(500);
    m_ipEdit->setText("192.168.1.18");

    m_connectBtn = new QPushButton("连接", dd);
    connect(m_connectBtn, &QPushButton::clicked, this, &TestMainWindowPrivate::onConnectDevice);

    QPushButton *test_btn1 = new QPushButton("ReadTest", dd);
    connect(test_btn1, &QPushButton::clicked, this, &TestMainWindowPrivate::onReadTest);
    QPushButton *test_btn2 = new QPushButton("WriteTest", dd);
    connect(test_btn2, &QPushButton::clicked, this, &TestMainWindowPrivate::onWriteTest);
    QPushButton *test_btn3 = new QPushButton("ReadWriteTest", dd);
    connect(test_btn3, &QPushButton::clicked, this, &TestMainWindowPrivate::onRWTest);

    QHBoxLayout *hbox = new QHBoxLayout;
    hbox->addWidget(new QLabel("IP:", dd));
    hbox->addWidget(m_ipEdit);
    hbox->addWidget(m_connectBtn);
    hbox->addStretch();
    hbox->addWidget(test_btn3);
    hbox->addWidget(test_btn1);
    hbox->addWidget(test_btn2);

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addLayout(hbox);
    vbox->addStretch();

    QWidget *w = new QWidget(dd);
    w->setLayout(vbox);
    dd->setCentralWidget(w);
}

void TestMainWindowPrivate::onConnectDevice()
{
    QString ip = m_ipEdit->text();
    if (ip.isEmpty())
    {
        qCritical() << "设备IP地址不能为空！";
        QMessageBox::critical(dd, "连接设备", "设备IP地址不能为空！");
        return;
    }

    m_dataSource = GIns::Data::IGInsDataSource::CreateIGInsDataSourcePtr(ip.toStdString(), 0);
    if (!m_dataSource)
    {
        QMessageBox::critical(dd, "连接设备", "初始化设备对象失败！");
        return;
    }

    qInfo() << "连接设备成功.";
    m_connectBtn->setEnabled(false);
    m_ipEdit->setEnabled(false);
}

void TestMainWindowPrivate::onReadTest()
{
    // 1.
#if 0
    int var_count = m_dataSource->HeaderInterface()->GetVariableCount();
    qDebug() << "GetVariableCount()=" << var_count;

    for (int n = 0; n < var_count; ++n)
    {
        GIns::Data::IGInsVariablePtr var = m_dataSource->HeaderInterface()->FindGInsVariable(n);
        qDebug() << QString(var->GetName());
    }
#else
    vector<GIns::Data::IGInsVariablePtr> var_list;
    m_dataSource->HeaderInterface()->GetGInsVariables(var_list);
    qDebug() << "var size=" << var_list.size();

    for (const auto &it : var_list)
    {
        qDebug() << "name=" << it->GetName();
        qDebug() << "data size" << it->GetDataSize();
        qDebug() << "input index=" << it->GetInputIndex();
        qDebug() << "output index=" << it->GetOutputIndex();
        qDebug() << "data direction=" << GIns::Data::IGInsVariable::DataDirectionToString(it->GetDataDirection()).c_str();
        qDebug() << "data type=" << GIns::Data::IGInsVariable::DataTypeToString(it->GetDataType()).c_str();
//        qDebug() << "variable kind=" << GIns::Data::IGInsVariable::VariableKindToString(it->GetVarKind()).c_str();
        qDebug() << "";
    }
#endif

    qDebug() << "GetFrameWidth()=" << m_dataSource->GetFrameWidth();

    // 2.
    if (!m_readThread)
    {
        m_readThread = new TestReadThread(this);
        m_readThread->setDataSource(m_dataSource);
    }

    if (!m_readThread->isRunning())
    {
        m_readThread->start();
    }
    else
    {
        qDebug() << "read thread already running";
    }
}

void TestMainWindowPrivate::onWriteTest()
{
    string buffer_name = "GIns Project 3";
    string buffer_id;
    size_t buffer_size = 50000000;
    size_t segment_size = 50000000;

    GIns::Data::GInsDataBufferPtr stream_buffer = GIns::Data::IGInsDataBuffer::Create(buffer_name, buffer_id, buffer_size, segment_size);
//    GIns::Data::GInsDataBufferPtr stream_buffer = GIns::Data::IGInsDataBuffer::Create(buffer_name, buffer_id, "192.168.100.149", 0, 60, DataBufferType_ProcessBuffer, 1000, 0, buffer_size, segment_size);
    if (!stream_buffer)
    {
        GIns::Data::IGInsDataBuffer::Delete(stream_buffer);
        qWarning() << "Create data buffer error!";
        return;
    }

    buffer_id = stream_buffer->GetID();
    qDebug() << "buffer_id=" << QString::fromStdString(buffer_id);

    // 创建buffer header并设置header属性
    GIns::Data::GInsDataHeaderPtr buffer_header = GIns::Data::IGInsDataHeader::Create();
    buffer_header->SetTimestampConfiguration(36526, 1, 0.000000001, TTransferFormat::TransferFormatUSInt64);

    // set buffer samplerate
    double sample_rate = 100;
    buffer_header->SetDataRate(sample_rate);

    // create source Info's
    buffer_header->SetDataSourceInfo(buffer_id.c_str(), buffer_name.c_str());

    // Create Measurement Info's
    std::string meas_id = "0123456789";
    time_t rawtime;
    struct tm * timeinfo;
    char buffer[80] = "\0";
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(buffer, sizeof(buffer), "%d-%m-%Y_%H:%M:%S", timeinfo);
    std::string str(buffer);
    std::string meas_name = str;
    buffer_header->SetMeasurementInfo(meas_id.c_str(), meas_name.c_str());

    // add channels to header
    buffer_header->AddVariable_New("TestChannel", "V", TransferFormatDouble, 3, 8);

    //set header to streambuffer
    stream_buffer->SetHeader_Object(buffer_header);

    if (!m_writeThread)
    {
        m_writeThread = new TestWriteThread(this);
        m_writeThread->setDataBuffer(stream_buffer);
        m_writeThread->setDataRate(sample_rate);
    }

    if (!m_writeThread->isRunning())
    {
        m_writeThread->start();
    }
    else
    {
        qDebug() << "write thread already running";
    }
}

void TestMainWindowPrivate::onRWTest()
{
    if (!m_rwThread)
    {
        m_rwThread = new ReadWriteThread(this);
        m_rwThread->setDataSource(m_dataSource);
    }

    if (!m_rwThread->isRunning())
    {
        m_rwThread->start();
    }
    else
    {
        qDebug() << "rw thread already running";
    }
}

#include "test_mainwindow.moc"

/***************************** TestMainWindow *****************************/
TestMainWindow::TestMainWindow(QWidget *iParent)
    : QMainWindow(iParent),
      dp(new TestMainWindowPrivate(this))
{
    resize(1024, 768);
    setMinimumSize(800, 600);

    dp->initLayou();
}

TestMainWindow::~TestMainWindow()
{
}

void TestMainWindow::closeEvent(QCloseEvent *)
{
    if (dp->m_readThread)
    {
        dp->m_readThread->setStop();
        dp->m_readThread->quit();
        dp->m_readThread->wait();
    }

    if (dp->m_writeThread)
    {
        dp->m_writeThread->setStop();
        dp->m_writeThread->quit();
        dp->m_writeThread->wait();
    }

    if (dp->m_rwThread)
    {
        dp->m_rwThread->setStop();
        dp->m_rwThread->quit();
        dp->m_rwThread->wait();
    }
}
