#include "widget.h"
#include <QDebug>
#include <QVBoxLayout>
#include <QTimer>
#include <QDateTime>
#include <QRandomGenerator>

#pragma execution_character_set("utf-8")

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(800, 600);

    m_db = FqCreateDatabase("MySQL");

    QPushButton *btn1 = new QPushButton("Btn1", this);
    QPushButton *btn2 = new QPushButton("Btn2", this);
    QPushButton *btn3 = new QPushButton("Btn3", this);
    QPushButton *btn4 = new QPushButton("Btn4", this);
    QHBoxLayout *hbox1 = new QHBoxLayout;
    hbox1->addWidget(btn1);
    hbox1->addWidget(btn2);
    hbox1->addWidget(btn3);
    hbox1->addWidget(btn4);

    connect(btn1, &QPushButton::clicked, this, &Widget::onBtnClick1);
    connect(btn2, &QPushButton::clicked, this, &Widget::onBtnClick2);
    connect(btn3, &QPushButton::clicked, this, &Widget::onBtnClick3);
    connect(btn4, &QPushButton::clicked, this, &Widget::onBtnClick4);

    QPushButton *btn5 = new QPushButton("Btn5", this);
    QHBoxLayout *hbox2 = new QHBoxLayout;
    hbox2->addWidget(btn5);

    connect(btn5, &QPushButton::clicked, this, &Widget::onBtnClick5);


    m_chart = new QChart;
    m_chart->legend()->hide();

    QChartView *chart_view = new QChartView(m_chart, this);
    chart_view->setRenderHint(QPainter::Antialiasing);

    QVBoxLayout *vbox = new QVBoxLayout(this);
    vbox->setMargin(0);
    vbox->setSpacing(0);
    vbox->addLayout(hbox1);
    vbox->addLayout(hbox2);
    vbox->addWidget(chart_view);

    QTimer::singleShot(0, this, [=]()
    {
        QVariantMap db_param;
        db_param.insert("type", "mysql");
        db_param.insert("user", "root");
        db_param.insert("pwd", "000000");
        db_param.insert("host", "127.0.0.1");
        db_param.insert("port", 3306);
        db_param.insert("name", "best02");
        m_db->setDatabase(db_param);

        if (!m_db->open())
        {
            qCritical() << "open database failed!";
        }
    });

//    QTimer::singleShot(100, this, [=]()
//    {
//        initTestChart();
//    });
}

Widget::~Widget()
{
}

void Widget::initTestChart()
{
    m_chart->setTitle("TestChart1");

    QLineSeries *series1 = new QLineSeries;
    series1->setName("Test Line Series1");
//    series1->setUseOpenGL();
    *series1 << QPoint(0, 0) << QPoint(1, 1) << QPoint(2, 2) << QPoint(3, 3) << QPoint(4, 4);
    m_chart->addSeries(series1);

#if 0
    m_chart->createDefaultAxes();

    QAbstractAxis *x_axes = m_chart->axes(Qt::Horizontal).at(0);
    QAbstractAxis *y_axes = m_chart->axes(Qt::Vertical).at(0);
    x_axes->setRange(0, 10);
    y_axes->setRange(0, 20);

    qDebug() << "labelsVisible=" << x_axes->labelsVisible() << "\n"
             << "isGridLineVisible=" << x_axes->isGridLineVisible() << "\n"
             << "shadesVisible=" << x_axes->shadesVisible();

#else
    QValueAxis *axis_x = new QValueAxis(m_chart);
    QValueAxis *axis_y = new QValueAxis(m_chart);

    axis_x->setRange(0, 9);
    axis_y->setRange(0, 10);

    axis_x->setTitleText("axis_x");
    axis_y->setTitleText("axis_y");

    axis_x->setLabelFormat("%d");
//    axis_y->setLabelFormat("%d");
                                                                 X BN?":>lpok<i/JMU;HY8OL7I6TKG5RJF4EHD3WSG32FTX4HGYC5HJUV6UHU7IJI89KO0L-P"
                                                                      "=[;"
                                                                      "]]\/=-09s_y->setTickInterval(0.0001);

    axis_x->setTickCount(10); // series->count()
    axis_y->setTickCount(10); // series->count()

//    axis_x->setMinorTickCount(1);
//    axis_y->setMinorTickCount(1);
    axis_x->setMinorGridLineVisible(false);
    axis_y->setMinorGridLineVisible(false);

    m_chart->addAxis(axis_x, Qt::AlignBottom);
    m_chart->addAxis(axis_y, Qt::AlignLeft);
//    m_chart->setAxisX(axis_x);
//    m_chart->setAxisY(axis_y);

    series1->attachAxis(axis_x);
    series1->attachAxis(axis_y);
#endif
}

