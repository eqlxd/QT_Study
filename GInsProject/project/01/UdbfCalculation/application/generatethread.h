#ifndef GENERATETHREAD_H
#define GENERATETHREAD_H

#include <fglobal/fglobal.h>
#include <QThread>
#include "../UdbfParser/udbfparser.h"

class GenerateThread : public QThread
{
    Q_OBJECT
     F_DECLARE_PRIVATE(GenerateThread)
 public:
     explicit GenerateThread(const QString &iOutputFileName,
                             UdbfParser *iUdbf, const QVariantList &iAlgoList, double iE, double iV,
                             QObject *iParent = nullptr);

     void run() override;

signals:
    void dataCount(ulong iCount);
    void step(int iPercent);
    void saveFinish(qint64 iMs);
};

#endif // GENERATETHREAD_H
