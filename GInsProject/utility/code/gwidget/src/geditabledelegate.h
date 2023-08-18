#ifndef GEDITABLEDELEGATE_H
#define GEDITABLEDELEGATE_H

#include "gwidget_global.h"
#include <gglobal/dpoint.h>
#include <QStyledItemDelegate>

class G_WIDGET_EXPORT GEditableDelegate : public QStyledItemDelegate
{
    Q_OBJECT
    G_DECLARE_DP(GEditableDelegate)
public:
    explicit GEditableDelegate(QObject *iParent = nullptr);
    ~GEditableDelegate();

    //编辑时重写
    QWidget *createEditor(QWidget *iParent, const QStyleOptionViewItem &iOption, const QModelIndex &iIndex) const;
    void setEditorData(QWidget *iEditor, const QModelIndex &iIndex) const;
    void setModelData(QWidget *iEditor, QAbstractItemModel *iModel, const QModelIndex &iIndex) const;
    void updateEditorGeometry(QWidget *iEditor, const QStyleOptionViewItem &iOption, const QModelIndex &iIndex) const;

public:
    void setHeadItems(const QVariantList &iHeadItems);
};

#endif // GEDITABLEDELEGATE_H
