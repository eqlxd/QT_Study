#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPaintEvent>

class Widget : public QWidget
{
    Q_OBJECT
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void paintEvent(QPaintEvent *) override;

public slots:
    void setData(const QList<int> &iDataList);

private:
    qreal m_xRange = 0.0;
    qreal m_yRange = 0.0;

    QList<int> m_dataList;

    int m_maxCount = 100;
};
#endif // WIDGET_H
