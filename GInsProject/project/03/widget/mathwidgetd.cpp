#include "mathwidgetd.h"
#include "../globalapp.h"
#include "../giwriter.h"
#include "setrosetteswidget.h"
#include "setpcbwidget.h"
#include <QDebug>
#include <QTreeWidget>
#include <QVBoxLayout>
#include <QPushButton>
#include <QTimer>
#include <QMenu>

#pragma execution_character_set("utf-8")

/***************************** MathWidgetDPrivate *****************************/
class MathWidgetDPrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(MathWidgetD)
public:
    explicit MathWidgetDPrivate(MathWidgetD *iParent)
      : QObject(iParent), dd(iParent)
    {
    }

    QTreeWidget *m_tree = nullptr;
    // key = group_name
    QMap<QString, QPushButton *> m_setButtons;

    // key = group_name
    // value = QVariantMap, 包含Rosettes设置界面的所有数据
    QVariantMap m_uiData;

public:
    void initLayout();
    void setColumnAlign();
    QTreeWidgetItem *getTreeTopItem(const QString &iName);
    bool isTopLevelItem(QTreeWidgetItem *iItem);

    QVariantList getWriteParam();

    void setRosettes(const QVariantMap &iData);
    void setPcb(const QVariantMap &iData);

public slots:
    void onSetGroup();
    void onShowTreeMenu(const QPoint &iPos);
};

void MathWidgetDPrivate::initLayout()
{
    m_tree = new QTreeWidget(dd);
    m_tree->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(m_tree, &QTreeWidget::customContextMenuRequested, this, &MathWidgetDPrivate::onShowTreeMenu);

    QVBoxLayout *vbox = new QVBoxLayout(dd);
    vbox->addWidget(m_tree);

    QStringList header_text = QStringList() << "名称" << "标签" << "单位" << "设置" << "算法类型";
    m_tree->setColumnCount(header_text.count());
    m_tree->setHeaderLabels(header_text);

    QTreeWidgetItem *header_item = m_tree->headerItem();
    for (int n = 0; n < header_text.count(); ++n)
    {
        header_item->setTextAlignment(n, Qt::AlignCenter);
    }

    setColumnAlign();
    m_tree->setColumnWidth(0, 180);
    m_tree->setColumnWidth(1, 520);
    m_tree->setColumnWidth(2, 100);
    m_tree->setColumnWidth(3, 95);
    m_tree->setColumnWidth(4, 30);

    // 隐藏最后一列
    m_tree->hideColumn(4);
}

void MathWidgetDPrivate::setColumnAlign()
{
    for (int m = 0; m < m_tree->topLevelItemCount(); ++m)
    {
        QTreeWidgetItem *top_item = m_tree->topLevelItem(m);
        top_item->setTextAlignment(0, Qt::AlignCenter);
        top_item->setTextAlignment(1, Qt::AlignCenter);
        top_item->setTextAlignment(2, Qt::AlignCenter);
        top_item->setTextAlignment(3, Qt::AlignCenter);

        int child_count = top_item->childCount();
        for (int n = 0; n < child_count; ++n)
        {
            QTreeWidgetItem *child = top_item->child(n);
            child->setTextAlignment(0, Qt::AlignCenter);
            child->setTextAlignment(1, Qt::AlignCenter);
            child->setTextAlignment(2, Qt::AlignCenter);
            child->setTextAlignment(3, Qt::AlignCenter);
        }
    } // End for
}

QTreeWidgetItem *MathWidgetDPrivate::getTreeTopItem(const QString &iName)
{
    for (int n = 0; n < m_tree->topLevelItemCount(); ++n)
    {
        QTreeWidgetItem *top_item = m_tree->topLevelItem(n);
        if (top_item->text(0) == iName)
            return top_item;
    }

    return nullptr;
}

bool MathWidgetDPrivate::isTopLevelItem(QTreeWidgetItem *iItem)
{
    for (int n = 0; n < m_tree->topLevelItemCount(); ++n)
    {
        QTreeWidgetItem *top_item = m_tree->topLevelItem(n);
        if (top_item == iItem)
            return true;
    }

    return false;
}

