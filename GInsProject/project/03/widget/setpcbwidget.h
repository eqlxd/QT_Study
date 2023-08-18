#ifndef SETPCBWIDGET_H
#define SETPCBWIDGET_H

#include <gglobal/dpoint.h>
#include <QDialog>

class SetPcbWidget : public QDialog
{
    Q_OBJECT
    G_DECLARE_DP(SetPcbWidget)
public:
    explicit SetPcbWidget(QWidget *iParent = nullptr);

    void setData(const QVariantMap &iData);
    QVariantMap getData();

public:
    void accept() override;
};

#endif // SETPCBWIDGET_H
