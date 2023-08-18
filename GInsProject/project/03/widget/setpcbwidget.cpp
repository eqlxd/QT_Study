#include "setpcbwidget.h"
#include "../globalapp.h"
#include <gwidget/gcombobox.h>
#include <QDebug>
#include <QLabel>
#include <QCheckBox>
#include <QLineEdit>
#include <QGroupBox>
#include <QVBoxLayout>
#include <QFormLayout>
#include <QPushButton>
#include <QDialogButtonBox>
#include <QMap>
#include <QTimer>
#include <QMessageBox>

#pragma execution_character_set("utf-8")

/***************************** SetPcbWidgetPrivate *****************************/
class SetPcbWidgetPrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(SetPcbWidget)
public:
    explicit SetPcbWidgetPrivate(SetPcbWidget *iParent)
      : QObject(iParent), dd(iParent)
    {
    }

    QVariantMap m_setDatas;

    // key = QCheckBox->text()
    // value = QVariantMap，包含名称，描述，单位三项
    QVariantMap m_opChData;

    // 输入
    QGroupBox *m_groupInput = nullptr;
    GComboBox *m_inputE1 = nullptr;
    GComboBox *m_inputE2 = nullptr;
    GComboBox *m_inputE3 = nullptr;

    // 输出
    QGroupBox *m_groupOutput = nullptr;
    QLineEdit *m_groupName = nullptr; // 应变化分组名称
    GComboBox *m_opChannelName = nullptr;
    QLineEdit *m_opChName = nullptr;
    QLineEdit *m_opChDesc = nullptr;
    QLineEdit *m_opChUnit = nullptr;

    // Output Channels
    QGroupBox *m_groupOuputChannels = nullptr;
    // row1
    QCheckBox *m_chMaxStrain = nullptr;
    QCheckBox *m_chMinStrain = nullptr;
    QCheckBox *m_chDiagStrain = nullptr;
    // row2
    QCheckBox *m_chMaxStrainRate = nullptr;
    QCheckBox *m_chMinStrainRate = nullptr;
    QCheckBox *m_chDiagStrainRate = nullptr;
    // row3
    QCheckBox *m_chAbsMaxStrain = nullptr;
    // row4
    QCheckBox *m_chAbsMaxStrainRate = nullptr;

    // pixmap
    QGroupBox *m_groupPixmap = nullptr;
    QLabel *m_pixmapLabel = nullptr;
    QPixmap m_pixmap;

    // strain and strain rate unit
    QGroupBox *m_groupUnit = nullptr;
    GComboBox *m_strainUnit = nullptr;
    GComboBox *m_strainRateUnit = nullptr;

    QDialogButtonBox *m_btnBox = nullptr;

public:
    void initLayout();
    void initInput();
    void initOutput();
    void initOutputChannels();
    void initPixmapLabel();
    void initUnit();

    void initUiData();
    // 获取各个下拉框数据
    QVariantList getVarItemList();
    QVariantList getUnitItemList();
    QVariantList getUniRateItemList();
    // 获取勾选状态
    Qt::CheckState getCheckState(int iState);
    //
    void setOutputChannelDescAndUnit(QCheckBox *iCheckBox, const QString &iDesc, const QString &iUnit);

public slots:
    void onSetOutputChannelItemList(int iCheckState);
    void onSetOutputChannelData(const QString &iText);

public:
    void setIntputData(const QVariantMap &iData);
    void setOutputData(const QVariantMap &iData);
    void setOutputChannelsData(const QVariantMap &iData);
    void setUnitData(const QVariantMap &iData);

    QVariantMap getIntpuData();
    QVariantMap getOutputData();
    QVariantMap getOutputChannelsData();
    QVariantMap getUnitData();
};

