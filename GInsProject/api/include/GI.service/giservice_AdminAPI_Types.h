//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_GISERVICE_ADMINAPI_TYPES_H)
#define _GISERVICE_ADMINAPI_TYPES_H
//========================================================================
// Implemented methods
#define IMPLEMENT_GISERVICE_ADMINAPI_GETGLOBALSYSINFOS
#define IMPLEMENT_GISERVICE_ADMINAPI_CHECKFORUPDATES
#define IMPLEMENT_GISERVICE_ADMINAPI_UPDATE
#define IMPLEMENT_GISERVICE_ADMINAPI_GETUPDATESTATUS
#define IMPLEMENT_GISERVICE_ADMINAPI_LOGIN
#define IMPLEMENT_GISERVICE_ADMINAPI_LOGINREQUIRED
#define IMPLEMENT_GISERVICE_ADMINAPI_REFRESHTOKEN


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "giservice_AdminAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace giservice_AdminAPI {
//========================================================================
//------------------------------------------------------------------------
// giservice_AdminAPI::CAPIInfo
//------------------------------------------------------------------------
class CAPIInfo
{
public:
    static std::string const& Name(void)
    {
        static std::string str("AdminAPI");
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
// giservice_AdminAPI::CXmlRpcClientHandler
//------------------------------------------------------------------------
class CXmlRpcClientHandler : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_RouteName(void)
        {
            static std::string str("RouteName");
            return str;
        }
    public:
        static std::string const& ItemName_HandlerCount(void)
        {
            static std::string str("HandlerCount");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("XmlRpcClientHandler");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("22.1");
        return str;
    }
public:
    CXmlRpcClientHandler(void)
    {
        try
        {
            Construct_RouteName();
            Construct_HandlerCount();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CXmlRpcClientHandler(const CXmlRpcClientHandler& rhs) : 
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
    CXmlRpcClientHandler(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_HandlerCount();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CXmlRpcClientHandler(void)
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
            Initialize_HandlerCount();
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
// Item HandlerCount (Type: "int32_t")
protected:
    void Construct_HandlerCount(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_HandlerCount()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_HandlerCount()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_HandlerCount(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_HandlerCount()))
                {
                    Construct_HandlerCount();
                }
                if ((*Value()).hasMember(ItemName_HandlerCount()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_HandlerCount()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_HandlerCount(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_HandlerCount()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_HandlerCount(void) const
        {
            int32_t GetValue = (*Value())[ItemName_HandlerCount()];
            return (int32_t)GetValue;
        }
        bool Get_HandlerCount(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_HandlerCount()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_HandlerCount()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CXmlRpcClientHandler


//------------------------------------------------------------------------
// giservice_AdminAPI::CheckForUpdates::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_ADMINAPI_CHECKFORUPDATES)
namespace CheckForUpdates
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_OnlyNewerVersions(void)
    {
        static std::string str("OnlyNewerVersions");
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
        static std::string str("AdminAPI.CheckForUpdates");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_OnlyNewerVersions();
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
            Construct_OnlyNewerVersions();
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
            Initialize_OnlyNewerVersions();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::CheckForUpdates");
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
// Item OnlyNewerVersions (Type: "bool")
protected:
    void Construct_OnlyNewerVersions(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_OnlyNewerVersions()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_OnlyNewerVersions()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_OnlyNewerVersions(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_OnlyNewerVersions()))
                {
                    Construct_OnlyNewerVersions();
                }
                if ((*Value()).hasMember(ItemName_OnlyNewerVersions()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_OnlyNewerVersions()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_OnlyNewerVersions(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_OnlyNewerVersions()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_OnlyNewerVersions(void) const
        {
            bool GetValue = (*Value())[ItemName_OnlyNewerVersions()];
            return (bool)GetValue;
        }
        bool Get_OnlyNewerVersions(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_OnlyNewerVersions()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_OnlyNewerVersions()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace CheckForUpdates
#endif //#if defined(IMPLEMENT_GISERVICE_ADMINAPI_CHECKFORUPDATES)


//------------------------------------------------------------------------
// giservice_AdminAPI::Update::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_ADMINAPI_UPDATE)
namespace Update
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Version(void)
    {
        static std::string str("Version");
        return str;
    }
public:
    static std::string const& ItemName_Build(void)
    {
        static std::string str("Build");
        return str;
    }
public:
    static std::string const& ItemName_Architecture(void)
    {
        static std::string str("Architecture");
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
        static std::string str("AdminAPI.Update");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Version();
            Construct_Build();
            Construct_Architecture();
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
            Construct_Version();
            Construct_Build();
            Construct_Architecture();
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
            Initialize_Version();
            Initialize_Build();
            Initialize_Architecture();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::Update");
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
    // Item Build (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Build(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Build()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Build()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Build(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Build()))
                {
                    Construct_Build();
                }
                if ((*Value()).hasMember(ItemName_Build()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Build()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Build(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Build()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Build(void) const
        {
            return (*Value())[ItemName_Build()];
        }
        bool Get_Build(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Build()]).valid())
                {
                    GetValue = (*Value())[ItemName_Build()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Architecture (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Architecture(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Architecture()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Architecture()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Architecture(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Architecture()))
                {
                    Construct_Architecture();
                }
                if ((*Value()).hasMember(ItemName_Architecture()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Architecture()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Architecture(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Architecture()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Architecture(void) const
        {
            return (*Value())[ItemName_Architecture()];
        }
        bool Get_Architecture(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Architecture()]).valid())
                {
                    GetValue = (*Value())[ItemName_Architecture()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace Update
#endif //#if defined(IMPLEMENT_GISERVICE_ADMINAPI_UPDATE)


//------------------------------------------------------------------------
// giservice_AdminAPI::Login::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_ADMINAPI_LOGIN)
namespace Login
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
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
    static std::string const& ItemName_ClientID(void)
    {
        static std::string str("ClientID");
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
        static std::string str("AdminAPI.Login");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Username();
            Construct_Password();
            Construct_ClientID();
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
            Construct_Username();
            Construct_Password();
            Construct_ClientID();
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
            Initialize_Username();
            Initialize_Password();
            Initialize_ClientID();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::Login");
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
    // Item ClientID (Type: "std::string")
    protected:
        void Construct_ClientID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ClientID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ClientID()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ClientID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ClientID()))
                {
                    Construct_ClientID();
                }
                if ((*Value()).hasMember(ItemName_ClientID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ClientID()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ClientID(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ClientID()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ClientID(void) const
        {
            return (*Value())[ItemName_ClientID()];
        }
        bool Get_ClientID(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ClientID()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ClientID()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace Login
#endif //#if defined(IMPLEMENT_GISERVICE_ADMINAPI_LOGIN)


//------------------------------------------------------------------------
// giservice_AdminAPI::LoginRequired::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_ADMINAPI_LOGINREQUIRED)
namespace LoginRequired
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
        static std::string str("AdminAPI.LoginRequired");
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
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::LoginRequired");
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
} // namespace LoginRequired
#endif //#if defined(IMPLEMENT_GISERVICE_ADMINAPI_LOGINREQUIRED)


//------------------------------------------------------------------------
// giservice_AdminAPI::RefreshToken::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_ADMINAPI_REFRESHTOKEN)
namespace RefreshToken
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_RefreshToken(void)
    {
        static std::string str("RefreshToken");
        return str;
    }
public:
    static std::string const& ItemName_ClientID(void)
    {
        static std::string str("ClientID");
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
        static std::string str("AdminAPI.RefreshToken");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_RefreshToken();
            Construct_ClientID();
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
            Construct_RefreshToken();
            Construct_ClientID();
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
            Initialize_RefreshToken();
            Initialize_ClientID();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::RefreshToken");
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
    // Item RefreshToken (Type: "std::string")
    protected:
        void Construct_RefreshToken(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RefreshToken()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RefreshToken()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_RefreshToken(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RefreshToken()))
                {
                    Construct_RefreshToken();
                }
                if ((*Value()).hasMember(ItemName_RefreshToken()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RefreshToken()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RefreshToken(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_RefreshToken()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_RefreshToken(void) const
        {
            return (*Value())[ItemName_RefreshToken()];
        }
        bool Get_RefreshToken(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RefreshToken()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_RefreshToken()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ClientID (Type: "std::string")
    protected:
        void Construct_ClientID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ClientID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ClientID()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ClientID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ClientID()))
                {
                    Construct_ClientID();
                }
                if ((*Value()).hasMember(ItemName_ClientID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ClientID()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ClientID(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ClientID()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ClientID(void) const
        {
            return (*Value())[ItemName_ClientID()];
        }
        bool Get_ClientID(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ClientID()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ClientID()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace RefreshToken
#endif //#if defined(IMPLEMENT_GISERVICE_ADMINAPI_REFRESHTOKEN)


//------------------------------------------------------------------------
// giservice_AdminAPI::GetGlobalSysInfos::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_ADMINAPI_GETGLOBALSYSINFOS)
namespace GetGlobalSysInfos
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ThreadsUsed(void)
    {
        static std::string str("ThreadsUsed");
        return str;
    }
public:
    static std::string const& ItemName_ThreadsTotalAvailable(void)
    {
        static std::string str("ThreadsTotalAvailable");
        return str;
    }
public:
    static std::string const& ItemName_ThreadPoolHealth(void)
    {
        static std::string str("ThreadPoolHealth");
        return str;
    }
public:
    static std::string const& ItemName_XmlRpcClientHandlers(void)
    {
        static std::string str("XmlRpcClientHandlers");
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
        static std::string str("AdminAPI.GetGlobalSysInfos");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ThreadsUsed();
            Construct_ThreadsTotalAvailable();
            Construct_ThreadPoolHealth();
            Construct_XmlRpcClientHandlers();
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
            Construct_ThreadsUsed();
            Construct_ThreadsTotalAvailable();
            Construct_ThreadPoolHealth();
            Construct_XmlRpcClientHandlers();
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
            Initialize_ThreadsUsed();
            Initialize_ThreadsTotalAvailable();
            Initialize_ThreadPoolHealth();
            Initialize_XmlRpcClientHandlers();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::GetGlobalSysInfos");
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
// Item ThreadsUsed (Type: "int32_t")
protected:
    void Construct_ThreadsUsed(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ThreadsUsed()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_ThreadsUsed()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ThreadsUsed(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ThreadsUsed()))
                {
                    Construct_ThreadsUsed();
                }
                if ((*Value()).hasMember(ItemName_ThreadsUsed()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_ThreadsUsed()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ThreadsUsed(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_ThreadsUsed()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_ThreadsUsed(void) const
        {
            int32_t GetValue = (*Value())[ItemName_ThreadsUsed()];
            return (int32_t)GetValue;
        }
        bool Get_ThreadsUsed(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ThreadsUsed()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_ThreadsUsed()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item ThreadsTotalAvailable (Type: "int32_t")
protected:
    void Construct_ThreadsTotalAvailable(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ThreadsTotalAvailable()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_ThreadsTotalAvailable()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ThreadsTotalAvailable(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ThreadsTotalAvailable()))
                {
                    Construct_ThreadsTotalAvailable();
                }
                if ((*Value()).hasMember(ItemName_ThreadsTotalAvailable()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_ThreadsTotalAvailable()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ThreadsTotalAvailable(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_ThreadsTotalAvailable()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_ThreadsTotalAvailable(void) const
        {
            int32_t GetValue = (*Value())[ItemName_ThreadsTotalAvailable()];
            return (int32_t)GetValue;
        }
        bool Get_ThreadsTotalAvailable(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ThreadsTotalAvailable()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_ThreadsTotalAvailable()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item ThreadPoolHealth (Type: "double")
protected:
    void Construct_ThreadPoolHealth(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ThreadPoolHealth()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_ThreadPoolHealth()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ThreadPoolHealth(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ThreadPoolHealth()))
                {
                    Construct_ThreadPoolHealth();
                }
                if ((*Value()).hasMember(ItemName_ThreadPoolHealth()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_ThreadPoolHealth()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ThreadPoolHealth(double SetValue)
        {
            try
            {
                (*Value())[ItemName_ThreadPoolHealth()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_ThreadPoolHealth(void) const
        {
            double GetValue = (*Value())[ItemName_ThreadPoolHealth()];
            return (double)GetValue;
        }
        bool Get_ThreadPoolHealth(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ThreadPoolHealth()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_ThreadPoolHealth()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item XmlRpcClientHandlers (Type: "CXmlRpcClientHandler[0]")
    protected:
        void Construct_XmlRpcClientHandlers(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_XmlRpcClientHandlers()))
                {
                    CXmlRpcClientHandler InitValue;
                    (*Value())[ItemName_XmlRpcClientHandlers()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_XmlRpcClientHandlers(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_XmlRpcClientHandlers()))
                {
                    Construct_XmlRpcClientHandlers();
                }
                if ((*Value()).hasMember(ItemName_XmlRpcClientHandlers()))
                {
                    CXmlRpcClientHandler InitValue;
                    (*Value())[ItemName_XmlRpcClientHandlers()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_XmlRpcClientHandlers(int NewSize)
        {
            try
            {
                CXmlRpcClientHandler InitValue;
                (*Value())[ItemName_XmlRpcClientHandlers()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_XmlRpcClientHandlers(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_XmlRpcClientHandlers()))
                {
                    return (*Value())[ItemName_XmlRpcClientHandlers()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_XmlRpcClientHandlers(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_XmlRpcClientHandlers()))
                {
                    (*Value())[ItemName_XmlRpcClientHandlers()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_XmlRpcClientHandlers(int ArrayIndex, CXmlRpcClientHandler SetValue)
        {
            try
            {
                (*Value())[ItemName_XmlRpcClientHandlers()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_XmlRpcClientHandlers(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_XmlRpcClientHandlers()))
                {
                    (*Value())[ItemName_XmlRpcClientHandlers()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_XmlRpcClientHandlers(int ArrayIndex, const CXmlRpcClientHandler& SetValue)
        {
            try
            {
                (*Value())[ItemName_XmlRpcClientHandlers()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_XmlRpcClientHandlers()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CXmlRpcClientHandler Get_XmlRpcClientHandlers(int ArrayIndex) const
        {
            return (*Value())[ItemName_XmlRpcClientHandlers()][ArrayIndex];
        }
        bool Get_XmlRpcClientHandlers(int ArrayIndex, CXmlRpcClientHandler& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_XmlRpcClientHandlers()))
                {
                    if (((*Value())[ItemName_XmlRpcClientHandlers()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_XmlRpcClientHandlers()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetGlobalSysInfos
#endif //#if defined(IMPLEMENT_GISERVICE_ADMINAPI_GETGLOBALSYSINFOS)


//------------------------------------------------------------------------
// giservice_AdminAPI::CheckForUpdates::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_ADMINAPI_CHECKFORUPDATES)
namespace CheckForUpdates
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
    static std::string const& ItemName_TrunkVersions(void)
    {
        static std::string str("TrunkVersions");
        return str;
    }
public:
    static std::string const& ItemName_ReleaseVersions(void)
    {
        static std::string str("ReleaseVersions");
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
        static std::string str("AdminAPI.CheckForUpdates");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
            Construct_TrunkVersions();
            Construct_ReleaseVersions();
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
            Construct_TrunkVersions();
            Construct_ReleaseVersions();
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
            Initialize_TrunkVersions();
            Initialize_ReleaseVersions();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::CheckForUpdates");
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
    // Item TrunkVersions (Type: "std::string[0]")
    protected:
        void Construct_TrunkVersions(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TrunkVersions()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_TrunkVersions()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_TrunkVersions(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TrunkVersions()))
                {
                    Construct_TrunkVersions();
                }
                if ((*Value()).hasMember(ItemName_TrunkVersions()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_TrunkVersions()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_TrunkVersions(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_TrunkVersions()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_TrunkVersions(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_TrunkVersions()))
                {
                    return (*Value())[ItemName_TrunkVersions()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_TrunkVersions(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_TrunkVersions()))
                {
                    (*Value())[ItemName_TrunkVersions()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_TrunkVersions(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_TrunkVersions()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_TrunkVersions(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_TrunkVersions()))
                {
                    (*Value())[ItemName_TrunkVersions()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TrunkVersions(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_TrunkVersions())
                {
                    SetSize_TrunkVersions(ArrayIndex + 1);
                }
                (*Value())[ItemName_TrunkVersions()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_TrunkVersions(int ArrayIndex) const
        {
            return (*Value())[ItemName_TrunkVersions()][ArrayIndex];
        }
        bool Get_TrunkVersions(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_TrunkVersions()))
                {
                    if (((*Value())[ItemName_TrunkVersions()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_TrunkVersions()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ReleaseVersions (Type: "std::string[0]")
    protected:
        void Construct_ReleaseVersions(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReleaseVersions()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ReleaseVersions()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_ReleaseVersions(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReleaseVersions()))
                {
                    Construct_ReleaseVersions();
                }
                if ((*Value()).hasMember(ItemName_ReleaseVersions()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ReleaseVersions()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_ReleaseVersions(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_ReleaseVersions()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_ReleaseVersions(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ReleaseVersions()))
                {
                    return (*Value())[ItemName_ReleaseVersions()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_ReleaseVersions(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ReleaseVersions()))
                {
                    (*Value())[ItemName_ReleaseVersions()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_ReleaseVersions(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_ReleaseVersions()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_ReleaseVersions(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ReleaseVersions()))
                {
                    (*Value())[ItemName_ReleaseVersions()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReleaseVersions(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_ReleaseVersions())
                {
                    SetSize_ReleaseVersions(ArrayIndex + 1);
                }
                (*Value())[ItemName_ReleaseVersions()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ReleaseVersions(int ArrayIndex) const
        {
            return (*Value())[ItemName_ReleaseVersions()][ArrayIndex];
        }
        bool Get_ReleaseVersions(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ReleaseVersions()))
                {
                    if (((*Value())[ItemName_ReleaseVersions()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_ReleaseVersions()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace CheckForUpdates
#endif //#if defined(IMPLEMENT_GISERVICE_ADMINAPI_CHECKFORUPDATES)


//------------------------------------------------------------------------
// giservice_AdminAPI::Update::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_ADMINAPI_UPDATE)
namespace Update
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
        static std::string str("AdminAPI.Update");
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
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::Update");
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
} // namespace Update
#endif //#if defined(IMPLEMENT_GISERVICE_ADMINAPI_UPDATE)


//------------------------------------------------------------------------
// giservice_AdminAPI::GetUpdateStatus::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_ADMINAPI_GETUPDATESTATUS)
namespace GetUpdateStatus
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
    static std::string const& ItemName_Status(void)
    {
        static std::string str("Status");
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
        static std::string str("AdminAPI.GetUpdateStatus");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
            Construct_Status();
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
            Construct_Status();
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
            Initialize_Status();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::GetUpdateStatus");
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
    // Item Status (Type: "std::string")
    protected:
        void Construct_Status(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Status()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Status()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Status(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Status()))
                {
                    Construct_Status();
                }
                if ((*Value()).hasMember(ItemName_Status()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Status()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Status(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Status()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Status(void) const
        {
            return (*Value())[ItemName_Status()];
        }
        bool Get_Status(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Status()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Status()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetUpdateStatus
#endif //#if defined(IMPLEMENT_GISERVICE_ADMINAPI_GETUPDATESTATUS)


//------------------------------------------------------------------------
// giservice_AdminAPI::Login::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_ADMINAPI_LOGIN)
namespace Login
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
    static std::string const& ItemName_AccessToken(void)
    {
        static std::string str("AccessToken");
        return str;
    }
public:
    static std::string const& ItemName_RefreshToken(void)
    {
        static std::string str("RefreshToken");
        return str;
    }
public:
    static std::string const& ItemName_TokenType(void)
    {
        static std::string str("TokenType");
        return str;
    }
public:
    static std::string const& ItemName_ExpiresIn(void)
    {
        static std::string str("ExpiresIn");
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
        static std::string str("AdminAPI.Login");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
            Construct_AccessToken();
            Construct_RefreshToken();
            Construct_TokenType();
            Construct_ExpiresIn();
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
            Construct_AccessToken();
            Construct_RefreshToken();
            Construct_TokenType();
            Construct_ExpiresIn();
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
            Initialize_AccessToken();
            Initialize_RefreshToken();
            Initialize_TokenType();
            Initialize_ExpiresIn();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::Login");
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
    // Item AccessToken (Type: "std::string")
    protected:
        void Construct_AccessToken(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_AccessToken()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_AccessToken()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_AccessToken(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_AccessToken()))
                {
                    Construct_AccessToken();
                }
                if ((*Value()).hasMember(ItemName_AccessToken()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_AccessToken()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_AccessToken(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_AccessToken()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_AccessToken(void) const
        {
            return (*Value())[ItemName_AccessToken()];
        }
        bool Get_AccessToken(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_AccessToken()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_AccessToken()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item RefreshToken (Type: "std::string")
    protected:
        void Construct_RefreshToken(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RefreshToken()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RefreshToken()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_RefreshToken(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RefreshToken()))
                {
                    Construct_RefreshToken();
                }
                if ((*Value()).hasMember(ItemName_RefreshToken()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RefreshToken()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RefreshToken(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_RefreshToken()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_RefreshToken(void) const
        {
            return (*Value())[ItemName_RefreshToken()];
        }
        bool Get_RefreshToken(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RefreshToken()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_RefreshToken()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item TokenType (Type: "std::string")
    protected:
        void Construct_TokenType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TokenType()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_TokenType()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_TokenType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TokenType()))
                {
                    Construct_TokenType();
                }
                if ((*Value()).hasMember(ItemName_TokenType()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_TokenType()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TokenType(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_TokenType()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_TokenType(void) const
        {
            return (*Value())[ItemName_TokenType()];
        }
        bool Get_TokenType(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TokenType()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_TokenType()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item ExpiresIn (Type: "int32_t")
protected:
    void Construct_ExpiresIn(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ExpiresIn()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_ExpiresIn()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ExpiresIn(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ExpiresIn()))
                {
                    Construct_ExpiresIn();
                }
                if ((*Value()).hasMember(ItemName_ExpiresIn()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_ExpiresIn()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ExpiresIn(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_ExpiresIn()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_ExpiresIn(void) const
        {
            int32_t GetValue = (*Value())[ItemName_ExpiresIn()];
            return (int32_t)GetValue;
        }
        bool Get_ExpiresIn(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ExpiresIn()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_ExpiresIn()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace Login
#endif //#if defined(IMPLEMENT_GISERVICE_ADMINAPI_LOGIN)


//------------------------------------------------------------------------
// giservice_AdminAPI::LoginRequired::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_ADMINAPI_LOGINREQUIRED)
namespace LoginRequired
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
    static std::string const& ItemName_LoginRequired(void)
    {
        static std::string str("LoginRequired");
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
        static std::string str("AdminAPI.LoginRequired");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
            Construct_LoginRequired();
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
            Construct_LoginRequired();
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
            Initialize_LoginRequired();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::LoginRequired");
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
// Item LoginRequired (Type: "bool")
protected:
    void Construct_LoginRequired(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_LoginRequired()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_LoginRequired()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_LoginRequired(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LoginRequired()))
                {
                    Construct_LoginRequired();
                }
                if ((*Value()).hasMember(ItemName_LoginRequired()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_LoginRequired()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LoginRequired(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_LoginRequired()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_LoginRequired(void) const
        {
            bool GetValue = (*Value())[ItemName_LoginRequired()];
            return (bool)GetValue;
        }
        bool Get_LoginRequired(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LoginRequired()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_LoginRequired()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace LoginRequired
#endif //#if defined(IMPLEMENT_GISERVICE_ADMINAPI_LOGINREQUIRED)


//------------------------------------------------------------------------
// giservice_AdminAPI::RefreshToken::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GISERVICE_ADMINAPI_REFRESHTOKEN)
namespace RefreshToken
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
    static std::string const& ItemName_AccessToken(void)
    {
        static std::string str("AccessToken");
        return str;
    }
public:
    static std::string const& ItemName_RefreshToken(void)
    {
        static std::string str("RefreshToken");
        return str;
    }
public:
    static std::string const& ItemName_TokenType(void)
    {
        static std::string str("TokenType");
        return str;
    }
public:
    static std::string const& ItemName_ExpiresIn(void)
    {
        static std::string str("ExpiresIn");
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
        static std::string str("AdminAPI.RefreshToken");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
            Construct_AccessToken();
            Construct_RefreshToken();
            Construct_TokenType();
            Construct_ExpiresIn();
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
            Construct_AccessToken();
            Construct_RefreshToken();
            Construct_TokenType();
            Construct_ExpiresIn();
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
            Initialize_AccessToken();
            Initialize_RefreshToken();
            Initialize_TokenType();
            Initialize_ExpiresIn();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::RefreshToken");
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
    // Item AccessToken (Type: "std::string")
    protected:
        void Construct_AccessToken(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_AccessToken()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_AccessToken()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_AccessToken(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_AccessToken()))
                {
                    Construct_AccessToken();
                }
                if ((*Value()).hasMember(ItemName_AccessToken()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_AccessToken()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_AccessToken(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_AccessToken()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_AccessToken(void) const
        {
            return (*Value())[ItemName_AccessToken()];
        }
        bool Get_AccessToken(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_AccessToken()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_AccessToken()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item RefreshToken (Type: "std::string")
    protected:
        void Construct_RefreshToken(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RefreshToken()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RefreshToken()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_RefreshToken(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RefreshToken()))
                {
                    Construct_RefreshToken();
                }
                if ((*Value()).hasMember(ItemName_RefreshToken()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RefreshToken()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RefreshToken(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_RefreshToken()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_RefreshToken(void) const
        {
            return (*Value())[ItemName_RefreshToken()];
        }
        bool Get_RefreshToken(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RefreshToken()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_RefreshToken()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item TokenType (Type: "std::string")
    protected:
        void Construct_TokenType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TokenType()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_TokenType()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_TokenType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TokenType()))
                {
                    Construct_TokenType();
                }
                if ((*Value()).hasMember(ItemName_TokenType()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_TokenType()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TokenType(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_TokenType()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_TokenType(void) const
        {
            return (*Value())[ItemName_TokenType()];
        }
        bool Get_TokenType(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TokenType()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_TokenType()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item ExpiresIn (Type: "int32_t")
protected:
    void Construct_ExpiresIn(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ExpiresIn()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_ExpiresIn()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ExpiresIn(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ExpiresIn()))
                {
                    Construct_ExpiresIn();
                }
                if ((*Value()).hasMember(ItemName_ExpiresIn()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_ExpiresIn()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ExpiresIn(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_ExpiresIn()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_ExpiresIn(void) const
        {
            int32_t GetValue = (*Value())[ItemName_ExpiresIn()];
            return (int32_t)GetValue;
        }
        bool Get_ExpiresIn(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ExpiresIn()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_ExpiresIn()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace RefreshToken
#endif //#if defined(IMPLEMENT_GISERVICE_ADMINAPI_REFRESHTOKEN)
//========================================================================
}; // namespace giservice_AdminAPI
//========================================================================
#endif // #if !defined(_GISERVICE_ADMINAPI_TYPES_H)

