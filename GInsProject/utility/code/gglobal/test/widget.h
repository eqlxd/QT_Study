#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <gglobal/license.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_get_info_button_clicked();

    void on_generate_button_clicked();

    void on_auth_button_clicked();

private:
    Ui::Widget *ui;

    GLicense *m_license = nullptr;
};
#endif // WIDGET_H
