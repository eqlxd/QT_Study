#include "widget.h"
#include "runinfowidget.h"
#include "tabledelegate.h"
#include "filedelegate.h"
#include "generatethread.h"
#include "../UdbfParser/udbfparser.h"
#include <Qt/FqUtility/fqdataconvert.h>
#include <Qt/FqWidgets/fqtablemodel.h>
#include <Qt/FqWidgets/fqtableview.h>
#include <Qt/FqWidgets/fqcombobox.h>
#include <Qt/FqUtility/fqtimer.h>
#include <Qt/FqUtility/fqfilesystem.h>
#include <QDebug>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QDoubleSpinBox>
#include <QDir>
#include <QFileDialog>
#include <QFileInfo>
#include <QProgressBar>
#include <QMessageBox>
#include <QThread>
#include <QKeyEvent>
#include <QCloseEvent>
#include <QTabWidget>
#include <QEventLoop>
#include <QHeaderView>
#include <QMenu>
#include <QApplication>

# if IS_WINDOWS
    /* QtCreator + VS编译器时，设置执行字符集为UTF8！！！*/
    #pragma execution_character_set("utf-8")
#endif

/********************************* FormRowWidget *********************************/
class LabelSpinBox : public QWidget
{
    Q_OBJECT
public:
    explicit LabelSpinBox(const QString &iTitle, QWidget *iSpinBox, QWidget *iParent = nullptr)
        : QWidget(iParent)
    {
        m_label = new QLabel(iTitle, this);

        QHBoxLayout *hbox = new QHBoxLayout(this);
        hbox->addWidget(m_label);
        hbox->addWidget(iSpinBox);
        hbox->setMargin(0);
        hbox->setSpacing(5);
    }

    QLabel *m_label;
};

/********************************* FormRowWidget *********************************/
class FormRowWidget : public QWidget
{
    Q_OBJECT
public:
    explicit FormRowWidget(QWidget *iWidget1, QWidget *iWidget2, QWidget *iParent)
        : QWidget(iParent)
    {
        QHBoxLayout *hbox = new QHBoxLayout(this);
        hbox->addWidget(iWidget1);
        hbox->addWidget(iWidget2);
        hbox->setMargin(0);
    }
};

/********************************* WidgetPrivate *********************************/
class WidgetPrivate : public QObject
{
    Q_OBJECT
public:
    explicit WidgetPrivate(Widget *iParent)
        : QObject(iParent), dd(iParent),
          m_inputFileEdit(nullptr), m_outputFileEdit(nullptr),
          m_inputBtn(nullptr), m_outputBtn(nullptr),
          m_addBtn(nullptr), m_removeBtn(nullptr),
          m_spinboxE(nullptr), m_spinboxV(nullptr),
          m_channelModel(nullptr), m_channelView(nullptr), m_channelDelegate(nullptr),
          m_generateBtn(nullptr), m_bar(nullptr), m_tabWidget(nullptr)
    {
        m_runInfo = new RunInfoWidget;
    }

    ~WidgetPrivate()
    {
    }

    Widget * const dd;
    RunInfoWidget *m_runInfo;
    QLineEdit *m_inputFileEdit;
    QLineEdit *m_outputFileEdit;
    QPushButton *m_inputBtn;
    QPushButton *m_outputBtn;
    QPushButton *m_addBtn;
    QPushButton *m_removeBtn;
    QDoubleSpinBox *m_spinboxE;
    QDoubleSpinBox *m_spinboxV;
    FqTableModel *m_channelModel;
    FqTableView *m_channelView;
    TableDelegate *m_channelDelegate;
    QPushButton *m_generateBtn;
    QProgressBar *m_bar;
    QTabWidget *m_tabWidget;
    FqTableModel *m_fileModel;
    FqTableView *m_fileView;
    FileDelegate *m_fileDelegate;
    QMap<QString, UdbfParser *> m_parserMap;

    QString m_startDate, m_endDate;