void SetPcbWidgetPrivate::initLayout()
{
    initInput();
    initOutput();
    initOutputChannels();
    initPixmapLabel();
    initUnit();

    QVBoxLayout *vbox_left = new QVBoxLayout;
    vbox_left->addWidget(m_groupInput);
    vbox_left->addWidget(m_groupOutput);

    QVBoxLayout *vbox_right = new QVBoxLayout;
    vbox_right->addWidget(m_groupOuputChannels);
    vbox_right->addWidget(m_groupPixmap);
    vbox_right->addWidget(m_groupUnit);

    QHBoxLayout *hbox = new QHBoxLayout;
    hbox->addLayout(vbox_left);
    hbox->addLayout(vbox_right);
    hbox->addStretch();

    m_btnBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, dd);
    m_btnBox->button(QDialogButtonBox::Ok)->setText("确定");
    m_btnBox->button(QDialogButtonBox::Cancel)->setText("取消");

    QVBoxLayout *vbox = new QVBoxLayout(dd);
    vbox->addLayout(hbox);
    vbox->addWidget(m_btnBox, Qt::AlignRight);

    connect(m_btnBox, &QDialogButtonBox::accepted, dd, &SetPcbWidget::accept);
    connect(m_btnBox, &QDialogButtonBox::rejected, dd, &SetPcbWidget::reject);
}

void SetPcbWidgetPrivate::initInput()
{
    m_groupInput = new QGroupBox("输入通道", dd);
    m_groupInput->setAlignment(Qt::AlignLeft);

    m_inputE1 = new GComboBox(dd);
    m_inputE2 = new GComboBox(dd);
    m_inputE3 = new GComboBox(dd);

    QVBoxLayout *vbox1 = new QVBoxLayout;
    vbox1->addWidget(new QLabel("e1", dd));
    vbox1->addWidget(m_inputE1);

    QVBoxLayout *vbox2 = new QVBoxLayout;
    vbox2->addWidget(new QLabel("e2", dd));
    vbox2->addWidget(m_inputE2);

    QVBoxLayout *vbox3 = new QVBoxLayout;
    vbox3->addWidget(new QLabel("e3", dd));
    vbox3->addWidget(m_inputE3);

    QVBoxLayout *vbox = new QVBoxLayout(m_groupInput);
    vbox->addLayout(vbox1);
    vbox->addLayout(vbox2);
    vbox->addLayout(vbox3);
    vbox->addStretch();
}

void SetPcbWidgetPrivate::initOutput()
{
    m_groupOutput = new QGroupBox("输出", dd);
    m_groupOutput->setAlignment(Qt::AlignLeft);

    m_opChannelName = new GComboBox(dd);
    m_groupName = new QLineEdit(dd);
    m_opChName = new QLineEdit(dd);
    m_opChDesc = new QLineEdit(dd);
    m_opChUnit = new QLineEdit(dd);

    QFormLayout *from_layout = new QFormLayout(m_groupOutput);
    from_layout->addRow("分组名称", m_groupName);
    from_layout->addRow("输出通道", m_opChannelName);
    from_layout->addRow("名称", m_opChName);
    from_layout->addRow("描述", m_opChDesc);
    from_layout->addRow("单位", m_opChUnit);

    connect(m_opChannelName, &GComboBox::currentTextChanged, this, &SetPcbWidgetPrivate::onSetOutputChannelData);
    connect(m_opChName, &QLineEdit::editingFinished, this, [=]()
    {
        QString text = m_opChName->text();
        if (text.isEmpty())
            return;

        QString key = m_opChannelName->currentText();
        QVariantMap ch_data = m_opChData.value(key).toMap();
        ch_data.insert("name", text);

        m_opChData.insert(key, ch_data);
    });
    connect(m_opChDesc, &QLineEdit::editingFinished, this, [=]()
    {
        QString text = m_opChDesc->text();
        if (text.isEmpty())
            return;

        QString key = m_opChannelName->currentText();
        QVariantMap ch_data = m_opChData.value(key).toMap();
        ch_data.insert("desc", text);

        m_opChData.insert(key, ch_data);
    });
    connect(m_opChUnit, &QLineEdit::editingFinished, this, [=]()
    {
        QString text = m_opChUnit->text();
        if (text.isEmpty())
            return;

        QString key = m_opChannelName->currentText();
        QVariantMap ch_data = m_opChData.value(key).toMap();
        ch_data.insert("unit", text);

        m_opChData.insert(key, ch_data);
    });
}

