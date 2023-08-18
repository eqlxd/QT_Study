#include "udbfparser.h"
#include <QDebug>
#include <QFile>
#include <QDataStream>
#include <QThread>
#include <QEventLoop>
#include <QElapsedTimer>

// 时间参数
struct DateTimeTypeStruct
{
    double m_startTimeToDayFactor;
    int m_dActTimeDataType;
    double m_dActTimeToSecondFactor;
    double m_startTime;
    QByteArray m_startTimeToDayFactorHex;
    QByteArray m_dActTimeDataTypeHex;
    QByteArray m_dActTimeToSecondFactorHex;
    QByteArray m_startTimeHex;
};

// 通道数据类型
struct ChannelDataType
{
    QString m_name;
    int m_dataType;
    int m_byteCount;
    int m_precision;
};

// 通道描述完整结构 -- 写文件用
struct ChannelInfo
{
    int m_nameLen1;
    QString m_name1;
    int m_direction;
    int m_dataType;
    int m_fieldLen;
    int m_precision;
    int m_unitLen;
    QByteArray m_unit;
    int m_additionalDataLen;
    int m_variableType;
    int m_byte2; // 两字节值
    int m_nameLen2;
    QString m_name2;
};

/********************************* Formula *********************************/
class Formula
{
public:
    // DR
    static float DeltaRosetteMaxStress(const float &iE, const float &iV, const float &iA, const float &iB, const float &iC);
    static float DeltaRosetteMinStress(const float &iE, const float &iV, const float &iA, const float &iB, const float &iC);
    static float DeltaRosetteShearStress(const float &iE, const float &iV, const float &iA, const float &iB, const float &iC);
    static float DeltaRosetteMaxStrain(const float &iA, const float &iB, const float &iC);
    static float DeltaRosetteMinStrain(const float &iA, const float &iB, const float &iC);
    static float DeltaRosetteAngle(const float &iA, const float &iB, const float &iC);
    // RR
    static float RectangularRosetteMaxstress(const float &iE, const float &iV, const float &iA, const float &iB, const float &iC);
    static float RectangularRosetteMinstress(const float &iE, const float &iV, const float &iA, const float &iB, const float &iC);
    static float RectangularRosetteShearstress(const float &iE, const float &iV, const float &iA, const float &iB, const float &iC);
    static float RectangularRosetteMaxstrain(const float &iA, const float &iB, const float &iC);
    static float RectangularRosetteMinstrain(const float &iA, const float &iB, const float &iC);
    static float RectangularRosetteAngle(const float &iA, const float &iB, const float &iC);

private:
    Formula() = delete;
    Formula(const Formula &) = delete;
    Formula& operator=(const Formula &) = delete;
};

float Formula::DeltaRosetteMaxStress(const float &iE, const float &iV, const float &iA, const float &iB, const float &iC)
{
    return (iE / 3.0) * ((iA + iB + iC) / (1.0 -  iV) + (1.0 / (1.0 +  iV)) * sqrt(2 * (pow((iA - iB), 2) + pow((iB - iC), 2) + pow((iC - iA), 2))));
}

float Formula::DeltaRosetteMinStress(const float &iE, const float &iV, const float &iA, const float &iB, const float &iC)
{
    return (iE / 3.0) * ((iA + iB + iC) / (1.0 -  iV) - (1.0 / (1.0 +  iV)) * sqrt(2 * (pow((iA - iB), 2) + pow((iB - iC), 2) + pow((iC - iA), 2))));
}

float Formula::DeltaRosetteShearStress(const float &iE, const float &iV, const float &iA, const float &iB, const float &iC)
{
    return (iE / 3.0) * (1.0 / (1.0 +  iV)) * sqrt(2 * (pow((iA - iB), 2) + pow((iB - iC), 2) + pow((iC - iA), 2)));
}

float Formula::DeltaRosetteMaxStrain(const float &iA, const float &iB, const float &iC)
{
    return (1.0 / 3.0) * (iA + iB + iC + sqrt(2 * (pow((iA - iB), 2) + pow((iB - iC), 2) + pow((iC - iA), 2))));
}

float Formula::DeltaRosetteMinStrain(const float &iA, const float &iB, const float &iC)
{
    return (1.0 / 3.0) * (iA + iB + iC - sqrt(2 * (pow((iA - iB), 2) + pow((iB - iC), 2) + pow((iC - iA), 2))));
}

float Formula::DeltaRosetteAngle(const float &iA, const float &iB, const float &iC)
{
    return (1.0 / 2.0) * atan( sqrt(3) * (iB - iC) / (2 * iA - iB - iC));
}

float Formula::RectangularRosetteMaxstress(const float &iE, const float &iV, const float &iA, const float &iB, const float &iC)
{
    return (iE / 2.0) * ( (iA + iC) / (1.0 -  iV) + (1.0 / (1.0 +  iV) ) * sqrt( pow( (iA - iC ), 2) + pow( (2 * iB - iA - iC), 2)) );
}

float Formula::RectangularRosetteMinstress(const float &iE, const float &iV, const float &iA, const float &iB, const float &iC)
{
    return (iE / 2.0) * ( (iA + iC) / (1.0 -  iV) - (1.0 / (1.0 +  iV) ) * sqrt( pow( (iA - iC), 2) + pow( (2 * iB - iA - iC), 2)) );
}

float Formula::RectangularRosetteShearstress(const float &iE, const float &iV, const float &iA, const float &iB, const float &iC)
{
    return (iE / 2.0) * (1.0 / ( 1.0 +  iV) ) * sqrt( pow( (iA - iC), 2) + pow( ( 2 * iB - iA - iC), 2) );
}

float Formula::RectangularRosetteMaxstrain(const float &iA, const float &iB, const float &iC)
{
    return (1.0 / 2.0) * (iA + iC + sqrt( pow( (iA - iC), 2) + pow( (2 * iB - iA - iC), 2)) );
}

float Formula::RectangularRosetteMinstrain(const float &iA, const float &iB, const float &iC)
{
    return (1.0 / 2.0) * (iA + iC - sqrt(pow( (iA - iC), 2) + pow( (2 * iB - iA - iC), 2)) );
}

float Formula::RectangularRosetteAngle(const float &iA, const float &iB, const float &iC)
{
    return (1.0 / 2.0) * atan( ( 2.0 * iB - iA - iC) / (iA - iC));
}

/********************************* CalculationThread *********************************/
class CalculationThread : public QThread
{
    Q_OBJECT
public:
    explicit CalculationThread(int iThreadIndex, QObject *iParent = nullptr)
        : QThread(iParent), m_index(iThreadIndex), m_isBigEndian(false),
          m_headOffset(0), m_blockSize(0), m_averageBlockSize(0), m_frameSize(0),
          m_e(0.0), m_v(0.0)
    {
        // 如果输入文件为小端序(IsBigEndian = false)
        // 那么读数据体时，时间通道时需要高低字节翻转，数据通道不需要
        // 写时间通道时写入翻转后的数据，数据通道需要翻转后写入
        /////////////////////////////////////////////////////////////////////////
        // 如果输入文件为大端序
        // 那么读数据体时，时间通道不需要高低字节翻转，数据通道需要翻转
        // 写时间通道时直接写入读取的数据，数据通道不需要
        /////////////////////////////////////////////////////////////////////////
        // 总结：小端序读取时，时间通道要翻转，数据通道不要，
        //           小端序写入时，因为时间通道已经翻转了，所以不要再次翻转，
        //                                 数据通道没有反转过，所以要翻转后再写入。
        //           大端序读取时，时间通道不需要翻转，数据通道要翻转，
        //           大端序写入时，时间通道直接写入，数据通道已经翻转过了，
        //                                  所以不需要再次翻转
    }