void Widget::setSampleChart(NtXbarR *iXbarR)
{
    m_chart->setTitle("Sample Chart");

    QLineSeries *series = new QLineSeries(m_chart);
    series->setUseOpenGL();
    series->setName("Sample Series");

    std::vector<double> data = iXbarR->getData();
//    qDebug() << "222  data=" << data.size();
    for (uint n =0; n < data.size(); ++n)
    {
        // 浮点数要用QPointF !
        *series << QPointF(n+1 , data.at(n));
//        qDebug() << n+1 << data.at(n);
    }
    m_chart->addSeries(series);

    double max = *max_element(iXbarR->getData().begin(), iXbarR->getData().end());
    double min = *min_element(iXbarR->getData().begin(), iXbarR->getData().end());
    qDebug() << "333" << min << max;

    QValueAxis *axis_x = new QValueAxis(m_chart);
    QValueAxis *axis_y = new QValueAxis(m_chart);

    axis_x->setTitleText("index");
    axis_x->setRange(1, data.size());
    axis_x->setLabelFormat("%d");
    axis_x->setTickInterval(1);
    axis_x->setTickCount(data.size());
    axis_x->setMinorGridLineVisible(false);

    axis_y->setTitleText("value");
    axis_y->setRange(min, max);
    axis_y->setLabelFormat("%.4f");
    axis_y->setMinorGridLineVisible(false);

    m_chart->addAxis(axis_x, Qt::AlignBottom);
    m_chart->addAxis(axis_y, Qt::AlignLeft);
}

void Widget::onBtnClick1()
{
    int group = 5, group_size = 15;
    QVariantList data_list = m_db->selectArrayMap("nt_measure_data_86", "date,arg1", QVariant(), "id DESC", 0, 0, group * group_size);
//    qDebug() << "000  data_list=" << data_list.count();

    QVector<double> vec_data;
    for (const QVariant &var : data_list)
    {
        QVariantMap map = var.toMap();
        vec_data.append(map.value("arg1").toDouble());
    }
    std::vector<double> data_vec(vec_data.begin(), vec_data.end());
//    qDebug() << "111  data_vec=" << data_vec.size();

    NtXbarR xbar_r;
    xbar_r.setSubgroupSize(group, group_size);
    xbar_r.setData(data_vec);
    xbar_r.calc();

    setSampleChart(&xbar_r);
}

