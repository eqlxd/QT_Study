#ifndef DIALOGFORCONTROLLERSCANDEMO_H
#define DIALOGFORCONTROLLERSCANDEMO_H

#include <QDialog>
#include <QLabel>
#include <QPushButton>
#include <QTextBrowser>
#include<ScanDialog.h>


class DialogForControllerScanDemo: public QDialog
{
    Q_OBJECT
public:
    DialogForControllerScanDemo(QWidget *parent = nullptr);
    ~DialogForControllerScanDemo();
private:
    QPushButton* PressForDemo00;
    QLabel *IPhere;
    QTextBrowser *IPshowhere;

public slots:
    void OnPressForDemo00();


};

#endif // DIALOGFORCONTROLLERSCANDEMO_H