    int m_index; // 0 ~ N
    bool m_isBigEndian;
    QString m_inputName;
    QString m_outputName;
    qulonglong m_headOffset; // 文件头到 *号 分隔符的字节数
    qulonglong m_blockSize; // 每个线程处理的数据块大小
    qulonglong m_averageBlockSize; // 去掉余数后每个线程处理的数据块大小
    int m_frameSize;
    QVariantList m_dataByteCount; // 一个通道数据几个字节
    QVariantList m_algoList;
    double m_e, m_v;

    void setData(const QVariantMap &iData);
    QByteArray overturnBytes(const QByteArray &iData);
    float channelDataToBigEndian(const float &iData);

signals:
    void step(int iIndex, const quint64 &iStep);
    void finish(int iIndex);

public:
    void run();
};

void CalculationThread::setData(const QVariantMap &iData)
{
    m_isBigEndian = iData.value("is_big_endian").toBool();
    m_inputName = iData.value("input_file").toString();
    m_outputName = iData.value("output_file").toString();
    m_headOffset = iData.value("head_offset").toInt();
    m_frameSize = iData.value("frame_size").toInt();
    m_dataByteCount = iData.value("byte_count").toList();
    m_algoList = iData.value("algo_list").toList();
    m_e = iData.value("e").toDouble();
    m_v = iData.value("v").toDouble();

    qulonglong data_count = iData.value("data_count").toULongLong();
    int thread_count = iData.value("thread_count").toInt();
    m_blockSize = data_count / thread_count;

    // 当总数据个数 除以 线程数 除不尽时，多下来的数据就放在最后一个线程处理
    int remainder = data_count % thread_count;
    if ((remainder > 0) && (m_index == (thread_count - 1)))
    {
        m_blockSize += remainder;
    }
    // 因为总数据数 除以 线程数 可能有余数，多下来的数据会在最后一个线程处理。
    // 又因为每个线程计算数据起始地址时，是看上一个线程处理的数据块大小的，
    // 所以这里保存线程处理数据块的平均数，用来计算本线程处理数据的起始地址。
    m_averageBlockSize = data_count / thread_count;
    qDebug() << __FUNCTION__ << "Thread" << m_index << data_count << thread_count << m_blockSize << remainder << m_averageBlockSize;
}

QByteArray CalculationThread::overturnBytes(const QByteArray &iData)
{
    QByteArray result;
    for (int n = 0; n < iData.size(); ++n)
    {
        result.push_back(iData.at( iData.size() - n - 1 ));
    }
    return result;
}

float CalculationThread::channelDataToBigEndian(const float &iData)
{
    float result = iData;
    char *p_data_l = (char *)&result; // 左边第1字节
    char *p_data_r = p_data_l + 3; // 右边第1字节

    for (int n = 0; n < 2; ++n)
    {
        char tmp = *p_data_l;
        *p_data_l = *p_data_r;
        *p_data_r = tmp;

        p_data_l++;
        p_data_r--;
    }

    return result;
}

