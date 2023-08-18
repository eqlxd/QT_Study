#ifndef MATHWIDGETD_H
#define MATHWIDGETD_H

#include <gglobal/dpoint.h>
#include <QWidget>

class MathWidgetD : public QWidget
{
    Q_OBJECT
    G_DECLARE_DP(MathWidgetD)
public:
    explicit MathWidgetD(QWidget *iParent = nullptr);

    void setMathData(const QVariantMap &iData);
    QVariantMap getMathData();

    void clear();

public slots:
    void setRosetteData(const QVariantMap &iData);
    void setPcbData(const QVariantMap &iData);

    void startWrite();
    void startSaveFile(const QString &iPath);
    void stopSaveFile();
};

#endif // MATHWIDGETD_H
