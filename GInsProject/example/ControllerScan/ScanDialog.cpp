#include "ScanDialog.h"
#include <QAbstractItemView>
#include <QDebug>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QMessageBox>
#include <QSize>
#include <QStringList>
#include <QThread>
#include <QDebug>






ScanDialog::ScanDialog(QWidget *parent)
    : QDialog(parent)
{

    ReturnControllerInfo();
//初始化对话框里的所有控件
    Tipslabel = new QLabel(tr("Choose Controller from below List")) ;
    ScanTable = new QTableView(this);
    ScanModel = new QStandardItemModel(ScanTable);
    ReScanButton = new QPushButton(tr("重新扫描"));
    CancelButton = new QPushButton(tr("取消"));
    OkButton = new QPushButton(tr("确认"));

//将ok与cancel绑定为一个buttonbox
    //先把尺寸固定好
    OkButton->setIconSize(QSize(10, 20));
    CancelButton->setIconSize(QSize(10, 20));
    buttonBox =  new QDialogButtonBox(Qt::Horizontal);
    buttonBox->addButton(OkButton, QDialogButtonBox::AcceptRole);
    buttonBox->addButton(CancelButton, QDialogButtonBox::RejectRole);

    ReScanButton->setIconSize(QSize(10, 20));
//将确认取消按钮与accept和cancel连接
    connect(OkButton,SIGNAL(clicked()),this,SLOT(accept()));
    connect(CancelButton,SIGNAL(clicked()),this,SLOT(reject()));

//做一个Grid的layout，
    QGridLayout *BottomRightLayout = new QGridLayout;
    BottomRightLayout->addWidget(ReScanButton,0,0);
    BottomRightLayout->addWidget(buttonBox,0,2);


//做一个grid的model，给table
    ScanModel->setItem(0,0,new QStandardItem("张三"));
    ScanModel->setItem(0,1,new QStandardItem("3"));
    ScanModel->setItem(0,2,new QStandardItem("man"));
    ScanModel->setItem(1,0,new QStandardItem("李三"));
    ScanModel->setItem(1,1,new QStandardItem("4"));
    ScanModel->setItem(1,2,new QStandardItem("man"));

    //table的列表：QstandardItemmodle里实现列表头,
    QStringList Shlqlist = QStringList()<<"IPA" << "SNM"<< "GWA" << "Firmware"<<"partno.";
    ScanModel->setHorizontalHeaderLabels(Shlqlist);


    //表格不能编辑
    ScanTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //选择整行
    ScanTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    //一次只能选择单行
    ScanTable->setSelectionMode(QAbstractItemView::SingleSelection);
    ScanTable->verticalHeader()->hide(); //必须引用QHeaderView头，隐藏行表头
    ScanTable->horizontalHeader()->setStyleSheet("QHeaderView::section{background:lightgray;}");//设置列表头背景颜色
    ScanTable->horizontalHeader()->setHighlightSections(false);//选中行item后，表头不要高亮
    ScanTable->setModel(ScanModel);
    //ScanTable->setIconSize(QSize(500, 800));




//做一个vertical的layout，把label和grid layout放进去
    QVBoxLayout *ScanMainLayout = new QVBoxLayout;
    ScanMainLayout->addWidget(Tipslabel);
    ScanMainLayout->addWidget(ScanTable);

    ScanMainLayout->addLayout(BottomRightLayout);


    setLayout(ScanMainLayout);
    setWindowTitle(tr("请选择一个控制器"));
    this->resize(QSize(600, 300));

    x_acc = 10;
    y_rej =20;

}

ScanDialog::~ScanDialog()
{

}

void ScanDialog::ReturnControllerInfo()
{
    qint32 HCONNECTION = -1,																	//integer value to remember a connection
          HCLIENT = -1;																		//integer value to remember a client (a connection can have multiple clients)
    quint32	ret=0,																				//some global variables
                    ChannelCount=0,
                    ModuleCount=0,
                    ModuleIndex=-1;
    char		tempString[1024]={'\0'};
    double		info=0, outValue=0;

    /*
        测试网络寻找控制器
        */
    qint32 ExtCommand = 0;
    qint64 ScanTime = 0.5;
    char AdapterInfo[1024] = {'\0'};
    char DeviceInfo[1024] = {'\0'};
    char ErrorString[1024] = {'\0'};

    if ((ret = _CDDLG_IdentifyDevices_First(ExtCommand, ScanTime, AdapterInfo, DeviceInfo, ErrorString)) != 1) //返回值为0，证明返回的字符串包含控制器信息，可解析
        //_CDDLG_IdentifyDevices_First里的DeviceInfo是char*类型
        //字符串的解析：字符数组：char  str[10] = "hello"；，，前面已经说了，str = &str[0] ， 也等于 "hello"的首地址。。
        {


//            qDebug() << "identifydevices run successfully,ret:" << ret << endl;
//            qDebug() << "AdapterInfo:" << AdapterInfo << endl;
               qDebug()<< "DeviceInfo:" << DeviceInfo << endl;
//            qDebug()<< "ErrorString:" << ErrorString << endl;

//DeviceInfo: SID:3	OAN:Q.station-XB	OVN:GANTNER instruments	SAN:Q.station-XB	SVN:GANTNER instruments	LOC:slave	MKC:175009
//MID:175-9-6381921-0#	SNR:752847	ASK:STATIC	IPA:192.168.0.134	SNM:255.255.255.0	GWA:192.168.0.1	MAA:00:30:d6:21:cc:16
//UID:b6f907dc-2adb-11eb-962e-98fa9b73e982	EXTSID:0	EXTAPPVER:V2.14 B12 2020-09-17 	EXTETHSTATIPA:192.168.0.134
                QString IPA = DeviceInfo;
                qDebug()<< "IPA:" << (IPA.section("\t",10,10)).mid(4,-1)<< endl;







            while ((ret = _CDDLG_IdentifyDevices_Next(AdapterInfo, DeviceInfo, ErrorString)) != 1)//返回值为0，解析字符串
            {
                qDebug() << "AdapterInfo:" << AdapterInfo << endl;
                qDebug() << "DeviceInfo:" << DeviceInfo << endl;
                qDebug() << "ErrorString:" << ErrorString << endl;
            }
        }
        else
            {
                    qDebug()<< "ret:" << ret << endl;
                    qDebug() << "finish" << endl;


             }




   //necessary info:    IPA:192.168.0.134	SNM:255.255.255.0	GWA:192.168.0.1
}

void ScanDialog::check00()
{
    qDebug()<<"check00";
}

void ScanDialog::accept()
{

   //qDebug()<<"22211 press";

    QModelIndexList mySelectionIndexs = ScanTable->selectionModel()->selectedIndexes();
    if(!(mySelectionIndexs.isEmpty()))
    {
        IpChosen= mySelectionIndexs[0].data();
        QDialog::accept();
    }
    else
    {
        QMessageBox mymsgBox;
        mymsgBox.setText(tr("please choose Controller"));
        mymsgBox.exec();

    }


}

void ScanDialog::reject()
{
     //qDebug()<<"reject press";
     QDialog::reject();

}




