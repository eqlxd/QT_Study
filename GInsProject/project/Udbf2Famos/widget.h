#ifndef WIDGET_H
#define WIDGET_H

#include <QtWidgets>
#include <QFile>
#include "convertthread.h"

class Widget : public QWidget
{
    Q_OBJECT
public:
    Widget(QWidget *iParent = nullptr);
    ~Widget();

    void initLayout();
    void initTrayIcon();

    void startConvert();

public slots:
    void onSetInpuDir();
    void onSetOutputDir();
    void onStartStop();

protected:
    void closeEvent(QCloseEvent *iEvent) override;

private:
    QSpinBox *m_interval = nullptr;
    QLineEdit *m_input = nullptr;
    QLineEdit *m_output = nullptr;
    QTextEdit *m_log = nullptr;
    QPushButton *m_startStop = nullptr;
    QSystemTrayIcon *m_trayIcon = nullptr;

    ConvertThread *m_thread = nullptr;
    QFile m_logFile;

    const QString m_iniPath = "config.ini";
    const QString m_iniInterval = "Interval";
    const QString m_iniInput = "InputPath";
    const QString m_iniOutput = "OutputPath";
};

#endif // WIDGET_H
