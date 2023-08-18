#ifndef TEST_MAINWINDOW_H
#define TEST_MAINWINDOW_H

#include <gglobal/dpoint.h>
#include <QMainWindow>

class TestMainWindow : public QMainWindow
{
    Q_OBJECT
    G_DECLARE_DP(TestMainWindow)
public:
    explicit TestMainWindow(QWidget *iParent = nullptr);
    ~TestMainWindow();

protected:
    void closeEvent(QCloseEvent *) override;
};
#endif // TEST_MAINWINDOW_H
