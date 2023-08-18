#include "setrosetteswidget.h"
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

/***************************** SetRosettesWidgetPrivate *****************************/
class SetRosettesWidgetPrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(SetRosettesWidget)
public:
    explicit SetRosettesWidgetPrivate(SetRosettesWidget *iParent)
      : QObject(iParent), dd(iParent)
    {
    }

    QVariantMap m_setDatas;
    // key = QCheckBox->text()
    // value = QVariantMap，包含名称，描述，单位三项
    QVariantMap m_opChData;

    // 输入
    QGroupBox *m_groupInput = nullptr;
    GComboBox *m_inputA = nullptr;
    GComboBox *m_inputB = nullptr;
    GComboBox *m_inputC = nullptr;

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
    QCheckBox *m_chMaxStress = nullptr;
    QCheckBox *m_chMinStress = nullptr;
    QCheckBox *m_chShearStress = nullptr;
    // row2
    QCheckBox *m_chMaxStrain = nullptr;
    QCheckBox *m_chMinStrain = nullptr;
    QCheckBox *m_chAngle = nullptr;

    // Rosette definition
    QGroupBox *m_groupRosetteDefinition = nullptr;
    GComboBox *m_type = nullptr;
    GComboBox *m_angle = nullptr;
    QLabel *m_pixmapLabel = nullptr;
    QPixmap m_pixmap;

    // Strain and stress units
    QGroupBox *m_groupSS = nullptr;
    GComboBox *m_strainInputUnit = nullptr;
    GComboBox *m_strainOutputUnit = nullptr;
    GComboBox *m_stressOutputUnit = nullptr;

    // Linear elastic parameters
    QGroupBox *m_groupYoung = nullptr;
    QLineEdit *m_yongValue = nullptr;
    GComboBox *m_yongUnit = nullptr;
    QLineEdit *m_poissonRatio = nullptr;

    QDialogButtonBox *m_btnBox = nullptr;

public:
    void initLayout();
    void initInput();
    void initOutput();
    void initOutputChannels();
    void initRosetteDefinition();
    void initStrainAndStressUnits();
    void initLinearElasticParameters();

    void initUiData();
    // 获取各个下拉框数据
    QVariantList getVarItemList();
    QVariantList getTypeItemList();
    QVariantList getAngleItemList();
    QVariantList getStrainUnitItemList();
    QVariantList getStressUnitItemList();
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
    void setRosetteDefinition(const QVariantMap &iData);
    void setStrainAndStressUnits(const QVariantMap &iData);
    void setLinearElasticParameters(const QVariantMap &iData);

    QVariantMap getIntpuData();
    QVariantMap getOutputData();
    QVariantMap getOutputChannelsData();
    QVariantMap getRosetteDefinition();
    QVariantMap getUnits();
    QVariantMap getEvUnit();
    double getCoefficient();
};

void SetRosettesWidgetPrivate::initLayout()
{
    initInput();
    initOutput();
    initOutputChannels();
    initRosetteDefinition();
    initStrainAndStressUnits();
    initLinearElasticParameters();

    QVBoxLayout *vbox_left = new QVBoxLayout;
    vbox_left->addWidget(m_groupInput);
    vbox_left->addWidget(m_groupOutput);

    QHBoxLayout *hbox1 = new QHBoxLayout;
    hbox1->addWidget(m_groupSS);
    hbox1->addWidget(m_groupYoung);

    QVBoxLayout *vbox_right = new QVBoxLayout;
    vbox_right->addWidget(m_groupOuputChannels);
    vbox_right->addWidget(m_groupRosetteDefinition);
    vbox_right->addLayout(hbox1);

    QHBoxLayout *hbox2 = new QHBoxLayout;
    hbox2->addLayout(vbox_left);
    hbox2->addLayout(vbox_right);
    hbox2->addStretch();

    m_btnBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, dd);
    m_btnBox->button(QDialogButtonBox::Ok)->setText("确定");
    m_btnBox->button(QDialogButtonBox::Cancel)->setText("取消");

    QVBoxLayout *vbox = new QVBoxLayout(dd);
    vbox->addLayout(hbox2);
    vbox->addWidget(m_btnBox, Qt::AlignRight);

    connect(m_btnBox, &QDialogButtonBox::accepted, dd, &SetRosettesWidget::accept);
    connect(m_btnBox, &QDialogButtonBox::rejected, dd, &SetRosettesWidget::reject);
}

