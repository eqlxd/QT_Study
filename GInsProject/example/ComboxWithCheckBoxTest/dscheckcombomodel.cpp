#include "dscheckcombomodel.h"
#include <QDebug>
#include <QKeyEvent>
#include <QLineEdit>
#include <QAbstractItemView>

DSCheckComboModel::DSCheckComboModel(QObject* parent /* = Q_NULLPTR */)
    : QStandardItemModel(0, 1, parent) //rows,cols
{
}

Qt::ItemFlags DSCheckComboModel::flags(const QModelIndex& index) const
{
    return QStandardItemModel::flags(index) | Qt::ItemIsUserCheckable;
}

QVariant DSCheckComboModel::data(const QModelIndex& index, int role /* = Qt::DisplayRole */) const
{
    QVariant value = QStandardItemModel::data(index, role);
    if (index.isValid() && role == Qt::CheckStateRole && !value.isValid())
        value = Qt::Unchecked;

    return value;
}

bool DSCheckComboModel::setData(const QModelIndex& index, const QVariant& value, int role /* = Qt::EditRole */)
{
    bool ok = QStandardItemModel::setData(index, value, role);
    if (ok && role == Qt::CheckStateRole)
    {
        emit dataChanged(index, index);
        emit checkStateChanged();
    }

    return ok;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class DSCheckComboBoxPrivate : public QObject
{
    Q_DECLARE_PUBLIC(DSCheckComboBox)
    DSCheckComboBox* q_ptr;

public:
    explicit DSCheckComboBoxPrivate(QObject* parent = Q_NULLPTR);
    bool eventFilter(QObject* obj, QEvent* e);

    QString separator;
    QString defaultText;
    bool containerMousePress;

    void updateCheckedItems();
    void toggleCheckState(int index);
};

DSCheckComboBoxPrivate::DSCheckComboBoxPrivate(QObject* parent)
    : containerMousePress(false)
{
    separator = QLatin1String(",");
}

bool DSCheckComboBoxPrivate::eventFilter(QObject* obj, QEvent* e)
{
    switch (e->type())
    {
    case QEvent::KeyPress:
    case QEvent::KeyRelease:
    {
        QKeyEvent* keyEvent = static_cast<QKeyEvent*>(e);
        if (obj == q_ptr && (keyEvent->key() == Qt::Key_Up || keyEvent->key() == Qt::Key_Down))
        {
            q_ptr->showPopup();
            return true;
        }
        else if (keyEvent->key() == Qt::Key_Enter ||
                 keyEvent->key() == Qt::Key_Return ||
                 keyEvent->key() == Qt::Key_Escape)
        {
            q_ptr->hidePopup();
            if (keyEvent->type() != Qt::Key_Escape)
                return true;
        }
    }
    case QEvent::MouseButtonPress:
        containerMousePress = (obj == q_ptr->view()->window());
        break;
    case QEvent::MouseButtonRelease:
        containerMousePress = false;
        break;
    default:
        break;
    }
    return false;
}

void DSCheckComboBoxPrivate::updateCheckedItems()
{
    QStringList items = q_ptr->checkedItems();
    if (items.empty())
        q_ptr->setEditText(defaultText);
    else
        q_ptr->setEditText(items.join(separator));

    emit q_ptr->checkedItemsChanged(items);
}

void DSCheckComboBoxPrivate::toggleCheckState(int index)
{
    QVariant value = q_ptr->itemData(index, Qt::CheckStateRole);
    if (value.isValid())
    {
        Qt::CheckState state = static_cast<Qt::CheckState>(value.toInt());
        q_ptr->setItemData(index, (state == Qt::Unchecked ? Qt::Checked : Qt::Unchecked), Qt::CheckStateRole);
    }
}

#include "moc_dscheckcombomodel.cpp"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
DSCheckComboBox::DSCheckComboBox(QWidget *parent)
    : QComboBox(parent)
    , d_ptr(new DSCheckComboBoxPrivate)
{
    d_ptr->q_ptr = this;
    setModel(new DSCheckComboModel(this));

    connect(this, SIGNAL(activated(int)), this, SLOT(toggleCheckState(int)));
    connect(model(), SIGNAL(checkStateChanged()), this, SLOT(updateCheckedItems()));
    connect(model(), SIGNAL(rowsInserted(const QModelIndex&, int, int)), this, SLOT(updateCheckedItems()));
    connect(model(), SIGNAL(rowsRemoved(const QModelIndex&, int, int)), this, SLOT(updateCheckedItems()));

    QLineEdit* lineEdit = new QLineEdit(this);
    lineEdit->setReadOnly(true);
    setLineEdit(lineEdit);
    lineEdit->disconnect(this);
    setInsertPolicy(QComboBox::NoInsert);

    installEventFilter(this);
    view()->installEventFilter(this);
    view()->window()->installEventFilter(this);
    view()->viewport()->installEventFilter(this);
}

DSCheckComboBox::~DSCheckComboBox()
{
}

void DSCheckComboBox::hidePopup()
{
    if (d_ptr->containerMousePress)
        QComboBox::hidePopup();
}

Qt::CheckState DSCheckComboBox::itemCheckState(int index) const
{
    return static_cast<Qt::CheckState>(itemData(index, Qt::CheckStateRole).toInt());
}

void DSCheckComboBox::setItemCheckState(int index, Qt::CheckState state)
{
    setItemData(index, state, Qt::CheckStateRole);
}

QStringList DSCheckComboBox::checkedItems() const
{
    QStringList items;
    if (model())
    {
        QModelIndex index = model()->index(0, modelColumn(), rootModelIndex());
        QModelIndexList indexs = model()->match(index, Qt::CheckStateRole, Qt::Checked, -1, Qt::MatchExactly);
        foreach(const QModelIndex& index, indexs)
            items += index.data().toString();
    }
    return items;
}

QVariantList DSCheckComboBox::checkedIndexs() const
{
    QVariantList indexs;
    if (model())
    {
        QModelIndex index = model()->index(0, modelColumn(), rootModelIndex());
        QModelIndexList indexs_2 = model()->match(index, Qt::CheckStateRole, Qt::Checked, -1, Qt::MatchExactly);
        foreach(const QModelIndex& index, indexs_2)
            indexs += index.row();
    }
    return indexs;
}

void DSCheckComboBox::setCheckedItems(const QStringList& items)
{
    foreach(const QString& text, items)
    {
        const int index = findText(text);
        setItemCheckState(index, index != -1 ? Qt::Checked : Qt::Unchecked);
    }
}

bool DSCheckComboBox::eventFilter(QObject *watched, QEvent *event)
{
    return d_ptr->eventFilter(watched,event);
}

void DSCheckComboBox::wheelEvent(QWheelEvent *e)
{
    e->accept();
}

QString DSCheckComboBox::defaultText() const
{
    return d_ptr->defaultText;
}

void DSCheckComboBox::setDefaultText(const QString& text)
{
    if (d_ptr->defaultText != text)
    {
        d_ptr->defaultText = text;
        d_ptr->updateCheckedItems();
    }
}

QString DSCheckComboBox::separator() const
{
    return d_ptr->separator;
}

void DSCheckComboBox::setSeparator(const QString& separator)
{
    if (d_ptr->separator != separator)
    {
        d_ptr->separator = separator;
        d_ptr->updateCheckedItems();
    }
}
