//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_GISERVICE_CONFIGAPI_TYPES_H)
#define _GISERVICE_CONFIGAPI_TYPES_H
//========================================================================
// Implemented methods
#define IMPLEMENT_GISERVICE_CONFIGAPI_GENERATELICENSEREQUEST
#define IMPLEMENT_GISERVICE_CONFIGAPI_ACTIVATELICENSE
#define IMPLEMENT_GISERVICE_CONFIGAPI_ONLINEACTIVATION
#define IMPLEMENT_GISERVICE_CONFIGAPI_VERSION
#define IMPLEMENT_GISERVICE_CONFIGAPI_GETCONFIG
#define IMPLEMENT_GISERVICE_CONFIGAPI_SETCONFIG
#define IMPLEMENT_GISERVICE_CONFIGAPI_GETGLOBALSETTINGS
#define IMPLEMENT_GISERVICE_CONFIGAPI_ADDDEVICE
#define IMPLEMENT_GISERVICE_CONFIGAPI_REMOVEDEVICE
#define IMPLEMENT_GISERVICE_CONFIGAPI_LISTDEVICES
#define IMPLEMENT_GISERVICE_CONFIGAPI_CLEARDEVICESTATES
#define IMPLEMENT_GISERVICE_CONFIGAPI_STARTPROCESS
#define IMPLEMENT_GISERVICE_CONFIGAPI_STOPPROCESS
#define IMPLEMENT_GISERVICE_CONFIGAPI_LISTPROCESSES
#define IMPLEMENT_GISERVICE_CONFIGAPI_SETTINGS
#define IMPLEMENT_GISERVICE_CONFIGAPI_GETLICENSEINFORMATION
#define IMPLEMENT_GISERVICE_CONFIGAPI_HANDLEPROJECT
#define IMPLEMENT_GISERVICE_CONFIGAPI_GETPROJECTSTATE
#define IMPLEMENT_GISERVICE_CONFIGAPI_GETVERSIONINFORMATION
#define IMPLEMENT_GISERVICE_CONFIGAPI_GETAPIVERSIONS
#define IMPLEMENT_GISERVICE_CONFIGAPI_CHECKAPICOMPATIBILITY
#define IMPLEMENT_GISERVICE_CONFIGAPI_PAIRDEVICEWITHCLOUD
#define IMPLEMENT_GISERVICE_CONFIGAPI_GETPAIRDEVICEWITHCLOUDRESULT
#define IMPLEMENT_GISERVICE_CONFIGAPI_GENERICCALL
#define IMPLEMENT_GISERVICE_CONFIGAPI_ADDCERTIFICATE
#define IMPLEMENT_GISERVICE_CONFIGAPI_LISTTIMEZONES
#define IMPLEMENT_GISERVICE_CONFIGAPI_CREATEGROUP
#define IMPLEMENT_GISERVICE_CONFIGAPI_SETGROUP
#define IMPLEMENT_GISERVICE_CONFIGAPI_REMOVEGROUPS
#define IMPLEMENT_GISERVICE_CONFIGAPI_GETGROUPS
#define IMPLEMENT_GISERVICE_CONFIGAPI_ADDGROUPELEMENTS
#define IMPLEMENT_GISERVICE_CONFIGAPI_REMOVEGROUPELEMENTS
#define IMPLEMENT_GISERVICE_CONFIGAPI_ADDSTORAGEDESTINATION
#define IMPLEMENT_GISERVICE_CONFIGAPI_REMOVESTORAGEDESTINATION
#define IMPLEMENT_GISERVICE_CONFIGAPI_SETSTORAGEDESTINATION
#define IMPLEMENT_GISERVICE_CONFIGAPI_GETSTORAGEDESTINATIONS


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "giservice_ConfigAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
#include "GInsXmlRpcStdAPI_Types.h"
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace giservice_ConfigAPI {
//========================================================================
//------------------------------------------------------------------------
// giservice_ConfigAPI::CAPIInfo
//------------------------------------------------------------------------
class CAPIInfo
{
public:
    static std::string const& Name(void)
    {
        static std::string str("ConfigAPI");
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
// giservice_ConfigAPI::EnumConnectionKind
//------------------------------------------------------------------------
enum EnumConnectionKind {
    Local = 0,
    Cloud = 1,
}; // enum EnumConnectionKind


//------------------------------------------------------------------------
// giservice_ConfigAPI::CStructRemoteRoute
//------------------------------------------------------------------------
class CStructRemoteRoute : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Hostname(void)
        {
            static std::string str("Hostname");
            return str;
        }
    public:
        static std::string const& ItemName_XmlRpcPort(void)
        {
            static std::string str("XmlRpcPort");
            return str;
        }
    public:
        static std::string const& ItemName_Name(void)
        {
            static std::string str("Name");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructRemoteRoute");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("23.0");
        return str;
    }
public:
    CStructRemoteRoute(void)
    {
        try
        {
            Construct_Hostname();
            Construct_XmlRpcPort();
            Construct_Name();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructRemoteRoute(const CStructRemoteRoute& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CStructRemoteRoute(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_Hostname();
            Construct_XmlRpcPort();
            Construct_Name();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructRemoteRoute(void)
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
            Initialize_Hostname();
            Initialize_XmlRpcPort();
            Initialize_Name();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item Hostname (Type: "std::string")
    protected:
        void Construct_Hostname(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Hostname()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Hostname()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Hostname(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Hostname()))
                {
                    Construct_Hostname();
                }
                if ((*Value()).hasMember(ItemName_Hostname()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Hostname()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Hostname(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Hostname()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Hostname(void) const
        {
            return (*Value())[ItemName_Hostname()];
        }
        bool Get_Hostname(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Hostname()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Hostname()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item XmlRpcPort (Type: "int32_t")
protected:
    void Construct_XmlRpcPort(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_XmlRpcPort()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_XmlRpcPort()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_XmlRpcPort(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_XmlRpcPort()))
                {
                    Construct_XmlRpcPort();
                }
                if ((*Value()).hasMember(ItemName_XmlRpcPort()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_XmlRpcPort()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_XmlRpcPort(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_XmlRpcPort()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_XmlRpcPort(void) const
        {
            int32_t GetValue = (*Value())[ItemName_XmlRpcPort()];
            return (int32_t)GetValue;
        }
        bool Get_XmlRpcPort(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_XmlRpcPort()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_XmlRpcPort()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
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
}; // class CStructRemoteRoute


//------------------------------------------------------------------------
// giservice_ConfigAPI::CStructExecConfig
//------------------------------------------------------------------------
class CStructExecConfig : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Name(void)
        {
            static std::string str("Name");
            return str;
        }
    public:
        static std::string const& ItemName_AutoStart(void)
        {
            static std::string str("AutoStart");
            return str;
        }
    public:
        static std::string const& ItemName_NeedLicenseChecked(void)
        {
            static std::string str("NeedLicenseChecked");
            return str;
        }
    public:
        static std::string const& ItemName_PreStart(void)
        {
            static std::string str("PreStart");
            return str;
        }
    public:
        static std::string const& ItemName_StartOnTrayItemDoubleClick(void)
        {
            static std::string str("StartOnTrayItemDoubleClick");
            return str;
        }
    public:
        static std::string const& ItemName_RouteTimeout(void)
        {
            static std::string str("RouteTimeout");
            return str;
        }
    public:
        static std::string const& ItemName_Directory(void)
        {
            static std::string str("Directory");
            return str;
        }
    public:
        static std::string const& ItemName_Executable(void)
        {
            static std::string str("Executable");
            return str;
        }
    public:
        static std::string const& ItemName_Arguments(void)
        {
            static std::string str("Arguments");
            return str;
        }
    public:
        static std::string const& ItemName_CreateRoute(void)
        {
            static std::string str("CreateRoute");
            return str;
        }
    public:
        static std::string const& ItemName_Hostname(void)
        {
            static std::string str("Hostname");
            return str;
        }
    public:
        static std::string const& ItemName_XmlRpcPort(void)
        {
            static std::string str("XmlRpcPort");
            return str;
        }
    public:
        static std::string const& ItemName_AutoRestart(void)
        {
            static std::string str("AutoRestart");
            return str;
        }
    public:
        static std::string const& ItemName_SubMenu(void)
        {
            static std::string str("SubMenu");
            return str;
        }
    public:
        static std::string const& ItemName_StartOrder(void)
        {
            static std::string str("StartOrder");
            return str;
        }
    public:
        static std::string const& ItemName_XmlRpcRouteName(void)
        {
            static std::string str("XmlRpcRouteName");
            return str;
        }
    public:
        static std::string const& ItemName_Description(void)
        {
            static std::string str("Description");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructExecConfig");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("23.2");
        return str;
    }
public:
    CStructExecConfig(void)
    {
        try
        {
            Construct_Name();
            Construct_AutoStart();
            Construct_NeedLicenseChecked();
            Construct_PreStart();
            Construct_StartOnTrayItemDoubleClick();
            Construct_RouteTimeout();
            Construct_Directory();
            Construct_Executable();
            Construct_Arguments();
            Construct_CreateRoute();
            Construct_Hostname();
            Construct_XmlRpcPort();
            Construct_AutoRestart();
            Construct_SubMenu();
            Construct_StartOrder();
            Construct_XmlRpcRouteName();
            Construct_Description();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructExecConfig(const CStructExecConfig& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CStructExecConfig(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_Name();
            Construct_AutoStart();
            Construct_NeedLicenseChecked();
            Construct_PreStart();
            Construct_StartOnTrayItemDoubleClick();
            Construct_RouteTimeout();
            Construct_Directory();
            Construct_Executable();
            Construct_Arguments();
            Construct_CreateRoute();
            Construct_Hostname();
            Construct_XmlRpcPort();
            Construct_AutoRestart();
            Construct_SubMenu();
            Construct_StartOrder();
            Construct_XmlRpcRouteName();
            Construct_Description();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructExecConfig(void)
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
            Initialize_AutoStart();
            Initialize_NeedLicenseChecked();
            Initialize_PreStart();
            Initialize_StartOnTrayItemDoubleClick();
            Initialize_RouteTimeout();
            Initialize_Directory();
            Initialize_Executable();
            Initialize_Arguments();
            Initialize_CreateRoute();
            Initialize_Hostname();
            Initialize_XmlRpcPort();
            Initialize_AutoRestart();
            Initialize_SubMenu();
            Initialize_StartOrder();
            Initialize_XmlRpcRouteName();
            Initialize_Description();
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
// Item AutoStart (Type: "bool")
protected:
    void Construct_AutoStart(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_AutoStart()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_AutoStart()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_AutoStart(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_AutoStart()))
                {
                    Construct_AutoStart();
                }
                if ((*Value()).hasMember(ItemName_AutoStart()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_AutoStart()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_AutoStart(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_AutoStart()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_AutoStart(void) const
        {
            bool GetValue = (*Value())[ItemName_AutoStart()];
            return (bool)GetValue;
        }
        bool Get_AutoStart(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_AutoStart()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_AutoStart()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item NeedLicenseChecked (Type: "bool")
protected:
    void Construct_NeedLicenseChecked(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_NeedLicenseChecked()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_NeedLicenseChecked()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_NeedLicenseChecked(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_NeedLicenseChecked()))
                {
                    Construct_NeedLicenseChecked();
                }
                if ((*Value()).hasMember(ItemName_NeedLicenseChecked()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_NeedLicenseChecked()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_NeedLicenseChecked(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_NeedLicenseChecked()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_NeedLicenseChecked(void) const
        {
            bool GetValue = (*Value())[ItemName_NeedLicenseChecked()];
            return (bool)GetValue;
        }
        bool Get_NeedLicenseChecked(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_NeedLicenseChecked()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_NeedLicenseChecked()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item PreStart (Type: "bool")
protected:
    void Construct_PreStart(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_PreStart()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_PreStart()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_PreStart(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PreStart()))
                {
                    Construct_PreStart();
                }
                if ((*Value()).hasMember(ItemName_PreStart()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_PreStart()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_PreStart(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_PreStart()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_PreStart(void) const
        {
            bool GetValue = (*Value())[ItemName_PreStart()];
            return (bool)GetValue;
        }
        bool Get_PreStart(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_PreStart()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_PreStart()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item StartOnTrayItemDoubleClick (Type: "bool")
protected:
    void Construct_StartOnTrayItemDoubleClick(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_StartOnTrayItemDoubleClick()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_StartOnTrayItemDoubleClick()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_StartOnTrayItemDoubleClick(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StartOnTrayItemDoubleClick()))
                {
                    Construct_StartOnTrayItemDoubleClick();
                }
                if ((*Value()).hasMember(ItemName_StartOnTrayItemDoubleClick()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_StartOnTrayItemDoubleClick()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StartOnTrayItemDoubleClick(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_StartOnTrayItemDoubleClick()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_StartOnTrayItemDoubleClick(void) const
        {
            bool GetValue = (*Value())[ItemName_StartOnTrayItemDoubleClick()];
            return (bool)GetValue;
        }
        bool Get_StartOnTrayItemDoubleClick(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_StartOnTrayItemDoubleClick()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_StartOnTrayItemDoubleClick()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item RouteTimeout (Type: "int32_t")
protected:
    void Construct_RouteTimeout(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_RouteTimeout()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_RouteTimeout()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_RouteTimeout(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RouteTimeout()))
                {
                    Construct_RouteTimeout();
                }
                if ((*Value()).hasMember(ItemName_RouteTimeout()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_RouteTimeout()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RouteTimeout(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_RouteTimeout()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_RouteTimeout(void) const
        {
            int32_t GetValue = (*Value())[ItemName_RouteTimeout()];
            return (int32_t)GetValue;
        }
        bool Get_RouteTimeout(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RouteTimeout()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_RouteTimeout()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Directory (Type: "std::string")
    protected:
        void Construct_Directory(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Directory()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Directory()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Directory(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Directory()))
                {
                    Construct_Directory();
                }
                if ((*Value()).hasMember(ItemName_Directory()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Directory()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Directory(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Directory()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Directory(void) const
        {
            return (*Value())[ItemName_Directory()];
        }
        bool Get_Directory(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Directory()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Directory()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Executable (Type: "std::string")
    protected:
        void Construct_Executable(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Executable()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Executable()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Executable(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Executable()))
                {
                    Construct_Executable();
                }
                if ((*Value()).hasMember(ItemName_Executable()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Executable()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Executable(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Executable()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Executable(void) const
        {
            return (*Value())[ItemName_Executable()];
        }
        bool Get_Executable(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Executable()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Executable()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Arguments (Type: "std::string")
    protected:
        void Construct_Arguments(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Arguments()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Arguments()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Arguments(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Arguments()))
                {
                    Construct_Arguments();
                }
                if ((*Value()).hasMember(ItemName_Arguments()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Arguments()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Arguments(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Arguments()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Arguments(void) const
        {
            return (*Value())[ItemName_Arguments()];
        }
        bool Get_Arguments(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Arguments()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Arguments()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item CreateRoute (Type: "bool")
protected:
    void Construct_CreateRoute(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_CreateRoute()))
            {
                bool InitValue;
                InitValue = true;
                    (*Value())[ItemName_CreateRoute()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_CreateRoute(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CreateRoute()))
                {
                    Construct_CreateRoute();
                }
                if ((*Value()).hasMember(ItemName_CreateRoute()))
                {
                    bool InitValue;
                    InitValue = true;
                    (*Value())[ItemName_CreateRoute()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_CreateRoute(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_CreateRoute()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_CreateRoute(void) const
        {
            bool GetValue = (*Value())[ItemName_CreateRoute()];
            return (bool)GetValue;
        }
        bool Get_CreateRoute(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_CreateRoute()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_CreateRoute()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Hostname (Type: "std::string")
    protected:
        void Construct_Hostname(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Hostname()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Hostname()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Hostname(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Hostname()))
                {
                    Construct_Hostname();
                }
                if ((*Value()).hasMember(ItemName_Hostname()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Hostname()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Hostname(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Hostname()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Hostname(void) const
        {
            return (*Value())[ItemName_Hostname()];
        }
        bool Get_Hostname(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Hostname()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Hostname()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item XmlRpcPort (Type: "int32_t")
protected:
    void Construct_XmlRpcPort(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_XmlRpcPort()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_XmlRpcPort()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_XmlRpcPort(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_XmlRpcPort()))
                {
                    Construct_XmlRpcPort();
                }
                if ((*Value()).hasMember(ItemName_XmlRpcPort()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_XmlRpcPort()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_XmlRpcPort(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_XmlRpcPort()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_XmlRpcPort(void) const
        {
            int32_t GetValue = (*Value())[ItemName_XmlRpcPort()];
            return (int32_t)GetValue;
        }
        bool Get_XmlRpcPort(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_XmlRpcPort()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_XmlRpcPort()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item AutoRestart (Type: "bool")
protected:
    void Construct_AutoRestart(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_AutoRestart()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_AutoRestart()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_AutoRestart(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_AutoRestart()))
                {
                    Construct_AutoRestart();
                }
                if ((*Value()).hasMember(ItemName_AutoRestart()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_AutoRestart()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_AutoRestart(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_AutoRestart()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_AutoRestart(void) const
        {
            bool GetValue = (*Value())[ItemName_AutoRestart()];
            return (bool)GetValue;
        }
        bool Get_AutoRestart(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_AutoRestart()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_AutoRestart()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item SubMenu (Type: "std::string")
    protected:
        void Construct_SubMenu(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SubMenu()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SubMenu()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SubMenu(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SubMenu()))
                {
                    Construct_SubMenu();
                }
                if ((*Value()).hasMember(ItemName_SubMenu()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SubMenu()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SubMenu(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_SubMenu()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_SubMenu(void) const
        {
            return (*Value())[ItemName_SubMenu()];
        }
        bool Get_SubMenu(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SubMenu()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_SubMenu()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item StartOrder (Type: "int32_t")
protected:
    void Construct_StartOrder(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_StartOrder()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_StartOrder()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_StartOrder(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StartOrder()))
                {
                    Construct_StartOrder();
                }
                if ((*Value()).hasMember(ItemName_StartOrder()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_StartOrder()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StartOrder(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_StartOrder()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_StartOrder(void) const
        {
            int32_t GetValue = (*Value())[ItemName_StartOrder()];
            return (int32_t)GetValue;
        }
        bool Get_StartOrder(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_StartOrder()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_StartOrder()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item XmlRpcRouteName (Type: "std::string")
    protected:
        void Construct_XmlRpcRouteName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_XmlRpcRouteName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_XmlRpcRouteName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_XmlRpcRouteName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_XmlRpcRouteName()))
                {
                    Construct_XmlRpcRouteName();
                }
                if ((*Value()).hasMember(ItemName_XmlRpcRouteName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_XmlRpcRouteName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_XmlRpcRouteName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_XmlRpcRouteName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_XmlRpcRouteName(void) const
        {
            return (*Value())[ItemName_XmlRpcRouteName()];
        }
        bool Get_XmlRpcRouteName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_XmlRpcRouteName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_XmlRpcRouteName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Description (Type: "std::string")
    protected:
        void Construct_Description(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Description()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Description(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description()))
                {
                    Construct_Description();
                }
                if ((*Value()).hasMember(ItemName_Description()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Description()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Description(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Description()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Description(void) const
        {
            return (*Value())[ItemName_Description()];
        }
        bool Get_Description(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Description()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Description()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructExecConfig


//------------------------------------------------------------------------
// giservice_ConfigAPI::CStructConfigInfoEntry
//------------------------------------------------------------------------
class CStructConfigInfoEntry : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Name(void)
        {
            static std::string str("Name");
            return str;
        }
    public:
        static std::string const& ItemName_Description(void)
        {
            static std::string str("Description");
            return str;
        }
    public:
        static std::string const& ItemName_Running(void)
        {
            static std::string str("Running");
            return str;
        }
    public:
        static std::string const& ItemName_RouteName(void)
        {
            static std::string str("RouteName");
            return str;
        }
    public:
        static std::string const& ItemName_Errors(void)
        {
            static std::string str("Errors");
            return str;
        }
    public:
        static std::string const& ItemName_Port(void)
        {
            static std::string str("Port");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructConfigInfoEntry");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("23.3");
        return str;
    }
public:
    CStructConfigInfoEntry(void)
    {
        try
        {
            Construct_Name();
            Construct_Description();
            Construct_Running();
            Construct_RouteName();
            Construct_Errors();
            Construct_Port();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructConfigInfoEntry(const CStructConfigInfoEntry& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CStructConfigInfoEntry(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_Name();
            Construct_Description();
            Construct_Running();
            Construct_RouteName();
            Construct_Errors();
            Construct_Port();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructConfigInfoEntry(void)
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
            Initialize_Description();
            Initialize_Running();
            Initialize_RouteName();
            Initialize_Errors();
            Initialize_Port();
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
    // Item Description (Type: "std::string")
    protected:
        void Construct_Description(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Description()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Description(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description()))
                {
                    Construct_Description();
                }
                if ((*Value()).hasMember(ItemName_Description()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Description()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Description(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Description()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Description(void) const
        {
            return (*Value())[ItemName_Description()];
        }
        bool Get_Description(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Description()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Description()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Running (Type: "bool")
protected:
    void Construct_Running(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Running()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Running()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Running(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Running()))
                {
                    Construct_Running();
                }
                if ((*Value()).hasMember(ItemName_Running()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Running()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Running(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Running()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Running(void) const
        {
            bool GetValue = (*Value())[ItemName_Running()];
            return (bool)GetValue;
        }
        bool Get_Running(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Running()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Running()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item RouteName (Type: "std::string")
    protected:
        void Construct_RouteName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RouteName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RouteName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_RouteName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RouteName()))
                {
                    Construct_RouteName();
                }
                if ((*Value()).hasMember(ItemName_RouteName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RouteName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RouteName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_RouteName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_RouteName(void) const
        {
            return (*Value())[ItemName_RouteName()];
        }
        bool Get_RouteName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RouteName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_RouteName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Errors (Type: "bool")
protected:
    void Construct_Errors(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Errors()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Errors()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Errors(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Errors()))
                {
                    Construct_Errors();
                }
                if ((*Value()).hasMember(ItemName_Errors()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Errors()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Errors(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Errors()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Errors(void) const
        {
            bool GetValue = (*Value())[ItemName_Errors()];
            return (bool)GetValue;
        }
        bool Get_Errors(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Errors()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Errors()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Port (Type: "int32_t")
protected:
    void Construct_Port(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Port()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Port()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Port(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Port()))
                {
                    Construct_Port();
                }
                if ((*Value()).hasMember(ItemName_Port()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Port()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Port(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Port()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Port(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Port()];
            return (int32_t)GetValue;
        }
        bool Get_Port(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Port()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Port()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructConfigInfoEntry


//------------------------------------------------------------------------
// giservice_ConfigAPI::CStructDeviceInfoEntry
//------------------------------------------------------------------------
class CStructDeviceInfoEntry : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_ConnectionType(void)
        {
            static std::string str("ConnectionType");
            return str;
        }
    public:
        static std::string const& ItemName_ConnectionString(void)
        {
            static std::string str("ConnectionString");
            return str;
        }
    public:
        static std::string const& ItemName_Routes(void)
        {
            static std::string str("Routes");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructDeviceInfoEntry");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("23.4");
        return str;
    }
public:
    CStructDeviceInfoEntry(void)
    {
        try
        {
            Construct_ConnectionType();
            Construct_ConnectionString();
            Construct_Routes();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructDeviceInfoEntry(const CStructDeviceInfoEntry& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CStructDeviceInfoEntry(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_ConnectionType();
            Construct_ConnectionString();
            Construct_Routes();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructDeviceInfoEntry(void)
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
            Initialize_ConnectionType();
            Initialize_ConnectionString();
            Initialize_Routes();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item ConnectionType (Type: "std::string")
    protected:
        void Construct_ConnectionType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConnectionType()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ConnectionType()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ConnectionType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConnectionType()))
                {
                    Construct_ConnectionType();
                }
                if ((*Value()).hasMember(ItemName_ConnectionType()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ConnectionType()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ConnectionType(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ConnectionType()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ConnectionType(void) const
        {
            return (*Value())[ItemName_ConnectionType()];
        }
        bool Get_ConnectionType(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ConnectionType()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ConnectionType()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ConnectionString (Type: "std::string")
    protected:
        void Construct_ConnectionString(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConnectionString()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ConnectionString()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ConnectionString(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConnectionString()))
                {
                    Construct_ConnectionString();
                }
                if ((*Value()).hasMember(ItemName_ConnectionString()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ConnectionString()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ConnectionString(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ConnectionString()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ConnectionString(void) const
        {
            return (*Value())[ItemName_ConnectionString()];
        }
        bool Get_ConnectionString(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ConnectionString()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ConnectionString()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Routes (Type: "std::string[0]")
    protected:
        void Construct_Routes(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Routes()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Routes()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Routes(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Routes()))
                {
                    Construct_Routes();
                }
                if ((*Value()).hasMember(ItemName_Routes()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Routes()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Routes(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_Routes()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Routes(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Routes()))
                {
                    return (*Value())[ItemName_Routes()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Routes(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Routes()))
                {
                    (*Value())[ItemName_Routes()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Routes(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_Routes()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Routes(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Routes()))
                {
                    (*Value())[ItemName_Routes()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Routes(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_Routes())
                {
                    SetSize_Routes(ArrayIndex + 1);
                }
                (*Value())[ItemName_Routes()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Routes(int ArrayIndex) const
        {
            return (*Value())[ItemName_Routes()][ArrayIndex];
        }
        bool Get_Routes(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Routes()))
                {
                    if (((*Value())[ItemName_Routes()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_Routes()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructDeviceInfoEntry


//------------------------------------------------------------------------
// giservice_ConfigAPI::CStructPortRange
//------------------------------------------------------------------------
class CStructPortRange : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Min(void)
        {
            static std::string str("Min");
            return str;
        }
    public:
        static std::string const& ItemName_Max(void)
        {
            static std::string str("Max");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructPortRange");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("23.5");
        return str;
    }
public:
    CStructPortRange(void)
    {
        try
        {
            Construct_Min();
            Construct_Max();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructPortRange(const CStructPortRange& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CStructPortRange(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_Min();
            Construct_Max();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructPortRange(void)
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
            Initialize_Min();
            Initialize_Max();
        }
        catch (...) {}
    }
//------------------------------------------------------------------------
// Item Min (Type: "int32_t")
protected:
    void Construct_Min(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Min()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Min()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Min(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Min()))
                {
                    Construct_Min();
                }
                if ((*Value()).hasMember(ItemName_Min()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Min()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Min(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Min()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Min(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Min()];
            return (int32_t)GetValue;
        }
        bool Get_Min(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Min()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Min()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Max (Type: "int32_t")
protected:
    void Construct_Max(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Max()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Max()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Max(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Max()))
                {
                    Construct_Max();
                }
                if ((*Value()).hasMember(ItemName_Max()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Max()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Max(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Max()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Max(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Max()];
            return (int32_t)GetValue;
        }
        bool Get_Max(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Max()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Max()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructPortRange


//------------------------------------------------------------------------
// giservice_ConfigAPI::CStructConfig
//------------------------------------------------------------------------
class CStructConfig : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_ProjectsDataPath(void)
        {
            static std::string str("ProjectsDataPath");
            return str;
        }
    public:
        static std::string const& ItemName_TempDataPath(void)
        {
            static std::string str("TempDataPath");
            return str;
        }
    public:
        static std::string const& ItemName_FirmwarePath(void)
        {
            static std::string str("FirmwarePath");
            return str;
        }
    public:
        static std::string const& ItemName_DataArchiveRootPath(void)
        {
            static std::string str("DataArchiveRootPath");
            return str;
        }
    public:
        static std::string const& ItemName_LogFilePath(void)
        {
            static std::string str("LogFilePath");
            return str;
        }
    public:
        static std::string const& ItemName_Language(void)
        {
            static std::string str("Language");
            return str;
        }
    public:
        static std::string const& ItemName_UserExperience(void)
        {
            static std::string str("UserExperience");
            return str;
        }
    public:
        static std::string const& ItemName_ExecConfigs(void)
        {
            static std::string str("ExecConfigs");
            return str;
        }
    public:
        static std::string const& ItemName_EnforceAPICompatibilityCheck(void)
        {
            static std::string str("EnforceAPICompatibilityCheck");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructConfig");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("23.6");
        return str;
    }
public:
    CStructConfig(void)
    {
        try
        {
            Construct_ProjectsDataPath();
            Construct_TempDataPath();
            Construct_FirmwarePath();
            Construct_DataArchiveRootPath();
            Construct_LogFilePath();
            Construct_Language();
            Construct_UserExperience();
            Construct_ExecConfigs();
            Construct_EnforceAPICompatibilityCheck();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructConfig(const CStructConfig& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CStructConfig(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_ProjectsDataPath();
            Construct_TempDataPath();
            Construct_FirmwarePath();
            Construct_DataArchiveRootPath();
            Construct_LogFilePath();
            Construct_Language();
            Construct_UserExperience();
            Construct_ExecConfigs();
            Construct_EnforceAPICompatibilityCheck();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructConfig(void)
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
            Initialize_ProjectsDataPath();
            Initialize_TempDataPath();
            Initialize_FirmwarePath();
            Initialize_DataArchiveRootPath();
            Initialize_LogFilePath();
            Initialize_Language();
            Initialize_UserExperience();
            Initialize_ExecConfigs();
            Initialize_EnforceAPICompatibilityCheck();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item ProjectsDataPath (Type: "std::string")
    protected:
        void Construct_ProjectsDataPath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProjectsDataPath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ProjectsDataPath()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ProjectsDataPath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProjectsDataPath()))
                {
                    Construct_ProjectsDataPath();
                }
                if ((*Value()).hasMember(ItemName_ProjectsDataPath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ProjectsDataPath()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ProjectsDataPath(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ProjectsDataPath()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ProjectsDataPath(void) const
        {
            return (*Value())[ItemName_ProjectsDataPath()];
        }
        bool Get_ProjectsDataPath(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ProjectsDataPath()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ProjectsDataPath()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item TempDataPath (Type: "std::string")
    protected:
        void Construct_TempDataPath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TempDataPath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_TempDataPath()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_TempDataPath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TempDataPath()))
                {
                    Construct_TempDataPath();
                }
                if ((*Value()).hasMember(ItemName_TempDataPath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_TempDataPath()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TempDataPath(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_TempDataPath()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_TempDataPath(void) const
        {
            return (*Value())[ItemName_TempDataPath()];
        }
        bool Get_TempDataPath(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TempDataPath()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_TempDataPath()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item FirmwarePath (Type: "std::string")
    protected:
        void Construct_FirmwarePath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FirmwarePath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FirmwarePath()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_FirmwarePath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FirmwarePath()))
                {
                    Construct_FirmwarePath();
                }
                if ((*Value()).hasMember(ItemName_FirmwarePath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FirmwarePath()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FirmwarePath(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_FirmwarePath()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_FirmwarePath(void) const
        {
            return (*Value())[ItemName_FirmwarePath()];
        }
        bool Get_FirmwarePath(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FirmwarePath()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_FirmwarePath()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item DataArchiveRootPath (Type: "std::string")
    protected:
        void Construct_DataArchiveRootPath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataArchiveRootPath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DataArchiveRootPath()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DataArchiveRootPath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataArchiveRootPath()))
                {
                    Construct_DataArchiveRootPath();
                }
                if ((*Value()).hasMember(ItemName_DataArchiveRootPath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DataArchiveRootPath()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DataArchiveRootPath(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_DataArchiveRootPath()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DataArchiveRootPath(void) const
        {
            return (*Value())[ItemName_DataArchiveRootPath()];
        }
        bool Get_DataArchiveRootPath(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DataArchiveRootPath()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DataArchiveRootPath()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item LogFilePath (Type: "std::string")
    protected:
        void Construct_LogFilePath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LogFilePath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_LogFilePath()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_LogFilePath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LogFilePath()))
                {
                    Construct_LogFilePath();
                }
                if ((*Value()).hasMember(ItemName_LogFilePath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_LogFilePath()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LogFilePath(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_LogFilePath()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_LogFilePath(void) const
        {
            return (*Value())[ItemName_LogFilePath()];
        }
        bool Get_LogFilePath(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LogFilePath()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_LogFilePath()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Language (Type: "std::string")
    protected:
        void Construct_Language(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Language()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Language()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Language(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Language()))
                {
                    Construct_Language();
                }
                if ((*Value()).hasMember(ItemName_Language()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Language()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Language(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Language()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Language(void) const
        {
            return (*Value())[ItemName_Language()];
        }
        bool Get_Language(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Language()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Language()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item UserExperience (Type: "std::string")
    protected:
        void Construct_UserExperience(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UserExperience()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_UserExperience()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_UserExperience(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UserExperience()))
                {
                    Construct_UserExperience();
                }
                if ((*Value()).hasMember(ItemName_UserExperience()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_UserExperience()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_UserExperience(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_UserExperience()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_UserExperience(void) const
        {
            return (*Value())[ItemName_UserExperience()];
        }
        bool Get_UserExperience(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_UserExperience()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_UserExperience()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ExecConfigs (Type: "CStructExecConfig[0]")
    protected:
        void Construct_ExecConfigs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ExecConfigs()))
                {
                    CStructExecConfig InitValue;
                    (*Value())[ItemName_ExecConfigs()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_ExecConfigs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ExecConfigs()))
                {
                    Construct_ExecConfigs();
                }
                if ((*Value()).hasMember(ItemName_ExecConfigs()))
                {
                    CStructExecConfig InitValue;
                    (*Value())[ItemName_ExecConfigs()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_ExecConfigs(int NewSize)
        {
            try
            {
                CStructExecConfig InitValue;
                (*Value())[ItemName_ExecConfigs()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_ExecConfigs(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ExecConfigs()))
                {
                    return (*Value())[ItemName_ExecConfigs()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_ExecConfigs(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ExecConfigs()))
                {
                    (*Value())[ItemName_ExecConfigs()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_ExecConfigs(int ArrayIndex, CStructExecConfig SetValue)
        {
            try
            {
                (*Value())[ItemName_ExecConfigs()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_ExecConfigs(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ExecConfigs()))
                {
                    (*Value())[ItemName_ExecConfigs()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ExecConfigs(int ArrayIndex, const CStructExecConfig& SetValue)
        {
            try
            {
                (*Value())[ItemName_ExecConfigs()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_ExecConfigs()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructExecConfig Get_ExecConfigs(int ArrayIndex) const
        {
            return (*Value())[ItemName_ExecConfigs()][ArrayIndex];
        }
        bool Get_ExecConfigs(int ArrayIndex, CStructExecConfig& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ExecConfigs()))
                {
                    if (((*Value())[ItemName_ExecConfigs()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_ExecConfigs()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item EnforceAPICompatibilityCheck (Type: "bool")
protected:
    void Construct_EnforceAPICompatibilityCheck(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_EnforceAPICompatibilityCheck()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_EnforceAPICompatibilityCheck()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_EnforceAPICompatibilityCheck(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_EnforceAPICompatibilityCheck()))
                {
                    Construct_EnforceAPICompatibilityCheck();
                }
                if ((*Value()).hasMember(ItemName_EnforceAPICompatibilityCheck()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_EnforceAPICompatibilityCheck()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_EnforceAPICompatibilityCheck(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_EnforceAPICompatibilityCheck()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_EnforceAPICompatibilityCheck(void) const
        {
            bool GetValue = (*Value())[ItemName_EnforceAPICompatibilityCheck()];
            return (bool)GetValue;
        }
        bool Get_EnforceAPICompatibilityCheck(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_EnforceAPICompatibilityCheck()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_EnforceAPICompatibilityCheck()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructConfig


//------------------------------------------------------------------------
// giservice_ConfigAPI::CStructUpdatePartConfig
//------------------------------------------------------------------------
class CStructUpdatePartConfig : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Name(void)
        {
            static std::string str("Name");
            return str;
        }
    public:
        static std::string const& ItemName_Version(void)
        {
            static std::string str("Version");
            return str;
        }
    public:
        static std::string const& ItemName_Changelog(void)
        {
            static std::string str("Changelog");
            return str;
        }
    public:
        static std::string const& ItemName_UpdateFiles(void)
        {
            static std::string str("UpdateFiles");
            return str;
        }
    public:
        static std::string const& ItemName_RemoveFiles(void)
        {
            static std::string str("RemoveFiles");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructUpdatePartConfig");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("23.7");
        return str;
    }
public:
    CStructUpdatePartConfig(void)
    {
        try
        {
            Construct_Name();
            Construct_Version();
            Construct_Changelog();
            Construct_UpdateFiles();
            Construct_RemoveFiles();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructUpdatePartConfig(const CStructUpdatePartConfig& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CStructUpdatePartConfig(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_Name();
            Construct_Version();
            Construct_Changelog();
            Construct_UpdateFiles();
            Construct_RemoveFiles();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructUpdatePartConfig(void)
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
            Initialize_Version();
            Initialize_Changelog();
            Initialize_UpdateFiles();
            Initialize_RemoveFiles();
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
    // Item Version (Type: "std::string")
    protected:
        void Construct_Version(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Version()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Version()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Version(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Version()))
                {
                    Construct_Version();
                }
                if ((*Value()).hasMember(ItemName_Version()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Version()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Version(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Version()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Version(void) const
        {
            return (*Value())[ItemName_Version()];
        }
        bool Get_Version(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Version()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Version()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Changelog (Type: "std::string")
    protected:
        void Construct_Changelog(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Changelog()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Changelog()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Changelog(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Changelog()))
                {
                    Construct_Changelog();
                }
                if ((*Value()).hasMember(ItemName_Changelog()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Changelog()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Changelog(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Changelog()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Changelog(void) const
        {
            return (*Value())[ItemName_Changelog()];
        }
        bool Get_Changelog(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Changelog()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Changelog()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item UpdateFiles (Type: "std::string[0]")
    protected:
        void Construct_UpdateFiles(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UpdateFiles()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_UpdateFiles()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_UpdateFiles(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UpdateFiles()))
                {
                    Construct_UpdateFiles();
                }
                if ((*Value()).hasMember(ItemName_UpdateFiles()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_UpdateFiles()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_UpdateFiles(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_UpdateFiles()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_UpdateFiles(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_UpdateFiles()))
                {
                    return (*Value())[ItemName_UpdateFiles()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_UpdateFiles(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_UpdateFiles()))
                {
                    (*Value())[ItemName_UpdateFiles()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_UpdateFiles(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_UpdateFiles()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_UpdateFiles(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_UpdateFiles()))
                {
                    (*Value())[ItemName_UpdateFiles()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_UpdateFiles(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_UpdateFiles())
                {
                    SetSize_UpdateFiles(ArrayIndex + 1);
                }
                (*Value())[ItemName_UpdateFiles()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_UpdateFiles(int ArrayIndex) const
        {
            return (*Value())[ItemName_UpdateFiles()][ArrayIndex];
        }
        bool Get_UpdateFiles(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_UpdateFiles()))
                {
                    if (((*Value())[ItemName_UpdateFiles()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_UpdateFiles()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item RemoveFiles (Type: "std::string[0]")
    protected:
        void Construct_RemoveFiles(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RemoveFiles()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RemoveFiles()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_RemoveFiles(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RemoveFiles()))
                {
                    Construct_RemoveFiles();
                }
                if ((*Value()).hasMember(ItemName_RemoveFiles()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RemoveFiles()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_RemoveFiles(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_RemoveFiles()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_RemoveFiles(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_RemoveFiles()))
                {
                    return (*Value())[ItemName_RemoveFiles()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_RemoveFiles(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_RemoveFiles()))
                {
                    (*Value())[ItemName_RemoveFiles()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_RemoveFiles(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_RemoveFiles()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_RemoveFiles(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_RemoveFiles()))
                {
                    (*Value())[ItemName_RemoveFiles()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RemoveFiles(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_RemoveFiles())
                {
                    SetSize_RemoveFiles(ArrayIndex + 1);
                }
                (*Value())[ItemName_RemoveFiles()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_RemoveFiles(int ArrayIndex) const
        {
            return (*Value())[ItemName_RemoveFiles()][ArrayIndex];
        }
        bool Get_RemoveFiles(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_RemoveFiles()))
                {
                    if (((*Value())[ItemName_RemoveFiles()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_RemoveFiles()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructUpdatePartConfig


//------------------------------------------------------------------------
// giservice_ConfigAPI::CStructUpdateConfig
//------------------------------------------------------------------------
class CStructUpdateConfig : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_BuildVersion(void)
        {
            static std::string str("BuildVersion");
            return str;
        }
    public:
        static std::string const& ItemName_BuildDate(void)
        {
            static std::string str("BuildDate");
            return str;
        }
    public:
        static std::string const& ItemName_Parts(void)
        {
            static std::string str("Parts");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructUpdateConfig");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("23.8");
        return str;
    }
public:
    CStructUpdateConfig(void)
    {
        try
        {
            Construct_BuildVersion();
            Construct_BuildDate();
            Construct_Parts();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructUpdateConfig(const CStructUpdateConfig& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CStructUpdateConfig(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_BuildVersion();
            Construct_BuildDate();
            Construct_Parts();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructUpdateConfig(void)
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
            Initialize_BuildVersion();
            Initialize_BuildDate();
            Initialize_Parts();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item BuildVersion (Type: "std::string")
    protected:
        void Construct_BuildVersion(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_BuildVersion()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_BuildVersion()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_BuildVersion(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_BuildVersion()))
                {
                    Construct_BuildVersion();
                }
                if ((*Value()).hasMember(ItemName_BuildVersion()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_BuildVersion()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_BuildVersion(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_BuildVersion()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_BuildVersion(void) const
        {
            return (*Value())[ItemName_BuildVersion()];
        }
        bool Get_BuildVersion(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_BuildVersion()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_BuildVersion()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item BuildDate (Type: "std::string")
    protected:
        void Construct_BuildDate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_BuildDate()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_BuildDate()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_BuildDate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_BuildDate()))
                {
                    Construct_BuildDate();
                }
                if ((*Value()).hasMember(ItemName_BuildDate()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_BuildDate()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_BuildDate(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_BuildDate()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_BuildDate(void) const
        {
            return (*Value())[ItemName_BuildDate()];
        }
        bool Get_BuildDate(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_BuildDate()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_BuildDate()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Parts (Type: "CStructUpdatePartConfig[0]")
    protected:
        void Construct_Parts(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Parts()))
                {
                    CStructUpdatePartConfig InitValue;
                    (*Value())[ItemName_Parts()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Parts(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Parts()))
                {
                    Construct_Parts();
                }
                if ((*Value()).hasMember(ItemName_Parts()))
                {
                    CStructUpdatePartConfig InitValue;
                    (*Value())[ItemName_Parts()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Parts(int NewSize)
        {
            try
            {
                CStructUpdatePartConfig InitValue;
                (*Value())[ItemName_Parts()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Parts(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Parts()))
                {
                    return (*Value())[ItemName_Parts()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Parts(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Parts()))
                {
                    (*Value())[ItemName_Parts()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Parts(int ArrayIndex, CStructUpdatePartConfig SetValue)
        {
            try
            {
                (*Value())[ItemName_Parts()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Parts(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Parts()))
                {
                    (*Value())[ItemName_Parts()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Parts(int ArrayIndex, const CStructUpdatePartConfig& SetValue)
        {
            try
            {
                (*Value())[ItemName_Parts()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Parts()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructUpdatePartConfig Get_Parts(int ArrayIndex) const
        {
            return (*Value())[ItemName_Parts()][ArrayIndex];
        }
        bool Get_Parts(int ArrayIndex, CStructUpdatePartConfig& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Parts()))
                {
                    if (((*Value())[ItemName_Parts()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Parts()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructUpdateConfig


//------------------------------------------------------------------------
// giservice_ConfigAPI::CStructNetworkAdapter
//------------------------------------------------------------------------
class CStructNetworkAdapter : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_IPAddress(void)
        {
            static std::string str("IPAddress");
            return str;
        }
    public:
        static std::string const& ItemName_SubnetMask(void)
        {
            static std::string str("SubnetMask");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructNetworkAdapter");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("23.9");
        return str;
    }
public:
    CStructNetworkAdapter(void)
    {
        try
        {
            Construct_IPAddress();
            Construct_SubnetMask();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructNetworkAdapter(const CStructNetworkAdapter& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CStructNetworkAdapter(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_IPAddress();
            Construct_SubnetMask();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructNetworkAdapter(void)
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
            Initialize_IPAddress();
            Initialize_SubnetMask();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item IPAddress (Type: "std::string")
    protected:
        void Construct_IPAddress(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IPAddress()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_IPAddress()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_IPAddress(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IPAddress()))
                {
                    Construct_IPAddress();
                }
                if ((*Value()).hasMember(ItemName_IPAddress()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_IPAddress()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IPAddress(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_IPAddress()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_IPAddress(void) const
        {
            return (*Value())[ItemName_IPAddress()];
        }
        bool Get_IPAddress(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IPAddress()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_IPAddress()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item SubnetMask (Type: "std::string")
    protected:
        void Construct_SubnetMask(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SubnetMask()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SubnetMask()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SubnetMask(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SubnetMask()))
                {
                    Construct_SubnetMask();
                }
                if ((*Value()).hasMember(ItemName_SubnetMask()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SubnetMask()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SubnetMask(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_SubnetMask()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_SubnetMask(void) const
        {
            return (*Value())[ItemName_SubnetMask()];
        }
        bool Get_SubnetMask(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SubnetMask()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_SubnetMask()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructNetworkAdapter


//------------------------------------------------------------------------
// giservice_ConfigAPI::CStructGlobalSettings
//------------------------------------------------------------------------
class CStructGlobalSettings : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_AppDataPath(void)
        {
            static std::string str("AppDataPath");
            return str;
        }
    public:
        static std::string const& ItemName_BaseDirectory(void)
        {
            static std::string str("BaseDirectory");
            return str;
        }
    public:
        static std::string const& ItemName_Port(void)
        {
            static std::string str("Port");
            return str;
        }
    public:
        static std::string const& ItemName_PortRange(void)
        {
            static std::string str("PortRange");
            return str;
        }
    public:
        static std::string const& ItemName_wwwroot(void)
        {
            static std::string str("wwwroot");
            return str;
        }
    public:
        static std::string const& ItemName_RemoteRoutes(void)
        {
            static std::string str("RemoteRoutes");
            return str;
        }
    public:
        static std::string const& ItemName_UpdateURL(void)
        {
            static std::string str("UpdateURL");
            return str;
        }
    public:
        static std::string const& ItemName_LicenseServerURL(void)
        {
            static std::string str("LicenseServerURL");
            return str;
        }
    public:
        static std::string const& ItemName_CloudEnvironment(void)
        {
            static std::string str("CloudEnvironment");
            return str;
        }
    public:
        static std::string const& ItemName_UseProjectRepository(void)
        {
            static std::string str("UseProjectRepository");
            return str;
        }
    public:
        static std::string const& ItemName_LicenseServerPort(void)
        {
            static std::string str("LicenseServerPort");
            return str;
        }
    public:
        static std::string const& ItemName_Instance(void)
        {
            static std::string str("Instance");
            return str;
        }
    public:
        static std::string const& ItemName_NetworkAdapters(void)
        {
            static std::string str("NetworkAdapters");
            return str;
        }
    public:
        static std::string const& ItemName_Features(void)
        {
            static std::string str("Features");
            return str;
        }
    public:
        static std::string const& ItemName_DefaultStartPage(void)
        {
            static std::string str("DefaultStartPage");
            return str;
        }
    public:
        static std::string const& ItemName_WebSocketConnectionURL(void)
        {
            static std::string str("WebSocketConnectionURL");
            return str;
        }
    public:
        static std::string const& ItemName_DashboardURL(void)
        {
            static std::string str("DashboardURL");
            return str;
        }
    public:
        static std::string const& ItemName_SecureMode(void)
        {
            static std::string str("SecureMode");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructGlobalSettings");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("23.10");
        return str;
    }
public:
    CStructGlobalSettings(void)
    {
        try
        {
            Construct_AppDataPath();
            Construct_BaseDirectory();
            Construct_Port();
            Construct_PortRange();
            Construct_wwwroot();
            Construct_RemoteRoutes();
            Construct_UpdateURL();
            Construct_LicenseServerURL();
            Construct_CloudEnvironment();
            Construct_UseProjectRepository();
            Construct_LicenseServerPort();
            Construct_Instance();
            Construct_NetworkAdapters();
            Construct_Features();
            Construct_DefaultStartPage();
            Construct_WebSocketConnectionURL();
            Construct_DashboardURL();
            Construct_SecureMode();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructGlobalSettings(const CStructGlobalSettings& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CStructGlobalSettings(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_AppDataPath();
            Construct_BaseDirectory();
            Construct_Port();
            Construct_PortRange();
            Construct_wwwroot();
            Construct_RemoteRoutes();
            Construct_UpdateURL();
            Construct_LicenseServerURL();
            Construct_CloudEnvironment();
            Construct_UseProjectRepository();
            Construct_LicenseServerPort();
            Construct_Instance();
            Construct_NetworkAdapters();
            Construct_Features();
            Construct_DefaultStartPage();
            Construct_WebSocketConnectionURL();
            Construct_DashboardURL();
            Construct_SecureMode();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructGlobalSettings(void)
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
            Initialize_AppDataPath();
            Initialize_BaseDirectory();
            Initialize_Port();
            Initialize_PortRange();
            Initialize_wwwroot();
            Initialize_RemoteRoutes();
            Initialize_UpdateURL();
            Initialize_LicenseServerURL();
            Initialize_CloudEnvironment();
            Initialize_UseProjectRepository();
            Initialize_LicenseServerPort();
            Initialize_Instance();
            Initialize_NetworkAdapters();
            Initialize_Features();
            Initialize_DefaultStartPage();
            Initialize_WebSocketConnectionURL();
            Initialize_DashboardURL();
            Initialize_SecureMode();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item AppDataPath (Type: "std::string")
    protected:
        void Construct_AppDataPath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_AppDataPath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_AppDataPath()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_AppDataPath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_AppDataPath()))
                {
                    Construct_AppDataPath();
                }
                if ((*Value()).hasMember(ItemName_AppDataPath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_AppDataPath()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_AppDataPath(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_AppDataPath()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_AppDataPath(void) const
        {
            return (*Value())[ItemName_AppDataPath()];
        }
        bool Get_AppDataPath(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_AppDataPath()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_AppDataPath()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item BaseDirectory (Type: "std::string")
    protected:
        void Construct_BaseDirectory(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_BaseDirectory()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_BaseDirectory()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_BaseDirectory(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_BaseDirectory()))
                {
                    Construct_BaseDirectory();
                }
                if ((*Value()).hasMember(ItemName_BaseDirectory()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_BaseDirectory()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_BaseDirectory(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_BaseDirectory()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_BaseDirectory(void) const
        {
            return (*Value())[ItemName_BaseDirectory()];
        }
        bool Get_BaseDirectory(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_BaseDirectory()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_BaseDirectory()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Port (Type: "int32_t")
protected:
    void Construct_Port(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Port()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Port()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Port(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Port()))
                {
                    Construct_Port();
                }
                if ((*Value()).hasMember(ItemName_Port()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Port()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Port(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Port()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Port(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Port()];
            return (int32_t)GetValue;
        }
        bool Get_Port(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Port()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Port()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item PortRange (Type: "CStructPortRange")
    protected:
        void Construct_PortRange(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PortRange()))
                {
                    CStructPortRange InitValue;
                    (*Value())[ItemName_PortRange()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_PortRange(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PortRange()))
                {
                    Construct_PortRange();
                }
                if ((*Value()).hasMember(ItemName_PortRange()))
                {
                    CStructPortRange InitValue;
                    (*Value())[ItemName_PortRange()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_PortRange(const CStructPortRange& SetValue)
        {
            try
            {
                (*Value())[ItemName_PortRange()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructPortRange Get_PortRange(void) const
        {
            return (*Value())[ItemName_PortRange()];
        }
        bool Get_PortRange(CStructPortRange& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_PortRange()]).valid())
                {
                    GetValue = (*Value())[ItemName_PortRange()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item wwwroot (Type: "std::string")
    protected:
        void Construct_wwwroot(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_wwwroot()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_wwwroot()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_wwwroot(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_wwwroot()))
                {
                    Construct_wwwroot();
                }
                if ((*Value()).hasMember(ItemName_wwwroot()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_wwwroot()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_wwwroot(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_wwwroot()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_wwwroot(void) const
        {
            return (*Value())[ItemName_wwwroot()];
        }
        bool Get_wwwroot(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_wwwroot()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_wwwroot()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item RemoteRoutes (Type: "CStructRemoteRoute[0]")
    protected:
        void Construct_RemoteRoutes(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RemoteRoutes()))
                {
                    CStructRemoteRoute InitValue;
                    (*Value())[ItemName_RemoteRoutes()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_RemoteRoutes(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RemoteRoutes()))
                {
                    Construct_RemoteRoutes();
                }
                if ((*Value()).hasMember(ItemName_RemoteRoutes()))
                {
                    CStructRemoteRoute InitValue;
                    (*Value())[ItemName_RemoteRoutes()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_RemoteRoutes(int NewSize)
        {
            try
            {
                CStructRemoteRoute InitValue;
                (*Value())[ItemName_RemoteRoutes()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_RemoteRoutes(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_RemoteRoutes()))
                {
                    return (*Value())[ItemName_RemoteRoutes()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_RemoteRoutes(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_RemoteRoutes()))
                {
                    (*Value())[ItemName_RemoteRoutes()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_RemoteRoutes(int ArrayIndex, CStructRemoteRoute SetValue)
        {
            try
            {
                (*Value())[ItemName_RemoteRoutes()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_RemoteRoutes(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_RemoteRoutes()))
                {
                    (*Value())[ItemName_RemoteRoutes()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RemoteRoutes(int ArrayIndex, const CStructRemoteRoute& SetValue)
        {
            try
            {
                (*Value())[ItemName_RemoteRoutes()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_RemoteRoutes()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructRemoteRoute Get_RemoteRoutes(int ArrayIndex) const
        {
            return (*Value())[ItemName_RemoteRoutes()][ArrayIndex];
        }
        bool Get_RemoteRoutes(int ArrayIndex, CStructRemoteRoute& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_RemoteRoutes()))
                {
                    if (((*Value())[ItemName_RemoteRoutes()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_RemoteRoutes()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item UpdateURL (Type: "std::string")
    protected:
        void Construct_UpdateURL(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UpdateURL()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_UpdateURL()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_UpdateURL(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UpdateURL()))
                {
                    Construct_UpdateURL();
                }
                if ((*Value()).hasMember(ItemName_UpdateURL()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_UpdateURL()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_UpdateURL(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_UpdateURL()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_UpdateURL(void) const
        {
            return (*Value())[ItemName_UpdateURL()];
        }
        bool Get_UpdateURL(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_UpdateURL()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_UpdateURL()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item LicenseServerURL (Type: "std::string")
    protected:
        void Construct_LicenseServerURL(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LicenseServerURL()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_LicenseServerURL()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_LicenseServerURL(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LicenseServerURL()))
                {
                    Construct_LicenseServerURL();
                }
                if ((*Value()).hasMember(ItemName_LicenseServerURL()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_LicenseServerURL()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LicenseServerURL(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_LicenseServerURL()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_LicenseServerURL(void) const
        {
            return (*Value())[ItemName_LicenseServerURL()];
        }
        bool Get_LicenseServerURL(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LicenseServerURL()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_LicenseServerURL()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item CloudEnvironment (Type: "bool")
protected:
    void Construct_CloudEnvironment(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_CloudEnvironment()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_CloudEnvironment()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_CloudEnvironment(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CloudEnvironment()))
                {
                    Construct_CloudEnvironment();
                }
                if ((*Value()).hasMember(ItemName_CloudEnvironment()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_CloudEnvironment()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_CloudEnvironment(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_CloudEnvironment()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_CloudEnvironment(void) const
        {
            bool GetValue = (*Value())[ItemName_CloudEnvironment()];
            return (bool)GetValue;
        }
        bool Get_CloudEnvironment(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_CloudEnvironment()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_CloudEnvironment()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item UseProjectRepository (Type: "bool")
protected:
    void Construct_UseProjectRepository(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_UseProjectRepository()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_UseProjectRepository()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_UseProjectRepository(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UseProjectRepository()))
                {
                    Construct_UseProjectRepository();
                }
                if ((*Value()).hasMember(ItemName_UseProjectRepository()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_UseProjectRepository()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_UseProjectRepository(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_UseProjectRepository()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_UseProjectRepository(void) const
        {
            bool GetValue = (*Value())[ItemName_UseProjectRepository()];
            return (bool)GetValue;
        }
        bool Get_UseProjectRepository(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_UseProjectRepository()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_UseProjectRepository()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item LicenseServerPort (Type: "int32_t")
protected:
    void Construct_LicenseServerPort(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_LicenseServerPort()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_LicenseServerPort()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_LicenseServerPort(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LicenseServerPort()))
                {
                    Construct_LicenseServerPort();
                }
                if ((*Value()).hasMember(ItemName_LicenseServerPort()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_LicenseServerPort()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LicenseServerPort(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_LicenseServerPort()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_LicenseServerPort(void) const
        {
            int32_t GetValue = (*Value())[ItemName_LicenseServerPort()];
            return (int32_t)GetValue;
        }
        bool Get_LicenseServerPort(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LicenseServerPort()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_LicenseServerPort()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Instance (Type: "std::string")
    protected:
        void Construct_Instance(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Instance()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Instance()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Instance(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Instance()))
                {
                    Construct_Instance();
                }
                if ((*Value()).hasMember(ItemName_Instance()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Instance()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Instance(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Instance()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Instance(void) const
        {
            return (*Value())[ItemName_Instance()];
        }
        bool Get_Instance(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Instance()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Instance()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item NetworkAdapters (Type: "CStructNetworkAdapter[0]")
    protected:
        void Construct_NetworkAdapters(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_NetworkAdapters()))
                {
                    CStructNetworkAdapter InitValue;
                    (*Value())[ItemName_NetworkAdapters()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_NetworkAdapters(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_NetworkAdapters()))
                {
                    Construct_NetworkAdapters();
                }
                if ((*Value()).hasMember(ItemName_NetworkAdapters()))
                {
                    CStructNetworkAdapter InitValue;
                    (*Value())[ItemName_NetworkAdapters()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_NetworkAdapters(int NewSize)
        {
            try
            {
                CStructNetworkAdapter InitValue;
                (*Value())[ItemName_NetworkAdapters()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_NetworkAdapters(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_NetworkAdapters()))
                {
                    return (*Value())[ItemName_NetworkAdapters()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_NetworkAdapters(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_NetworkAdapters()))
                {
                    (*Value())[ItemName_NetworkAdapters()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_NetworkAdapters(int ArrayIndex, CStructNetworkAdapter SetValue)
        {
            try
            {
                (*Value())[ItemName_NetworkAdapters()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_NetworkAdapters(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_NetworkAdapters()))
                {
                    (*Value())[ItemName_NetworkAdapters()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_NetworkAdapters(int ArrayIndex, const CStructNetworkAdapter& SetValue)
        {
            try
            {
                (*Value())[ItemName_NetworkAdapters()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_NetworkAdapters()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructNetworkAdapter Get_NetworkAdapters(int ArrayIndex) const
        {
            return (*Value())[ItemName_NetworkAdapters()][ArrayIndex];
        }
        bool Get_NetworkAdapters(int ArrayIndex, CStructNetworkAdapter& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_NetworkAdapters()))
                {
                    if (((*Value())[ItemName_NetworkAdapters()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_NetworkAdapters()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Features (Type: "std::string[0]")
    protected:
        void Construct_Features(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Features()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Features()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Features(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Features()))
                {
                    Construct_Features();
                }
                if ((*Value()).hasMember(ItemName_Features()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Features()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Features(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_Features()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Features(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Features()))
                {
                    return (*Value())[ItemName_Features()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Features(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Features()))
                {
                    (*Value())[ItemName_Features()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Features(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_Features()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Features(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Features()))
                {
                    (*Value())[ItemName_Features()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Features(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_Features())
                {
                    SetSize_Features(ArrayIndex + 1);
                }
                (*Value())[ItemName_Features()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Features(int ArrayIndex) const
        {
            return (*Value())[ItemName_Features()][ArrayIndex];
        }
        bool Get_Features(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Features()))
                {
                    if (((*Value())[ItemName_Features()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_Features()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item DefaultStartPage (Type: "std::string")
    protected:
        void Construct_DefaultStartPage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DefaultStartPage()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DefaultStartPage()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DefaultStartPage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DefaultStartPage()))
                {
                    Construct_DefaultStartPage();
                }
                if ((*Value()).hasMember(ItemName_DefaultStartPage()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DefaultStartPage()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DefaultStartPage(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_DefaultStartPage()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DefaultStartPage(void) const
        {
            return (*Value())[ItemName_DefaultStartPage()];
        }
        bool Get_DefaultStartPage(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DefaultStartPage()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DefaultStartPage()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item WebSocketConnectionURL (Type: "std::string")
    protected:
        void Construct_WebSocketConnectionURL(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_WebSocketConnectionURL()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_WebSocketConnectionURL()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_WebSocketConnectionURL(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_WebSocketConnectionURL()))
                {
                    Construct_WebSocketConnectionURL();
                }
                if ((*Value()).hasMember(ItemName_WebSocketConnectionURL()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_WebSocketConnectionURL()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_WebSocketConnectionURL(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_WebSocketConnectionURL()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_WebSocketConnectionURL(void) const
        {
            return (*Value())[ItemName_WebSocketConnectionURL()];
        }
        bool Get_WebSocketConnectionURL(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_WebSocketConnectionURL()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_WebSocketConnectionURL()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item DashboardURL (Type: "std::string")
    protected:
        void Construct_DashboardURL(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DashboardURL()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DashboardURL()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DashboardURL(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DashboardURL()))
                {
                    Construct_DashboardURL();
                }
                if ((*Value()).hasMember(ItemName_DashboardURL()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DashboardURL()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DashboardURL(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_DashboardURL()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DashboardURL(void) const
        {
            return (*Value())[ItemName_DashboardURL()];
        }
        bool Get_DashboardURL(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DashboardURL()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DashboardURL()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item SecureMode (Type: "bool")
protected:
    void Construct_SecureMode(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_SecureMode()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_SecureMode()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_SecureMode(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SecureMode()))
                {
                    Construct_SecureMode();
                }
                if ((*Value()).hasMember(ItemName_SecureMode()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_SecureMode()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SecureMode(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_SecureMode()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_SecureMode(void) const
        {
            bool GetValue = (*Value())[ItemName_SecureMode()];
            return (bool)GetValue;
        }
        bool Get_SecureMode(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SecureMode()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_SecureMode()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructGlobalSettings


//------------------------------------------------------------------------
// giservice_ConfigAPI::CStructGroup
//------------------------------------------------------------------------
class CStructGroup : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_ID(void)
        {
            static std::string str("ID");
            return str;
        }
    public:
        static std::string const& ItemName_Name(void)
        {
            static std::string str("Name");
            return str;
        }
    public:
        static std::string const& ItemName_Elements(void)
        {
            static std::string str("Elements");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructGroup");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("23.11");
        return str;
    }
public:
    CStructGroup(void)
    {
        try
        {
            Construct_ID();
            Construct_Name();
            Construct_Elements();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructGroup(const CStructGroup& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CStructGroup(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_ID();
            Construct_Name();
            Construct_Elements();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructGroup(void)
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
            Initialize_ID();
            Initialize_Name();
            Initialize_Elements();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item ID (Type: "std::string")
    protected:
        void Construct_ID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ID()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ID()))
                {
                    Construct_ID();
                }
                if ((*Value()).hasMember(ItemName_ID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ID()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ID(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ID()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ID(void) const
        {
            return (*Value())[ItemName_ID()];
        }
        bool Get_ID(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ID()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ID()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
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
    // Item Elements (Type: "std::string[0]")
    protected:
        void Construct_Elements(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Elements()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Elements()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Elements(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Elements()))
                {
                    Construct_Elements();
                }
                if ((*Value()).hasMember(ItemName_Elements()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Elements()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Elements(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_Elements()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Elements(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Elements()))
                {
                    return (*Value())[ItemName_Elements()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Elements(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Elements()))
                {
                    (*Value())[ItemName_Elements()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Elements(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_Elements()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Elements(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Elements()))
                {
                    (*Value())[ItemName_Elements()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Elements(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_Elements())
                {
                    SetSize_Elements(ArrayIndex + 1);
                }
                (*Value())[ItemName_Elements()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Elements(int ArrayIndex) const
        {
            return (*Value())[ItemName_Elements()][ArrayIndex];
        }
        bool Get_Elements(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Elements()))
                {
                    if (((*Value())[ItemName_Elements()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_Elements()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructGroup


//------------------------------------------------------------------------
// giservice_ConfigAPI::CStructProjectMetaData
//------------------------------------------------------------------------
class CStructProjectMetaData : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Groups(void)
        {
            static std::string str("Groups");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructProjectMetaData");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("23.12");
        return str;
    }
public:
    CStructProjectMetaData(void)
    {
        try
        {
            Construct_Groups();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructProjectMetaData(const CStructProjectMetaData& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CStructProjectMetaData(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_Groups();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructProjectMetaData(void)
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
            Initialize_Groups();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item Groups (Type: "CStructGroup[0]")
    protected:
        void Construct_Groups(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Groups()))
                {
                    CStructGroup InitValue;
                    (*Value())[ItemName_Groups()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Groups(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Groups()))
                {
                    Construct_Groups();
                }
                if ((*Value()).hasMember(ItemName_Groups()))
                {
                    CStructGroup InitValue;
                    (*Value())[ItemName_Groups()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Groups(int NewSize)
        {
            try
            {
                CStructGroup InitValue;
                (*Value())[ItemName_Groups()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Groups(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Groups()))
                {
                    return (*Value())[ItemName_Groups()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Groups(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Groups()))
                {
                    (*Value())[ItemName_Groups()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Groups(int ArrayIndex, CStructGroup SetValue)
        {
            try
            {
                (*Value())[ItemName_Groups()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Groups(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Groups()))
                {
                    (*Value())[ItemName_Groups()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Groups(int ArrayIndex, const CStructGroup& SetValue)
        {
            try
            {
                (*Value())[ItemName_Groups()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Groups()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructGroup Get_Groups(int ArrayIndex) const
        {
            return (*Value())[ItemName_Groups()][ArrayIndex];
        }
        bool Get_Groups(int ArrayIndex, CStructGroup& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Groups()))
                {
                    if (((*Value())[ItemName_Groups()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Groups()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructProjectMetaData


//------------------------------------------------------------------------
// giservice_ConfigAPI::CStructDeviceInfo
//------------------------------------------------------------------------
class CStructDeviceInfo : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_DeviceInfo(void)
        {
            static std::string str("DeviceInfo");
            return str;
        }
    public:
        static std::string const& ItemName_SystemState(void)
        {
            static std::string str("SystemState");
            return str;
        }
    public:
        static std::string const& ItemName_ConnectionType(void)
        {
            static std::string str("ConnectionType");
            return str;
        }
    public:
        static std::string const& ItemName_AuthenticationToken(void)
        {
            static std::string str("AuthenticationToken");
            return str;
        }
    public:
        static std::string const& ItemName_Traffic(void)
        {
            static std::string str("Traffic");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructDeviceInfo");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("23.13");
        return str;
    }
public:
    CStructDeviceInfo(void)
    {
        try
        {
            Construct_DeviceInfo();
            Construct_SystemState();
            Construct_ConnectionType();
            Construct_AuthenticationToken();
            Construct_Traffic();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructDeviceInfo(const CStructDeviceInfo& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CStructDeviceInfo(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_DeviceInfo();
            Construct_SystemState();
            Construct_ConnectionType();
            Construct_AuthenticationToken();
            Construct_Traffic();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructDeviceInfo(void)
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
            Initialize_DeviceInfo();
            Initialize_SystemState();
            Initialize_ConnectionType();
            Initialize_AuthenticationToken();
            Initialize_Traffic();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item DeviceInfo (Type: "GInsXmlRpcStdAPI::CGIns_DeviceInfo")
    protected:
        void Construct_DeviceInfo(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceInfo()))
                {
                    GInsXmlRpcStdAPI::CGIns_DeviceInfo InitValue;
                    (*Value())[ItemName_DeviceInfo()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DeviceInfo(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceInfo()))
                {
                    Construct_DeviceInfo();
                }
                if ((*Value()).hasMember(ItemName_DeviceInfo()))
                {
                    GInsXmlRpcStdAPI::CGIns_DeviceInfo InitValue;
                    (*Value())[ItemName_DeviceInfo()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DeviceInfo(const GInsXmlRpcStdAPI::CGIns_DeviceInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_DeviceInfo()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_DeviceInfo Get_DeviceInfo(void) const
        {
            return (*Value())[ItemName_DeviceInfo()];
        }
        bool Get_DeviceInfo(GInsXmlRpcStdAPI::CGIns_DeviceInfo& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DeviceInfo()]).valid())
                {
                    GetValue = (*Value())[ItemName_DeviceInfo()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item SystemState (Type: "GInsXmlRpcStdAPI::CGIns_Info_Device_SystemState")
    protected:
        void Construct_SystemState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SystemState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_Device_SystemState InitValue;
                    (*Value())[ItemName_SystemState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SystemState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SystemState()))
                {
                    Construct_SystemState();
                }
                if ((*Value()).hasMember(ItemName_SystemState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_Device_SystemState InitValue;
                    (*Value())[ItemName_SystemState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SystemState(const GInsXmlRpcStdAPI::CGIns_Info_Device_SystemState& SetValue)
        {
            try
            {
                (*Value())[ItemName_SystemState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_Device_SystemState Get_SystemState(void) const
        {
            return (*Value())[ItemName_SystemState()];
        }
        bool Get_SystemState(GInsXmlRpcStdAPI::CGIns_Info_Device_SystemState& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SystemState()]).valid())
                {
                    GetValue = (*Value())[ItemName_SystemState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ConnectionType (Type: "std::string")
    protected:
        void Construct_ConnectionType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConnectionType()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ConnectionType()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ConnectionType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConnectionType()))
                {
                    Construct_ConnectionType();
                }
                if ((*Value()).hasMember(ItemName_ConnectionType()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ConnectionType()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ConnectionType(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ConnectionType()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ConnectionType(void) const
        {
            return (*Value())[ItemName_ConnectionType()];
        }
        bool Get_ConnectionType(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ConnectionType()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ConnectionType()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item AuthenticationToken (Type: "std::string")
    protected:
        void Construct_AuthenticationToken(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_AuthenticationToken()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_AuthenticationToken()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_AuthenticationToken(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_AuthenticationToken()))
                {
                    Construct_AuthenticationToken();
                }
                if ((*Value()).hasMember(ItemName_AuthenticationToken()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_AuthenticationToken()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_AuthenticationToken(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_AuthenticationToken()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_AuthenticationToken(void) const
        {
            return (*Value())[ItemName_AuthenticationToken()];
        }
        bool Get_AuthenticationToken(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_AuthenticationToken()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_AuthenticationToken()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Traffic (Type: "GInsXmlRpcStdAPI::CGIns_Info_NetworkTraffic[0]")
    protected:
        void Construct_Traffic(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Traffic()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_NetworkTraffic InitValue;
                    (*Value())[ItemName_Traffic()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Traffic(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Traffic()))
                {
                    Construct_Traffic();
                }
                if ((*Value()).hasMember(ItemName_Traffic()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_NetworkTraffic InitValue;
                    (*Value())[ItemName_Traffic()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Traffic(int NewSize)
        {
            try
            {
                GInsXmlRpcStdAPI::CGIns_Info_NetworkTraffic InitValue;
                (*Value())[ItemName_Traffic()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Traffic(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Traffic()))
                {
                    return (*Value())[ItemName_Traffic()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Traffic(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Traffic()))
                {
                    (*Value())[ItemName_Traffic()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Traffic(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Info_NetworkTraffic SetValue)
        {
            try
            {
                (*Value())[ItemName_Traffic()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Traffic(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Traffic()))
                {
                    (*Value())[ItemName_Traffic()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Traffic(int ArrayIndex, const GInsXmlRpcStdAPI::CGIns_Info_NetworkTraffic& SetValue)
        {
            try
            {
                (*Value())[ItemName_Traffic()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Traffic()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_NetworkTraffic Get_Traffic(int ArrayIndex) const
        {
            return (*Value())[ItemName_Traffic()][ArrayIndex];
        }
        bool Get_Traffic(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Info_NetworkTraffic& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Traffic()))
                {
                    if (((*Value())[ItemName_Traffic()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Traffic()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructDeviceInfo


//------------------------------------------------------------------------
// giservice_ConfigAPI::CStructProjectInfoEntry
//------------------------------------------------------------------------
class CStructProjectInfoEntry : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_ProjectPath(void)
        {
            static std::string str("ProjectPath");
            return str;
        }
    public:
        static std::string const& ItemName_ProjectName(void)
        {
            static std::string str("ProjectName");
            return str;
        }
    public:
        static std::string const& ItemName_ProjectDate(void)
        {
            static std::string str("ProjectDate");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructProjectInfoEntry");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("23.14");
        return str;
    }
public:
    CStructProjectInfoEntry(void)
    {
        try
        {
            Construct_ProjectPath();
            Construct_ProjectName();
            Construct_ProjectDate();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructProjectInfoEntry(const CStructProjectInfoEntry& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CStructProjectInfoEntry(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_ProjectPath();
            Construct_ProjectName();
            Construct_ProjectDate();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructProjectInfoEntry(void)
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
            Initialize_ProjectPath();
            Initialize_ProjectName();
            Initialize_ProjectDate();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item ProjectPath (Type: "std::string")
    protected:
        void Construct_ProjectPath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProjectPath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ProjectPath()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ProjectPath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProjectPath()))
                {
                    Construct_ProjectPath();
                }
                if ((*Value()).hasMember(ItemName_ProjectPath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ProjectPath()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ProjectPath(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ProjectPath()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ProjectPath(void) const
        {
            return (*Value())[ItemName_ProjectPath()];
        }
        bool Get_ProjectPath(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ProjectPath()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ProjectPath()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ProjectName (Type: "std::string")
    protected:
        void Construct_ProjectName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProjectName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ProjectName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ProjectName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProjectName()))
                {
                    Construct_ProjectName();
                }
                if ((*Value()).hasMember(ItemName_ProjectName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ProjectName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ProjectName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ProjectName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ProjectName(void) const
        {
            return (*Value())[ItemName_ProjectName()];
        }
        bool Get_ProjectName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ProjectName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ProjectName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ProjectDate (Type: "GInsXmlRpcStdAPI::CGIns_Info_DateTimeValue")
    protected:
        void Construct_ProjectDate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProjectDate()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_DateTimeValue InitValue;
                    (*Value())[ItemName_ProjectDate()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ProjectDate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProjectDate()))
                {
                    Construct_ProjectDate();
                }
                if ((*Value()).hasMember(ItemName_ProjectDate()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_DateTimeValue InitValue;
                    (*Value())[ItemName_ProjectDate()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ProjectDate(const GInsXmlRpcStdAPI::CGIns_Info_DateTimeValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_ProjectDate()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_DateTimeValue Get_ProjectDate(void) const
        {
            return (*Value())[ItemName_ProjectDate()];
        }
        bool Get_ProjectDate(GInsXmlRpcStdAPI::CGIns_Info_DateTimeValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ProjectDate()]).valid())
                {
                    GetValue = (*Value())[ItemName_ProjectDate()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructProjectInfoEntry


//------------------------------------------------------------------------
// giservice_ConfigAPI::CStructProjectInfo
//------------------------------------------------------------------------
class CStructProjectInfo : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_LoadedProject(void)
        {
            static std::string str("LoadedProject");
            return str;
        }
    public:
        static std::string const& ItemName_StartedProject(void)
        {
            static std::string str("StartedProject");
            return str;
        }
    public:
        static std::string const& ItemName_AutoStartProject(void)
        {
            static std::string str("AutoStartProject");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructProjectInfo");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("23.15");
        return str;
    }
public:
    CStructProjectInfo(void)
    {
        try
        {
            Construct_LoadedProject();
            Construct_StartedProject();
            Construct_AutoStartProject();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructProjectInfo(const CStructProjectInfo& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CStructProjectInfo(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_LoadedProject();
            Construct_StartedProject();
            Construct_AutoStartProject();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructProjectInfo(void)
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
            Initialize_LoadedProject();
            Initialize_StartedProject();
            Initialize_AutoStartProject();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item LoadedProject (Type: "CStructProjectInfoEntry")
    protected:
        void Construct_LoadedProject(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LoadedProject()))
                {
                    CStructProjectInfoEntry InitValue;
                    (*Value())[ItemName_LoadedProject()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_LoadedProject(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LoadedProject()))
                {
                    Construct_LoadedProject();
                }
                if ((*Value()).hasMember(ItemName_LoadedProject()))
                {
                    CStructProjectInfoEntry InitValue;
                    (*Value())[ItemName_LoadedProject()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LoadedProject(const CStructProjectInfoEntry& SetValue)
        {
            try
            {
                (*Value())[ItemName_LoadedProject()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructProjectInfoEntry Get_LoadedProject(void) const
        {
            return (*Value())[ItemName_LoadedProject()];
        }
        bool Get_LoadedProject(CStructProjectInfoEntry& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LoadedProject()]).valid())
                {
                    GetValue = (*Value())[ItemName_LoadedProject()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item StartedProject (Type: "CStructProjectInfoEntry")
    protected:
        void Construct_StartedProject(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StartedProject()))
                {
                    CStructProjectInfoEntry InitValue;
                    (*Value())[ItemName_StartedProject()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_StartedProject(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StartedProject()))
                {
                    Construct_StartedProject();
                }
                if ((*Value()).hasMember(ItemName_StartedProject()))
                {
                    CStructProjectInfoEntry InitValue;
                    (*Value())[ItemName_StartedProject()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StartedProject(const CStructProjectInfoEntry& SetValue)
        {
            try
            {
                (*Value())[ItemName_StartedProject()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructProjectInfoEntry Get_StartedProject(void) const
        {
            return (*Value())[ItemName_StartedProject()];
        }
        bool Get_StartedProject(CStructProjectInfoEntry& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_StartedProject()]).valid())
                {
                    GetValue = (*Value())[ItemName_StartedProject()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item AutoStartProject (Type: "CStructProjectInfoEntry")
    protected:
        void Construct_AutoStartProject(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_AutoStartProject()))
                {
                    CStructProjectInfoEntry InitValue;
                    (*Value())[ItemName_AutoStartProject()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_AutoStartProject(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_AutoStartProject()))
                {
                    Construct_AutoStartProject();
                }
                if ((*Value()).hasMember(ItemName_AutoStartProject()))
                {
                    CStructProjectInfoEntry InitValue;
                    (*Value())[ItemName_AutoStartProject()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_AutoStartProject(const CStructProjectInfoEntry& SetValue)
        {
            try
            {
                (*Value())[ItemName_AutoStartProject()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructProjectInfoEntry Get_AutoStartProject(void) const
        {
            return (*Value())[ItemName_AutoStartProject()];
        }
        bool Get_AutoStartProject(CStructProjectInfoEntry& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_AutoStartProject()]).valid())
                {
                    GetValue = (*Value())[ItemName_AutoStartProject()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructProjectInfo


//------------------------------------------------------------------------
// giservice_ConfigAPI::CStructStorageDestination
//------------------------------------------------------------------------
class CStructStorageDestination : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Index(void)
        {
            static std::string str("Index");
            return str;
        }
    public:
        static std::string const& ItemName_Destination(void)
        {
            static std::string str("Destination");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructStorageDestination");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("23.16");
        return str;
    }
public:
    CStructStorageDestination(void)
    {
        try
        {
            Construct_Index();
            Construct_Destination();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructStorageDestination(const CStructStorageDestination& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CStructStorageDestination(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_Index();
            Construct_Destination();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructStorageDestination(void)
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
            Initialize_Index();
            Initialize_Destination();
        }
        catch (...) {}
    }
//------------------------------------------------------------------------
// Item Index (Type: "int32_t")
protected:
    void Construct_Index(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Index()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Index()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Index(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Index()))
                {
                    Construct_Index();
                }
                if ((*Value()).hasMember(ItemName_Index()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Index()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Index(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Index()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Index(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Index()];
            return (int32_t)GetValue;
        }
        bool Get_Index(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Index()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Index()]));
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
}; // class CStructStorageDestination


//------------------------------------------------------------------------
// giservice_ConfigAPI::CStructLicenseInformation
//------------------------------------------------------------------------
class CStructLicenseInformation : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Company(void)
        {
            static std::string str("Company");
            return str;
        }
    public:
        static std::string const& ItemName_Name(void)
        {
            static std::string str("Name");
            return str;
        }
    public:
        static std::string const& ItemName_ValidSince(void)
        {
            static std::string str("ValidSince");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructLicenseInformation");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("23.17");
        return str;
    }
public:
    CStructLicenseInformation(void)
    {
        try
        {
            Construct_Company();
            Construct_Name();
            Construct_ValidSince();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructLicenseInformation(const CStructLicenseInformation& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CStructLicenseInformation(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_Company();
            Construct_Name();
            Construct_ValidSince();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructLicenseInformation(void)
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
            Initialize_Company();
            Initialize_Name();
            Initialize_ValidSince();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item Company (Type: "std::string")
    protected:
        void Construct_Company(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Company()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Company()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Company(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Company()))
                {
                    Construct_Company();
                }
                if ((*Value()).hasMember(ItemName_Company()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Company()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Company(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Company()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Company(void) const
        {
            return (*Value())[ItemName_Company()];
        }
        bool Get_Company(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Company()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Company()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
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
    // Item ValidSince (Type: "std::string")
    protected:
        void Construct_ValidSince(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ValidSince()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ValidSince()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ValidSince(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ValidSince()))
                {
                    Construct_ValidSince();
                }
                if ((*Value()).hasMember(ItemName_ValidSince()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ValidSince()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ValidSince(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ValidSince()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ValidSince(void) const
        {
            return (*Value())[ItemName_ValidSince()];
        }
        bool Get_ValidSince(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ValidSince()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ValidSince()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructLicenseInformation


//------------------------------------------------------------------------
// giservice_ConfigAPI::CStructStateInfo
//------------------------------------------------------------------------
class CStructStateInfo : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_ID(void)
        {
            static std::string str("ID");
            return str;
        }
    public:
        static std::string const& ItemName_Name(void)
        {
            static std::string str("Name");
            return str;
        }
    public:
        static std::string const& ItemName_Active(void)
        {
            static std::string str("Active");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructStateInfo");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("23.18");
        return str;
    }
public:
    CStructStateInfo(void)
    {
        try
        {
            Construct_ID();
            Construct_Name();
            Construct_Active();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructStateInfo(const CStructStateInfo& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CStructStateInfo(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_ID();
            Construct_Name();
            Construct_Active();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructStateInfo(void)
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
            Initialize_ID();
            Initialize_Name();
            Initialize_Active();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item ID (Type: "std::string")
    protected:
        void Construct_ID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ID()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ID()))
                {
                    Construct_ID();
                }
                if ((*Value()).hasMember(ItemName_ID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ID()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ID(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ID()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ID(void) const
        {
            return (*Value())[ItemName_ID()];
        }
        bool Get_ID(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ID()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ID()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
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
// Item Active (Type: "bool")
protected:
    void Construct_Active(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Active()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Active()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Active(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Active()))
                {
                    Construct_Active();
                }
                if ((*Value()).hasMember(ItemName_Active()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Active()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Active(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Active()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Active(void) const
        {
            bool GetValue = (*Value())[ItemName_Active()];
            return (bool)GetValue;
        }
        bool Get_Active(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Active()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Active()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructStateInfo


//------------------------------------------------------------------------
// giservice_ConfigAPI::CStructAPIVersionInfo
//------------------------------------------------------------------------
class CStructAPIVersionInfo : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_RouteName(void)
        {
            static std::string str("RouteName");
            return str;
        }
    public:
        static std::string const& ItemName_APIVersions(void)
        {
            static std::string str("APIVersions");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructAPIVersionInfo");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("23.19");
        return str;
    }
public:
    CStructAPIVersionInfo(void)
    {
        try
        {
            Construct_RouteName();
            Construct_APIVersions();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructAPIVersionInfo(const CStructAPIVersionInfo& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CStructAPIVersionInfo(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_RouteName();
            Construct_APIVersions();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructAPIVersionInfo(void)
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
            Initialize_RouteName();
            Initialize_APIVersions();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item RouteName (Type: "std::string")
    protected:
        void Construct_RouteName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RouteName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RouteName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_RouteName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RouteName()))
                {
                    Construct_RouteName();
                }
                if ((*Value()).hasMember(ItemName_RouteName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RouteName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RouteName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_RouteName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_RouteName(void) const
        {
            return (*Value())[ItemName_RouteName()];
        }
        bool Get_RouteName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RouteName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_RouteName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item APIVersions (Type: "GInsXmlRpcStdAPI::CGIns_Info_Version_Source[0]")
    protected:
        void Construct_APIVersions(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_APIVersions()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_Version_Source InitValue;
                    (*Value())[ItemName_APIVersions()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_APIVersions(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_APIVersions()))
                {
                    Construct_APIVersions();
                }
                if ((*Value()).hasMember(ItemName_APIVersions()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_Version_Source InitValue;
                    (*Value())[ItemName_APIVersions()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_APIVersions(int NewSize)
        {
            try
            {
                GInsXmlRpcStdAPI::CGIns_Info_Version_Source InitValue;
                (*Value())[ItemName_APIVersions()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_APIVersions(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_APIVersions()))
                {
                    return (*Value())[ItemName_APIVersions()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_APIVersions(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_APIVersions()))
                {
                    (*Value())[ItemName_APIVersions()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_APIVersions(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Info_Version_Source SetValue)
        {
            try
            {
                (*Value())[ItemName_APIVersions()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_APIVersions(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_APIVersions()))
                {
                    (*Value())[ItemName_APIVersions()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_APIVersions(int ArrayIndex, const GInsXmlRpcStdAPI::CGIns_Info_Version_Source& SetValue)
        {
            try
            {
                (*Value())[ItemName_APIVersions()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_APIVersions()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_Version_Source Get_APIVersions(int ArrayIndex) const
        {
            return (*Value())[ItemName_APIVersions()][ArrayIndex];
        }
        bool Get_APIVersions(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Info_Version_Source& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_APIVersions()))
                {
                    if (((*Value())[ItemName_APIVersions()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_APIVersions()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructAPIVersionInfo


//------------------------------------------------------------------------
// giservice_ConfigAPI::CStructAPICompatibilityEntry
//------------------------------------------------------------------------
class CStructAPICompatibilityEntry : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Name(void)
        {
            static std::string str("Name");
            return str;
        }
    public:
        static std::string const& ItemName_CompatibilityState(void)
        {
            static std::string str("CompatibilityState");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructAPICompatibilityEntry");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("23.20");
        return str;
    }
public:
    CStructAPICompatibilityEntry(void)
    {
        try
        {
            Construct_Name();
            Construct_CompatibilityState();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructAPICompatibilityEntry(const CStructAPICompatibilityEntry& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CStructAPICompatibilityEntry(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_Name();
            Construct_CompatibilityState();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructAPICompatibilityEntry(void)
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
            Initialize_CompatibilityState();
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
    // Item CompatibilityState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_CompatibilityState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CompatibilityState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_CompatibilityState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_CompatibilityState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CompatibilityState()))
                {
                    Construct_CompatibilityState();
                }
                if ((*Value()).hasMember(ItemName_CompatibilityState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_CompatibilityState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_CompatibilityState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_CompatibilityState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_CompatibilityState(void) const
        {
            return (*Value())[ItemName_CompatibilityState()];
        }
        bool Get_CompatibilityState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_CompatibilityState()]).valid())
                {
                    GetValue = (*Value())[ItemName_CompatibilityState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructAPICompatibilityEntry


//------------------------------------------------------------------------
// giservice_ConfigAPI::CStructAPICompatibilityInfo
//------------------------------------------------------------------------
class CStructAPICompatibilityInfo : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_RouteName(void)
        {
            static std::string str("RouteName");
            return str;
        }
    public:
        static std::string const& ItemName_CompatibilityState(void)
        {
            static std::string str("CompatibilityState");
            return str;
        }
    public:
        static std::string const& ItemName_APIVersions(void)
        {
            static std::string str("APIVersions");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructAPICompatibilityInfo");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("23.21");
        return str;
    }
public:
    CStructAPICompatibilityInfo(void)
    {
        try
        {
            Construct_RouteName();
            Construct_CompatibilityState();
            Construct_APIVersions();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructAPICompatibilityInfo(const CStructAPICompatibilityInfo& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CStructAPICompatibilityInfo(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_RouteName();
            Construct_CompatibilityState();
            Construct_APIVersions();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructAPICompatibilityInfo(void)
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
            Initialize_RouteName();
            Initialize_CompatibilityState();
            Initialize_APIVersions();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item RouteName (Type: "std::string")
    protected:
        void Construct_RouteName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RouteName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RouteName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_RouteName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RouteName()))
                {
                    Construct_RouteName();
                }
                if ((*Value()).hasMember(ItemName_RouteName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RouteName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RouteName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_RouteName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_RouteName(void) const
        {
            return (*Value())[ItemName_RouteName()];
        }
        bool Get_RouteName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RouteName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_RouteName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item CompatibilityState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_CompatibilityState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CompatibilityState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_CompatibilityState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_CompatibilityState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CompatibilityState()))
                {
                    Construct_CompatibilityState();
                }
                if ((*Value()).hasMember(ItemName_CompatibilityState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_CompatibilityState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_CompatibilityState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_CompatibilityState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_CompatibilityState(void) const
        {
            return (*Value())[ItemName_CompatibilityState()];
        }
        bool Get_CompatibilityState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_CompatibilityState()]).valid())
                {
                    GetValue = (*Value())[ItemName_CompatibilityState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item APIVersions (Type: "CStructAPICompatibilityEntry[0]")
    protected:
        void Construct_APIVersions(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_APIVersions()))
                {
                    CStructAPICompatibilityEntry InitValue;
                    (*Value())[ItemName_APIVersions()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_APIVersions(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_APIVersions()))
                {
                    Construct_APIVersions();
                }
                if ((*Value()).hasMember(ItemName_APIVersions()))
                {
                    CStructAPICompatibilityEntry InitValue;
                    (*Value())[ItemName_APIVersions()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_APIVersions(int NewSize)
        {
            try
            {
                CStructAPICompatibilityEntry InitValue;
                (*Value())[ItemName_APIVersions()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_APIVersions(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_APIVersions()))
                {
                    return (*Value())[ItemName_APIVersions()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_APIVersions(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_APIVersions()))
                {
                    (*Value())[ItemName_APIVersions()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_APIVersions(int ArrayIndex, CStructAPICompatibilityEntry SetValue)
        {
            try
            {
                (*Value())[ItemName_APIVersions()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_APIVersions(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_APIVersions()))
                {
                    (*Value())[ItemName_APIVersions()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_APIVersions(int ArrayIndex, const CStructAPICompatibilityEntry& SetValue)
        {
            try
            {
                (*Value())[ItemName_APIVersions()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_APIVersions()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructAPICompatibilityEntry Get_APIVersions(int ArrayIndex) const
        {
            return (*Value())[ItemName_APIVersions()][ArrayIndex];
        }
        bool Get_APIVersions(int ArrayIndex, CStructAPICompatibilityEntry& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_APIVersions()))
                {
                    if (((*Value())[ItemName_APIVersions()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_APIVersions()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructAPICompatibilityInfo


//------------------------------------------------------------------------
// giservice_ConfigAPI::CStructProcessConfig
//------------------------------------------------------------------------
class CStructProcessConfig : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Name(void)
        {
            static std::string str("Name");
            return str;
        }
    public:
        static std::string const& ItemName_AutoStart(void)
        {
            static std::string str("AutoStart");
            return str;
        }
    public:
        static std::string const& ItemName_StartOnTrayItemDoubleClick(void)
        {
            static std::string str("StartOnTrayItemDoubleClick");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructProcessConfig");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("23.22");
        return str;
    }
public:
    CStructProcessConfig(void)
    {
        try
        {
            Construct_Name();
            Construct_AutoStart();
            Construct_StartOnTrayItemDoubleClick();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructProcessConfig(const CStructProcessConfig& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CStructProcessConfig(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_Name();
            Construct_AutoStart();
            Construct_StartOnTrayItemDoubleClick();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructProcessConfig(void)
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
            Initialize_AutoStart();
            Initialize_StartOnTrayItemDoubleClick();
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
// Item AutoStart (Type: "bool")
protected:
    void Construct_AutoStart(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_AutoStart()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_AutoStart()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_AutoStart(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_AutoStart()))
                {
                    Construct_AutoStart();
                }
                if ((*Value()).hasMember(ItemName_AutoStart()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_AutoStart()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_AutoStart(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_AutoStart()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_AutoStart(void) const
        {
            bool GetValue = (*Value())[ItemName_AutoStart()];
            return (bool)GetValue;
        }
        bool Get_AutoStart(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_AutoStart()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_AutoStart()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item StartOnTrayItemDoubleClick (Type: "bool")
protected:
    void Construct_StartOnTrayItemDoubleClick(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_StartOnTrayItemDoubleClick()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_StartOnTrayItemDoubleClick()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_StartOnTrayItemDoubleClick(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StartOnTrayItemDoubleClick()))
                {
                    Construct_StartOnTrayItemDoubleClick();
                }
                if ((*Value()).hasMember(ItemName_StartOnTrayItemDoubleClick()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_StartOnTrayItemDoubleClick()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StartOnTrayItemDoubleClick(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_StartOnTrayItemDoubleClick()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_StartOnTrayItemDoubleClick(void) const
        {
            bool GetValue = (*Value())[ItemName_StartOnTrayItemDoubleClick()];
            return (bool)GetValue;
        }
        bool Get_StartOnTrayItemDoubleClick(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_StartOnTrayItemDoubleClick()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_StartOnTrayItemDoubleClick()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructProcessConfig


//------------------------------------------------------------------------
// giservice_ConfigAPI::CStructStartupState
//------------------------------------------------------------------------
class CStructStartupState : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_InitComplete(void)
        {
            static std::string str("InitComplete");
            return str;
        }
    public:
        static std::string const& ItemName_InitCompleteMessage(void)
        {
            static std::string str("InitCompleteMessage");
            return str;
        }
    public:
        static std::string const& ItemName_InitCompleteErrorMessage(void)
        {
            static std::string str("InitCompleteErrorMessage");
            return str;
        }
    public:
        static std::string const& ItemName_InitCompleteWarningMessage(void)
        {
            static std::string str("InitCompleteWarningMessage");
            return str;
        }
    public:
        static std::string const& ItemName_InitCompleteError(void)
        {
            static std::string str("InitCompleteError");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructStartupState");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("23.23");
        return str;
    }
public:
    CStructStartupState(void)
    {
        try
        {
            Construct_InitComplete();
            Construct_InitCompleteMessage();
            Construct_InitCompleteErrorMessage();
            Construct_InitCompleteWarningMessage();
            Construct_InitCompleteError();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructStartupState(const CStructStartupState& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CStructStartupState(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_InitComplete();
            Construct_InitCompleteMessage();
            Construct_InitCompleteErrorMessage();
            Construct_InitCompleteWarningMessage();
            Construct_InitCompleteError();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructStartupState(void)
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
            Initialize_InitComplete();
            Initialize_InitCompleteMessage();
            Initialize_InitCompleteErrorMessage();
            Initialize_InitCompleteWarningMessage();
            Initialize_InitCompleteError();
        }
        catch (...) {}
    }
//------------------------------------------------------------------------
// Item InitComplete (Type: "bool")
protected:
    void Construct_InitComplete(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_InitComplete()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_InitComplete()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_InitComplete(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_InitComplete()))
                {
                    Construct_InitComplete();
                }
                if ((*Value()).hasMember(ItemName_InitComplete()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_InitComplete()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_InitComplete(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_InitComplete()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_InitComplete(void) const
        {
            bool GetValue = (*Value())[ItemName_InitComplete()];
            return (bool)GetValue;
        }
        bool Get_InitComplete(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_InitComplete()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_InitComplete()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item InitCompleteMessage (Type: "std::string")
    protected:
        void Construct_InitCompleteMessage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_InitCompleteMessage()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_InitCompleteMessage()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_InitCompleteMessage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_InitCompleteMessage()))
                {
                    Construct_InitCompleteMessage();
                }
                if ((*Value()).hasMember(ItemName_InitCompleteMessage()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_InitCompleteMessage()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_InitCompleteMessage(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_InitCompleteMessage()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_InitCompleteMessage(void) const
        {
            return (*Value())[ItemName_InitCompleteMessage()];
        }
        bool Get_InitCompleteMessage(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_InitCompleteMessage()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_InitCompleteMessage()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item InitCompleteErrorMessage (Type: "std::string")
    protected:
        void Construct_InitCompleteErrorMessage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_InitCompleteErrorMessage()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_InitCompleteErrorMessage()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_InitCompleteErrorMessage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_InitCompleteErrorMessage()))
                {
                    Construct_InitCompleteErrorMessage();
                }
                if ((*Value()).hasMember(ItemName_InitCompleteErrorMessage()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_InitCompleteErrorMessage()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_InitCompleteErrorMessage(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_InitCompleteErrorMessage()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_InitCompleteErrorMessage(void) const
        {
            return (*Value())[ItemName_InitCompleteErrorMessage()];
        }
        bool Get_InitCompleteErrorMessage(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_InitCompleteErrorMessage()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_InitCompleteErrorMessage()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item InitCompleteWarningMessage (Type: "std::string")
    protected:
        void Construct_InitCompleteWarningMessage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_InitCompleteWarningMessage()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_InitCompleteWarningMessage()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_InitCompleteWarningMessage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_InitCompleteWarningMessage()))
                {
                    Construct_InitCompleteWarningMessage();
                }
                if ((*Value()).hasMember(ItemName_InitCompleteWarningMessage()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_InitCompleteWarningMessage()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_InitCompleteWarningMessage(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_InitCompleteWarningMessage()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_InitCompleteWarningMessage(void) const
        {
            return (*Value())[ItemName_InitCompleteWarningMessage()];
        }
        bool Get_InitCompleteWarningMessage(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_InitCompleteWarningMessage()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_InitCompleteWarningMessage()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item InitCompleteError (Type: "bool")
protected:
    void Construct_InitCompleteError(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_InitCompleteError()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_InitCompleteError()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_InitCompleteError(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_InitCompleteError()))
                {
                    Construct_InitCompleteError();
                }
                if ((*Value()).hasMember(ItemName_InitCompleteError()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_InitCompleteError()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_InitCompleteError(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_InitCompleteError()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_InitCompleteError(void) const
        {
            bool GetValue = (*Value())[ItemName_InitCompleteError()];
            return (bool)GetValue;
        }
        bool Get_InitCompleteError(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_InitCompleteError()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_InitCompleteError()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructStartupState


//------------------------------------------------------------------------
// giservice_ConfigAPI::ActivateLicense::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ACTIVATELICENSE)
namespace ActivateLicense
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_License(void)
    {
        static std::string str("License");
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
        static std::string str("ConfigAPI.ActivateLicense");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_License();
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
            Construct_License();
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
            Initialize_License();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::ActivateLicense");
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
    // Item License (Type: "std::string")
    protected:
        void Construct_License(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_License()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_License()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_License(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_License()))
                {
                    Construct_License();
                }
                if ((*Value()).hasMember(ItemName_License()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_License()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_License(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_License()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_License(void) const
        {
            return (*Value())[ItemName_License()];
        }
        bool Get_License(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_License()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_License()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace ActivateLicense
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ACTIVATELICENSE)


//------------------------------------------------------------------------
// giservice_ConfigAPI::OnlineActivation::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ONLINEACTIVATION)
namespace OnlineActivation
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_TicketID(void)
    {
        static std::string str("TicketID");
        return str;
    }
public:
    static std::string const& ItemName_Firstname(void)
    {
        static std::string str("Firstname");
        return str;
    }
public:
    static std::string const& ItemName_Lastname(void)
    {
        static std::string str("Lastname");
        return str;
    }
public:
    static std::string const& ItemName_EMailAddress(void)
    {
        static std::string str("EMailAddress");
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
        static std::string str("ConfigAPI.OnlineActivation");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_TicketID();
            Construct_Firstname();
            Construct_Lastname();
            Construct_EMailAddress();
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
            Construct_TicketID();
            Construct_Firstname();
            Construct_Lastname();
            Construct_EMailAddress();
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
            Initialize_TicketID();
            Initialize_Firstname();
            Initialize_Lastname();
            Initialize_EMailAddress();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::OnlineActivation");
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
    // Item TicketID (Type: "std::string")
    protected:
        void Construct_TicketID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TicketID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_TicketID()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_TicketID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TicketID()))
                {
                    Construct_TicketID();
                }
                if ((*Value()).hasMember(ItemName_TicketID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_TicketID()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TicketID(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_TicketID()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_TicketID(void) const
        {
            return (*Value())[ItemName_TicketID()];
        }
        bool Get_TicketID(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TicketID()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_TicketID()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Firstname (Type: "std::string")
    protected:
        void Construct_Firstname(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Firstname()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Firstname()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Firstname(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Firstname()))
                {
                    Construct_Firstname();
                }
                if ((*Value()).hasMember(ItemName_Firstname()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Firstname()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Firstname(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Firstname()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Firstname(void) const
        {
            return (*Value())[ItemName_Firstname()];
        }
        bool Get_Firstname(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Firstname()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Firstname()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Lastname (Type: "std::string")
    protected:
        void Construct_Lastname(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Lastname()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Lastname()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Lastname(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Lastname()))
                {
                    Construct_Lastname();
                }
                if ((*Value()).hasMember(ItemName_Lastname()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Lastname()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Lastname(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Lastname()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Lastname(void) const
        {
            return (*Value())[ItemName_Lastname()];
        }
        bool Get_Lastname(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Lastname()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Lastname()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item EMailAddress (Type: "std::string")
    protected:
        void Construct_EMailAddress(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_EMailAddress()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_EMailAddress()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_EMailAddress(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_EMailAddress()))
                {
                    Construct_EMailAddress();
                }
                if ((*Value()).hasMember(ItemName_EMailAddress()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_EMailAddress()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_EMailAddress(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_EMailAddress()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_EMailAddress(void) const
        {
            return (*Value())[ItemName_EMailAddress()];
        }
        bool Get_EMailAddress(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_EMailAddress()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_EMailAddress()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace OnlineActivation
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ONLINEACTIVATION)


//------------------------------------------------------------------------
// giservice_ConfigAPI::SetConfig::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_SETCONFIG)
namespace SetConfig
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_FirmwarePath(void)
    {
        static std::string str("FirmwarePath");
        return str;
    }
public:
    static std::string const& ItemName_ProjectsDataPath(void)
    {
        static std::string str("ProjectsDataPath");
        return str;
    }
public:
    static std::string const& ItemName_ExecConfigs(void)
    {
        static std::string str("ExecConfigs");
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
        static std::string str("ConfigAPI.SetConfig");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_FirmwarePath();
            Construct_ProjectsDataPath();
            Construct_ExecConfigs();
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
            Construct_FirmwarePath();
            Construct_ProjectsDataPath();
            Construct_ExecConfigs();
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
            Initialize_FirmwarePath();
            Initialize_ProjectsDataPath();
            Initialize_ExecConfigs();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::SetConfig");
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
    // Item FirmwarePath (Type: "std::string")
    protected:
        void Construct_FirmwarePath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FirmwarePath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FirmwarePath()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_FirmwarePath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FirmwarePath()))
                {
                    Construct_FirmwarePath();
                }
                if ((*Value()).hasMember(ItemName_FirmwarePath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FirmwarePath()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FirmwarePath(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_FirmwarePath()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_FirmwarePath(void) const
        {
            return (*Value())[ItemName_FirmwarePath()];
        }
        bool Get_FirmwarePath(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FirmwarePath()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_FirmwarePath()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ProjectsDataPath (Type: "std::string")
    protected:
        void Construct_ProjectsDataPath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProjectsDataPath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ProjectsDataPath()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ProjectsDataPath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProjectsDataPath()))
                {
                    Construct_ProjectsDataPath();
                }
                if ((*Value()).hasMember(ItemName_ProjectsDataPath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ProjectsDataPath()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ProjectsDataPath(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ProjectsDataPath()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ProjectsDataPath(void) const
        {
            return (*Value())[ItemName_ProjectsDataPath()];
        }
        bool Get_ProjectsDataPath(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ProjectsDataPath()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ProjectsDataPath()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ExecConfigs (Type: "CStructProcessConfig[0]")
    protected:
        void Construct_ExecConfigs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ExecConfigs()))
                {
                    CStructProcessConfig InitValue;
                    (*Value())[ItemName_ExecConfigs()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_ExecConfigs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ExecConfigs()))
                {
                    Construct_ExecConfigs();
                }
                if ((*Value()).hasMember(ItemName_ExecConfigs()))
                {
                    CStructProcessConfig InitValue;
                    (*Value())[ItemName_ExecConfigs()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_ExecConfigs(int NewSize)
        {
            try
            {
                CStructProcessConfig InitValue;
                (*Value())[ItemName_ExecConfigs()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_ExecConfigs(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ExecConfigs()))
                {
                    return (*Value())[ItemName_ExecConfigs()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_ExecConfigs(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ExecConfigs()))
                {
                    (*Value())[ItemName_ExecConfigs()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_ExecConfigs(int ArrayIndex, CStructProcessConfig SetValue)
        {
            try
            {
                (*Value())[ItemName_ExecConfigs()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_ExecConfigs(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ExecConfigs()))
                {
                    (*Value())[ItemName_ExecConfigs()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ExecConfigs(int ArrayIndex, const CStructProcessConfig& SetValue)
        {
            try
            {
                (*Value())[ItemName_ExecConfigs()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_ExecConfigs()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructProcessConfig Get_ExecConfigs(int ArrayIndex) const
        {
            return (*Value())[ItemName_ExecConfigs()][ArrayIndex];
        }
        bool Get_ExecConfigs(int ArrayIndex, CStructProcessConfig& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ExecConfigs()))
                {
                    if (((*Value())[ItemName_ExecConfigs()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_ExecConfigs()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace SetConfig
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_SETCONFIG)


//------------------------------------------------------------------------
// giservice_ConfigAPI::AddDevice::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ADDDEVICE)
namespace AddDevice
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ConnectionType(void)
    {
        static std::string str("ConnectionType");
        return str;
    }
public:
    static std::string const& ItemName_ConnectionString(void)
    {
        static std::string str("ConnectionString");
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
        static std::string str("ConfigAPI.AddDevice");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ConnectionType();
            Construct_ConnectionString();
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
            Construct_ConnectionType();
            Construct_ConnectionString();
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
            Initialize_ConnectionType();
            Initialize_ConnectionString();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::AddDevice");
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
    // Item ConnectionType (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_ConnectionType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConnectionType()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_ConnectionType()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ConnectionType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConnectionType()))
                {
                    Construct_ConnectionType();
                }
                if ((*Value()).hasMember(ItemName_ConnectionType()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_ConnectionType()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ConnectionType(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_ConnectionType()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_ConnectionType(void) const
        {
            return (*Value())[ItemName_ConnectionType()];
        }
        bool Get_ConnectionType(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ConnectionType()]).valid())
                {
                    GetValue = (*Value())[ItemName_ConnectionType()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ConnectionString (Type: "std::string")
    protected:
        void Construct_ConnectionString(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConnectionString()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ConnectionString()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ConnectionString(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConnectionString()))
                {
                    Construct_ConnectionString();
                }
                if ((*Value()).hasMember(ItemName_ConnectionString()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ConnectionString()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ConnectionString(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ConnectionString()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ConnectionString(void) const
        {
            return (*Value())[ItemName_ConnectionString()];
        }
        bool Get_ConnectionString(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ConnectionString()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ConnectionString()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace AddDevice
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ADDDEVICE)


//------------------------------------------------------------------------
// giservice_ConfigAPI::RemoveDevice::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_REMOVEDEVICE)
namespace RemoveDevice
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Device(void)
    {
        static std::string str("Device");
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
        static std::string str("ConfigAPI.RemoveDevice");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Device();
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
            Construct_Device();
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
            Initialize_Device();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::RemoveDevice");
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
    // Item Device (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Device(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Device()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Device()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Device(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Device()))
                {
                    Construct_Device();
                }
                if ((*Value()).hasMember(ItemName_Device()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Device()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Device(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Device()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Device(void) const
        {
            return (*Value())[ItemName_Device()];
        }
        bool Get_Device(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Device()]).valid())
                {
                    GetValue = (*Value())[ItemName_Device()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace RemoveDevice
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_REMOVEDEVICE)


//------------------------------------------------------------------------
// giservice_ConfigAPI::ListDevices::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_LISTDEVICES)
namespace ListDevices
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("ConfigAPI.ListDevices");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
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
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::ListDevices");
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
}; // class CParams
} // namespace ListDevices
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_LISTDEVICES)


//------------------------------------------------------------------------
// giservice_ConfigAPI::ClearDeviceStates::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_CLEARDEVICESTATES)
namespace ClearDeviceStates
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Device(void)
    {
        static std::string str("Device");
        return str;
    }
public:
    static std::string const& ItemName_State(void)
    {
        static std::string str("State");
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
        static std::string str("ConfigAPI.ClearDeviceStates");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Device();
            Construct_State();
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
            Construct_Device();
            Construct_State();
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
            Initialize_Device();
            Initialize_State();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::ClearDeviceStates");
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
    // Item Device (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Device(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Device()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Device()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Device(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Device()))
                {
                    Construct_Device();
                }
                if ((*Value()).hasMember(ItemName_Device()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Device()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Device(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Device()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Device(void) const
        {
            return (*Value())[ItemName_Device()];
        }
        bool Get_Device(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Device()]).valid())
                {
                    GetValue = (*Value())[ItemName_Device()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item State (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList")
    protected:
        void Construct_State(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_State()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList InitValue;
                    (*Value())[ItemName_State()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_State(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_State()))
                {
                    Construct_State();
                }
                if ((*Value()).hasMember(ItemName_State()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList InitValue;
                    (*Value())[ItemName_State()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_State(const GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_State()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList Get_State(void) const
        {
            return (*Value())[ItemName_State()];
        }
        bool Get_State(GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_State()]).valid())
                {
                    GetValue = (*Value())[ItemName_State()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace ClearDeviceStates
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_CLEARDEVICESTATES)


//------------------------------------------------------------------------
// giservice_ConfigAPI::StartProcess::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_STARTPROCESS)
namespace StartProcess
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Process(void)
    {
        static std::string str("Process");
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
        static std::string str("ConfigAPI.StartProcess");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Process();
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
            Construct_Process();
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
            Initialize_Process();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::StartProcess");
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
    // Item Process (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Process(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Process()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Process()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Process(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Process()))
                {
                    Construct_Process();
                }
                if ((*Value()).hasMember(ItemName_Process()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Process()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Process(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Process()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Process(void) const
        {
            return (*Value())[ItemName_Process()];
        }
        bool Get_Process(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Process()]).valid())
                {
                    GetValue = (*Value())[ItemName_Process()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace StartProcess
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_STARTPROCESS)


//------------------------------------------------------------------------
// giservice_ConfigAPI::StopProcess::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_STOPPROCESS)
namespace StopProcess
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Process(void)
    {
        static std::string str("Process");
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
        static std::string str("ConfigAPI.StopProcess");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Process();
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
            Construct_Process();
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
            Initialize_Process();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::StopProcess");
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
    // Item Process (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Process(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Process()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Process()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Process(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Process()))
                {
                    Construct_Process();
                }
                if ((*Value()).hasMember(ItemName_Process()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Process()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Process(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Process()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Process(void) const
        {
            return (*Value())[ItemName_Process()];
        }
        bool Get_Process(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Process()]).valid())
                {
                    GetValue = (*Value())[ItemName_Process()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace StopProcess
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_STOPPROCESS)


//------------------------------------------------------------------------
// giservice_ConfigAPI::Settings::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_SETTINGS)
namespace Settings
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Localization(void)
    {
        static std::string str("Localization");
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
        static std::string str("ConfigAPI.Settings");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Localization();
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
            Construct_Localization();
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
            Initialize_Localization();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::Settings");
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
    // Item Localization (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Localization(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Localization()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Localization()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Localization(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Localization()))
                {
                    Construct_Localization();
                }
                if ((*Value()).hasMember(ItemName_Localization()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Localization()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Localization(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Localization()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Localization(void) const
        {
            return (*Value())[ItemName_Localization()];
        }
        bool Get_Localization(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Localization()]).valid())
                {
                    GetValue = (*Value())[ItemName_Localization()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace Settings
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_SETTINGS)


//------------------------------------------------------------------------
// giservice_ConfigAPI::HandleProject::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_HANDLEPROJECT)
namespace HandleProject
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Action(void)
    {
        static std::string str("Action");
        return str;
    }
public:
    static std::string const& ItemName_ProjectPath(void)
    {
        static std::string str("ProjectPath");
        return str;
    }
public:
    static std::string const& ItemName_ProjectName(void)
    {
        static std::string str("ProjectName");
        return str;
    }
public:
    static std::string const& ItemName_Repository(void)
    {
        static std::string str("Repository");
        return str;
    }
public:
    static std::string const& ItemName_Message(void)
    {
        static std::string str("Message");
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
        static std::string str("ConfigAPI.HandleProject");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Action();
            Construct_ProjectPath();
            Construct_ProjectName();
            Construct_Repository();
            Construct_Message();
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
            Construct_Action();
            Construct_ProjectPath();
            Construct_ProjectName();
            Construct_Repository();
            Construct_Message();
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
            Initialize_Action();
            Initialize_ProjectPath();
            Initialize_ProjectName();
            Initialize_Repository();
            Initialize_Message();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::HandleProject");
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
    // Item Action (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Action(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Action()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Action()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Action(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Action()))
                {
                    Construct_Action();
                }
                if ((*Value()).hasMember(ItemName_Action()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Action()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Action(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Action()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Action(void) const
        {
            return (*Value())[ItemName_Action()];
        }
        bool Get_Action(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Action()]).valid())
                {
                    GetValue = (*Value())[ItemName_Action()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ProjectPath (Type: "std::string")
    protected:
        void Construct_ProjectPath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProjectPath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ProjectPath()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ProjectPath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProjectPath()))
                {
                    Construct_ProjectPath();
                }
                if ((*Value()).hasMember(ItemName_ProjectPath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ProjectPath()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ProjectPath(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ProjectPath()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ProjectPath(void) const
        {
            return (*Value())[ItemName_ProjectPath()];
        }
        bool Get_ProjectPath(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ProjectPath()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ProjectPath()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ProjectName (Type: "std::string")
    protected:
        void Construct_ProjectName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProjectName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ProjectName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ProjectName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProjectName()))
                {
                    Construct_ProjectName();
                }
                if ((*Value()).hasMember(ItemName_ProjectName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ProjectName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ProjectName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ProjectName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ProjectName(void) const
        {
            return (*Value())[ItemName_ProjectName()];
        }
        bool Get_ProjectName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ProjectName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ProjectName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Repository (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Repository(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Repository()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Repository()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Repository(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Repository()))
                {
                    Construct_Repository();
                }
                if ((*Value()).hasMember(ItemName_Repository()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Repository()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Repository(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Repository()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Repository(void) const
        {
            return (*Value())[ItemName_Repository()];
        }
        bool Get_Repository(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Repository()]).valid())
                {
                    GetValue = (*Value())[ItemName_Repository()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Message (Type: "std::string")
    protected:
        void Construct_Message(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Message()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Message()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Message(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Message()))
                {
                    Construct_Message();
                }
                if ((*Value()).hasMember(ItemName_Message()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Message()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Message(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Message()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Message(void) const
        {
            return (*Value())[ItemName_Message()];
        }
        bool Get_Message(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Message()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Message()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace HandleProject
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_HANDLEPROJECT)


//------------------------------------------------------------------------
// giservice_ConfigAPI::GetProjectState::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETPROJECTSTATE)
namespace GetProjectState
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Extended(void)
    {
        static std::string str("Extended");
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
        static std::string str("ConfigAPI.GetProjectState");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Extended();
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
            Construct_Extended();
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
            Initialize_Extended();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::GetProjectState");
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
// Item Extended (Type: "bool")
protected:
    void Construct_Extended(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Extended()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Extended()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Extended(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Extended()))
                {
                    Construct_Extended();
                }
                if ((*Value()).hasMember(ItemName_Extended()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Extended()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Extended(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Extended()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Extended(void) const
        {
            bool GetValue = (*Value())[ItemName_Extended()];
            return (bool)GetValue;
        }
        bool Get_Extended(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Extended()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Extended()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GetProjectState
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETPROJECTSTATE)


//------------------------------------------------------------------------
// giservice_ConfigAPI::GetVersionInformation::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETVERSIONINFORMATION)
namespace GetVersionInformation
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("ConfigAPI.GetVersionInformation");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
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
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::GetVersionInformation");
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
}; // class CParams
} // namespace GetVersionInformation
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETVERSIONINFORMATION)


//------------------------------------------------------------------------
// giservice_ConfigAPI::GetAPIVersions::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETAPIVERSIONS)
namespace GetAPIVersions
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("ConfigAPI.GetAPIVersions");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
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
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::GetAPIVersions");
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
}; // class CParams
} // namespace GetAPIVersions
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETAPIVERSIONS)


//------------------------------------------------------------------------
// giservice_ConfigAPI::CheckAPICompatibility::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_CHECKAPICOMPATIBILITY)
namespace CheckAPICompatibility
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Versions(void)
    {
        static std::string str("Versions");
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
        static std::string str("ConfigAPI.CheckAPICompatibility");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Versions();
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
            Construct_Versions();
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
            Initialize_Versions();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::CheckAPICompatibility");
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
    // Item Versions (Type: "CStructAPIVersionInfo[0]")
    protected:
        void Construct_Versions(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Versions()))
                {
                    CStructAPIVersionInfo InitValue;
                    (*Value())[ItemName_Versions()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Versions(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Versions()))
                {
                    Construct_Versions();
                }
                if ((*Value()).hasMember(ItemName_Versions()))
                {
                    CStructAPIVersionInfo InitValue;
                    (*Value())[ItemName_Versions()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Versions(int NewSize)
        {
            try
            {
                CStructAPIVersionInfo InitValue;
                (*Value())[ItemName_Versions()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Versions(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Versions()))
                {
                    return (*Value())[ItemName_Versions()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Versions(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Versions()))
                {
                    (*Value())[ItemName_Versions()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Versions(int ArrayIndex, CStructAPIVersionInfo SetValue)
        {
            try
            {
                (*Value())[ItemName_Versions()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Versions(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Versions()))
                {
                    (*Value())[ItemName_Versions()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Versions(int ArrayIndex, const CStructAPIVersionInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_Versions()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Versions()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructAPIVersionInfo Get_Versions(int ArrayIndex) const
        {
            return (*Value())[ItemName_Versions()][ArrayIndex];
        }
        bool Get_Versions(int ArrayIndex, CStructAPIVersionInfo& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Versions()))
                {
                    if (((*Value())[ItemName_Versions()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Versions()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace CheckAPICompatibility
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_CHECKAPICOMPATIBILITY)


//------------------------------------------------------------------------
// giservice_ConfigAPI::PairDeviceWithCloud::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_PAIRDEVICEWITHCLOUD)
namespace PairDeviceWithCloud
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_URL(void)
    {
        static std::string str("URL");
        return str;
    }
public:
    static std::string const& ItemName_Username(void)
    {
        static std::string str("Username");
        return str;
    }
public:
    static std::string const& ItemName_Password(void)
    {
        static std::string str("Password");
        return str;
    }
public:
    static std::string const& ItemName_DeviceID(void)
    {
        static std::string str("DeviceID");
        return str;
    }
public:
    static std::string const& ItemName_SerialNumber(void)
    {
        static std::string str("SerialNumber");
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
        static std::string str("ConfigAPI.PairDeviceWithCloud");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_URL();
            Construct_Username();
            Construct_Password();
            Construct_DeviceID();
            Construct_SerialNumber();
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
            Construct_URL();
            Construct_Username();
            Construct_Password();
            Construct_DeviceID();
            Construct_SerialNumber();
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
            Initialize_URL();
            Initialize_Username();
            Initialize_Password();
            Initialize_DeviceID();
            Initialize_SerialNumber();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::PairDeviceWithCloud");
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
    // Item URL (Type: "std::string")
    protected:
        void Construct_URL(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_URL()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_URL()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_URL(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_URL()))
                {
                    Construct_URL();
                }
                if ((*Value()).hasMember(ItemName_URL()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_URL()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_URL(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_URL()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_URL(void) const
        {
            return (*Value())[ItemName_URL()];
        }
        bool Get_URL(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_URL()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_URL()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Username (Type: "std::string")
    protected:
        void Construct_Username(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Username()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Username()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Username(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Username()))
                {
                    Construct_Username();
                }
                if ((*Value()).hasMember(ItemName_Username()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Username()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Username(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Username()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Username(void) const
        {
            return (*Value())[ItemName_Username()];
        }
        bool Get_Username(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Username()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Username()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Password (Type: "std::string")
    protected:
        void Construct_Password(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Password()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Password()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Password(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Password()))
                {
                    Construct_Password();
                }
                if ((*Value()).hasMember(ItemName_Password()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Password()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Password(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Password()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Password(void) const
        {
            return (*Value())[ItemName_Password()];
        }
        bool Get_Password(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Password()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Password()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item DeviceID (Type: "std::string")
    protected:
        void Construct_DeviceID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DeviceID()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DeviceID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceID()))
                {
                    Construct_DeviceID();
                }
                if ((*Value()).hasMember(ItemName_DeviceID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DeviceID()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DeviceID(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_DeviceID()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DeviceID(void) const
        {
            return (*Value())[ItemName_DeviceID()];
        }
        bool Get_DeviceID(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DeviceID()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DeviceID()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item SerialNumber (Type: "std::string")
    protected:
        void Construct_SerialNumber(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SerialNumber()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SerialNumber()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SerialNumber(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SerialNumber()))
                {
                    Construct_SerialNumber();
                }
                if ((*Value()).hasMember(ItemName_SerialNumber()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SerialNumber()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SerialNumber(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_SerialNumber()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_SerialNumber(void) const
        {
            return (*Value())[ItemName_SerialNumber()];
        }
        bool Get_SerialNumber(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SerialNumber()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_SerialNumber()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace PairDeviceWithCloud
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_PAIRDEVICEWITHCLOUD)


//------------------------------------------------------------------------
// giservice_ConfigAPI::GetPairDeviceWithCloudResult::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETPAIRDEVICEWITHCLOUDRESULT)
namespace GetPairDeviceWithCloudResult
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("ConfigAPI.GetPairDeviceWithCloudResult");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
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
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::GetPairDeviceWithCloudResult");
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
}; // class CParams
} // namespace GetPairDeviceWithCloudResult
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETPAIRDEVICEWITHCLOUDRESULT)


//------------------------------------------------------------------------
// giservice_ConfigAPI::GenericCall::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GENERICCALL)
namespace GenericCall
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Command(void)
    {
        static std::string str("Command");
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
        static std::string str("ConfigAPI.GenericCall");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Command();
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
            Construct_Command();
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
            Initialize_Command();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::GenericCall");
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
    // Item Command (Type: "std::string")
    protected:
        void Construct_Command(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Command()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Command()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Command(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Command()))
                {
                    Construct_Command();
                }
                if ((*Value()).hasMember(ItemName_Command()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Command()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Command(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Command()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Command(void) const
        {
            return (*Value())[ItemName_Command()];
        }
        bool Get_Command(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Command()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Command()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GenericCall
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GENERICCALL)


//------------------------------------------------------------------------
// giservice_ConfigAPI::AddCertificate::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ADDCERTIFICATE)
namespace AddCertificate
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Certificate(void)
    {
        static std::string str("Certificate");
        return str;
    }
public:
    static std::string const& ItemName_CertificateKey(void)
    {
        static std::string str("CertificateKey");
        return str;
    }
public:
    static std::string const& ItemName_UseSelfSignedCertificate(void)
    {
        static std::string str("UseSelfSignedCertificate");
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
        static std::string str("ConfigAPI.AddCertificate");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Certificate();
            Construct_CertificateKey();
            Construct_UseSelfSignedCertificate();
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
            Construct_Certificate();
            Construct_CertificateKey();
            Construct_UseSelfSignedCertificate();
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
            Initialize_Certificate();
            Initialize_CertificateKey();
            Initialize_UseSelfSignedCertificate();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::AddCertificate");
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
    // Item Certificate (Type: "std::string")
    protected:
        void Construct_Certificate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Certificate()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Certificate()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Certificate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Certificate()))
                {
                    Construct_Certificate();
                }
                if ((*Value()).hasMember(ItemName_Certificate()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Certificate()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Certificate(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Certificate()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Certificate(void) const
        {
            return (*Value())[ItemName_Certificate()];
        }
        bool Get_Certificate(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Certificate()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Certificate()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item CertificateKey (Type: "std::string")
    protected:
        void Construct_CertificateKey(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CertificateKey()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_CertificateKey()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_CertificateKey(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CertificateKey()))
                {
                    Construct_CertificateKey();
                }
                if ((*Value()).hasMember(ItemName_CertificateKey()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_CertificateKey()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_CertificateKey(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_CertificateKey()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_CertificateKey(void) const
        {
            return (*Value())[ItemName_CertificateKey()];
        }
        bool Get_CertificateKey(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_CertificateKey()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_CertificateKey()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item UseSelfSignedCertificate (Type: "bool")
protected:
    void Construct_UseSelfSignedCertificate(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_UseSelfSignedCertificate()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_UseSelfSignedCertificate()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_UseSelfSignedCertificate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UseSelfSignedCertificate()))
                {
                    Construct_UseSelfSignedCertificate();
                }
                if ((*Value()).hasMember(ItemName_UseSelfSignedCertificate()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_UseSelfSignedCertificate()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_UseSelfSignedCertificate(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_UseSelfSignedCertificate()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_UseSelfSignedCertificate(void) const
        {
            bool GetValue = (*Value())[ItemName_UseSelfSignedCertificate()];
            return (bool)GetValue;
        }
        bool Get_UseSelfSignedCertificate(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_UseSelfSignedCertificate()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_UseSelfSignedCertificate()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace AddCertificate
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ADDCERTIFICATE)


//------------------------------------------------------------------------
// giservice_ConfigAPI::ListTimezones::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_LISTTIMEZONES)
namespace ListTimezones
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Representation(void)
    {
        static std::string str("Representation");
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
        static std::string str("ConfigAPI.ListTimezones");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Representation();
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
            Construct_Representation();
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
            Initialize_Representation();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::ListTimezones");
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
    // Item Representation (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Representation(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Representation()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Representation()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Representation(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Representation()))
                {
                    Construct_Representation();
                }
                if ((*Value()).hasMember(ItemName_Representation()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Representation()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Representation(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Representation()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Representation(void) const
        {
            return (*Value())[ItemName_Representation()];
        }
        bool Get_Representation(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Representation()]).valid())
                {
                    GetValue = (*Value())[ItemName_Representation()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace ListTimezones
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_LISTTIMEZONES)


//------------------------------------------------------------------------
// giservice_ConfigAPI::CreateGroup::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_CREATEGROUP)
namespace CreateGroup
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
    static std::string const& ItemName_ID(void)
    {
        static std::string str("ID");
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
        static std::string str("ConfigAPI.CreateGroup");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Name();
            Construct_ID();
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
            Construct_ID();
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
            Initialize_ID();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::CreateGroup");
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
    // Item ID (Type: "std::string")
    protected:
        void Construct_ID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ID()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ID()))
                {
                    Construct_ID();
                }
                if ((*Value()).hasMember(ItemName_ID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ID()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ID(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ID()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ID(void) const
        {
            return (*Value())[ItemName_ID()];
        }
        bool Get_ID(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ID()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ID()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace CreateGroup
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_CREATEGROUP)


//------------------------------------------------------------------------
// giservice_ConfigAPI::SetGroup::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_SETGROUP)
namespace SetGroup
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Group(void)
    {
        static std::string str("Group");
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
        static std::string str("ConfigAPI.SetGroup");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Group();
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
            Construct_Group();
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
            Initialize_Group();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::SetGroup");
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
    // Item Group (Type: "CStructGroup")
    protected:
        void Construct_Group(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Group()))
                {
                    CStructGroup InitValue;
                    (*Value())[ItemName_Group()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Group(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Group()))
                {
                    Construct_Group();
                }
                if ((*Value()).hasMember(ItemName_Group()))
                {
                    CStructGroup InitValue;
                    (*Value())[ItemName_Group()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Group(const CStructGroup& SetValue)
        {
            try
            {
                (*Value())[ItemName_Group()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructGroup Get_Group(void) const
        {
            return (*Value())[ItemName_Group()];
        }
        bool Get_Group(CStructGroup& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Group()]).valid())
                {
                    GetValue = (*Value())[ItemName_Group()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace SetGroup
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_SETGROUP)


//------------------------------------------------------------------------
// giservice_ConfigAPI::RemoveGroups::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_REMOVEGROUPS)
namespace RemoveGroups
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_IDs(void)
    {
        static std::string str("IDs");
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
        static std::string str("ConfigAPI.RemoveGroups");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_IDs();
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
            Construct_IDs();
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
            Initialize_IDs();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::RemoveGroups");
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
    // Item IDs (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList")
    protected:
        void Construct_IDs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IDs()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList InitValue;
                    (*Value())[ItemName_IDs()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_IDs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IDs()))
                {
                    Construct_IDs();
                }
                if ((*Value()).hasMember(ItemName_IDs()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList InitValue;
                    (*Value())[ItemName_IDs()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IDs(const GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_IDs()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList Get_IDs(void) const
        {
            return (*Value())[ItemName_IDs()];
        }
        bool Get_IDs(GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IDs()]).valid())
                {
                    GetValue = (*Value())[ItemName_IDs()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace RemoveGroups
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_REMOVEGROUPS)


//------------------------------------------------------------------------
// giservice_ConfigAPI::GetGroups::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETGROUPS)
namespace GetGroups
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_IDs(void)
    {
        static std::string str("IDs");
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
        static std::string str("ConfigAPI.GetGroups");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_IDs();
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
            Construct_IDs();
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
            Initialize_IDs();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::GetGroups");
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
    // Item IDs (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList")
    protected:
        void Construct_IDs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IDs()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList InitValue;
                    (*Value())[ItemName_IDs()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_IDs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IDs()))
                {
                    Construct_IDs();
                }
                if ((*Value()).hasMember(ItemName_IDs()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList InitValue;
                    (*Value())[ItemName_IDs()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IDs(const GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_IDs()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList Get_IDs(void) const
        {
            return (*Value())[ItemName_IDs()];
        }
        bool Get_IDs(GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IDs()]).valid())
                {
                    GetValue = (*Value())[ItemName_IDs()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GetGroups
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETGROUPS)


//------------------------------------------------------------------------
// giservice_ConfigAPI::AddGroupElements::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ADDGROUPELEMENTS)
namespace AddGroupElements
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_GroupID(void)
    {
        static std::string str("GroupID");
        return str;
    }
public:
    static std::string const& ItemName_ElementIDs(void)
    {
        static std::string str("ElementIDs");
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
        static std::string str("ConfigAPI.AddGroupElements");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_GroupID();
            Construct_ElementIDs();
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
            Construct_GroupID();
            Construct_ElementIDs();
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
            Initialize_GroupID();
            Initialize_ElementIDs();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::AddGroupElements");
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
    // Item GroupID (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_GroupID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GroupID()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_GroupID()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_GroupID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GroupID()))
                {
                    Construct_GroupID();
                }
                if ((*Value()).hasMember(ItemName_GroupID()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_GroupID()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_GroupID(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_GroupID()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_GroupID(void) const
        {
            return (*Value())[ItemName_GroupID()];
        }
        bool Get_GroupID(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_GroupID()]).valid())
                {
                    GetValue = (*Value())[ItemName_GroupID()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ElementIDs (Type: "std::string[0]")
    protected:
        void Construct_ElementIDs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ElementIDs()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ElementIDs()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_ElementIDs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ElementIDs()))
                {
                    Construct_ElementIDs();
                }
                if ((*Value()).hasMember(ItemName_ElementIDs()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ElementIDs()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_ElementIDs(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_ElementIDs()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_ElementIDs(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ElementIDs()))
                {
                    return (*Value())[ItemName_ElementIDs()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_ElementIDs(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ElementIDs()))
                {
                    (*Value())[ItemName_ElementIDs()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_ElementIDs(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_ElementIDs()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_ElementIDs(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ElementIDs()))
                {
                    (*Value())[ItemName_ElementIDs()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ElementIDs(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_ElementIDs())
                {
                    SetSize_ElementIDs(ArrayIndex + 1);
                }
                (*Value())[ItemName_ElementIDs()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ElementIDs(int ArrayIndex) const
        {
            return (*Value())[ItemName_ElementIDs()][ArrayIndex];
        }
        bool Get_ElementIDs(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ElementIDs()))
                {
                    if (((*Value())[ItemName_ElementIDs()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_ElementIDs()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace AddGroupElements
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ADDGROUPELEMENTS)


//------------------------------------------------------------------------
// giservice_ConfigAPI::RemoveGroupElements::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_REMOVEGROUPELEMENTS)
namespace RemoveGroupElements
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_GroupID(void)
    {
        static std::string str("GroupID");
        return str;
    }
public:
    static std::string const& ItemName_ElementIDs(void)
    {
        static std::string str("ElementIDs");
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
        static std::string str("ConfigAPI.RemoveGroupElements");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_GroupID();
            Construct_ElementIDs();
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
            Construct_GroupID();
            Construct_ElementIDs();
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
            Initialize_GroupID();
            Initialize_ElementIDs();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::RemoveGroupElements");
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
    // Item GroupID (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_GroupID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GroupID()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_GroupID()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_GroupID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GroupID()))
                {
                    Construct_GroupID();
                }
                if ((*Value()).hasMember(ItemName_GroupID()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_GroupID()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_GroupID(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_GroupID()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_GroupID(void) const
        {
            return (*Value())[ItemName_GroupID()];
        }
        bool Get_GroupID(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_GroupID()]).valid())
                {
                    GetValue = (*Value())[ItemName_GroupID()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ElementIDs (Type: "std::string[0]")
    protected:
        void Construct_ElementIDs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ElementIDs()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ElementIDs()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_ElementIDs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ElementIDs()))
                {
                    Construct_ElementIDs();
                }
                if ((*Value()).hasMember(ItemName_ElementIDs()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ElementIDs()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_ElementIDs(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_ElementIDs()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_ElementIDs(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ElementIDs()))
                {
                    return (*Value())[ItemName_ElementIDs()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_ElementIDs(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ElementIDs()))
                {
                    (*Value())[ItemName_ElementIDs()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_ElementIDs(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_ElementIDs()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_ElementIDs(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ElementIDs()))
                {
                    (*Value())[ItemName_ElementIDs()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ElementIDs(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_ElementIDs())
                {
                    SetSize_ElementIDs(ArrayIndex + 1);
                }
                (*Value())[ItemName_ElementIDs()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ElementIDs(int ArrayIndex) const
        {
            return (*Value())[ItemName_ElementIDs()][ArrayIndex];
        }
        bool Get_ElementIDs(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ElementIDs()))
                {
                    if (((*Value())[ItemName_ElementIDs()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_ElementIDs()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace RemoveGroupElements
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_REMOVEGROUPELEMENTS)


//------------------------------------------------------------------------
// giservice_ConfigAPI::AddStorageDestination::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ADDSTORAGEDESTINATION)
namespace AddStorageDestination
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_StorageDestination(void)
    {
        static std::string str("StorageDestination");
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
        static std::string str("ConfigAPI.AddStorageDestination");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_StorageDestination();
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
            Construct_StorageDestination();
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
            Initialize_StorageDestination();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::AddStorageDestination");
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
    // Item StorageDestination (Type: "CStructStorageDestination")
    protected:
        void Construct_StorageDestination(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StorageDestination()))
                {
                    CStructStorageDestination InitValue;
                    (*Value())[ItemName_StorageDestination()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_StorageDestination(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StorageDestination()))
                {
                    Construct_StorageDestination();
                }
                if ((*Value()).hasMember(ItemName_StorageDestination()))
                {
                    CStructStorageDestination InitValue;
                    (*Value())[ItemName_StorageDestination()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StorageDestination(const CStructStorageDestination& SetValue)
        {
            try
            {
                (*Value())[ItemName_StorageDestination()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructStorageDestination Get_StorageDestination(void) const
        {
            return (*Value())[ItemName_StorageDestination()];
        }
        bool Get_StorageDestination(CStructStorageDestination& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_StorageDestination()]).valid())
                {
                    GetValue = (*Value())[ItemName_StorageDestination()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace AddStorageDestination
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ADDSTORAGEDESTINATION)


//------------------------------------------------------------------------
// giservice_ConfigAPI::RemoveStorageDestination::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_REMOVESTORAGEDESTINATION)
namespace RemoveStorageDestination
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_StorageDestination(void)
    {
        static std::string str("StorageDestination");
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
        static std::string str("ConfigAPI.RemoveStorageDestination");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_StorageDestination();
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
            Construct_StorageDestination();
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
            Initialize_StorageDestination();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::RemoveStorageDestination");
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
    // Item StorageDestination (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_StorageDestination(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StorageDestination()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_StorageDestination()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_StorageDestination(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StorageDestination()))
                {
                    Construct_StorageDestination();
                }
                if ((*Value()).hasMember(ItemName_StorageDestination()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_StorageDestination()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StorageDestination(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_StorageDestination()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_StorageDestination(void) const
        {
            return (*Value())[ItemName_StorageDestination()];
        }
        bool Get_StorageDestination(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_StorageDestination()]).valid())
                {
                    GetValue = (*Value())[ItemName_StorageDestination()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace RemoveStorageDestination
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_REMOVESTORAGEDESTINATION)


//------------------------------------------------------------------------
// giservice_ConfigAPI::SetStorageDestination::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_SETSTORAGEDESTINATION)
namespace SetStorageDestination
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_StorageDestination(void)
    {
        static std::string str("StorageDestination");
        return str;
    }
public:
    static std::string const& ItemName_Destination(void)
    {
        static std::string str("Destination");
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
        static std::string str("ConfigAPI.SetStorageDestination");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_StorageDestination();
            Construct_Destination();
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
            Construct_StorageDestination();
            Construct_Destination();
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
            Initialize_StorageDestination();
            Initialize_Destination();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::SetStorageDestination");
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
    // Item StorageDestination (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_StorageDestination(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StorageDestination()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_StorageDestination()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_StorageDestination(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StorageDestination()))
                {
                    Construct_StorageDestination();
                }
                if ((*Value()).hasMember(ItemName_StorageDestination()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_StorageDestination()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StorageDestination(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_StorageDestination()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_StorageDestination(void) const
        {
            return (*Value())[ItemName_StorageDestination()];
        }
        bool Get_StorageDestination(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_StorageDestination()]).valid())
                {
                    GetValue = (*Value())[ItemName_StorageDestination()];
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
}; // class CParams
} // namespace SetStorageDestination
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_SETSTORAGEDESTINATION)


//------------------------------------------------------------------------
// giservice_ConfigAPI::GetStorageDestinations::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETSTORAGEDESTINATIONS)
namespace GetStorageDestinations
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("ConfigAPI.GetStorageDestinations");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
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
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::GetStorageDestinations");
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
}; // class CParams
} // namespace GetStorageDestinations
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETSTORAGEDESTINATIONS)


//------------------------------------------------------------------------
// giservice_ConfigAPI::GenerateLicenseRequest::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GENERATELICENSEREQUEST)
namespace GenerateLicenseRequest
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_LicenseRequest(void)
    {
        static std::string str("LicenseRequest");
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
        static std::string str("ConfigAPI.GenerateLicenseRequest");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_LicenseRequest();
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
            Construct_LicenseRequest();
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
            Initialize_LicenseRequest();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::GenerateLicenseRequest");
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
    // Item LicenseRequest (Type: "std::string")
    protected:
        void Construct_LicenseRequest(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LicenseRequest()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_LicenseRequest()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_LicenseRequest(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LicenseRequest()))
                {
                    Construct_LicenseRequest();
                }
                if ((*Value()).hasMember(ItemName_LicenseRequest()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_LicenseRequest()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LicenseRequest(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_LicenseRequest()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_LicenseRequest(void) const
        {
            return (*Value())[ItemName_LicenseRequest()];
        }
        bool Get_LicenseRequest(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LicenseRequest()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_LicenseRequest()]);
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
} // namespace GenerateLicenseRequest
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GENERATELICENSEREQUEST)


//------------------------------------------------------------------------
// giservice_ConfigAPI::ActivateLicense::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ACTIVATELICENSE)
namespace ActivateLicense
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
        static std::string str("ConfigAPI.ActivateLicense");
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
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::ActivateLicense");
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
} // namespace ActivateLicense
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ACTIVATELICENSE)


//------------------------------------------------------------------------
// giservice_ConfigAPI::OnlineActivation::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ONLINEACTIVATION)
namespace OnlineActivation
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
        static std::string str("ConfigAPI.OnlineActivation");
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
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::OnlineActivation");
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
} // namespace OnlineActivation
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ONLINEACTIVATION)


//------------------------------------------------------------------------
// giservice_ConfigAPI::Version::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_VERSION)
namespace Version
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Version(void)
    {
        static std::string str("Version");
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
        static std::string str("ConfigAPI.Version");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Version();
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
            Construct_Version();
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
            Initialize_Version();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::Version");
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
    // Item Version (Type: "std::string")
    protected:
        void Construct_Version(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Version()))
                {
                    std::string InitValue;
                    InitValue = "0.1";
                    (*Value())[ItemName_Version()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Version(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Version()))
                {
                    Construct_Version();
                }
                if ((*Value()).hasMember(ItemName_Version()))
                {
                    std::string InitValue;
                    InitValue = "0.1";
                    (*Value())[ItemName_Version()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Version(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Version()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Version(void) const
        {
            return (*Value())[ItemName_Version()];
        }
        bool Get_Version(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Version()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Version()]);
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
} // namespace Version
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_VERSION)


//------------------------------------------------------------------------
// giservice_ConfigAPI::GetConfig::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETCONFIG)
namespace GetConfig
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Config(void)
    {
        static std::string str("Config");
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
        static std::string str("ConfigAPI.GetConfig");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Config();
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
            Construct_Config();
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
            Initialize_Config();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::GetConfig");
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
    // Item Config (Type: "CStructConfig")
    protected:
        void Construct_Config(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Config()))
                {
                    CStructConfig InitValue;
                    (*Value())[ItemName_Config()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Config(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Config()))
                {
                    Construct_Config();
                }
                if ((*Value()).hasMember(ItemName_Config()))
                {
                    CStructConfig InitValue;
                    (*Value())[ItemName_Config()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Config(const CStructConfig& SetValue)
        {
            try
            {
                (*Value())[ItemName_Config()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructConfig Get_Config(void) const
        {
            return (*Value())[ItemName_Config()];
        }
        bool Get_Config(CStructConfig& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Config()]).valid())
                {
                    GetValue = (*Value())[ItemName_Config()];
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
} // namespace GetConfig
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETCONFIG)


//------------------------------------------------------------------------
// giservice_ConfigAPI::SetConfig::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_SETCONFIG)
namespace SetConfig
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
        static std::string str("ConfigAPI.SetConfig");
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
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::SetConfig");
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
} // namespace SetConfig
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_SETCONFIG)


//------------------------------------------------------------------------
// giservice_ConfigAPI::GetGlobalSettings::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETGLOBALSETTINGS)
namespace GetGlobalSettings
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Config(void)
    {
        static std::string str("Config");
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
        static std::string str("ConfigAPI.GetGlobalSettings");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Config();
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
            Construct_Config();
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
            Initialize_Config();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::GetGlobalSettings");
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
    // Item Config (Type: "CStructGlobalSettings")
    protected:
        void Construct_Config(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Config()))
                {
                    CStructGlobalSettings InitValue;
                    (*Value())[ItemName_Config()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Config(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Config()))
                {
                    Construct_Config();
                }
                if ((*Value()).hasMember(ItemName_Config()))
                {
                    CStructGlobalSettings InitValue;
                    (*Value())[ItemName_Config()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Config(const CStructGlobalSettings& SetValue)
        {
            try
            {
                (*Value())[ItemName_Config()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructGlobalSettings Get_Config(void) const
        {
            return (*Value())[ItemName_Config()];
        }
        bool Get_Config(CStructGlobalSettings& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Config()]).valid())
                {
                    GetValue = (*Value())[ItemName_Config()];
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
} // namespace GetGlobalSettings
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETGLOBALSETTINGS)


//------------------------------------------------------------------------
// giservice_ConfigAPI::AddDevice::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ADDDEVICE)
namespace AddDevice
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
    static std::string const& ItemName_Routes(void)
    {
        static std::string str("Routes");
        return str;
    }
public:
    static std::string const& ItemName_Device(void)
    {
        static std::string str("Device");
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
        static std::string str("ConfigAPI.AddDevice");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
            Construct_Routes();
            Construct_Device();
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
            Construct_Routes();
            Construct_Device();
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
            Initialize_Routes();
            Initialize_Device();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::AddDevice");
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
    //------------------------------------------------------------------------
    // Item Routes (Type: "std::string[0]")
    protected:
        void Construct_Routes(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Routes()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Routes()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Routes(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Routes()))
                {
                    Construct_Routes();
                }
                if ((*Value()).hasMember(ItemName_Routes()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Routes()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Routes(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_Routes()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Routes(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Routes()))
                {
                    return (*Value())[ItemName_Routes()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Routes(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Routes()))
                {
                    (*Value())[ItemName_Routes()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Routes(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_Routes()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Routes(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Routes()))
                {
                    (*Value())[ItemName_Routes()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Routes(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_Routes())
                {
                    SetSize_Routes(ArrayIndex + 1);
                }
                (*Value())[ItemName_Routes()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Routes(int ArrayIndex) const
        {
            return (*Value())[ItemName_Routes()][ArrayIndex];
        }
        bool Get_Routes(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Routes()))
                {
                    if (((*Value())[ItemName_Routes()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_Routes()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Device (Type: "CStructDeviceInfo")
    protected:
        void Construct_Device(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Device()))
                {
                    CStructDeviceInfo InitValue;
                    (*Value())[ItemName_Device()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Device(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Device()))
                {
                    Construct_Device();
                }
                if ((*Value()).hasMember(ItemName_Device()))
                {
                    CStructDeviceInfo InitValue;
                    (*Value())[ItemName_Device()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Device(const CStructDeviceInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_Device()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructDeviceInfo Get_Device(void) const
        {
            return (*Value())[ItemName_Device()];
        }
        bool Get_Device(CStructDeviceInfo& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Device()]).valid())
                {
                    GetValue = (*Value())[ItemName_Device()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace AddDevice
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ADDDEVICE)


//------------------------------------------------------------------------
// giservice_ConfigAPI::RemoveDevice::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_REMOVEDEVICE)
namespace RemoveDevice
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
        static std::string str("ConfigAPI.RemoveDevice");
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
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::RemoveDevice");
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
} // namespace RemoveDevice
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_REMOVEDEVICE)


//------------------------------------------------------------------------
// giservice_ConfigAPI::ListDevices::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_LISTDEVICES)
namespace ListDevices
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Devices(void)
    {
        static std::string str("Devices");
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
        static std::string str("ConfigAPI.ListDevices");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Devices();
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
            Construct_Devices();
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
            Initialize_Devices();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::ListDevices");
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
    // Item Devices (Type: "CStructDeviceInfo[0]")
    protected:
        void Construct_Devices(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Devices()))
                {
                    CStructDeviceInfo InitValue;
                    (*Value())[ItemName_Devices()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Devices(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Devices()))
                {
                    Construct_Devices();
                }
                if ((*Value()).hasMember(ItemName_Devices()))
                {
                    CStructDeviceInfo InitValue;
                    (*Value())[ItemName_Devices()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Devices(int NewSize)
        {
            try
            {
                CStructDeviceInfo InitValue;
                (*Value())[ItemName_Devices()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Devices(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Devices()))
                {
                    return (*Value())[ItemName_Devices()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Devices(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Devices()))
                {
                    (*Value())[ItemName_Devices()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Devices(int ArrayIndex, CStructDeviceInfo SetValue)
        {
            try
            {
                (*Value())[ItemName_Devices()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Devices(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Devices()))
                {
                    (*Value())[ItemName_Devices()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Devices(int ArrayIndex, const CStructDeviceInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_Devices()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Devices()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructDeviceInfo Get_Devices(int ArrayIndex) const
        {
            return (*Value())[ItemName_Devices()][ArrayIndex];
        }
        bool Get_Devices(int ArrayIndex, CStructDeviceInfo& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Devices()))
                {
                    if (((*Value())[ItemName_Devices()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Devices()][ArrayIndex];
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
} // namespace ListDevices
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_LISTDEVICES)


//------------------------------------------------------------------------
// giservice_ConfigAPI::ClearDeviceStates::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_CLEARDEVICESTATES)
namespace ClearDeviceStates
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
        static std::string str("ConfigAPI.ClearDeviceStates");
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
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::ClearDeviceStates");
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
} // namespace ClearDeviceStates
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_CLEARDEVICESTATES)


//------------------------------------------------------------------------
// giservice_ConfigAPI::StartProcess::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_STARTPROCESS)
namespace StartProcess
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
        static std::string str("ConfigAPI.StartProcess");
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
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::StartProcess");
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
} // namespace StartProcess
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_STARTPROCESS)


//------------------------------------------------------------------------
// giservice_ConfigAPI::StopProcess::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_STOPPROCESS)
namespace StopProcess
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
        static std::string str("ConfigAPI.StopProcess");
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
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::StopProcess");
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
} // namespace StopProcess
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_STOPPROCESS)


//------------------------------------------------------------------------
// giservice_ConfigAPI::ListProcesses::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_LISTPROCESSES)
namespace ListProcesses
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Result(void)
    {
        static std::string str("Result");
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
        static std::string str("ConfigAPI.ListProcesses");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Result();
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
            Construct_Result();
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
            Initialize_Result();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::ListProcesses");
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
    // Item Result (Type: "CStructConfigInfoEntry[0]")
    protected:
        void Construct_Result(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Result()))
                {
                    CStructConfigInfoEntry InitValue;
                    (*Value())[ItemName_Result()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Result(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Result()))
                {
                    Construct_Result();
                }
                if ((*Value()).hasMember(ItemName_Result()))
                {
                    CStructConfigInfoEntry InitValue;
                    (*Value())[ItemName_Result()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Result(int NewSize)
        {
            try
            {
                CStructConfigInfoEntry InitValue;
                (*Value())[ItemName_Result()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Result(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Result()))
                {
                    return (*Value())[ItemName_Result()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Result(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Result()))
                {
                    (*Value())[ItemName_Result()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Result(int ArrayIndex, CStructConfigInfoEntry SetValue)
        {
            try
            {
                (*Value())[ItemName_Result()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Result(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Result()))
                {
                    (*Value())[ItemName_Result()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Result(int ArrayIndex, const CStructConfigInfoEntry& SetValue)
        {
            try
            {
                (*Value())[ItemName_Result()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Result()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructConfigInfoEntry Get_Result(int ArrayIndex) const
        {
            return (*Value())[ItemName_Result()][ArrayIndex];
        }
        bool Get_Result(int ArrayIndex, CStructConfigInfoEntry& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Result()))
                {
                    if (((*Value())[ItemName_Result()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Result()][ArrayIndex];
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
} // namespace ListProcesses
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_LISTPROCESSES)


//------------------------------------------------------------------------
// giservice_ConfigAPI::Settings::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_SETTINGS)
namespace Settings
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
        static std::string str("ConfigAPI.Settings");
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
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::Settings");
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
} // namespace Settings
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_SETTINGS)


//------------------------------------------------------------------------
// giservice_ConfigAPI::GetLicenseInformation::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETLICENSEINFORMATION)
namespace GetLicenseInformation
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_LicenseType(void)
    {
        static std::string str("LicenseType");
        return str;
    }
public:
    static std::string const& ItemName_LicenseInformation(void)
    {
        static std::string str("LicenseInformation");
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
        static std::string str("ConfigAPI.GetLicenseInformation");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_LicenseType();
            Construct_LicenseInformation();
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
            Construct_LicenseType();
            Construct_LicenseInformation();
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
            Initialize_LicenseType();
            Initialize_LicenseInformation();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::GetLicenseInformation");
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
    // Item LicenseType (Type: "GInsXmlRpcStdAPI::CGIns_Base_ElementValue")
    protected:
        void Construct_LicenseType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LicenseType()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_LicenseType()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_LicenseType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LicenseType()))
                {
                    Construct_LicenseType();
                }
                if ((*Value()).hasMember(ItemName_LicenseType()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_LicenseType()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LicenseType(const GInsXmlRpcStdAPI::CGIns_Base_ElementValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_LicenseType()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Base_ElementValue Get_LicenseType(void) const
        {
            return (*Value())[ItemName_LicenseType()];
        }
        bool Get_LicenseType(GInsXmlRpcStdAPI::CGIns_Base_ElementValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LicenseType()]).valid())
                {
                    GetValue = (*Value())[ItemName_LicenseType()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item LicenseInformation (Type: "CStructLicenseInformation")
    protected:
        void Construct_LicenseInformation(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LicenseInformation()))
                {
                    CStructLicenseInformation InitValue;
                    (*Value())[ItemName_LicenseInformation()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_LicenseInformation(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LicenseInformation()))
                {
                    Construct_LicenseInformation();
                }
                if ((*Value()).hasMember(ItemName_LicenseInformation()))
                {
                    CStructLicenseInformation InitValue;
                    (*Value())[ItemName_LicenseInformation()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LicenseInformation(const CStructLicenseInformation& SetValue)
        {
            try
            {
                (*Value())[ItemName_LicenseInformation()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructLicenseInformation Get_LicenseInformation(void) const
        {
            return (*Value())[ItemName_LicenseInformation()];
        }
        bool Get_LicenseInformation(CStructLicenseInformation& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LicenseInformation()]).valid())
                {
                    GetValue = (*Value())[ItemName_LicenseInformation()];
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
} // namespace GetLicenseInformation
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETLICENSEINFORMATION)


//------------------------------------------------------------------------
// giservice_ConfigAPI::HandleProject::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_HANDLEPROJECT)
namespace HandleProject
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
    static std::string const& ItemName_ReturnValue(void)
    {
        static std::string str("ReturnValue");
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
        static std::string str("ConfigAPI.HandleProject");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
            Construct_ReturnValue();
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
            Construct_ReturnValue();
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
            Initialize_ReturnValue();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::HandleProject");
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
    //------------------------------------------------------------------------
    // Item ReturnValue (Type: "GInsXmlRpc::XmlRpcValue")
    protected:
        void Construct_ReturnValue(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnValue()))
                {
                    GInsXmlRpc::XmlRpcValue InitValue = (int)0;
                    (*Value())[ItemName_ReturnValue()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ReturnValue(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnValue()))
                {
                    Construct_ReturnValue();
                }
                if ((*Value()).hasMember(ItemName_ReturnValue()))
                {
                    GInsXmlRpc::XmlRpcValue InitValue = (int)0;
                    (*Value())[ItemName_ReturnValue()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReturnValue(const GInsXmlRpc::XmlRpcValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_ReturnValue()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpc::XmlRpcValue Get_ReturnValue(void) const
        {
            return (*Value())[ItemName_ReturnValue()];
        }
        bool Get_ReturnValue(GInsXmlRpc::XmlRpcValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReturnValue()]).valid())
                {
                    GetValue = (*Value())[ItemName_ReturnValue()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace HandleProject
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_HANDLEPROJECT)


//------------------------------------------------------------------------
// giservice_ConfigAPI::GetProjectState::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETPROJECTSTATE)
namespace GetProjectState
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
    static std::string const& ItemName_ProjectState(void)
    {
        static std::string str("ProjectState");
        return str;
    }
public:
    static std::string const& ItemName_DeviceStates(void)
    {
        static std::string str("DeviceStates");
        return str;
    }
public:
    static std::string const& ItemName_OnlineDataTransferStates(void)
    {
        static std::string str("OnlineDataTransferStates");
        return str;
    }
public:
    static std::string const& ItemName_DataLoggerStates(void)
    {
        static std::string str("DataLoggerStates");
        return str;
    }
public:
    static std::string const& ItemName_DataBufferStates(void)
    {
        static std::string str("DataBufferStates");
        return str;
    }
public:
    static std::string const& ItemName_StartupState(void)
    {
        static std::string str("StartupState");
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
        static std::string str("ConfigAPI.GetProjectState");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
            Construct_ProjectState();
            Construct_DeviceStates();
            Construct_OnlineDataTransferStates();
            Construct_DataLoggerStates();
            Construct_DataBufferStates();
            Construct_StartupState();
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
            Construct_ProjectState();
            Construct_DeviceStates();
            Construct_OnlineDataTransferStates();
            Construct_DataLoggerStates();
            Construct_DataBufferStates();
            Construct_StartupState();
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
            Initialize_ProjectState();
            Initialize_DeviceStates();
            Initialize_OnlineDataTransferStates();
            Initialize_DataLoggerStates();
            Initialize_DataBufferStates();
            Initialize_StartupState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::GetProjectState");
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
    //------------------------------------------------------------------------
    // Item ProjectState (Type: "CStructProjectInfo")
    protected:
        void Construct_ProjectState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProjectState()))
                {
                    CStructProjectInfo InitValue;
                    (*Value())[ItemName_ProjectState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ProjectState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProjectState()))
                {
                    Construct_ProjectState();
                }
                if ((*Value()).hasMember(ItemName_ProjectState()))
                {
                    CStructProjectInfo InitValue;
                    (*Value())[ItemName_ProjectState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ProjectState(const CStructProjectInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_ProjectState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructProjectInfo Get_ProjectState(void) const
        {
            return (*Value())[ItemName_ProjectState()];
        }
        bool Get_ProjectState(CStructProjectInfo& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ProjectState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ProjectState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item DeviceStates (Type: "CStructStateInfo[0]")
    protected:
        void Construct_DeviceStates(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceStates()))
                {
                    CStructStateInfo InitValue;
                    (*Value())[ItemName_DeviceStates()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_DeviceStates(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceStates()))
                {
                    Construct_DeviceStates();
                }
                if ((*Value()).hasMember(ItemName_DeviceStates()))
                {
                    CStructStateInfo InitValue;
                    (*Value())[ItemName_DeviceStates()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_DeviceStates(int NewSize)
        {
            try
            {
                CStructStateInfo InitValue;
                (*Value())[ItemName_DeviceStates()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_DeviceStates(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DeviceStates()))
                {
                    return (*Value())[ItemName_DeviceStates()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_DeviceStates(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DeviceStates()))
                {
                    (*Value())[ItemName_DeviceStates()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_DeviceStates(int ArrayIndex, CStructStateInfo SetValue)
        {
            try
            {
                (*Value())[ItemName_DeviceStates()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_DeviceStates(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DeviceStates()))
                {
                    (*Value())[ItemName_DeviceStates()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DeviceStates(int ArrayIndex, const CStructStateInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_DeviceStates()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_DeviceStates()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructStateInfo Get_DeviceStates(int ArrayIndex) const
        {
            return (*Value())[ItemName_DeviceStates()][ArrayIndex];
        }
        bool Get_DeviceStates(int ArrayIndex, CStructStateInfo& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DeviceStates()))
                {
                    if (((*Value())[ItemName_DeviceStates()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_DeviceStates()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item OnlineDataTransferStates (Type: "CStructStateInfo[0]")
    protected:
        void Construct_OnlineDataTransferStates(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_OnlineDataTransferStates()))
                {
                    CStructStateInfo InitValue;
                    (*Value())[ItemName_OnlineDataTransferStates()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_OnlineDataTransferStates(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_OnlineDataTransferStates()))
                {
                    Construct_OnlineDataTransferStates();
                }
                if ((*Value()).hasMember(ItemName_OnlineDataTransferStates()))
                {
                    CStructStateInfo InitValue;
                    (*Value())[ItemName_OnlineDataTransferStates()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_OnlineDataTransferStates(int NewSize)
        {
            try
            {
                CStructStateInfo InitValue;
                (*Value())[ItemName_OnlineDataTransferStates()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_OnlineDataTransferStates(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_OnlineDataTransferStates()))
                {
                    return (*Value())[ItemName_OnlineDataTransferStates()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_OnlineDataTransferStates(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_OnlineDataTransferStates()))
                {
                    (*Value())[ItemName_OnlineDataTransferStates()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_OnlineDataTransferStates(int ArrayIndex, CStructStateInfo SetValue)
        {
            try
            {
                (*Value())[ItemName_OnlineDataTransferStates()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_OnlineDataTransferStates(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_OnlineDataTransferStates()))
                {
                    (*Value())[ItemName_OnlineDataTransferStates()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_OnlineDataTransferStates(int ArrayIndex, const CStructStateInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_OnlineDataTransferStates()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_OnlineDataTransferStates()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructStateInfo Get_OnlineDataTransferStates(int ArrayIndex) const
        {
            return (*Value())[ItemName_OnlineDataTransferStates()][ArrayIndex];
        }
        bool Get_OnlineDataTransferStates(int ArrayIndex, CStructStateInfo& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_OnlineDataTransferStates()))
                {
                    if (((*Value())[ItemName_OnlineDataTransferStates()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_OnlineDataTransferStates()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item DataLoggerStates (Type: "CStructStateInfo[0]")
    protected:
        void Construct_DataLoggerStates(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataLoggerStates()))
                {
                    CStructStateInfo InitValue;
                    (*Value())[ItemName_DataLoggerStates()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_DataLoggerStates(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataLoggerStates()))
                {
                    Construct_DataLoggerStates();
                }
                if ((*Value()).hasMember(ItemName_DataLoggerStates()))
                {
                    CStructStateInfo InitValue;
                    (*Value())[ItemName_DataLoggerStates()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_DataLoggerStates(int NewSize)
        {
            try
            {
                CStructStateInfo InitValue;
                (*Value())[ItemName_DataLoggerStates()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_DataLoggerStates(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DataLoggerStates()))
                {
                    return (*Value())[ItemName_DataLoggerStates()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_DataLoggerStates(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DataLoggerStates()))
                {
                    (*Value())[ItemName_DataLoggerStates()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_DataLoggerStates(int ArrayIndex, CStructStateInfo SetValue)
        {
            try
            {
                (*Value())[ItemName_DataLoggerStates()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_DataLoggerStates(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DataLoggerStates()))
                {
                    (*Value())[ItemName_DataLoggerStates()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DataLoggerStates(int ArrayIndex, const CStructStateInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_DataLoggerStates()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_DataLoggerStates()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructStateInfo Get_DataLoggerStates(int ArrayIndex) const
        {
            return (*Value())[ItemName_DataLoggerStates()][ArrayIndex];
        }
        bool Get_DataLoggerStates(int ArrayIndex, CStructStateInfo& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DataLoggerStates()))
                {
                    if (((*Value())[ItemName_DataLoggerStates()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_DataLoggerStates()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item DataBufferStates (Type: "CStructStateInfo[0]")
    protected:
        void Construct_DataBufferStates(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataBufferStates()))
                {
                    CStructStateInfo InitValue;
                    (*Value())[ItemName_DataBufferStates()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_DataBufferStates(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataBufferStates()))
                {
                    Construct_DataBufferStates();
                }
                if ((*Value()).hasMember(ItemName_DataBufferStates()))
                {
                    CStructStateInfo InitValue;
                    (*Value())[ItemName_DataBufferStates()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_DataBufferStates(int NewSize)
        {
            try
            {
                CStructStateInfo InitValue;
                (*Value())[ItemName_DataBufferStates()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_DataBufferStates(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DataBufferStates()))
                {
                    return (*Value())[ItemName_DataBufferStates()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_DataBufferStates(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DataBufferStates()))
                {
                    (*Value())[ItemName_DataBufferStates()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_DataBufferStates(int ArrayIndex, CStructStateInfo SetValue)
        {
            try
            {
                (*Value())[ItemName_DataBufferStates()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_DataBufferStates(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DataBufferStates()))
                {
                    (*Value())[ItemName_DataBufferStates()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DataBufferStates(int ArrayIndex, const CStructStateInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_DataBufferStates()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_DataBufferStates()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructStateInfo Get_DataBufferStates(int ArrayIndex) const
        {
            return (*Value())[ItemName_DataBufferStates()][ArrayIndex];
        }
        bool Get_DataBufferStates(int ArrayIndex, CStructStateInfo& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DataBufferStates()))
                {
                    if (((*Value())[ItemName_DataBufferStates()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_DataBufferStates()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item StartupState (Type: "CStructStartupState")
    protected:
        void Construct_StartupState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StartupState()))
                {
                    CStructStartupState InitValue;
                    (*Value())[ItemName_StartupState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_StartupState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StartupState()))
                {
                    Construct_StartupState();
                }
                if ((*Value()).hasMember(ItemName_StartupState()))
                {
                    CStructStartupState InitValue;
                    (*Value())[ItemName_StartupState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StartupState(const CStructStartupState& SetValue)
        {
            try
            {
                (*Value())[ItemName_StartupState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructStartupState Get_StartupState(void) const
        {
            return (*Value())[ItemName_StartupState()];
        }
        bool Get_StartupState(CStructStartupState& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_StartupState()]).valid())
                {
                    GetValue = (*Value())[ItemName_StartupState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetProjectState
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETPROJECTSTATE)


//------------------------------------------------------------------------
// giservice_ConfigAPI::GetVersionInformation::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETVERSIONINFORMATION)
namespace GetVersionInformation
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_VersionInformation(void)
    {
        static std::string str("VersionInformation");
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
        static std::string str("ConfigAPI.GetVersionInformation");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_VersionInformation();
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
            Construct_VersionInformation();
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
            Initialize_VersionInformation();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::GetVersionInformation");
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
    // Item VersionInformation (Type: "GInsXmlRpcStdAPI::CGIns_Info_Version[0]")
    protected:
        void Construct_VersionInformation(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_VersionInformation()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_Version InitValue;
                    (*Value())[ItemName_VersionInformation()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_VersionInformation(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_VersionInformation()))
                {
                    Construct_VersionInformation();
                }
                if ((*Value()).hasMember(ItemName_VersionInformation()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_Version InitValue;
                    (*Value())[ItemName_VersionInformation()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_VersionInformation(int NewSize)
        {
            try
            {
                GInsXmlRpcStdAPI::CGIns_Info_Version InitValue;
                (*Value())[ItemName_VersionInformation()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_VersionInformation(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_VersionInformation()))
                {
                    return (*Value())[ItemName_VersionInformation()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_VersionInformation(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_VersionInformation()))
                {
                    (*Value())[ItemName_VersionInformation()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_VersionInformation(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Info_Version SetValue)
        {
            try
            {
                (*Value())[ItemName_VersionInformation()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_VersionInformation(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_VersionInformation()))
                {
                    (*Value())[ItemName_VersionInformation()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_VersionInformation(int ArrayIndex, const GInsXmlRpcStdAPI::CGIns_Info_Version& SetValue)
        {
            try
            {
                (*Value())[ItemName_VersionInformation()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_VersionInformation()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_Version Get_VersionInformation(int ArrayIndex) const
        {
            return (*Value())[ItemName_VersionInformation()][ArrayIndex];
        }
        bool Get_VersionInformation(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Info_Version& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_VersionInformation()))
                {
                    if (((*Value())[ItemName_VersionInformation()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_VersionInformation()][ArrayIndex];
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
} // namespace GetVersionInformation
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETVERSIONINFORMATION)


//------------------------------------------------------------------------
// giservice_ConfigAPI::GetAPIVersions::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETAPIVERSIONS)
namespace GetAPIVersions
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Versions(void)
    {
        static std::string str("Versions");
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
        static std::string str("ConfigAPI.GetAPIVersions");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Versions();
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
            Construct_Versions();
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
            Initialize_Versions();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::GetAPIVersions");
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
    // Item Versions (Type: "CStructAPIVersionInfo[0]")
    protected:
        void Construct_Versions(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Versions()))
                {
                    CStructAPIVersionInfo InitValue;
                    (*Value())[ItemName_Versions()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Versions(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Versions()))
                {
                    Construct_Versions();
                }
                if ((*Value()).hasMember(ItemName_Versions()))
                {
                    CStructAPIVersionInfo InitValue;
                    (*Value())[ItemName_Versions()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Versions(int NewSize)
        {
            try
            {
                CStructAPIVersionInfo InitValue;
                (*Value())[ItemName_Versions()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Versions(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Versions()))
                {
                    return (*Value())[ItemName_Versions()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Versions(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Versions()))
                {
                    (*Value())[ItemName_Versions()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Versions(int ArrayIndex, CStructAPIVersionInfo SetValue)
        {
            try
            {
                (*Value())[ItemName_Versions()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Versions(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Versions()))
                {
                    (*Value())[ItemName_Versions()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Versions(int ArrayIndex, const CStructAPIVersionInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_Versions()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Versions()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructAPIVersionInfo Get_Versions(int ArrayIndex) const
        {
            return (*Value())[ItemName_Versions()][ArrayIndex];
        }
        bool Get_Versions(int ArrayIndex, CStructAPIVersionInfo& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Versions()))
                {
                    if (((*Value())[ItemName_Versions()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Versions()][ArrayIndex];
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
} // namespace GetAPIVersions
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETAPIVERSIONS)


//------------------------------------------------------------------------
// giservice_ConfigAPI::CheckAPICompatibility::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_CHECKAPICOMPATIBILITY)
namespace CheckAPICompatibility
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Versions(void)
    {
        static std::string str("Versions");
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
        static std::string str("ConfigAPI.CheckAPICompatibility");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Versions();
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
            Construct_Versions();
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
            Initialize_Versions();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::CheckAPICompatibility");
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
    // Item Versions (Type: "CStructAPICompatibilityInfo[0]")
    protected:
        void Construct_Versions(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Versions()))
                {
                    CStructAPICompatibilityInfo InitValue;
                    (*Value())[ItemName_Versions()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Versions(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Versions()))
                {
                    Construct_Versions();
                }
                if ((*Value()).hasMember(ItemName_Versions()))
                {
                    CStructAPICompatibilityInfo InitValue;
                    (*Value())[ItemName_Versions()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Versions(int NewSize)
        {
            try
            {
                CStructAPICompatibilityInfo InitValue;
                (*Value())[ItemName_Versions()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Versions(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Versions()))
                {
                    return (*Value())[ItemName_Versions()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Versions(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Versions()))
                {
                    (*Value())[ItemName_Versions()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Versions(int ArrayIndex, CStructAPICompatibilityInfo SetValue)
        {
            try
            {
                (*Value())[ItemName_Versions()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Versions(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Versions()))
                {
                    (*Value())[ItemName_Versions()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Versions(int ArrayIndex, const CStructAPICompatibilityInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_Versions()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Versions()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructAPICompatibilityInfo Get_Versions(int ArrayIndex) const
        {
            return (*Value())[ItemName_Versions()][ArrayIndex];
        }
        bool Get_Versions(int ArrayIndex, CStructAPICompatibilityInfo& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Versions()))
                {
                    if (((*Value())[ItemName_Versions()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Versions()][ArrayIndex];
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
} // namespace CheckAPICompatibility
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_CHECKAPICOMPATIBILITY)


//------------------------------------------------------------------------
// giservice_ConfigAPI::PairDeviceWithCloud::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_PAIRDEVICEWITHCLOUD)
namespace PairDeviceWithCloud
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
        static std::string str("ConfigAPI.PairDeviceWithCloud");
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
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::PairDeviceWithCloud");
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
} // namespace PairDeviceWithCloud
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_PAIRDEVICEWITHCLOUD)


//------------------------------------------------------------------------
// giservice_ConfigAPI::GetPairDeviceWithCloudResult::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETPAIRDEVICEWITHCLOUDRESULT)
namespace GetPairDeviceWithCloudResult
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Finished(void)
    {
        static std::string str("Finished");
        return str;
    }
public:
    static std::string const& ItemName_Messages(void)
    {
        static std::string str("Messages");
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
        static std::string str("ConfigAPI.GetPairDeviceWithCloudResult");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Finished();
            Construct_Messages();
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
            Construct_Finished();
            Construct_Messages();
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
            Initialize_Finished();
            Initialize_Messages();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::GetPairDeviceWithCloudResult");
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
// Item Finished (Type: "bool")
protected:
    void Construct_Finished(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Finished()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Finished()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Finished(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Finished()))
                {
                    Construct_Finished();
                }
                if ((*Value()).hasMember(ItemName_Finished()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Finished()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Finished(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Finished()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Finished(void) const
        {
            bool GetValue = (*Value())[ItemName_Finished()];
            return (bool)GetValue;
        }
        bool Get_Finished(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Finished()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Finished()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Messages (Type: "std::string[0]")
    protected:
        void Construct_Messages(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Messages()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Messages()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Messages(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Messages()))
                {
                    Construct_Messages();
                }
                if ((*Value()).hasMember(ItemName_Messages()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Messages()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Messages(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_Messages()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Messages(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Messages()))
                {
                    return (*Value())[ItemName_Messages()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Messages(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Messages()))
                {
                    (*Value())[ItemName_Messages()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Messages(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_Messages()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Messages(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Messages()))
                {
                    (*Value())[ItemName_Messages()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Messages(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_Messages())
                {
                    SetSize_Messages(ArrayIndex + 1);
                }
                (*Value())[ItemName_Messages()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Messages(int ArrayIndex) const
        {
            return (*Value())[ItemName_Messages()][ArrayIndex];
        }
        bool Get_Messages(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Messages()))
                {
                    if (((*Value())[ItemName_Messages()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_Messages()][ArrayIndex]);
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
} // namespace GetPairDeviceWithCloudResult
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETPAIRDEVICEWITHCLOUDRESULT)


//------------------------------------------------------------------------
// giservice_ConfigAPI::GenericCall::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GENERICCALL)
namespace GenericCall
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
        static std::string str("ConfigAPI.GenericCall");
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
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::GenericCall");
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
} // namespace GenericCall
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GENERICCALL)


//------------------------------------------------------------------------
// giservice_ConfigAPI::AddCertificate::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ADDCERTIFICATE)
namespace AddCertificate
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
        static std::string str("ConfigAPI.AddCertificate");
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
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::AddCertificate");
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
} // namespace AddCertificate
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ADDCERTIFICATE)


//------------------------------------------------------------------------
// giservice_ConfigAPI::ListTimezones::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_LISTTIMEZONES)
namespace ListTimezones
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Timezones(void)
    {
        static std::string str("Timezones");
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
        static std::string str("ConfigAPI.ListTimezones");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Timezones();
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
            Construct_Timezones();
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
            Initialize_Timezones();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::ListTimezones");
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
    // Item Timezones (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Timezones(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Timezones()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Timezones()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Timezones(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Timezones()))
                {
                    Construct_Timezones();
                }
                if ((*Value()).hasMember(ItemName_Timezones()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Timezones()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Timezones(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Timezones()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Timezones(void) const
        {
            return (*Value())[ItemName_Timezones()];
        }
        bool Get_Timezones(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Timezones()]).valid())
                {
                    GetValue = (*Value())[ItemName_Timezones()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace ListTimezones
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_LISTTIMEZONES)


//------------------------------------------------------------------------
// giservice_ConfigAPI::CreateGroup::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_CREATEGROUP)
namespace CreateGroup
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ID(void)
    {
        static std::string str("ID");
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
        static std::string str("ConfigAPI.CreateGroup");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ID();
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
            Construct_ID();
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
            Initialize_ID();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::CreateGroup");
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
    // Item ID (Type: "std::string")
    protected:
        void Construct_ID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ID()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ID()))
                {
                    Construct_ID();
                }
                if ((*Value()).hasMember(ItemName_ID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ID()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ID(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ID()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ID(void) const
        {
            return (*Value())[ItemName_ID()];
        }
        bool Get_ID(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ID()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ID()]);
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
} // namespace CreateGroup
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_CREATEGROUP)


//------------------------------------------------------------------------
// giservice_ConfigAPI::SetGroup::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_SETGROUP)
namespace SetGroup
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
        static std::string str("ConfigAPI.SetGroup");
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
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::SetGroup");
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
} // namespace SetGroup
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_SETGROUP)


//------------------------------------------------------------------------
// giservice_ConfigAPI::RemoveGroups::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_REMOVEGROUPS)
namespace RemoveGroups
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
        static std::string str("ConfigAPI.RemoveGroups");
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
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::RemoveGroups");
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
} // namespace RemoveGroups
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_REMOVEGROUPS)


//------------------------------------------------------------------------
// giservice_ConfigAPI::GetGroups::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETGROUPS)
namespace GetGroups
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
    static std::string const& ItemName_Groups(void)
    {
        static std::string str("Groups");
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
        static std::string str("ConfigAPI.GetGroups");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
            Construct_Groups();
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
            Construct_Groups();
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
            Initialize_Groups();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::GetGroups");
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
    //------------------------------------------------------------------------
    // Item Groups (Type: "CStructGroup[0]")
    protected:
        void Construct_Groups(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Groups()))
                {
                    CStructGroup InitValue;
                    (*Value())[ItemName_Groups()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Groups(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Groups()))
                {
                    Construct_Groups();
                }
                if ((*Value()).hasMember(ItemName_Groups()))
                {
                    CStructGroup InitValue;
                    (*Value())[ItemName_Groups()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Groups(int NewSize)
        {
            try
            {
                CStructGroup InitValue;
                (*Value())[ItemName_Groups()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Groups(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Groups()))
                {
                    return (*Value())[ItemName_Groups()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Groups(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Groups()))
                {
                    (*Value())[ItemName_Groups()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Groups(int ArrayIndex, CStructGroup SetValue)
        {
            try
            {
                (*Value())[ItemName_Groups()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Groups(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Groups()))
                {
                    (*Value())[ItemName_Groups()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Groups(int ArrayIndex, const CStructGroup& SetValue)
        {
            try
            {
                (*Value())[ItemName_Groups()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Groups()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructGroup Get_Groups(int ArrayIndex) const
        {
            return (*Value())[ItemName_Groups()][ArrayIndex];
        }
        bool Get_Groups(int ArrayIndex, CStructGroup& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Groups()))
                {
                    if (((*Value())[ItemName_Groups()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Groups()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetGroups
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETGROUPS)


//------------------------------------------------------------------------
// giservice_ConfigAPI::AddGroupElements::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ADDGROUPELEMENTS)
namespace AddGroupElements
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
        static std::string str("ConfigAPI.AddGroupElements");
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
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::AddGroupElements");
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
} // namespace AddGroupElements
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ADDGROUPELEMENTS)


//------------------------------------------------------------------------
// giservice_ConfigAPI::RemoveGroupElements::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_REMOVEGROUPELEMENTS)
namespace RemoveGroupElements
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
        static std::string str("ConfigAPI.RemoveGroupElements");
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
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::RemoveGroupElements");
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
} // namespace RemoveGroupElements
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_REMOVEGROUPELEMENTS)


//------------------------------------------------------------------------
// giservice_ConfigAPI::AddStorageDestination::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ADDSTORAGEDESTINATION)
namespace AddStorageDestination
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
        static std::string str("ConfigAPI.AddStorageDestination");
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
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::AddStorageDestination");
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
} // namespace AddStorageDestination
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_ADDSTORAGEDESTINATION)


//------------------------------------------------------------------------
// giservice_ConfigAPI::RemoveStorageDestination::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_REMOVESTORAGEDESTINATION)
namespace RemoveStorageDestination
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
        static std::string str("ConfigAPI.RemoveStorageDestination");
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
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::RemoveStorageDestination");
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
} // namespace RemoveStorageDestination
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_REMOVESTORAGEDESTINATION)


//------------------------------------------------------------------------
// giservice_ConfigAPI::SetStorageDestination::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_SETSTORAGEDESTINATION)
namespace SetStorageDestination
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
        static std::string str("ConfigAPI.SetStorageDestination");
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
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::SetStorageDestination");
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
} // namespace SetStorageDestination
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_SETSTORAGEDESTINATION)


//------------------------------------------------------------------------
// giservice_ConfigAPI::GetStorageDestinations::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETSTORAGEDESTINATIONS)
namespace GetStorageDestinations
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_StorageDestinations(void)
    {
        static std::string str("StorageDestinations");
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
        static std::string str("ConfigAPI.GetStorageDestinations");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_StorageDestinations();
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
            Construct_StorageDestinations();
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
            Initialize_StorageDestinations();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::GetStorageDestinations");
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
    // Item StorageDestinations (Type: "CStructStorageDestination[0]")
    protected:
        void Construct_StorageDestinations(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StorageDestinations()))
                {
                    CStructStorageDestination InitValue;
                    (*Value())[ItemName_StorageDestinations()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_StorageDestinations(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StorageDestinations()))
                {
                    Construct_StorageDestinations();
                }
                if ((*Value()).hasMember(ItemName_StorageDestinations()))
                {
                    CStructStorageDestination InitValue;
                    (*Value())[ItemName_StorageDestinations()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_StorageDestinations(int NewSize)
        {
            try
            {
                CStructStorageDestination InitValue;
                (*Value())[ItemName_StorageDestinations()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_StorageDestinations(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_StorageDestinations()))
                {
                    return (*Value())[ItemName_StorageDestinations()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_StorageDestinations(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_StorageDestinations()))
                {
                    (*Value())[ItemName_StorageDestinations()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_StorageDestinations(int ArrayIndex, CStructStorageDestination SetValue)
        {
            try
            {
                (*Value())[ItemName_StorageDestinations()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_StorageDestinations(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_StorageDestinations()))
                {
                    (*Value())[ItemName_StorageDestinations()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StorageDestinations(int ArrayIndex, const CStructStorageDestination& SetValue)
        {
            try
            {
                (*Value())[ItemName_StorageDestinations()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_StorageDestinations()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructStorageDestination Get_StorageDestinations(int ArrayIndex) const
        {
            return (*Value())[ItemName_StorageDestinations()][ArrayIndex];
        }
        bool Get_StorageDestinations(int ArrayIndex, CStructStorageDestination& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_StorageDestinations()))
                {
                    if (((*Value())[ItemName_StorageDestinations()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_StorageDestinations()][ArrayIndex];
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
} // namespace GetStorageDestinations
#endif //#if defined(IMPLEMENT_GISERVICE_CONFIGAPI_GETSTORAGEDESTINATIONS)
//========================================================================
}; // namespace giservice_ConfigAPI
//========================================================================
#endif // #if !defined(_GISERVICE_CONFIGAPI_TYPES_H)

