#ifndef WIDGET_H
#define WIDGET_H

#include <QtWidgets>
#include <QtCharts>
#include <Qt/FqDatabase/fqdatabase>
#include <GInsData/GInsDataInterface.hpp>
#include "xbarr.h"

class Widget : public QWidget
{
    Q_OBJECT
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void initTestChart();

    // 样本图
    void setSampleChart(NtXbarR *iXbarR);

public slots:
    void onBtnClick1();
    void onBtnClick2();
    void onBtnClick3();
    void onBtnClick4();

    void onTimer1();
    void onTimer2();

    void onBtnClick5();

private:
    QChart *m_chart;
    FqDatabaseHelper *m_db;

    QLineSeries *m_series = nullptr;
    QValueAxis *m_axisX = nullptr;
    QDateTimeAxis *m_dateAxisX = nullptr;
    QValueAxis *m_axisY = nullptr;
};
#endif // WIDGET_H
