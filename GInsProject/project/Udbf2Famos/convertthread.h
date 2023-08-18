#ifndef CONVERTTHREAD_H
#define CONVERTTHREAD_H

#include <QThread>
#include <QProcess>

class ConvertThread : public QThread
{
    Q_OBJECT
public:
    explicit ConvertThread(QObject *iParent = nullptr);

    void setDir(const QString &iInput, const QString &iOutput);
    void setInterval(int iInterval);
    bool regist(QProcess *iProcess);
    QString readProcessOutput();

signals:
    void convertMsg(const QString &iMsg);

protected:
    void run() override;

private:
    QString m_inputPath;
    QString m_outputPath;
    int m_interval;
};

#endif // CONVERTTHREAD_H