    void initLayout();
    void initChannelTableView();
    void initFileTableView();
    void loadConfig(const QString &iConfigName);

public slots:
    void onLoadConfig();
    void onSetInputFile();
    void onSetOutputFile();
    void onAddChannel();
    void onRemoveChannel();
    void onGenerate();

    void onSetBarRange(ulong iMax);
    void onSetDisable();
    void onSetEnable();

    void onShowMenu(const QPoint &pos);
    void onImportChannels();
    void onExportChannels();

    void showRunInfo();
    void showLicenseInfo();
    void showVersion();
};

void WidgetPrivate::initLayout()
{
    m_inputFileEdit = new QLineEdit(dd);
    m_outputFileEdit = new QLineEdit(dd);

#if 0
    QRegExp regx("^[a-zA-Z][a-zA-Z0-9_\\/]{0,5}$");
    QValidator *validator = new QRegExpValidator(regx, dd);
    m_outputFileEdit->setValidator(validator);
#endif
    m_inputBtn = new QPushButton("...", dd);
    m_outputBtn = new QPushButton("...", dd);
    m_inputBtn->setFixedWidth(30);
    m_outputBtn->setFixedWidth(30);

    QFormLayout *formlayout = new QFormLayout;
    formlayout->addRow("输入文件夹:", new FormRowWidget(m_inputFileEdit, m_inputBtn, dd));
    formlayout->addRow("输出文件夹:", new FormRowWidget(m_outputFileEdit, m_outputBtn, dd));

    QWidget *table_widget = new QWidget(dd);
    {
        initFileTableView();

        QVBoxLayout *vbox = new QVBoxLayout(table_widget);
        vbox->setMargin(0);
        vbox->setSpacing(0);
        vbox->addWidget(m_fileView);
    }

    QWidget *config_widget = new QWidget(dd);
    {
        m_addBtn = new QPushButton("+", dd);
        m_removeBtn = new QPushButton("-", dd);

        m_spinboxE = new QDoubleSpinBox(dd);
        m_spinboxV = new QDoubleSpinBox(dd);
        m_spinboxE->setRange(-999999, 999999);
        m_spinboxE->setDecimals(6);
        m_spinboxV->setRange(-999999, 999999);
        m_spinboxV->setDecimals(6);
        LabelSpinBox *spinbox_e = new LabelSpinBox("E:", m_spinboxE, dd);
        LabelSpinBox *spinbox_v = new LabelSpinBox("V:", m_spinboxV, dd);

        QHBoxLayout *hbox = new QHBoxLayout;
        hbox->setMargin(0);
        hbox->addWidget(m_addBtn);
        hbox->addWidget(m_removeBtn);
        hbox->addStretch();
        hbox->addWidget(spinbox_e);
        hbox->addWidget(spinbox_v);

        initChannelTableView();

        QVBoxLayout *vbox = new QVBoxLayout(config_widget);
        vbox->setMargin(0);
        vbox->addLayout(hbox);
        vbox->addWidget(m_channelView);
    }

    m_tabWidget = new QTabWidget(dd);
    m_tabWidget->addTab(table_widget, "UDBF文件");
    m_tabWidget->addTab(config_widget, "通道计算配置");

    m_generateBtn = new QPushButton("生成", dd);

    m_bar = new QProgressBar(dd);
    m_bar->setFixedHeight(10);
    m_bar->setTextVisible(false);
    QString process_ss = "QProgressBar {"
                             "    border: 2px solid grey;"
                             "    border-radius: 5px;"
                             "    text-align: center;"
                             "}"
                             "QProgressBar::chunk {"
                             "    background-color: lightgreen;"
                             "    width: 20px;"
                             "}";
    m_bar->setStyleSheet(process_ss);

    QVBoxLayout *main_box = new QVBoxLayout(dd);
    main_box->addLayout(formlayout);
    main_box->addWidget(m_tabWidget);
    main_box->addWidget(m_generateBtn);
    main_box->addWidget(m_bar);
    m_bar->hide();

    connect(m_inputFileEdit, &QLineEdit::editingFinished, this, &WidgetPrivate::onSetInputFile);
    connect(m_inputBtn, &QPushButton::clicked, this, &WidgetPrivate::onSetInputFile);
    connect(m_outputBtn, &QPushButton::clicked, this, &WidgetPrivate::onSetOutputFile);
    connect(m_addBtn, &QPushButton::clicked, this, &WidgetPrivate::onAddChannel);
    connect(m_removeBtn, &QPushButton::clicked, this, &WidgetPrivate::onRemoveChannel);
    connect(m_generateBtn, &QPushButton::clicked, this, &WidgetPrivate::onGenerate);
}

