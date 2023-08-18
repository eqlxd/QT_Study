#include "gtablemodel.h"
#include <QDebug>
#include <QColor>
#include <QFont>

/***************** GTableModelPrivate *****************/
class GTableModelPrivate : public QObject
{
    Q_OBJECT
public:
    explicit GTableModelPrivate(GTableModel *parent)
        : QObject(parent), dd(parent),
          m_editAll(false)
    {
    }

    GTableModel * const dd;
    QVariantList m_tableData;
    QVariantList m_headData;
    QList<int> m_vHeadData;
    /* key=column name, value=column index*/
    QMap<QString, int> m_columnIndex;
    /* key=column index, value=column name*/
    QMap<int, QString> m_indexColumn;
    /* editable */
    bool m_editAll;
    QMap<int, bool> m_editRow;
    QMap<int, bool> m_editCloumn;

public slots:
    void addColumn(const QVariantMap &iData);
    void addRow(const QVariantMap &iData, bool iPushFront = false);
    bool removeRow(int iRow);
    bool removeColumn(int iColumn);

    void setRowData(int iRow, const QVariantMap &iData);
    void setRowsData(const QVariantList &iRows, const QVariantList &iList);

    QStringList getHeadNameList();
};

void GTableModelPrivate::addColumn(const QVariantMap &iData)
{
    int old_count = dd->columnCount();
    dd->beginInsertColumns(QModelIndex(), old_count, m_headData.count());
    m_headData << iData;
    dd->endInsertColumns();
    emit dd->headerDataChanged(Qt::Horizontal, 0, old_count);
}

void GTableModelPrivate::addRow(const QVariantMap &iData, bool iPushFront)
{
    dd->beginInsertRows(QModelIndex(), dd->rowCount(), m_tableData.count());

    // 隔行换色(偶数行灰色背景)
    QVariantMap add_data = iData;
    QStringList add_data_keys;
    if (iPushFront)
    {
        if (!m_tableData.isEmpty())
        {
            QVariantMap first = m_tableData.front().toMap();
            if (!first.value("alternating_color").toBool())
            {
                for (const QString &key : qAsConst(add_data_keys))
                {
                    QString bg_key = QString("%1.bgColor").arg(key);
                    if (!add_data.contains(bg_key))
                        add_data.insert(bg_key, "#f1f1f1");
                }
                add_data.insert("alternating_color", true);
            }
            else
            {
                add_data.insert("alternating_color", false);
            }
        }
        else
        {
            // 无数据时 当前添加的数据不设置隔行换色
            add_data.insert("alternating_color", false);
        }
    }
    else
    {
        if (!m_tableData.isEmpty())
        {
            QVariantMap last = m_tableData.last().toMap();
            if (!last.value("alternating_color").toBool())
            {
                for (const QString &key : qAsConst(add_data_keys))
                {
                    QString bg_key = QString("%1.bgColor").arg(key);
                    if (!add_data.contains(bg_key))
                        add_data.insert(bg_key, "#f1f1f1");
                }
                add_data.insert("alternating_color", true);
            }
            else
            {
                add_data.insert("alternating_color", false);
            }
        }
        else
        {
            // 无数据时 当前添加的数据不设置隔行换色
            add_data.insert("alternating_color", false);
        }
    }

    if (!iPushFront)
        m_tableData.push_back(add_data);
    else
        m_tableData.push_front(add_data);
    m_vHeadData << m_tableData.count();

    dd->endInsertRows();
}

bool GTableModelPrivate::removeRow(int iRow)
{
    if (iRow < 0 || iRow >= m_tableData.count())
        return false;

    dd->beginRemoveRows(QModelIndex(), iRow, iRow);
    m_tableData.removeAt(iRow);
    dd->endRemoveRows();
    return true;
}

bool GTableModelPrivate::removeColumn(int iColumn)
{
    if (iColumn < 0 || iColumn >= m_headData.count())
        return false;

    dd->beginRemoveColumns(QModelIndex(), iColumn, iColumn);
    m_headData.removeAt(iColumn);
    dd->endRemoveColumns();
    return true;
}