void SetRosettesWidgetPrivate::initInput()
{
    m_groupInput = new QGroupBox("输入", dd);
    m_groupInput->setAlignment(Qt::AlignLeft);

    m_inputA = new GComboBox(dd);
    m_inputB = new GComboBox(dd);
    m_inputC = new GComboBox(dd);

    QVBoxLayout *vbox1 = new QVBoxLayout;
    vbox1->addWidget(new QLabel("Epsilon A", dd));
    vbox1->addWidget(m_inputA);

    QVBoxLayout *vbox2 = new QVBoxLayout;
    vbox2->addWidget(new QLabel("Epsilon B", dd));
    vbox2->addWidget(m_inputB);

    QVBoxLayout *vbox3 = new QVBoxLayout;
    vbox3->addWidget(new QLabel("Epsilon C", dd));
    vbox3->addWidget(m_inputC);

    QVBoxLayout *vbox = new QVBoxLayout(m_groupInput);
    vbox->addLayout(vbox1);
    vbox->addLayout(vbox2);
    vbox->addLayout(vbox3);
    vbox->addStretch();
}

void SetRosettesWidgetPrivate::initOutput()
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

    connect(m_opChannelName, &GComboBox::currentTextChanged, this, &SetRosettesWidgetPrivate::onSetOutputChannelData);
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

void SetRosettesWidgetPrivate::initOutputChannels()
{
    m_groupOuputChannels = new QGroupBox("Output Channels", dd);
    m_groupOuputChannels->setAlignment(Qt::AlignLeft);

    // row1
    m_chMaxStress = new QCheckBox("Max Stress", dd);
    m_chMinStress = new QCheckBox("Min Stress", dd);
    m_chShearStress = new QCheckBox("Shear Stress", dd);
    // row2
    m_chMaxStrain = new QCheckBox("Max Strain", dd);
    m_chMinStrain = new QCheckBox("Min Strain", dd);
    m_chAngle = new QCheckBox("Angle", dd);

    // set object name
    m_chMaxStress->setObjectName("11");
    m_chMinStress->setObjectName("12");
    m_chShearStress->setObjectName("13");

    m_chMaxStrain->setObjectName("21");
    m_chMinStrain->setObjectName("22");
    m_chAngle->setObjectName("23");

    QGridLayout *grid_layout = new QGridLayout(m_groupOuputChannels);
    grid_layout->addWidget(m_chMaxStress, 0, 0, 1, 1);
    grid_layout->addWidget(m_chMinStress, 0, 1, 1, 1);
    grid_layout->addWidget(m_chShearStress, 0, 2, 1, 1);

    grid_layout->addWidget(m_chMaxStrain, 1, 0, 1, 1);
    grid_layout->addWidget(m_chMinStrain, 1, 1, 1, 1);
    grid_layout->addWidget(m_chAngle, 1, 2, 1, 1);
}