void WidgetPrivate::initChannelTableView()
{
    QVariantList head_items;
    head_items << FqTableModel::tableHeadItem("ch_name", "通道名称");
    head_items << FqTableModel::tableHeadItem("ch1", "计算通道1", Qt::AlignCenter, false, "Combox");
    head_items << FqTableModel::tableHeadItem("ch2", "计算通道2", Qt::AlignCenter, false, "Combox");
    head_items << FqTableModel::tableHeadItem("ch3", "计算通道3", Qt::AlignCenter, false, "Combox");
    head_items << FqTableModel::tableHeadItem("type", "计算类型", Qt::AlignCenter, false, "Combox");
    head_items << FqTableModel::tableHeadItem("algorithm", "算法名称", Qt::AlignCenter, false, "Combox");

    m_channelModel = new FqTableModel(this);
    m_channelModel->setHeadItems(head_items);
    m_channelModel->setAllEditable();

    QVariantList combox_list1, combox_list2;
    {
        QVariantMap item1, item2;
        item1.insert("name", 0);
        item1.insert("text", "DR");

        item2.insert("name", 1);
        item2.insert("text", "RR");

        combox_list1 << item1 << item2;
    }
    {
        QVariantMap item1, item2, item3, item4, item5, item6;
        item1.insert("name", 0);
        item1.insert("text", "Max stress");

        item2.insert("name", 1);
        item2.insert("text", "Min stress");

        item3.insert("name", 2);
        item3.insert("text", "Shear stress");

        item4.insert("name", 3);
        item4.insert("text", "Max strain");

        item5.insert("name", 4);
        item5.insert("text", "Min strain");

        item6.insert("name", 5);
        item6.insert("text", "Angle");

        combox_list2 << item1 << item2 << item3 << item4 << item5 << item6;
    }

    m_channelDelegate = new TableDelegate(this);
    m_channelDelegate->setComboBoxItemList(4, combox_list1);
    m_channelDelegate->setComboBoxItemList(5, combox_list2);

    m_channelView = new FqTableView(dd);
    m_channelView->setModel(m_channelModel);
    m_channelView->setItemDelegate(m_channelDelegate);
    m_channelView->setSelectionBehavior(QAbstractItemView::SelectRows);
    m_channelView->setSelectionMode(QAbstractItemView::ExtendedSelection);
    m_channelView->setContextMenuPolicy(Qt::CustomContextMenu);
    m_channelView->setColumnWidth(0, 150);
    m_channelView->setColumnWidth(1, 150);
    m_channelView->setColumnWidth(2, 150);
    m_channelView->setColumnWidth(3, 150);
    connect(m_channelView, &FqTableView::customContextMenuRequested, this, &WidgetPrivate::onShowMenu);
}

