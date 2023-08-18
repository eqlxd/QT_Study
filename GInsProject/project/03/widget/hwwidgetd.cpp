#include "hwwidgetd.h"
#include "../globalapp.h"
#include <gwidget/gtablemodel.h>
#include <gwidget/gtableview.h>
#include <QDebug>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QPushButton>
#include <QElapsedTimer>
#include <QTime>
#include <QMessageBox>

#pragma execution_character_set("utf-8")

/***************************** HwWidgetDPrivate *****************************/
class HwWidgetDPrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(HwWidgetD)
public:
    explicit HwWidgetDPrivate(HwWidgetD *iParent)
      : QObject(iParent), dd(iParent)
    {
    }

    QLineEdit *m_dataRate = nullptr;
    GTableView *m_view = nullptr;
    GTableModel *m_model = nullptr;

    QMap<QString, int> m_rowIndex;
    QMap<QString, QVariantMap> m_tableData;
    QMap<QString, double> m_minValue;
    QMap<QString, double> m_maxValue;

    bool m_isStart = false;

public:
    void initLayout();
    QVariantList getTableData(const QVariantList &iVariables);

public slots:
    void onTest();
};

void HwWidgetDPrivate::initLayout()
{
    m_dataRate = new QLineEdit(dd);
    m_dataRate->setReadOnly(true);
    QVBoxLayout *vbox1 = new QVBoxLayout;
    vbox1->addWidget(new QLabel("采样率:", dd), 1);
    vbox1->addWidget(m_dataRate, 9, Qt::AlignLeft);
    vbox1->addStretch();

    // init table model/view
    m_model = new GTableModel(this);
    QVariantList head_items;
    head_items << GTableModel::tableHeadItem("id", "ID");
    head_items << GTableModel::tableHeadItem("name", "名称");
    head_items << GTableModel::tableHeadItem("range", "量程");
    head_items << GTableModel::tableHeadItem("type", "测量类型");
    head_items << GTableModel::tableHeadItem("min", "最小值");
    head_items << GTableModel::tableHeadItem("value", "数值");
    head_items << GTableModel::tableHeadItem("max", "最大值");
    head_items << GTableModel::tableHeadItem("unit", "单位");
    m_model->setHeadItems(head_items);

    m_view = new GTableView(dd);
    m_view->setModel(m_model);
    m_view->setSelectionBehavior(QAbstractItemView::SelectRows);
    m_view->setSelectionMode(QAbstractItemView::ExtendedSelection);
    m_view->setColumnWidth(7, 50);

    QVBoxLayout *vbox2 = new QVBoxLayout(dd);
    vbox2->addLayout(vbox1, Qt::AlignLeft);
    vbox2->addWidget(m_view, 9);
    vbox2->addStretch();

#if 0
    QPushButton *test_btn = new QPushButton("test", dd);
    connect(test_btn, &QPushButton::clicked, this, &HwWidgetDPrivate::onTest);
    vbox2->addWidget(test_btn);
#endif
}

QVariantList HwWidgetDPrivate::getTableData(const QVariantList &iVariables)
{
    int row_index = 0;

    QVariantList result;
    for (const QVariant &var : qAsConst(iVariables))
    {
        QVariantMap map = var.toMap();
        QString name = map.value("name").toString();

        QVariantMap row_map;
        row_map.insert("id", map.value("id"));
        row_map.insert("name", name);
        row_map.insert("range", "");
        row_map.insert("type", "");
        row_map.insert("min", "");
        row_map.insert("value", "");
        row_map.insert("max", "");
        row_map.insert("unit", map.value("unit"));
        result.append(row_map);

        m_rowIndex.insert(name, row_index);
        m_tableData.insert(name, row_map);
        m_minValue.insert(name, 99999999.9);
        m_maxValue.insert(name, -99999999.9);

        ++row_index;
    }

    return result;
}

void HwWidgetDPrivate::onTest()
{
    QVariantMap data;
    data.insert("value", 666);
    m_model->setRowData(0, data);
}

#include "hwwidgetd.moc"

/***************************** HwWidgetD *****************************/
HwWidgetD::HwWidgetD(QWidget *iParent)
    : QWidget{iParent},
    dp(new HwWidgetDPrivate(this))
{
    setMinimumHeight(600);

    dp->initLayout();
    connect(GApp, &GlobalApp::dataReaded, this, &HwWidgetD::setVarValues);
}

bool HwWidgetD::checkData()
{
    QString data_rate = dp->m_dataRate->text();
    QVariantList table_data = dp->m_model->allDataMap();

    if (data_rate.isEmpty() && table_data.isEmpty())
        return true;

    if (dp->m_dataRate->text().toDouble() != GApp->getReaderHeader("data_rate").toDouble())
        return false;

    QVariantList dev_data =  GApp->getVariables();
    if (table_data.count() != dev_data.count())
        return false;

    for (int n = 0; n <dev_data.count(); ++n)
    {
        QVariantMap t_data = table_data.at(n).toMap();
        QVariantMap d_data = dev_data.at(n).toMap();

        if (t_data.value("name").toString() != d_data.value("name").toString())
            return false;
    }

    return true;
}

void HwWidgetD::setDataRate(const double &iRate)
{
    dp->m_dataRate->setText(QString::number(iRate, 'f', 0));
}

double HwWidgetD::getDataRate()
{
    return dp->m_dataRate->text().toDouble();
}

void HwWidgetD::setTableData(const QVariantList &iData)
{
    dp->m_model->clear();
    dp->m_model->loadData(iData);
}

QVariantList HwWidgetD::getTableData()
{
    return dp->m_model->allDataMap();
}

void HwWidgetD::clear()
{
    dp->m_dataRate->clear();
    dp->m_model->clear(true);
}

void HwWidgetD::setDataRate()
{
    double data_rate = GApp->getReaderHeader("data_rate").toDouble();
    dp->m_dataRate->setText(QString("%1").arg(data_rate));
}

void HwWidgetD::setTableData()
{
    QVariantList variables = GApp->getVariables();
    dp->m_model->clear();
    dp->m_model->loadData(dp->getTableData(variables));
}

void HwWidgetD::setVarValues(const QVariantMap &iData)
{
    static QElapsedTimer timer;
    if (dp->m_isStart)
    {
        int t = timer.elapsed();
//        if (t < 33) // 1s刷新30次
        if (t < 40) // 1s刷新25次
            return;
        else
            timer.restart();
    }
    else
    {
        timer.start();
        dp->m_isStart = true;
    }

    for (const QString &var_name : dp->m_rowIndex.keys())
    {
        int row = dp->m_rowIndex.value(var_name);
        double value = iData.value(var_name).toDouble();

        double &min_value  = dp->m_minValue[var_name];
        min_value = qMin(value, min_value);

        double &max_value = dp->m_maxValue[var_name];
        max_value = qMax(value, max_value);

        QVariantMap &row_data = dp->m_tableData[var_name];
        row_data.insert("value", value);
        row_data.insert("min", min_value);
        row_data.insert("max", max_value);
        dp->m_model->setRowData(row, row_data);
    }

#if 0
    qDebug() << QTime::currentTime().toString("hh:mm:ss:zzz");
#endif
}
