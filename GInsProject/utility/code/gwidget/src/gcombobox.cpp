#include "gcombobox.h"
#include <QDebug>
//#include <TBaseUtil/TResource>
#include <QListWidget>
#include <QLineEdit>
#include <QFrame>
#include <QHBoxLayout>
#include <QIcon>
#include <QLabel>
//#include "gwidgetglobal.h"

const QString cComboListNameKey = "name";
const QString cComboListTextKey  = "text";
const QString cComboListIconKey = "icon";
const QString cComboListUserDataKey = "userData";


/**********Private******************/
class GComboBoxPrivate : public QObject
{
    Q_OBJECT
    Q_DECLARE_PUBLIC(GComboBox)
public:
    explicit GComboBoxPrivate(GComboBox *qptr);
    ~GComboBoxPrivate();

    bool wheelEnabled;
    bool searchable;
    QList<QVariant> itemList;
    QHash<int,QString> nameHash;
    QListWidget *listWidget;
    QLineEdit *searchEntry;
    QFrame *searchFrame;

    void setSearchable(bool y);

public slots:
    void onDoSearch(const QString &text);

protected:
     GComboBox * const q_ptr;
};

GComboBoxPrivate::GComboBoxPrivate(GComboBox *qptr) :
    QObject(0),
    wheelEnabled(false),
    searchable(false),
    listWidget(0),
    searchEntry(0),
    searchFrame(0),
    q_ptr(qptr)
{
    Q_Q(GComboBox);
    listWidget = new QListWidget();
    searchFrame = new QFrame(listWidget);
    searchEntry = new QLineEdit(searchFrame);
    searchFrame->setObjectName("CB_SEARCH_FRAME");
    searchEntry->setObjectName("CB_SEARCH_ENTRY");
    searchEntry->setPlaceholderText(tr("Search"));
    QHBoxLayout *hlayout = new QHBoxLayout(searchFrame);
    hlayout->setMargin(3);
    QLabel *searchicon = new QLabel(searchFrame);
#if 0
    searchicon->setPixmap(QIcon(":/ico/res/find.svg").pixmap(16, 16));
#endif
    hlayout->addWidget(searchicon, 0, Qt::AlignCenter);
    hlayout->addWidget(searchEntry, 1);
    q->setModel(listWidget->model());
    q->setView(listWidget);
    QRect geo = searchFrame->geometry();
    geo.setX(0); geo.setY(0);
    searchFrame->setGeometry(geo);
    connect(searchEntry,SIGNAL(textChanged(QString)),this,SLOT(onDoSearch(QString)));
    setSearchable(false);
}

GComboBoxPrivate::~GComboBoxPrivate()
{
    if (listWidget){
        delete listWidget;
    }
}

void GComboBoxPrivate::setSearchable(bool y)
{
    searchable = y;
    if (searchable){
        if (listWidget){
            listWidget->setStyleSheet(QString(".QListWidget{padding-top:%1px}").arg(searchFrame->height()));
            searchFrame->show();
        }
    }
    else{
        if (listWidget){
            listWidget->setStyleSheet(QString(".QListWidget{padding-top:0}"));
            searchFrame->hide();
        }
    }
}

void GComboBoxPrivate::onDoSearch(const QString &text)
{
    for (int i = 0; i < listWidget->count(); ++i){
        if (listWidget->item(i)->text().contains(text,Qt::CaseInsensitive) ||
                nameHash.value(i).contains(text,Qt::CaseInsensitive))
        {
            listWidget->setRowHidden(i, false);
        }
        else{
            listWidget->setRowHidden(i, true);
        }
    }
}

#include "gcombobox.moc"
/*******End of Private*****************/

/*!
  \class NtComboBox
  \brief 一种选项设置更简易的ComboBox
 */
GComboBox::GComboBox(QWidget *parent) :
    QComboBox(parent),d_ptr(new GComboBoxPrivate(this))
{

}

GComboBox::~GComboBox()
{
}

