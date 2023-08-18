#ifndef WIDGET_H
#define WIDGET_H

#include <QtWidgets>
#include <QKeyEvent>
#include <gwidget/gruninfowidget.h>
#include <gwidget/glineedit.h>

class Widget : public QWidget
{
    Q_OBJECT
public:
    Widget(QWidget *iParent = nullptr);
    ~Widget();

    void initLayout();

protected:
    void keyPressEvent(QKeyEvent *iEvent) override;

private:
    GRunInfoWidget *m_runInfo = nullptr;
    GLineEdit *m_lineEdit = nullptr;
};
#endif // WIDGET_H
