#ifndef SETROSETTESWIDGET_H
#define SETROSETTESWIDGET_H

#include <gglobal/dpoint.h>
#include <QDialog>

class SetRosettesWidget : public QDialog
{
    Q_OBJECT
    G_DECLARE_DP(SetRosettesWidget)
public:
    explicit SetRosettesWidget(QWidget *iParent = nullptr);

    void setData(const QVariantMap &iData);
    QVariantMap getData();

public:
    void accept() override;
};

#endif // SETROSETTESWIDGET_H
