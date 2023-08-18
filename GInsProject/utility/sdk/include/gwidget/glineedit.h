#ifndef GLINEEDIT_H
#define GLINEEDIT_H

#include "gwidget_global.h"
#include <gglobal/dpoint.h>
#include <QLineEdit>

class QPushButton;
class G_WIDGET_EXPORT GLineEdit : public QLineEdit
{
    Q_OBJECT
    G_DECLARE_DP(GLineEdit)
public:
    explicit GLineEdit(QWidget *iParent = nullptr);
    ~GLineEdit();

    // 在最右侧显示按钮
    void setPushButton(const QString &iText = QString());
    QPushButton *getPushButton();
};

#endif // GLINEEDIT_H
