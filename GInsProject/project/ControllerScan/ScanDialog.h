#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDialogButtonBox>
#include <QLabel>
#include <QPushButton>
#include <QStandardItemModel>
#include <QTableView>

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


    //参考extension
};
#endif // DIALOG_H
