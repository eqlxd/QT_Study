#ifndef WIDGET_H
#define WIDGET_H

#include <gglobal/dpoint.h>
#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT
    G_DECLARE_DP(Widget)
public:
    explicit Widget(QWidget *iParent = nullptr);
    ~Widget();
};
#endif // WIDGET_H
