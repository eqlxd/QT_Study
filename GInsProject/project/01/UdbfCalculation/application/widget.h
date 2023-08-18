#ifndef WIDGET_H
#define WIDGET_H

#include <fglobal/fglobal.h>
#include <QWidget>

class QKeyEvent;
class QCloseEvent;
class Widget : public QWidget
{
    Q_OBJECT
    F_DECLARE_PRIVATE(Widget)
public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

    void setLicenseData(const QString &iStartDate, const QString &iEndDate);

protected:
    void keyPressEvent(QKeyEvent *iEvent);
    void closeEvent(QCloseEvent *iEvent);
};
#endif // WIDGET_H
