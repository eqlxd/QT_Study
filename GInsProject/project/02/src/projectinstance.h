#ifndef PROJECTINSTANCE_H
#define PROJECTINSTANCE_H

#include <gglobal/dpoint.h>
#include <QObject>

// 全局单例
class ProjectInstance : public QObject
{
    Q_OBJECT
    G_DECLARE_DP(ProjectInstance)
public:
    explicit ProjectInstance(QObject *iParent = nullptr);
    ~ProjectInstance();

signals:

};

#endif // PROJECTINSTANCE_H
