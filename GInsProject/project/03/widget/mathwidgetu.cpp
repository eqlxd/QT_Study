#include "mathwidgetu.h"
#include "../globalapp.h"
#include "setrosetteswidget.h"
#include "setpcbwidget.h"
#include <gwidget/glineedit.h>
#include <QDebug>
#include <QTimer>
#include <QPushButton>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QLabel>
#include <QFileDialog>
#include <QDialog>
#include <QToolTip>

#pragma execution_character_set("utf-8")

/***************************** MathWidgetUPrivate *****************************/
class MathWidgetUPrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(MathWidgetU)
public:
    explicit MathWidgetUPrivate(MathWidgetU *iParent)
      : QObject(iParent), dd(iParent)
    {
    }

    QPushButton *m_rosettes = nullptr;
    QPushButton *m_pcb = nullptr;
    QPushButton *m_giStart = nullptr;
    QPushButton *m_startSaveFile = nullptr;
    QPushButton *m_stopSaveFile = nullptr;

    GLineEdit *m_pathEdit = nullptr;
    QString m_filePath;

public:
    void initLayout();
    void initUiData();
    QWidget *getLabelEdit(QWidget *iLineEdit);
    bool isChinese(const QString &iString);

public slots:
    void onShowRosettesSetting();
    void onShowPcbSetting();
    void onWriteToGiBench();

    void onSetSavePath();
    void onStartSaveFile();
    void onStopSaveFile();
};

void MathWidgetUPrivate::initLayout()
{
    m_rosettes = new QPushButton("Rosettes", dd);
    m_pcb = new QPushButton("PCB Strain Rate", dd);
    m_giStart = new QPushButton("Write GI.bench", dd);

    m_pathEdit = new GLineEdit(dd);
    m_pathEdit->setPushButton("...");
    m_pathEdit->setMinimumWidth(570);
    QPushButton *btn = m_pathEdit->getPushButton();
    btn->setFixedWidth(30);

    m_startSaveFile = new QPushButton("Start Save File", dd);
    m_stopSaveFile = new QPushButton("Stop Save File", dd);

    connect(m_rosettes, &QPushButton::clicked, this, &MathWidgetUPrivate::onShowRosettesSetting);
    connect(m_pcb, &QPushButton::clicked, this, &MathWidgetUPrivate::onShowPcbSetting);
    connect(m_giStart, &QPushButton::clicked, this, &MathWidgetUPrivate::onWriteToGiBench);

    connect(btn, &QPushButton::clicked, this, &MathWidgetUPrivate::onSetSavePath);
    connect(m_startSaveFile, &QPushButton::clicked, this, &MathWidgetUPrivate::onStartSaveFile);
    connect(m_stopSaveFile, &QPushButton::clicked, this, &MathWidgetUPrivate::onStopSaveFile);

    QHBoxLayout *hbox1 = new QHBoxLayout;
    hbox1->addWidget(m_rosettes);
    hbox1->addWidget(m_pcb);
    hbox1->addStretch();
    hbox1->addWidget(m_giStart);

    QWidget *hbox2_w = getLabelEdit(m_pathEdit);

    QHBoxLayout *hbox2 = new QHBoxLayout;
    hbox2->addWidget(hbox2_w);
    hbox2->addStretch();
    hbox2->addWidget(m_startSaveFile);
    hbox2->addWidget(m_stopSaveFile);

    QVBoxLayout *vbox = new QVBoxLayout(dd);
    vbox->setMargin(0);
    vbox->addLayout(hbox1);
    vbox->addLayout(hbox2);


    m_giStart->setEnabled(false);
    m_stopSaveFile->setEnabled(false);
}

void MathWidgetUPrivate::initUiData()
{
    QVariantMap cfg_data = GApp->getUdbfConfig();

    QString save_path = cfg_data.value("save_path").toString();
    qDebug() << "initUiData  save_path=" << save_path;
    if (isChinese(save_path))
    {
        qWarning() << "文件路径中不能包含中文！";
        return;
    }

    m_filePath = save_path;
    m_pathEdit->setText(QDir::toNativeSeparators(save_path));
}

