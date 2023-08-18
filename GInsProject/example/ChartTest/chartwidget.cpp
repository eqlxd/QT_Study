#include "chartwidget.h"

ChartWidget::ChartWidget(QWidget *iParent)
    : QWidget(iParent)
{
    resize(800, 600);
    setWindowTitle("QChart Widget");
}

void ChartWidget::init()
{
    m_chart = new QChart;
    m_chart->setTitle("10K Test");
    m_chart->legend()->hide();

    int data_count = 1000;
    m_xAsix = new QValueAxis(m_chart);
    m_xAsix->setRange(0, data_count);
    m_xAsix->setTitleText("axis_x");
    m_xAsix->setLabelFormat("%d");
    m_xAsix->setTickInterval(1);
    m_xAsix->setTickCount(1);
    m_xAsix->setMinorGridLineVisible(false);
    m_chart->addAxis(m_xAsix, Qt::AlignBottom);

    m_yAsix = new QValueAxis(m_chart);
    m_yAsix->setTitleText("value");
    m_yAsix->setRange(0, 100);
    m_yAsix->setTitleText("axis_y");
    m_yAsix->setLabelFormat("%d");
    m_yAsix->setMinorGridLineVisible(false);
    m_chart->addAxis(m_yAsix, Qt::AlignLeft);

    m_series = new QLineSeries(m_chart);
    m_series->setUseOpenGL();
    m_series->setName("10K Series");

/////////////////////////////////////////////////////////////////////////////////
    QChartView *chart_view = new QChartView(m_chart, this);
    chart_view->setRenderHint(QPainter::Antialiasing);

    QVBoxLayout *vbox = new QVBoxLayout(this);
    vbox->setMargin(0);
    vbox->setSpacing(0);
    vbox->addWidget(chart_view);
}

void ChartWidget::setData(const QList<int> &iDataList)
{
#if 1
    int index = 0;
    for (const int &iValue : iDataList)
    {
        *m_series << QPointF(index, iValue);
        ++index;
    }
#else
    int t_size = 400;
    int point_index = 0;
    for (int n = 0, index = 0; n < 25; ++n, index += t_size)
    {
//        qDebug() << n << index << t_size;
        QList<int> t_data = iDataList.mid(index, t_size - 1);
//        qDebug() << n << t_data;

        // 第一个
        *m_series << QPointF(point_index, t_data.first());
        ++point_index;
        // 最后一个
        *m_series << QPointF(point_index, t_data.last());
        ++point_index;
        // 最大值
        qreal max_value = *std::max_element(t_data.begin(), t_data.end());
        *m_series << QPointF(point_index, max_value);
        ++point_index;
        // 最小值
        qreal min_value = *std::min_element(t_data.begin(), t_data.end());
        *m_series << QPointF(point_index, min_value);
        ++point_index;
        qDebug() << t_data.first() << t_data.last() << max_value << min_value;
    }
#endif

    m_chart->addSeries(m_series);
}


























