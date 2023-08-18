#include "filedelegate.h"
#include <QDebug>
#include <QProgressBar>
#include <QApplication>

class FileDelegatePrivate : public QObject
{
    Q_OBJECT
public:
    explicit FileDelegatePrivate(FileDelegate *iParent)
        : QObject(iParent), dd(iParent),
          m_column(0), m_lastPercent(0)
    {
    }

    FileDelegate const * dd;
    QList<QProgressBar *> m_barList;
    QList<int> m_rowList;
    int m_column;
    int m_lastPercent;
};

#include "filedelegate.moc"

FileDelegate::FileDelegate(QObject *iParent)
    : QStyledItemDelegate(iParent), dp(new FileDelegatePrivate(this))
{
}

FileDelegate::~FileDelegate()
{
    qDebug() << __FUNCTION__;
    for (QProgressBar *bar : dp->m_barList)
    {
        delete bar;
        bar = nullptr;
    }
}

void FileDelegate::paint(QPainter *iPainter, const QStyleOptionViewItem &iOption, const QModelIndex &iIndex) const
{
    if (!iIndex.isValid())
    {
        QStyledItemDelegate::paint(iPainter, iOption, iIndex);
        return;
    }

    if (iIndex.column() != dp->m_column)
    {
        QStyledItemDelegate::paint(iPainter, iOption, iIndex);
        return;
    }

    QProgressBar *bar = dp->m_barList.at(iIndex.row());
    int value = iIndex.data().toInt();

    QStyleOptionProgressBar bar_option;
    bar_option.initFrom(iOption.widget);
    // 设置进度条显示的区域
    bar_option.rect = iOption.rect;
    // 设置最小值
    bar_option.minimum = 0;
    // 设置最大值
    bar_option.maximum = 100;
    // 设置对齐方式
    bar_option.textAlignment = Qt::AlignCenter;
    // 设置进度
    if (bar->maximum() != 0)
    {
        bar_option.progress = value;
    }
    // 设置文本
    bar_option.text = QString("%1%").arg(bar_option.progress);
    // 设置文本可见
    bar_option.textVisible = true;

    QApplication::style()->drawControl(QStyle::CE_ProgressBar, &bar_option, iPainter, bar);
}

QSize FileDelegate::sizeHint(const QStyleOptionViewItem &iOption, const QModelIndex &iIndex) const
{
    Q_UNUSED(iIndex);
    return iOption.rect.size();
}

void FileDelegate::setColumn(int iColumn)
{
    dp->m_column = iColumn;
}

void FileDelegate::addProcessbar(int iRow, int iMin, int iMax)
{
    QProgressBar *bar = new QProgressBar;
    bar->setRange(iMin, iMax);
    bar->setValue(0);

    dp->m_barList << bar;
    dp->m_rowList << iRow;
}

void FileDelegate::clear()
{
    dp->m_rowList.clear();

    for (QProgressBar *bar : dp->m_barList)
    {
        delete bar;
        bar = nullptr;
    }
    dp->m_barList.clear();
}