void WidgetPrivate::initFileTableView()
{
    QVariantList head_items;
    head_items << FqTableModel::tableHeadItem("file_name", "文件", Qt::AlignLeft | Qt::AlignVCenter);
    head_items << FqTableModel::tableHeadItem("progress", "进度", Qt::AlignCenter);

    m_fileModel = new FqTableModel(this);
    m_fileModel->setHeadItems(head_items);

    m_fileDelegate = new FileDelegate(this);
    m_fileDelegate->setColumn(1);

    m_fileView = new FqTableView(dd);
    m_fileView->setModel(m_fileModel);
    m_fileView->setItemDelegate(m_fileDelegate);
    m_fileView->setSelectionBehavior(QAbstractItemView::SelectRows);
    m_fileView->setSelectionMode(QAbstractItemView::ExtendedSelection);
//    m_fileView->horizontalHeader()->setSectionResizeMode(QHeaderView::Interactive);
    m_fileView->setColumnWidth(0, 400);
    m_fileView->setColumnWidth(1, 400);
}

void WidgetPrivate::loadConfig(const QString &iConfigName)
{
    m_channelModel->clear();

    QString json_config = FqFileSystem::fileString(iConfigName);
    QVariantMap cfg_data = FqDataConvert::jsonString2Variant(json_config).toMap();

//    QString input_file = cfg_data.value("input").toString();
//    QString output_file = cfg_data.value("output").toString();
    double e = cfg_data.value("E", 0.0).toDouble();
    double v = cfg_data.value("V", 0.0).toDouble();
//    m_inputFileEdit->setText(QDir::toNativeSeparators(input_file));
//    m_outputFileEdit->setText(QDir::toNativeSeparators(output_file));
    m_spinboxE->setValue(e);
    m_spinboxV->setValue(v);

    QVariantList list = cfg_data.value("channels").toList();
    QVariantList channel_list;
    for (QVariant var : list)
    {
        QVariantMap item = var.toMap();

        QVariantMap data;
        data.insert("ch_name", item.value("ch_name"));

        data.insert("ch1.combox", item.value("ch1"));
        data.insert("ch1", item.value("ch1_text"));

        data.insert("ch2.combox", item.value("ch2"));
        data.insert("ch2", item.value("ch2_text"));

        data.insert("ch3.combox", item.value("ch3"));
        data.insert("ch3", item.value("ch3_text"));

        data.insert("type.combox", item.value("type"));
        data.insert("type", item.value("type_text"));

        data.insert("algorithm.combox", item.value("algorithm"));
        data.insert("algorithm", item.value("algo_text"));
        channel_list << data;
    }
    m_channelModel->loadData(channel_list);
}

void WidgetPrivate::onLoadConfig()
{
    loadConfig("config.cfg");
}

void WidgetPrivate::onSetInputFile()
{
    QString file_dir;
    // 按钮触发
    if (qobject_cast<QPushButton *>(this->sender()))
    {
        file_dir = QFileDialog::getExistingDirectory(nullptr, "选择UDBF文件夹");
        if (file_dir.isEmpty())
            return;

        m_inputFileEdit->setText(QDir::toNativeSeparators(file_dir));
    }
    // 输入框触发
    if (qobject_cast<QLineEdit *>(this->sender()))
    {
        file_dir = m_inputFileEdit->text();
    }

    if (file_dir.isEmpty())
    {
        file_dir = m_inputFileEdit->text();
    }

    QDir input_dir(file_dir);
    if(!input_dir.exists())
    {
        QMessageBox::warning(nullptr, "设置输入文件", "文件路径错误！");
        return;
    }

    m_bar->setValue(0);
    for (UdbfParser *parser : m_parserMap.values())
    {
        delete parser;
        parser = nullptr;
    }
    m_parserMap.clear();
    m_fileDelegate->clear();

    if (m_outputFileEdit->text().isEmpty() && !file_dir.isEmpty())
    {
        QString output_path = file_dir + "/output";
        m_outputFileEdit->setText(QDir::toNativeSeparators(output_path));
    }

    input_dir.setFilter(QDir::Files);

    QVariantList table_data;
    QFileInfoList info_list = input_dir.entryInfoList();
    for (int n = 0; n < info_list.count(); ++n)
    {
        QFileInfo info = info_list.at(n);
        if (info.suffix() != "dat")
            continue;

        QString file_path = QDir::toNativeSeparators(info.absoluteFilePath());
        QVariantMap data;
        data.insert("file_name", file_path);

        UdbfParser *parser = new UdbfParser;
        m_parserMap.insert(file_path, parser);

        QString error;
        if (!parser->loadData(file_path, &error))
        {
            qWarning() << file_path << error;
            continue;
        }

        m_fileDelegate->addProcessbar(n, 0, parser->getDataCount());
        table_data << data;

        // 取第一个文件的文件头数据做为通道配置参数
        if (n == 0)
        {
            int index = 0;
            QVariantList item_list;
            for (auto ch_name : parser->getChannelNames())
            {
                QVariantMap item;
                item.insert("name", QString::number(++index));
                item.insert("text", ch_name);
                item_list << item;
            }

            m_channelDelegate->setComboBoxItemList(1, item_list);
            m_channelDelegate->setComboBoxItemList(2, item_list);
            m_channelDelegate->setComboBoxItemList(3, item_list);
        }
    }
    m_fileModel->clear();
    m_fileModel->loadData(table_data);
//    m_fileView->resizeColumnsToContents();
}

