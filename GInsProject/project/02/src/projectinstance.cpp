#include "projectinstance.h"

/******************************** ProjectInstancePrivate ********************************/
class ProjectInstancePrivate : public QObject
{
    Q_OBJECT
    G_DECLARE_DD(ProjectInstance)
public:
    explicit ProjectInstancePrivate(ProjectInstance *iParent)
      : QObject(iParent), dd(iParent)
    {
        Q_UNUSED(dd);
    }
};

#include "projectinstance.moc"

/******************************** ProjectInstance ********************************/
ProjectInstance::ProjectInstance(QObject *iParent)
    : QObject{iParent},
      dp(new ProjectInstancePrivate(this))
{
}

ProjectInstance::~ProjectInstance()
{
}