QVariantList MathWidgetDPrivate::getWriteParam()
{
    QVariantList result;
    // 从树控件上获取数据，生成计算通道参数list
    QStringList keys = m_uiData.keys();
    for (const QString &group_name : qAsConst(keys))
    {
        QVariantMap ui_data_map = m_uiData.value(group_name).toMap();
        int algo_type = ui_data_map.value("algo_type").toInt();

        QVariantMap calc_map;
        calc_map.insert("calc_type", algo_type);
        if (algo_type == 1)  // Rosettes
        {
            QVariantMap input_data = ui_data_map.value("input").toMap();
            QVariantMap rosette_data = ui_data_map.value("rosette").toMap();
            QVariantMap young_data = ui_data_map.value("young").toMap();
            QVariantMap output_data = ui_data_map.value("output").toMap();
            QVariantMap ch_data = output_data.value("ch_data").toMap();
            double coefficient = ui_data_map.value("coefficient").toDouble();

            QVariantMap r_map;
            r_map.insert("coefficient", coefficient);

            r_map.insert("ch_a", input_data.value("a").toString());
            r_map.insert("ch_b", input_data.value("b").toString());
            r_map.insert("ch_c", input_data.value("c").toString());

            if (rosette_data.value("type").toString() == "45°")
            {
                r_map.insert("type", 2); // RR
            }
            else if (rosette_data.value("type").toString() == "60°")
            {
                r_map.insert("type", 1); // DR
            }

            r_map.insert("e", young_data.value("young_value").toDouble());
            r_map.insert("v", young_data.value("poisson_ratio").toDouble());

            QVariantList algo_list;
            QStringList channels = output_data.value("channels").toStringList();
            QStringList op_channels;
            for (const QString &ch : qAsConst(channels))
            {
                QVariantMap data_map = ch_data.value(ch).toMap();
                op_channels.append(data_map.value("name").toString());

                if (ch == "Max Stress")
                    algo_list.append(1);
                else if (ch == "Min Stress")
                    algo_list.append(2);
                else if (ch == "Shear Stress")
                    algo_list.append(3);
                else if (ch == "Max Strain")
                    algo_list.append(4);
                else if (ch == "Min Strain")
                    algo_list.append(5);
                else if (ch == "Angle")
                    algo_list.append(6);
            }
            r_map.insert("algo_list", algo_list);
            r_map.insert("op_channels", op_channels);
            calc_map.insert("ros", r_map);
        }
        else if (algo_type == 2)  // PCB
        {
            QVariantMap input_data = ui_data_map.value("input").toMap();
            QVariantMap output_data = ui_data_map.value("output").toMap();
            QVariantMap ch_data = output_data.value("ch_data").toMap();

            QVariantMap pcb_map;
            pcb_map.insert("ch_a", input_data.value("a").toString());
            pcb_map.insert("ch_b", input_data.value("b").toString());
            pcb_map.insert("ch_c", input_data.value("c").toString());

            pcb_map.insert("sample_rate", GApp->getReaderHeader("data_rate").toDouble());

            QVariantList algo_list;
            QStringList channels = output_data.value("channels").toStringList();
            QStringList op_channels;
            for (const QString &ch : qAsConst(channels))
            {
                QVariantMap data_map = ch_data.value(ch).toMap();
                op_channels.append(data_map.value("name").toString());

                if (ch == "Max Strain")
                    algo_list.append(1);
                else if (ch == "Min Strain")
                    algo_list.append(2);
                else if (ch == "Diag Strain")
                    algo_list.append(3);
                else if (ch == "Max Strain Rate")
                    algo_list.append(4);
                else if (ch == "Min Strain Rate")
                    algo_list.append(5);
                else if (ch == "Diag Strain Rate")
                    algo_list.append(6);
                else if (ch == "Abs Max Strain")
                    algo_list.append(7);
                else if (ch == "Abs Max Strain Rate")
                    algo_list.append(8);
            }
            pcb_map.insert("algo_list", algo_list);
            pcb_map.insert("op_channels", op_channels);

            calc_map.insert("pcb", pcb_map);
        }

        result.append(calc_map);
    }

    return result;
}

