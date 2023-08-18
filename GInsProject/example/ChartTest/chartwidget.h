#ifndef CHARTWIDGET_H
#define CHARTWIDGET_H

#include <QWidget>
#include <QtCharts>

QT_CHARTS_USE_NAMESPACE

class ChartWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ChartWidget(QWidget *iParent = nullptr);

    void init();

public slots:
    void setData(const QList<int> &iDataList);

private:
    QChart *m_chart = nullptr;
    QLineSeries *m_series = nullptr;
    QValueAxis *m_xAsix = nullptr;
    QValueAxis *m_yAsix = nullptr;
};

#endif // CHARTWIDGET_H
