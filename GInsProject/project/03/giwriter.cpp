#include "giwriter.h"
#include "globalapp.h"
#include "formula.h"
#include <functional>
#include <QDebug>

/***************************** GiWriterPrivate *****************************/
class GiWriterPrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(GiWriter)
public:
    explicit GiWriterPrivate(GiWriter *iParent)
      : QObject(iParent), dd(iParent)
    {
        Q_UNUSED(dd);
    }

    QVariantList m_calcList;
    std::function<void (const qulonglong &, const QMap<QString, double> &)> m_write;
};

#include "giwriter.moc"

/***************************** GiWriter *****************************/
GiWriter::GiWriter(QObject *iParent)
    : QObject{iParent},
      dp(new GiWriterPrivate(this))
{
}

GiWriter::~GiWriter()
{
}

void GiWriter::setWriteCallback(std::function<void (const qulonglong &, const QMap<QString, double> &)> iCallback)
{
    dp->m_write = iCallback;
}

void GiWriter::setWriteParam(const QVariantList &iList)
{
    dp->m_calcList = iList;
}

void GiWriter::clearWriteParam()
{
    dp->m_calcList.clear();
}

void GiWriter::onWrite2(const QVariantMap &iData)
{
    QMap<QString, double> result;

    // 1. 原始通道数据
    for (const QString &key : iData.keys())
    {
        result.insert(key, iData.value(key).toDouble());
    }
    // 2. 计算新通道数据
    for (const QVariant &var : qAsConst(dp->m_calcList))
    {
        QVariantMap map = var.toMap();

        if (map.value("calc_type").toInt() == 1)  // Rosettes
        {
            QVariantMap r_map = map.value("ros").toMap();

            double coefficient = r_map.value("coefficient").toDouble();

            double a_value = iData.value(r_map.value("ch_a").toString()).toDouble();
            double b_value = iData.value(r_map.value("ch_b").toString()).toDouble();
            double c_value = iData.value(r_map.value("ch_c").toString()).toDouble();

            double e_value = r_map.value("e").toDouble();
            double v_value = r_map.value("v").toDouble();

            QVariantList algo_list = r_map.value("algo_list").toList();
            QStringList op_channels = r_map.value("op_channels").toStringList();

            for (int n = 0; n < algo_list.size(); ++n)
            {
                int algo_type = algo_list.at(n).toInt();
                double r = 0.0;

                if (r_map.value("type").toInt() == 1) // DR
                {
                    switch (algo_type)
                    {
                    case 1:  // DR - MaxStress
                        r = Formula::drMaxStress(e_value, v_value, a_value, b_value, c_value, coefficient);
                        break;
                    case 2:  // DR - MinStress
                        r = Formula::drMinStress(e_value, v_value, a_value, b_value, c_value, coefficient);
                        break;
                    case 3:  // DR - ShearStress
                        r = Formula::drShearStress(e_value, v_value, a_value, b_value, c_value, coefficient);
                        break;
                    case 4:  // DR - MaxStrain
                        r = Formula::drMaxStrain(a_value, b_value, c_value);
                        break;
                    case 5:  // DR - MinStrain
                        r = Formula::drMinStrain(a_value, b_value, c_value);
                        break;
                    case 6:  // DR - Angle
                        r = Formula::drAngle(a_value, b_value, c_value);
                        break;
                    default:
                        qDebug() << "DR algorithm error! algo_type=" << algo_type;
                        break;
                    }
                }
                else if (r_map.value("type").toInt() == 2) // RR
                {
                    switch (algo_type)
                    {
                    case 1:  // RR - MaxStress
                        r = Formula::rrMaxstress(e_value, v_value, a_value, b_value, c_value, coefficient);
                        break;
                    case 2:  // RR - MinStress
                        r = Formula::rrMinstress(e_value, v_value, a_value, b_value, c_value, coefficient);
                        break;
                    case 3:  // RR - ShearStress
                        r = Formula::rrShearstress(e_value, v_value, a_value, b_value, c_value, coefficient);
                        break;
                    case 4:  // RR - MaxStrain
                        r = Formula::rrMaxstrain(a_value, b_value, c_value);
                        break;
                    case 5:  // RR - MinStrain
                        r = Formula::rrMinstrain(a_value, b_value, c_value);
                        break;
                    case 6:  // RR - Angle
                        r = Formula::rrAngle(a_value, b_value, c_value);
                        break;
                    default:
                        qDebug() << "RR algorithm error! algo_type=" << algo_type;
                        break;
                    }
                }

                result.insert(op_channels.at(n), r);
            }
        }
        else if (map.value("calc_type").toInt() == 2)  // PCB
        {
            QVariantMap pcb_map = map.value("pcb").toMap();

            double a_value = iData.value(pcb_map.value("ch_a").toString()).toDouble();
            double b_value = iData.value(pcb_map.value("ch_b").toString()).toDouble();
            double c_value = iData.value(pcb_map.value("ch_c").toString()).toDouble();

            double sample_rate = pcb_map.value("sample_rate").toDouble();

            QVariantList algo_list = pcb_map.value("algo_list").toList();
            QStringList op_channels = pcb_map.value("op_channels").toStringList();

            for (int n = 0; n < algo_list.size(); ++n)
            {
                int algo_type = algo_list.at(n).toInt();
                double r = 0.0;

                switch (algo_type)
                {
                case 1:
                    r = Formula::pcbMaxStrain(a_value, b_value, c_value);
                    break;
                case 2:
                    r = Formula::pcbMinStrain(a_value, b_value, c_value);
                    break;
                case 3:
                    r = Formula::pcbDiagStrain(a_value, b_value, c_value);
                    break;
                case 4:
                    r = Formula::pcbMaxStrainRate(a_value, b_value, c_value, sample_rate);
                    break;
                case 5:
                    r = Formula::pcbMinStrainRate(a_value, b_value, c_value, sample_rate);
                    break;
                case 6:
                    r = Formula::pcbDiagStrainRate(a_value, b_value, c_value, sample_rate);
                    break;
                case 7:
                    r = Formula::pcbAbsMaxStrain(a_value, b_value, c_value);
                    break;
                case 8:
                    r = Formula::pcbAbsMaxStrainRate(a_value, b_value, c_value, sample_rate);
                    break;
                default:
                    qDebug() << "RR algorithm error! algo_type=" << algo_type;
                    break;
                }

                result.insert(op_channels.at(n), r);
            }
        } // End else if
    }

//    qDebug() << iData.value("time").toULongLong() << result << "\n";
    dp->m_write(iData.value("time").toULongLong(), result);
    // for udbf
    emit resultData(iData.value("time").toULongLong(), result);
}