void MathWidgetDPrivate::setRosettes(const QVariantMap &iData)
{
    // 1. 树控件数据准备
    QString algo_type = iData.value("algo_type").toString();

    QVariantMap input_data = iData.value("input").toMap();
    QVariantMap output_data = iData.value("output").toMap();
    QString group_name = output_data.value("group_name").toString();
    QStringList channels = output_data.value("channels").toStringList();
    QVariantMap ch_data = output_data.value("ch_data").toMap();

    QVariantMap rosette_data = iData.value("rosette").toMap();
    QString type = rosette_data.value("type").toString();
    QString angle = rosette_data.value("angle").toString();

    QVariantMap young_data = iData.value("young").toMap();
    QString yong_value = young_data.value("young_value").toString();
    QString yong_unit = young_data.value("young_unit").toString();
    QString poisson_ratio = young_data.value("poisson_ratio").toString();

    QString tree_name = group_name;
    QString tree_label = QString("Type: %1  Angle Ref: %2  E: %3 %4 V: %5 | A=%6, B=%7, C=%8")
            .arg(type).arg(angle).arg(yong_value).arg(yong_unit).arg(poisson_ratio)
            .arg(input_data.value("a").toString()).arg(input_data.value("b").toString()).arg(input_data.value("c").toString());
    QStringList tree_top_labels = QStringList() << tree_name << tree_label << QString() << QString() << algo_type;

    // 2. 树控件数据赋值
     QTreeWidgetItem *top_item = getTreeTopItem(group_name);
     if (!top_item)
         return;

     top_item->setText(1, tree_label);
     top_item->takeChildren();

     // 重新添加子节点
     QList<QTreeWidgetItem *> chlidren;
     for (const QString &ch : qAsConst(channels))
     {
         QVariantMap data_map = ch_data.value(ch).toMap();
         QString child_name = data_map.value("name").toString();
         QString tree_label = ch;
         QString tree_unit = data_map.value("unit").toString();
         QStringList tree_data = QStringList() << child_name << tree_label << tree_unit;

         QTreeWidgetItem *child_item = new QTreeWidgetItem(tree_data);
         chlidren.append(child_item);
     }
     top_item->addChildren(chlidren);

     // 3. GIns Api
     double data_rate = GApp->getReaderHeader("data_rate").toDouble();
     GApp->setWriteheader(data_rate, true);
}

void MathWidgetDPrivate::setPcb(const QVariantMap &iData)
{
    // 1. 树控件数据准备
    QString algo_type = iData.value("algo_type").toString();

    QVariantMap input_data = iData.value("input").toMap();
    QVariantMap output_data = iData.value("output").toMap();
    QString group_name = output_data.value("group_name").toString();
    QStringList channels = output_data.value("channels").toStringList();
    QVariantMap ch_data = output_data.value("ch_data").toMap();

    QString tree_name = group_name;
    QString tree_label = QString("IPC 9704A Strain and Strain Rate  | A=%1, B=%2, C=%3")
            .arg(input_data.value("a").toString()).arg(input_data.value("b").toString()).arg(input_data.value("c").toString());
    QStringList tree_top_labels = QStringList() << tree_name << tree_label << QString() << QString() << algo_type;

    // 2. 树控件数据赋值
    QTreeWidgetItem *top_item = getTreeTopItem(group_name);
    if (!top_item)
        return;

    top_item->setText(1, tree_label);
    top_item->takeChildren();

    // 重新添加子节点
    QList<QTreeWidgetItem *> chlidren;
    for (const QString &ch : qAsConst(channels))
    {
        QVariantMap data_map = ch_data.value(ch).toMap();
        QString child_name = data_map.value("name").toString();
        QString tree_label = ch;
        QString tree_unit = data_map.value("unit").toString();
        QStringList tree_data = QStringList() << child_name << tree_label << tree_unit;

        QTreeWidgetItem *child_item = new QTreeWidgetItem(tree_data);
        chlidren.append(child_item);
    }
    top_item->addChildren(chlidren);

    // 3. GIns Api
    double data_rate = GApp->getReaderHeader("data_rate").toDouble();
    GApp->setWriteheader(data_rate, true);
}

