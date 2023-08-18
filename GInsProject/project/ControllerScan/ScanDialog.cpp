#include "ScanDialog.h"

#include <QHBoxLayout>
#include <QHeaderView>
#include <QSize>
#include <QStringlist>

ScanDialog::ScanDialog(QWidget *parent)
    : QDialog(parent)
{
//初始化对话框里的所有控件
    Tipslabel = new QLabel(tr("双击选中条目以打开扫描到的仪器"));
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

    //QstandardItemmodle里实现列表头
    QStringList Shlqlist = QStringList()<<"IP" << "Controller"<< "Serial" << "Firmware";
    ScanModel->setHorizontalHeaderLabels(Shlqlist);


    //表格不能编辑
    ScanTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    //选择整行
    ScanTable->setSelectionBehavior(QAbstractItemView::SelectRows);

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


}

ScanDialog::~ScanDialog()
{

}