void SetRosettesWidgetPrivate::initRosetteDefinition()
{
    m_groupRosetteDefinition = new QGroupBox("Rosette Definition", dd);
    m_groupRosetteDefinition->setAlignment(Qt::AlignLeft);

    m_type = new GComboBox(dd);
    m_angle = new GComboBox(dd);
    m_pixmapLabel = new QLabel(dd);
    m_pixmapLabel->setPixmap(QPixmap(":/image/img/45.png"));

    QVBoxLayout *vbox1 = new QVBoxLayout;
    vbox1->addWidget(new QLabel("Type", dd));
    vbox1->addWidget(m_type);

    QVBoxLayout *vbox2 = new QVBoxLayout;
    vbox2->addWidget(new QLabel("Angle Reference", dd));
    vbox2->addWidget(m_angle);

    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addLayout(vbox1);
    vbox->addLayout(vbox2);
    vbox->addStretch();

    QHBoxLayout *hbox = new QHBoxLayout(m_groupRosetteDefinition);
    hbox->addLayout(vbox);
    hbox->addWidget(m_pixmapLabel);

    connect(m_type, QOverload<int>::of(&QComboBox::currentIndexChanged), this, [=](int iIndex)
    {
        if (iIndex == 0)
        {
            m_pixmapLabel->setPixmap(QPixmap(":/image/img/45.png"));
        }
        else if (iIndex == 1)
        {
            m_pixmapLabel->setPixmap(QPixmap(":/image/img/60.png"));
        }
    });
}

void SetRosettesWidgetPrivate::initStrainAndStressUnits()
{
    m_groupSS = new QGroupBox("Strain and Stress Units", dd);
    m_groupSS->setAlignment(Qt::AlignLeft);

    m_strainInputUnit = new GComboBox(dd);
    m_strainOutputUnit = new GComboBox(dd);
    m_stressOutputUnit = new GComboBox(dd);

    QVBoxLayout *vbox1 = new QVBoxLayout;
    vbox1->addWidget(new QLabel("Strain input unit", dd));
    vbox1->addWidget(m_strainInputUnit);
    vbox1->addStretch();

    QVBoxLayout *vbox2 = new QVBoxLayout;
    vbox2->addWidget(new QLabel("Strain output unit", dd));
    vbox2->addWidget(m_strainOutputUnit);
    vbox2->addStretch();

    QVBoxLayout *vbox3 = new QVBoxLayout;
    vbox3->addWidget(new QLabel("Stress Output Unit", dd));
    vbox3->addWidget(m_stressOutputUnit);
    vbox3->addStretch();

    QGridLayout *grid_layout = new QGridLayout(m_groupSS);
    grid_layout->addLayout(vbox1, 0, 0, 1, 1);
    grid_layout->addLayout(vbox2, 0, 1, 1, 1);
    grid_layout->addLayout(vbox3, 1, 1, 1, 1);

    connect(m_stressOutputUnit, QOverload<int>::of(&QComboBox::currentIndexChanged), this, [=](int iIndex)
    {
        if (m_opChannelName->currentText().contains("Stress"))
        {
            if (iIndex == 0)
            {
                m_opChUnit->setText("MPa");
            }
            else if (iIndex == 1)
            {
                m_opChUnit->setText("Pa");
            }
        }
    });
}

void SetRosettesWidgetPrivate::initLinearElasticParameters()
{
    m_groupYoung = new QGroupBox("Linear Elastic Parameters", dd);
    m_groupYoung->setAlignment(Qt::AlignLeft);

    m_yongValue = new QLineEdit(dd);
    m_yongUnit = new GComboBox(dd);
    m_poissonRatio = new QLineEdit(dd);

    QRegExp reg_exp("[0-9\\.]+$"); // 只能输入数字和小数点
    m_yongValue->setValidator(new QRegExpValidator(reg_exp,this));
    m_poissonRatio->setValidator(new QRegExpValidator(reg_exp,this));

    QVBoxLayout *vbox1 = new QVBoxLayout;
    vbox1->addWidget(new QLabel("Young modules", dd));
    vbox1->addWidget(m_yongValue);
    vbox1->addStretch();

    QVBoxLayout *vbox2 = new QVBoxLayout;
    vbox2->addWidget(new QLabel("", dd));
    vbox2->addWidget(m_yongUnit);
    vbox2->addStretch();

    QVBoxLayout *vbox3 = new QVBoxLayout;
    vbox3->addWidget(new QLabel("Poisson Ratio", dd));
    vbox3->addWidget(m_poissonRatio);
    vbox3->addStretch();

    QGridLayout *grid_layout = new QGridLayout(m_groupYoung);
    grid_layout->addLayout(vbox1, 0, 0, 1, 1);
    grid_layout->addLayout(vbox2, 0, 1, 1, 1);
    grid_layout->addLayout(vbox3, 1, 0, 1, 1);
}