void CalculationThread::run()
{
    // 1. 从head_offset + N字节 处开始读 N字节数据
    //         N字节 = 数据体大小 / 线程数
    // 2. 循环：开始读数据按照 8 + n1 + n2 + n3...
    // 3. 反转时间的8个字节，计算通道值
    // 4. 添加计算结果到原始通道数据的后面
    // 5. 写文件，输出文件下 _线程序号 后缀

    QString thread_output = m_outputName;
    int index = thread_output.indexOf(".dat");
    QString suffix = QString("_%1").arg(m_index);
    thread_output.insert(index, suffix);
    m_outputName = thread_output;
    qDebug() << __FUNCTION__ << "Thread" << m_index << "  m_inputName=" << m_inputName;// << m_blockSize;

    QFile out_file(thread_output);
    if (!out_file.open(QIODevice::WriteOnly))
    {
        qWarning() << "thread" << m_index << "open output file error! error=" << out_file.errorString();
        return;
    }

    QFile in_file(m_inputName);
    if (!in_file.open(QIODevice::ReadOnly))
    {
        qWarning() << "thread" << m_index << "open input file error! error=" << in_file.errorString();
        return;
    }

    // example:
    //  thread_count = 10
    //  head_offset = 656
    //  body_data.size()= 840000
    //  data_count = 30000
    //  frame_size = 28 (8 + 4 + 4 + 4 + 4 + 4)
    //  block_size = data_count / thread_count = 30000 / 10 = 3000
    //
    // 线程读取起始位置 = head_offset + frame_size * (index * m_average_block_size)
    // thread0 = 656 + 28 * (0 * 3000) = 656
    // thread1 = 656 + 28 * (1 * 3000) = 84656 = hex: 1 4ab0
    // thread2 = 656 + 28 * (2 * 3000) = 168656 = hex: 2 92D0
    // ...
    qulonglong read_offset = m_headOffset + m_frameSize * (m_index * m_averageBlockSize);
    in_file.seek(read_offset);
//    qDebug() << __FUNCTION__ << "Thread" << m_index << m_headOffset << "+" << m_frameSize << "* (" << m_index << "*" << m_averageBlockSize << ")=" << read_offset;

    QDataStream o_stream(&out_file);
    for (quint64 n = 0; n < m_blockSize; ++n)
    {
        QByteArray ch_data = in_file.read(m_frameSize);

        QByteArray source_data; // 源文件数据
        QByteArray timestamp;
        if (m_isBigEndian)
        {
            timestamp = ch_data.mid(0, 8);
        }
        else
        {
            timestamp = overturnBytes(ch_data.mid(0, 8));
        }
        source_data.append(timestamp);
        ch_data.remove(0, 8);

        QList<float> data_list;
        for (int n = 0; n < m_dataByteCount.size(); ++n)
        {
            QByteArray data_bytes = ch_data.mid(0, m_dataByteCount.at(n).toInt());
            ch_data.remove(0, m_dataByteCount.at(n).toInt());

            // 通道数据的大小端序与文件第一个字节表示的大小端序相反
            QByteArray value_bytes;
            if (m_isBigEndian)
            {
                value_bytes = overturnBytes(data_bytes);
                // 大端序的通道数据可以直接写入文件
                source_data.append(data_bytes);
            }
            else
            {
                value_bytes = data_bytes;
                // 小端序的通道数据要翻转后写入文件
                source_data.append(overturnBytes(data_bytes));
            }

            float ch_value = *(float *)value_bytes.data();
            data_list << ch_value;
        }

        QList<float> result_list;
        for (auto algo_item : m_algoList)
        {
            int type = algo_item.toMap().value("type").toInt();
            int algorithm = algo_item.toMap().value("algorithm").toInt();
            int ch1 = algo_item.toMap().value("ch1").toInt() - 1;
            int ch2 = algo_item.toMap().value("ch2").toInt() - 1;
            int ch3 = algo_item.toMap().value("ch3").toInt() - 1;

            float a_value = data_list.at(ch1);
            float b_value = data_list.at(ch2);
            float c_value = data_list.at(ch3);

            float dr_maxStress = 0.0, dr_minStress = 0.0, dr_shearStress = 0.0;
            float dr_maxStrain = 0.0, dr_minStrain = 0.0, dr_angle = 0.0;
            float rr_maxStress = 0.0, rr_minStress = 0.0, rr_shearStress = 0.0;
            float rr_maxStrain = 0.0, rr_minStrain = 0.0, rr_angle = 0.0;

            if (type == 0)
            {
                switch (algorithm)
                {
                case 0: // DR - MaxStress
                    dr_maxStress = Formula::DeltaRosetteMaxStress(m_e, m_v, a_value, b_value, c_value);
                    result_list.append(dr_maxStress);
                    break;
                case 1: // DR - MinStress
                    dr_minStress = Formula::DeltaRosetteMinStress(m_e, m_v, a_value, b_value, c_value);
                    result_list.append(dr_minStress);
                    break;
                case 2: // DR - ShearStress
                    dr_shearStress = Formula::DeltaRosetteShearStress(m_e, m_v, a_value, b_value, c_value);
                    result_list.append(dr_shearStress);
                    break;
                case 3: // DR - MaxStrain
                    dr_maxStrain = Formula::DeltaRosetteMaxStrain(a_value, b_value, c_value);
                    result_list.append(dr_maxStrain);
                    break;
                case 4: // DR - MinStrain
                    dr_minStrain = Formula::DeltaRosetteMinStrain(a_value, b_value, c_value);
                    result_list.append(dr_minStrain);
                    break;
                case 5: // DR - Angle
                    dr_angle = Formula::DeltaRosetteAngle(a_value, b_value, c_value);
                    result_list.append(dr_angle);
                    break;
                default:
                    qDebug() << "DR algorithm error! algorithm=" << algorithm;
                    break;
                }
            }
            else //if (type == 1)
            {
                switch (algorithm)
                {
                case 0: // RR - MaxStress
                    rr_maxStress = Formula::RectangularRosetteMaxstress(m_e, m_v, a_value, b_value, c_value);
                    result_list.append(rr_maxStress);
                    break;
                case 1: // RR - MinStress
                    rr_minStress = Formula::RectangularRosetteMinstress(m_e, m_v, a_value, b_value, c_value);
                    result_list.append(rr_minStress);
                    break;
                case 2: // RR - ShearStress
                    rr_shearStress = Formula::RectangularRosetteShearstress(m_e, m_v, a_value, b_value, c_value);
                    result_list.append(rr_shearStress);
                    break;
                case 3: // RR - MaxStrain
                    rr_maxStrain = Formula::RectangularRosetteMaxstrain(a_value, b_value, c_value);
                    result_list.append(rr_maxStrain);
                    break;
                case 4: // RR - MinStrain
                    rr_minStrain = Formula::RectangularRosetteMinstrain(a_value, b_value, c_value);
                    result_list.append(rr_minStrain);
                    break;
                case 5: // RR - Angle
                    rr_angle = Formula::RectangularRosetteAngle(a_value, b_value, c_value);
                    result_list.append(rr_angle);
                    break;
                default:
                    qDebug() << "RR algorithm error! algorithm=" << algorithm;
                    break;
                }
            } // End else if (type == 1)

            this->step(m_index, n);
        }

        // 先写入原文件数据，再写入计算后的数据
        // 因为原文件数据中包含了时间通道，所以后面直接跟计算后通道的数据就可以了
        o_stream.writeRawData(source_data.data(), source_data.size());
        for (auto data : result_list)
        {
            float result = channelDataToBigEndian(data);
            o_stream.writeRawData((char *)&result, sizeof(result));
        }
    }
    out_file.close();
    in_file.close();

    qDebug() << "thread" << m_index << " done.";
    this->finish(m_index);
}

/********************************* UdbfParserPrivate *********************************/
class UdbfParserPrivate : public QObject
{
    Q_OBJECT
public:
    explicit UdbfParserPrivate(UdbfParser *iParent)
        : QObject(iParent), dd(iParent),
          m_isBigEndian(false), m_version(0), m_withCheckSum(false),
          m_dActTimeDataTypeByteCount(0),
          m_sampleRate(0.0), m_channelCount(0),
          m_frameSize(0), m_dataCount(0),
          m_headOffset(0)
    {
        m_datetimeType.m_startTimeToDayFactor = 0.0;
        m_datetimeType.m_dActTimeDataType = 0;
        m_datetimeType.m_dActTimeToSecondFactor = 0.0;
        m_datetimeType.m_startTime = 0;
    }

    UdbfParser * const dd;

    QString m_loadFileName;
    bool m_isBigEndian; // true=大端序    false=小端序
    int m_version;
    QByteArray m_typeVendor;
    bool m_withCheckSum;
    int m_dActTimeDataTypeByteCount;
    double m_sampleRate;
    QByteArray m_sampleRateHex;
    DateTimeTypeStruct m_datetimeType;
    int m_channelCount;
    int m_frameSize;
    qulonglong m_dataCount; //总数据条数
    int m_headOffset; // 文件头到 *号 分隔符的字节数

    QList<ChannelDataType> m_channelDataTypeList;
    // 通道信息 -- 写文件用
    QList<ChannelInfo> m_channelInfoList;

    void clear();
    bool openFile(QFile *iFile, QString *oError);

public:
    // 读数据用
    QByteArray overturnBytes(const QByteArray &iData);
    int getByteCount(int iDataTypeIndex);
    qulonglong hexByte8ToUInt64(const QByteArray &iData);
    QString datetimeFromHex(const QByteArray &iData, const DateTimeTypeStruct &iDtType);
    QString secondsToDateTime(double iDateTimeSeconds);
    double hex2double(unsigned char *p);
    long long int getS(int e, int m);
    // 写数据用
    // 2字节数据转小端序
    ushort toLittleEndian(int *iData);
};

void UdbfParserPrivate::clear()
{
    m_loadFileName.clear();
    m_isBigEndian = false;
    m_version = 0;
    m_typeVendor.clear();
    m_withCheckSum = false;
    m_dActTimeDataTypeByteCount = 0;
    m_sampleRate = 0.0;
    m_sampleRateHex.clear();
    m_datetimeType.m_startTimeToDayFactor = 0.0;
    m_datetimeType.m_dActTimeDataType = 0;
    m_datetimeType.m_dActTimeToSecondFactor = 0.0;
    m_datetimeType.m_startTime = 0;
    m_channelCount = 0;
    m_frameSize = 0;
    m_dataCount = 0;
    m_headOffset = 0;
    m_channelDataTypeList.clear();
    m_channelInfoList.clear();
}

bool UdbfParserPrivate::openFile(QFile *iFile, QString *oError)
{
    if (!iFile->open(QIODevice::ReadOnly))
    {
        if (oError)
        {
            *oError = iFile->errorString();
        }
        return false;
    }

    return true;
}

QByteArray UdbfParserPrivate::overturnBytes(const QByteArray &iData)
{
    QByteArray result;
    for (int n = 0; n < iData.size(); ++n)
    {
        result.push_back(iData.at( iData.size() - n - 1 ));
    }
    return result;
}