void GTableModelPrivate::setRowData(int iRow, const QVariantMap &iData)
{
    if (iRow < 0 || iRow >= m_tableData.count())
        return;

    int min_column = 99999, max_column = -1;
    QVector<int> change_roles;
    QVariantMap data_map = m_tableData.at(iRow).toMap();
    QStringList keys = data_map.keys();
    for (const QString &key : qAsConst(keys))
    {
        data_map.insert(key, iData.value(key));
        /*qDebug() << key << dp->m_columnIndex.value(key);*/
        if (m_columnIndex.value(key) < min_column)
            min_column = m_columnIndex.value(key);
        if (m_columnIndex.value(key) > max_column)
            max_column = m_columnIndex.value(key);

        if (key.endsWith(".bgColor"))
            change_roles << Qt::BackgroundRole;
        else if (key.endsWith(".fgColor"))
            change_roles << Qt::ForegroundRole;
        else if (key.endsWith(".font"))
            change_roles << Qt::FontRole;
    }
    m_tableData.replace(iRow, data_map);
    /*qDebug() << min_column << max_column << change_roles;*/

    QModelIndex top_left = dd->index(iRow, min_column);
    QModelIndex bottom_right = dd->index(iRow, max_column);
    emit dd->dataChanged(top_left, bottom_right, change_roles);
}

void GTableModelPrivate::setRowsData(const QVariantList &iRows, const QVariantList &iList)
{
    int min_column = 99999, max_column = -1;

    for (int n = 0; n < iRows.count(); ++n)
    {
        QVariantMap map = iList.at(n).toMap();
        int row = iRows.at(n).toInt();
        if (row < 0 || row >= m_tableData.count())
            continue;

        QVector<int> change_roles;
        QVariantMap data_map = m_tableData.at(row).toMap();
        QStringList keys = data_map.keys();
        for (const QString &key : qAsConst(keys))
        {
            data_map.insert(key, map.value(key));
            /*qDebug() << key << dp->m_columnIndex.value(key);*/
            if (m_columnIndex.value(key) < min_column)
            {
                min_column = m_columnIndex.value(key);
            }
            if (m_columnIndex.value(key) > max_column)
            {
                max_column = m_columnIndex.value(key);
            }

            if (key.endsWith(".bgColor"))
            {
                change_roles << Qt::BackgroundRole;
            }
            else if (key.endsWith(".fgColor"))
            {
                change_roles << Qt::ForegroundRole;
            }
            else if (key.endsWith(".font"))
            {
                change_roles << Qt::FontRole;
            }
        }
        m_tableData.replace(row, data_map);
    }
}

QStringList GTableModelPrivate::getHeadNameList()
{
    QStringList result;
    for (const QVariant &var : qAsConst(m_headData))
    {
        result << var.toMap().value("name").toString();
    }

    return result;
}


#include "gtablemodel.moc"

/***************** GTableModel *****************/
GTableModel::GTableModel(QObject *iParent)
    : QAbstractTableModel(iParent),
      dp(new GTableModelPrivate(this))
{
}

GTableModel::~GTableModel()
{
}

void GTableModel::setHeadItems(const QVariantList &iList)
{
    for (int n = 0; n < iList.count(); ++n)
    {
        QVariantMap map = iList.at(n).toMap();
        dp->addColumn(map);

        dp->m_columnIndex.insert(map.value("name").toString(), n);
        dp->m_indexColumn.insert(n, map.value("name").toString());
    }
}

QVariantList GTableModel::headItems()
{
    return dp->m_headData;
}

QStringList GTableModel::headerNames()
{
    QStringList result;
    for (const QVariant &var : qAsConst(dp->m_headData))
    {
        result << var.toMap().value("name").toString();
    }
    return result;
}

void GTableModel::addRow(const QVariantMap &iData, bool iPushFront)
{
    dp->addRow(iData, iPushFront);
}