void SetRosettesWidgetPrivate::initUiData()
{
    {
        // 1. 输入
        QVariantList item_list = getVarItemList();
        m_inputA->setItemList(item_list);
        m_inputB->setItemList(item_list);
        m_inputC->setItemList(item_list);
    }

    {
        // 2. rosette definition
        m_type->setItemList(getTypeItemList());
        m_angle->setItemList(getAngleItemList());
        m_type->setCurrentIndex(0);
        m_angle->setCurrentIndex(0);
    }

    {
        // 3. Strain And Stress Units 和 Linear Elastic Parameters
        m_strainInputUnit->setItemList(getStrainUnitItemList());
        m_strainInputUnit->setCurrentIndex(0);

        m_strainOutputUnit->setItemList(getStrainUnitItemList());
        m_strainOutputUnit->setCurrentIndex(0);

        m_stressOutputUnit->setItemList(getStressUnitItemList());
        m_stressOutputUnit->setCurrentIndex(1);

        m_yongUnit->setItemList(getStressUnitItemList());
        m_yongUnit->setCurrentIndex(0);
    }

    {
        // 4. output channels --> 输出
        connect(m_chMaxStress, &QCheckBox::stateChanged, this, &SetRosettesWidgetPrivate::onSetOutputChannelItemList);
        connect(m_chMinStress, &QCheckBox::stateChanged, this, &SetRosettesWidgetPrivate::onSetOutputChannelItemList);
        connect(m_chShearStress, &QCheckBox::stateChanged, this, &SetRosettesWidgetPrivate::onSetOutputChannelItemList);

        connect(m_chMaxStrain, &QCheckBox::stateChanged, this, &SetRosettesWidgetPrivate::onSetOutputChannelItemList);
        connect(m_chMinStrain, &QCheckBox::stateChanged, this, &SetRosettesWidgetPrivate::onSetOutputChannelItemList);
        connect(m_chAngle, &QCheckBox::stateChanged, this, &SetRosettesWidgetPrivate::onSetOutputChannelItemList);
    }
}

QVariantList SetRosettesWidgetPrivate::getVarItemList()
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

QVariantList SetRosettesWidgetPrivate::getTypeItemList()
{
    QVariantList item_list;

    QVariantMap item1, item2;
    item1.insert("name", "item1");
    item1.insert("text", "45°");
    item_list.append(item1);

    item2.insert("name", "item2");
    item2.insert("text", "60°");
    item_list.append(item2);

    return item_list;
}

QVariantList SetRosettesWidgetPrivate::getAngleItemList()
{
    QVariantList item_list;

    QVariantMap item1, item2, item3;
    item1.insert("name", "item1");
    item1.insert("text", "A");
    item_list.append(item1);
#if 0
    item2.insert("name", "item2");
    item2.insert("text", "B");
    item_list.append(item2);

    item3.insert("name", "item3");
    item3.insert("text", "C");
    item_list.append(item3);
#else
    Q_UNUSED(item2);
    Q_UNUSED(item3);
#endif

    return item_list;
}

QVariantList SetRosettesWidgetPrivate::getStrainUnitItemList()
{
    QVariantList item_list;

    QVariantMap item1, item2;
    item1.insert("name", "item1");
    item1.insert("text", "um/m");
    item_list.append(item1);

    item2.insert("name", "item2");
    item2.insert("text", "uStra");
    item_list.append(item2);

    return item_list;
}

