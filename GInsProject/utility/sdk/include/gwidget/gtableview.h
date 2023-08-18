#ifndef GTABLEVIEW_H
#define GTABLEVIEW_H

#include "gwidget_global.h"
#include <gglobal/dpoint.h>
#include <QTableView>

class QMenu;
class G_WIDGET_EXPORT GTableView : public QTableView
{
    Q_OBJECT
    G_DECLARE_DP(GTableView)
public:
    explicit GTableView(QWidget *parent = 0);
    ~GTableView();

    QModelIndexList selectedIndexes() const override;

public:
    void setPopupMenu(QMenu *iMenu);
};

#endif // GTABLEVIEW_H
