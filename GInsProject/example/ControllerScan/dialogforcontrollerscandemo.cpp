#include "dialogforcontrollerscandemo.h"



DialogForControllerScanDemo::DialogForControllerScanDemo(QWidget *parent)
    : QDialog(parent)
{
    PressForDemo00 = new QPushButton(tr("点击进入控制器选择"));
    IPhere =  new QLabel(tr("IP地址"));
    IPshowhere = new QTextBrowser();

    QGridLayout *LayDemo00 = new QGridLayout;
    LayDemo00->addWidget(PressForDemo00,0,0);
    LayDemo00->addWidget(IPhere,1,0);
    LayDemo00->addWidget(IPshowhere,1,1);

    setLayout(LayDemo00);

    connect(PressForDemo00,SIGNAL(clicked()),this,SLOT(OnPressForDemo00()));
}

DialogForControllerScanDemo::~DialogForControllerScanDemo()
{

}

void DialogForControllerScanDemo::OnPressForDemo00()
{
    // 1.


    // 2.
    ScanDialog w;
    int result = w.exec();
    if (result == QDialog::Rejected)
        return;

    QVariantList data_list = w.getData();
}