void WidgetPrivate::onSetOutputFile()
{
    QString file_name = QFileDialog::getSaveFileName(nullptr, "设置输出文件", QString(), "UDBF (*.dat)");
    if (file_name.isEmpty())
        return;

    m_outputFileEdit->setText(QDir::toNativeSeparators(file_name));
}

void WidgetPrivate::onAddChannel()
{
    QVariantMap data;
    data.insert("ch_name", QString("Channel%1").arg(m_channelModel->rowCount() + 1));
    data.insert("ch1", "");
    data.insert("ch2", "");
    data.insert("ch3", "");
    data.insert("type", "");
    data.insert("algorithm", "");
    m_channelModel->addRow(data);
}

void WidgetPrivate::onRemoveChannel()
{
    const QModelIndexList indexs = m_channelView->selectedIndexes();

    QModelIndexList sort_indexs = indexs;
    qSort(sort_indexs.begin(), sort_indexs.end(), [=](const QModelIndex &iIndex1, const QModelIndex &iIndex2) -> bool {
        return iIndex2.row() < iIndex1.row();
    });

    for (auto index : sort_indexs)
    {
        m_channelModel->removeRow(index.row());
    }
}

void WidgetPrivate::onGenerate()
{
    QString output_dir = m_outputFileEdit->text();
    if (output_dir.isEmpty())
    {
        QMessageBox::warning(nullptr, "生成文件", "输出路径不能为空！");
        return;
    }

    QDir out_dir(output_dir);
    if (!out_dir.exists())
    {
        out_dir.mkpath(output_dir);
    }

    QVariantList algo_list = m_channelModel->allDataMap();
    if (algo_list.isEmpty())
    {
        QMessageBox::warning(nullptr, "生成文件", "通道算法未配置！");
        return;
    }

    QMessageBox::StandardButton btn = QMessageBox::question(nullptr, "生成UDBF文件", "您是否已经配置完毕？");
    if (btn == QMessageBox::No)
        return;

    onSetDisable();

    double e = m_spinboxE->value();
    double v = m_spinboxV->value();

    int row_num = 0;
    QMap<QString, qint64> elapsed_map;
    QVariantList data_list = m_fileModel->allDataMap();

    {
        QVariantList clear_data_list;
        QVariantMap data1, data2;
        data1.insert("progress", 0);
        data2.insert("progress", 0);
        clear_data_list << data1 << data2;
        m_fileModel->setRowsData(QVariantList() << 0 << 1, clear_data_list);
    }

    for (QVariant data : data_list)
    {
        QVariantMap row_data = data.toMap();
        QString file_name = row_data.value("file_name").toString();

        int index1 = file_name.lastIndexOf("\\");
        QString name = file_name.mid(index1 + 1);
        QString output_file_name = output_dir + "\\" + name;

        // 开启多线程处理单个文件的数据
        UdbfParser *parser = m_parserMap.value(file_name);
        GenerateThread *thread = new GenerateThread(output_file_name, parser, algo_list, e, v);

        connect(thread, &GenerateThread::saveFinish, [=, &elapsed_map](qint64 iMs)
        {
            elapsed_map.insert(name, iMs);
        });

        connect(thread, &GenerateThread::step, [=](int iPercent)
        {
            QVariantMap model_data;
            model_data.insert("progress", iPercent);
            m_fileModel->setRowData(row_num, model_data);
        });

        thread->start();

        QEventLoop loop;
        connect(thread, &GenerateThread::saveFinish, &loop, &QEventLoop::quit);
        loop.exec();
        row_num++;

        thread->wait();
        thread->quit();
        thread->deleteLater();
    }

    QString elapsed_msg;
    for (auto key : elapsed_map.keys())
    {
        qint64 sec = elapsed_map.value(key) / 1000;
        QString msg = QString("%1: 耗时 [%2] 秒\n").arg(key).arg(sec);
        elapsed_msg += msg;
        qDebug() << msg;
    }

    QString msg = QString("%1个文件处理完成！\n%2").arg(data_list.size()).arg(elapsed_msg);
    QMessageBox::information(dd, "生成文件", msg);

    onSetEnable();
}