int UdbfParserPrivate::getByteCount(int iDataTypeIndex)
{
    int byte_count = 0;
    switch (iDataTypeIndex)
    {
    case  0: byte_count = 0; break;
    case  1: byte_count = 0; break;
    case  2: byte_count = 0; break;
    case  3: byte_count = 0; break;
    case  4: byte_count = 0; break;
    case  5: byte_count = 0; break;
    case  6: byte_count = 0; break;
    case  7: byte_count = 0; break;
    case  8: byte_count = 4; break;  // FLOAT
    case  9: byte_count = 0; break;
    case 10: byte_count = 0; break;
    case 11: byte_count = 0; break;
    case 12: byte_count = 8; break;
    case 13: byte_count = 0; break;
    case 14: byte_count = 8; break;  // USINT64
    case 15: byte_count = 0; break;
    default:
        break;
    }

    return byte_count;
}

qulonglong UdbfParserPrivate::hexByte8ToUInt64(const QByteArray &iData)
{
    const char *p_data = iData.data();
    qulonglong result = 0;
    uchar *p_result = (uchar *)&result;
    memcpy(p_result + 7, p_data + 0, 1);
    memcpy(p_result + 6, p_data + 1, 1);
    memcpy(p_result + 5, p_data + 2, 1);
    memcpy(p_result + 4, p_data + 3, 1);
    memcpy(p_result + 3, p_data + 4, 1);
    memcpy(p_result + 2, p_data + 5, 1);
    memcpy(p_result + 1, p_data + 6, 1);
    memcpy(p_result + 0, p_data + 7, 1);

    return result;
}

QString UdbfParserPrivate::datetimeFromHex(const QByteArray &iData, const DateTimeTypeStruct &iDtType)
{
    qulonglong time_value = hexByte8ToUInt64(iData);
    double setp1_result = 0;

    // 1.
    switch (iDtType.m_dActTimeDataType)
    {
    case  0:
        break;
    case  1:
        break;
    case  2:
        break;
    case  3:
        break;
    case  4:
        break;
    case  5:
        break;
    case  6:
        break;
    case  7:
        break;
    case  8:  // FLOAT
        break;
    case  9:
        break;
    case 10:
        break;
    case 11:
        break;
    case 12:
        break;
    case 13:
        break;
    case 14:  // USINT64
    {
        int m = 0;
//        setp1_result = time_value / pow(10, m);
        double pow_result = pow(10, m);
        setp1_result = time_value / pow_result;
//        qDebug() << "setp1_result=" << time_value << "/" << pow_result << "=" << setp1_result;
        break;
    }
    case 15:
        break;
    default:
        break;
    }

    // 2.
    qulonglong step2_result = setp1_result * iDtType.m_dActTimeToSecondFactor;
//    qDebug() << "step2_result=" << iDtType.m_dActTimeToSecondFactor << "*" << setp1_result << "=" << step2_result;
    double step3_result = step2_result / 86400.0;
    double step4_result = iDtType.m_startTimeToDayFactor * iDtType.m_startTime;
    double step5_result = step4_result + step3_result;
    double step6_result = step5_result * 86400.0;
    double step7_result = step6_result - 126316800; // 1462.0 * 86400.0 = 126316800;

    QString str;
    str.sprintf("%12.2f", step7_result);
//    qDebug().noquote() << iData.toHex().toUpper() << "=" << str;

    // 08f93deac28c6890 ==> step7_result = 3.67615e+09,  step8_result = 2020.06.27  23:35:00:000
    return secondsToDateTime(step7_result);
}

int isLeap(int iYear)
{
    return (((iYear % 4 == 0) && (iYear % 100 != 0)) || (iYear % 400 == 0));
}

QString UdbfParserPrivate::secondsToDateTime(double iDateTimeSeconds)
{
    double iSecond;
    double TotalSecond = iDateTimeSeconds;

    int iYear = 1904, iMonth = 1, iDay = 1, iHour = 0, iMinute = 0;
    int monthLengths[2][13] = {
            { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 },
            { 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366 }
    };
    //以29为一个月：0，29，58，87，116，145，174，203，232，261，290，319，348，覆盖以上月

    int yearLengths[2] = { 365, 366 };
//		TotalSecond += 3600 * 8;//中国时区，加8
    TotalSecond += 86400; //3600 * 24;
    int TotalDay = TotalSecond / 86400;//一共多少天，从1904/01/01 上午0点开始的

    //如果totalday是整型，这里会溢出
    double days_second;
    double Days = TotalDay;
    days_second = 86400 * Days;

    iSecond = TotalSecond - days_second;  // 减去天后残留的秒数，可以用来计算时，分秒；
    iHour = iSecond / 3600;  //时
    iMinute = (iSecond - iHour * 3600) / 60;//分
    iSecond = iSecond - iHour * 3600 - iMinute * 60;//秒

    //365，365，365，366以上四年共1461天,平分，精度可达
    //1年365，2年730，3年1095
    iYear = TotalDay / 365.25 + 1904;
    int syears = TotalDay / 1461;
    TotalDay = TotalDay - syears * 1461;//刨掉4年后的天数

    //在4年里计算到底是哪一个月
    for (int indexYear = 1; indexYear < 5; ++indexYear)
    {
        if (TotalDay < (indexYear * 365))
        {
            TotalDay -= 365 * (indexYear - 1);
            for (iMonth = 1; iMonth <= 12; ++iMonth)
            {
                if (TotalDay <= monthLengths[isLeap(iYear)][iMonth])
                {
                    iDay = TotalDay - monthLengths[isLeap(iYear)][iMonth - 1];
                    goto label1;
                }
            }
        }
    }
label1:
    return QString("%1.%2.%3 %4:%5:%6").arg(iYear).arg(iMonth, 2, 10, QChar('0')).arg(iDay, 2, 10, QChar('0')).arg(iHour, 2, 10, QChar('0')).arg(iMinute, 2, 10, QChar('0')).arg((int)iSecond, 2, 10, QChar('0'));
}

double UdbfParserPrivate::hex2double(unsigned char *p)
{
    long long int a = 0x0;
    a = a | p[0];
    a = (a << 8) | p[1];
    a = (a << 8) | p[2];
    a = (a << 8) | p[3];
    a = (a << 8) | p[4];
    a = (a << 8) | p[5];
    a = (a << 8) | p[6];
    a = (a << 8) | p[7];
    int s = (a >> 63) & 0xFF;//获得符号位，1表示负数，0表示正数
    int e = (a >> 52) & 0x7FF;
    e = e - 1023;//获得指数
    long long int m = a & 0xFFFFFFFFFFFFF | 0x10000000000000;//获得底数
    //cout<<setiosflags(ios::uppercase)<<hex<<m<<endl;
    long long int c = 0;
    double v = 0.0, y = 1.0;
    if (e >= 0)//向右移动
    {
        c = (m >> (52 - e)) & 0xFFFFFFFFFFFFFFFF;//获得整数的二进制
        long long int b = 0;
        for (int i = 0; i < 52 - e; ++i)
        {
            b = (b << 1) | 0x01;
        }
        b = b & m;//获得小数的二进制
        int j = 0;
        for (int i = 52 - e - 1; i >= 0; --i)
        {
            j++;
            y = (double)( ((b >> i) & 0x01) * getS(2, j) );
            if (y > 0.0)
            {
                v += 1.0 / y;
            }
        }
        v = c + v;
        if (s > 0)
        {
            v=-v;
        }
    }
    else//向左移动
    {
        e = -e;
        c = m;
        int j = 0;
        for (int i = 52 + e - 1; i >= 0; --i)
        {
            j++;
            y = (float)( ((c >> i) & 0x01) * getS(2, j) );
            if (y > 0.0)
            {
                v += 1.0 / y;
            }
        }
        if (s > 0)
        {
            v = -v;
        }
    }

    return v;
}

