#include "gtableview.h"
#include <QMenu>
#include <QDebug>

/**************************** GTableViewPrivate ****************************/
class GTableViewPrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(GTableView)
public:
    explicit GTableViewPrivate(GTableView *iParent)
      : QObject(iParent), dd(iParent),
        m_menu(nullptr)
    {
        Q_UNUSED(dd);
    }

    QMenu *m_menu;

public slots:
    void onShowMenu(const QPoint &);
};

void GTableViewPrivate::onShowMenu(const QPoint &)
{
    if(!m_menu)
        return;

    m_menu->exec(QCursor::pos());
}

#include "gtableview.moc"

/**************************** GTableView ****************************/
GTableView::GTableView(QWidget *parent) :
    QTableView(parent),
    dp(new GTableViewPrivate(this))
{
    connect(this, &GTableView::customContextMenuRequested, dp, &GTableViewPrivate::onShowMenu);
}

GTableView::~GTableView()
{
}

QModelIndexList GTableView::selectedIndexes() const
{
    return selectionModel()->selectedRows();
}

void GTableView::setPopupMenu(QMenu *iMenu)
{
    if(!iMenu)
        return;

    dp->m_menu = iMenu;
    setContextMenuPolicy(Qt::CustomContextMenu);
}
