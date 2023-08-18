//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_DATALOGGERAPI_TYPES_H)
#define _DATALOGGERAPI_TYPES_H
//========================================================================
// Implemented methods
#define IMPLEMENT_DATALOGGERAPI_GETSTATES
#define IMPLEMENT_DATALOGGERAPI_LISTLOGGERS
#define IMPLEMENT_DATALOGGERAPI_ENABLE
#define IMPLEMENT_DATALOGGERAPI_LISTSTORAGES
#define IMPLEMENT_DATALOGGERAPI_ADDSTORAGE
#define IMPLEMENT_DATALOGGERAPI_ADDDATAFILES
#define IMPLEMENT_DATALOGGERAPI_GETSTORAGEINFO
#define IMPLEMENT_DATALOGGERAPI_LISTSTORAGEFILES
#define IMPLEMENT_DATALOGGERAPI_DELETESTORAGEFILES
#define IMPLEMENT_DATALOGGERAPI_EJECTSTORAGE
#define IMPLEMENT_DATALOGGERAPI_SIMULATETRIGGER
#define IMPLEMENT_DATALOGGERAPI_MOUNT
#define IMPLEMENT_DATALOGGERAPI_UNMOUNT
#define IMPLEMENT_DATALOGGERAPI_FORMAT


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "DataLoggerAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
#include "GInsXmlRpcStdAPI_Types.h"
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace DataLoggerAPI {
//========================================================================
//------------------------------------------------------------------------
// DataLoggerAPI::CAPIInfo
//------------------------------------------------------------------------
class CAPIInfo
{
public:
    static std::string const& Name(void)
    {
        static std::string str("DataLoggerAPI");
        return str;
    }
    static std::string const& Revision(void)
    {
        static std::string str("0.1");
        return str;
    }
    static std::string const& GeneratorInfo(void)
    {
        static std::string str("GInsXmlRpcIFGenEng V2.41 (2021-04-26)");
        return str;
    }
}; // class CAPIInfo


//------------------------------------------------------------------------
// DataLoggerAPI::TypeTraceLevel
//------------------------------------------------------------------------
enum TypeTraceLevel {
    Debug = 0,
    Info = 1,
    Warning = 2,
    Error = 3,
    Disable = 4,
}; // enum TypeTraceLevel


//------------------------------------------------------------------------
// DataLoggerAPI::CTypePartition
//------------------------------------------------------------------------
class CTypePartition : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_DevPath(void)
        {
            static std::string str("DevPath");
            return str;
        }
    public:
        static std::string const& ItemName_IsMounted(void)
        {
            static std::string str("IsMounted");
            return str;
        }
    public:
        static std::string const& ItemName_MountPoint(void)
        {
            static std::string str("MountPoint");
            return str;
        }
    public:
        static std::string const& ItemName_FileSystem(void)
        {
            static std::string str("FileSystem");
            return str;
        }
    public:
        static std::string const& ItemName_UUID(void)
        {
            static std::string str("UUID");
            return str;
        }
    public:
        static std::string const& ItemName_Label(void)
        {
            static std::string str("Label");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("TypePartition");
        return str;
    }
public:
    CTypePartition(void)
    {
        try
        {
            Construct_DevPath();
            Construct_IsMounted();
            Construct_MountPoint();
            Construct_FileSystem();
            Construct_UUID();
            Construct_Label();
            }
        catch (...) {}
    }
    CTypePartition(const CTypePartition& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        }
    CTypePartition(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if ((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct)
            {
                (*this).invalidate();
            }
            Construct_DevPath();
            Construct_IsMounted();
            Construct_MountPoint();
            Construct_FileSystem();
            Construct_UUID();
            Construct_Label();
            }
        catch (...) {}
    }
public:
    ~CTypePartition(void)
    {
    }
protected:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Initialize_DevPath();
            Initialize_IsMounted();
            Initialize_MountPoint();
            Initialize_FileSystem();
            Initialize_UUID();
            Initialize_Label();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item DevPath (Type: "std::string")
    protected:
        void Construct_DevPath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DevPath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DevPath()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DevPath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DevPath()))
                {
                    Construct_DevPath();
                }
                if ((*Value()).hasMember(ItemName_DevPath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DevPath()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DevPath(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_DevPath()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DevPath(void) const
        {
            return (*Value())[ItemName_DevPath()];
        }
        bool Get_DevPath(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DevPath()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DevPath()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item IsMounted (Type: "bool")
protected:
    void Construct_IsMounted(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_IsMounted()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_IsMounted()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_IsMounted(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IsMounted()))
                {
                    Construct_IsMounted();
                }
                if ((*Value()).hasMember(ItemName_IsMounted()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_IsMounted()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IsMounted(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_IsMounted()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_IsMounted(void) const
        {
            bool GetValue = (*Value())[ItemName_IsMounted()];
            return (bool)GetValue;
        }
        bool Get_IsMounted(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IsMounted()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_IsMounted()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item MountPoint (Type: "std::string")
    protected:
        void Construct_MountPoint(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MountPoint()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MountPoint()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_MountPoint(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MountPoint()))
                {
                    Construct_MountPoint();
                }
                if ((*Value()).hasMember(ItemName_MountPoint()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MountPoint()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MountPoint(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_MountPoint()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_MountPoint(void) const
        {
            return (*Value())[ItemName_MountPoint()];
        }
        bool Get_MountPoint(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MountPoint()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_MountPoint()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item FileSystem (Type: "std::string")
    protected:
        void Construct_FileSystem(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FileSystem()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FileSystem()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_FileSystem(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FileSystem()))
                {
                    Construct_FileSystem();
                }
                if ((*Value()).hasMember(ItemName_FileSystem()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FileSystem()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FileSystem(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_FileSystem()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_FileSystem(void) const
        {
            return (*Value())[ItemName_FileSystem()];
        }
        bool Get_FileSystem(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FileSystem()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_FileSystem()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item UUID (Type: "std::string")
    protected:
        void Construct_UUID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UUID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_UUID()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_UUID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UUID()))
                {
                    Construct_UUID();
                }
                if ((*Value()).hasMember(ItemName_UUID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_UUID()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_UUID(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_UUID()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_UUID(void) const
        {
            return (*Value())[ItemName_UUID()];
        }
        bool Get_UUID(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_UUID()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_UUID()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Label (Type: "std::string")
    protected:
        void Construct_Label(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Label()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Label()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Label(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Label()))
                {
                    Construct_Label();
                }
                if ((*Value()).hasMember(ItemName_Label()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Label()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Label(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Label()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Label(void) const
        {
            return (*Value())[ItemName_Label()];
        }
        bool Get_Label(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Label()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Label()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CTypePartition


//------------------------------------------------------------------------
// DataLoggerAPI::CTypeLoggerStates
//------------------------------------------------------------------------
class CTypeLoggerStates : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_ConfigOK(void)
        {
            static std::string str("ConfigOK");
            return str;
        }
    public:
        static std::string const& ItemName_Enabled(void)
        {
            static std::string str("Enabled");
            return str;
        }
    public:
        static std::string const& ItemName_Destination(void)
        {
            static std::string str("Destination");
            return str;
        }
    public:
        static std::string const& ItemName_StartTriggerActive(void)
        {
            static std::string str("StartTriggerActive");
            return str;
        }
    public:
        static std::string const& ItemName_StopTriggerActive(void)
        {
            static std::string str("StopTriggerActive");
            return str;
        }
    public:
        static std::string const& ItemName_LoggingActive(void)
        {
            static std::string str("LoggingActive");
            return str;
        }
    public:
        static std::string const& ItemName_TriggerValue(void)
        {
            static std::string str("TriggerValue");
            return str;
        }
    public:
        static std::string const& ItemName_FileProgress(void)
        {
            static std::string str("FileProgress");
            return str;
        }
    public:
        static std::string const& ItemName_FilesStored(void)
        {
            static std::string str("FilesStored");
            return str;
        }
    public:
        static std::string const& ItemName_TriggerProgress(void)
        {
            static std::string str("TriggerProgress");
            return str;
        }
    public:
        static std::string const& ItemName_Events(void)
        {
            static std::string str("Events");
            return str;
        }
    public:
        static std::string const& ItemName_InfoMsg(void)
        {
            static std::string str("InfoMsg");
            return str;
        }
    public:
        static std::string const& ItemName_WarnMsg(void)
        {
            static std::string str("WarnMsg");
            return str;
        }
    public:
        static std::string const& ItemName_ErrorMsg(void)
        {
            static std::string str("ErrorMsg");
            return str;
        }
    public:
        static std::string const& ItemName_DataSrcActSize(void)
        {
            static std::string str("DataSrcActSize");
            return str;
        }
    public:
        static std::string const& ItemName_DataSrcMaxSize(void)
        {
            static std::string str("DataSrcMaxSize");
            return str;
        }
    public:
        static std::string const& ItemName_DataSrcCapacity(void)
        {
            static std::string str("DataSrcCapacity");
            return str;
        }
    public:
        static std::string const& ItemName_DataSrcOverruns(void)
        {
            static std::string str("DataSrcOverruns");
            return str;
        }
    public:
        static std::string const& ItemName_MailsSent(void)
        {
            static std::string str("MailsSent");
            return str;
        }
    public:
        static std::string const& ItemName_FTPFilesSent(void)
        {
            static std::string str("FTPFilesSent");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("TypeLoggerStates");
        return str;
    }
public:
    CTypeLoggerStates(void)
    {
        try
        {
            Construct_ConfigOK();
            Construct_Enabled();
            Construct_Destination();
            Construct_StartTriggerActive();
            Construct_StopTriggerActive();
            Construct_LoggingActive();
            Construct_TriggerValue();
            Construct_FileProgress();
            Construct_FilesStored();
            Construct_TriggerProgress();
            Construct_Events();
            Construct_InfoMsg();
            Construct_WarnMsg();
            Construct_ErrorMsg();
            Construct_DataSrcActSize();
            Construct_DataSrcMaxSize();
            Construct_DataSrcCapacity();
            Construct_DataSrcOverruns();
            Construct_MailsSent();
            Construct_FTPFilesSent();
            }
        catch (...) {}
    }
    CTypeLoggerStates(const CTypeLoggerStates& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        }
    CTypeLoggerStates(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if ((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct)
            {
                (*this).invalidate();
            }
            Construct_ConfigOK();
            Construct_Enabled();
            Construct_Destination();
            Construct_StartTriggerActive();
            Construct_StopTriggerActive();
            Construct_LoggingActive();
            Construct_TriggerValue();
            Construct_FileProgress();
            Construct_FilesStored();
            Construct_TriggerProgress();
            Construct_Events();
            Construct_InfoMsg();
            Construct_WarnMsg();
            Construct_ErrorMsg();
            Construct_DataSrcActSize();
            Construct_DataSrcMaxSize();
            Construct_DataSrcCapacity();
            Construct_DataSrcOverruns();
            Construct_MailsSent();
            Construct_FTPFilesSent();
            }
        catch (...) {}
    }
public:
    ~CTypeLoggerStates(void)
    {
    }
protected:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Initialize_ConfigOK();
            Initialize_Enabled();
            Initialize_Destination();
            Initialize_StartTriggerActive();
            Initialize_StopTriggerActive();
            Initialize_LoggingActive();
            Initialize_TriggerValue();
            Initialize_FileProgress();
            Initialize_FilesStored();
            Initialize_TriggerProgress();
            Initialize_Events();
            Initialize_InfoMsg();
            Initialize_WarnMsg();
            Initialize_ErrorMsg();
            Initialize_DataSrcActSize();
            Initialize_DataSrcMaxSize();
            Initialize_DataSrcCapacity();
            Initialize_DataSrcOverruns();
            Initialize_MailsSent();
            Initialize_FTPFilesSent();
        }
        catch (...) {}
    }
//------------------------------------------------------------------------
// Item ConfigOK (Type: "bool")
protected:
    void Construct_ConfigOK(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ConfigOK()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_ConfigOK()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ConfigOK(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConfigOK()))
                {
                    Construct_ConfigOK();
                }
                if ((*Value()).hasMember(ItemName_ConfigOK()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_ConfigOK()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ConfigOK(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_ConfigOK()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_ConfigOK(void) const
        {
            bool GetValue = (*Value())[ItemName_ConfigOK()];
            return (bool)GetValue;
        }
        bool Get_ConfigOK(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ConfigOK()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_ConfigOK()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Enabled (Type: "bool")
protected:
    void Construct_Enabled(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Enabled()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Enabled()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Enabled(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Enabled()))
                {
                    Construct_Enabled();
                }
                if ((*Value()).hasMember(ItemName_Enabled()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Enabled()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Enabled(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Enabled()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Enabled(void) const
        {
            bool GetValue = (*Value())[ItemName_Enabled()];
            return (bool)GetValue;
        }
        bool Get_Enabled(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Enabled()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Enabled()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Destination (Type: "std::string")
    protected:
        void Construct_Destination(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Destination()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Destination()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Destination(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Destination()))
                {
                    Construct_Destination();
                }
                if ((*Value()).hasMember(ItemName_Destination()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Destination()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Destination(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Destination()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Destination(void) const
        {
            return (*Value())[ItemName_Destination()];
        }
        bool Get_Destination(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Destination()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Destination()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item StartTriggerActive (Type: "bool")
protected:
    void Construct_StartTriggerActive(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_StartTriggerActive()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_StartTriggerActive()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_StartTriggerActive(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StartTriggerActive()))
                {
                    Construct_StartTriggerActive();
                }
                if ((*Value()).hasMember(ItemName_StartTriggerActive()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_StartTriggerActive()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StartTriggerActive(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_StartTriggerActive()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_StartTriggerActive(void) const
        {
            bool GetValue = (*Value())[ItemName_StartTriggerActive()];
            return (bool)GetValue;
        }
        bool Get_StartTriggerActive(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_StartTriggerActive()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_StartTriggerActive()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item StopTriggerActive (Type: "bool")
protected:
    void Construct_StopTriggerActive(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_StopTriggerActive()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_StopTriggerActive()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_StopTriggerActive(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StopTriggerActive()))
                {
                    Construct_StopTriggerActive();
                }
                if ((*Value()).hasMember(ItemName_StopTriggerActive()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_StopTriggerActive()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StopTriggerActive(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_StopTriggerActive()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_StopTriggerActive(void) const
        {
            bool GetValue = (*Value())[ItemName_StopTriggerActive()];
            return (bool)GetValue;
        }
        bool Get_StopTriggerActive(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_StopTriggerActive()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_StopTriggerActive()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item LoggingActive (Type: "bool")
protected:
    void Construct_LoggingActive(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_LoggingActive()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_LoggingActive()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_LoggingActive(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LoggingActive()))
                {
                    Construct_LoggingActive();
                }
                if ((*Value()).hasMember(ItemName_LoggingActive()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_LoggingActive()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LoggingActive(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_LoggingActive()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_LoggingActive(void) const
        {
            bool GetValue = (*Value())[ItemName_LoggingActive()];
            return (bool)GetValue;
        }
        bool Get_LoggingActive(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LoggingActive()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_LoggingActive()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item TriggerValue (Type: "double")
protected:
    void Construct_TriggerValue(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_TriggerValue()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_TriggerValue()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_TriggerValue(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TriggerValue()))
                {
                    Construct_TriggerValue();
                }
                if ((*Value()).hasMember(ItemName_TriggerValue()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_TriggerValue()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TriggerValue(double SetValue)
        {
            try
            {
                (*Value())[ItemName_TriggerValue()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_TriggerValue(void) const
        {
            double GetValue = (*Value())[ItemName_TriggerValue()];
            return (double)GetValue;
        }
        bool Get_TriggerValue(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TriggerValue()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_TriggerValue()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item FileProgress (Type: "double")
protected:
    void Construct_FileProgress(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_FileProgress()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_FileProgress()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_FileProgress(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FileProgress()))
                {
                    Construct_FileProgress();
                }
                if ((*Value()).hasMember(ItemName_FileProgress()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_FileProgress()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FileProgress(double SetValue)
        {
            try
            {
                (*Value())[ItemName_FileProgress()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_FileProgress(void) const
        {
            double GetValue = (*Value())[ItemName_FileProgress()];
            return (double)GetValue;
        }
        bool Get_FileProgress(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FileProgress()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_FileProgress()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item FilesStored (Type: "int32_t")
protected:
    void Construct_FilesStored(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_FilesStored()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_FilesStored()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_FilesStored(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FilesStored()))
                {
                    Construct_FilesStored();
                }
                if ((*Value()).hasMember(ItemName_FilesStored()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_FilesStored()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FilesStored(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_FilesStored()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_FilesStored(void) const
        {
            int32_t GetValue = (*Value())[ItemName_FilesStored()];
            return (int32_t)GetValue;
        }
        bool Get_FilesStored(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FilesStored()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_FilesStored()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item TriggerProgress (Type: "double")
protected:
    void Construct_TriggerProgress(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_TriggerProgress()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_TriggerProgress()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_TriggerProgress(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TriggerProgress()))
                {
                    Construct_TriggerProgress();
                }
                if ((*Value()).hasMember(ItemName_TriggerProgress()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_TriggerProgress()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TriggerProgress(double SetValue)
        {
            try
            {
                (*Value())[ItemName_TriggerProgress()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_TriggerProgress(void) const
        {
            double GetValue = (*Value())[ItemName_TriggerProgress()];
            return (double)GetValue;
        }
        bool Get_TriggerProgress(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TriggerProgress()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_TriggerProgress()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Events (Type: "GInsXmlRpcStdAPI::CGIns_Info_Event[0]")
    protected:
        void Construct_Events(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Events()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_Event InitValue;
                    (*Value())[ItemName_Events()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Events(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Events()))
                {
                    Construct_Events();
                }
                if ((*Value()).hasMember(ItemName_Events()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_Event InitValue;
                    (*Value())[ItemName_Events()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Events(int NewSize)
        {
            try
            {
                GInsXmlRpcStdAPI::CGIns_Info_Event InitValue;
                (*Value())[ItemName_Events()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Events(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Events()))
                {
                    return (*Value())[ItemName_Events()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Events(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Events()))
                {
                    (*Value())[ItemName_Events()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Events(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Info_Event SetValue)
        {
            try
            {
                (*Value())[ItemName_Events()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Events(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Events()))
                {
                    (*Value())[ItemName_Events()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Events(int ArrayIndex, const GInsXmlRpcStdAPI::CGIns_Info_Event& SetValue)
        {
            try
            {
                (*Value())[ItemName_Events()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Events()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_Event Get_Events(int ArrayIndex) const
        {
            return (*Value())[ItemName_Events()][ArrayIndex];
        }
        bool Get_Events(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Info_Event& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Events()))
                {
                    if (((*Value())[ItemName_Events()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Events()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item InfoMsg (Type: "std::string[0]")
    protected:
        void Construct_InfoMsg(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_InfoMsg()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_InfoMsg()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_InfoMsg(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_InfoMsg()))
                {
                    Construct_InfoMsg();
                }
                if ((*Value()).hasMember(ItemName_InfoMsg()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_InfoMsg()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_InfoMsg(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_InfoMsg()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_InfoMsg(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_InfoMsg()))
                {
                    return (*Value())[ItemName_InfoMsg()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_InfoMsg(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_InfoMsg()))
                {
                    (*Value())[ItemName_InfoMsg()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_InfoMsg(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_InfoMsg()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_InfoMsg(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_InfoMsg()))
                {
                    (*Value())[ItemName_InfoMsg()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_InfoMsg(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_InfoMsg())
                {
                    SetSize_InfoMsg(ArrayIndex + 1);
                }
                (*Value())[ItemName_InfoMsg()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_InfoMsg(int ArrayIndex) const
        {
            return (*Value())[ItemName_InfoMsg()][ArrayIndex];
        }
        bool Get_InfoMsg(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_InfoMsg()))
                {
                    if (((*Value())[ItemName_InfoMsg()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_InfoMsg()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item WarnMsg (Type: "std::string[0]")
    protected:
        void Construct_WarnMsg(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_WarnMsg()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_WarnMsg()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_WarnMsg(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_WarnMsg()))
                {
                    Construct_WarnMsg();
                }
                if ((*Value()).hasMember(ItemName_WarnMsg()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_WarnMsg()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_WarnMsg(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_WarnMsg()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_WarnMsg(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_WarnMsg()))
                {
                    return (*Value())[ItemName_WarnMsg()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_WarnMsg(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_WarnMsg()))
                {
                    (*Value())[ItemName_WarnMsg()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_WarnMsg(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_WarnMsg()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_WarnMsg(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_WarnMsg()))
                {
                    (*Value())[ItemName_WarnMsg()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_WarnMsg(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_WarnMsg())
                {
                    SetSize_WarnMsg(ArrayIndex + 1);
                }
                (*Value())[ItemName_WarnMsg()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_WarnMsg(int ArrayIndex) const
        {
            return (*Value())[ItemName_WarnMsg()][ArrayIndex];
        }
        bool Get_WarnMsg(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_WarnMsg()))
                {
                    if (((*Value())[ItemName_WarnMsg()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_WarnMsg()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ErrorMsg (Type: "std::string[0]")
    protected:
        void Construct_ErrorMsg(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ErrorMsg()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ErrorMsg()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_ErrorMsg(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ErrorMsg()))
                {
                    Construct_ErrorMsg();
                }
                if ((*Value()).hasMember(ItemName_ErrorMsg()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ErrorMsg()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_ErrorMsg(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_ErrorMsg()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_ErrorMsg(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ErrorMsg()))
                {
                    return (*Value())[ItemName_ErrorMsg()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_ErrorMsg(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ErrorMsg()))
                {
                    (*Value())[ItemName_ErrorMsg()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_ErrorMsg(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_ErrorMsg()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_ErrorMsg(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ErrorMsg()))
                {
                    (*Value())[ItemName_ErrorMsg()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ErrorMsg(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_ErrorMsg())
                {
                    SetSize_ErrorMsg(ArrayIndex + 1);
                }
                (*Value())[ItemName_ErrorMsg()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ErrorMsg(int ArrayIndex) const
        {
            return (*Value())[ItemName_ErrorMsg()][ArrayIndex];
        }
        bool Get_ErrorMsg(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ErrorMsg()))
                {
                    if (((*Value())[ItemName_ErrorMsg()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_ErrorMsg()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item DataSrcActSize (Type: "int32_t")
protected:
    void Construct_DataSrcActSize(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_DataSrcActSize()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_DataSrcActSize()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_DataSrcActSize(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataSrcActSize()))
                {
                    Construct_DataSrcActSize();
                }
                if ((*Value()).hasMember(ItemName_DataSrcActSize()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_DataSrcActSize()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DataSrcActSize(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_DataSrcActSize()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_DataSrcActSize(void) const
        {
            int32_t GetValue = (*Value())[ItemName_DataSrcActSize()];
            return (int32_t)GetValue;
        }
        bool Get_DataSrcActSize(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DataSrcActSize()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_DataSrcActSize()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item DataSrcMaxSize (Type: "int32_t")
protected:
    void Construct_DataSrcMaxSize(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_DataSrcMaxSize()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_DataSrcMaxSize()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_DataSrcMaxSize(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataSrcMaxSize()))
                {
                    Construct_DataSrcMaxSize();
                }
                if ((*Value()).hasMember(ItemName_DataSrcMaxSize()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_DataSrcMaxSize()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DataSrcMaxSize(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_DataSrcMaxSize()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_DataSrcMaxSize(void) const
        {
            int32_t GetValue = (*Value())[ItemName_DataSrcMaxSize()];
            return (int32_t)GetValue;
        }
        bool Get_DataSrcMaxSize(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DataSrcMaxSize()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_DataSrcMaxSize()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item DataSrcCapacity (Type: "int32_t")
protected:
    void Construct_DataSrcCapacity(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_DataSrcCapacity()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_DataSrcCapacity()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_DataSrcCapacity(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataSrcCapacity()))
                {
                    Construct_DataSrcCapacity();
                }
                if ((*Value()).hasMember(ItemName_DataSrcCapacity()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_DataSrcCapacity()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DataSrcCapacity(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_DataSrcCapacity()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_DataSrcCapacity(void) const
        {
            int32_t GetValue = (*Value())[ItemName_DataSrcCapacity()];
            return (int32_t)GetValue;
        }
        bool Get_DataSrcCapacity(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DataSrcCapacity()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_DataSrcCapacity()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item DataSrcOverruns (Type: "int32_t")
protected:
    void Construct_DataSrcOverruns(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_DataSrcOverruns()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_DataSrcOverruns()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_DataSrcOverruns(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataSrcOverruns()))
                {
                    Construct_DataSrcOverruns();
                }
                if ((*Value()).hasMember(ItemName_DataSrcOverruns()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_DataSrcOverruns()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DataSrcOverruns(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_DataSrcOverruns()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_DataSrcOverruns(void) const
        {
            int32_t GetValue = (*Value())[ItemName_DataSrcOverruns()];
            return (int32_t)GetValue;
        }
        bool Get_DataSrcOverruns(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DataSrcOverruns()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_DataSrcOverruns()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item MailsSent (Type: "int32_t")
protected:
    void Construct_MailsSent(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MailsSent()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_MailsSent()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_MailsSent(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MailsSent()))
                {
                    Construct_MailsSent();
                }
                if ((*Value()).hasMember(ItemName_MailsSent()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_MailsSent()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MailsSent(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_MailsSent()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_MailsSent(void) const
        {
            int32_t GetValue = (*Value())[ItemName_MailsSent()];
            return (int32_t)GetValue;
        }
        bool Get_MailsSent(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MailsSent()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_MailsSent()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item FTPFilesSent (Type: "int32_t")
protected:
    void Construct_FTPFilesSent(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_FTPFilesSent()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_FTPFilesSent()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_FTPFilesSent(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FTPFilesSent()))
                {
                    Construct_FTPFilesSent();
                }
                if ((*Value()).hasMember(ItemName_FTPFilesSent()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_FTPFilesSent()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FTPFilesSent(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_FTPFilesSent()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_FTPFilesSent(void) const
        {
            int32_t GetValue = (*Value())[ItemName_FTPFilesSent()];
            return (int32_t)GetValue;
        }
        bool Get_FTPFilesSent(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FTPFilesSent()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_FTPFilesSent()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CTypeLoggerStates


//------------------------------------------------------------------------
// DataLoggerAPI::CTypeStorageInfo
//------------------------------------------------------------------------
class CTypeStorageInfo : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Name(void)
        {
            static std::string str("Name");
            return str;
        }
    public:
        static std::string const& ItemName_Path(void)
        {
            static std::string str("Path");
            return str;
        }
    public:
        static std::string const& ItemName_UUID(void)
        {
            static std::string str("UUID");
            return str;
        }
    public:
        static std::string const& ItemName_IsAvailable(void)
        {
            static std::string str("IsAvailable");
            return str;
        }
    public:
        static std::string const& ItemName_EjectRequested(void)
        {
            static std::string str("EjectRequested");
            return str;
        }
    public:
        static std::string const& ItemName_RemainingSize(void)
        {
            static std::string str("RemainingSize");
            return str;
        }
    public:
        static std::string const& ItemName_TotalSize(void)
        {
            static std::string str("TotalSize");
            return str;
        }
    public:
        static std::string const& ItemName_RequestedSize(void)
        {
            static std::string str("RequestedSize");
            return str;
        }
    public:
        static std::string const& ItemName_DataFileCount(void)
        {
            static std::string str("DataFileCount");
            return str;
        }
    public:
        static std::string const& ItemName_Load(void)
        {
            static std::string str("Load");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("TypeStorageInfo");
        return str;
    }
public:
    CTypeStorageInfo(void)
    {
        try
        {
            Construct_Name();
            Construct_Path();
            Construct_UUID();
            Construct_IsAvailable();
            Construct_EjectRequested();
            Construct_RemainingSize();
            Construct_TotalSize();
            Construct_RequestedSize();
            Construct_DataFileCount();
            Construct_Load();
            }
        catch (...) {}
    }
    CTypeStorageInfo(const CTypeStorageInfo& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        }
    CTypeStorageInfo(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if ((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct)
            {
                (*this).invalidate();
            }
            Construct_Name();
            Construct_Path();
            Construct_UUID();
            Construct_IsAvailable();
            Construct_EjectRequested();
            Construct_RemainingSize();
            Construct_TotalSize();
            Construct_RequestedSize();
            Construct_DataFileCount();
            Construct_Load();
            }
        catch (...) {}
    }
public:
    ~CTypeStorageInfo(void)
    {
    }
protected:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Initialize_Name();
            Initialize_Path();
            Initialize_UUID();
            Initialize_IsAvailable();
            Initialize_EjectRequested();
            Initialize_RemainingSize();
            Initialize_TotalSize();
            Initialize_RequestedSize();
            Initialize_DataFileCount();
            Initialize_Load();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item Name (Type: "std::string")
    protected:
        void Construct_Name(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Name()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Name()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Name(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Name()))
                {
                    Construct_Name();
                }
                if ((*Value()).hasMember(ItemName_Name()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Name()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Name(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Name()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Name(void) const
        {
            return (*Value())[ItemName_Name()];
        }
        bool Get_Name(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Name()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Name()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Path (Type: "std::string")
    protected:
        void Construct_Path(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Path()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Path()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Path(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Path()))
                {
                    Construct_Path();
                }
                if ((*Value()).hasMember(ItemName_Path()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Path()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Path(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Path()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Path(void) const
        {
            return (*Value())[ItemName_Path()];
        }
        bool Get_Path(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Path()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Path()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item UUID (Type: "std::string")
    protected:
        void Construct_UUID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UUID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_UUID()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_UUID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UUID()))
                {
                    Construct_UUID();
                }
                if ((*Value()).hasMember(ItemName_UUID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_UUID()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_UUID(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_UUID()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_UUID(void) const
        {
            return (*Value())[ItemName_UUID()];
        }
        bool Get_UUID(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_UUID()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_UUID()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item IsAvailable (Type: "int32_t")
protected:
    void Construct_IsAvailable(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_IsAvailable()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_IsAvailable()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_IsAvailable(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IsAvailable()))
                {
                    Construct_IsAvailable();
                }
                if ((*Value()).hasMember(ItemName_IsAvailable()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_IsAvailable()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IsAvailable(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_IsAvailable()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_IsAvailable(void) const
        {
            int32_t GetValue = (*Value())[ItemName_IsAvailable()];
            return (int32_t)GetValue;
        }
        bool Get_IsAvailable(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IsAvailable()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_IsAvailable()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item EjectRequested (Type: "int32_t")
protected:
    void Construct_EjectRequested(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_EjectRequested()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_EjectRequested()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_EjectRequested(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_EjectRequested()))
                {
                    Construct_EjectRequested();
                }
                if ((*Value()).hasMember(ItemName_EjectRequested()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_EjectRequested()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_EjectRequested(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_EjectRequested()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_EjectRequested(void) const
        {
            int32_t GetValue = (*Value())[ItemName_EjectRequested()];
            return (int32_t)GetValue;
        }
        bool Get_EjectRequested(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_EjectRequested()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_EjectRequested()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item RemainingSize (Type: "int64_t")
protected:
    void Construct_RemainingSize(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_RemainingSize()))
            {
                int64_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_RemainingSize()] = (int64_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_RemainingSize(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RemainingSize()))
                {
                    Construct_RemainingSize();
                }
                if ((*Value()).hasMember(ItemName_RemainingSize()))
                {
                    int64_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_RemainingSize()] = (int64_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RemainingSize(int64_t SetValue)
        {
            try
            {
                (*Value())[ItemName_RemainingSize()] = (int64_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int64_t Get_RemainingSize(void) const
        {
            int64_t GetValue = (*Value())[ItemName_RemainingSize()];
            return (int64_t)GetValue;
        }
        bool Get_RemainingSize(int64_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RemainingSize()]).valid())
                {
                    GetValue = (int64_t)((int64_t)((*Value())[ItemName_RemainingSize()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item TotalSize (Type: "int64_t")
protected:
    void Construct_TotalSize(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_TotalSize()))
            {
                int64_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_TotalSize()] = (int64_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_TotalSize(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TotalSize()))
                {
                    Construct_TotalSize();
                }
                if ((*Value()).hasMember(ItemName_TotalSize()))
                {
                    int64_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_TotalSize()] = (int64_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TotalSize(int64_t SetValue)
        {
            try
            {
                (*Value())[ItemName_TotalSize()] = (int64_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int64_t Get_TotalSize(void) const
        {
            int64_t GetValue = (*Value())[ItemName_TotalSize()];
            return (int64_t)GetValue;
        }
        bool Get_TotalSize(int64_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TotalSize()]).valid())
                {
                    GetValue = (int64_t)((int64_t)((*Value())[ItemName_TotalSize()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item RequestedSize (Type: "int64_t")
protected:
    void Construct_RequestedSize(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_RequestedSize()))
            {
                int64_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_RequestedSize()] = (int64_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_RequestedSize(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RequestedSize()))
                {
                    Construct_RequestedSize();
                }
                if ((*Value()).hasMember(ItemName_RequestedSize()))
                {
                    int64_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_RequestedSize()] = (int64_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RequestedSize(int64_t SetValue)
        {
            try
            {
                (*Value())[ItemName_RequestedSize()] = (int64_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int64_t Get_RequestedSize(void) const
        {
            int64_t GetValue = (*Value())[ItemName_RequestedSize()];
            return (int64_t)GetValue;
        }
        bool Get_RequestedSize(int64_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RequestedSize()]).valid())
                {
                    GetValue = (int64_t)((int64_t)((*Value())[ItemName_RequestedSize()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item DataFileCount (Type: "int32_t")
protected:
    void Construct_DataFileCount(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_DataFileCount()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_DataFileCount()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_DataFileCount(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataFileCount()))
                {
                    Construct_DataFileCount();
                }
                if ((*Value()).hasMember(ItemName_DataFileCount()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_DataFileCount()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DataFileCount(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_DataFileCount()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_DataFileCount(void) const
        {
            int32_t GetValue = (*Value())[ItemName_DataFileCount()];
            return (int32_t)GetValue;
        }
        bool Get_DataFileCount(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DataFileCount()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_DataFileCount()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Load (Type: "double")
protected:
    void Construct_Load(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Load()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_Load()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Load(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Load()))
                {
                    Construct_Load();
                }
                if ((*Value()).hasMember(ItemName_Load()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_Load()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Load(double SetValue)
        {
            try
            {
                (*Value())[ItemName_Load()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_Load(void) const
        {
            double GetValue = (*Value())[ItemName_Load()];
            return (double)GetValue;
        }
        bool Get_Load(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Load()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_Load()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CTypeStorageInfo


//------------------------------------------------------------------------
// DataLoggerAPI::GetStates::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_GETSTATES)
namespace GetStates
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Logger(void)
    {
        static std::string str("Logger");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.GetStates");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Logger();
        }
        catch (...) {}
    }
public:
    CParams(const CParams& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CParams(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_Logger();
        }
        catch (...) {}
    }
public:
    ~CParams(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_Logger();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::GetStates");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item Logger (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Logger(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Logger()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Logger()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Logger(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Logger()))
                {
                    Construct_Logger();
                }
                if ((*Value()).hasMember(ItemName_Logger()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Logger()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Logger(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Logger()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Logger(void) const
        {
            return (*Value())[ItemName_Logger()];
        }
        bool Get_Logger(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Logger()]).valid())
                {
                    GetValue = (*Value())[ItemName_Logger()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GetStates
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_GETSTATES)


//------------------------------------------------------------------------
// DataLoggerAPI::Enable::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_ENABLE)
namespace Enable
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Logger(void)
    {
        static std::string str("Logger");
        return str;
    }
public:
    static std::string const& ItemName_Enabled(void)
    {
        static std::string str("Enabled");
        return str;
    }
public:
    static std::string const& ItemName_TraceLevel(void)
    {
        static std::string str("TraceLevel");
        return str;
    }
public:
    static std::string const& ItemName_MeasurementName(void)
    {
        static std::string str("MeasurementName");
        return str;
    }
public:
    static std::string const& ItemName_MetaData(void)
    {
        static std::string str("MetaData");
        return str;
    }
public:
    static std::string const& ItemName_StartTimeEpochMs(void)
    {
        static std::string str("StartTimeEpochMs");
        return str;
    }
public:
    static std::string const& ItemName_EndTimeEpochMs(void)
    {
        static std::string str("EndTimeEpochMs");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.Enable");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Logger();
            Construct_Enabled();
            Construct_TraceLevel();
            Construct_MeasurementName();
            Construct_MetaData();
            Construct_StartTimeEpochMs();
            Construct_EndTimeEpochMs();
        }
        catch (...) {}
    }
public:
    CParams(const CParams& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CParams(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_Logger();
            Construct_Enabled();
            Construct_TraceLevel();
            Construct_MeasurementName();
            Construct_MetaData();
            Construct_StartTimeEpochMs();
            Construct_EndTimeEpochMs();
        }
        catch (...) {}
    }
public:
    ~CParams(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_Logger();
            Initialize_Enabled();
            Initialize_TraceLevel();
            Initialize_MeasurementName();
            Initialize_MetaData();
            Initialize_StartTimeEpochMs();
            Initialize_EndTimeEpochMs();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::Enable");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item Logger (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Logger(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Logger()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Logger()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Logger(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Logger()))
                {
                    Construct_Logger();
                }
                if ((*Value()).hasMember(ItemName_Logger()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Logger()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Logger(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Logger()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Logger(void) const
        {
            return (*Value())[ItemName_Logger()];
        }
        bool Get_Logger(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Logger()]).valid())
                {
                    GetValue = (*Value())[ItemName_Logger()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Enabled (Type: "bool")
protected:
    void Construct_Enabled(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Enabled()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Enabled()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Enabled(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Enabled()))
                {
                    Construct_Enabled();
                }
                if ((*Value()).hasMember(ItemName_Enabled()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Enabled()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Enabled(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Enabled()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Enabled(void) const
        {
            bool GetValue = (*Value())[ItemName_Enabled()];
            return (bool)GetValue;
        }
        bool Get_Enabled(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Enabled()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Enabled()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item TraceLevel (Type: "enum TypeTraceLevel")
    protected:
        void Construct_TraceLevel(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TraceLevel()))
                {
                    enum TypeTraceLevel InitValue;
                    InitValue = Debug;
                    (*Value())[ItemName_TraceLevel()] = (int)InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_TraceLevel(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TraceLevel()))
                {
                    Construct_TraceLevel();
                }
                if ((*Value()).hasMember(ItemName_TraceLevel()))
                {
                    enum TypeTraceLevel InitValue;
                    InitValue = Debug;
                    (*Value())[ItemName_TraceLevel()] = (int)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TraceLevel(enum TypeTraceLevel SetValue)
        {
            try
            {
                (*Value())[ItemName_TraceLevel()] = (int)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        enum TypeTraceLevel Get_TraceLevel(void) const
        {
            int GetValue = (*Value())[ItemName_TraceLevel()];
            return (enum TypeTraceLevel)GetValue;
        }
        bool Get_TraceLevel(enum TypeTraceLevel& GetValue) const
        {
            try
            {
                if ((*Value())[ItemName_TraceLevel()].valid())
                {
                    GetValue = (enum TypeTraceLevel)((int)((*Value())[ItemName_TraceLevel()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item MeasurementName (Type: "std::string")
    protected:
        void Construct_MeasurementName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MeasurementName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MeasurementName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_MeasurementName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MeasurementName()))
                {
                    Construct_MeasurementName();
                }
                if ((*Value()).hasMember(ItemName_MeasurementName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MeasurementName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MeasurementName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_MeasurementName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_MeasurementName(void) const
        {
            return (*Value())[ItemName_MeasurementName()];
        }
        bool Get_MeasurementName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MeasurementName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_MeasurementName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item MetaData (Type: "GInsXmlRpc::XmlRpcValue")
    protected:
        void Construct_MetaData(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MetaData()))
                {
                    GInsXmlRpc::XmlRpcValue InitValue = (int)0;
                    (*Value())[ItemName_MetaData()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_MetaData(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MetaData()))
                {
                    Construct_MetaData();
                }
                if ((*Value()).hasMember(ItemName_MetaData()))
                {
                    GInsXmlRpc::XmlRpcValue InitValue = (int)0;
                    (*Value())[ItemName_MetaData()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MetaData(const GInsXmlRpc::XmlRpcValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_MetaData()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpc::XmlRpcValue Get_MetaData(void) const
        {
            return (*Value())[ItemName_MetaData()];
        }
        bool Get_MetaData(GInsXmlRpc::XmlRpcValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MetaData()]).valid())
                {
                    GetValue = (*Value())[ItemName_MetaData()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item StartTimeEpochMs (Type: "GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer")
    protected:
        void Construct_StartTimeEpochMs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StartTimeEpochMs()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer InitValue;
                    (*Value())[ItemName_StartTimeEpochMs()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_StartTimeEpochMs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StartTimeEpochMs()))
                {
                    Construct_StartTimeEpochMs();
                }
                if ((*Value()).hasMember(ItemName_StartTimeEpochMs()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer InitValue;
                    (*Value())[ItemName_StartTimeEpochMs()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StartTimeEpochMs(const GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer& SetValue)
        {
            try
            {
                (*Value())[ItemName_StartTimeEpochMs()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer Get_StartTimeEpochMs(void) const
        {
            return (*Value())[ItemName_StartTimeEpochMs()];
        }
        bool Get_StartTimeEpochMs(GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_StartTimeEpochMs()]).valid())
                {
                    GetValue = (*Value())[ItemName_StartTimeEpochMs()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item EndTimeEpochMs (Type: "GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer")
    protected:
        void Construct_EndTimeEpochMs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_EndTimeEpochMs()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer InitValue;
                    (*Value())[ItemName_EndTimeEpochMs()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_EndTimeEpochMs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_EndTimeEpochMs()))
                {
                    Construct_EndTimeEpochMs();
                }
                if ((*Value()).hasMember(ItemName_EndTimeEpochMs()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer InitValue;
                    (*Value())[ItemName_EndTimeEpochMs()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_EndTimeEpochMs(const GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer& SetValue)
        {
            try
            {
                (*Value())[ItemName_EndTimeEpochMs()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer Get_EndTimeEpochMs(void) const
        {
            return (*Value())[ItemName_EndTimeEpochMs()];
        }
        bool Get_EndTimeEpochMs(GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_EndTimeEpochMs()]).valid())
                {
                    GetValue = (*Value())[ItemName_EndTimeEpochMs()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace Enable
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_ENABLE)


//------------------------------------------------------------------------
// DataLoggerAPI::ListStorages::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_LISTSTORAGES)
namespace ListStorages
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ReadMountPoints(void)
    {
        static std::string str("ReadMountPoints");
        return str;
    }
public:
    static std::string const& ItemName_ReadPartitions(void)
    {
        static std::string str("ReadPartitions");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.ListStorages");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReadMountPoints();
            Construct_ReadPartitions();
        }
        catch (...) {}
    }
public:
    CParams(const CParams& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CParams(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_ReadMountPoints();
            Construct_ReadPartitions();
        }
        catch (...) {}
    }
public:
    ~CParams(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_ReadMountPoints();
            Initialize_ReadPartitions();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::ListStorages");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
//------------------------------------------------------------------------
// Item ReadMountPoints (Type: "bool")
protected:
    void Construct_ReadMountPoints(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ReadMountPoints()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_ReadMountPoints()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ReadMountPoints(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReadMountPoints()))
                {
                    Construct_ReadMountPoints();
                }
                if ((*Value()).hasMember(ItemName_ReadMountPoints()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_ReadMountPoints()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReadMountPoints(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_ReadMountPoints()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_ReadMountPoints(void) const
        {
            bool GetValue = (*Value())[ItemName_ReadMountPoints()];
            return (bool)GetValue;
        }
        bool Get_ReadMountPoints(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReadMountPoints()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_ReadMountPoints()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item ReadPartitions (Type: "bool")
protected:
    void Construct_ReadPartitions(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ReadPartitions()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_ReadPartitions()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ReadPartitions(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReadPartitions()))
                {
                    Construct_ReadPartitions();
                }
                if ((*Value()).hasMember(ItemName_ReadPartitions()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_ReadPartitions()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReadPartitions(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_ReadPartitions()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_ReadPartitions(void) const
        {
            bool GetValue = (*Value())[ItemName_ReadPartitions()];
            return (bool)GetValue;
        }
        bool Get_ReadPartitions(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReadPartitions()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_ReadPartitions()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace ListStorages
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_LISTSTORAGES)


//------------------------------------------------------------------------
// DataLoggerAPI::AddStorage::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_ADDSTORAGE)
namespace AddStorage
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Name(void)
    {
        static std::string str("Name");
        return str;
    }
public:
    static std::string const& ItemName_StoragePath(void)
    {
        static std::string str("StoragePath");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.AddStorage");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Name();
            Construct_StoragePath();
        }
        catch (...) {}
    }
public:
    CParams(const CParams& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CParams(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_Name();
            Construct_StoragePath();
        }
        catch (...) {}
    }
public:
    ~CParams(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_Name();
            Initialize_StoragePath();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::AddStorage");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item Name (Type: "std::string")
    protected:
        void Construct_Name(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Name()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Name()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Name(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Name()))
                {
                    Construct_Name();
                }
                if ((*Value()).hasMember(ItemName_Name()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Name()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Name(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Name()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Name(void) const
        {
            return (*Value())[ItemName_Name()];
        }
        bool Get_Name(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Name()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Name()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item StoragePath (Type: "std::string")
    protected:
        void Construct_StoragePath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StoragePath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_StoragePath()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_StoragePath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StoragePath()))
                {
                    Construct_StoragePath();
                }
                if ((*Value()).hasMember(ItemName_StoragePath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_StoragePath()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StoragePath(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_StoragePath()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_StoragePath(void) const
        {
            return (*Value())[ItemName_StoragePath()];
        }
        bool Get_StoragePath(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_StoragePath()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_StoragePath()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace AddStorage
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_ADDSTORAGE)


//------------------------------------------------------------------------
// DataLoggerAPI::AddDataFiles::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_ADDDATAFILES)
namespace AddDataFiles
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Storage(void)
    {
        static std::string str("Storage");
        return str;
    }
public:
    static std::string const& ItemName_DataFilePath(void)
    {
        static std::string str("DataFilePath");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.AddDataFiles");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Storage();
            Construct_DataFilePath();
        }
        catch (...) {}
    }
public:
    CParams(const CParams& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CParams(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_Storage();
            Construct_DataFilePath();
        }
        catch (...) {}
    }
public:
    ~CParams(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_Storage();
            Initialize_DataFilePath();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::AddDataFiles");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item Storage (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Storage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Storage()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Storage()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Storage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Storage()))
                {
                    Construct_Storage();
                }
                if ((*Value()).hasMember(ItemName_Storage()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Storage()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Storage(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Storage()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Storage(void) const
        {
            return (*Value())[ItemName_Storage()];
        }
        bool Get_Storage(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Storage()]).valid())
                {
                    GetValue = (*Value())[ItemName_Storage()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item DataFilePath (Type: "std::string")
    protected:
        void Construct_DataFilePath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataFilePath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DataFilePath()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DataFilePath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataFilePath()))
                {
                    Construct_DataFilePath();
                }
                if ((*Value()).hasMember(ItemName_DataFilePath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DataFilePath()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DataFilePath(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_DataFilePath()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DataFilePath(void) const
        {
            return (*Value())[ItemName_DataFilePath()];
        }
        bool Get_DataFilePath(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DataFilePath()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DataFilePath()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace AddDataFiles
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_ADDDATAFILES)


//------------------------------------------------------------------------
// DataLoggerAPI::GetStorageInfo::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_GETSTORAGEINFO)
namespace GetStorageInfo
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Storage(void)
    {
        static std::string str("Storage");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.GetStorageInfo");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Storage();
        }
        catch (...) {}
    }
public:
    CParams(const CParams& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CParams(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_Storage();
        }
        catch (...) {}
    }
public:
    ~CParams(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_Storage();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::GetStorageInfo");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item Storage (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Storage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Storage()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Storage()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Storage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Storage()))
                {
                    Construct_Storage();
                }
                if ((*Value()).hasMember(ItemName_Storage()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Storage()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Storage(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Storage()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Storage(void) const
        {
            return (*Value())[ItemName_Storage()];
        }
        bool Get_Storage(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Storage()]).valid())
                {
                    GetValue = (*Value())[ItemName_Storage()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GetStorageInfo
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_GETSTORAGEINFO)


//------------------------------------------------------------------------
// DataLoggerAPI::ListStorageFiles::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_LISTSTORAGEFILES)
namespace ListStorageFiles
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Storage(void)
    {
        static std::string str("Storage");
        return str;
    }
public:
    static std::string const& ItemName_SNR(void)
    {
        static std::string str("SNR");
        return str;
    }
public:
    static std::string const& ItemName_LoggerName(void)
    {
        static std::string str("LoggerName");
        return str;
    }
public:
    static std::string const& ItemName_SubPath(void)
    {
        static std::string str("SubPath");
        return str;
    }
public:
    static std::string const& ItemName_Variables(void)
    {
        static std::string str("Variables");
        return str;
    }
public:
    static std::string const& ItemName_Oldest(void)
    {
        static std::string str("Oldest");
        return str;
    }
public:
    static std::string const& ItemName_RangeOnly(void)
    {
        static std::string str("RangeOnly");
        return str;
    }
public:
    static std::string const& ItemName_Count(void)
    {
        static std::string str("Count");
        return str;
    }
public:
    static std::string const& ItemName_StartTime(void)
    {
        static std::string str("StartTime");
        return str;
    }
public:
    static std::string const& ItemName_EndTime(void)
    {
        static std::string str("EndTime");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.ListStorageFiles");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Storage();
            Construct_SNR();
            Construct_LoggerName();
            Construct_SubPath();
            Construct_Variables();
            Construct_Oldest();
            Construct_RangeOnly();
            Construct_Count();
            Construct_StartTime();
            Construct_EndTime();
        }
        catch (...) {}
    }
public:
    CParams(const CParams& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CParams(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_Storage();
            Construct_SNR();
            Construct_LoggerName();
            Construct_SubPath();
            Construct_Variables();
            Construct_Oldest();
            Construct_RangeOnly();
            Construct_Count();
            Construct_StartTime();
            Construct_EndTime();
        }
        catch (...) {}
    }
public:
    ~CParams(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_Storage();
            Initialize_SNR();
            Initialize_LoggerName();
            Initialize_SubPath();
            Initialize_Variables();
            Initialize_Oldest();
            Initialize_RangeOnly();
            Initialize_Count();
            Initialize_StartTime();
            Initialize_EndTime();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::ListStorageFiles");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item Storage (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Storage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Storage()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Storage()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Storage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Storage()))
                {
                    Construct_Storage();
                }
                if ((*Value()).hasMember(ItemName_Storage()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Storage()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Storage(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Storage()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Storage(void) const
        {
            return (*Value())[ItemName_Storage()];
        }
        bool Get_Storage(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Storage()]).valid())
                {
                    GetValue = (*Value())[ItemName_Storage()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item SNR (Type: "std::string")
    protected:
        void Construct_SNR(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SNR()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SNR()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SNR(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SNR()))
                {
                    Construct_SNR();
                }
                if ((*Value()).hasMember(ItemName_SNR()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SNR()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SNR(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_SNR()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_SNR(void) const
        {
            return (*Value())[ItemName_SNR()];
        }
        bool Get_SNR(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SNR()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_SNR()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item LoggerName (Type: "std::string")
    protected:
        void Construct_LoggerName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LoggerName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_LoggerName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_LoggerName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LoggerName()))
                {
                    Construct_LoggerName();
                }
                if ((*Value()).hasMember(ItemName_LoggerName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_LoggerName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LoggerName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_LoggerName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_LoggerName(void) const
        {
            return (*Value())[ItemName_LoggerName()];
        }
        bool Get_LoggerName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LoggerName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_LoggerName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item SubPath (Type: "std::string")
    protected:
        void Construct_SubPath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SubPath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SubPath()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SubPath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SubPath()))
                {
                    Construct_SubPath();
                }
                if ((*Value()).hasMember(ItemName_SubPath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SubPath()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SubPath(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_SubPath()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_SubPath(void) const
        {
            return (*Value())[ItemName_SubPath()];
        }
        bool Get_SubPath(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SubPath()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_SubPath()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Variables (Type: "std::string[0]")
    protected:
        void Construct_Variables(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Variables()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Variables()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Variables(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Variables()))
                {
                    Construct_Variables();
                }
                if ((*Value()).hasMember(ItemName_Variables()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Variables()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Variables(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_Variables()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Variables(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Variables()))
                {
                    return (*Value())[ItemName_Variables()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Variables(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Variables()))
                {
                    (*Value())[ItemName_Variables()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Variables(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_Variables()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Variables(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Variables()))
                {
                    (*Value())[ItemName_Variables()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Variables(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_Variables())
                {
                    SetSize_Variables(ArrayIndex + 1);
                }
                (*Value())[ItemName_Variables()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Variables(int ArrayIndex) const
        {
            return (*Value())[ItemName_Variables()][ArrayIndex];
        }
        bool Get_Variables(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Variables()))
                {
                    if (((*Value())[ItemName_Variables()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_Variables()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Oldest (Type: "bool")
protected:
    void Construct_Oldest(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Oldest()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Oldest()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Oldest(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Oldest()))
                {
                    Construct_Oldest();
                }
                if ((*Value()).hasMember(ItemName_Oldest()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Oldest()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Oldest(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Oldest()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Oldest(void) const
        {
            bool GetValue = (*Value())[ItemName_Oldest()];
            return (bool)GetValue;
        }
        bool Get_Oldest(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Oldest()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Oldest()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item RangeOnly (Type: "bool")
protected:
    void Construct_RangeOnly(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_RangeOnly()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_RangeOnly()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_RangeOnly(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RangeOnly()))
                {
                    Construct_RangeOnly();
                }
                if ((*Value()).hasMember(ItemName_RangeOnly()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_RangeOnly()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RangeOnly(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_RangeOnly()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_RangeOnly(void) const
        {
            bool GetValue = (*Value())[ItemName_RangeOnly()];
            return (bool)GetValue;
        }
        bool Get_RangeOnly(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RangeOnly()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_RangeOnly()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Count (Type: "int32_t")
protected:
    void Construct_Count(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Count()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Count()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Count(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Count()))
                {
                    Construct_Count();
                }
                if ((*Value()).hasMember(ItemName_Count()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Count()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Count(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Count()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Count(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Count()];
            return (int32_t)GetValue;
        }
        bool Get_Count(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Count()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Count()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item StartTime (Type: "double")
protected:
    void Construct_StartTime(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_StartTime()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_StartTime()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_StartTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StartTime()))
                {
                    Construct_StartTime();
                }
                if ((*Value()).hasMember(ItemName_StartTime()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_StartTime()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StartTime(double SetValue)
        {
            try
            {
                (*Value())[ItemName_StartTime()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_StartTime(void) const
        {
            double GetValue = (*Value())[ItemName_StartTime()];
            return (double)GetValue;
        }
        bool Get_StartTime(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_StartTime()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_StartTime()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item EndTime (Type: "double")
protected:
    void Construct_EndTime(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_EndTime()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_EndTime()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_EndTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_EndTime()))
                {
                    Construct_EndTime();
                }
                if ((*Value()).hasMember(ItemName_EndTime()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_EndTime()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_EndTime(double SetValue)
        {
            try
            {
                (*Value())[ItemName_EndTime()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_EndTime(void) const
        {
            double GetValue = (*Value())[ItemName_EndTime()];
            return (double)GetValue;
        }
        bool Get_EndTime(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_EndTime()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_EndTime()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace ListStorageFiles
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_LISTSTORAGEFILES)


//------------------------------------------------------------------------
// DataLoggerAPI::DeleteStorageFiles::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_DELETESTORAGEFILES)
namespace DeleteStorageFiles
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Storage(void)
    {
        static std::string str("Storage");
        return str;
    }
public:
    static std::string const& ItemName_SNR(void)
    {
        static std::string str("SNR");
        return str;
    }
public:
    static std::string const& ItemName_Oldest(void)
    {
        static std::string str("Oldest");
        return str;
    }
public:
    static std::string const& ItemName_Count(void)
    {
        static std::string str("Count");
        return str;
    }
public:
    static std::string const& ItemName_StartTime(void)
    {
        static std::string str("StartTime");
        return str;
    }
public:
    static std::string const& ItemName_EndTime(void)
    {
        static std::string str("EndTime");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.DeleteStorageFiles");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Storage();
            Construct_SNR();
            Construct_Oldest();
            Construct_Count();
            Construct_StartTime();
            Construct_EndTime();
        }
        catch (...) {}
    }
public:
    CParams(const CParams& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CParams(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_Storage();
            Construct_SNR();
            Construct_Oldest();
            Construct_Count();
            Construct_StartTime();
            Construct_EndTime();
        }
        catch (...) {}
    }
public:
    ~CParams(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_Storage();
            Initialize_SNR();
            Initialize_Oldest();
            Initialize_Count();
            Initialize_StartTime();
            Initialize_EndTime();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::DeleteStorageFiles");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item Storage (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Storage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Storage()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Storage()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Storage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Storage()))
                {
                    Construct_Storage();
                }
                if ((*Value()).hasMember(ItemName_Storage()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Storage()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Storage(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Storage()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Storage(void) const
        {
            return (*Value())[ItemName_Storage()];
        }
        bool Get_Storage(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Storage()]).valid())
                {
                    GetValue = (*Value())[ItemName_Storage()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item SNR (Type: "std::string")
    protected:
        void Construct_SNR(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SNR()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SNR()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SNR(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SNR()))
                {
                    Construct_SNR();
                }
                if ((*Value()).hasMember(ItemName_SNR()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SNR()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SNR(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_SNR()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_SNR(void) const
        {
            return (*Value())[ItemName_SNR()];
        }
        bool Get_SNR(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SNR()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_SNR()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Oldest (Type: "bool")
protected:
    void Construct_Oldest(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Oldest()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Oldest()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Oldest(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Oldest()))
                {
                    Construct_Oldest();
                }
                if ((*Value()).hasMember(ItemName_Oldest()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Oldest()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Oldest(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Oldest()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Oldest(void) const
        {
            bool GetValue = (*Value())[ItemName_Oldest()];
            return (bool)GetValue;
        }
        bool Get_Oldest(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Oldest()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Oldest()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Count (Type: "int32_t")
protected:
    void Construct_Count(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Count()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Count()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Count(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Count()))
                {
                    Construct_Count();
                }
                if ((*Value()).hasMember(ItemName_Count()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Count()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Count(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Count()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Count(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Count()];
            return (int32_t)GetValue;
        }
        bool Get_Count(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Count()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Count()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item StartTime (Type: "double")
protected:
    void Construct_StartTime(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_StartTime()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_StartTime()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_StartTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StartTime()))
                {
                    Construct_StartTime();
                }
                if ((*Value()).hasMember(ItemName_StartTime()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_StartTime()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StartTime(double SetValue)
        {
            try
            {
                (*Value())[ItemName_StartTime()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_StartTime(void) const
        {
            double GetValue = (*Value())[ItemName_StartTime()];
            return (double)GetValue;
        }
        bool Get_StartTime(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_StartTime()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_StartTime()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item EndTime (Type: "double")
protected:
    void Construct_EndTime(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_EndTime()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_EndTime()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_EndTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_EndTime()))
                {
                    Construct_EndTime();
                }
                if ((*Value()).hasMember(ItemName_EndTime()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_EndTime()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_EndTime(double SetValue)
        {
            try
            {
                (*Value())[ItemName_EndTime()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_EndTime(void) const
        {
            double GetValue = (*Value())[ItemName_EndTime()];
            return (double)GetValue;
        }
        bool Get_EndTime(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_EndTime()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_EndTime()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace DeleteStorageFiles
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_DELETESTORAGEFILES)


//------------------------------------------------------------------------
// DataLoggerAPI::EjectStorage::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_EJECTSTORAGE)
namespace EjectStorage
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Storage(void)
    {
        static std::string str("Storage");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.EjectStorage");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Storage();
        }
        catch (...) {}
    }
public:
    CParams(const CParams& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CParams(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_Storage();
        }
        catch (...) {}
    }
public:
    ~CParams(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_Storage();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::EjectStorage");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item Storage (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Storage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Storage()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Storage()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Storage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Storage()))
                {
                    Construct_Storage();
                }
                if ((*Value()).hasMember(ItemName_Storage()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Storage()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Storage(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Storage()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Storage(void) const
        {
            return (*Value())[ItemName_Storage()];
        }
        bool Get_Storage(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Storage()]).valid())
                {
                    GetValue = (*Value())[ItemName_Storage()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace EjectStorage
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_EJECTSTORAGE)


//------------------------------------------------------------------------
// DataLoggerAPI::SimulateTrigger::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_SIMULATETRIGGER)
namespace SimulateTrigger
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Logger(void)
    {
        static std::string str("Logger");
        return str;
    }
public:
    static std::string const& ItemName_StopTrigger(void)
    {
        static std::string str("StopTrigger");
        return str;
    }
public:
    static std::string const& ItemName_StartTrigger(void)
    {
        static std::string str("StartTrigger");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.SimulateTrigger");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Logger();
            Construct_StopTrigger();
            Construct_StartTrigger();
        }
        catch (...) {}
    }
public:
    CParams(const CParams& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CParams(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_Logger();
            Construct_StopTrigger();
            Construct_StartTrigger();
        }
        catch (...) {}
    }
public:
    ~CParams(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_Logger();
            Initialize_StopTrigger();
            Initialize_StartTrigger();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::SimulateTrigger");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item Logger (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Logger(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Logger()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Logger()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Logger(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Logger()))
                {
                    Construct_Logger();
                }
                if ((*Value()).hasMember(ItemName_Logger()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Logger()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Logger(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Logger()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Logger(void) const
        {
            return (*Value())[ItemName_Logger()];
        }
        bool Get_Logger(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Logger()]).valid())
                {
                    GetValue = (*Value())[ItemName_Logger()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item StopTrigger (Type: "bool")
protected:
    void Construct_StopTrigger(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_StopTrigger()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_StopTrigger()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_StopTrigger(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StopTrigger()))
                {
                    Construct_StopTrigger();
                }
                if ((*Value()).hasMember(ItemName_StopTrigger()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_StopTrigger()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StopTrigger(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_StopTrigger()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_StopTrigger(void) const
        {
            bool GetValue = (*Value())[ItemName_StopTrigger()];
            return (bool)GetValue;
        }
        bool Get_StopTrigger(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_StopTrigger()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_StopTrigger()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item StartTrigger (Type: "bool")
protected:
    void Construct_StartTrigger(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_StartTrigger()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_StartTrigger()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_StartTrigger(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StartTrigger()))
                {
                    Construct_StartTrigger();
                }
                if ((*Value()).hasMember(ItemName_StartTrigger()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_StartTrigger()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StartTrigger(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_StartTrigger()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_StartTrigger(void) const
        {
            bool GetValue = (*Value())[ItemName_StartTrigger()];
            return (bool)GetValue;
        }
        bool Get_StartTrigger(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_StartTrigger()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_StartTrigger()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace SimulateTrigger
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_SIMULATETRIGGER)


//------------------------------------------------------------------------
// DataLoggerAPI::Mount::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_MOUNT)
namespace Mount
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_MountPoint(void)
    {
        static std::string str("MountPoint");
        return str;
    }
public:
    static std::string const& ItemName_DevPath(void)
    {
        static std::string str("DevPath");
        return str;
    }
public:
    static std::string const& ItemName_FSType(void)
    {
        static std::string str("FSType");
        return str;
    }
public:
    static std::string const& ItemName_AutoMount(void)
    {
        static std::string str("AutoMount");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.Mount");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_MountPoint();
            Construct_DevPath();
            Construct_FSType();
            Construct_AutoMount();
        }
        catch (...) {}
    }
public:
    CParams(const CParams& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CParams(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_MountPoint();
            Construct_DevPath();
            Construct_FSType();
            Construct_AutoMount();
        }
        catch (...) {}
    }
public:
    ~CParams(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_MountPoint();
            Initialize_DevPath();
            Initialize_FSType();
            Initialize_AutoMount();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::Mount");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item MountPoint (Type: "std::string")
    protected:
        void Construct_MountPoint(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MountPoint()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MountPoint()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_MountPoint(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MountPoint()))
                {
                    Construct_MountPoint();
                }
                if ((*Value()).hasMember(ItemName_MountPoint()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MountPoint()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MountPoint(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_MountPoint()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_MountPoint(void) const
        {
            return (*Value())[ItemName_MountPoint()];
        }
        bool Get_MountPoint(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MountPoint()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_MountPoint()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item DevPath (Type: "std::string")
    protected:
        void Construct_DevPath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DevPath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DevPath()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DevPath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DevPath()))
                {
                    Construct_DevPath();
                }
                if ((*Value()).hasMember(ItemName_DevPath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DevPath()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DevPath(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_DevPath()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DevPath(void) const
        {
            return (*Value())[ItemName_DevPath()];
        }
        bool Get_DevPath(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DevPath()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DevPath()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item FSType (Type: "std::string")
    protected:
        void Construct_FSType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FSType()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FSType()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_FSType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FSType()))
                {
                    Construct_FSType();
                }
                if ((*Value()).hasMember(ItemName_FSType()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FSType()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FSType(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_FSType()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_FSType(void) const
        {
            return (*Value())[ItemName_FSType()];
        }
        bool Get_FSType(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FSType()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_FSType()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item AutoMount (Type: "bool")
protected:
    void Construct_AutoMount(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_AutoMount()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_AutoMount()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_AutoMount(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_AutoMount()))
                {
                    Construct_AutoMount();
                }
                if ((*Value()).hasMember(ItemName_AutoMount()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_AutoMount()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_AutoMount(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_AutoMount()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_AutoMount(void) const
        {
            bool GetValue = (*Value())[ItemName_AutoMount()];
            return (bool)GetValue;
        }
        bool Get_AutoMount(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_AutoMount()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_AutoMount()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace Mount
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_MOUNT)


//------------------------------------------------------------------------
// DataLoggerAPI::UnMount::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_UNMOUNT)
namespace UnMount
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_MountPoint(void)
    {
        static std::string str("MountPoint");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.UnMount");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_MountPoint();
        }
        catch (...) {}
    }
public:
    CParams(const CParams& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CParams(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_MountPoint();
        }
        catch (...) {}
    }
public:
    ~CParams(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_MountPoint();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::UnMount");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item MountPoint (Type: "std::string")
    protected:
        void Construct_MountPoint(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MountPoint()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MountPoint()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_MountPoint(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MountPoint()))
                {
                    Construct_MountPoint();
                }
                if ((*Value()).hasMember(ItemName_MountPoint()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MountPoint()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MountPoint(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_MountPoint()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_MountPoint(void) const
        {
            return (*Value())[ItemName_MountPoint()];
        }
        bool Get_MountPoint(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MountPoint()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_MountPoint()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace UnMount
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_UNMOUNT)


//------------------------------------------------------------------------
// DataLoggerAPI::Format::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_FORMAT)
namespace Format
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_DevPath(void)
    {
        static std::string str("DevPath");
        return str;
    }
public:
    static std::string const& ItemName_FSType(void)
    {
        static std::string str("FSType");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.Format");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_DevPath();
            Construct_FSType();
        }
        catch (...) {}
    }
public:
    CParams(const CParams& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CParams(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_DevPath();
            Construct_FSType();
        }
        catch (...) {}
    }
public:
    ~CParams(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_DevPath();
            Initialize_FSType();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::Format");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item DevPath (Type: "std::string")
    protected:
        void Construct_DevPath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DevPath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DevPath()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DevPath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DevPath()))
                {
                    Construct_DevPath();
                }
                if ((*Value()).hasMember(ItemName_DevPath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DevPath()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DevPath(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_DevPath()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DevPath(void) const
        {
            return (*Value())[ItemName_DevPath()];
        }
        bool Get_DevPath(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DevPath()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DevPath()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item FSType (Type: "std::string")
    protected:
        void Construct_FSType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FSType()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FSType()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_FSType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FSType()))
                {
                    Construct_FSType();
                }
                if ((*Value()).hasMember(ItemName_FSType()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FSType()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FSType(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_FSType()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_FSType(void) const
        {
            return (*Value())[ItemName_FSType()];
        }
        bool Get_FSType(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FSType()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_FSType()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace Format
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_FORMAT)


//------------------------------------------------------------------------
// DataLoggerAPI::GetStates::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_GETSTATES)
namespace GetStates
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_States(void)
    {
        static std::string str("States");
        return str;
    }
public:
    static std::string const& ItemName_ReturnState(void)
    {
        static std::string str("ReturnState");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.GetStates");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_States();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    CResults(const CResults& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CResults(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_States();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    ~CResults(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_States();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::GetStates");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item States (Type: "CTypeLoggerStates")
    protected:
        void Construct_States(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_States()))
                {
                    CTypeLoggerStates InitValue;
                    (*Value())[ItemName_States()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_States(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_States()))
                {
                    Construct_States();
                }
                if ((*Value()).hasMember(ItemName_States()))
                {
                    CTypeLoggerStates InitValue;
                    (*Value())[ItemName_States()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_States(const CTypeLoggerStates& SetValue)
        {
            try
            {
                (*Value())[ItemName_States()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CTypeLoggerStates Get_States(void) const
        {
            return (*Value())[ItemName_States()];
        }
        bool Get_States(CTypeLoggerStates& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_States()]).valid())
                {
                    GetValue = (*Value())[ItemName_States()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ReturnState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    Construct_ReturnState();
                }
                if ((*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReturnState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_ReturnState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_ReturnState(void) const
        {
            return (*Value())[ItemName_ReturnState()];
        }
        bool Get_ReturnState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReturnState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ReturnState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetStates
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_GETSTATES)


//------------------------------------------------------------------------
// DataLoggerAPI::ListLoggers::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_LISTLOGGERS)
namespace ListLoggers
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_List(void)
    {
        static std::string str("List");
        return str;
    }
public:
    static std::string const& ItemName_ReturnState(void)
    {
        static std::string str("ReturnState");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.ListLoggers");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_List();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    CResults(const CResults& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CResults(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_List();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    ~CResults(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_List();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::ListLoggers");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item List (Type: "GInsXmlRpcStdAPI::CGIns_Info_ElementList")
    protected:
        void Construct_List(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_List()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_ElementList InitValue;
                    (*Value())[ItemName_List()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_List(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_List()))
                {
                    Construct_List();
                }
                if ((*Value()).hasMember(ItemName_List()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_ElementList InitValue;
                    (*Value())[ItemName_List()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_List(const GInsXmlRpcStdAPI::CGIns_Info_ElementList& SetValue)
        {
            try
            {
                (*Value())[ItemName_List()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_ElementList Get_List(void) const
        {
            return (*Value())[ItemName_List()];
        }
        bool Get_List(GInsXmlRpcStdAPI::CGIns_Info_ElementList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_List()]).valid())
                {
                    GetValue = (*Value())[ItemName_List()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ReturnState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    Construct_ReturnState();
                }
                if ((*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReturnState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_ReturnState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_ReturnState(void) const
        {
            return (*Value())[ItemName_ReturnState()];
        }
        bool Get_ReturnState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReturnState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ReturnState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace ListLoggers
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_LISTLOGGERS)


//------------------------------------------------------------------------
// DataLoggerAPI::Enable::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_ENABLE)
namespace Enable
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ReturnState(void)
    {
        static std::string str("ReturnState");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.Enable");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    CResults(const CResults& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CResults(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    ~CResults(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::Enable");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item ReturnState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    Construct_ReturnState();
                }
                if ((*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReturnState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_ReturnState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_ReturnState(void) const
        {
            return (*Value())[ItemName_ReturnState()];
        }
        bool Get_ReturnState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReturnState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ReturnState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace Enable
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_ENABLE)


//------------------------------------------------------------------------
// DataLoggerAPI::ListStorages::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_LISTSTORAGES)
namespace ListStorages
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_StorageBasePath(void)
    {
        static std::string str("StorageBasePath");
        return str;
    }
public:
    static std::string const& ItemName_StorageList(void)
    {
        static std::string str("StorageList");
        return str;
    }
public:
    static std::string const& ItemName_PartitionList(void)
    {
        static std::string str("PartitionList");
        return str;
    }
public:
    static std::string const& ItemName_ReturnState(void)
    {
        static std::string str("ReturnState");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.ListStorages");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_StorageBasePath();
            Construct_StorageList();
            Construct_PartitionList();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    CResults(const CResults& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CResults(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_StorageBasePath();
            Construct_StorageList();
            Construct_PartitionList();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    ~CResults(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_StorageBasePath();
            Initialize_StorageList();
            Initialize_PartitionList();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::ListStorages");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item StorageBasePath (Type: "std::string")
    protected:
        void Construct_StorageBasePath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StorageBasePath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_StorageBasePath()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_StorageBasePath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StorageBasePath()))
                {
                    Construct_StorageBasePath();
                }
                if ((*Value()).hasMember(ItemName_StorageBasePath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_StorageBasePath()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StorageBasePath(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_StorageBasePath()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_StorageBasePath(void) const
        {
            return (*Value())[ItemName_StorageBasePath()];
        }
        bool Get_StorageBasePath(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_StorageBasePath()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_StorageBasePath()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item StorageList (Type: "CTypeStorageInfo[0]")
    protected:
        void Construct_StorageList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StorageList()))
                {
                    CTypeStorageInfo InitValue;
                    (*Value())[ItemName_StorageList()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_StorageList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StorageList()))
                {
                    Construct_StorageList();
                }
                if ((*Value()).hasMember(ItemName_StorageList()))
                {
                    CTypeStorageInfo InitValue;
                    (*Value())[ItemName_StorageList()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_StorageList(int NewSize)
        {
            try
            {
                CTypeStorageInfo InitValue;
                (*Value())[ItemName_StorageList()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_StorageList(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_StorageList()))
                {
                    return (*Value())[ItemName_StorageList()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_StorageList(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_StorageList()))
                {
                    (*Value())[ItemName_StorageList()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_StorageList(int ArrayIndex, CTypeStorageInfo SetValue)
        {
            try
            {
                (*Value())[ItemName_StorageList()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_StorageList(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_StorageList()))
                {
                    (*Value())[ItemName_StorageList()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StorageList(int ArrayIndex, const CTypeStorageInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_StorageList()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_StorageList()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CTypeStorageInfo Get_StorageList(int ArrayIndex) const
        {
            return (*Value())[ItemName_StorageList()][ArrayIndex];
        }
        bool Get_StorageList(int ArrayIndex, CTypeStorageInfo& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_StorageList()))
                {
                    if (((*Value())[ItemName_StorageList()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_StorageList()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item PartitionList (Type: "CTypePartition[0]")
    protected:
        void Construct_PartitionList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PartitionList()))
                {
                    CTypePartition InitValue;
                    (*Value())[ItemName_PartitionList()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_PartitionList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PartitionList()))
                {
                    Construct_PartitionList();
                }
                if ((*Value()).hasMember(ItemName_PartitionList()))
                {
                    CTypePartition InitValue;
                    (*Value())[ItemName_PartitionList()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_PartitionList(int NewSize)
        {
            try
            {
                CTypePartition InitValue;
                (*Value())[ItemName_PartitionList()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_PartitionList(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_PartitionList()))
                {
                    return (*Value())[ItemName_PartitionList()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_PartitionList(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_PartitionList()))
                {
                    (*Value())[ItemName_PartitionList()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_PartitionList(int ArrayIndex, CTypePartition SetValue)
        {
            try
            {
                (*Value())[ItemName_PartitionList()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_PartitionList(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_PartitionList()))
                {
                    (*Value())[ItemName_PartitionList()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_PartitionList(int ArrayIndex, const CTypePartition& SetValue)
        {
            try
            {
                (*Value())[ItemName_PartitionList()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_PartitionList()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CTypePartition Get_PartitionList(int ArrayIndex) const
        {
            return (*Value())[ItemName_PartitionList()][ArrayIndex];
        }
        bool Get_PartitionList(int ArrayIndex, CTypePartition& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_PartitionList()))
                {
                    if (((*Value())[ItemName_PartitionList()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_PartitionList()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ReturnState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    Construct_ReturnState();
                }
                if ((*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReturnState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_ReturnState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_ReturnState(void) const
        {
            return (*Value())[ItemName_ReturnState()];
        }
        bool Get_ReturnState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReturnState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ReturnState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace ListStorages
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_LISTSTORAGES)


//------------------------------------------------------------------------
// DataLoggerAPI::AddStorage::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_ADDSTORAGE)
namespace AddStorage
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ReturnState(void)
    {
        static std::string str("ReturnState");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.AddStorage");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    CResults(const CResults& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CResults(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    ~CResults(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::AddStorage");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item ReturnState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    Construct_ReturnState();
                }
                if ((*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReturnState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_ReturnState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_ReturnState(void) const
        {
            return (*Value())[ItemName_ReturnState()];
        }
        bool Get_ReturnState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReturnState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ReturnState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace AddStorage
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_ADDSTORAGE)


//------------------------------------------------------------------------
// DataLoggerAPI::AddDataFiles::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_ADDDATAFILES)
namespace AddDataFiles
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ReturnState(void)
    {
        static std::string str("ReturnState");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.AddDataFiles");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    CResults(const CResults& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CResults(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    ~CResults(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::AddDataFiles");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item ReturnState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    Construct_ReturnState();
                }
                if ((*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReturnState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_ReturnState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_ReturnState(void) const
        {
            return (*Value())[ItemName_ReturnState()];
        }
        bool Get_ReturnState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReturnState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ReturnState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace AddDataFiles
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_ADDDATAFILES)


//------------------------------------------------------------------------
// DataLoggerAPI::GetStorageInfo::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_GETSTORAGEINFO)
namespace GetStorageInfo
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Info(void)
    {
        static std::string str("Info");
        return str;
    }
public:
    static std::string const& ItemName_ReturnState(void)
    {
        static std::string str("ReturnState");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.GetStorageInfo");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Info();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    CResults(const CResults& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CResults(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_Info();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    ~CResults(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_Info();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::GetStorageInfo");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item Info (Type: "CTypeStorageInfo")
    protected:
        void Construct_Info(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Info()))
                {
                    CTypeStorageInfo InitValue;
                    (*Value())[ItemName_Info()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Info(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Info()))
                {
                    Construct_Info();
                }
                if ((*Value()).hasMember(ItemName_Info()))
                {
                    CTypeStorageInfo InitValue;
                    (*Value())[ItemName_Info()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Info(const CTypeStorageInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_Info()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CTypeStorageInfo Get_Info(void) const
        {
            return (*Value())[ItemName_Info()];
        }
        bool Get_Info(CTypeStorageInfo& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Info()]).valid())
                {
                    GetValue = (*Value())[ItemName_Info()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ReturnState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    Construct_ReturnState();
                }
                if ((*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReturnState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_ReturnState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_ReturnState(void) const
        {
            return (*Value())[ItemName_ReturnState()];
        }
        bool Get_ReturnState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReturnState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ReturnState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetStorageInfo
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_GETSTORAGEINFO)


//------------------------------------------------------------------------
// DataLoggerAPI::ListStorageFiles::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_LISTSTORAGEFILES)
namespace ListStorageFiles
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Files(void)
    {
        static std::string str("Files");
        return str;
    }
public:
    static std::string const& ItemName_StartTime(void)
    {
        static std::string str("StartTime");
        return str;
    }
public:
    static std::string const& ItemName_EndTime(void)
    {
        static std::string str("EndTime");
        return str;
    }
public:
    static std::string const& ItemName_ReturnState(void)
    {
        static std::string str("ReturnState");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.ListStorageFiles");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Files();
            Construct_StartTime();
            Construct_EndTime();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    CResults(const CResults& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CResults(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_Files();
            Construct_StartTime();
            Construct_EndTime();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    ~CResults(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_Files();
            Initialize_StartTime();
            Initialize_EndTime();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::ListStorageFiles");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item Files (Type: "std::string[0]")
    protected:
        void Construct_Files(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Files()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Files()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Files(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Files()))
                {
                    Construct_Files();
                }
                if ((*Value()).hasMember(ItemName_Files()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Files()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Files(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_Files()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Files(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Files()))
                {
                    return (*Value())[ItemName_Files()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Files(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Files()))
                {
                    (*Value())[ItemName_Files()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Files(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_Files()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Files(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Files()))
                {
                    (*Value())[ItemName_Files()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Files(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_Files())
                {
                    SetSize_Files(ArrayIndex + 1);
                }
                (*Value())[ItemName_Files()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Files(int ArrayIndex) const
        {
            return (*Value())[ItemName_Files()][ArrayIndex];
        }
        bool Get_Files(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Files()))
                {
                    if (((*Value())[ItemName_Files()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_Files()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item StartTime (Type: "double")
protected:
    void Construct_StartTime(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_StartTime()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_StartTime()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_StartTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StartTime()))
                {
                    Construct_StartTime();
                }
                if ((*Value()).hasMember(ItemName_StartTime()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_StartTime()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StartTime(double SetValue)
        {
            try
            {
                (*Value())[ItemName_StartTime()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_StartTime(void) const
        {
            double GetValue = (*Value())[ItemName_StartTime()];
            return (double)GetValue;
        }
        bool Get_StartTime(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_StartTime()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_StartTime()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item EndTime (Type: "double")
protected:
    void Construct_EndTime(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_EndTime()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_EndTime()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_EndTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_EndTime()))
                {
                    Construct_EndTime();
                }
                if ((*Value()).hasMember(ItemName_EndTime()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_EndTime()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_EndTime(double SetValue)
        {
            try
            {
                (*Value())[ItemName_EndTime()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_EndTime(void) const
        {
            double GetValue = (*Value())[ItemName_EndTime()];
            return (double)GetValue;
        }
        bool Get_EndTime(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_EndTime()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_EndTime()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ReturnState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    Construct_ReturnState();
                }
                if ((*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReturnState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_ReturnState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_ReturnState(void) const
        {
            return (*Value())[ItemName_ReturnState()];
        }
        bool Get_ReturnState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReturnState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ReturnState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace ListStorageFiles
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_LISTSTORAGEFILES)


//------------------------------------------------------------------------
// DataLoggerAPI::DeleteStorageFiles::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_DELETESTORAGEFILES)
namespace DeleteStorageFiles
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ReturnState(void)
    {
        static std::string str("ReturnState");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.DeleteStorageFiles");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    CResults(const CResults& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CResults(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    ~CResults(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::DeleteStorageFiles");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item ReturnState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    Construct_ReturnState();
                }
                if ((*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReturnState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_ReturnState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_ReturnState(void) const
        {
            return (*Value())[ItemName_ReturnState()];
        }
        bool Get_ReturnState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReturnState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ReturnState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace DeleteStorageFiles
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_DELETESTORAGEFILES)


//------------------------------------------------------------------------
// DataLoggerAPI::EjectStorage::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_EJECTSTORAGE)
namespace EjectStorage
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ReturnState(void)
    {
        static std::string str("ReturnState");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.EjectStorage");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    CResults(const CResults& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CResults(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    ~CResults(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::EjectStorage");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item ReturnState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    Construct_ReturnState();
                }
                if ((*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReturnState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_ReturnState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_ReturnState(void) const
        {
            return (*Value())[ItemName_ReturnState()];
        }
        bool Get_ReturnState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReturnState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ReturnState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace EjectStorage
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_EJECTSTORAGE)


//------------------------------------------------------------------------
// DataLoggerAPI::SimulateTrigger::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_SIMULATETRIGGER)
namespace SimulateTrigger
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ReturnState(void)
    {
        static std::string str("ReturnState");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.SimulateTrigger");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    CResults(const CResults& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CResults(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    ~CResults(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::SimulateTrigger");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item ReturnState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    Construct_ReturnState();
                }
                if ((*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReturnState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_ReturnState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_ReturnState(void) const
        {
            return (*Value())[ItemName_ReturnState()];
        }
        bool Get_ReturnState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReturnState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ReturnState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace SimulateTrigger
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_SIMULATETRIGGER)


//------------------------------------------------------------------------
// DataLoggerAPI::Mount::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_MOUNT)
namespace Mount
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ReturnState(void)
    {
        static std::string str("ReturnState");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.Mount");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    CResults(const CResults& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CResults(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    ~CResults(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::Mount");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item ReturnState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    Construct_ReturnState();
                }
                if ((*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReturnState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_ReturnState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_ReturnState(void) const
        {
            return (*Value())[ItemName_ReturnState()];
        }
        bool Get_ReturnState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReturnState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ReturnState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace Mount
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_MOUNT)


//------------------------------------------------------------------------
// DataLoggerAPI::UnMount::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_UNMOUNT)
namespace UnMount
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ReturnState(void)
    {
        static std::string str("ReturnState");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.UnMount");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    CResults(const CResults& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CResults(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    ~CResults(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::UnMount");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item ReturnState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    Construct_ReturnState();
                }
                if ((*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReturnState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_ReturnState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_ReturnState(void) const
        {
            return (*Value())[ItemName_ReturnState()];
        }
        bool Get_ReturnState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReturnState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ReturnState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace UnMount
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_UNMOUNT)


//------------------------------------------------------------------------
// DataLoggerAPI::Format::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATALOGGERAPI_FORMAT)
namespace Format
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ReturnState(void)
    {
        static std::string str("ReturnState");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DataLoggerAPI.Format");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    CResults(const CResults& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CResults(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    ~CResults(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataLoggerAPI::Format");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item ReturnState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    Construct_ReturnState();
                }
                if ((*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReturnState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_ReturnState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_ReturnState(void) const
        {
            return (*Value())[ItemName_ReturnState()];
        }
        bool Get_ReturnState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReturnState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ReturnState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace Format
#endif //#if defined(IMPLEMENT_DATALOGGERAPI_FORMAT)
//========================================================================
}; // namespace DataLoggerAPI
//========================================================================
#endif // #if !defined(_DATALOGGERAPI_TYPES_H)

