#ifndef HWWIDGETU_H
#define HWWIDGETU_H

#include <gglobal/dpoint.h>
#include <QWidget>

// 硬件通道主界面上半部分
class HwWidgetU : public QWidget
{
    Q_OBJECT
    G_DECLARE_DP(HwWidgetU)
public:
    explicit HwWidgetU(QWidget *iParent = nullptr);

    void setIpAddress(const QString &iIp);
    QString getIpAddress();

    void setConnectOk();

    void clear();
};

#endif // HWWIDGETU_H
