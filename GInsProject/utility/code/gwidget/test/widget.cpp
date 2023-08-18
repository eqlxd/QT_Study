#include "widget.h"
#include <QDebug>
#include <QVBoxLayout>

Widget::Widget(QWidget *iParent)
    : QWidget(iParent)
{
    resize(800, 600);

    initLayout();
}

Widget::~Widget()
{
}

void Widget::initLayout()
{
    m_lineEdit = new GLineEdit(this);
    m_lineEdit->setPushButton("...");

    QPushButton *btn1 = new QPushButton("qInfo", this);
    QPushButton *btn2 = new QPushButton("qDebug", this);
    QPushButton *btn3 = new QPushButton("qWarning", this);
    QPushButton *btn4 = new QPushButton("qCritical", this);
    QPushButton *btn5 = new QPushButton("qFatal", this);

    connect(btn1, &QPushButton::clicked, this, [=]() { qInfo() << "print qInfo."; });
    connect(btn2, &QPushButton::clicked, this, [=]() { qDebug() << "print qDebug."; });
    connect(btn3, &QPushButton::clicked, this, [=]() { qWarning() << "print qWarning."; });
    connect(btn4, &QPushButton::clicked, this, [=]() { qCritical() << "print qCritical."; });
    connect(btn5, &QPushButton::clicked, this, [=]() { qFatal("print qFatal."); });

    QVBoxLayout *vbox = new QVBoxLayout(this);
    vbox->addWidget(m_lineEdit);
    vbox->addWidget(btn1);
    vbox->addWidget(btn2);
    vbox->addWidget(btn3);
    vbox->addWidget(btn4);
    vbox->addWidget(btn5);
}

void Widget::keyPressEvent(QKeyEvent *iEvent)
{
    if (iEvent->key() == Qt::Key_F1)
    {
        if (!m_runInfo)
        {
            m_runInfo = new GRunInfoWidget;
        }

        m_runInfo->show();
        m_runInfo->raise();
    }
}

