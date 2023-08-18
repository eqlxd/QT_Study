#include "convertthread.h"
#include <QDebug>
#include <QTimer>
#include <QProcess>
#include <QFile>
#include <QDir>
#include <QRegExp>
#include <QDateTime>

ConvertThread::ConvertThread(QObject *iParent)
    : QThread{iParent}
{
}

void ConvertThread::setDir(const QString &iInput, const QString &iOutput)
{
    m_inputPath = iInput;
    m_outputPath = iOutput;
}

void ConvertThread::setInterval(int iInterval)
{
    m_interval = iInterval;
}

bool ConvertThread::regist(QProcess *iProcess)
{
    iProcess->setStandardErrorFile("pro_err.txt");
    iProcess->setStandardOutputFile("pro_output.txt");

    QStringList args = QStringList() << "/l" << "Gantner" << "Testlicense" << "9648865179";
    iProcess->start("greenconvert_2_75.exe", args);
    if (!iProcess->waitForFinished())
    {
        qWarning() << "Process start failed!";
        return false;
    }

    QString process_output = readProcessOutput();
    if (process_output.indexOf("OK") == -1)
    {
        qWarning() << "license regist failed!";
        return false;
    }
    qInfo() << process_output;

    return true;
}

QString ConvertThread::readProcessOutput()
{
    QFile file("pro_output.txt");
    if (!file.open(QFile::ReadOnly))
    {
        qWarning() << "open pro_output.ext failed! error=" << file.errorString();
        return QString();
    }

    return file.readAll();
}

void ConvertThread::run()
{
    QProcess *process = new QProcess;
    regist(process);

    QTimer *timer = new QTimer;
    timer->setInterval(m_interval * 60 * 1000);
    timer->start();

    connect(timer, &QTimer::timeout, [=]()
    {
        qDebug() << "timer thread id=" << QThread::currentThreadId()
                 << QTime::currentTime().toString("hh:mm:ss")
                 << "timer interval=" << timer->interval();

        // 1.
        QStringList intput_files;
        QStringList file_names;

        QDir input_dir(m_inputPath);
        input_dir.setFilter(QDir::Files);
        QFileInfoList info_list = input_dir.entryInfoList();
        for (int n = 0; n < info_list.count(); ++n)
        {
            QFileInfo info = info_list.at(n);
            intput_files.append(info.filePath());
            file_names.append(info.fileName());
        }

        // 2.
        for (int n = 0; n < intput_files.size(); ++n)
        {
            QString file_path = intput_files.at(n);
            QString file_name = file_names.at(n);

            QString exp_str = "[0-9]{4}-(((0[13578]|(10|12))-(0[1-9]|[1-2][0-9]|3[0-1]))|(02-(0[1-9]|[1-2][0-9]))|((0[469]|11)-(0[1-9]|[1-2][0-9]|30)))";
            QRegExp reg_exp(exp_str);
            int index = file_name.indexOf(reg_exp);
            QString output_file_name = file_name.mid(index, 19) + ".dat";

            QDir dir(m_outputPath);
            if (dir.exists(output_file_name))
                continue;

            QString now = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
            QStringList args = QStringList() << "/s" << file_path << "/d" << m_outputPath + "/" + output_file_name << "/df" << "FAMOS";
            process->start("greenconvert_2_75.exe", args);
            if (!process->waitForFinished())
            {
                qWarning() << "Process start failed!";
            }

            QString process_output = readProcessOutput();
            if (process_output.isEmpty())
            {
                emit convertMsg(QString("%1 %2 convert to %3 ok.").arg(now, file_name, output_file_name));
            }
            else
            {
                process_output.chop(2);
                emit convertMsg(QString("%1 %2 convert failed, error=%3").arg(now, file_name, process_output));
            }
        }

        timer->setInterval(m_interval * 60 * 1000);
    });

    exec();
    qDebug() << "thread will quit.";

    timer->stop();
    delete timer;
    timer = nullptr;

    delete process;
    process = nullptr;
    qDebug() << "thread finish.";
}
