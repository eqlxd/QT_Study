#include "tabledelegate.h"
#include <QDebug>
#include <Qt/fqwidgets/fqcombobox.h>

class TableDelegatePrivate : public QObject
{
    Q_OBJECT
public:
    explicit TableDelegatePrivate(TableDelegate *parent)
        : QObject(parent), dd(parent)
    {
    }

    TableDelegate const * dd;
    QMap<int, QVariantList> m_comboxItemList;
};

#include "tabledelegate.moc"

TableDelegate::TableDelegate(QObject *iParent)
    : QStyledItemDelegate(iParent),
      dp(new TableDelegatePrivate(this))
{
}

QWidget *TableDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    if (dp->m_comboxItemList.keys().contains(index.column()))
    {
        FqComboBox *combo_box = new FqComboBox(parent);
        combo_box->setItemList(dp->m_comboxItemList.value(index.column()));
        return combo_box;
    }
    return QStyledItemDelegate::createEditor(parent, option, index);
}

void TableDelegate::destroyEditor(QWidget *editor, const QModelIndex &index) const
{
    if (dp->m_comboxItemList.keys().contains(index.column()))
    {
        editor->deleteLater();
        return;
    }
    QStyledItemDelegate::destroyEditor(editor, index);
}

void TableDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    if (dp->m_comboxItemList.keys().contains(index.column()))
    {
        FqComboBox *combo_box = qobject_cast<FqComboBox *>(editor);
        combo_box->setCurrentText(index.model()->data(index, Qt::DisplayRole).toString());
        return;
    }
    QStyledItemDelegate::setEditorData(editor, index);
}

void TableDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    if (dp->m_comboxItemList.keys().contains(index.column()))
    {
        FqComboBox *combo_box = qobject_cast<FqComboBox *>(editor);
        model->setData(index, combo_box->currentText(), Qt::EditRole);
        model->setData(index, combo_box->currentName(), Qt::UserRole + 1);
        return;
    }
    QStyledItemDelegate::setModelData(editor, model, index);
}

void TableDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    if (dp->m_comboxItemList.keys().contains(index.column()))
    {
        editor->setGeometry(option.rect);
        return;
    }
    QStyledItemDelegate::updateEditorGeometry(editor, option, index);
}

void TableDelegate::setComboBoxItemList(int column, const QVariantList &list)
{
    dp->m_comboxItemList.insert(column, list);
}