void SetPcbWidgetPrivate::initOutputChannels()
{
    m_groupOuputChannels = new QGroupBox("Output Channels", dd);
    m_groupOuputChannels->setAlignment(Qt::AlignLeft);

    // row1
    m_chMaxStrain = new QCheckBox("Max Strain", dd);
    m_chMinStrain = new QCheckBox("Min Strain", dd);
    m_chDiagStrain = new QCheckBox("Diag Strain", dd);
    // row2
    m_chMaxStrainRate = new QCheckBox("Max Strain Rate", dd);
    m_chMinStrainRate = new QCheckBox("Min Strain Rate", dd);
    m_chDiagStrainRate = new QCheckBox("Diag Strain Rate", dd);
    // row3
    m_chAbsMaxStrain = new QCheckBox("Abs Max Strain", dd);
    // row4
    m_chAbsMaxStrainRate = new QCheckBox("Abs Max Strain Rate", dd);

    // set object name
    m_chMaxStrain->setObjectName("11");
    m_chMinStrain->setObjectName("12");
    m_chDiagStrain->setObjectName("13");

    m_chMaxStrainRate->setObjectName("21");
    m_chMinStrainRate->setObjectName("22");
    m_chDiagStrainRate->setObjectName("23");

    m_chAbsMaxStrain->setObjectName("31");
    m_chAbsMaxStrainRate->setObjectName("41");

    QGridLayout *grid_layout = new QGridLayout(m_groupOuputChannels);
    grid_layout->addWidget(m_chMaxStrain, 0, 0, 1, 1);
    grid_layout->addWidget(m_chMinStrain, 0, 1, 1, 1);
    grid_layout->addWidget(m_chDiagStrain, 0, 2, 1, 1);

    grid_layout->addWidget(m_chMaxStrainRate, 1, 0, 1, 1);
    grid_layout->addWidget(m_chMinStrainRate, 1, 1, 1, 1);
    grid_layout->addWidget(m_chDiagStrainRate, 1, 2, 1, 1);

    grid_layout->addWidget(m_chAbsMaxStrain, 2, 0, 1, 1);
    grid_layout->addWidget(m_chAbsMaxStrainRate, 3, 0, 1, 1);
}

void SetPcbWidgetPrivate::initPixmapLabel()
{
    m_groupPixmap = new QGroupBox("示意图", dd);
    m_groupPixmap->setAlignment(Qt::AlignLeft);

    m_pixmapLabel = new QLabel(dd);
    m_pixmapLabel->setPixmap(QPixmap(":/image/img/pcb_strain_rate1.png"));

    QHBoxLayout *hbox = new QHBoxLayout(m_groupPixmap);
    hbox->addWidget(m_pixmapLabel);
}

void SetPcbWidgetPrivate::initUnit()
{
    m_groupUnit = new QGroupBox("Strain And StrainRate Unit", dd);
    m_groupUnit->setAlignment(Qt::AlignLeft);

    m_strainUnit = new GComboBox(dd);
    m_strainRateUnit = new GComboBox(dd);

    m_strainUnit->setMaximumWidth(100);
    m_strainRateUnit->setMaximumWidth(100);

    QFormLayout *form_layout = new QFormLayout(m_groupUnit);
    form_layout->addRow("Strain", m_strainUnit);
    form_layout->addRow("Strain Rate", m_strainRateUnit);
}

void SetPcbWidgetPrivate::initUiData()
{
    {
        // 1. 输入
        QVariantList item_list = getVarItemList();
        m_inputE1->setItemList(item_list);
        m_inputE2->setItemList(item_list);
        m_inputE3->setItemList(item_list);
    }

    {
        // 2. output channels --> 输出
        connect(m_chMaxStrain, &QCheckBox::stateChanged, this, &SetPcbWidgetPrivate::onSetOutputChannelItemList);
        connect(m_chMinStrain, &QCheckBox::stateChanged, this, &SetPcbWidgetPrivate::onSetOutputChannelItemList);
        connect(m_chDiagStrain, &QCheckBox::stateChanged, this, &SetPcbWidgetPrivate::onSetOutputChannelItemList);

        connect(m_chMaxStrainRate, &QCheckBox::stateChanged, this, &SetPcbWidgetPrivate::onSetOutputChannelItemList);
        connect(m_chMinStrainRate, &QCheckBox::stateChanged, this, &SetPcbWidgetPrivate::onSetOutputChannelItemList);
        connect(m_chDiagStrainRate, &QCheckBox::stateChanged, this, &SetPcbWidgetPrivate::onSetOutputChannelItemList);

        connect(m_chAbsMaxStrain, &QCheckBox::stateChanged, this, &SetPcbWidgetPrivate::onSetOutputChannelItemList);
        connect(m_chAbsMaxStrainRate, &QCheckBox::stateChanged, this, &SetPcbWidgetPrivate::onSetOutputChannelItemList);
    }

    {
        // Unit
        m_strainUnit->setItemList(getUnitItemList());
        m_strainRateUnit->setItemList(getUniRateItemList());

        m_strainUnit->setCurrentIndex(0);
        m_strainRateUnit->setCurrentIndex(0);
    }
}

