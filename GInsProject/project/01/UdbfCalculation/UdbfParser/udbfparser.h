#ifndef UDBFPARSER_H
#define UDBFPARSER_H

#include "UdbfParser_global.h"
#include <fglobal/fglobal.h>
#include <QObject>

class UDBFPARSER_EXPORT UdbfParser : public QObject
{
    Q_OBJECT
    F_DECLARE_PRIVATE(UdbfParser)
public:
    explicit UdbfParser(QObject *iParent = nullptr);

    static QString getDllVersion();

signals:
    void dataCount(ulong iCount);
    void step(int iPercent);
    void finish(qint64 iMs);

public slots:
    bool loadData(const QString &iFileName, QString *oError);

    QStringList getChannelNames();
    ulong getDataCount();

    bool saveDataHead(const QString &iOutputFileName, const QVariantList &iAlgoList, QString *oError);
    bool saveDataBody(const QString &iOutputFileName, const QVariantList &iAlgoList, double iE, double iV, int iThreadCount, QString *oError);
};

#endif // UDBFPARSER_H
