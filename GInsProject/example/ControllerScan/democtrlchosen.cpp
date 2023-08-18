#include "democtrlchosen.h"
#include "ScanDialog.h"
#include <QVBoxLayout>
#include <QDebug>

DemoCtrlChosen::DemoCtrlChosen(QWidget *parent)
: QDialog(parent)
{//初始化对话框里的所有控件
    StartScan = new QPushButton(tr("进入扫描"));

    IPshow    = new QLabel(tr("仪器IP"));
    IPshowhere =new QLineEdit();
    //IPshowhere无法编辑
    IPshowhere->setReadOnly(true);

//设置尺寸
    StartScan->setIconSize(QSize(10,20));
    IPshow->setFixedHeight(20);




//做一个vertical的layout，把StartScan和IPshow，IPshowhere放进去
    QVBoxLayout *DccMainlayout = new QVBoxLayout;



    DccMainlayout->addWidget(StartScan,0);
    DccMainlayout->addWidget(IPshow,1);
    DccMainlayout->addWidget(IPshowhere,2);
    setLayout(DccMainlayout);


    this->resize(QSize(600, 300));

    connect(StartScan,SIGNAL(clicked()),this,SLOT(StartScanF()));

}

DemoCtrlChosen::~DemoCtrlChosen()
{

}

void DemoCtrlChosen::StartScanF()
{
    //after press"begin scan",scan starting
    //for code be easily check, put the scan and scan result in the ScanDialog()
    ScanDialog *MyDialog = new ScanDialog();
    int a;
    a = MyDialog->exec();
    if(a == QDialog::Accepted)
    {
        IPshowhere->setText(MyDialog->IpChosen.toString());

    }
    else IPshowhere->clear();



}