void GTableModel::addColumn(const QVariantMap &iData)
{
    dp->addColumn(iData);
}

void GTableModel::removeRow(int iRow)
{
    dp->removeRow(iRow);
}

bool GTableModel::removeRows(int iRow, int iCount, const QModelIndex &iParent)
{
    beginRemoveRows(QModelIndex(), iRow, iRow+iCount);

    for (int n = 0; n < iCount; ++n)
    {
        dp->m_tableData.removeAt(iRow);
    }

    endRemoveRows();

    return true;
    Q_UNUSED(iParent);
}

void GTableModel::removeColumn(int iColumn)
{
    dp->removeColumn(iColumn);
}

bool GTableModel::removeColumns(int iColumn, int iCount, const QModelIndex &iParent)
{
    beginRemoveColumns(QModelIndex(), iColumn, iColumn+iCount);

    for (int n = 0; n < iCount; ++n)
    {
        dp->m_headData.removeAt(iCount);
    }

    endRemoveColumns();

    return true;
    Q_UNUSED(iParent);
}

void GTableModel::setRowData(int iRow, const QVariantMap &iData)
{
    dp->setRowData(iRow, iData);
}

void GTableModel::setRowsData(const QVariantList &iRows, const QVariantList &iDatas)
{
    for (int n = 0; n < iRows.count(); ++n)
    {
        dp->setRowData(iRows.at(n).toInt(), iDatas.at(n).toMap());
    }
}

void GTableModel::loadData(const QVariantList &iDataList)
{
    for (const QVariant &var : qAsConst(iDataList))
    {
        dp->addRow(var.toMap());
    }
}

void GTableModel::clear(bool iAll)
{
    beginResetModel();

    dp->m_tableData.clear();
    if (iAll)
    {
        dp->m_headData.clear();
    }

    endResetModel();
}

void GTableModel::setRowEdit(int iRow, bool iFlag)
{
    if (!iFlag)
    {
        dp->m_editRow.remove(iRow);
        return;
    }
    dp->m_editRow.insert(iRow, true);
}

void GTableModel::setColumnEdit(int iColumn, bool iFlag)
{
    if (!iFlag)
    {
        dp->m_editCloumn.remove(iColumn);
        return;
    }
    dp->m_editCloumn.insert(iColumn, true);
}

void GTableModel::setAllEditable(bool iFlag)
{
    dp->m_editAll = iFlag;
}

bool GTableModel::moveRowsUp(const QModelIndexList &iIndexs)
{
    bool result = true;
    for (const QModelIndex &index : qAsConst(iIndexs))
    {
        if (!moveRowUp(index))
        {
            result = false;
        }
    }

    return result;
}

bool GTableModel::moveRowUp(const QModelIndex &iIndex)
{
    return moveRowUp(iIndex.row());
}

bool GTableModel::moveRowUp(int iRow)
{
    if (iRow < 0 || iRow >= dp->m_tableData.count())
        return false;

    int dest_row = iRow - 1;
    bool begin_move = beginMoveRows(QModelIndex(), iRow, iRow, QModelIndex(), dest_row);
    if (!begin_move)
        return false;

    dp->m_tableData.move(iRow, dest_row);
    endMoveRows();

    return true;
}

bool GTableModel::moveRowsDown(const QModelIndexList &iIndexs)
{
    bool result = true;
    for (const QModelIndex &index : qAsConst(iIndexs))
    {
        if (!moveRowDown(index))
            result = false;
    }

    return result;
}

bool GTableModel::moveRowDown(const QModelIndex &iIndex)
{
    return moveRowDown(iIndex.row());
}

bool GTableModel::moveRowDown(int iRow)
{
    if (iRow < 0 || iRow >= dp->m_tableData.count())
        return false;

    int dest_row = iRow + 2;
    bool begin_move = beginMoveRows(QModelIndex(), iRow, iRow, QModelIndex(), dest_row);
    if(!begin_move)
        return false;

    dp->m_tableData.move(iRow, dest_row-1);
    endMoveRows();

    return true;
}

