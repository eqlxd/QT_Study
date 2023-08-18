#ifndef DIALOG_H
#define DIALOG_H

#include <QString>
#include <QDialog>
#include <QDialogButtonBox>
#include <QLabel>
#include <QPushButton>
#include <QStandardItemModel>
#include <QTableView>
#include "GInsDataInterface.hpp"
#include "GInsNetworkScan.hpp"
#include "eGateHighSpeedPort.h"

//after press"begin scan",scan starting
//for code be easily check, put the scan and scan result in the ScanDialog()


class ScanDialog : public QDialog
{
    Q_OBJECT

public:
    ScanDialog(QWidget *parent = nullptr);
    ~ScanDialog();

private:
    QLabel *Tipslabel;
    QTableView* ScanTable;
    QStandardItemModel* ScanModel;
    QPushButton *ReScanButton;
    QPushButton *OkButton;
    QPushButton *CancelButton;
    QDialogButtonBox *buttonBox;
   // QString IPA;

public:
    int x_acc;
    int y_rej;
    QVariant IpChosen;
    void ReturnControllerInfo();

public slots:
    void check00();
    void accept();
    void reject();
    //参考extension
};
#endif // DIALOG_H