QVariantList SetPcbWidgetPrivate::getVarItemList()
{
    QVariantList var_list = GApp->getVariables();

    QVariantList item_list;
    for (const QVariant &item : qAsConst(var_list))
    {
        QVariantMap var_map = item.toMap();

        QVariantMap item_map;
        item_map.insert("name", var_map.value("id"));
        item_map.insert("text", var_map.value("name"));
        item_list.append(item_map);
    }

    return item_list;
}

QVariantList SetPcbWidgetPrivate::getUnitItemList()
{
    QVariantList item_list;

    QVariantMap item1;
    item1.insert("name", "item1");
    item1.insert("text", "um/m");
    item_list.append(item1);

    return item_list;
}

QVariantList SetPcbWidgetPrivate::getUniRateItemList()
{
    QVariantList item_list;

    QVariantMap item1;
    item1.insert("name", "item1");
    item1.insert("text", "um/m/s");
    item_list.append(item1);

    return item_list;
}

Qt::CheckState SetPcbWidgetPrivate::getCheckState(int iState)
{
    if (iState == Qt::Checked)
        return Qt::Checked;

    return Qt::Unchecked;
}

void SetPcbWidgetPrivate::setOutputChannelDescAndUnit(QCheckBox *iCheckBox, const QString &iDesc, const QString &iUnit)
{
    if (iCheckBox->checkState() == Qt::Checked)
    {
        // 1. 输入框赋值
        m_opChDesc->setText(iDesc);
        m_opChUnit->setText(iUnit);
        // 2. 输入框缓存数据
        QString key = m_opChannelName->currentText();
        QVariantMap ch_data = m_opChData.value(key).toMap();
        ch_data.insert("desc", iDesc);
        ch_data.insert("unit", iUnit);
        m_opChData.insert(key, ch_data);
    }
    else if (iCheckBox->checkState() == Qt::Unchecked)
    {
        // 1.
        m_opChDesc->setText("");
        m_opChUnit->setText("");
        // 2.
        m_opChData.remove(iCheckBox->text());
    }
}