void GComboBox::showPopup()
{
    Q_D(GComboBox);
    QComboBox::showPopup();
    d->searchFrame->setFixedWidth(d->listWidget->rect().width());
    d->searchEntry->setFocus();
    //d->searchEntry->selectAll();
}

void GComboBox::hidePopup()
{
    Q_D(GComboBox);
    d->searchEntry->clear();
    QComboBox::hidePopup();
}

QList<QVariant> GComboBox::itemList()
{
    Q_D(const GComboBox);
    return d->itemList;
}

/*!
 * \brief 设置选项列表
 * \a item_list 格式如下
 * \code
 *  [
 *   {icon:':/Mail.png',name:1,text:'item1'},
     {icon:':/Home.png',name:2,text:'item2'},
     {icon:':/Home.png',name:3,text:'item3'}
    ]
 * \endcode
 */
void GComboBox::setItemList(const QList<QVariant> &iItemList)
{
    Q_D(GComboBox);
    bool old_signal_block = signalsBlocked();
    blockSignals(true);
    this->clear();
    d->nameHash.clear();
    d->itemList = iItemList;
    for (int i = 0; i < iItemList.size(); ++i) {
        QVariant item = iItemList.at(i);
        if (item.type() == QVariant::Map){
            QVariantMap item_vm = item.toMap();
            this->addItem(/*TResource::icon(item_vm.value(cComboListIconKey).toString()),*/
                          item_vm.value(cComboListTextKey).toString(),
                          item_vm.value(cComboListUserDataKey));
            d->nameHash.insert(i,item_vm.value(cComboListNameKey).toString());
        }
        else if (item.type() == QVariant::Hash) {
            QVariantHash item_vh = item.toHash();
            this->addItem(/*TResource::icon(item_vh.value(cComboListIconKey).toString()),*/
                          item_vh.value(cComboListTextKey).toString(),
                          item_vh.value(cComboListUserDataKey));
            d->nameHash.insert(i,item_vh.value(cComboListNameKey).toString());
        }
        else{
            this->addItem(item.toString());
            d->nameHash.insert(i,item.toString());
        }
    }
    blockSignals(old_signal_block);
    emit itemListChanged();
    setCurrentIndex(-1);
}

/*!
 * \brief 获取当前选项名称
 */
QString GComboBox::currentName()
{
    Q_D(const GComboBox);
    int index = currentIndex();
    if (index <= -1)
        return QString();
    if (d->nameHash.contains(index))
        return d->nameHash.value(index);
    else
        return currentText();
}

/*!
 * \brief 设置当前选项为name是 \a cur_name 的项
 */
void GComboBox::setCurrentName(const QString &iCurName)
{
    Q_D(GComboBox);
    int index = -1;
    if (!d->nameHash.isEmpty()){
        QHashIterator<int, QString> iter(d->nameHash);
        while (iter.hasNext()) {
            iter.next();
            if (iter.value() == iCurName){
                index = iter.key();
                break;
            }
        }
    }
    setCurrentIndex(index);
    return;
    if (index <= -1)
        setCurrentText(iCurName);
    else
        setCurrentIndex(index);
}

QIcon GComboBox::currentIcon()
{
    int index = currentIndex();
    if (index <= -1)
        return QIcon();
    else
        return itemIcon(index);
}

QVariant GComboBox::currentUserData()
{
    int index = currentIndex();
    if (index <= -1)
        return QVariant();
    else
        return itemData(index,Qt::UserRole);
}

bool GComboBox::isWheelEnabled()
{
    Q_D(const GComboBox);
    return d->wheelEnabled;
}

void GComboBox::setWheelEnabled(bool iFlag)
{
    Q_D(GComboBox);
    d->wheelEnabled = iFlag;
}

bool GComboBox::isSearchable()
{
    Q_D(const GComboBox);
    return d->searchable;
}

void GComboBox::setSearchable(bool iFlag)
{
    Q_D(GComboBox);
    d->setSearchable(iFlag);
}


void GComboBox::wheelEvent(QWheelEvent *e)
{
    if (isWheelEnabled())
        return QComboBox::wheelEvent(e);
}