void MathWidgetDPrivate::onSetGroup()
{
    QString group_name = sender()->objectName();
    QVariantMap data_set = m_uiData.value(group_name).toMap();

    QTreeWidgetItem *top_item = getTreeTopItem(group_name);
    int algo_type = top_item->text(4).toInt();

    if (algo_type == 1)
    {
        SetRosettesWidget rosettes_set;
        rosettes_set.setData(data_set);
        if (rosettes_set.exec() == QDialog::Rejected)
            return;

        QVariantMap data_get = rosettes_set.getData();
        qDebug() << __FUNCTION__ << "rosettes_set data_get=" << data_get;
        m_uiData.insert(group_name, data_get);

        setRosettes(data_get);
    }
    else if (algo_type == 2)
    {
        SetPcbWidget pcb_set;
        pcb_set.setData(data_set);
        if (pcb_set.exec() == QDialog::Rejected)
            return;

        QVariantMap data_get = pcb_set.getData();
        qDebug() << __FUNCTION__ << "pcb_set data_get=" << data_get;
        m_uiData.insert(group_name, data_get);

        setPcb(data_get);
    }
}

void MathWidgetDPrivate::onShowTreeMenu(const QPoint &iPos)
{
    QTreeWidgetItem *current_item = m_tree->itemAt(iPos);

    auto remove_group = [=]()
    {
        int child_count = current_item->childCount();
        for (int n = 0; n < child_count; ++n)
        {
            current_item->takeChild(n);
        }

        int index = m_tree->indexOfTopLevelItem(current_item);
        m_tree->takeTopLevelItem(index);
    };

    if (!isTopLevelItem(current_item))
        return;

    QMenu *popMenu =new QMenu(dd);
    popMenu->addAction("删除", remove_group);
    popMenu->exec(QCursor::pos());
}

#include "mathwidgetd.moc"

/***************************** MathWidgetD *****************************/
MathWidgetD::MathWidgetD(QWidget *iParent)
    : QWidget{iParent},
      dp(new MathWidgetDPrivate(this))
{
    dp->initLayout();
}

void MathWidgetD::setMathData(const QVariantMap &iData)
{
    dp->m_tree->clear();

    dp->m_uiData.clear();
    dp->m_uiData = iData;

    for (const QVariant &var : dp->m_uiData.values())
    {
        QVariantMap data = var.toMap();
        int algo_type = data.value("algo_type").toInt();
        if (algo_type == 1)
        {
            setRosetteData(data);
        }
        else if (algo_type == 2)
        {
            setPcbData(data);
        }
    }
}

QVariantMap MathWidgetD::getMathData()
{
    return dp->m_uiData;
}

void MathWidgetD::clear()
{
    dp->m_tree->clear();
    qDeleteAll(dp->m_setButtons);
}

