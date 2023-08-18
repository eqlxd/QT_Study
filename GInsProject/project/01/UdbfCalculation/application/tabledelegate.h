#ifndef TABLEDELEGATE_H
#define TABLEDELEGATE_H

#include <fglobal/fglobal.h>
#include <QStyledItemDelegate>

class TableDelegate : public QStyledItemDelegate
{
    Q_OBJECT
    F_DECLARE_PRIVATE(TableDelegate)
public:
    explicit TableDelegate(QObject *iParent = nullptr);

    QWidget *createEditor(QWidget *parent,
                                  const QStyleOptionViewItem &option,
                                  const QModelIndex &index) const;
    void destroyEditor(QWidget *editor, const QModelIndex &index) const;
    void setEditorData(QWidget *editor, const QModelIndex &index) const;
    void setModelData(QWidget *editor,
                              QAbstractItemModel *model,
                              const QModelIndex &index) const;
    void updateEditorGeometry(QWidget *editor,
                                      const QStyleOptionViewItem &option,
                                      const QModelIndex &index) const;

    void setComboBoxItemList(int column, const QVariantList &list);
};

#endif // TABLEDELEGATE_H