QVariantList SetRosettesWidgetPrivate::getStressUnitItemList()
{
    QVariantList item_list;

    QVariantMap item1, item2;
    item1.insert("name", "item1");
    item1.insert("text", "N/mm2");
    item_list.append(item1);

    item2.insert("name", "item2");
    item2.insert("text", "N/m2");
    item_list.append(item2);

    return item_list;
}

Qt::CheckState SetRosettesWidgetPrivate::getCheckState(int iState)
{
    if (iState == Qt::Checked)
        return Qt::Checked;

    return Qt::Unchecked;
}

void SetRosettesWidgetPrivate::setOutputChannelDescAndUnit(QCheckBox *iCheckBox, const QString &iDesc, const QString &iUnit)
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

/*
 * 动态添加ComboBox下拉框数据
 * name为QCheckBox的objectName
 * text为QCheckBox的text()
 *
 * 动态添加的思路为：
 *   先获取ComboBox现有的下拉框数据，再获取发射信号的对象的object_name和text
 *   然后先做重复性判断，已经在itemList中存在的，则不再添加进去，删除时也要先判断是否存在
 *   最后按照QCheckBox的勾选状态确定是添加数据还是删除数据
 */
void SetRosettesWidgetPrivate::onSetOutputChannelItemList(int iCheckState)
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
        setOutputChannelDescAndUnit(check_box, "最大应力", "Pa");
    }
    else if (check_box->objectName() == "12")
    {
        setOutputChannelDescAndUnit(check_box, "最小应力", "Pa");
    }
    else if (check_box->objectName() == "13")
    {
        setOutputChannelDescAndUnit(check_box, "剪切应力", "Pa");
    }
    else if (check_box->objectName() == "21")
    {
        setOutputChannelDescAndUnit(check_box, "最大应变", "um/m");
    }
    else if (check_box->objectName() == "22")
    {
        setOutputChannelDescAndUnit(check_box, "最小应变", "um/m");
    }
    else if (check_box->objectName() == "23")
    {
        setOutputChannelDescAndUnit(check_box, "角度", "rad");
    }
}

void SetRosettesWidgetPrivate::onSetOutputChannelData(const QString &iText)
{
    QVariantMap ch_data = m_opChData.value(iText).toMap();
    m_opChName->setText(ch_data.value("name").toString());
    m_opChDesc->setText(ch_data.value("desc").toString());
    m_opChUnit->setText(ch_data.value("unit").toString());
}

void SetRosettesWidgetPrivate::setIntputData(const QVariantMap &iData)
{
    m_inputA->setCurrentName(iData.value("a.name").toString());
    m_inputB->setCurrentName(iData.value("b.name").toString());
    m_inputC->setCurrentName(iData.value("c.name").toString());
}

void SetRosettesWidgetPrivate::setOutputData(const QVariantMap &iData)
{
    m_groupName->setText(iData.value("group_name").toString());
    m_opChannelName->setItemList(iData.value("item_list").toList());
    m_opChData = iData.value("ch_data").toMap();

    QTimer::singleShot(0, this, [=]() { m_opChannelName->setCurrentIndex(0); });
}

void SetRosettesWidgetPrivate::setOutputChannelsData(const QVariantMap &iData)
{
    m_chMaxStress->setCheckState(getCheckState(iData.value("max_stress").toInt()));
    m_chMinStress->setCheckState(getCheckState(iData.value("min_stress").toInt()));
    m_chShearStress->setCheckState(getCheckState(iData.value("shear_stress").toInt()));

    m_chMaxStrain->setCheckState(getCheckState(iData.value("max_strain").toInt()));
    m_chMinStrain->setCheckState(getCheckState(iData.value("min_strain").toInt()));
    m_chAngle->setCheckState(getCheckState(iData.value("angle").toInt()));
}

