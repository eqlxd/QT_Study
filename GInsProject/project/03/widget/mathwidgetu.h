#ifndef MATHWIDGETU_H
#define MATHWIDGETU_H

#include <gglobal/dpoint.h>
#include <QWidget>

// 数学运算主界面上半部分
class MathWidgetU : public QWidget
{
    Q_OBJECT
    G_DECLARE_DP(MathWidgetU)
public:
    explicit MathWidgetU(QWidget *iParent = nullptr);

    void clear();

signals:
    void rosettesSeted(const QVariantMap &iData);
    void pcbSeted(const QVariantMap &iData);

    void startWrite();
    void startSaveFile(const QString &iPath);
    void stopSaveFile();
};

#endif // MATHWIDGETU_H
