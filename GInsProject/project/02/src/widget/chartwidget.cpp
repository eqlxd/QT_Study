#include "chartwidget.h"
#include "dscheckcombomodel.h"
#include <GInsData/GInsDataInterface.hpp>
#include <QDebug>
#include <QToolBar>
#include <QAction>
#include <QTabWidget>
#include <QtCharts/QtCharts>
#include <QVBoxLayout>
#include <QTimer>
#include <QComboBox>

#pragma execution_character_set("utf-8")

// 图表基本元素，包含了:
// 图表界面，图表，XY轴，数据线列表
struct ChartItem
{
    QChartView *m_view = nullptr;
    QChart *m_chart = nullptr;
    QValueAxis *m_xAxis = nullptr;
    QValueAxis *m_yAxis = nullptr;
    QMap<QString, QLineSeries *> m_series;
};

// 通道基本元素
struct VariableItem
{
    QString m_id;
    QString m_name;
    QString m_unit;
    QString m_dataType;
    QString m_direct;
    GIns::Data::IGInsVariablePtr m_varPtr;
};

/******************************** ChartWidgetPrivate ********************************/
class ChartWidgetPrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(ChartWidget)
public:
    explicit ChartWidgetPrivate(ChartWidget *iParent)
      : QObject(iParent), dd(iParent)
    {
    }

    QToolBar *m_toolbar = nullptr;
    QSpacerItem *m_spacerItem = nullptr;
    DSCheckComboBox *m_varCombox = nullptr;
    QTabWidget *m_tabWidget = nullptr;
    QMap<QString, ChartItem> m_chartMap;
    QMap<QString, VariableItem> m_varMap;

    GIns::Data::GInsDataSourcePtr m_dataSource;

public:
    void initToolBar();
    void initChart(ChartItem &iItem);

    ChartItem addChart(const QString &iTabName);

public slots:
    void onLoadFile();
    void onLoadVarData();
};

void ChartWidgetPrivate::initToolBar()
{
    m_toolbar = new QToolBar(dd);

    QAction *file_act = m_toolbar->addAction("加载文件");
    connect(file_act, &QAction::triggered, this, &ChartWidgetPrivate::onLoadFile);

    m_varCombox = new DSCheckComboBox(dd);
    connect(m_varCombox, &DSCheckComboBox::checkedItemsChanged, this, &ChartWidgetPrivate::onLoadVarData);
//    connect(m_varCombox, &DSCheckComboBox::currentTextChanged, this, &ChartWidgetPrivate::onLoadVarData);

    m_varCombox->setFixedWidth(300);
    QFormLayout *combo_form = new QFormLayout;
    combo_form->addRow("通道:", m_varCombox);

    m_spacerItem = new QSpacerItem(1, 1, QSizePolicy::Expanding);

    QWidget *toolbar_widget = new QWidget(dd);
    QHBoxLayout *hbox = new QHBoxLayout(toolbar_widget);
    hbox->addLayout(combo_form);
    hbox->addSpacerItem(m_spacerItem);
    m_toolbar->addWidget(toolbar_widget);

    QAction *return_act = m_toolbar->addAction("返回");
    connect(return_act, &QAction::triggered, dd, &ChartWidget::backToMain);
}

void ChartWidgetPrivate::initChart(ChartItem &iItem)
{
    int data_count = 1000;
    iItem.m_xAxis = new QValueAxis(iItem.m_chart);
    iItem.m_xAxis->setRange(0, data_count);
    iItem.m_xAxis->setTitleText("axis_x");
    iItem.m_xAxis->setLabelFormat("%d");
    iItem.m_xAxis->setTickInterval(1);
    iItem.m_xAxis->setTickCount(1);
    iItem.m_xAxis->setMinorGridLineVisible(false);
    iItem.m_chart->addAxis(iItem.m_xAxis, Qt::AlignBottom);

    iItem.m_yAxis = new QValueAxis(iItem.m_chart);
    iItem.m_yAxis->setTitleText("value");
    iItem.m_yAxis->setRange(0, 4);
    iItem.m_yAxis->setTitleText("axis_y");
    iItem.m_yAxis->setLabelFormat("%d");
    iItem.m_yAxis->setMinorGridLineVisible(false);
    iItem.m_chart->addAxis(iItem.m_yAxis, Qt::AlignLeft);
}

ChartItem ChartWidgetPrivate::addChart(const QString &iTabName)
{
    ChartItem item;
    item.m_chart = new QChart;
    item.m_chart->setTitle(QString("%1图").arg(iTabName));
    item.m_chart->legend()->hide();

    item.m_view = new QChartView(item.m_chart, dd);
    item.m_view->setRenderHint(QPainter::Antialiasing);

    m_chartMap.insert(iTabName, item);

    return item;
}