void SetRosettesWidgetPrivate::setRosetteDefinition(const QVariantMap &iData)
{
    m_type->setCurrentName(iData.value("type.name").toString());
    m_angle->setCurrentName(iData.value("angle.name").toString());
}

void SetRosettesWidgetPrivate::setStrainAndStressUnits(const QVariantMap &iData)
{
    m_strainInputUnit->setCurrentName(iData.value("strain_input_unit.name").toString());
    m_strainOutputUnit->setCurrentName(iData.value("strain_output_unit.name").toString());
    m_stressOutputUnit->setCurrentName(iData.value("stress_output_unit.name").toString());
}

void SetRosettesWidgetPrivate::setLinearElasticParameters(const QVariantMap &iData)
{
    m_yongValue->setText(iData.value("young_value").toString());
    m_yongUnit->setCurrentName(iData.value("young_unit.name").toString());
    m_poissonRatio->setText(iData.value("poisson_ratio").toString());
}

QVariantMap SetRosettesWidgetPrivate::getIntpuData()
{
    if (m_inputA->currentName().isEmpty() &&
        m_inputB->currentName().isEmpty() &&
        m_inputC->currentName().isEmpty())
    {
        QMessageBox::warning(dd, "确定", "输入通道不能为空！");
        return QVariantMap();
    }

    QVariantMap result;
    // for tree widget
    result.insert("a", m_inputA->currentText());
    result.insert("b", m_inputB->currentText());
    result.insert("c", m_inputC->currentText());
    // for setData
    result.insert("a.name", m_inputA->currentName());
    result.insert("b.name", m_inputB->currentName());
    result.insert("c.name", m_inputC->currentName());

    return result;
}

QVariantMap SetRosettesWidgetPrivate::getOutputData()
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

QVariantMap SetRosettesWidgetPrivate::getOutputChannelsData()
{
    // for setData
    QVariantMap result;
    result.insert("max_stress", m_chMaxStress->checkState());
    result.insert("min_stress", m_chMinStress->checkState());
    result.insert("shear_stress", m_chShearStress->checkState());

    result.insert("max_strain", m_chMaxStrain->checkState());
    result.insert("min_strain", m_chMinStrain->checkState());
    result.insert("angle", m_chAngle->checkState());

    return result;
}

QVariantMap SetRosettesWidgetPrivate::getRosetteDefinition()
{
    QString type = m_type->currentText();
    QString angle = m_angle->currentText();
    if (type.isEmpty() && angle.isEmpty())
    {
        QMessageBox::warning(dd, "确定", "类型和角度不能为空！");
        return QVariantMap();
    }

    QVariantMap result;
    // for tree widget
    result.insert("type", type);
    result.insert("angle", angle);
    // for setData
    result.insert("type.name", m_type->currentName());
    result.insert("angle.name", m_angle->currentName());

    return result;
}

QVariantMap SetRosettesWidgetPrivate::getUnits()
{
    QString strain_input_unit = m_strainInputUnit->currentText();
    QString strain_output_unit = m_strainOutputUnit->currentText();
    QString stress_output_unit = m_stressOutputUnit->currentText();
    if (strain_input_unit.isEmpty() && strain_output_unit.isEmpty() && stress_output_unit.isEmpty())
    {
        QMessageBox::warning(dd, "确定", "Strain and Stress Units不能为空！");
        return QVariantMap();
    }

    QVariantMap result;
    // for tree widget
    result.insert("strain_input_unit", strain_input_unit);
    result.insert("strain_output_unit", strain_output_unit);
    result.insert("stress_output_unit", stress_output_unit);
    // for setData
    result.insert("strain_input_unit.name", m_strainInputUnit->currentName());
    result.insert("strain_output_unit.name", m_strainOutputUnit->currentName());
    result.insert("stress_output_unit.name", m_stressOutputUnit->currentName());

    return result;
}