void Widget::onBtnClick2()
{
    int data_count = 20;
    QVariantList data_list = m_db->selectArrayMap("nt_measure_data_86", "date,arg1", QVariant(), "id DESC", 0, 0, data_count);

    m_chart->setTitle("LastData Chart");

    QLineSeries *series = new QLineSeries(m_chart);
    series->setUseOpenGL();
    series->setName("Last Data Series");

    double y_min = 9999, y_max = -9999;
    for (const QVariant &var : data_list)
    {
        QVariantMap map = var.toMap();
        QDateTime time = map.value("date").toDateTime();
        double value = map.value("arg1").toDouble();
        series->append(time.toMSecsSinceEpoch(), value);
//        qDebug() << time.toString("yyyy-MM-dd hh:mm:ss") << time.toMSecsSinceEpoch() << value;

        y_min = qMin(value, y_min);
        y_max = qMax(value, y_max);
    }
    m_chart->addSeries(series);
    qDebug() << y_min << y_max;

    QDateTimeAxis *axis_x = new QDateTimeAxis(m_chart);
    axis_x->setTitleText("time");
    axis_x->setFormat("hh:mm:ss");
    axis_x->setLabelsAngle(90);
    axis_x->setMinorGridLineVisible(false);
    axis_x->setTickCount(data_count);

    QValueAxis *axis_y = new QValueAxis(m_chart);
    axis_y->setTitleText("value");
    axis_y->setRange(y_min, y_max);
    axis_y->setLabelFormat("%.4f");
    axis_y->setMinorGridLineVisible(false);

    m_chart->addAxis(axis_x, Qt::AlignBottom);
    m_chart->addAxis(axis_y, Qt::AlignLeft);

    // 这里一定要在  m_chart->addAxis  之后调用，否则时间轴不显示，不知道原因
    series->attachAxis(axis_x);
    series->attachAxis(axis_y);
}

void Widget::onBtnClick3()
{
    m_chart->setTitle("Dynamic Chart1");

    m_series = new QLineSeries;
    m_series->setName("Dynamic Series");
    m_series->setUseOpenGL();
    m_chart->addSeries(m_series);

    m_axisX = new QValueAxis(m_chart);
    m_axisY = new QValueAxis(m_chart);

    m_axisX->setRange(0, 9);
    m_axisY->setRange(0, 10);

    m_axisX->setTitleText("axis_x");
    m_axisY->setTitleText("axis_y");

    m_axisX->setLabelFormat("%d");
    m_axisY->setLabelFormat("%d");

    m_axisX->setTickInterval(1);
    m_axisY->setTickInterval(1);

    m_axisX->setTickCount(10);
    m_axisY->setTickCount(10);

    m_axisX->setMinorGridLineVisible(false);
    m_axisY->setMinorGridLineVisible(false);

    m_chart->addAxis(m_axisX, Qt::AlignBottom);
    m_chart->addAxis(m_axisY, Qt::AlignLeft);

    m_series->attachAxis(m_axisX);
    m_series->attachAxis(m_axisY);

////////////////////////////////////////////////////////////////////////////////////////
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Widget::onTimer1);
    timer->setInterval(1);
    timer->start();
}

void Widget::onBtnClick4()
{
/*
    double y_min = 9999, y_max = -9999;
    int data_count = 20;
    QVariantList data_list = m_db->selectArrayMap("nt_measure_data_86", "date,arg1", QVariant(), "id ASC", 0, 0, data_count);
    for (const QVariant &var : qAsConst(data_list))
    {
        QVariantMap map = var.toMap();
        QDateTime time = map.value("date").toDateTime();
        double value = map.value("arg1").toDouble();
        qDebug() << time.toString("yyyy-MM-dd hh:mm:ss") << time.toSecsSinceEpoch();

        y_min = qMin(value, y_min);
        y_max = qMax(value, y_max);
    }
    qDebug() << y_min << y_max;
    return;
*/

    m_chart->setTitle("X Datetime Dynamic Chart");

    m_series = new QLineSeries;
    m_series->setName("Datetime X Series");
    m_series->setUseOpenGL();
    m_chart->addSeries(m_series);

    m_dateAxisX = new QDateTimeAxis(m_chart);
    m_dateAxisX->setTitleText("time");
    m_dateAxisX->setFormat("hh:mm:ss");
    m_dateAxisX->setLabelsAngle(90);
    m_dateAxisX->setMinorGridLineVisible(false);
    m_dateAxisX->setTickCount(20);
#if 0
    m_dateAxisX->setRange(
                QDateTime::fromString("2016-03-30 16:32:18", "yyyy-MM-dd hh:mm:ss"),
                QDateTime::fromString("2016-03-30 16:52:40", "yyyy-MM-dd hh:mm:ss"));
#else
    m_dateAxisX->setRange(
                QDateTime::fromSecsSinceEpoch(1455543920), // 1459327960  1459326972
                QDateTime::fromSecsSinceEpoch(1455544919)
                );
#endif

    m_axisY = new QValueAxis(m_chart);
    m_axisY->setTitleText("value");
    m_axisY->setLabelFormat("%.4f");
    m_axisY->setMinorGridLineVisible(false);
    m_axisY->setRange(60.4668, 60.4715);  // 60.4384, 60.4655
    m_axisY->setTickInterval(0.0001);

    m_chart->addAxis(m_dateAxisX, Qt::AlignBottom);
    m_chart->addAxis(m_axisY, Qt::AlignLeft);

    m_series->attachAxis(m_dateAxisX);
    m_series->attachAxis(m_axisY);

////////////////////////////////////////////////////////////////////////////////////////
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &Widget::onTimer2);
    timer->setInterval(1000);
    timer->start();
}

