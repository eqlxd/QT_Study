#include "generatethread.h"
#include <QDebug>
#include <QMessageBox>

/********************************* GenerateThreadPrivate *********************************/
class GenerateThreadPrivate : public QObject
{
    Q_OBJECT
public:
    explicit GenerateThreadPrivate(const QString &iOutputFileName, UdbfParser *iUdbf,
                                   const QVariantList &iAlgoList, double iE, double iV,
                                   GenerateThread *iParent)
        : QObject(iParent), dd(iParent), m_parser(iUdbf),
          m_outputFileName(iOutputFileName), m_e(iE), m_v(iV), m_algoList(iAlgoList)
    {
    }

    GenerateThread * const dd;
    UdbfParser *m_parser;
    QString m_outputFileName;
    double m_e; // 常数, 由界面输入
    double m_v; // 常数, 由界面输入
    // 通道算法列表
    QVariantList m_algoList;
};

#include "generatethread.moc"

/********************************* GenerateThread *********************************/
GenerateThread::GenerateThread(const QString &iOutputFileName,
                               UdbfParser *iUdbf, const QVariantList &iAlgoList, double iE, double iV,
                               QObject *iParent)
    : QThread(iParent), dp(new GenerateThreadPrivate(iOutputFileName,
                                                     iUdbf, iAlgoList, iE, iV, this))
{
}

void GenerateThread::run()
{
    auto a = connect(dp->m_parser, &UdbfParser::dataCount, this, &GenerateThread::dataCount);
    auto b = connect(dp->m_parser, &UdbfParser::step, this, &GenerateThread::step);
    auto c = connect(dp->m_parser, &UdbfParser::finish, this, &GenerateThread::saveFinish);

    QString error_msg;
    if (!dp->m_parser->saveDataHead(dp->m_outputFileName, dp->m_algoList, &error_msg))
    {
        QMessageBox::warning(nullptr, "生成文件", error_msg);
        return;
    }

    if (!dp->m_parser->saveDataBody(dp->m_outputFileName, dp->m_algoList, dp->m_e, dp->m_v, 4, &error_msg))
    {
        QMessageBox::warning(nullptr, "生成文件", error_msg);
        return;
    }

    disconnect(a);
    disconnect(b);
    disconnect(c);

    qDebug() << "dat文件生成完成.";
}