QVariantMap SetRosettesWidgetPrivate::getEvUnit()
{
    QString young_value = m_yongValue->text();
    QString young_unit = m_yongUnit->currentText();
    QString poisson_ratio = m_poissonRatio->text();
    if (young_value.isEmpty() && young_unit.isEmpty() && poisson_ratio.isEmpty())
    {
        QMessageBox::warning(dd, "确定", "Linear Elastic Parameters不能为空！");
        return QVariantMap();
    }

    QVariantMap result;
    // for tree widget
    result.insert("young_value", young_value);
    result.insert("young_unit", young_unit);
    result.insert("poisson_ratio", poisson_ratio);
    // for setData
    result.insert("young_unit.name", m_yongUnit->currentName());

    return result;
}

double SetRosettesWidgetPrivate::getCoefficient()
{
    QString e_unit = m_yongUnit->currentText();
    QString stress_unit = m_stressOutputUnit->currentText();

    double coefficient = 0;
    if (e_unit == "N/mm2" && stress_unit == "N/mm2")
        coefficient = 1e-6;  // 10的 -6 次方
    else if (e_unit == "N/mm2" && stress_unit == "N/m2")
        coefficient = 1;
    else if (e_unit == "N/m2" && stress_unit == "N/mm2")
        coefficient = 1e-12;  // 10的 -12 次方
    else if (e_unit == "N/m2" && stress_unit == "N/m2")
        coefficient = 1e-6;  // 10的 -6 次方

    qDebug() << "@@  e_unit=" << e_unit << "  stress_unit=" << stress_unit << "  coefficient=" << coefficient;
    return coefficient;
}

#include "setrosetteswidget.moc"

/***************************** SetRosettesWidget *****************************/
SetRosettesWidget::SetRosettesWidget(QWidget *iParent)
    : QDialog{iParent},
      dp(new SetRosettesWidgetPrivate(this))
{
    setFixedSize(885, 600);
    setWindowTitle("Rosettes设置");

    dp->initLayout();
    dp->initUiData();
}

void SetRosettesWidget::setData(const QVariantMap &iData)
{
    dp->setIntputData(iData.value("input").toMap());
    dp->setOutputData(iData.value("output").toMap());
    dp->setOutputChannelsData(iData.value("output_channels").toMap());
    dp->setRosetteDefinition(iData.value("rosette").toMap());
    dp->setStrainAndStressUnits(iData.value("units").toMap());
    dp->setLinearElasticParameters(iData.value("young").toMap());

    dp->m_groupName->setReadOnly(true);

    if (GApp->isWriting())
    {
        dp->m_btnBox->setHidden(true);
    }
}

QVariantMap SetRosettesWidget::getData()
{
    return dp->m_setDatas;
}

void SetRosettesWidget::accept()
{
    QVariantMap input_data = dp->getIntpuData();
    if (input_data.isEmpty())
        return;

    QVariantMap output_data = dp->getOutputData();
    if (output_data.isEmpty())
        return;

    QVariantMap output_channels_data = dp->getOutputChannelsData();

    QVariantMap rosette_definition = dp->getRosetteDefinition();
    if (rosette_definition.isEmpty())
        return;

    QVariantMap strain_and_stress_units = dp->getUnits();
    if (strain_and_stress_units.isEmpty())
        return;

    QVariantMap young = dp->getEvUnit();
    if (young.isEmpty())
        return;

    dp->m_setDatas.insert("algo_type", 1); // 算法类型 1 = ...算法
    dp->m_setDatas.insert("input", input_data);
    dp->m_setDatas.insert("output", output_data);
    dp->m_setDatas.insert("output_channels", output_channels_data);
    dp->m_setDatas.insert("rosette", rosette_definition);
    dp->m_setDatas.insert("units", strain_and_stress_units);
    dp->m_setDatas.insert("young", young);

    // 根据单位选项计算公式系数
    double coefficient = dp->getCoefficient();
    dp->m_setDatas.insert("coefficient", coefficient);

    QDialog::accept();
}
