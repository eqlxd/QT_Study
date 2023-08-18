#include "glineedit.h"
#include <QDebug>
#include <QPushButton>
#include <QHBoxLayout>

class GLineEditPrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(GLineEdit)
public:
    explicit GLineEditPrivate(GLineEdit *iParent)
      : QObject(iParent), dd(iParent)
    {
        Q_UNUSED(dd);
    }

    QPushButton *m_btn = nullptr;
};

#include "glineedit.moc"

/**************************** GEditableDelegatePrivate ****************************/
GLineEdit::GLineEdit(QWidget *iParent)
    : QLineEdit(iParent),
      dp(new GLineEditPrivate(this))
{
}

GLineEdit::~GLineEdit()
{
    if (dp->m_btn)
    {
        delete dp->m_btn;
        dp->m_btn = nullptr;
    }
}

void GLineEdit::setPushButton(const QString &iText)
{
    if (dp->m_btn)
    {
        delete dp->m_btn;
        dp->m_btn = nullptr;
    }

    dp->m_btn = new QPushButton(iText);

    QHBoxLayout *hbox = new QHBoxLayout;
    dp->m_btn->setCursor(Qt::ArrowCursor);
    hbox->addStretch();
    hbox->addWidget(dp->m_btn);
    hbox->setContentsMargins(0, 0, 0, 0);
    setLayout(hbox);
}

QPushButton *GLineEdit::getPushButton()
{
    return dp->m_btn;
}
