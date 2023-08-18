#ifndef DSCHECKCOMBOMODEL_H
#define DSCHECKCOMBOMODEL_H

#include <QStandardItemModel>
#include <QComboBox>

class DSCheckComboModel : public QStandardItemModel
{
    Q_OBJECT

public:
    explicit DSCheckComboModel(QObject* parent = Q_NULLPTR);

    virtual Qt::ItemFlags flags(const QModelIndex& index) const;
    virtual QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const;
    virtual bool setData(const QModelIndex& index, const QVariant& value, int role = Qt::EditRole);

Q_SIGNALS:
    void checkStateChanged();
};

class DSCheckComboBoxPrivate;
class DSCheckComboBox : public QComboBox
{
    Q_OBJECT

    Q_PROPERTY(QString separator READ separator WRITE setSeparator)
    Q_PROPERTY(QString defaultText READ defaultText WRITE setDefaultText)
    Q_PROPERTY(QStringList checkedItems READ checkedItems WRITE setCheckedItems)

public:
    explicit DSCheckComboBox(QWidget *parent = Q_NULLPTR);
    ~DSCheckComboBox();

    //隐藏下拉框
    virtual void hidePopup();

    //获取默认文本
    QString defaultText() const;
    //设置默认文本
    void setDefaultText(const QString& text);

    //获取勾选状态
    Qt::CheckState itemCheckState(int index) const;
    //设置勾选状态
    void setItemCheckState(int index, Qt::CheckState state);

    //获取字符串分割方式
    QString separator() const;
    //设置字符串分割方式
    void setSeparator(const QString& separator);

    //获取所有勾选的文本
    QStringList checkedItems() const;
    //获取所有勾线的下标
    QVariantList checkedIndexs() const;

public Q_SLOTS:
    void setCheckedItems(const QStringList& items);

Q_SIGNALS:
    void checkedItemsChanged(const QStringList& items);

protected:
    virtual bool eventFilter(QObject *watched, QEvent *event);
    virtual void wheelEvent(QWheelEvent *e);

private:
    QScopedPointer<DSCheckComboBoxPrivate> d_ptr;
    Q_DISABLE_COPY(DSCheckComboBox)
    Q_DECLARE_PRIVATE(DSCheckComboBox)
    Q_PRIVATE_SLOT(d_func(), void updateCheckedItems())
    Q_PRIVATE_SLOT(d_func(), void toggleCheckState(int index))
};

#endif
