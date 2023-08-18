#include "geditabledelegate.h"
#include <QDebug>
#include <QLineEdit>

/**************************** GEditableDelegatePrivate ****************************/
class GEditableDelegatePrivate : public QObject
{
    Q_OBJECT
public:
    GEditableDelegatePrivate(GEditableDelegate *iParent);

    GEditableDelegate * const dd;
    QStringList m_headerItems;
};

GEditableDelegatePrivate::GEditableDelegatePrivate(GEditableDelegate *iParent) :
    QObject(iParent), dd(iParent)
{
}

#include "geditabledelegate.moc"

/**************************** GEditableDelegate ****************************/
GEditableDelegate::GEditableDelegate(QObject *iParent) :
    QStyledItemDelegate(iParent),
    dp(new GEditableDelegatePrivate(this))
{
}

GEditableDelegate::~GEditableDelegate()
{
}

QWidget *GEditableDelegate::createEditor(QWidget *iParent, const QStyleOptionViewItem &iOption, const QModelIndex &iIndex) const
{
    return new QLineEdit(iParent);
}

void GEditableDelegate::setEditorData(QWidget *iEditor, const QModelIndex &iIndex) const
{
    QVariant data = iIndex.model()->data(iIndex);
    QLineEdit *line_edit = qobject_cast<QLineEdit *>(iEditor);
    line_edit->setText(data.toString());
}

void GEditableDelegate::setModelData(QWidget *iEditor, QAbstractItemModel *iModel, const QModelIndex &iIndex) const
{
    QLineEdit *line_edit = qobject_cast<QLineEdit *>(iEditor);
    QString data = line_edit->text();

    QString field_name = dp->m_headerItems.at(iIndex.column());
    QVariantMap value_map;
    value_map.insert("value", data);
    value_map.insert(QString("%1.background").arg(field_name), "white");
    value_map.insert(QString("%1.foreground").arg(field_name), "black");

    QVariantMap data_map;
    data_map.insert(field_name, value_map);
    if(!iModel->setData(iIndex, data_map))
        return;
}

void GEditableDelegate::updateEditorGeometry(QWidget *iEditor, const QStyleOptionViewItem &iOption, const QModelIndex &iIndex) const
{
    Q_UNUSED(iIndex);
    iEditor->setGeometry(iOption.rect);
}

void GEditableDelegate::setHeadItems(const QVariantList &iHeadItems)
{
    foreach(QVariant var, iHeadItems)
        dp->m_headerItems << var.toMap().value("name").toString();
}