long long UdbfParserPrivate::getS(int e, int m)
{
    long long int s = e;
    for (int i = 1; i < m; ++i)
    {
        s *= e;
    }
    return s;
}

ushort UdbfParserPrivate::toLittleEndian(int *iData)
{
    char *p_data_l = (char *)iData; // 左边第1字节
    char *p_data_r = p_data_l + 1; // 右边第1字节

    char tmp = *p_data_l;
    *p_data_l = *p_data_r;
    *p_data_r = tmp;

    return (ushort)*iData;
}

#include "udbfparser.moc"

/********************************* UdbfParser *********************************/
UdbfParser::UdbfParser(QObject *iParent)
    : QObject(iParent), dp(new UdbfParserPrivate(this))
{
}

QString UdbfParser::getDllVersion()
{
    return QString("2021-01-12 14:36");
}

bool UdbfParser::loadData(const QString &iFileName, QString *oError)
{
    QFile dat_file(iFileName);
    if (!dp->openFile(&dat_file, oError))
        return false;

    // 从文件头开始到最后一个星号的字节数
    int head_data_count = 0;
    // 读取包含文件头的数据
    QByteArray raw_data = dat_file.read(2048);
    dat_file.close();
    qDebug() << "open" << iFileName << "ok.";

    dp->clear();
    dp->m_loadFileName = iFileName;
    {
        // 第一个Vi程序翻译
        // 1. IsBigEndian
        if ((int)raw_data.at(0) == 0)
            dp->m_isBigEndian = false;
        else if ((int)raw_data.at(0) == 1)
            dp->m_isBigEndian = true;
        else
        {
            qWarning() << iFileName << "Not UDBF file!";
            return false;
        }
        raw_data.remove(0, 1);
        head_data_count += 1;

        // 2. Version
        QByteArray version_data;
        if (!dp->m_isBigEndian) version_data = dp->overturnBytes(raw_data.mid(0, 2));
        else version_data = raw_data.mid(0, 2);
        dp->m_version = (version_data.at(0) << 8) + version_data.at(1);

        raw_data.remove(0, 2);
        head_data_count += 2;

        // 3.TypeVendorLen
        QByteArray type_vendor_len_data;
        if (!dp->m_isBigEndian) type_vendor_len_data = dp->overturnBytes(raw_data.mid(0, 2));
        else type_vendor_len_data = raw_data.mid(0, 2);
        int type_vendor_len = (type_vendor_len_data.at(0) << 8) + type_vendor_len_data.at(1);
        raw_data.remove(0, 2);
        head_data_count += 2;

        // 4. TypeVendor
        dp->m_typeVendor = raw_data.mid(0, type_vendor_len);
        raw_data.remove(0, type_vendor_len);
        head_data_count += type_vendor_len;

        // 5. WithCheckSum
        int with_check_sum_data = (int)raw_data.mid(0, 1).front();
        dp->m_withCheckSum = (with_check_sum_data == 1) ? true : false;
        raw_data.remove(0, 1);
        head_data_count += 1;

        // 6. AdditionalDataLen
        QByteArray additional_data_len_data;
        if (!dp->m_isBigEndian) additional_data_len_data = dp->overturnBytes(raw_data.mid(0, 2));
        else additional_data_len_data = raw_data.mid(0, 2);
        int additional_data_len = (additional_data_len_data.at(0) << 8) + additional_data_len_data.at(1);
//        qDebug() << additional_data_len_data.toHex().toUpper() << "additional_data_len=" << additional_data_len;
        raw_data.remove(0, 2);
        head_data_count += 2;

        QByteArray module_add_data_type_data, module_add_data1;
        if (additional_data_len > 0)
        {
            // 7. ModuleAddDataType
            module_add_data_type_data = raw_data.mid(0, 2);
            raw_data.remove(0, 2);
        //    qDebug() << "111"<< raw_data.left(10).toHex().toUpper();
            raw_data.remove(0, 2); //LabView中这里2字节未做处理
        //    qDebug() << "222" << raw_data.left(10).toHex().toUpper();
            head_data_count += 4;

            // 8. ModuleAddData
        //    qDebug() << "333" << raw_data.left(14).toHex().toUpper();
            module_add_data1 = raw_data.mid(1, additional_data_len - 4); // 上面处理了2字节 + 删掉2字节
            QString module_add_data2 = module_add_data1.mid(13);
            raw_data.remove(0, additional_data_len - 4);
            head_data_count += (additional_data_len - 4);
        }

//        qDebug() << "==========================================================";
        // 9. StartTimeToDayFactor
        QByteArray start_time_to_day_factor_data;
        if (!dp->m_isBigEndian) start_time_to_day_factor_data = dp->overturnBytes(raw_data.mid(0, 8));
        else start_time_to_day_factor_data = raw_data.mid(0, 8);
        raw_data.remove(0, 8);
        dp->m_datetimeType.m_startTimeToDayFactor = dp->hex2double((uchar *)start_time_to_day_factor_data.data());
        dp->m_datetimeType.m_startTimeToDayFactorHex = start_time_to_day_factor_data;
        head_data_count += 8;

        // 10. dActTimeDataType
        QByteArray d_act_time_data_type_data;
        if (!dp->m_isBigEndian) d_act_time_data_type_data = dp->overturnBytes(raw_data.mid(0, 2));
        else d_act_time_data_type_data = raw_data.mid(0, 2);
        dp->m_datetimeType.m_dActTimeDataType = (d_act_time_data_type_data.at(0) << 8) + d_act_time_data_type_data.at(1);
        raw_data.remove(0, 2);
        // dActTimeDataType --> ByteCount
        dp->m_dActTimeDataTypeByteCount = dp->getByteCount(dp->m_datetimeType.m_dActTimeDataType);
        dp->m_datetimeType.m_dActTimeDataTypeHex = d_act_time_data_type_data;
        head_data_count += 2;

        // 11. dActTimeToSecondFactor
        QByteArray d_act_time_to_second_factor_data;
        if (!dp->m_isBigEndian) d_act_time_to_second_factor_data = dp->overturnBytes(raw_data.mid(0, 8));
        else d_act_time_to_second_factor_data = raw_data.mid(0, 8);
        raw_data.remove(0, 8);
        dp->m_datetimeType.m_dActTimeToSecondFactor = dp->hex2double((uchar *)d_act_time_to_second_factor_data.data());
        dp->m_datetimeType.m_dActTimeToSecondFactorHex = d_act_time_to_second_factor_data;
        head_data_count += 8;

        // 12. StartTime
        QByteArray start_time_data;
        if (!dp->m_isBigEndian) start_time_data = dp->overturnBytes(raw_data.mid(0, 8));
        else start_time_data = raw_data.mid(0, 8);
        raw_data.remove(0, 8);
        dp->m_datetimeType.m_startTime = dp->hex2double((uchar *)start_time_data.data());
        dp->m_datetimeType.m_startTimeHex = start_time_data;
        head_data_count += 8;

        // 13. SampleRate
        QByteArray sample_rate_data;
        if (!dp->m_isBigEndian) sample_rate_data = dp->overturnBytes(raw_data.mid(0, 8));
        else sample_rate_data = raw_data.mid(0, 8);
        raw_data.remove(0, 8);
        dp->m_sampleRate = dp->hex2double((uchar *)sample_rate_data.data());
        dp->m_sampleRateHex = sample_rate_data;
        head_data_count += 8;

        // 14. 通道数
        QByteArray channel_count_data;
        if (!dp->m_isBigEndian) channel_count_data = dp->overturnBytes(raw_data.mid(0, 2));
        else channel_count_data = raw_data.mid(0, 2);
        dp->m_channelCount = (channel_count_data.at(0) << 8) + channel_count_data.at(1);
        raw_data.remove(0, 2);
        head_data_count += 2;
    }

    {
        // 第二个Vi程序翻译
        for (int n = 0; n < dp->m_channelCount; ++n)
        {
            ChannelDataType cdt;
            ChannelInfo info_for_write_data;

            // 1. NameLen
            QByteArray name_len_data;
            if (!dp->m_isBigEndian) name_len_data = dp->overturnBytes(raw_data.mid(0, 2));
            else name_len_data = raw_data.mid(0, 2);
            int name_len = (name_len_data.at(0) << 8) + name_len_data.at(1);
            info_for_write_data.m_nameLen1 = name_len;
//            qDebug() << "channel_count=" << (n + 1) << name_len_data.toHex().toUpper() << "name_len=" << name_len;
            raw_data.remove(0, 2);
            head_data_count += 2;

            // 2. Name
            QString name = raw_data.mid(0, name_len);
            info_for_write_data.m_name1 = name;
            cdt.m_name = name;
//            qDebug() << "channel_count=" << (n + 1) << "name=" << name;
            raw_data.remove(0, name_len);
            head_data_count += name_len;

            // 3. Data Direction
            QByteArray data_direction_data;
            if (!dp->m_isBigEndian) data_direction_data = dp->overturnBytes(raw_data.mid(0, 2));
            else data_direction_data = raw_data.mid(0, 2);
            int data_direction = (data_direction_data.at(0) << 8) + data_direction_data.at(1);
            info_for_write_data.m_direction = data_direction;
//            qDebug() << "channel_count=" << (n + 1) << data_direction_data.toHex().toUpper() << "data_direction=" << data_direction;
            raw_data.remove(0, 2);
            head_data_count += 2;

            // 4. Data Type
            QByteArray data_type_data;
            if (!dp->m_isBigEndian) data_type_data = dp->overturnBytes(raw_data.mid(0, 2));
            else data_type_data = raw_data.mid(0, 2);
            int data_type = (data_type_data.at(0) << 8) + data_type_data.at(1);
            info_for_write_data.m_dataType = data_type;
//            qDebug() << "channel_count=" << (n + 1) << data_type_data.toHex().toUpper() << "data_type=" << data_type;
            raw_data.remove(0, 2);
            head_data_count += 2;

            int data_type_byte_count = dp->getByteCount(data_type);
            dp->m_frameSize += data_type_byte_count;
//            qDebug() << "channel_count=" << (n + 1) << "data_type_byte_count=" << data_type_byte_count << "dp->m_frameLength=" << dp->m_frameSize;
            cdt.m_dataType = data_type;
            cdt.m_byteCount = data_type_byte_count;

            // 5. Field Len
            QByteArray field_len_data;
            if (!dp->m_isBigEndian) field_len_data = dp->overturnBytes(raw_data.mid(0, 2));
            else field_len_data = raw_data.mid(0, 2);
            int field_len = (field_len_data.at(0) << 8) + field_len_data.at(1);
            info_for_write_data.m_fieldLen = field_len;
//            qDebug() << "channel_count=" << (n + 1) << field_len_data.toHex().toUpper() << "field_len=" << field_len;
            raw_data.remove(0, 2);
            head_data_count += 2;

            // 6. Precision
            QByteArray precision_data;
            if (!dp->m_isBigEndian) precision_data = dp->overturnBytes(raw_data.mid(0, 2));
            else precision_data = raw_data.mid(0, 2);
            int precision = (precision_data.at(0) << 8) + precision_data.at(1);
            info_for_write_data.m_precision = precision;
//            qDebug() << "channel_count=" << (n + 1) << precision_data.toHex().toUpper() << "precision=" << precision;
            raw_data.remove(0, 2);
            cdt.m_precision = precision;
            head_data_count += 2;

            // 7. Unit Len
            QByteArray unit_len_data;
            if (!dp->m_isBigEndian) unit_len_data = dp->overturnBytes(raw_data.mid(0, 2));
            else unit_len_data = raw_data.mid(0, 2);
            int unit_len = (unit_len_data.at(0) << 8) + unit_len_data.at(1);
            info_for_write_data.m_unitLen = unit_len;
//            qDebug() << "channel_count=" << (n + 1) << unit_len_data.toHex().toUpper() << "unit_len=" << unit_len;
            raw_data.remove(0, 2);
            head_data_count += 2;

            // 8. Unit
            QByteArray unit_data = raw_data.mid(0, unit_len);
            info_for_write_data.m_unit = unit_data;
//            qDebug() << "channel_count=" << (n + 1) << unit_data.toHex().toUpper() << "unit=" << unit_data.toHex().toUpper();
            raw_data.remove(0, unit_len);
            head_data_count += unit_len;

            // 9. VariableAdditionalDataLen
            QByteArray add_data_len_data;
            if (!dp->m_isBigEndian) add_data_len_data = dp->overturnBytes(raw_data.mid(0, 2));
            else add_data_len_data = raw_data.mid(0, 2);
            int add_data_len = (add_data_len_data.at(0) << 8) + add_data_len_data.at(1);
            info_for_write_data.m_additionalDataLen = add_data_len;
//            qDebug() << "channel_count=" << (n + 1) << add_data_len_data.toHex().toUpper() << "add_data_len=" << add_data_len;
            raw_data.remove(0, 2);
            head_data_count += 2;

            if (add_data_len > 0)
            {
                // 10. Variable Type
                QByteArray variable_type_data;
                if (!dp->m_isBigEndian) variable_type_data = dp->overturnBytes(raw_data.mid(0, 2));
                else variable_type_data = raw_data.mid(0, 2);
                int variable_type = (variable_type_data.at(0) << 8) + variable_type_data.at(1);
                info_for_write_data.m_variableType = variable_type;
//                qDebug() << "channel_count=" << (n + 1) << variable_type_data.toHex().toUpper() << "variable_type=" << variable_type;
                raw_data.remove(0, 2);
                head_data_count += 2;

                // 11. VariableAdditionalDataStructID
                QByteArray two_byte1_data;
                if (!dp->m_isBigEndian) two_byte1_data = dp->overturnBytes(raw_data.mid(0, 2));
                else two_byte1_data = raw_data.mid(0, 2);
                int two_byte1 = (two_byte1_data.at(0) << 8) + two_byte1_data.at(1);
                info_for_write_data.m_byte2 = two_byte1;
//                qDebug() << "channel_count=" << (n + 1) << two_byte1_data.toHex() << "VariableAdditionalDataStructID=" << two_byte1;
                raw_data.remove(0, 2);
                head_data_count += 2;

                // 12. 通道名称字符串长度
                QByteArray string_len_data;
                if (!dp->m_isBigEndian) string_len_data = dp->overturnBytes(raw_data.mid(0, 2));
                else string_len_data = raw_data.mid(0, 2);
                int string_len = (string_len_data.at(0) << 8) + string_len_data.at(1);
                info_for_write_data.m_nameLen2 = string_len;
//                qDebug() << "channel_count=" << (n + 1) << string_len_data.toHex().toUpper() << "string_len=" << string_len;
                raw_data.remove(0, 2);
                head_data_count += 2;

                // 13. 通道名称
                QString channel_string = raw_data.mid(0, string_len);
                info_for_write_data.m_name2 = channel_string;
//                qDebug() << "channel_count=" << (n + 1) << "channel_string=" << channel_string;
                raw_data.remove(0, string_len);
                head_data_count += string_len;
            }

            dp->m_channelDataTypeList.append(cdt);
            dp->m_channelInfoList.append(info_for_write_data);
        }
//        qDebug() << "---------------------------------------------------------------------------------------------------";
        dp->m_frameSize += dp->m_dActTimeDataTypeByteCount;
    }

    // remove "*"
    while (raw_data.front() == '*')
    {
        raw_data.remove(0, 1);
        head_data_count += 1;
    }
    dp->m_headOffset = head_data_count;

    if (!dp->openFile(&dat_file, oError))
        return false;

    dat_file.seek(head_data_count);
//    qDebug() << dat_file.pos();

    QByteArray body_data = dat_file.readAll();
    dp->m_dataCount = body_data.size() / dp->m_frameSize;
    this->dataCount(dp->m_dataCount);
//    qDebug() << "body_data.size()=" << body_data.size() << "m_frameSize=" << dp->m_frameSize << "data_count=" << dp->m_dataCount;
    dat_file.close();
    this->finish(0);

    return true;
}