void MathWidgetD::setRosetteData(const QVariantMap &iData)
{
    // 输出 -> 单位
    // μm/m rad n/m2

    // 1. 树控件数据准备
    QString algo_type = iData.value("algo_type").toString();

    QVariantMap input_data = iData.value("input").toMap();
    QVariantMap output_data = iData.value("output").toMap();
    QString group_name = output_data.value("group_name").toString();
    QStringList channels = output_data.value("channels").toStringList();
    QVariantMap ch_data = output_data.value("ch_data").toMap();

    QVariantMap rosette_data = iData.value("rosette").toMap();
    QString type = rosette_data.value("type").toString();
    QString angle = rosette_data.value("angle").toString();

    QVariantMap young_data = iData.value("young").toMap();
    QString yong_value = young_data.value("young_value").toString();
    QString yong_unit = young_data.value("young_unit").toString();
    QString poisson_ratio = young_data.value("poisson_ratio").toString();

    QString tree_name = group_name;
    QString tree_label = QString("Type: %1  Angle Ref: %2  E: %3 %4 V: %5 | A=%6, B=%7, C=%8")
            .arg(type).arg(angle).arg(yong_value).arg(yong_unit).arg(poisson_ratio)
            .arg(input_data.value("a").toString()).arg(input_data.value("b").toString()).arg(input_data.value("c").toString());
    QStringList tree_top_labels = QStringList() << tree_name << tree_label << QString() << QString() << algo_type;

    // 2. 树控件数据赋值
    QTreeWidgetItem *top_item = new QTreeWidgetItem(tree_top_labels);
    dp->m_tree->addTopLevelItem(top_item);
    top_item->setExpanded(true);
    top_item->setBackground(0, QBrush("lightgray"));
    top_item->setBackground(1, QBrush("lightgray"));
    top_item->setBackground(2, QBrush("lightgray"));
    top_item->setBackground(3, QBrush("lightgray"));

    QList<QTreeWidgetItem *> chlidren;
    for (const QString &ch : qAsConst(channels))
    {
        QVariantMap data_map = ch_data.value(ch).toMap();
        QString child_name = data_map.value("name").toString();
        QString tree_label = ch;
        QString tree_unit = data_map.value("unit").toString();
        QStringList tree_data = QStringList() << child_name << tree_label << tree_unit;

        QTreeWidgetItem *child_item = new QTreeWidgetItem(tree_data);
        chlidren.append(child_item);
    }
    top_item->addChildren(chlidren);

    // 3. 设置按钮
    QPushButton *btn = new QPushButton("设置", this);
    btn->setObjectName(group_name);
    dp->m_setButtons.insert(group_name, btn);
    dp->m_tree->setItemWidget(top_item, 3, btn);
    connect(btn, &QPushButton::clicked, dp, &MathWidgetDPrivate::onSetGroup);

    // 4. 缓存界面数据，设置按钮用
    if (!dp->m_uiData.contains(group_name))
    {
        dp->m_uiData.insert(group_name, iData);
    }
}

void MathWidgetD::setPcbData(const QVariantMap &iData)
{
    // 1. 树控件数据准备
    QString algo_type = iData.value("algo_type").toString();

    QVariantMap input_data = iData.value("input").toMap();
    QVariantMap output_data = iData.value("output").toMap();
    QString group_name = output_data.value("group_name").toString();
    QStringList channels = output_data.value("channels").toStringList();
    QVariantMap ch_data = output_data.value("ch_data").toMap();

    QString tree_name = group_name;
    QString tree_label = QString("IPC 9704A Strain and Strain Rate  | A=%1, B=%2, C=%3")
            .arg(input_data.value("a").toString()).arg(input_data.value("b").toString()).arg(input_data.value("c").toString());
    QStringList tree_top_labels = QStringList() << tree_name << tree_label << QString() << QString() << algo_type;

    // 2. 树控件数据赋值
    QTreeWidgetItem *top_item = new QTreeWidgetItem(tree_top_labels);
    dp->m_tree->addTopLevelItem(top_item);
    top_item->setExpanded(true);
    top_item->setBackground(0, QBrush("lightgray"));
    top_item->setBackground(1, QBrush("lightgray"));
    top_item->setBackground(2, QBrush("lightgray"));
    top_item->setBackground(3, QBrush("lightgray"));

    QList<QTreeWidgetItem *> chlidren;
    for (const QString &ch : qAsConst(channels))
    {
        QVariantMap data_map = ch_data.value(ch).toMap();
        QString child_name = data_map.value("name").toString();
        QString tree_label = ch;
        QString tree_unit = data_map.value("unit").toString();
        QStringList tree_data = QStringList() << child_name << tree_label << tree_unit;

        QTreeWidgetItem *child_item = new QTreeWidgetItem(tree_data);
        chlidren.append(child_item);
    }
    top_item->addChildren(chlidren);

    // 3. 设置按钮
    QPushButton *btn = new QPushButton("设置", this);
    btn->setObjectName(group_name);
    dp->m_setButtons.insert(group_name, btn);
    dp->m_tree->setItemWidget(top_item, 3, btn);
    connect(btn, &QPushButton::clicked, dp, &MathWidgetDPrivate::onSetGroup);

    // 4. 缓存界面数据，设置按钮用
    if (!dp->m_uiData.contains(group_name))
    {
        dp->m_uiData.insert(group_name, iData);
    }
}