QVariantList GTableModel::allDataMap()
{
    QVariantList result;
    for (const QVariant &var : qAsConst(dp->m_tableData))
    {
        QVariantMap row;
        for (const QVariant &head_var : qAsConst(dp->m_headData))
        {
            QVariantMap head_map = head_var.toMap();
            QString key = head_map.value("name").toString();
            if (head_map.value("ctrl_type").toString() == "Combox")
            {
                row.insert(key, var.toMap().value(key+".combox"));
            }
            else
            {
                row.insert(key, var.toMap().value(key));
            }
        }
        result << row;
    }
    return result;
}

QVariantMap GTableModel::rowDataMap(const QModelIndex &iIndex)
{
    return rowDataMap(iIndex.row());
}

QVariantMap GTableModel::rowDataMap(int iRow)
{
    if (iRow < 0 || iRow >= dp->m_tableData.count())
        return QVariantMap();

    QVariantMap result;
    QVariantMap map = dp->m_tableData.at(iRow).toMap();
    for (const QVariant &head_var : qAsConst(dp->m_headData))
    {
        QVariantMap head_map = head_var.toMap();
        QString key = head_map.value("name").toString();
        if (head_map.value("ctrl_type").toString() == "Combox")
        {
            result.insert(key, map.value(key+".combox"));
        }
        else
        {
            result.insert(key, map.value(key));
        }
    }

    return result;
}

QVariantList GTableModel::rowsDataMap(const QModelIndexList &iIndexs)
{
    QVariantList result;
    for (const QModelIndex &index : qAsConst(iIndexs))
    {
        result << rowDataMap(index);
    }

    return result;
}

QVariantMap GTableModel::getDataMap(const QModelIndex &iIndex)
{
    if (iIndex.row() < 0 || iIndex.row() >= dp->m_tableData.count())
        return QVariantMap();

    if (iIndex.column() < 0 || iIndex.column() >= dp->m_headData.count())
        return QVariantMap();

    QVariantMap row = dp->m_tableData.at(iIndex.row()).toMap();
    QString column_name = dp->m_headData.at(iIndex.column()).toMap().value("name").toString();
    QVariantMap result;
    result.insert(column_name, row.value(column_name));

    return result;
}

int GTableModel::rowCount(const QModelIndex &iParent) const
{
    return dp->m_tableData.count();
    Q_UNUSED(iParent);
}

int GTableModel::columnCount(const QModelIndex &iParent) const
{
    return dp->m_headData.count();
    Q_UNUSED(iParent);
}

QVariant GTableModel::headerData(int iSection, Qt::Orientation iOrientation, int iRole) const
{
    if(iOrientation == Qt::Vertical)
        return dp->m_vHeadData.at(iSection);

    if (iRole == Qt::DisplayRole)
        return dp->m_headData.at(iSection).toMap().value("disp");
    else if (iRole == Qt::TextAlignmentRole)
        return dp->m_headData.at(iSection).toMap().value("alignment");

    return QAbstractTableModel::headerData(iSection, iOrientation, iRole);
}