void WidgetPrivate::onSetBarRange(ulong iMax)
{
    m_bar->setRange(0, iMax);
}

void WidgetPrivate::onSetDisable()
{
    m_inputBtn->setEnabled(false);
    m_outputBtn->setEnabled(false);
    m_inputFileEdit->setEnabled(false);
    m_outputFileEdit->setEnabled(false);
    m_addBtn->setEnabled(false);
    m_removeBtn->setEnabled(false);
    m_spinboxE->setEnabled(false);
    m_spinboxV->setEnabled(false);
    m_channelView->setEnabled(false);
    m_generateBtn->setEnabled(false);
}

void WidgetPrivate::onSetEnable()
{
    m_inputBtn->setEnabled(true);
    m_outputBtn->setEnabled(true);
    m_inputFileEdit->setEnabled(true);
    m_outputFileEdit->setEnabled(true);
    m_addBtn->setEnabled(true);
    m_removeBtn->setEnabled(true);
    m_spinboxE->setEnabled(true);
    m_spinboxV->setEnabled(true);
    m_channelView->setEnabled(true);
    m_generateBtn->setEnabled(true);
}

void WidgetPrivate::onShowMenu(const QPoint &iPosition)
{
    QMenu *menu = new QMenu(dd);
    QAction *act_import = menu->addAction("导入");
    QAction *act_export = menu->addAction("导出");
    auto a = connect(act_import, &QAction::triggered, this, &WidgetPrivate::onImportChannels);
    auto b = connect(act_export, &QAction::triggered, this, &WidgetPrivate::onExportChannels);
    menu->exec(QCursor::pos());

    disconnect(a);
    disconnect(b);
    Q_UNUSED(iPosition);
}

void WidgetPrivate::onImportChannels()
{
    QString cfg_path = QFileDialog::getOpenFileName(nullptr, "选择通道配置文件", qApp->applicationDirPath(), "*.cfg");
    if (cfg_path.isEmpty())
        return;

    loadConfig(cfg_path);
    QTimer::singleShot(500, this, &WidgetPrivate::onSetInputFile);
}

