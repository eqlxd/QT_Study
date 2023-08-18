//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_GICOM_COMMONAPI_TYPES_H)
#define _GICOM_COMMONAPI_TYPES_H
//========================================================================
// Implemented methods


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "gicom_CommonAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
#include "gicloud_CommonAPI_Types.h"
#include "GInsXmlRpcStdAPI_Types.h"
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace gicom_CommonAPI {
//========================================================================
//------------------------------------------------------------------------
// gicom_CommonAPI::CAPIInfo
//------------------------------------------------------------------------
class CAPIInfo
{
public:
    static std::string const& Name(void)
    {
        static std::string str("CommonAPI");
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
// gicom_CommonAPI::CStructConnection
//------------------------------------------------------------------------
class CStructConnection : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_ID(void)
        {
            static std::string str("ID");
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
        static std::string const& ItemName_Serialnumber(void)
        {
            static std::string str("Serialnumber");
            return str;
        }
    public:
        static std::string const& ItemName_ServerCredentials(void)
        {
            static std::string str("ServerCredentials");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructConnection");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("12.0");
        return str;
    }
public:
    CStructConnection(void)
    {
        try
        {
            Construct_ID();
            Construct_RemotePort();
            Construct_LocalPort();
            Construct_Serialnumber();
            Construct_ServerCredentials();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructConnection(const CStructConnection& rhs) : 
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
    CStructConnection(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_RemotePort();
            Construct_LocalPort();
            Construct_Serialnumber();
            Construct_ServerCredentials();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructConnection(void)
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
            Initialize_RemotePort();
            Initialize_LocalPort();
            Initialize_Serialnumber();
            Initialize_ServerCredentials();
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
    // Item ServerCredentials (Type: "std::string")
    protected:
        void Construct_ServerCredentials(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ServerCredentials()))
                {
                    std::string InitValue;
                    InitValue = "";
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
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ServerCredentials()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ServerCredentials(const std::string& SetValue)
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
        std::string Get_ServerCredentials(void) const
        {
            return (*Value())[ItemName_ServerCredentials()];
        }
        bool Get_ServerCredentials(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ServerCredentials()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ServerCredentials()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructConnection


//------------------------------------------------------------------------
// gicom_CommonAPI::CStructDevice
//------------------------------------------------------------------------
class CStructDevice : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_ID(void)
        {
            static std::string str("ID");
            return str;
        }
    public:
        static std::string const& ItemName_IPAddress(void)
        {
            static std::string str("IPAddress");
            return str;
        }
    public:
        static std::string const& ItemName_Serialnumber(void)
        {
            static std::string str("Serialnumber");
            return str;
        }
    public:
        static std::string const& ItemName_HeartbeatTimeSec(void)
        {
            static std::string str("HeartbeatTimeSec");
            return str;
        }
    public:
        static std::string const& ItemName_AuthenticationToken(void)
        {
            static std::string str("AuthenticationToken");
            return str;
        }
    public:
        static std::string const& ItemName_ConnectionType(void)
        {
            static std::string str("ConnectionType");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructDevice");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("12.2");
        return str;
    }
public:
    CStructDevice(void)
    {
        try
        {
            Construct_ID();
            Construct_IPAddress();
            Construct_Serialnumber();
            Construct_HeartbeatTimeSec();
            Construct_AuthenticationToken();
            Construct_ConnectionType();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructDevice(const CStructDevice& rhs) : 
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
    CStructDevice(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_IPAddress();
            Construct_Serialnumber();
            Construct_HeartbeatTimeSec();
            Construct_AuthenticationToken();
            Construct_ConnectionType();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructDevice(void)
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
            Initialize_IPAddress();
            Initialize_Serialnumber();
            Initialize_HeartbeatTimeSec();
            Initialize_AuthenticationToken();
            Initialize_ConnectionType();
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
// Item HeartbeatTimeSec (Type: "int32_t")
protected:
    void Construct_HeartbeatTimeSec(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_HeartbeatTimeSec()))
            {
                int32_t InitValue;
                InitValue = 10;
                    (*Value())[ItemName_HeartbeatTimeSec()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_HeartbeatTimeSec(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_HeartbeatTimeSec()))
                {
                    Construct_HeartbeatTimeSec();
                }
                if ((*Value()).hasMember(ItemName_HeartbeatTimeSec()))
                {
                    int32_t InitValue;
                    InitValue = 10;
                    (*Value())[ItemName_HeartbeatTimeSec()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_HeartbeatTimeSec(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_HeartbeatTimeSec()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_HeartbeatTimeSec(void) const
        {
            int32_t GetValue = (*Value())[ItemName_HeartbeatTimeSec()];
            return (int32_t)GetValue;
        }
        bool Get_HeartbeatTimeSec(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_HeartbeatTimeSec()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_HeartbeatTimeSec()]));
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
}; // class CStructDevice


//------------------------------------------------------------------------
// gicom_CommonAPI::CStructLogEntry
//------------------------------------------------------------------------
class CStructLogEntry : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Timestamp(void)
        {
            static std::string str("Timestamp");
            return str;
        }
    public:
        static std::string const& ItemName_ThreadID(void)
        {
            static std::string str("ThreadID");
            return str;
        }
    public:
        static std::string const& ItemName_Level(void)
        {
            static std::string str("Level");
            return str;
        }
    public:
        static std::string const& ItemName_Message(void)
        {
            static std::string str("Message");
            return str;
        }
    public:
        static std::string const& ItemName_Args(void)
        {
            static std::string str("Args");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructLogEntry");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("12.3");
        return str;
    }
public:
    CStructLogEntry(void)
    {
        try
        {
            Construct_Timestamp();
            Construct_ThreadID();
            Construct_Level();
            Construct_Message();
            Construct_Args();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructLogEntry(const CStructLogEntry& rhs) : 
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
    CStructLogEntry(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_Timestamp();
            Construct_ThreadID();
            Construct_Level();
            Construct_Message();
            Construct_Args();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructLogEntry(void)
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
            Initialize_Timestamp();
            Initialize_ThreadID();
            Initialize_Level();
            Initialize_Message();
            Initialize_Args();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item Timestamp (Type: "std::string")
    protected:
        void Construct_Timestamp(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Timestamp()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Timestamp()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Timestamp(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Timestamp()))
                {
                    Construct_Timestamp();
                }
                if ((*Value()).hasMember(ItemName_Timestamp()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Timestamp()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Timestamp(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Timestamp()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Timestamp(void) const
        {
            return (*Value())[ItemName_Timestamp()];
        }
        bool Get_Timestamp(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Timestamp()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Timestamp()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item ThreadID (Type: "int32_t")
protected:
    void Construct_ThreadID(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ThreadID()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_ThreadID()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ThreadID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ThreadID()))
                {
                    Construct_ThreadID();
                }
                if ((*Value()).hasMember(ItemName_ThreadID()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_ThreadID()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ThreadID(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_ThreadID()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_ThreadID(void) const
        {
            int32_t GetValue = (*Value())[ItemName_ThreadID()];
            return (int32_t)GetValue;
        }
        bool Get_ThreadID(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ThreadID()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_ThreadID()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Level (Type: "int32_t")
protected:
    void Construct_Level(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Level()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Level()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Level(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Level()))
                {
                    Construct_Level();
                }
                if ((*Value()).hasMember(ItemName_Level()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Level()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Level(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Level()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Level(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Level()];
            return (int32_t)GetValue;
        }
        bool Get_Level(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Level()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Level()]));
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
    //------------------------------------------------------------------------
    // Item Args (Type: "std::string[0]")
    protected:
        void Construct_Args(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Args()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Args()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Args(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Args()))
                {
                    Construct_Args();
                }
                if ((*Value()).hasMember(ItemName_Args()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Args()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Args(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_Args()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Args(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Args()))
                {
                    return (*Value())[ItemName_Args()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Args(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Args()))
                {
                    (*Value())[ItemName_Args()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Args(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_Args()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Args(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Args()))
                {
                    (*Value())[ItemName_Args()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Args(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_Args())
                {
                    SetSize_Args(ArrayIndex + 1);
                }
                (*Value())[ItemName_Args()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Args(int ArrayIndex) const
        {
            return (*Value())[ItemName_Args()][ArrayIndex];
        }
        bool Get_Args(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Args()))
                {
                    if (((*Value())[ItemName_Args()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_Args()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructLogEntry


//------------------------------------------------------------------------
// gicom_CommonAPI::CStructServerConfig
//------------------------------------------------------------------------
class CStructServerConfig : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_UseEncryption(void)
        {
            static std::string str("UseEncryption");
            return str;
        }
    public:
        static std::string const& ItemName_Instance(void)
        {
            static std::string str("Instance");
            return str;
        }
    public:
        static std::string const& ItemName_HttpPort(void)
        {
            static std::string str("HttpPort");
            return str;
        }
    public:
        static std::string const& ItemName_MaxLogEntries(void)
        {
            static std::string str("MaxLogEntries");
            return str;
        }
    public:
        static std::string const& ItemName_Ports(void)
        {
            static std::string str("Ports");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructServerConfig");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("12.4");
        return str;
    }
public:
    CStructServerConfig(void)
    {
        try
        {
            Construct_UseEncryption();
            Construct_Instance();
            Construct_HttpPort();
            Construct_MaxLogEntries();
            Construct_Ports();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructServerConfig(const CStructServerConfig& rhs) : 
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
    CStructServerConfig(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_UseEncryption();
            Construct_Instance();
            Construct_HttpPort();
            Construct_MaxLogEntries();
            Construct_Ports();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructServerConfig(void)
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
            Initialize_UseEncryption();
            Initialize_Instance();
            Initialize_HttpPort();
            Initialize_MaxLogEntries();
            Initialize_Ports();
        }
        catch (...) {}
    }
//------------------------------------------------------------------------
// Item UseEncryption (Type: "bool")
protected:
    void Construct_UseEncryption(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_UseEncryption()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_UseEncryption()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_UseEncryption(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UseEncryption()))
                {
                    Construct_UseEncryption();
                }
                if ((*Value()).hasMember(ItemName_UseEncryption()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_UseEncryption()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_UseEncryption(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_UseEncryption()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_UseEncryption(void) const
        {
            bool GetValue = (*Value())[ItemName_UseEncryption()];
            return (bool)GetValue;
        }
        bool Get_UseEncryption(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_UseEncryption()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_UseEncryption()]));
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
// Item HttpPort (Type: "int32_t")
protected:
    void Construct_HttpPort(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_HttpPort()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_HttpPort()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_HttpPort(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_HttpPort()))
                {
                    Construct_HttpPort();
                }
                if ((*Value()).hasMember(ItemName_HttpPort()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_HttpPort()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_HttpPort(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_HttpPort()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_HttpPort(void) const
        {
            int32_t GetValue = (*Value())[ItemName_HttpPort()];
            return (int32_t)GetValue;
        }
        bool Get_HttpPort(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_HttpPort()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_HttpPort()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item MaxLogEntries (Type: "int32_t")
protected:
    void Construct_MaxLogEntries(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MaxLogEntries()))
            {
                int32_t InitValue;
                InitValue = 100;
                    (*Value())[ItemName_MaxLogEntries()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_MaxLogEntries(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MaxLogEntries()))
                {
                    Construct_MaxLogEntries();
                }
                if ((*Value()).hasMember(ItemName_MaxLogEntries()))
                {
                    int32_t InitValue;
                    InitValue = 100;
                    (*Value())[ItemName_MaxLogEntries()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MaxLogEntries(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_MaxLogEntries()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_MaxLogEntries(void) const
        {
            int32_t GetValue = (*Value())[ItemName_MaxLogEntries()];
            return (int32_t)GetValue;
        }
        bool Get_MaxLogEntries(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MaxLogEntries()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_MaxLogEntries()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Ports (Type: "int32_t[0]")
    protected:
        void Construct_Ports(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Ports()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Ports()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Ports(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Ports()))
                {
                    Construct_Ports();
                }
                if ((*Value()).hasMember(ItemName_Ports()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Ports()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Ports(int NewSize)
        {
            try
            {
                int32_t InitValue;
                InitValue = 0;
                (*Value())[ItemName_Ports()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch(...) {}
            return false;
        }
        int GetSize_Ports(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Ports()))
                {
                    return (*Value())[ItemName_Ports()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Ports(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Ports()))
                {
                    (*Value())[ItemName_Ports()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Ports(int ArrayIndex, int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Ports()].insertArrayValue(ArrayIndex,(int32_t)SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Ports(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Ports()))
                {
                    (*Value())[ItemName_Ports()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Ports(int ArrayIndex, int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Ports()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Ports()][ArrayIndex] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Set_Ports(const std::vector<int32_t>& SetValue)
        {
            try
            {
                SetSize_Ports((int)SetValue.size());
                for (int ArrayIndex = 0; ArrayIndex < (int)SetValue.size(); ArrayIndex++)
                {
                    (*Value())[ItemName_Ports()][ArrayIndex] = (int32_t)SetValue[ArrayIndex];
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Ports(int ArrayIndex) const
        {
            int32_t GetValue = (*Value())[ItemName_Ports()][ArrayIndex];
            return (int32_t)GetValue;
        }
        bool Get_Ports(int ArrayIndex, int32_t& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Ports()))
                {
                    if (((*Value())[ItemName_Ports()][ArrayIndex]).valid())
                    {
                        GetValue = (int32_t)((int32_t)((*Value())[ItemName_Ports()][ArrayIndex]));
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructServerConfig


//------------------------------------------------------------------------
// gicom_CommonAPI::CStructInstance
//------------------------------------------------------------------------
class CStructInstance : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Name(void)
        {
            static std::string str("Name");
            return str;
        }
    public:
        static std::string const& ItemName_MaxLogEntries(void)
        {
            static std::string str("MaxLogEntries");
            return str;
        }
    public:
        static std::string const& ItemName_URL(void)
        {
            static std::string str("URL");
            return str;
        }
    public:
        static std::string const& ItemName_AuthenticationToken(void)
        {
            static std::string str("AuthenticationToken");
            return str;
        }
    public:
        static std::string const& ItemName_ID(void)
        {
            static std::string str("ID");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructInstance");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("12.5");
        return str;
    }
public:
    CStructInstance(void)
    {
        try
        {
            Construct_Name();
            Construct_MaxLogEntries();
            Construct_URL();
            Construct_AuthenticationToken();
            Construct_ID();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructInstance(const CStructInstance& rhs) : 
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
    CStructInstance(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_MaxLogEntries();
            Construct_URL();
            Construct_AuthenticationToken();
            Construct_ID();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructInstance(void)
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
            Initialize_MaxLogEntries();
            Initialize_URL();
            Initialize_AuthenticationToken();
            Initialize_ID();
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
// Item MaxLogEntries (Type: "int32_t")
protected:
    void Construct_MaxLogEntries(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MaxLogEntries()))
            {
                int32_t InitValue;
                InitValue = 100;
                    (*Value())[ItemName_MaxLogEntries()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_MaxLogEntries(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MaxLogEntries()))
                {
                    Construct_MaxLogEntries();
                }
                if ((*Value()).hasMember(ItemName_MaxLogEntries()))
                {
                    int32_t InitValue;
                    InitValue = 100;
                    (*Value())[ItemName_MaxLogEntries()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MaxLogEntries(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_MaxLogEntries()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_MaxLogEntries(void) const
        {
            int32_t GetValue = (*Value())[ItemName_MaxLogEntries()];
            return (int32_t)GetValue;
        }
        bool Get_MaxLogEntries(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MaxLogEntries()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_MaxLogEntries()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
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
    // Item ID (Type: "GInsXmlRpcStdAPI::CGIns_Info_StringValue")
    protected:
        void Construct_ID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ID()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_StringValue InitValue;
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
                    GInsXmlRpcStdAPI::CGIns_Info_StringValue InitValue;
                    (*Value())[ItemName_ID()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ID(const GInsXmlRpcStdAPI::CGIns_Info_StringValue& SetValue)
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
        GInsXmlRpcStdAPI::CGIns_Info_StringValue Get_ID(void) const
        {
            return (*Value())[ItemName_ID()];
        }
        bool Get_ID(GInsXmlRpcStdAPI::CGIns_Info_StringValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ID()]).valid())
                {
                    GetValue = (*Value())[ItemName_ID()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructInstance


//------------------------------------------------------------------------
// gicom_CommonAPI::CStructDeviceConfig
//------------------------------------------------------------------------
class CStructDeviceConfig : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Device(void)
        {
            static std::string str("Device");
            return str;
        }
    public:
        static std::string const& ItemName_Instances(void)
        {
            static std::string str("Instances");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructDeviceConfig");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("12.6");
        return str;
    }
public:
    CStructDeviceConfig(void)
    {
        try
        {
            Construct_Device();
            Construct_Instances();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructDeviceConfig(const CStructDeviceConfig& rhs) : 
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
    CStructDeviceConfig(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_Device();
            Construct_Instances();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructDeviceConfig(void)
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
            Initialize_Device();
            Initialize_Instances();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item Device (Type: "CStructDevice")
    protected:
        void Construct_Device(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Device()))
                {
                    CStructDevice InitValue;
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
                    CStructDevice InitValue;
                    (*Value())[ItemName_Device()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Device(const CStructDevice& SetValue)
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
        CStructDevice Get_Device(void) const
        {
            return (*Value())[ItemName_Device()];
        }
        bool Get_Device(CStructDevice& GetValue) const
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
    // Item Instances (Type: "CStructInstance[0]")
    protected:
        void Construct_Instances(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Instances()))
                {
                    CStructInstance InitValue;
                    (*Value())[ItemName_Instances()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Instances(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Instances()))
                {
                    Construct_Instances();
                }
                if ((*Value()).hasMember(ItemName_Instances()))
                {
                    CStructInstance InitValue;
                    (*Value())[ItemName_Instances()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Instances(int NewSize)
        {
            try
            {
                CStructInstance InitValue;
                (*Value())[ItemName_Instances()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Instances(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Instances()))
                {
                    return (*Value())[ItemName_Instances()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Instances(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Instances()))
                {
                    (*Value())[ItemName_Instances()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Instances(int ArrayIndex, CStructInstance SetValue)
        {
            try
            {
                (*Value())[ItemName_Instances()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Instances(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Instances()))
                {
                    (*Value())[ItemName_Instances()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Instances(int ArrayIndex, const CStructInstance& SetValue)
        {
            try
            {
                (*Value())[ItemName_Instances()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Instances()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructInstance Get_Instances(int ArrayIndex) const
        {
            return (*Value())[ItemName_Instances()][ArrayIndex];
        }
        bool Get_Instances(int ArrayIndex, CStructInstance& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Instances()))
                {
                    if (((*Value())[ItemName_Instances()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Instances()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructDeviceConfig


//------------------------------------------------------------------------
// gicom_CommonAPI::CStructClientConfig
//------------------------------------------------------------------------
class CStructClientConfig : public GInsXmlRpc::XmlRpcValue
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
        static std::string const& ItemName_Instance(void)
        {
            static std::string str("Instance");
            return str;
        }
    public:
        static std::string const& ItemName_ServerURL(void)
        {
            static std::string str("ServerURL");
            return str;
        }
    public:
        static std::string const& ItemName_MaxLogEntries(void)
        {
            static std::string str("MaxLogEntries");
            return str;
        }
    public:
        static std::string const& ItemName_Connections(void)
        {
            static std::string str("Connections");
            return str;
        }
    public:
        static std::string const& ItemName_MinPort(void)
        {
            static std::string str("MinPort");
            return str;
        }
    public:
        static std::string const& ItemName_MaxPort(void)
        {
            static std::string str("MaxPort");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructClientConfig");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("12.7");
        return str;
    }
public:
    CStructClientConfig(void)
    {
        try
        {
            Construct_Username();
            Construct_Password();
            Construct_Instance();
            Construct_ServerURL();
            Construct_MaxLogEntries();
            Construct_Connections();
            Construct_MinPort();
            Construct_MaxPort();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructClientConfig(const CStructClientConfig& rhs) : 
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
    CStructClientConfig(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_Username();
            Construct_Password();
            Construct_Instance();
            Construct_ServerURL();
            Construct_MaxLogEntries();
            Construct_Connections();
            Construct_MinPort();
            Construct_MaxPort();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructClientConfig(void)
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
            Initialize_Username();
            Initialize_Password();
            Initialize_Instance();
            Initialize_ServerURL();
            Initialize_MaxLogEntries();
            Initialize_Connections();
            Initialize_MinPort();
            Initialize_MaxPort();
        }
        catch (...) {}
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
// Item MaxLogEntries (Type: "int32_t")
protected:
    void Construct_MaxLogEntries(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MaxLogEntries()))
            {
                int32_t InitValue;
                InitValue = 100;
                    (*Value())[ItemName_MaxLogEntries()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_MaxLogEntries(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MaxLogEntries()))
                {
                    Construct_MaxLogEntries();
                }
                if ((*Value()).hasMember(ItemName_MaxLogEntries()))
                {
                    int32_t InitValue;
                    InitValue = 100;
                    (*Value())[ItemName_MaxLogEntries()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MaxLogEntries(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_MaxLogEntries()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_MaxLogEntries(void) const
        {
            int32_t GetValue = (*Value())[ItemName_MaxLogEntries()];
            return (int32_t)GetValue;
        }
        bool Get_MaxLogEntries(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MaxLogEntries()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_MaxLogEntries()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Connections (Type: "CStructConnection[0]")
    protected:
        void Construct_Connections(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Connections()))
                {
                    CStructConnection InitValue;
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
                    CStructConnection InitValue;
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
                CStructConnection InitValue;
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
        bool Insert_Connections(int ArrayIndex, CStructConnection SetValue)
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
        bool Set_Connections(int ArrayIndex, const CStructConnection& SetValue)
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
        CStructConnection Get_Connections(int ArrayIndex) const
        {
            return (*Value())[ItemName_Connections()][ArrayIndex];
        }
        bool Get_Connections(int ArrayIndex, CStructConnection& GetValue) const
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
//------------------------------------------------------------------------
// Item MinPort (Type: "int32_t")
protected:
    void Construct_MinPort(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MinPort()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_MinPort()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_MinPort(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MinPort()))
                {
                    Construct_MinPort();
                }
                if ((*Value()).hasMember(ItemName_MinPort()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_MinPort()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MinPort(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_MinPort()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_MinPort(void) const
        {
            int32_t GetValue = (*Value())[ItemName_MinPort()];
            return (int32_t)GetValue;
        }
        bool Get_MinPort(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MinPort()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_MinPort()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item MaxPort (Type: "int32_t")
protected:
    void Construct_MaxPort(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MaxPort()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_MaxPort()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_MaxPort(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MaxPort()))
                {
                    Construct_MaxPort();
                }
                if ((*Value()).hasMember(ItemName_MaxPort()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_MaxPort()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MaxPort(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_MaxPort()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_MaxPort(void) const
        {
            int32_t GetValue = (*Value())[ItemName_MaxPort()];
            return (int32_t)GetValue;
        }
        bool Get_MaxPort(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MaxPort()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_MaxPort()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructClientConfig


//------------------------------------------------------------------------
// gicom_CommonAPI::CStructInstanceState
//------------------------------------------------------------------------
class CStructInstanceState : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Instance(void)
        {
            static std::string str("Instance");
            return str;
        }
    public:
        static std::string const& ItemName_Connected(void)
        {
            static std::string str("Connected");
            return str;
        }
    public:
        static std::string const& ItemName_LastHeartbeatTime(void)
        {
            static std::string str("LastHeartbeatTime");
            return str;
        }
    public:
        static std::string const& ItemName_MessageCount(void)
        {
            static std::string str("MessageCount");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructInstanceState");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("12.8");
        return str;
    }
public:
    CStructInstanceState(void)
    {
        try
        {
            Construct_Instance();
            Construct_Connected();
            Construct_LastHeartbeatTime();
            Construct_MessageCount();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructInstanceState(const CStructInstanceState& rhs) : 
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
    CStructInstanceState(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_Instance();
            Construct_Connected();
            Construct_LastHeartbeatTime();
            Construct_MessageCount();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructInstanceState(void)
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
            Initialize_Instance();
            Initialize_Connected();
            Initialize_LastHeartbeatTime();
            Initialize_MessageCount();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item Instance (Type: "CStructInstance")
    protected:
        void Construct_Instance(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Instance()))
                {
                    CStructInstance InitValue;
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
                    CStructInstance InitValue;
                    (*Value())[ItemName_Instance()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Instance(const CStructInstance& SetValue)
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
        CStructInstance Get_Instance(void) const
        {
            return (*Value())[ItemName_Instance()];
        }
        bool Get_Instance(CStructInstance& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Instance()]).valid())
                {
                    GetValue = (*Value())[ItemName_Instance()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Connected (Type: "bool")
protected:
    void Construct_Connected(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Connected()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Connected()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Connected(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Connected()))
                {
                    Construct_Connected();
                }
                if ((*Value()).hasMember(ItemName_Connected()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Connected()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Connected(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Connected()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Connected(void) const
        {
            bool GetValue = (*Value())[ItemName_Connected()];
            return (bool)GetValue;
        }
        bool Get_Connected(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Connected()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Connected()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item LastHeartbeatTime (Type: "std::string")
    protected:
        void Construct_LastHeartbeatTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LastHeartbeatTime()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_LastHeartbeatTime()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_LastHeartbeatTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LastHeartbeatTime()))
                {
                    Construct_LastHeartbeatTime();
                }
                if ((*Value()).hasMember(ItemName_LastHeartbeatTime()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_LastHeartbeatTime()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LastHeartbeatTime(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_LastHeartbeatTime()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_LastHeartbeatTime(void) const
        {
            return (*Value())[ItemName_LastHeartbeatTime()];
        }
        bool Get_LastHeartbeatTime(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LastHeartbeatTime()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_LastHeartbeatTime()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item MessageCount (Type: "int32_t")
protected:
    void Construct_MessageCount(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MessageCount()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_MessageCount()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_MessageCount(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MessageCount()))
                {
                    Construct_MessageCount();
                }
                if ((*Value()).hasMember(ItemName_MessageCount()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_MessageCount()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MessageCount(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_MessageCount()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_MessageCount(void) const
        {
            int32_t GetValue = (*Value())[ItemName_MessageCount()];
            return (int32_t)GetValue;
        }
        bool Get_MessageCount(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MessageCount()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_MessageCount()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructInstanceState


//------------------------------------------------------------------------
// gicom_CommonAPI::CStructInstanceTraffic
//------------------------------------------------------------------------
class CStructInstanceTraffic : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Serialnumber(void)
        {
            static std::string str("Serialnumber");
            return str;
        }
    public:
        static std::string const& ItemName_Upload_MB(void)
        {
            static std::string str("Upload_MB");
            return str;
        }
    public:
        static std::string const& ItemName_Download_MB(void)
        {
            static std::string str("Download_MB");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructInstanceTraffic");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("12.9");
        return str;
    }
public:
    CStructInstanceTraffic(void)
    {
        try
        {
            Construct_Serialnumber();
            Construct_Upload_MB();
            Construct_Download_MB();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructInstanceTraffic(const CStructInstanceTraffic& rhs) : 
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
    CStructInstanceTraffic(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_Serialnumber();
            Construct_Upload_MB();
            Construct_Download_MB();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructInstanceTraffic(void)
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
            Initialize_Serialnumber();
            Initialize_Upload_MB();
            Initialize_Download_MB();
        }
        catch (...) {}
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
// Item Upload_MB (Type: "double")
protected:
    void Construct_Upload_MB(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Upload_MB()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_Upload_MB()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Upload_MB(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Upload_MB()))
                {
                    Construct_Upload_MB();
                }
                if ((*Value()).hasMember(ItemName_Upload_MB()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_Upload_MB()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Upload_MB(double SetValue)
        {
            try
            {
                (*Value())[ItemName_Upload_MB()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_Upload_MB(void) const
        {
            double GetValue = (*Value())[ItemName_Upload_MB()];
            return (double)GetValue;
        }
        bool Get_Upload_MB(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Upload_MB()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_Upload_MB()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Download_MB (Type: "double")
protected:
    void Construct_Download_MB(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Download_MB()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_Download_MB()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Download_MB(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Download_MB()))
                {
                    Construct_Download_MB();
                }
                if ((*Value()).hasMember(ItemName_Download_MB()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_Download_MB()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Download_MB(double SetValue)
        {
            try
            {
                (*Value())[ItemName_Download_MB()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_Download_MB(void) const
        {
            double GetValue = (*Value())[ItemName_Download_MB()];
            return (double)GetValue;
        }
        bool Get_Download_MB(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Download_MB()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_Download_MB()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructInstanceTraffic


//------------------------------------------------------------------------
// gicom_CommonAPI::CStructDeviceMessage
//------------------------------------------------------------------------
class CStructDeviceMessage : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Serialnumber(void)
        {
            static std::string str("Serialnumber");
            return str;
        }
    public:
        static std::string const& ItemName_Messages(void)
        {
            static std::string str("Messages");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructDeviceMessage");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("12.10");
        return str;
    }
public:
    CStructDeviceMessage(void)
    {
        try
        {
            Construct_Serialnumber();
            Construct_Messages();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructDeviceMessage(const CStructDeviceMessage& rhs) : 
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
    CStructDeviceMessage(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_Serialnumber();
            Construct_Messages();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructDeviceMessage(void)
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
            Initialize_Serialnumber();
            Initialize_Messages();
        }
        catch (...) {}
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
    // Item Messages (Type: "GInsXmlRpcStdAPI::CGIns_Base_Message[0]")
    protected:
        void Construct_Messages(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Messages()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_Message InitValue;
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
                    GInsXmlRpcStdAPI::CGIns_Base_Message InitValue;
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
                GInsXmlRpcStdAPI::CGIns_Base_Message InitValue;
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
        bool Insert_Messages(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Base_Message SetValue)
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
        bool Set_Messages(int ArrayIndex, const GInsXmlRpcStdAPI::CGIns_Base_Message& SetValue)
        {
            try
            {
                (*Value())[ItemName_Messages()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Messages()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Base_Message Get_Messages(int ArrayIndex) const
        {
            return (*Value())[ItemName_Messages()][ArrayIndex];
        }
        bool Get_Messages(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Base_Message& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Messages()))
                {
                    if (((*Value())[ItemName_Messages()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Messages()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructDeviceMessage


//------------------------------------------------------------------------
// gicom_CommonAPI::CStructTraffic
//------------------------------------------------------------------------
class CStructTraffic : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Traffic(void)
        {
            static std::string str("Traffic");
            return str;
        }
    public:
        static std::string const& ItemName_Serialnumber(void)
        {
            static std::string str("Serialnumber");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructTraffic");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("12.14");
        return str;
    }
public:
    CStructTraffic(void)
    {
        try
        {
            Construct_Traffic();
            Construct_Serialnumber();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructTraffic(const CStructTraffic& rhs) : 
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
    CStructTraffic(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_Traffic();
            Construct_Serialnumber();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructTraffic(void)
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
            Initialize_Traffic();
            Initialize_Serialnumber();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item Traffic (Type: "GInsXmlRpcStdAPI::CGIns_Info_NetworkTraffic")
    protected:
        void Construct_Traffic(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Traffic()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_NetworkTraffic InitValue;
                    (*Value())[ItemName_Traffic()] = InitValue;
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
                    (*Value())[ItemName_Traffic()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Traffic(const GInsXmlRpcStdAPI::CGIns_Info_NetworkTraffic& SetValue)
        {
            try
            {
                (*Value())[ItemName_Traffic()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_NetworkTraffic Get_Traffic(void) const
        {
            return (*Value())[ItemName_Traffic()];
        }
        bool Get_Traffic(GInsXmlRpcStdAPI::CGIns_Info_NetworkTraffic& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Traffic()]).valid())
                {
                    GetValue = (*Value())[ItemName_Traffic()];
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
}; // class CStructTraffic


//------------------------------------------------------------------------
// gicom_CommonAPI::CStructDeviceState
//------------------------------------------------------------------------
class CStructDeviceState : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Serialnumber(void)
        {
            static std::string str("Serialnumber");
            return str;
        }
    public:
        static std::string const& ItemName_Connected(void)
        {
            static std::string str("Connected");
            return str;
        }
    public:
        static std::string const& ItemName_LastHeartbeatTime(void)
        {
            static std::string str("LastHeartbeatTime");
            return str;
        }
    public:
        static std::string const& ItemName_MessageCount(void)
        {
            static std::string str("MessageCount");
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
        static std::string str("StructDeviceState");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("12.15");
        return str;
    }
public:
    CStructDeviceState(void)
    {
        try
        {
            Construct_Serialnumber();
            Construct_Connected();
            Construct_LastHeartbeatTime();
            Construct_MessageCount();
            Construct_Traffic();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructDeviceState(const CStructDeviceState& rhs) : 
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
    CStructDeviceState(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_Serialnumber();
            Construct_Connected();
            Construct_LastHeartbeatTime();
            Construct_MessageCount();
            Construct_Traffic();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructDeviceState(void)
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
            Initialize_Serialnumber();
            Initialize_Connected();
            Initialize_LastHeartbeatTime();
            Initialize_MessageCount();
            Initialize_Traffic();
        }
        catch (...) {}
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
// Item Connected (Type: "bool")
protected:
    void Construct_Connected(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Connected()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Connected()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Connected(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Connected()))
                {
                    Construct_Connected();
                }
                if ((*Value()).hasMember(ItemName_Connected()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Connected()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Connected(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Connected()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Connected(void) const
        {
            bool GetValue = (*Value())[ItemName_Connected()];
            return (bool)GetValue;
        }
        bool Get_Connected(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Connected()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Connected()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item LastHeartbeatTime (Type: "std::string")
    protected:
        void Construct_LastHeartbeatTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LastHeartbeatTime()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_LastHeartbeatTime()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_LastHeartbeatTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LastHeartbeatTime()))
                {
                    Construct_LastHeartbeatTime();
                }
                if ((*Value()).hasMember(ItemName_LastHeartbeatTime()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_LastHeartbeatTime()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LastHeartbeatTime(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_LastHeartbeatTime()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_LastHeartbeatTime(void) const
        {
            return (*Value())[ItemName_LastHeartbeatTime()];
        }
        bool Get_LastHeartbeatTime(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LastHeartbeatTime()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_LastHeartbeatTime()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item MessageCount (Type: "int32_t")
protected:
    void Construct_MessageCount(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MessageCount()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_MessageCount()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_MessageCount(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MessageCount()))
                {
                    Construct_MessageCount();
                }
                if ((*Value()).hasMember(ItemName_MessageCount()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_MessageCount()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MessageCount(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_MessageCount()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_MessageCount(void) const
        {
            int32_t GetValue = (*Value())[ItemName_MessageCount()];
            return (int32_t)GetValue;
        }
        bool Get_MessageCount(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MessageCount()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_MessageCount()]));
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
}; // class CStructDeviceState
//========================================================================
}; // namespace gicom_CommonAPI
//========================================================================
#endif // #if !defined(_GICOM_COMMONAPI_TYPES_H)