void ChartWidgetPrivate::onLoadFile()
{
    std::string file_name = "F:/Logger__0_2022-05-27_23-18-40_000000.dat";
//    std::string file_name = "F:/Logger__0_2022-05-27_23-03-49_145000.dat";
    m_dataSource = GIns::Data::IGInsDataSource::CreateIGInsDataSourcePtr(file_name);
    if (!m_dataSource)
    {
        qWarning() << "Create GIns Data Source failed!";
        return;
    }

/*
    // 1.
    int tab_index = m_tabWidget->currentIndex();
    QString tab_name = m_tabWidget->tabText(tab_index);
    ChartItem &chart_item = m_chartMap[tab_name];
*/

    // 2.
    m_varCombox->blockSignals(true);

    GIns::Data::IGInsVariablePtr timestamp_var = m_dataSource->HeaderInterface()->GetGInsTimestampVariable();
    if (timestamp_var)
    {
        if (timestamp_var->IsTimeChannel())
        {
            qDebug() << "We found a timestamp variable at offset: " << timestamp_var->GetInputOffset()
                     << "\nvariable name:" << timestamp_var->GetName();
        }
    }

    std::vector<GIns::Data::IGInsVariablePtr> variable_list;
    m_dataSource->HeaderInterface()->GetGInsVariables(variable_list);
    qDebug() << "We got " << variable_list.size() << " variables.";
    for (const GIns::Data::IGInsVariablePtr &var_ptr : variable_list)
    {
        qDebug() << "ID=" << var_ptr->GetID() << "\nname=" << var_ptr->GetName()
                 << "Unit=" << var_ptr->GetUnit() << "DataType=" << GIns::Data::IGInsVariable::DataTypeToString(var_ptr->GetDataType()).c_str()
                 << "Direction=" << GIns::Data::IGInsVariable::DataDirectionToString(var_ptr->GetDataDirection()).c_str()
                 << "Variable Kind=" << GIns::Data::IGInsVariable::VariableKindToString(var_ptr->GetVarKind()).c_str();

        m_varCombox->addItem(QString::fromStdString(var_ptr->GetName()));

        VariableItem item;
        item.m_id = QString::fromStdString(var_ptr->GetID());
        item.m_name = QString::fromStdString(var_ptr->GetName());
        item.m_unit = QString::fromStdString(var_ptr->GetUnit());
        item.m_dataType = QString::fromStdString(GIns::Data::IGInsVariable::DataTypeToString(var_ptr->GetDataType()));
        item.m_direct = QString::fromStdString(GIns::Data::IGInsVariable::DataDirectionToString(var_ptr->GetDataDirection()));
        item.m_varPtr = var_ptr;
        m_varMap.insert(item.m_name, item);

/*
        // 1.
        QLineSeries *series = new QLineSeries(chart_item.m_chart);
        series->setUseOpenGL(true);
        series->setName(item.m_name);
        chart_item.m_series.insert(item.m_name, series);
*/
    }

    m_varCombox->blockSignals(false);
}

