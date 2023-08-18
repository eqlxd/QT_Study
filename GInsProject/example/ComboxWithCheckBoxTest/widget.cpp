#include "widget.h"
#include <QDebug>
#include <QVBoxLayout>
#include <QFormLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(1024, 768);

    m_combox = new DSCheckComboBox(this);
    m_combox->addItems(QStringList() << "All" << "11" << "22" << "33");

    QFormLayout *form = new QFormLayout(this);
    form->addRow("dscheckcombomodel ComBox", m_combox);

    connect(m_combox, &DSCheckComboBox::checkedItemsChanged, this, [=]()
    {
        qDebug() << "111111111" << m_combox->checkedItems()
                 << m_combox->currentText();
    });

    connect(m_combox, &DSCheckComboBox::currentTextChanged, this, [=]()
    {
        qDebug() << "222";
    });
}

Widget::~Widget()
{
}