void Widget::onTimer1()
{
    static int x = 0;

    if (x > 9)
    {
        m_axisX->setRange(0, x);  // 所有数据
//        m_axisX->setRange(x - 9, x); // 最新10个数据
    }

    *m_series << QPoint(x, QRandomGenerator::global()->bounded(12));
    ++x;
}

void Widget::onTimer2()
{
    static int start = 0;

    int data_count = 1;
    QVariantList data_list = m_db->selectArrayMap("nt_measure_data_86", "date,arg1", QVariant(), "id ASC", 0, start, data_count);
    QVariantMap map = data_list.front().toMap();

    QDateTime time = map.value("date").toDateTime();
    double value = map.value("arg1").toDouble();
    qDebug() << time.toString("yyyy-MM-dd hh:mm:ss") << value;
/*
#if 0
    m_dateAxisX->setRange(
                QDateTime::fromString("2016-03-30 16:32:18", "yyyy-MM-dd hh:mm:ss"),
                QDateTime::fromString("2016-03-30 16:52:40", "yyyy-MM-dd hh:mm:ss"));
#else
    static QDateTime x_start;
    QDateTime x_end;
    if (x_start.isNull())
    {
        x_start = QDateTime::fromSecsSinceEpoch(time.toSecsSinceEpoch());
        x_end = QDateTime::fromSecsSinceEpoch(time.toSecsSinceEpoch() - 1);
    }
    else
    {
        x_end = time;
    }
    qDebug() << x_start.toSecsSinceEpoch() << x_end.toSecsSinceEpoch();
    m_dateAxisX->setRange(x_start, x_end);
#endif
*/
    m_series->append(time.toMSecsSinceEpoch(), value);
    ++start;
}

void Widget::onBtnClick5()
{
    GIns::Data::GInsDataSourcePtr DataSource = GIns::Data::IGInsDataSource::CreateIGInsDataSourcePtr("192.168.1.19", 0);
    if (!DataSource)
    {
        qWarning() << "Create GIns::Data::IGInsDataSource failed!";
        return;
    }

    qDebug() << "Create GIns::Data::IGInsDataSource ok.";

    qDebug() << "Source device Location: "        << DataSource->HeaderInterface()->GetLocation();
    qDebug() << "Source device SerialNumber: "    << DataSource->HeaderInterface()->GetSerialNumber();
    qDebug() << "Source device Firmware: "        << DataSource->HeaderInterface()->GetFirmwareVersion();
    qDebug() << "Source device DataRateHz: "      << DataSource->HeaderInterface()->GetDataRateHz();
    qDebug() << "Source device VarCount: "        << DataSource->HeaderInterface()->GetInputVariableCount();
    qDebug() << "Source device TimestampType: "   << DataSource->HeaderInterface()->GetActTimestampType();
    qDebug() << "Source device CasingType: "      << DataSource->HeaderInterface()->GetCasingType();
    qDebug() << "Source device DataFrameLength: " << DataSource->HeaderInterface()->GetDataFrameLength();
}
