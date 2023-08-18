#ifndef GIWRITER_H
#define GIWRITER_H

#include <gglobal/dpoint.h>
#include <QObject>

class GiWriter : public QObject
{
    Q_OBJECT
    G_DECLARE_DP(GiWriter)
public:
    explicit GiWriter(QObject *iParent = nullptr);
    ~GiWriter();

    void setWriteCallback(std::function<void (const qulonglong &, const QMap<QString, double> &)> iCallback);

    void setWriteParam(const QVariantList &iList);
    void clearWriteParam();

signals:
    void resultData(const qulonglong &, const QMap<QString, double> &);

public slots:
    void onWrite2(const QVariantMap &iData);
};

#endif // GIWRITER_H
