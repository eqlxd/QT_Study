#ifndef GCOMBOBOX_H
#define GCOMBOBOX_H

#include "gwidget_global.h"
#include <QComboBox>

class GComboBoxPrivate;
class G_WIDGET_EXPORT GComboBox : public QComboBox
{
	Q_OBJECT
    Q_PROPERTY(QList<QVariant> itemList READ itemList WRITE setItemList NOTIFY itemListChanged)
    Q_PROPERTY(QString currentName READ currentName WRITE setCurrentName)
    Q_PROPERTY(bool wheelEnabled READ isWheelEnabled WRITE setWheelEnabled)
    Q_PROPERTY(bool searchable READ isSearchable WRITE setSearchable)

public:
    explicit GComboBox(QWidget *parent = 0);
    ~GComboBox();
    void showPopup();
    void hidePopup();

public slots:
    QList<QVariant> itemList();
    void setItemList(const QList<QVariant> &iItemList);
    QString currentName();
    void setCurrentName(const QString &iCurName);
    QIcon currentIcon();
    QVariant currentUserData();
    bool isWheelEnabled();
    void setWheelEnabled(bool iFlag);
    bool isSearchable();
    void setSearchable(bool iFlag);

signals:
    void itemListChanged();

protected:
    void wheelEvent(QWheelEvent *e);

protected:
    const QScopedPointer<GComboBoxPrivate> d_ptr;

private:
    Q_DISABLE_COPY(GComboBox)
    Q_DECLARE_PRIVATE(GComboBox)
};

#endif // GCOMBOBOX_H

