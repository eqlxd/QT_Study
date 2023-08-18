#include "widget.h"
#include <algorithm>
#include <QDebug>
#include <QPainter>
#include <QPen>
#include <QBrush>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(800, 600);
    setWindowTitle("Paint Widget");

    m_xRange = 100.0;
    m_yRange = 100.0;
}

Widget::~Widget()
{
}

void Widget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::HighQualityAntialiasing);

    QSize w_size = size();

    const int x_asix_margin = 50;
    const int y_asix_margin = 30;

    {
        // X轴
        QPoint start, end;
        start.setX(x_asix_margin);
        start.setY(w_size.height() - x_asix_margin);

        end.setX(w_size.width() - x_asix_margin);
        end.setY(w_size.height() - x_asix_margin);

        painter.drawLine(start, end);
    }

    {
        // Y轴
        QPoint start, end;
        start.setX(x_asix_margin + 20);
        start.setY(y_asix_margin);

        end.setX(x_asix_margin + 20);
        end.setY(w_size.height() - y_asix_margin);
        painter.drawLine(start, end);

#if 0
//////////////////////////////////////////////////////////////////////////////////////////////////
        painter.save();
        QPen pen1;
        pen1.setWidth(5);
        painter.setPen(pen1);
        painter.drawPoint(start);
        painter.restore();
        painter.drawText(start.x() - 20, start.y(), QString("(%1, %2)").arg(start.x()).arg(start.y()));
//////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////
        painter.save();
        QPen pen2;
        pen2.setWidth(5);
        painter.setPen(pen2);
        painter.drawPoint(end);
        painter.restore();
        painter.drawText(end.x() - 20, end.y(), QString("(%1, %2)").arg(end.x()).arg(end.y()));
//////////////////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////////
        QPoint cross_point(start.x(), (w_size.height() - x_asix_margin));

        painter.save();
        QPen pen3;
        pen3.setWidth(5);
        painter.setPen(pen3);
        painter.drawPoint(cross_point);
        painter.restore();
        painter.drawText(cross_point.x() - 20, cross_point.y() - 2, QString("(%1, %2)").arg(cross_point.x()).arg(cross_point.y()));
//////////////////////////////////////////////////////////////////////////////////////////////////
#endif
    }

    // 坐标原点
    QPoint cross_origin;
    cross_origin.setX(x_asix_margin + 20);
    cross_origin.setY(w_size.height() - x_asix_margin);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    int y_range = (w_size.height() - x_asix_margin) - y_asix_margin;
//    qDebug() << "y coordinate range=" << y_asix_margin << " ~ " << (w_size.height() - x_asix_margin)
//             << "\ny_range=" << y_range;

    int x_range = (w_size.width() - x_asix_margin) - (x_asix_margin + 20);
//    qDebug() << "x coordinate range=" << (x_asix_margin + 20) << " ~ " << (w_size.width() - x_asix_margin)
//             << "\nx_range=" << x_range;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#if 1 // 网格线 - 竖线
    qreal y_asix_step = y_range / m_yRange;
    {
#if 0
        QVector<QLineF> y_scale_lines;

        int x_start = 70, x_end = w_size.width() - x_asix_margin;
        qreal scale_y = w_size.height() - x_asix_margin;

        for (int n = 0; n < m_yRange; ++n, scale_y -= y_asix_step)
        {
            QPointF p1(x_start, scale_y);
            QPointF p2(x_end, scale_y);
            painter.drawLine(QLineF(p1, p2));
            y_scale_lines.append(QLineF(QPointF(x_start, scale_y), QPointF(x_end, scale_y)));
        }
#endif

#if 0
        painter.drawLines(y_scale_lines);
#endif
    }
#endif

//////////////////////////////////////////////////////////////////////////////////////////

//    if (m_dataList.count() > m_maxCount)
//    {
//        m_xRange += 9990;
//        m_maxCount += 9990;
//    }

//////////////////////////////////////////////////////////////////////////////////////////

#if 1 // 网格线 - 横线
    qreal x_asix_step = x_range / m_xRange;
    {
#if 0
        QVector<QLineF> x_scale_lines;

        int y_start = w_size.height() - x_asix_margin , y_end = y_asix_margin;
        qreal scale_x = x_asix_margin + 20;

        for (int n = 0; n < m_xRange; ++n, scale_x += x_asix_step)
        {
            QPointF p1(scale_x, y_start);
            QPointF p2(scale_x, y_end);
            painter.drawLine(QLineF(p1, p2));
            x_scale_lines.append(QLineF(QPointF(scale_x, y_start), QPointF(scale_x, y_end)));
        }
#endif

#if 0
        painter.drawLines(x_scale_lines);
#endif
    }
#endif

    if (m_dataList.isEmpty())
        return;

    // 数据线
    QPen data_pen;
    data_pen.setWidth(2);
    painter.setPen(data_pen);

#if 1
    int t_size = 40;
    int point_index = 0;
    QPolygonF polygon_data;
    for (int m = 0, index = 0; m < 25; ++m, index += t_size)
    {
//        qDebug() << m << index << t_size;
        QList<int> t_data = m_dataList.mid(index, t_size - 1);

        // 第一个
        qreal x = cross_origin.x() + point_index * x_asix_step;
        qreal y = cross_origin.y() - t_data.first() * y_asix_step;
        polygon_data << QPoint(x, y);
        ++point_index;
        // 最后一个
        x = cross_origin.x() + point_index * x_asix_step;
        y = cross_origin.y() - t_data.last() * y_asix_step;
        polygon_data << QPoint(x, y);
        ++point_index;
        // 最大值
        qreal max_value = *std::max_element(t_data.begin(), t_data.end());
        x = cross_origin.x() + point_index * x_asix_step;
        y = cross_origin.y() - max_value * y_asix_step;
        polygon_data << QPoint(x, y);
        ++point_index;
        // 最小值
        qreal min_value = *std::min_element(t_data.begin(), t_data.end());
        x = cross_origin.x() + point_index * x_asix_step;
        y = cross_origin.y() - min_value * y_asix_step;
        polygon_data << QPoint(x, y);
        ++point_index;
    }
    painter.drawPolyline(polygon_data);
    qDebug() << "polygon_data.count()=" << polygon_data.count();

#else
    QPolygonF data1;
    for (int n = 0; n < m_dataList.count(); ++n)
    {
        qreal x = cross_origin.x() + n * x_asix_step;
        qreal y = cross_origin.y() - m_dataList.at(n) * y_asix_step;
#if 0
        painter.drawPoint(x, y);
#else
        data1 << QPointF(x, y);
        qDebug() << n << m_dataList.at(n) << QPointF(x, y) << x_asix_step;
#endif
    }

    painter.drawPolyline(data1);
#endif
}

void Widget::setData(const QList<int> &iDataList)
{
    m_dataList = iDataList;
    update();
}
