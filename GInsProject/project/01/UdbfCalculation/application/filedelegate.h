#ifndef FILEDELEGATE_H
#define FILEDELEGATE_H

#include <fglobal/fglobal.h>
#include <QStyledItemDelegate>

// https://blog.csdn.net/weixin_42837024/article/details/105416811
class FileDelegate : public QStyledItemDelegate
{
    Q_OBJECT
    F_DECLARE_PRIVATE(FileDelegate)
public:
    explicit  FileDelegate(QObject *iParent = nullptr);
    ~FileDelegate();

    void paint(QPainter *iPainter, const QStyleOptionViewItem &iOption, const QModelIndex &iIndex) const override;
    QSize sizeHint(const QStyleOptionViewItem &iOption, const QModelIndex &iIndex) const override;

    void setColumn(int iColumn);
    void addProcessbar(int iRow, int iMin, int iMax);

    void clear();
};

#endif // FILEDELEGATE_H