void SetPcbWidgetPrivate::onSetOutputChannelItemList(int iCheckState)
{
    // 1. 获取sender对象，转换为QCheckBox对象
    QCheckBox *check_box = qobject_cast<QCheckBox *>(sender());
    if (!check_box)
    {
        qWarning() << "onSetOutputChannelItemList check_box is nullptr!";
        return;
    }

    // 2. 获取该QCheckBox的objectName
    QString obj_name = check_box->objectName();

    // 3. 获取当前下拉框的下拉列表数据，并判断当前QCheckBox在列表中是否已经存在
    QVariantList item_list = m_opChannelName->itemList();
    // lamdba函数，捕获item_list这个外部变量，函数接受一个QString类型参数，函数返回值为int
    auto objectIndexOfItemList = [item_list](const QString &iName) -> int
    {
        QStringList name_list;
        for (const QVariant &item : qAsConst(item_list))
        {
            name_list <<item.toMap().value("name").toString();
        }

        return name_list.indexOf(iName);
    };

    // 4. 根据勾选状态确定是添加还是删除数据
    int index_of = objectIndexOfItemList(obj_name);
    if (iCheckState == Qt::Checked)
    {
        // 添加到下拉列表
        if (index_of == -1)
        {
            // 1.
            QVariantMap item_map;
            item_map.insert("name", obj_name);
            item_map.insert("text", check_box->text());
            item_list.append(item_map);
            m_opChannelName->setItemList(item_list);
            m_opChannelName->setCurrentName(obj_name);
            // 2.
            m_opChData.insert(check_box->text(), QVariantMap());
        }
    }
    else if (iCheckState == Qt::Unchecked)
    {
        // 从下拉列表中删除
        item_list.removeAt(index_of);
        m_opChannelName->setItemList(item_list);
        //
        m_opChData.remove(check_box->text());
    }

    // 5. 通道描述和单位内容赋值
    if (check_box->objectName() == "11")
    {
        setOutputChannelDescAndUnit(check_box, "最大应变", "um/m");
    }
    else if (check_box->objectName() == "12")
    {
        setOutputChannelDescAndUnit(check_box, "最小应变", "um/m");
    }
    else if (check_box->objectName() == "13")
    {
        setOutputChannelDescAndUnit(check_box, "对角线应变", "um/m");
    }
    else if (check_box->objectName() == "21")
    {
        setOutputChannelDescAndUnit(check_box, "最大主应变速率", "um/m/s");
    }
    else if (check_box->objectName() == "22")
    {
        setOutputChannelDescAndUnit(check_box, "最小主应变速率", "um/m/s");
    }
    else if (check_box->objectName() == "23")
    {
        setOutputChannelDescAndUnit(check_box, "对角线应变速率", "um/m/s");
    }
    else if (check_box->objectName() == "31")
    {
        setOutputChannelDescAndUnit(check_box, "最大绝对应变", "um/m");
    }
    else if (check_box->objectName() == "41")
    {
        setOutputChannelDescAndUnit(check_box, "最大绝对应变速率", "um/m/s");
    }
}

void SetPcbWidgetPrivate::onSetOutputChannelData(const QString &iText)
{
    QVariantMap ch_data = m_opChData.value(iText).toMap();
    m_opChName->setText(ch_data.value("name").toString());
    m_opChDesc->setText(ch_data.value("desc").toString());
    m_opChUnit->setText(ch_data.value("unit").toString());
}

void SetPcbWidgetPrivate::setIntputData(const QVariantMap &iData)
{
    m_inputE1->setCurrentName(iData.value("a.name").toString());
    m_inputE2->setCurrentName(iData.value("b.name").toString());
    m_inputE3->setCurrentName(iData.value("c.name").toString());
}

void SetPcbWidgetPrivate::setOutputData(const QVariantMap &iData)
{
    m_groupName->setText(iData.value("group_name").toString());
    m_opChannelName->setItemList(iData.value("item_list").toList());
    m_opChData = iData.value("ch_data").toMap();

    QTimer::singleShot(0, this, [=]() { m_opChannelName->setCurrentIndex(0); });
}

void SetPcbWidgetPrivate::setOutputChannelsData(const QVariantMap &iData)
{
    m_chMaxStrain->setCheckState(getCheckState(iData.value("max_strain").toInt()));
    m_chMinStrain->setCheckState(getCheckState(iData.value("min_strain").toInt()));
    m_chDiagStrain->setCheckState(getCheckState(iData.value("diag_strain").toInt()));

    m_chMaxStrainRate->setCheckState(getCheckState(iData.value("max_strain_rate").toInt()));
    m_chMinStrainRate->setCheckState(getCheckState(iData.value("min_strain_rate").toInt()));
    m_chDiagStrainRate->setCheckState(getCheckState(iData.value("diag_strain_rate").toInt()));

    m_chAbsMaxStrain->setCheckState(getCheckState(iData.value("abs_max_strain").toInt()));
    m_chAbsMaxStrainRate->setCheckState(getCheckState(iData.value("abs_max_strain_rate").toInt()));
}

void SetPcbWidgetPrivate::setUnitData(const QVariantMap &iData)
{
    m_strainUnit->setCurrentName(iData.value("strain_unit.name").toString());
    m_strainRateUnit->setCurrentName(iData.value("strain_unit_rate.name").toString());
}

QVariantMap SetPcbWidgetPrivate::getIntpuData()
{
    if (m_inputE1->currentName().isEmpty() &&
        m_inputE2->currentName().isEmpty() &&
        m_inputE3->currentName().isEmpty())
    {
        QMessageBox::warning(dd, "确定", "输入通道不能为空！");
        return QVariantMap();
    }

    QVariantMap result;
    // for tree widget
    result.insert("a", m_inputE1->currentText());
    result.insert("b", m_inputE2->currentText());
    result.insert("c", m_inputE3->currentText());
    // for setData
    result.insert("a.name", m_inputE1->currentName());
    result.insert("b.name", m_inputE2->currentName());
    result.insert("c.name", m_inputE3->currentName());

    return result;
}