QVariant GTableModel::data(const QModelIndex &iIndex, int iRole) const
{
    /*qDebug() << 111111 << index.row() << index.column() << role;*/
    if (iIndex.row() >= dp->m_tableData.count() || iIndex.column() >= dp->m_headData.count())
        return QVariant();

    QString col_name = dp->m_headData.at(iIndex.column()).toMap().value("name").toString();
    switch (iRole)
    {
    case Qt::DisplayRole:
    {
        if (dp->m_headData.at(iIndex.column()).toMap().value("password").toBool())
        {
            if (dp->m_tableData.at(iIndex.row()).toMap().value(col_name).toString().isEmpty())
                return QString();
            else
                return QString("******");
        }
    }
    case Qt::EditRole:
    {
        if (!dp->m_headData.at(iIndex.column()).toMap().value("check_state").toBool())
            return dp->m_tableData.at(iIndex.row()).toMap().value(col_name);
        else
            return QVariant();
    }
    case Qt::TextAlignmentRole:
    {
        return dp->m_headData.at(iIndex.column()).toMap().value("alignment");
    }
    case Qt::CheckStateRole:
    {
        if (dp->m_headData.at(iIndex.column()).toMap().value("check_state").toBool())
        {
            if (dp->m_tableData.at(iIndex.row()).toMap().value(col_name, false).toBool()) return Qt::Checked;
            else return Qt::Unchecked;
        }
        else
        {
            return QVariant();
        }
    }
    case Qt::BackgroundRole:
    {
        col_name += ".bgColor";
        return QColor(dp->m_tableData.at(iIndex.row()).toMap().value(col_name, "white").toString());
    }
    case Qt::ForegroundRole:
    {
        col_name += ".fgColor";
        return QColor(dp->m_tableData.at(iIndex.row()).toMap().value(col_name, "black").toString());
    }
    case Qt::FontRole:
    {
        col_name += ".font";
        return qvariant_cast<QFont>(dp->m_tableData.at(iIndex.row()).toMap().value(col_name, QFont()));
    }
    default:
        break;
    }

    return QVariant();
}

bool GTableModel::setData(const QModelIndex &iIndex, const QVariant &iValue, int iRole)
{
    if (iIndex.row() < 0 || iIndex.row() >= dp->m_tableData.count())
    {
        qCritical() << __FILE__ << __LINE__ << "index out of range! index=" << iIndex << "role=" << iRole;
        return false;
    }

    switch (iRole)
    {
    case Qt::EditRole:
    {
        QVariantMap row = dp->m_tableData.at(iIndex.row()).toMap();
        row.insert(dp->m_indexColumn.value(iIndex.column()), iValue);
        dp->m_tableData.replace(iIndex.row(), row);
        emit itemEdited(iIndex, iValue);
        return true;
    }
    case Qt::CheckStateRole:
    {
        if (dp->m_headData.at(iIndex.column()).toMap().value("check_state").toBool())
        {
            QVariantMap row = dp->m_tableData.at(iIndex.row()).toMap();
            row.insert(dp->m_indexColumn.value(iIndex.column()), iValue);
            dp->m_tableData.replace(iIndex.row(), row);
            return true;
        }
    }
    case Qt::UserRole + 1:
    {
        /* ComboBox current name */
        QVariantMap row = dp->m_tableData.at(iIndex.row()).toMap();
        row.insert(dp->m_indexColumn.value(iIndex.column())+".combox", iValue);
        dp->m_tableData.replace(iIndex.row(), row);
    }
    default:
        break;
    }

    return false;
}

Qt::ItemFlags GTableModel::flags(const QModelIndex &iIndex) const
{
    Qt::ItemFlags flag = QAbstractItemModel::flags(iIndex);
    /* Check State */
    if (dp->m_headData.at(iIndex.column()).toMap().value("check_state").toBool())
        flag |= Qt::ItemIsUserCheckable;

    /* 编辑*/
    if (dp->m_editAll)
        return flag |= Qt::ItemIsEditable;
    if (dp->m_editCloumn.contains(iIndex.column()))
        flag |= Qt::ItemIsEditable;
    if (dp->m_editRow.contains(iIndex.row()))
        flag |= Qt::ItemIsEditable;

    return flag;
}

QVariantMap GTableModel::tableHeadItem(const QString &iName, const QString &iDisp, int iAlignment,
                                        bool iCheckState, const QString &iCtrlType, bool iPassword)
{
    QVariantMap map;
    map.insert("name", iName);
    map.insert("disp", iDisp);
    map.insert("alignment", iAlignment);
    map.insert("check_state", iCheckState);
    map.insert("password", iPassword);
    /*
     * type        |   role
     * Combox  |  Qt::UserRole + 1
     */
    if (!iCtrlType.isEmpty())
        map.insert("ctrl_type", iCtrlType);

    return map;
}