void WidgetPrivate::onExportChannels()
{
    QVariantList channel_list = m_channelModel->allDataMap();
    if (channel_list.isEmpty())
    {
        QMessageBox::warning(nullptr, "导出配置", "通道配置为空，不能导出！");
        return;
    }

    QString export_path = QFileDialog::getSaveFileName(nullptr, "选择导出文件夹");
    if (export_path.isEmpty())
        return;

    if (!export_path.endsWith(".cfg"))
    {
        export_path += ".cfg";
    }

    for (int m = 0; m < m_channelModel->rowCount(); ++m)
    {
        QVariantMap data_map = channel_list.at(m).toMap();
        for (int n = 1; n < m_channelModel->columnCount(); ++n)
        {
            QModelIndex index = m_channelModel->index(m, n);
            QString disp_data = m_channelModel->data(index).toString();

            if ((n == 1) || (n == 2) || (n == 3))
                data_map.insert(QString("ch%1_text").arg(n), disp_data);
            else if (n == 4)
                data_map.insert("type_text", disp_data);
            else if (n == 5)
                data_map.insert("algo_text", disp_data);
        }
        channel_list.replace(m, data_map);
    }

    QVariantMap json_map;
//    json_map.insert("input", QDir::toNativeSeparators(m_inputFileEdit->text()));
//    json_map.insert("output", QDir::toNativeSeparators(m_outputFileEdit->text()));
    json_map.insert("E", m_spinboxE->value());
    json_map.insert("V", m_spinboxV->value());
    json_map.insert("channels", channel_list);
    QString json = FqDataConvert::variant2JsonString(json_map);
    FqFileSystem::createFile(export_path, json);
}

void WidgetPrivate::showRunInfo()
{
    m_runInfo->show();
    m_runInfo->activateWindow();
}

void WidgetPrivate::showLicenseInfo()
{
    QString msg = QString("授权开始日期：%1\n授权结束日期：%2").arg(m_startDate).arg(m_endDate);
    QMessageBox::information(nullptr, "授权信息", msg);
}

void WidgetPrivate::showVersion()
{
    QString msg = QString("应用程序版本：   %1\n动态链接库版本：%2")
            .arg("2021-01-12 14:33").arg(UdbfParser::getDllVersion());
    QMessageBox::information(nullptr, "程序版本信息", msg);
}

#include "widget.moc"

/********************************* Widget *********************************/
Widget::Widget(QWidget *parent)
    : QWidget(parent),
      dp(new WidgetPrivate(this))
{
    resize(840, 400);
    dp->initLayout();
}

Widget::~Widget()
{
}

void Widget::setLicenseData(const QString &iStartDate, const QString &iEndDate)
{
    dp->m_startDate = iStartDate;
    dp->m_endDate = iEndDate;

    dp->m_startDate.insert(4, '-');
    dp->m_startDate.insert(7, '-');

    dp->m_endDate.insert(4, '-');
    dp->m_endDate.insert(7, '-');
}

void Widget::keyPressEvent(QKeyEvent *iEvent)
{
    switch(iEvent->key())
    {
    case Qt::Key_F1:
        dp->showRunInfo();
        break;
    case Qt::Key_F2:
        break;
    case Qt::Key_F3:
        break;
    case Qt::Key_F4:
        break;
    case Qt::Key_F5:
        dp->showLicenseInfo();
        break;
    case Qt::Key_F6:
        dp->showVersion();
        break;
    case Qt::Key_F7:
        break;
    case Qt::Key_F8:
        break;
    case Qt::Key_F9:
        break;
    case Qt::Key_F10:
        qDebug() << "###### debug ######";
        break;
    case Qt::Key_F11:
        qWarning() << "###### warning ######";
        break;
    case Qt::Key_F12:
        qCritical() << "###### error ######";
        break;
    }
    QWidget::keyPressEvent(iEvent);
}

void Widget::closeEvent(QCloseEvent *iEvent)
{
    int rtn = QMessageBox::question(nullptr, "关闭系统", "确认关闭系统吗?", QMessageBox::Yes | QMessageBox::No, QMessageBox::No);
    if(rtn == QMessageBox::No)
    {
        iEvent->ignore();
        return;
    }

    if (dp->m_runInfo)
    {
        dp->m_runInfo->deleteLater();
    }

    iEvent->accept();
}
