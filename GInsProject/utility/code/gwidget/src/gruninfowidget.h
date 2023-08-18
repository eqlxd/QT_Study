#ifndef GRUNINFOWIDGET_H
#define GRUNINFOWIDGET_H

#include "gwidget_global.h"
#include <gglobal/dpoint.h>
#include <QTextEdit>

QT_BEGIN_NAMESPACE
class QKeyEvent;
class QCloseEvent;
QT_END_NAMESPACE

class G_WIDGET_EXPORT GRunInfoWidget : public QTextEdit
{
    Q_OBJECT
    G_DECLARE_DP(GRunInfoWidget)
public:
    explicit GRunInfoWidget(QWidget *iParent = nullptr);

    static void installMessageHandler();
    static void uninstallMessageHandler();

protected:
    void keyPressEvent(QKeyEvent *iEvent) override;
    void closeEvent(QCloseEvent *) override;
};

#endif // GRUNINFOWIDGET_H