QVariantMap SetPcbWidgetPrivate::getOutputData()
{
    QString group_name = m_groupName->text();
    QVariantList item_list = m_opChannelName->itemList();
    QString ch_name = m_opChName->text();
    QString ch_desc = m_opChDesc->text();
    QString ch_unit = m_opChUnit->text();
    if (group_name.isEmpty() && item_list.isEmpty() &&
            ch_name.isEmpty() && ch_desc.isEmpty() && ch_unit.isEmpty())
    {
        QMessageBox::warning(dd, "确定", "输出通道参数不能为空！");
        return QVariantMap();
    }

    QStringList channels;
    for (const QVariant &item : qAsConst(item_list))
    {
        QString text = item.toMap().value("text").toString();
        channels.append(text);
    }

    QVariantMap result;
    // for tree widget
    result.insert("group_name", group_name);
    result.insert("channels", channels);
    result.insert("ch_data", m_opChData);
    // for setData
    result.insert("item_list", item_list);

    return result;
}

QVariantMap SetPcbWidgetPrivate::getOutputChannelsData()
{
    // for setData
    QVariantMap result;
    result.insert("max_strain", m_chMaxStrain->checkState());
    result.insert("min_strain", m_chMinStrain->checkState());
    result.insert("diag_strain", m_chDiagStrain->checkState());

    result.insert("max_strain_rate", m_chMaxStrainRate->checkState());
    result.insert("min_strain_rate", m_chMinStrainRate->checkState());
    result.insert("diag_strain_rate", m_chDiagStrainRate->checkState());

    result.insert("abs_max_strain", m_chAbsMaxStrain->checkState());
    result.insert("abs_max_strain_rate", m_chAbsMaxStrainRate->checkState());

    return result;
}

QVariantMap SetPcbWidgetPrivate::getUnitData()
{
    QVariantMap result;
    // for tree widget
    result.insert("strain_unit", m_strainUnit->currentText());
    result.insert("strain_unit_rate", m_strainRateUnit->currentText());
    // for setData
    result.insert("strain_unit.name", m_strainUnit->currentName());
    result.insert("strain_unit_rate.name", m_strainRateUnit->currentName());

    return result;
}

#include "setpcbwidget.moc"

/***************************** SetPcbWidget *****************************/
SetPcbWidget::SetPcbWidget(QWidget *iParent)
    : QDialog{iParent},
      dp(new SetPcbWidgetPrivate(this))
{
    setFixedSize(785, 600);
    setWindowTitle("PCB Strain Rate设置");

    dp->initLayout();
    dp->initUiData();
}

void SetPcbWidget::setData(const QVariantMap &iData)
{
    dp->setIntputData(iData.value("input").toMap());
    dp->setOutputData(iData.value("output").toMap());
    dp->setOutputChannelsData(iData.value("output_channels").toMap());
    dp->setUnitData(iData.value("unit").toMap());

    dp->m_groupName->setReadOnly(true);

    if (GApp->isWriting())
    {
        dp->m_btnBox->setHidden(true);
    }
}

QVariantMap SetPcbWidget::getData()
{
    return dp->m_setDatas;
}

void SetPcbWidget::accept()
{
    QVariantMap input_data = dp->getIntpuData();
    if (input_data.isEmpty())
        return;

    QVariantMap output_data = dp->getOutputData();
    if (output_data.isEmpty())
        return;

    QVariantMap output_channels_data = dp->getOutputChannelsData();

    QVariantMap unit_data = dp->getUnitData();
    if (unit_data.isEmpty())
        return;

    dp->m_setDatas.insert("algo_type", 2); // 算法类型 2 = PCB算法
    dp->m_setDatas.insert("input", input_data);
    dp->m_setDatas.insert("output", output_data);
    dp->m_setDatas.insert("output_channels", output_channels_data);
    dp->m_setDatas.insert("unit", unit_data);
    QDialog::accept();
}