void ChartWidgetPrivate::onLoadVarData()
{
    if (m_varCombox->checkedItems().isEmpty())
    {
        qWarning() << "no checked item!";
        return;
    }

    if (!m_dataSource)
    {
        qWarning() << "m_dataSource is nullptr!";
        return;
    }

    // 1. 创建图表数据线
    int tab_index = m_tabWidget->currentIndex();
    QString tab_name = m_tabWidget->tabText(tab_index);
    ChartItem &chart_item = m_chartMap[tab_name];
    qDebug() << "111  tab_name=" << tab_name;

    int color_index = 0;
    QStringList checked_list = m_varCombox->checkedItems();
    for (const QString &var_name : qAsConst(checked_list))
    {
        QLineSeries *series = new QLineSeries(chart_item.m_chart);
        series->setUseOpenGL(true);
        series->setName(var_name);

        switch (color_index)
        {
        case 0: series->setColor("red"); break;
        case 1: series->setColor("yellow"); break;
        case 2: series->setColor("blud"); break;
        case 3: series->setColor("black"); break;
        }
        color_index++;

        chart_item.m_series.insert(var_name, series);
        qDebug() << "var_name=" << var_name;
    }
    qDebug() << "222  chart_item.m_series.keys()=" << chart_item.m_series.keys();
    qDebug() << "222 checked_list=" << checked_list;
    qDebug() << "222 m_varMap.keys()=" << m_varMap.keys();

    // 2. 获取甘纳数据通道指针
    std::vector<GIns::Data::IGInsVariablePtr> checked_var_list;
    for (const QString &checked_item : qAsConst(checked_list))
    {
        VariableItem variable_item = m_varMap.value(checked_item);
        checked_var_list.push_back(variable_item.m_varPtr);
    }
//    return;

    qDebug() << "333  m_dataSource->GetFrameWidth()=" << m_dataSource->GetFrameWidth();
    qDebug() << "333  m_dataSource->GetActDataSize()=" << m_dataSource->GetActDataSize();
    qDebug() << "333  m_dataSource->GetMaxDataSize()=" << m_dataSource->GetMaxDataSize();
    qDebug() << "333  m_dataSource->GetCapacity()=" << m_dataSource->GetCapacity();
    qDebug() << "333  m_dataSource->GetBlockSize()=" << m_dataSource->GetBlockSize();
    qDebug() << "333  m_dataSource->GetBufferSize()=" << m_dataSource->GetBufferSize();
    size_t frame_count = m_dataSource->GetBufferSize() / m_dataSource->GetFrameWidth();
//    size_t frame_count = 400000;
    qDebug() << "333  frame_count=" << frame_count;
    int group_size = (frame_count / 250) + ( (frame_count % 250) == 0 ? 0 : 1 );
    qDebug() << "333 group_size=" << group_size;
//    return;

    // 3. 读数据
    QMap<QString, QList<double>> var_datas;
    int data_count = 0;
    int data_index = 0;

    uint32_t seek_offset = 0;
    size_t data_len = 0;
    GIns::Data::FrameBuffer frame_buffer(m_dataSource->GetFrameWidth());
    while (m_dataSource->GetActFrame(frame_buffer, data_len))
    {
        // 1. 读数据
        for (GIns::Data::Frame f = frame_buffer.begin(); f != frame_buffer.end(); ++f)
        {
            for (std::vector<GIns::Data::IGInsVariablePtr>::iterator var = checked_var_list.begin(); var != checked_var_list.end(); ++var)
            {
                QList<double> &data_list = var_datas[var->get()->GetName()];
                data_list << var->get()->ConvertFromInputFrameToDouble(*f);
//                qDebug() << "@@@" << data_index << data_count << seek_offset << data_list.last() << var->get()->GetName();
            }
        }
//        return;

        // 2. 移动数据指针
        m_dataSource->Seek(seek_offset, true);
        ++seek_offset;

        // 3. 生成图表曲线数据
        ++data_count;
        if (data_count == group_size)
        {
//            qDebug() << "============================================";
            for (const QString &var_name : var_datas.keys())
            {
                QLineSeries *series = chart_item.m_series.value(var_name);
                QList<double> &var_data = var_datas[var_name];
                // first
                *series << QPointF(data_index, var_data.first());
                ++data_index;
                // last
                *series << QPointF(data_index, var_data.last());
                ++data_index;
                // max
                qreal max_value = *std::max_element(var_data.begin(), var_data.end());
                *series << QPointF(data_index, max_value);
                ++data_index;
                // min
                qreal min_value = *std::min_element(var_data.begin(), var_data.end());
                *series << QPointF(data_index, min_value);
                ++data_index;

                // 清空小组数据
                var_data.clear();
            }
            var_datas.clear();
            data_count = 0;
        }
    }

    int chart_series_count = 0;
    for (QLineSeries *series : chart_item.m_series.values())
    {
        qDebug() << "***********************" << chart_series_count << "***********************";
        chart_item.m_chart->addSeries(series);
        chart_series_count++;
    }
}

#include "chartwidget.moc"

/******************************** ChartWidget ********************************/
ChartWidget::ChartWidget(QWidget *iParent)
    : QWidget{iParent},
      dp(new ChartWidgetPrivate(this))
{
    QTimer::singleShot(0, this, [=]()
    {
        this->initLayout();
    });
}

void ChartWidget::initLayout()
{
    dp->initToolBar();
    dp->m_tabWidget = new QTabWidget(this);

    {
        QString chart_name = "YT";
        ChartItem yt = dp->addChart(chart_name);
        dp->initChart(yt);
        dp->m_tabWidget->addTab(dp->m_chartMap.value(chart_name).m_view, chart_name);

        chart_name = "XY";
        ChartItem xy = dp->addChart(chart_name);
        dp->initChart(xy);
        dp->m_tabWidget->addTab(dp->m_chartMap.value(chart_name).m_view, chart_name);

        chart_name = "FFT";
        ChartItem fft = dp->addChart(chart_name);
        dp->initChart(fft);
        dp->m_tabWidget->addTab(dp->m_chartMap.value(chart_name).m_view, chart_name);
    }

    QVBoxLayout *vbox = new QVBoxLayout(this);
    vbox->addWidget(dp->m_toolbar);
    vbox->addWidget(dp->m_tabWidget);
}
