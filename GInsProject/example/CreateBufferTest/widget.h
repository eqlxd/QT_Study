#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <GInsData/GInsDataInterface.hpp>
#include <GInsData/GInsTime.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_create_buffer_clicked();

    void on_create_header_clicked();

    void on_add_channel_clicked();

    void on_init_frame_clicked();

    void on_gi_write_clicked();

private:
    Ui::Widget *ui;

    QString m_bufferName;
    QString m_bufferId;

    GIns::Data::GInsDataBufferPtr m_writeBuffer;
    GIns::Data::GInsDataHeaderPtr m_writeHeader;

    GIns::Data::FrameBuffer m_frameBuffer;
    std::vector<GIns::Data::IGInsVariablePtr> m_writeChannels;
    GIns::Data::IGInsVariablePtr m_timestamp;
    char *m_buffer = nullptr;

    uint64_t m_oleTimestamp = 0;

    std::thread m_thread;
};
#endif // WIDGET_H
