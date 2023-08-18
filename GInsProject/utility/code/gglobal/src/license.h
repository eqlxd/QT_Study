#ifndef GLICENSE_H
#define GLICENSE_H

#include "export_define.h"
#include "dpoint.h"
#include <QObject>

class G_GLOABL_EXPORT GLicense : public QObject
{
    Q_OBJECT
    G_DECLARE_DP(GLicense)
    //=：friend class GLicensePrivate;class GLicensePrivate *dp;
public:
    explicit GLicense(QObject *iParent = nullptr);
    ~GLicense();

    QVariantMap getSystemInfo();

    // 生成授权文件
    QByteArray generate(const QVariantMap &iData);

    // 认证
    bool authentication(const QByteArray &iData);
};

#endif // GLICENSE_H
