#ifndef CHARTWIDGET_H
#define CHARTWIDGET_H

#include <gglobal/dpoint.h>
#include <QWidget>

class ChartWidget : public QWidget
{
    Q_OBJECT
    G_DECLARE_DP(ChartWidget)
public:
    explicit ChartWidget(QWidget *iParent = nullptr);

    void initLayout();

signals:
    void backToMain();
};

#endif // CHARTWIDGET_H
