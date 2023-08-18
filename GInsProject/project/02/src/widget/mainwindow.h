#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <gglobal/dpoint.h>
#include <gwidget/gruninfowidget.h>
#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT
    G_DECLARE_DP(MainWindow)
public:
    explicit MainWindow(QWidget *iParent = nullptr);
    ~MainWindow();

    void initLayout();

protected:
    void keyPressEvent(QKeyEvent *iEvent) override;
    void closeEvent(QCloseEvent *) override;
};
#endif // MAINWINDOW_H
