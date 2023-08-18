//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_GICOM_CLIENTAPI_TYPES_H)
#define _GICOM_CLIENTAPI_TYPES_H
//========================================================================
// Implemented methods
#define IMPLEMENT_GICOM_CLIENTAPI_LOGIN
#define IMPLEMENT_GICOM_CLIENTAPI_OPENCONNECTION
#define IMPLEMENT_GICOM_CLIENTAPI_GETCONNECTIONS
#define IMPLEMENT_GICOM_CLIENTAPI_CLOSECONNECTION
#define IMPLEMENT_GICOM_CLIENTAPI_GETLOGS


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "gicom_ClientAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace gicom_ClientAPI {
//========================================================================
//------------------------------------------------------------------------
// gicom_ClientAPI::CAPIInfo
//------------------------------------------------------------------------
class CAPIInfo
{
public:
    static std::string const& Name(void)
    {
        static std::string str("ClientAPI");
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
// gicom_ClientAPI::Login::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_CLIENTAPI_LOGIN)
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
    static std::string const& ItemName_ServerURL(void)
    {
        static std::string str("ServerURL");
        return str;
    }
public:
    static std::string const& ItemName_Instance(void)
    {
        static std::string str("Instance");
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
        static std::string str("ClientAPI.Login");
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
            Construct_ServerURL();
            Construct_Instance();
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
            Construct_ServerURL();
            Construct_Instance();
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
            Initialize_ServerURL();
            Initialize_Instance();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ClientAPI::Login");
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
    // Item ServerURL (Type: "std::string")
    protected:
        void Construct_ServerURL(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ServerURL()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ServerURL()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ServerURL(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ServerURL()))
                {
                    Construct_ServerURL();
                }
                if ((*Value()).hasMember(ItemName_ServerURL()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ServerURL()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ServerURL(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ServerURL()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ServerURL(void) const
        {
            return (*Value())[ItemName_ServerURL()];
        }
        bool Get_ServerURL(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ServerURL()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ServerURL()]);
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
}; // class CParams
} // namespace Login
#endif //#if defined(IMPLEMENT_GICOM_CLIENTAPI_LOGIN)


//------------------------------------------------------------------------
// gicom_ClientAPI::OpenConnection::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_CLIENTAPI_OPENCONNECTION)
namespace OpenConnection
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ServerCredentials(void)
    {
        static std::string str("ServerCredentials");
        return str;
    }
public:
    static std::string const& ItemName_Serialnumber(void)
    {
        static std::string str("Serialnumber");
        return str;
    }
public:
    static std::string const& ItemName_RemotePort(void)
    {
        static std::string str("RemotePort");
        return str;
    }
public:
    static std::string const& ItemName_LocalPort(void)
    {
        static std::string str("LocalPort");
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
        static std::string str("ClientAPI.OpenConnection");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ServerCredentials();
            Construct_Serialnumber();
            Construct_RemotePort();
            Construct_LocalPort();
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
            Construct_ServerCredentials();
            Construct_Serialnumber();
            Construct_RemotePort();
            Construct_LocalPort();
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
            Initialize_ServerCredentials();
            Initialize_Serialnumber();
            Initialize_RemotePort();
            Initialize_LocalPort();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ClientAPI::OpenConnection");
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
    // Item ServerCredentials (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_ServerCredentials(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ServerCredentials()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_ServerCredentials()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ServerCredentials(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ServerCredentials()))
                {
                    Construct_ServerCredentials();
                }
                if ((*Value()).hasMember(ItemName_ServerCredentials()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_ServerCredentials()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ServerCredentials(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_ServerCredentials()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_ServerCredentials(void) const
        {
            return (*Value())[ItemName_ServerCredentials()];
        }
        bool Get_ServerCredentials(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ServerCredentials()]).valid())
                {
                    GetValue = (*Value())[ItemName_ServerCredentials()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Serialnumber (Type: "std::string")
    protected:
        void Construct_Serialnumber(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Serialnumber()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Serialnumber()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Serialnumber(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Serialnumber()))
                {
                    Construct_Serialnumber();
                }
                if ((*Value()).hasMember(ItemName_Serialnumber()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Serialnumber()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Serialnumber(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Serialnumber()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Serialnumber(void) const
        {
            return (*Value())[ItemName_Serialnumber()];
        }
        bool Get_Serialnumber(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Serialnumber()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Serialnumber()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item RemotePort (Type: "int32_t")
protected:
    void Construct_RemotePort(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_RemotePort()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_RemotePort()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_RemotePort(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RemotePort()))
                {
                    Construct_RemotePort();
                }
                if ((*Value()).hasMember(ItemName_RemotePort()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_RemotePort()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RemotePort(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_RemotePort()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_RemotePort(void) const
        {
            int32_t GetValue = (*Value())[ItemName_RemotePort()];
            return (int32_t)GetValue;
        }
        bool Get_RemotePort(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RemotePort()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_RemotePort()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item LocalPort (Type: "int32_t")
protected:
    void Construct_LocalPort(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_LocalPort()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_LocalPort()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_LocalPort(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LocalPort()))
                {
                    Construct_LocalPort();
                }
                if ((*Value()).hasMember(ItemName_LocalPort()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_LocalPort()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LocalPort(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_LocalPort()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_LocalPort(void) const
        {
            int32_t GetValue = (*Value())[ItemName_LocalPort()];
            return (int32_t)GetValue;
        }
        bool Get_LocalPort(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LocalPort()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_LocalPort()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace OpenConnection
#endif //#if defined(IMPLEMENT_GICOM_CLIENTAPI_OPENCONNECTION)


//------------------------------------------------------------------------
// gicom_ClientAPI::GetConnections::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_CLIENTAPI_GETCONNECTIONS)
namespace GetConnections
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
        static std::string str("ClientAPI.GetConnections");
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
            (*Value())[ItemName_MethodID()] = std::string("ClientAPI::GetConnections");
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
} // namespace GetConnections
#endif //#if defined(IMPLEMENT_GICOM_CLIENTAPI_GETCONNECTIONS)


//------------------------------------------------------------------------
// gicom_ClientAPI::CloseConnection::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_CLIENTAPI_CLOSECONNECTION)
namespace CloseConnection
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
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
        static std::string str("ClientAPI.CloseConnection");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
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
            (*Value())[ItemName_MethodID()] = std::string("ClientAPI::CloseConnection");
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
}; // class CParams
} // namespace CloseConnection
#endif //#if defined(IMPLEMENT_GICOM_CLIENTAPI_CLOSECONNECTION)


//------------------------------------------------------------------------
// gicom_ClientAPI::GetLogs::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_CLIENTAPI_GETLOGS)
namespace GetLogs
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Clear(void)
    {
        static std::string str("Clear");
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
        static std::string str("ClientAPI.GetLogs");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Clear();
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
            Construct_Clear();
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
            Initialize_Clear();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ClientAPI::GetLogs");
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
// Item Clear (Type: "bool")
protected:
    void Construct_Clear(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Clear()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Clear()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Clear(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Clear()))
                {
                    Construct_Clear();
                }
                if ((*Value()).hasMember(ItemName_Clear()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Clear()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Clear(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Clear()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Clear(void) const
        {
            bool GetValue = (*Value())[ItemName_Clear()];
            return (bool)GetValue;
        }
        bool Get_Clear(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Clear()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Clear()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GetLogs
#endif //#if defined(IMPLEMENT_GICOM_CLIENTAPI_GETLOGS)


//------------------------------------------------------------------------
// gicom_ClientAPI::Login::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_CLIENTAPI_LOGIN)
namespace Login
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ServerCredentialsID(void)
    {
        static std::string str("ServerCredentialsID");
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
        static std::string str("ClientAPI.Login");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ServerCredentialsID();
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
            Construct_ServerCredentialsID();
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
            Initialize_ServerCredentialsID();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ClientAPI::Login");
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
    // Item ServerCredentialsID (Type: "std::string")
    protected:
        void Construct_ServerCredentialsID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ServerCredentialsID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ServerCredentialsID()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ServerCredentialsID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ServerCredentialsID()))
                {
                    Construct_ServerCredentialsID();
                }
                if ((*Value()).hasMember(ItemName_ServerCredentialsID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ServerCredentialsID()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ServerCredentialsID(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ServerCredentialsID()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ServerCredentialsID(void) const
        {
            return (*Value())[ItemName_ServerCredentialsID()];
        }
        bool Get_ServerCredentialsID(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ServerCredentialsID()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ServerCredentialsID()]);
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
} // namespace Login
#endif //#if defined(IMPLEMENT_GICOM_CLIENTAPI_LOGIN)


//------------------------------------------------------------------------
// gicom_ClientAPI::OpenConnection::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_CLIENTAPI_OPENCONNECTION)
namespace OpenConnection
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
        static std::string str("ClientAPI.OpenConnection");
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
            (*Value())[ItemName_MethodID()] = std::string("ClientAPI::OpenConnection");
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
} // namespace OpenConnection
#endif //#if defined(IMPLEMENT_GICOM_CLIENTAPI_OPENCONNECTION)


//------------------------------------------------------------------------
// gicom_ClientAPI::GetConnections::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_CLIENTAPI_GETCONNECTIONS)
namespace GetConnections
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
    static std::string const& ItemName_Connections(void)
    {
        static std::string str("Connections");
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
        static std::string str("ClientAPI.GetConnections");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
            Construct_Connections();
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
            Construct_Connections();
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
            Initialize_Connections();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ClientAPI::GetConnections");
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
    // Item Connections (Type: "gicom_CommonAPI::CStructConnection[0]")
    protected:
        void Construct_Connections(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Connections()))
                {
                    gicom_CommonAPI::CStructConnection InitValue;
                    (*Value())[ItemName_Connections()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Connections(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Connections()))
                {
                    Construct_Connections();
                }
                if ((*Value()).hasMember(ItemName_Connections()))
                {
                    gicom_CommonAPI::CStructConnection InitValue;
                    (*Value())[ItemName_Connections()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Connections(int NewSize)
        {
            try
            {
                gicom_CommonAPI::CStructConnection InitValue;
                (*Value())[ItemName_Connections()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Connections(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Connections()))
                {
                    return (*Value())[ItemName_Connections()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Connections(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Connections()))
                {
                    (*Value())[ItemName_Connections()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Connections(int ArrayIndex, gicom_CommonAPI::CStructConnection SetValue)
        {
            try
            {
                (*Value())[ItemName_Connections()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Connections(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Connections()))
                {
                    (*Value())[ItemName_Connections()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Connections(int ArrayIndex, const gicom_CommonAPI::CStructConnection& SetValue)
        {
            try
            {
                (*Value())[ItemName_Connections()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Connections()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        gicom_CommonAPI::CStructConnection Get_Connections(int ArrayIndex) const
        {
            return (*Value())[ItemName_Connections()][ArrayIndex];
        }
        bool Get_Connections(int ArrayIndex, gicom_CommonAPI::CStructConnection& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Connections()))
                {
                    if (((*Value())[ItemName_Connections()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Connections()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetConnections
#endif //#if defined(IMPLEMENT_GICOM_CLIENTAPI_GETCONNECTIONS)


//------------------------------------------------------------------------
// gicom_ClientAPI::CloseConnection::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_CLIENTAPI_CLOSECONNECTION)
namespace CloseConnection
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
        static std::string str("ClientAPI.CloseConnection");
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
            (*Value())[ItemName_MethodID()] = std::string("ClientAPI::CloseConnection");
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
} // namespace CloseConnection
#endif //#if defined(IMPLEMENT_GICOM_CLIENTAPI_CLOSECONNECTION)


//------------------------------------------------------------------------
// gicom_ClientAPI::GetLogs::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_CLIENTAPI_GETLOGS)
namespace GetLogs
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Logs(void)
    {
        static std::string str("Logs");
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
        static std::string str("ClientAPI.GetLogs");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Logs();
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
            Construct_Logs();
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
            Initialize_Logs();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ClientAPI::GetLogs");
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
    // Item Logs (Type: "gicom_CommonAPI::CStructLogEntry[0]")
    protected:
        void Construct_Logs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Logs()))
                {
                    gicom_CommonAPI::CStructLogEntry InitValue;
                    (*Value())[ItemName_Logs()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Logs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Logs()))
                {
                    Construct_Logs();
                }
                if ((*Value()).hasMember(ItemName_Logs()))
                {
                    gicom_CommonAPI::CStructLogEntry InitValue;
                    (*Value())[ItemName_Logs()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Logs(int NewSize)
        {
            try
            {
                gicom_CommonAPI::CStructLogEntry InitValue;
                (*Value())[ItemName_Logs()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Logs(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Logs()))
                {
                    return (*Value())[ItemName_Logs()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Logs(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Logs()))
                {
                    (*Value())[ItemName_Logs()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Logs(int ArrayIndex, gicom_CommonAPI::CStructLogEntry SetValue)
        {
            try
            {
                (*Value())[ItemName_Logs()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Logs(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Logs()))
                {
                    (*Value())[ItemName_Logs()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Logs(int ArrayIndex, const gicom_CommonAPI::CStructLogEntry& SetValue)
        {
            try
            {
                (*Value())[ItemName_Logs()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Logs()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        gicom_CommonAPI::CStructLogEntry Get_Logs(int ArrayIndex) const
        {
            return (*Value())[ItemName_Logs()][ArrayIndex];
        }
        bool Get_Logs(int ArrayIndex, gicom_CommonAPI::CStructLogEntry& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Logs()))
                {
                    if (((*Value())[ItemName_Logs()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Logs()][ArrayIndex];
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
} // namespace GetLogs
#endif //#if defined(IMPLEMENT_GICOM_CLIENTAPI_GETLOGS)
//========================================================================
}; // namespace gicom_ClientAPI
//========================================================================
#endif // #if !defined(_GICOM_CLIENTAPI_TYPES_H)