void MathWidgetD::startWrite()
{
    // GIns Api
    // 参数:
    // RR是45，DR是60
    // E是杨氏模量，V是泊松比
    QVariantList param_list = dp->getWriteParam();
    GApp->getWriter()->clearWriteParam();
    GApp->getWriter()->setWriteParam(param_list);

    QVariantList dev_var_list = GApp->getVariables();
    if (dev_var_list.isEmpty())
    {
        qWarning() << "not find variables on device!";
        return;
    }

    double data_rate = GApp->getReaderHeader("data_rate").toDouble();
    GApp->setWriteheader(data_rate, true);

    QVariantMap first_ch = dev_var_list.first().toMap();
    QVariantList wrtie_channels;
    // 1. 原始通道
    for (const QVariant &var : qAsConst(dev_var_list))
    {
        QVariantMap dev_map = var.toMap();

        QVariantMap map;
        map.insert("name", dev_map.value("name").toString());
        map.insert("unit", dev_map.value("unit"));
        map.insert("precision", dev_map.value("precision"));
        map.insert("field_len", dev_map.value("field_len"));
        wrtie_channels.append(map);
    }
    // 2. 计算通道
    for (const QString &group_name : dp->m_uiData.keys())
    {
        QVariantMap group_data = dp->m_uiData.value(group_name).toMap();

        QVariantMap output_data = group_data.value("output").toMap();
        QStringList channels = output_data.value("channels").toStringList();
        QVariantMap ch_data = output_data.value("ch_data").toMap();

        for (const QString &ch : qAsConst(channels))
        {
            QVariantMap data_map = ch_data.value(ch).toMap();

            QVariantMap map;
            map.insert("name", data_map.value("name").toString());
            map.insert("unit", data_map.value("unit"));
            map.insert("precision", first_ch.value("precision"));
            map.insert("field_len", first_ch.value("field_len"));
            wrtie_channels.append(map);
        }
    }
    GApp->addChannles(wrtie_channels);

    if (!GApp->readyToWrite())
    {
        qWarning() << "ready failed!";
        return;
    }

    GApp->startWriting();
}

void MathWidgetD::startSaveFile(const QString &iPath)
{
    QVariantList dev_var_list = GApp->getVariables();
    if (dev_var_list.isEmpty())
    {
        qWarning() << "not find variables on device!";
        return;
    }

    QVariantMap first_ch = dev_var_list.first().toMap();
    QVariantList wrtie_channels;
    // 1. 原始通道
    for (const QVariant &var : GApp->getVariables())
    {
        QVariantMap dev_map = var.toMap();

        QVariantMap map;
        map.insert("name", dev_map.value("name").toString());
        map.insert("unit", dev_map.value("unit"));
        map.insert("precision", dev_map.value("precision"));
        map.insert("field_len", dev_map.value("field_len"));
        wrtie_channels.append(map);
    }
    // 2. 计算通道
    for (const QString &group_name : dp->m_uiData.keys())
    {
        QVariantMap group_data = dp->m_uiData.value(group_name).toMap();

        QVariantMap output_data = group_data.value("output").toMap();
        QStringList channels = output_data.value("channels").toStringList();
        QVariantMap ch_data = output_data.value("ch_data").toMap();

        for (const QString &ch : qAsConst(channels))
        {
            QVariantMap data_map = ch_data.value(ch).toMap();

            QVariantMap map;
            map.insert("name", data_map.value("name").toString());
            map.insert("unit", data_map.value("unit"));
            map.insert("precision", first_ch.value("precision"));
            map.insert("field_len", first_ch.value("field_len"));
            wrtie_channels.append(map);
        }
    }
    qDebug() << __FUNCTION__ << "wrtie_channels=" << wrtie_channels;

    double data_rate = GApp->getReaderHeader("data_rate").toDouble();
    if (!GApp->initFileBuffer(iPath, data_rate, wrtie_channels))
    {
        qWarning() << "create udbf file buffer failed!";
        return;
    }
}

void MathWidgetD::stopSaveFile()
{
    GApp->closeFileBuffer();
}