QStringList UdbfParser::getChannelNames()
{
    QStringList result;
    for (auto item : dp->m_channelDataTypeList)
    {
        result << item.m_name;
    }
    return result;
}

ulong UdbfParser::getDataCount()
{
    return dp->m_dataCount;
}

bool UdbfParser::saveDataHead(const QString &iOutputFileName, const QVariantList &iAlgoList, QString *oError)
{
    QFile output_file(iOutputFileName);
    if (!output_file.open(QIODevice::WriteOnly))
    {
        if (oError)
        {
            *oError = output_file.errorString();
            qDebug() << __FUNCTION__ << "open output file error! error=" << *oError;
        }
        return false;
    }
    qDebug() << "save head open ok.";

    uint byte_count = 0;
    QDataStream o_stream(&output_file);

    // 第一部分(第1个vi程序)
    // 大小端序
    int endian = 1;
    o_stream.writeRawData((char *)&endian, 1);
    byte_count += 1;

    // 版本
    int version_ = dp->m_version;
    ushort version = dp->toLittleEndian(&version_);
    o_stream.writeRawData((char *)&version, 2);
    byte_count += 2;

    // TypeVendorLen
    int type_vendor_len = dp->m_typeVendor.length();
    int type_vendor_len_ = type_vendor_len;
    ushort type_vendor_len_data = dp->toLittleEndian(&type_vendor_len_);
    o_stream.writeRawData((char *)&type_vendor_len_data, 2);
    byte_count += 2;

    // TypeVendor
    o_stream.writeRawData(dp->m_typeVendor.data(), dp->m_typeVendor.size());
    byte_count += dp->m_typeVendor.size();

    // WithCheckSum
    int with_check_sum = dp->m_withCheckSum ? 1 : 0;
    o_stream.writeRawData((char *)&with_check_sum, 1);
    byte_count += 1;

    // AdditionalDataLen
    ushort additional_data_len = 0; // 0 无所谓大小端序
    o_stream.writeRawData((char *)&additional_data_len, 2);
    byte_count += 2;

    // 8 2 8 8 8 2
    o_stream.writeRawData(dp->m_datetimeType.m_startTimeToDayFactorHex.data(), dp->m_datetimeType.m_startTimeToDayFactorHex.size());
    byte_count += 8;

#if 1
    o_stream.writeRawData(dp->m_datetimeType.m_dActTimeDataTypeHex.data(), dp->m_datetimeType.m_dActTimeDataTypeHex.size());
#else // dActTimeDataType使用固定值: 12
    int dActTimeDataType = 12;
    dp->toLittleEndian(&dActTimeDataType);
    o_stream.writeRawData((char *)&dActTimeDataType, 2);
#endif
    byte_count += 2;

    o_stream.writeRawData(dp->m_datetimeType.m_dActTimeToSecondFactorHex.data(), dp->m_datetimeType.m_dActTimeToSecondFactorHex.size());
    byte_count += 8;

    o_stream.writeRawData(dp->m_datetimeType.m_startTimeHex.data(), dp->m_datetimeType.m_startTimeHex.size());
    byte_count += 8;

    o_stream.writeRawData(dp->m_sampleRateHex.data(), dp->m_sampleRateHex.size());
    byte_count += 8;

    // 通道数 = 原文件通道数 + 计算通道数
    int channel_count = iAlgoList.count() + dp->m_channelInfoList.size();
    dp->toLittleEndian(&channel_count);
    o_stream.writeRawData((char *)&channel_count, 2);
    byte_count += 2;

    // 第二部分(第2个vi程序)
    // 1. 原文件通道数据
    for (auto info : dp->m_channelInfoList)
    {
        QString ch_name = info.m_name1;
        int name_len1 = info.m_nameLen1;
        int direction = 0; // 这里要使用固定值，否则DIAdem不能正确识别通道数据(float类型)
        int data_type = info.m_dataType;
        int field_len = info.m_fieldLen;
        int precision = info.m_precision;
        int unit_len = info.m_unitLen;
        int additional_data_len = 0; // 没有附加数据，所以这里的值为0

        dp->toLittleEndian(&name_len1);
        o_stream.writeRawData((char *)&name_len1, 2);
        byte_count += 2;

        o_stream.writeRawData(ch_name.toStdString().c_str(), ch_name.toStdString().length() + 1);
        byte_count += (ch_name.toStdString().length() + 1);

        dp->toLittleEndian(&direction);
        o_stream.writeRawData((char *)&direction, 2);
        byte_count += 2;

        dp->toLittleEndian(&data_type);
        o_stream.writeRawData((char *)&data_type, 2);
        byte_count += 2;

        dp->toLittleEndian(&field_len);
        o_stream.writeRawData((char *)&field_len, 2);
        byte_count += 2;

        dp->toLittleEndian(&precision);
        o_stream.writeRawData((char *)&precision, 2);
        byte_count += 2;

        dp->toLittleEndian(&unit_len);
        o_stream.writeRawData((char *)&unit_len, 2);
        byte_count += 2;

        o_stream.writeRawData(info.m_unit.data(), info.m_unit.size());
        byte_count += info.m_unit.size();

        dp->toLittleEndian(&additional_data_len);
        o_stream.writeRawData((char *)&additional_data_len, 2);
        byte_count += 2;
    }

    // 2. 计算通道数据
    for (int n = 0; n < iAlgoList.count(); ++n)
    {
#if 0
        map= QMap(
                ("algorithm", QVariant(QString, "0"))
                ("ch1", QVariant(QString, "2"))
                ("ch2", QVariant(QString, "3"))
                ("ch3", QVariant(QString, "4"))
                ("ch_name", QVariant(QString, "TEST_CH1"))
                ("type", QVariant(QString, "0"))
              )
#endif
        QVariantMap map = iAlgoList.at(n).toMap();
        int index = map.value("ch1").toString().toInt();
        ChannelInfo info = dp->m_channelInfoList.at(index);
//        qDebug() << n << "map=" << map;

        QString ch_name = map.value("ch_name").toString();
        int name_len1 = ch_name.size() + 1;
        int direction = 0; // 这里要使用固定值，否则DIAdem不能正确识别通道数据(float类型)
        int data_type = info.m_dataType;
        int field_len = info.m_fieldLen;
        int precision = info.m_precision;
        int unit_len = info.m_unitLen;
        int additional_data_len = 0; // 没有附加数据，所以这里的值为0

        dp->toLittleEndian(&name_len1);
        o_stream.writeRawData((char *)&name_len1, 2);
        byte_count += 2;

        o_stream.writeRawData(ch_name.toStdString().c_str(), ch_name.toStdString().length() + 1);
        byte_count += (ch_name.toStdString().length() + 1);

        dp->toLittleEndian(&direction);
        o_stream.writeRawData((char *)&direction, 2);
        byte_count += 2;

        dp->toLittleEndian(&data_type);
        o_stream.writeRawData((char *)&data_type, 2);
        byte_count += 2;

        dp->toLittleEndian(&field_len);
        o_stream.writeRawData((char *)&field_len, 2);
        byte_count += 2;

        dp->toLittleEndian(&precision);
        o_stream.writeRawData((char *)&precision, 2);
        byte_count += 2;

        dp->toLittleEndian(&unit_len);
        o_stream.writeRawData((char *)&unit_len, 2);
        byte_count += 2;

        o_stream.writeRawData(info.m_unit.data(), info.m_unit.size());
        byte_count += info.m_unit.size();

        dp->toLittleEndian(&additional_data_len);
        o_stream.writeRawData((char *)&additional_data_len, 2);
        byte_count += 2;
    }

    //  写 '*' 分隔符
    int hex_16_remainder = byte_count %16;
    int add_byte = 16 - hex_16_remainder;
    if (add_byte < 8)
    {
        add_byte += 16;
    }

    QByteArray split;
    for (int n = 0; n < add_byte; ++n)
    {
        split.append("*");
    }
    o_stream.writeRawData(split.data(), split.size());

    output_file.close();
    return true;
}

