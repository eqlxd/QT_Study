#ifndef HWWIDGETD_H
#define HWWIDGETD_H

#include <gglobal/dpoint.h>
#include <QWidget>

class HwWidgetD : public QWidget
{
    Q_OBJECT
    G_DECLARE_DP(HwWidgetD)
public:
    explicit HwWidgetD(QWidget *iParent = nullptr);

    bool checkData();

    void setDataRate(const double &iRate);
    double getDataRate();

    void setTableData(const QVariantList &iData);
    QVariantList getTableData();

    void clear();

public slots:
    void setDataRate();
    void setTableData();
    void setVarValues(const QVariantMap &iData);
};

#endif // HWWIDGETD_H