QWidget *MathWidgetUPrivate::getLabelEdit(QWidget *iLineEdit)
{
   QWidget *w = new QWidget(dd);

   QLabel *label = new QLabel("数据文件保存路径:", dd);
   QHBoxLayout *hbox = new QHBoxLayout(w);
   hbox->addWidget(label);
   hbox->addWidget(iLineEdit);
   hbox->addStretch();

   return w;
}

bool MathWidgetUPrivate::isChinese(const QString &iString)
{
    return iString.contains(QRegExp("[\\x4e00-\\x9fa5]+"));
}

void MathWidgetUPrivate::onShowRosettesSetting()
{
    SetRosettesWidget rosettes_set;
    if (rosettes_set.exec() == QDialog::Accepted)
    {
        emit dd->rosettesSeted(rosettes_set.getData());
    }
}

void MathWidgetUPrivate::onShowPcbSetting()
{
    SetPcbWidget pcb_set;
    if (pcb_set.exec() == QDialog::Accepted)
    {
        emit dd->pcbSeted(pcb_set.getData());
    }
}

void MathWidgetUPrivate::onWriteToGiBench()
{
    emit dd->startWrite();

    m_rosettes->setEnabled(false);
    m_pcb->setEnabled(false);
    m_giStart->setEnabled(false);
}

void MathWidgetUPrivate::onSetSavePath()
{
    QString path = QFileDialog::getExistingDirectory(dd, "设置UDBF文件保存路径");
    qInfo() << __FUNCTION__ << "path=" << path;
    if (path.isEmpty())
        return;

    if (isChinese(path))
    {
        QPoint pos = dd->mapToGlobal(m_pathEdit->pos());
        pos.setX(pos.x() + 10);
        pos.setY(pos.y() + m_pathEdit->height());
        QToolTip::showText(pos, "文件保存路径中不能包含中文！");
        return;
    }

    m_filePath = path;
    m_pathEdit->setText(QDir::toNativeSeparators(path));
}

void MathWidgetUPrivate::onStartSaveFile()
{
    if (m_filePath.isEmpty())
    {
        qWarning() << "udbf save path is empty!";

        QPoint pos = dd->mapToGlobal(m_pathEdit->pos());
        pos.setX(pos.x() + 10);
        pos.setY(pos.y() + m_pathEdit->height());
        QToolTip::showText(pos, "文件保存路径不能为空！");
        return;
    }

    // 正则判断中文
    if (isChinese(m_filePath))
    {
        QPoint pos = dd->mapToGlobal(m_pathEdit->pos());
        pos.setX(pos.x() + 10);
        pos.setY(pos.y() + m_pathEdit->height());
        QToolTip::showText(pos, "文件保存路径中不能包含中文！");
        return;
    }

    emit dd->startSaveFile(m_filePath);

    QVariantMap cfg_data;
    cfg_data.insert("save_path", QDir::toNativeSeparators(m_filePath));
    GApp->setUdbfConfig(cfg_data);

    m_stopSaveFile->setEnabled(true);
}

void MathWidgetUPrivate::onStopSaveFile()
{
    emit dd->stopSaveFile();
}

#include "mathwidgetu.moc"

/***************************** HwWidgetUPrivate *****************************/
MathWidgetU::MathWidgetU(QWidget *iParent)
    : QWidget{iParent},
      dp(new MathWidgetUPrivate(this))
{
    setMaximumHeight(100);
    dp->initLayout();

#ifdef QT_DEBUG
    QTimer::singleShot(1000, this, [=]()
    {
        dp->initUiData();
    });
#else
    dp->initUiData();
#endif

    connect(GApp, &GlobalApp::deviceConnectOk, this, [=]()
    {
        dp->m_giStart->setEnabled(true);
    });
}

void MathWidgetU::clear()
{
    dp->m_pathEdit->clear();
}
