#ifndef RUNINFOWIDGET_H
#define RUNINFOWIDGET_H

#include <fglobal/fglobal.h>
#include <QTextEdit>

class RunInfoWidget : public QTextEdit
{
    Q_OBJECT
    F_DECLARE_PRIVATE(RunInfoWidget)
public:
    explicit RunInfoWidget(QWidget *iParent = nullptr);

protected:
    void keyPressEvent(QKeyEvent *iEvent);
    void closeEvent(QCloseEvent *);
};

#endif // RUNINFOWIDGET_H
