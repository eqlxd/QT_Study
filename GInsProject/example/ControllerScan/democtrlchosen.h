#ifndef DEMOCTRLCHOSEN_H
#define DEMOCTRLCHOSEN_H
#include <QDialog>
#include <QDialogButtonBox>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class DemoCtrlChosen: public QDialog
{
    Q_OBJECT
public:
    DemoCtrlChosen(QWidget *parent = nullptr);
    ~DemoCtrlChosen();

private:
    QPushButton *StartScan;
    QLabel *IPshow;
    QLineEdit *IPshowhere;

private slots:
    void StartScanF();
};

#endif // DEMOCTRLCHOSEN_H