bool UdbfParser::saveDataBody(const QString &iOutputFileName, const QVariantList &iAlgoList, double iE, double iV, int iThreadCount, QString *oError)
{
    // 1. 起N个线程
    // 2.1 计算每个线程的seek位置 ( head_offset + body_data.size() / 10)
    // 2.2 计算需要读取的字节数
    // 3. 开始读数据按照 8 + n1 + n2 + n3...
    // 4. 循环：计算通道值
    // 5. 等待所有线程结束，然后合并文件数据
    // 6. 删除线程创建的临时文件

    QElapsedTimer timer;
    timer.start();

    QMap<int, quint64> step_map;
    QEventLoop loop;
    QList<CalculationThread *> thread_list;

    for (int n = 0; n < iThreadCount; ++n)
    {
        CalculationThread *thread = new CalculationThread(n);

        int last_percent = -1;
        connect(thread, &CalculationThread::step, [=, &step_map, &last_percent](int iThreadIndex, const quint64 iStep)
        {
            quint64 &thread_step = step_map[iThreadIndex];
            thread_step = iStep;

            quint64 total_step = iThreadCount;
            for (quint64 step : step_map)
            {
                total_step += step;
            }

            int percent = total_step * 1.0 / (dp->m_dataCount + iThreadCount) * 100;
            if (percent != last_percent)
            {
                this->step(percent);
                last_percent = percent;
            }
        });

        connect(thread, &CalculationThread::finish, [&](int iThreadIndex)
        {
            static int count = 0;
            ++count;
            qDebug() << "Thread Index=" << iThreadIndex << count;

            if (count >= iThreadCount)
            {
                qDebug() << "calculationThread thread all finish.";
                loop.quit();
                count = 0;
            }
        });

        QVariantList byte_count_list;
        for (auto item : dp->m_channelDataTypeList)
        {
            byte_count_list << item.m_byteCount;
        }

        QVariantMap map;
        map.insert("is_big_endian", dp->m_isBigEndian);
        map.insert("input_file", dp->m_loadFileName);
        map.insert("output_file", iOutputFileName);
        map.insert("head_offset", dp->m_headOffset);
        map.insert("data_count", dp->m_dataCount);
        map.insert("thread_count", iThreadCount);
        map.insert("frame_size", dp->m_frameSize);
        map.insert("byte_count", byte_count_list);
        map.insert("algo_list", iAlgoList);
        map.insert("e", iE);
        map.insert("v", iV);
        thread->setData(map);

        thread_list << thread;
        thread->start();
    }
    loop.exec();

    // 整合各线程文件数据
    QFile output_file(iOutputFileName);
    if (!output_file.open(QIODevice::WriteOnly | QIODevice::Append))
    {
        qDebug() << __FUNCTION__ << iOutputFileName << "open failed! error=" << output_file.errorString();
        return false;
    }

    // 1. 读取每个线程的文件数据，写入到输出文件中，并删除线程文件
    int thread_index = 0;
    for (CalculationThread *thread : thread_list)
    {
        QFile thread_file(thread->m_outputName);
        if (!thread_file.open(QIODevice::ReadOnly))
        {
            *oError = QString("open file: %1  error! error=%2").arg(thread->m_outputName).arg(thread_file.errorString());
            qDebug() << __FUNCTION__ << thread->m_outputName << "open failed! error=" << thread_file.errorString();
            return false;
        }

        QByteArray thread_data = thread_file.readAll();
        output_file.write(thread_data.data(), thread_data.size());
        thread_file.close();

        // 2. 删除线程临时文件
        if (thread_file.remove())
            qInfo() << "merge" << thread->m_outputName << "ok.";
        else
            qWarning() << "merge" << thread->m_outputName << "failed! error=" << thread_file.errorString();

        // 更新进度
        quint64 &thread_step = step_map[thread_index];
        thread_step++;

        quint64 total_step = iThreadCount;
        for (quint64 step : step_map)
        {
            total_step += step;
        }
        this->step(total_step * 1.0 / (dp->m_dataCount + iThreadCount) * 100);
    }
    output_file.close();
    qint64 ms = timer.elapsed();

    // 释放内存
    for (CalculationThread *thread : thread_list)
    {
        qDebug() << "Thread" << thread->m_index << "will delete";
        if (thread)
        {
            delete thread;
            thread = nullptr;
        }
    }

    this->finish(ms);
    return true;
}
