#ifndef WIDGET_H
#define WIDGET_H

#include "dscheckcombomodel.h"
#include <QWidget>
#include <QComboBox>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    DSCheckComboBox *m_combox = nullptr;
};
#endif // WIDGET_H
