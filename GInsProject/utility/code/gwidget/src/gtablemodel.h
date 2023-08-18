#ifndef GTABLEMODEL_H
#define GTABLEMODEL_H

#include "gwidget_global.h"
#include <gglobal/dpoint.h>
#include <QAbstractTableModel>

class G_WIDGET_EXPORT GTableModel : public QAbstractTableModel
{
    Q_OBJECT
    G_DECLARE_DP(GTableModel)
public:
    explicit GTableModel(QObject *iParent = nullptr);
    ~GTableModel();

signals:
    void itemEdited(const QModelIndex &iIndex, const QVariant &iValue);

public slots:
    void setHeadItems(const QVariantList &iList);
    QVariantList headItems();
    QStringList headerNames();

    void addRow(const QVariantMap &iData, bool iPushFront = false);
    void addColumn(const QVariantMap &iData);
    void removeRow(int iRow);
    bool removeRows(int iRow, int iCount, const QModelIndex &iParent = QModelIndex());
    void removeColumn(int iColumn);
    bool removeColumns(int iColumn, int iCount, const QModelIndex &iParent = QModelIndex());

    void setRowData(int iRow, const QVariantMap &iData);
    void setRowsData(const QVariantList &iRows, const QVariantList &iDatas);
    void loadData(const QVariantList &iDataList);
    /* is_all = true, clear data and header*/
    void clear(bool iAll = false);

    void setRowEdit(int iRow, bool iFlag);
    void setColumnEdit(int iColumn, bool iFlag);
    void setAllEditable(bool iFlag = true);

    bool moveRowsUp(const QModelIndexList &iIndexs);
    bool moveRowUp(const QModelIndex &iIndex);
    bool moveRowUp(int iRow);
    bool moveRowsDown(const QModelIndexList &iIndexs);
    bool moveRowDown(const QModelIndex &iIndex);
    bool moveRowDown(int iRow);

    QVariantList allDataMap();
    QVariantMap rowDataMap(const QModelIndex &iIndex);
    QVariantMap rowDataMap(int iRow);
    QVariantList rowsDataMap(const QModelIndexList &iIndexs);
    QVariantMap getDataMap(const QModelIndex &iIndex);

public:
    int rowCount(const QModelIndex &iParent = QModelIndex()) const;
    int columnCount(const QModelIndex &iParent = QModelIndex()) const;
    QVariant headerData(int iSection, Qt::Orientation iOrientation, int iRole = Qt::DisplayRole) const;
    QVariant data(const QModelIndex &iIndex, int iRole = Qt::DisplayRole) const;

    bool setData(const QModelIndex &iIndex, const QVariant &iValue, int iRole = Qt::EditRole);
    Qt::ItemFlags flags(const QModelIndex &iIndex) const;

public:
    static QVariantMap tableHeadItem(const QString &iName, const QString &iDisp, int iAlignment = Qt::AlignCenter,
                                     bool iCheckState = false, const QString &iCtrlType = "", bool iPassword = false);
};

#endif // GTABLEMODEL_H
