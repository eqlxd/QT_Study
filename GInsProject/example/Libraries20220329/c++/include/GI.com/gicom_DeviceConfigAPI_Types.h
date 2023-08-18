//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_GICOM_DEVICECONFIGAPI_TYPES_H)
#define _GICOM_DEVICECONFIGAPI_TYPES_H
//========================================================================
// Implemented methods
#define IMPLEMENT_GICOM_DEVICECONFIGAPI_STARTDEVICESCAN
#define IMPLEMENT_GICOM_DEVICECONFIGAPI_GETDEVICESTATE
#define IMPLEMENT_GICOM_DEVICECONFIGAPI_GETCONNECTIONSTATE
#define IMPLEMENT_GICOM_DEVICECONFIGAPI_IDENTDEVICE
#define IMPLEMENT_GICOM_DEVICECONFIGAPI_REBOOTDEVICE
#define IMPLEMENT_GICOM_DEVICECONFIGAPI_DHCPREQUEST
#define IMPLEMENT_GICOM_DEVICECONFIGAPI_SETNETWORKPARAMETER
#define IMPLEMENT_GICOM_DEVICECONFIGAPI_GETDEVICESCANRESULT
#define IMPLEMENT_GICOM_DEVICECONFIGAPI_CONNECT
#define IMPLEMENT_GICOM_DEVICECONFIGAPI_DISCONNECT
#define IMPLEMENT_GICOM_DEVICECONFIGAPI_HANDLECONFIG
#define IMPLEMENT_GICOM_DEVICECONFIGAPI_RENEWCONTROLLERUUID
#define IMPLEMENT_GICOM_DEVICECONFIGAPI_GETCONFIGSTATE
#define IMPLEMENT_GICOM_DEVICECONFIGAPI_LISTCOMPATIBLEFIRMWARES
#define IMPLEMENT_GICOM_DEVICECONFIGAPI_STARTFIRMWAREUPDATE
#define IMPLEMENT_GICOM_DEVICECONFIGAPI_GETFIRMWAREUPDATESTATE
#define IMPLEMENT_GICOM_DEVICECONFIGAPI_REMOVEMANUALDEVICE
#define IMPLEMENT_GICOM_DEVICECONFIGAPI_GETDEVICESYSTEMTIME
#define IMPLEMENT_GICOM_DEVICECONFIGAPI_SETDEVICESYSTEMTIME


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "gicom_DeviceConfigAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
#include "GInsXmlRpcStdAPI_Types.h"
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace gicom_DeviceConfigAPI {
//========================================================================
//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::CAPIInfo
//------------------------------------------------------------------------
class CAPIInfo
{
public:
    static std::string const& Name(void)
    {
        static std::string str("DeviceConfigAPI");
        return str;
    }
    static std::string const& Revision(void)
    {
        static std::string str("0.2");
        return str;
    }
    static std::string const& GeneratorInfo(void)
    {
        static std::string str("GInsXmlRpcIFGenEng V2.41 (2021-04-26)");
        return str;
    }
}; // class CAPIInfo


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::CType_Info_Network
//------------------------------------------------------------------------
class CType_Info_Network : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_IPAddress_IPv4_Dynamic(void)
        {
            static std::string str("IPAddress_IPv4_Dynamic");
            return str;
        }
    public:
        static std::string const& ItemName_IPAddress_IPv6_Dynamic(void)
        {
            static std::string str("IPAddress_IPv6_Dynamic");
            return str;
        }
    public:
        static std::string const& ItemName_IPAddress_IPv4_Static(void)
        {
            static std::string str("IPAddress_IPv4_Static");
            return str;
        }
    public:
        static std::string const& ItemName_DHCP_Enabled(void)
        {
            static std::string str("DHCP_Enabled");
            return str;
        }
    public:
        static std::string const& ItemName_MACAddress(void)
        {
            static std::string str("MACAddress");
            return str;
        }
    public:
        static std::string const& ItemName_SubnetMask(void)
        {
            static std::string str("SubnetMask");
            return str;
        }
    public:
        static std::string const& ItemName_GatewayAddress(void)
        {
            static std::string str("GatewayAddress");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("Type_Info_Network");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("17.1");
        return str;
    }
public:
    CType_Info_Network(void)
    {
        try
        {
            Construct_IPAddress_IPv4_Dynamic();
            Construct_IPAddress_IPv6_Dynamic();
            Construct_IPAddress_IPv4_Static();
            Construct_DHCP_Enabled();
            Construct_MACAddress();
            Construct_SubnetMask();
            Construct_GatewayAddress();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CType_Info_Network(const CType_Info_Network& rhs) : 
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
    CType_Info_Network(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_IPAddress_IPv4_Dynamic();
            Construct_IPAddress_IPv6_Dynamic();
            Construct_IPAddress_IPv4_Static();
            Construct_DHCP_Enabled();
            Construct_MACAddress();
            Construct_SubnetMask();
            Construct_GatewayAddress();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CType_Info_Network(void)
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
            Initialize_IPAddress_IPv4_Dynamic();
            Initialize_IPAddress_IPv6_Dynamic();
            Initialize_IPAddress_IPv4_Static();
            Initialize_DHCP_Enabled();
            Initialize_MACAddress();
            Initialize_SubnetMask();
            Initialize_GatewayAddress();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item IPAddress_IPv4_Dynamic (Type: "std::string")
    protected:
        void Construct_IPAddress_IPv4_Dynamic(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IPAddress_IPv4_Dynamic()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_IPAddress_IPv4_Dynamic()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_IPAddress_IPv4_Dynamic(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IPAddress_IPv4_Dynamic()))
                {
                    Construct_IPAddress_IPv4_Dynamic();
                }
                if ((*Value()).hasMember(ItemName_IPAddress_IPv4_Dynamic()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_IPAddress_IPv4_Dynamic()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IPAddress_IPv4_Dynamic(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_IPAddress_IPv4_Dynamic()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_IPAddress_IPv4_Dynamic(void) const
        {
            return (*Value())[ItemName_IPAddress_IPv4_Dynamic()];
        }
        bool Get_IPAddress_IPv4_Dynamic(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IPAddress_IPv4_Dynamic()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_IPAddress_IPv4_Dynamic()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item IPAddress_IPv6_Dynamic (Type: "std::string")
    protected:
        void Construct_IPAddress_IPv6_Dynamic(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IPAddress_IPv6_Dynamic()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_IPAddress_IPv6_Dynamic()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_IPAddress_IPv6_Dynamic(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IPAddress_IPv6_Dynamic()))
                {
                    Construct_IPAddress_IPv6_Dynamic();
                }
                if ((*Value()).hasMember(ItemName_IPAddress_IPv6_Dynamic()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_IPAddress_IPv6_Dynamic()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IPAddress_IPv6_Dynamic(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_IPAddress_IPv6_Dynamic()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_IPAddress_IPv6_Dynamic(void) const
        {
            return (*Value())[ItemName_IPAddress_IPv6_Dynamic()];
        }
        bool Get_IPAddress_IPv6_Dynamic(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IPAddress_IPv6_Dynamic()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_IPAddress_IPv6_Dynamic()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item IPAddress_IPv4_Static (Type: "std::string")
    protected:
        void Construct_IPAddress_IPv4_Static(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IPAddress_IPv4_Static()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_IPAddress_IPv4_Static()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_IPAddress_IPv4_Static(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IPAddress_IPv4_Static()))
                {
                    Construct_IPAddress_IPv4_Static();
                }
                if ((*Value()).hasMember(ItemName_IPAddress_IPv4_Static()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_IPAddress_IPv4_Static()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IPAddress_IPv4_Static(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_IPAddress_IPv4_Static()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_IPAddress_IPv4_Static(void) const
        {
            return (*Value())[ItemName_IPAddress_IPv4_Static()];
        }
        bool Get_IPAddress_IPv4_Static(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IPAddress_IPv4_Static()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_IPAddress_IPv4_Static()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item DHCP_Enabled (Type: "bool")
protected:
    void Construct_DHCP_Enabled(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_DHCP_Enabled()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_DHCP_Enabled()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_DHCP_Enabled(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DHCP_Enabled()))
                {
                    Construct_DHCP_Enabled();
                }
                if ((*Value()).hasMember(ItemName_DHCP_Enabled()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_DHCP_Enabled()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DHCP_Enabled(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_DHCP_Enabled()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_DHCP_Enabled(void) const
        {
            bool GetValue = (*Value())[ItemName_DHCP_Enabled()];
            return (bool)GetValue;
        }
        bool Get_DHCP_Enabled(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DHCP_Enabled()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_DHCP_Enabled()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item MACAddress (Type: "std::string")
    protected:
        void Construct_MACAddress(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MACAddress()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MACAddress()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_MACAddress(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MACAddress()))
                {
                    Construct_MACAddress();
                }
                if ((*Value()).hasMember(ItemName_MACAddress()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MACAddress()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MACAddress(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_MACAddress()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_MACAddress(void) const
        {
            return (*Value())[ItemName_MACAddress()];
        }
        bool Get_MACAddress(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MACAddress()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_MACAddress()]);
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
    //------------------------------------------------------------------------
    // Item GatewayAddress (Type: "std::string")
    protected:
        void Construct_GatewayAddress(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GatewayAddress()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_GatewayAddress()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_GatewayAddress(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GatewayAddress()))
                {
                    Construct_GatewayAddress();
                }
                if ((*Value()).hasMember(ItemName_GatewayAddress()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_GatewayAddress()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_GatewayAddress(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_GatewayAddress()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_GatewayAddress(void) const
        {
            return (*Value())[ItemName_GatewayAddress()];
        }
        bool Get_GatewayAddress(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_GatewayAddress()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_GatewayAddress()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CType_Info_Network


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::CType_Info_UART
//------------------------------------------------------------------------
class CType_Info_UART : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_PortIndex(void)
        {
            static std::string str("PortIndex");
            return str;
        }
    public:
        static std::string const& ItemName_Address(void)
        {
            static std::string str("Address");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("Type_Info_UART");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("17.2");
        return str;
    }
public:
    CType_Info_UART(void)
    {
        try
        {
            Construct_PortIndex();
            Construct_Address();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CType_Info_UART(const CType_Info_UART& rhs) : 
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
    CType_Info_UART(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_PortIndex();
            Construct_Address();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CType_Info_UART(void)
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
            Initialize_PortIndex();
            Initialize_Address();
        }
        catch (...) {}
    }
//------------------------------------------------------------------------
// Item PortIndex (Type: "int32_t")
protected:
    void Construct_PortIndex(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_PortIndex()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_PortIndex()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_PortIndex(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PortIndex()))
                {
                    Construct_PortIndex();
                }
                if ((*Value()).hasMember(ItemName_PortIndex()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_PortIndex()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_PortIndex(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_PortIndex()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_PortIndex(void) const
        {
            int32_t GetValue = (*Value())[ItemName_PortIndex()];
            return (int32_t)GetValue;
        }
        bool Get_PortIndex(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_PortIndex()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_PortIndex()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Address (Type: "int32_t")
protected:
    void Construct_Address(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Address()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Address()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Address(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Address()))
                {
                    Construct_Address();
                }
                if ((*Value()).hasMember(ItemName_Address()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Address()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Address(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Address()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Address(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Address()];
            return (int32_t)GetValue;
        }
        bool Get_Address(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Address()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Address()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CType_Info_UART


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::CType_Info_DeviceInfo
//------------------------------------------------------------------------
class CType_Info_DeviceInfo : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Location(void)
        {
            static std::string str("Location");
            return str;
        }
    public:
        static std::string const& ItemName_SerialNumber(void)
        {
            static std::string str("SerialNumber");
            return str;
        }
    public:
        static std::string const& ItemName_Firmware(void)
        {
            static std::string str("Firmware");
            return str;
        }
    public:
        static std::string const& ItemName_TypeName(void)
        {
            static std::string str("TypeName");
            return str;
        }
    public:
        static std::string const& ItemName_TypeInfo(void)
        {
            static std::string str("TypeInfo");
            return str;
        }
    public:
        static std::string const& ItemName_Ethernet(void)
        {
            static std::string str("Ethernet");
            return str;
        }
    public:
        static std::string const& ItemName_RS232_PPP(void)
        {
            static std::string str("RS232_PPP");
            return str;
        }
    public:
        static std::string const& ItemName_RS485_PPP(void)
        {
            static std::string str("RS485_PPP");
            return str;
        }
    public:
        static std::string const& ItemName_UART(void)
        {
            static std::string str("UART");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("Type_Info_DeviceInfo");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("17.3");
        return str;
    }
public:
    CType_Info_DeviceInfo(void)
    {
        try
        {
            Construct_Location();
            Construct_SerialNumber();
            Construct_Firmware();
            Construct_TypeName();
            Construct_TypeInfo();
            Construct_Ethernet();
            Construct_RS232_PPP();
            Construct_RS485_PPP();
            Construct_UART();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CType_Info_DeviceInfo(const CType_Info_DeviceInfo& rhs) : 
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
    CType_Info_DeviceInfo(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_Location();
            Construct_SerialNumber();
            Construct_Firmware();
            Construct_TypeName();
            Construct_TypeInfo();
            Construct_Ethernet();
            Construct_RS232_PPP();
            Construct_RS485_PPP();
            Construct_UART();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CType_Info_DeviceInfo(void)
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
            Initialize_Location();
            Initialize_SerialNumber();
            Initialize_Firmware();
            Initialize_TypeName();
            Initialize_TypeInfo();
            Initialize_Ethernet();
            Initialize_RS232_PPP();
            Initialize_RS485_PPP();
            Initialize_UART();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item Location (Type: "std::string")
    protected:
        void Construct_Location(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Location()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Location()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Location(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Location()))
                {
                    Construct_Location();
                }
                if ((*Value()).hasMember(ItemName_Location()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Location()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Location(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Location()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Location(void) const
        {
            return (*Value())[ItemName_Location()];
        }
        bool Get_Location(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Location()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Location()]);
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
    //------------------------------------------------------------------------
    // Item Firmware (Type: "std::string")
    protected:
        void Construct_Firmware(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Firmware()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Firmware()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Firmware(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Firmware()))
                {
                    Construct_Firmware();
                }
                if ((*Value()).hasMember(ItemName_Firmware()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Firmware()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Firmware(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Firmware()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Firmware(void) const
        {
            return (*Value())[ItemName_Firmware()];
        }
        bool Get_Firmware(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Firmware()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Firmware()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item TypeName (Type: "std::string")
    protected:
        void Construct_TypeName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TypeName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_TypeName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_TypeName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TypeName()))
                {
                    Construct_TypeName();
                }
                if ((*Value()).hasMember(ItemName_TypeName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_TypeName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TypeName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_TypeName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_TypeName(void) const
        {
            return (*Value())[ItemName_TypeName()];
        }
        bool Get_TypeName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TypeName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_TypeName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item TypeInfo (Type: "GInsXmlRpcStdAPI::CGIns_Info_DeviceType")
    protected:
        void Construct_TypeInfo(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TypeInfo()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_DeviceType InitValue;
                    (*Value())[ItemName_TypeInfo()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_TypeInfo(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TypeInfo()))
                {
                    Construct_TypeInfo();
                }
                if ((*Value()).hasMember(ItemName_TypeInfo()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_DeviceType InitValue;
                    (*Value())[ItemName_TypeInfo()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TypeInfo(const GInsXmlRpcStdAPI::CGIns_Info_DeviceType& SetValue)
        {
            try
            {
                (*Value())[ItemName_TypeInfo()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_DeviceType Get_TypeInfo(void) const
        {
            return (*Value())[ItemName_TypeInfo()];
        }
        bool Get_TypeInfo(GInsXmlRpcStdAPI::CGIns_Info_DeviceType& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TypeInfo()]).valid())
                {
                    GetValue = (*Value())[ItemName_TypeInfo()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Ethernet (Type: "CType_Info_Network")
    protected:
        void Construct_Ethernet(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Ethernet()))
                {
                    CType_Info_Network InitValue = GInsXmlRpc::XmlRpcValue();
                    (*Value())[ItemName_Ethernet()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Ethernet(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Ethernet()))
                {
                    Construct_Ethernet();
                }
                if ((*Value()).hasMember(ItemName_Ethernet()))
                {
                    CType_Info_Network InitValue = GInsXmlRpc::XmlRpcValue();
                    (*Value())[ItemName_Ethernet()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Ethernet(const CType_Info_Network& SetValue)
        {
            try
            {
                (*Value())[ItemName_Ethernet()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CType_Info_Network Get_Ethernet(void) const
        {
            return (*Value())[ItemName_Ethernet()];
        }
        bool Get_Ethernet(CType_Info_Network& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Ethernet()]).valid())
                {
                    GetValue = (*Value())[ItemName_Ethernet()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item RS232_PPP (Type: "CType_Info_Network")
    protected:
        void Construct_RS232_PPP(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RS232_PPP()))
                {
                    CType_Info_Network InitValue = GInsXmlRpc::XmlRpcValue();
                    (*Value())[ItemName_RS232_PPP()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_RS232_PPP(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RS232_PPP()))
                {
                    Construct_RS232_PPP();
                }
                if ((*Value()).hasMember(ItemName_RS232_PPP()))
                {
                    CType_Info_Network InitValue = GInsXmlRpc::XmlRpcValue();
                    (*Value())[ItemName_RS232_PPP()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RS232_PPP(const CType_Info_Network& SetValue)
        {
            try
            {
                (*Value())[ItemName_RS232_PPP()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CType_Info_Network Get_RS232_PPP(void) const
        {
            return (*Value())[ItemName_RS232_PPP()];
        }
        bool Get_RS232_PPP(CType_Info_Network& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RS232_PPP()]).valid())
                {
                    GetValue = (*Value())[ItemName_RS232_PPP()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item RS485_PPP (Type: "CType_Info_Network")
    protected:
        void Construct_RS485_PPP(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RS485_PPP()))
                {
                    CType_Info_Network InitValue = GInsXmlRpc::XmlRpcValue();
                    (*Value())[ItemName_RS485_PPP()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_RS485_PPP(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RS485_PPP()))
                {
                    Construct_RS485_PPP();
                }
                if ((*Value()).hasMember(ItemName_RS485_PPP()))
                {
                    CType_Info_Network InitValue = GInsXmlRpc::XmlRpcValue();
                    (*Value())[ItemName_RS485_PPP()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RS485_PPP(const CType_Info_Network& SetValue)
        {
            try
            {
                (*Value())[ItemName_RS485_PPP()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CType_Info_Network Get_RS485_PPP(void) const
        {
            return (*Value())[ItemName_RS485_PPP()];
        }
        bool Get_RS485_PPP(CType_Info_Network& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RS485_PPP()]).valid())
                {
                    GetValue = (*Value())[ItemName_RS485_PPP()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item UART (Type: "CType_Info_UART")
    protected:
        void Construct_UART(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UART()))
                {
                    CType_Info_UART InitValue = GInsXmlRpc::XmlRpcValue();
                    (*Value())[ItemName_UART()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_UART(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UART()))
                {
                    Construct_UART();
                }
                if ((*Value()).hasMember(ItemName_UART()))
                {
                    CType_Info_UART InitValue = GInsXmlRpc::XmlRpcValue();
                    (*Value())[ItemName_UART()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_UART(const CType_Info_UART& SetValue)
        {
            try
            {
                (*Value())[ItemName_UART()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CType_Info_UART Get_UART(void) const
        {
            return (*Value())[ItemName_UART()];
        }
        bool Get_UART(CType_Info_UART& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_UART()]).valid())
                {
                    GetValue = (*Value())[ItemName_UART()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CType_Info_DeviceInfo


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::CType_Info_Interface
//------------------------------------------------------------------------
class CType_Info_Interface : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_ConnectionType(void)
        {
            static std::string str("ConnectionType");
            return str;
        }
    public:
        static std::string const& ItemName_IPAddress_IPv4(void)
        {
            static std::string str("IPAddress_IPv4");
            return str;
        }
    public:
        static std::string const& ItemName_SubnetMask_IPv4(void)
        {
            static std::string str("SubnetMask_IPv4");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("Type_Info_Interface");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("17.9");
        return str;
    }
public:
    CType_Info_Interface(void)
    {
        try
        {
            Construct_ConnectionType();
            Construct_IPAddress_IPv4();
            Construct_SubnetMask_IPv4();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CType_Info_Interface(const CType_Info_Interface& rhs) : 
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
    CType_Info_Interface(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_IPAddress_IPv4();
            Construct_SubnetMask_IPv4();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CType_Info_Interface(void)
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
            Initialize_IPAddress_IPv4();
            Initialize_SubnetMask_IPv4();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item ConnectionType (Type: "GInsXmlRpcStdAPI::CGIns_Base_ElementValue")
    protected:
        void Construct_ConnectionType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConnectionType()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
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
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_ConnectionType()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ConnectionType(const GInsXmlRpcStdAPI::CGIns_Base_ElementValue& SetValue)
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
        GInsXmlRpcStdAPI::CGIns_Base_ElementValue Get_ConnectionType(void) const
        {
            return (*Value())[ItemName_ConnectionType()];
        }
        bool Get_ConnectionType(GInsXmlRpcStdAPI::CGIns_Base_ElementValue& GetValue) const
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
    // Item IPAddress_IPv4 (Type: "std::string")
    protected:
        void Construct_IPAddress_IPv4(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IPAddress_IPv4()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_IPAddress_IPv4()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_IPAddress_IPv4(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IPAddress_IPv4()))
                {
                    Construct_IPAddress_IPv4();
                }
                if ((*Value()).hasMember(ItemName_IPAddress_IPv4()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_IPAddress_IPv4()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IPAddress_IPv4(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_IPAddress_IPv4()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_IPAddress_IPv4(void) const
        {
            return (*Value())[ItemName_IPAddress_IPv4()];
        }
        bool Get_IPAddress_IPv4(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IPAddress_IPv4()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_IPAddress_IPv4()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item SubnetMask_IPv4 (Type: "std::string")
    protected:
        void Construct_SubnetMask_IPv4(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SubnetMask_IPv4()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SubnetMask_IPv4()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SubnetMask_IPv4(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SubnetMask_IPv4()))
                {
                    Construct_SubnetMask_IPv4();
                }
                if ((*Value()).hasMember(ItemName_SubnetMask_IPv4()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SubnetMask_IPv4()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SubnetMask_IPv4(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_SubnetMask_IPv4()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_SubnetMask_IPv4(void) const
        {
            return (*Value())[ItemName_SubnetMask_IPv4()];
        }
        bool Get_SubnetMask_IPv4(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SubnetMask_IPv4()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_SubnetMask_IPv4()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CType_Info_Interface


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::CType_Info_DeviceScanResult
//------------------------------------------------------------------------
class CType_Info_DeviceScanResult : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_ID(void)
        {
            static std::string str("ID");
            return str;
        }
    public:
        static std::string const& ItemName_IDAmbiguous(void)
        {
            static std::string str("IDAmbiguous");
            return str;
        }
    public:
        static std::string const& ItemName_SerialNumberAmbiguous(void)
        {
            static std::string str("SerialNumberAmbiguous");
            return str;
        }
    public:
        static std::string const& ItemName_IPAddress_IPv4_DynamicAmbiguous(void)
        {
            static std::string str("IPAddress_IPv4_DynamicAmbiguous");
            return str;
        }
    public:
        static std::string const& ItemName_Interface(void)
        {
            static std::string str("Interface");
            return str;
        }
    public:
        static std::string const& ItemName_DeviceInfo(void)
        {
            static std::string str("DeviceInfo");
            return str;
        }
    public:
        static std::string const& ItemName_IsOperational(void)
        {
            static std::string str("IsOperational");
            return str;
        }
    public:
        static std::string const& ItemName_IsMaintainable(void)
        {
            static std::string str("IsMaintainable");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("Type_Info_DeviceScanResult");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("17.7");
        return str;
    }
public:
    CType_Info_DeviceScanResult(void)
    {
        try
        {
            Construct_ID();
            Construct_IDAmbiguous();
            Construct_SerialNumberAmbiguous();
            Construct_IPAddress_IPv4_DynamicAmbiguous();
            Construct_Interface();
            Construct_DeviceInfo();
            Construct_IsOperational();
            Construct_IsMaintainable();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CType_Info_DeviceScanResult(const CType_Info_DeviceScanResult& rhs) : 
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
    CType_Info_DeviceScanResult(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_IDAmbiguous();
            Construct_SerialNumberAmbiguous();
            Construct_IPAddress_IPv4_DynamicAmbiguous();
            Construct_Interface();
            Construct_DeviceInfo();
            Construct_IsOperational();
            Construct_IsMaintainable();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CType_Info_DeviceScanResult(void)
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
            Initialize_IDAmbiguous();
            Initialize_SerialNumberAmbiguous();
            Initialize_IPAddress_IPv4_DynamicAmbiguous();
            Initialize_Interface();
            Initialize_DeviceInfo();
            Initialize_IsOperational();
            Initialize_IsMaintainable();
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
// Item IDAmbiguous (Type: "bool")
protected:
    void Construct_IDAmbiguous(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_IDAmbiguous()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_IDAmbiguous()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_IDAmbiguous(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IDAmbiguous()))
                {
                    Construct_IDAmbiguous();
                }
                if ((*Value()).hasMember(ItemName_IDAmbiguous()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_IDAmbiguous()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IDAmbiguous(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_IDAmbiguous()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_IDAmbiguous(void) const
        {
            bool GetValue = (*Value())[ItemName_IDAmbiguous()];
            return (bool)GetValue;
        }
        bool Get_IDAmbiguous(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IDAmbiguous()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_IDAmbiguous()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item SerialNumberAmbiguous (Type: "bool")
protected:
    void Construct_SerialNumberAmbiguous(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_SerialNumberAmbiguous()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_SerialNumberAmbiguous()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_SerialNumberAmbiguous(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SerialNumberAmbiguous()))
                {
                    Construct_SerialNumberAmbiguous();
                }
                if ((*Value()).hasMember(ItemName_SerialNumberAmbiguous()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_SerialNumberAmbiguous()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SerialNumberAmbiguous(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_SerialNumberAmbiguous()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_SerialNumberAmbiguous(void) const
        {
            bool GetValue = (*Value())[ItemName_SerialNumberAmbiguous()];
            return (bool)GetValue;
        }
        bool Get_SerialNumberAmbiguous(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SerialNumberAmbiguous()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_SerialNumberAmbiguous()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item IPAddress_IPv4_DynamicAmbiguous (Type: "bool")
protected:
    void Construct_IPAddress_IPv4_DynamicAmbiguous(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_IPAddress_IPv4_DynamicAmbiguous()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_IPAddress_IPv4_DynamicAmbiguous()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_IPAddress_IPv4_DynamicAmbiguous(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IPAddress_IPv4_DynamicAmbiguous()))
                {
                    Construct_IPAddress_IPv4_DynamicAmbiguous();
                }
                if ((*Value()).hasMember(ItemName_IPAddress_IPv4_DynamicAmbiguous()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_IPAddress_IPv4_DynamicAmbiguous()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IPAddress_IPv4_DynamicAmbiguous(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_IPAddress_IPv4_DynamicAmbiguous()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_IPAddress_IPv4_DynamicAmbiguous(void) const
        {
            bool GetValue = (*Value())[ItemName_IPAddress_IPv4_DynamicAmbiguous()];
            return (bool)GetValue;
        }
        bool Get_IPAddress_IPv4_DynamicAmbiguous(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IPAddress_IPv4_DynamicAmbiguous()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_IPAddress_IPv4_DynamicAmbiguous()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Interface (Type: "CType_Info_Interface")
    protected:
        void Construct_Interface(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Interface()))
                {
                    CType_Info_Interface InitValue;
                    (*Value())[ItemName_Interface()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Interface(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Interface()))
                {
                    Construct_Interface();
                }
                if ((*Value()).hasMember(ItemName_Interface()))
                {
                    CType_Info_Interface InitValue;
                    (*Value())[ItemName_Interface()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Interface(const CType_Info_Interface& SetValue)
        {
            try
            {
                (*Value())[ItemName_Interface()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CType_Info_Interface Get_Interface(void) const
        {
            return (*Value())[ItemName_Interface()];
        }
        bool Get_Interface(CType_Info_Interface& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Interface()]).valid())
                {
                    GetValue = (*Value())[ItemName_Interface()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item DeviceInfo (Type: "CType_Info_DeviceInfo")
    protected:
        void Construct_DeviceInfo(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceInfo()))
                {
                    CType_Info_DeviceInfo InitValue;
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
                    CType_Info_DeviceInfo InitValue;
                    (*Value())[ItemName_DeviceInfo()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DeviceInfo(const CType_Info_DeviceInfo& SetValue)
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
        CType_Info_DeviceInfo Get_DeviceInfo(void) const
        {
            return (*Value())[ItemName_DeviceInfo()];
        }
        bool Get_DeviceInfo(CType_Info_DeviceInfo& GetValue) const
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
// Item IsOperational (Type: "bool")
protected:
    void Construct_IsOperational(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_IsOperational()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_IsOperational()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_IsOperational(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IsOperational()))
                {
                    Construct_IsOperational();
                }
                if ((*Value()).hasMember(ItemName_IsOperational()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_IsOperational()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IsOperational(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_IsOperational()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_IsOperational(void) const
        {
            bool GetValue = (*Value())[ItemName_IsOperational()];
            return (bool)GetValue;
        }
        bool Get_IsOperational(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IsOperational()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_IsOperational()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item IsMaintainable (Type: "bool")
protected:
    void Construct_IsMaintainable(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_IsMaintainable()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_IsMaintainable()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_IsMaintainable(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IsMaintainable()))
                {
                    Construct_IsMaintainable();
                }
                if ((*Value()).hasMember(ItemName_IsMaintainable()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_IsMaintainable()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IsMaintainable(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_IsMaintainable()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_IsMaintainable(void) const
        {
            bool GetValue = (*Value())[ItemName_IsMaintainable()];
            return (bool)GetValue;
        }
        bool Get_IsMaintainable(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IsMaintainable()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_IsMaintainable()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CType_Info_DeviceScanResult


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::CType_Info_DeviceConfigState
//------------------------------------------------------------------------
class CType_Info_DeviceConfigState : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_ConfigDifferent(void)
        {
            static std::string str("ConfigDifferent");
            return str;
        }
    public:
        static std::string const& ItemName_ConfigIncompatible(void)
        {
            static std::string str("ConfigIncompatible");
            return str;
        }
    public:
        static std::string const& ItemName_TransferLocked(void)
        {
            static std::string str("TransferLocked");
            return str;
        }
    public:
        static std::string const& ItemName_IDInconsistency(void)
        {
            static std::string str("IDInconsistency");
            return str;
        }
    public:
        static std::string const& ItemName_MasterSide(void)
        {
            static std::string str("MasterSide");
            return str;
        }
    public:
        static std::string const& ItemName_SlaveSide(void)
        {
            static std::string str("SlaveSide");
            return str;
        }
    public:
        static std::string const& ItemName_SlaveStateValid(void)
        {
            static std::string str("SlaveStateValid");
            return str;
        }
    public:
        static std::string const& ItemName_SlaveStateText(void)
        {
            static std::string str("SlaveStateText");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("Type_Info_DeviceConfigState");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("17.4");
        return str;
    }
public:
    CType_Info_DeviceConfigState(void)
    {
        try
        {
            Construct_ConfigDifferent();
            Construct_ConfigIncompatible();
            Construct_TransferLocked();
            Construct_IDInconsistency();
            Construct_MasterSide();
            Construct_SlaveSide();
            Construct_SlaveStateValid();
            Construct_SlaveStateText();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CType_Info_DeviceConfigState(const CType_Info_DeviceConfigState& rhs) : 
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
    CType_Info_DeviceConfigState(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_ConfigDifferent();
            Construct_ConfigIncompatible();
            Construct_TransferLocked();
            Construct_IDInconsistency();
            Construct_MasterSide();
            Construct_SlaveSide();
            Construct_SlaveStateValid();
            Construct_SlaveStateText();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CType_Info_DeviceConfigState(void)
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
            Initialize_ConfigDifferent();
            Initialize_ConfigIncompatible();
            Initialize_TransferLocked();
            Initialize_IDInconsistency();
            Initialize_MasterSide();
            Initialize_SlaveSide();
            Initialize_SlaveStateValid();
            Initialize_SlaveStateText();
        }
        catch (...) {}
    }
//------------------------------------------------------------------------
// Item ConfigDifferent (Type: "bool")
protected:
    void Construct_ConfigDifferent(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ConfigDifferent()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_ConfigDifferent()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ConfigDifferent(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConfigDifferent()))
                {
                    Construct_ConfigDifferent();
                }
                if ((*Value()).hasMember(ItemName_ConfigDifferent()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_ConfigDifferent()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ConfigDifferent(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_ConfigDifferent()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_ConfigDifferent(void) const
        {
            bool GetValue = (*Value())[ItemName_ConfigDifferent()];
            return (bool)GetValue;
        }
        bool Get_ConfigDifferent(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ConfigDifferent()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_ConfigDifferent()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item ConfigIncompatible (Type: "bool")
protected:
    void Construct_ConfigIncompatible(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ConfigIncompatible()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_ConfigIncompatible()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ConfigIncompatible(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConfigIncompatible()))
                {
                    Construct_ConfigIncompatible();
                }
                if ((*Value()).hasMember(ItemName_ConfigIncompatible()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_ConfigIncompatible()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ConfigIncompatible(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_ConfigIncompatible()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_ConfigIncompatible(void) const
        {
            bool GetValue = (*Value())[ItemName_ConfigIncompatible()];
            return (bool)GetValue;
        }
        bool Get_ConfigIncompatible(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ConfigIncompatible()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_ConfigIncompatible()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item TransferLocked (Type: "bool")
protected:
    void Construct_TransferLocked(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_TransferLocked()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_TransferLocked()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_TransferLocked(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TransferLocked()))
                {
                    Construct_TransferLocked();
                }
                if ((*Value()).hasMember(ItemName_TransferLocked()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_TransferLocked()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TransferLocked(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_TransferLocked()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_TransferLocked(void) const
        {
            bool GetValue = (*Value())[ItemName_TransferLocked()];
            return (bool)GetValue;
        }
        bool Get_TransferLocked(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TransferLocked()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_TransferLocked()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item IDInconsistency (Type: "bool")
protected:
    void Construct_IDInconsistency(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_IDInconsistency()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_IDInconsistency()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_IDInconsistency(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IDInconsistency()))
                {
                    Construct_IDInconsistency();
                }
                if ((*Value()).hasMember(ItemName_IDInconsistency()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_IDInconsistency()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IDInconsistency(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_IDInconsistency()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_IDInconsistency(void) const
        {
            bool GetValue = (*Value())[ItemName_IDInconsistency()];
            return (bool)GetValue;
        }
        bool Get_IDInconsistency(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IDInconsistency()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_IDInconsistency()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item MasterSide (Type: "bool")
protected:
    void Construct_MasterSide(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MasterSide()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_MasterSide()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_MasterSide(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MasterSide()))
                {
                    Construct_MasterSide();
                }
                if ((*Value()).hasMember(ItemName_MasterSide()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_MasterSide()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MasterSide(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_MasterSide()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_MasterSide(void) const
        {
            bool GetValue = (*Value())[ItemName_MasterSide()];
            return (bool)GetValue;
        }
        bool Get_MasterSide(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MasterSide()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_MasterSide()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item SlaveSide (Type: "bool")
protected:
    void Construct_SlaveSide(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_SlaveSide()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_SlaveSide()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_SlaveSide(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SlaveSide()))
                {
                    Construct_SlaveSide();
                }
                if ((*Value()).hasMember(ItemName_SlaveSide()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_SlaveSide()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SlaveSide(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_SlaveSide()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_SlaveSide(void) const
        {
            bool GetValue = (*Value())[ItemName_SlaveSide()];
            return (bool)GetValue;
        }
        bool Get_SlaveSide(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SlaveSide()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_SlaveSide()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item SlaveStateValid (Type: "bool")
protected:
    void Construct_SlaveStateValid(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_SlaveStateValid()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_SlaveStateValid()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_SlaveStateValid(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SlaveStateValid()))
                {
                    Construct_SlaveStateValid();
                }
                if ((*Value()).hasMember(ItemName_SlaveStateValid()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_SlaveStateValid()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SlaveStateValid(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_SlaveStateValid()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_SlaveStateValid(void) const
        {
            bool GetValue = (*Value())[ItemName_SlaveStateValid()];
            return (bool)GetValue;
        }
        bool Get_SlaveStateValid(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SlaveStateValid()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_SlaveStateValid()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item SlaveStateText (Type: "std::string")
    protected:
        void Construct_SlaveStateText(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SlaveStateText()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SlaveStateText()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SlaveStateText(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SlaveStateText()))
                {
                    Construct_SlaveStateText();
                }
                if ((*Value()).hasMember(ItemName_SlaveStateText()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SlaveStateText()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SlaveStateText(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_SlaveStateText()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_SlaveStateText(void) const
        {
            return (*Value())[ItemName_SlaveStateText()];
        }
        bool Get_SlaveStateText(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SlaveStateText()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_SlaveStateText()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CType_Info_DeviceConfigState


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::CType_Info_ConfigModule
//------------------------------------------------------------------------
class CType_Info_ConfigModule : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_ID(void)
        {
            static std::string str("ID");
            return str;
        }
    public:
        static std::string const& ItemName_DeviceInfo(void)
        {
            static std::string str("DeviceInfo");
            return str;
        }
    public:
        static std::string const& ItemName_ConfigState(void)
        {
            static std::string str("ConfigState");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("Type_Info_ConfigModule");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("17.5");
        return str;
    }
public:
    CType_Info_ConfigModule(void)
    {
        try
        {
            Construct_ID();
            Construct_DeviceInfo();
            Construct_ConfigState();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CType_Info_ConfigModule(const CType_Info_ConfigModule& rhs) : 
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
    CType_Info_ConfigModule(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_DeviceInfo();
            Construct_ConfigState();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CType_Info_ConfigModule(void)
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
            Initialize_DeviceInfo();
            Initialize_ConfigState();
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
    // Item DeviceInfo (Type: "CType_Info_DeviceInfo")
    protected:
        void Construct_DeviceInfo(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceInfo()))
                {
                    CType_Info_DeviceInfo InitValue;
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
                    CType_Info_DeviceInfo InitValue;
                    (*Value())[ItemName_DeviceInfo()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DeviceInfo(const CType_Info_DeviceInfo& SetValue)
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
        CType_Info_DeviceInfo Get_DeviceInfo(void) const
        {
            return (*Value())[ItemName_DeviceInfo()];
        }
        bool Get_DeviceInfo(CType_Info_DeviceInfo& GetValue) const
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
    // Item ConfigState (Type: "CType_Info_DeviceConfigState")
    protected:
        void Construct_ConfigState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConfigState()))
                {
                    CType_Info_DeviceConfigState InitValue;
                    (*Value())[ItemName_ConfigState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ConfigState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConfigState()))
                {
                    Construct_ConfigState();
                }
                if ((*Value()).hasMember(ItemName_ConfigState()))
                {
                    CType_Info_DeviceConfigState InitValue;
                    (*Value())[ItemName_ConfigState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ConfigState(const CType_Info_DeviceConfigState& SetValue)
        {
            try
            {
                (*Value())[ItemName_ConfigState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CType_Info_DeviceConfigState Get_ConfigState(void) const
        {
            return (*Value())[ItemName_ConfigState()];
        }
        bool Get_ConfigState(CType_Info_DeviceConfigState& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ConfigState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ConfigState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CType_Info_ConfigModule


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::CType_Info_ConfigController
//------------------------------------------------------------------------
class CType_Info_ConfigController : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_ID(void)
        {
            static std::string str("ID");
            return str;
        }
    public:
        static std::string const& ItemName_DeviceInfo(void)
        {
            static std::string str("DeviceInfo");
            return str;
        }
    public:
        static std::string const& ItemName_ConfigState(void)
        {
            static std::string str("ConfigState");
            return str;
        }
    public:
        static std::string const& ItemName_Modules(void)
        {
            static std::string str("Modules");
            return str;
        }
    public:
        static std::string const& ItemName_Events(void)
        {
            static std::string str("Events");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("Type_Info_ConfigController");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("17.8");
        return str;
    }
public:
    CType_Info_ConfigController(void)
    {
        try
        {
            Construct_ID();
            Construct_DeviceInfo();
            Construct_ConfigState();
            Construct_Modules();
            Construct_Events();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CType_Info_ConfigController(const CType_Info_ConfigController& rhs) : 
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
    CType_Info_ConfigController(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_DeviceInfo();
            Construct_ConfigState();
            Construct_Modules();
            Construct_Events();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CType_Info_ConfigController(void)
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
            Initialize_DeviceInfo();
            Initialize_ConfigState();
            Initialize_Modules();
            Initialize_Events();
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
    // Item DeviceInfo (Type: "CType_Info_DeviceInfo")
    protected:
        void Construct_DeviceInfo(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceInfo()))
                {
                    CType_Info_DeviceInfo InitValue;
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
                    CType_Info_DeviceInfo InitValue;
                    (*Value())[ItemName_DeviceInfo()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DeviceInfo(const CType_Info_DeviceInfo& SetValue)
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
        CType_Info_DeviceInfo Get_DeviceInfo(void) const
        {
            return (*Value())[ItemName_DeviceInfo()];
        }
        bool Get_DeviceInfo(CType_Info_DeviceInfo& GetValue) const
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
    // Item ConfigState (Type: "CType_Info_DeviceConfigState")
    protected:
        void Construct_ConfigState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConfigState()))
                {
                    CType_Info_DeviceConfigState InitValue;
                    (*Value())[ItemName_ConfigState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ConfigState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConfigState()))
                {
                    Construct_ConfigState();
                }
                if ((*Value()).hasMember(ItemName_ConfigState()))
                {
                    CType_Info_DeviceConfigState InitValue;
                    (*Value())[ItemName_ConfigState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ConfigState(const CType_Info_DeviceConfigState& SetValue)
        {
            try
            {
                (*Value())[ItemName_ConfigState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CType_Info_DeviceConfigState Get_ConfigState(void) const
        {
            return (*Value())[ItemName_ConfigState()];
        }
        bool Get_ConfigState(CType_Info_DeviceConfigState& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ConfigState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ConfigState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Modules (Type: "CType_Info_ConfigModule[0]")
    protected:
        void Construct_Modules(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Modules()))
                {
                    CType_Info_ConfigModule InitValue;
                    (*Value())[ItemName_Modules()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Modules(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Modules()))
                {
                    Construct_Modules();
                }
                if ((*Value()).hasMember(ItemName_Modules()))
                {
                    CType_Info_ConfigModule InitValue;
                    (*Value())[ItemName_Modules()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Modules(int NewSize)
        {
            try
            {
                CType_Info_ConfigModule InitValue;
                (*Value())[ItemName_Modules()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Modules(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Modules()))
                {
                    return (*Value())[ItemName_Modules()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Modules(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Modules()))
                {
                    (*Value())[ItemName_Modules()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Modules(int ArrayIndex, CType_Info_ConfigModule SetValue)
        {
            try
            {
                (*Value())[ItemName_Modules()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Modules(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Modules()))
                {
                    (*Value())[ItemName_Modules()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Modules(int ArrayIndex, const CType_Info_ConfigModule& SetValue)
        {
            try
            {
                (*Value())[ItemName_Modules()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Modules()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CType_Info_ConfigModule Get_Modules(int ArrayIndex) const
        {
            return (*Value())[ItemName_Modules()][ArrayIndex];
        }
        bool Get_Modules(int ArrayIndex, CType_Info_ConfigModule& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Modules()))
                {
                    if (((*Value())[ItemName_Modules()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Modules()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Events (Type: "GInsXmlRpcStdAPI::CGIns_Info_State[0]")
    protected:
        void Construct_Events(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Events()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
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
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
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
                GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
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
        bool Insert_Events(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Info_State SetValue)
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
        bool Set_Events(int ArrayIndex, const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
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
        GInsXmlRpcStdAPI::CGIns_Info_State Get_Events(int ArrayIndex) const
        {
            return (*Value())[ItemName_Events()][ArrayIndex];
        }
        bool Get_Events(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
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
}; // class CType_Info_ConfigController


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::CType_Info_ConfigState
//------------------------------------------------------------------------
class CType_Info_ConfigState : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_MeasModeActive(void)
        {
            static std::string str("MeasModeActive");
            return str;
        }
    public:
        static std::string const& ItemName_ConfigModeActive(void)
        {
            static std::string str("ConfigModeActive");
            return str;
        }
    public:
        static std::string const& ItemName_Stable(void)
        {
            static std::string str("Stable");
            return str;
        }
    public:
        static std::string const& ItemName_Controllers(void)
        {
            static std::string str("Controllers");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("Type_Info_ConfigState");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("17.6");
        return str;
    }
public:
    CType_Info_ConfigState(void)
    {
        try
        {
            Construct_MeasModeActive();
            Construct_ConfigModeActive();
            Construct_Stable();
            Construct_Controllers();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CType_Info_ConfigState(const CType_Info_ConfigState& rhs) : 
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
    CType_Info_ConfigState(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_MeasModeActive();
            Construct_ConfigModeActive();
            Construct_Stable();
            Construct_Controllers();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CType_Info_ConfigState(void)
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
            Initialize_MeasModeActive();
            Initialize_ConfigModeActive();
            Initialize_Stable();
            Initialize_Controllers();
        }
        catch (...) {}
    }
//------------------------------------------------------------------------
// Item MeasModeActive (Type: "bool")
protected:
    void Construct_MeasModeActive(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MeasModeActive()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_MeasModeActive()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_MeasModeActive(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MeasModeActive()))
                {
                    Construct_MeasModeActive();
                }
                if ((*Value()).hasMember(ItemName_MeasModeActive()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_MeasModeActive()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MeasModeActive(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_MeasModeActive()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_MeasModeActive(void) const
        {
            bool GetValue = (*Value())[ItemName_MeasModeActive()];
            return (bool)GetValue;
        }
        bool Get_MeasModeActive(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MeasModeActive()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_MeasModeActive()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item ConfigModeActive (Type: "bool")
protected:
    void Construct_ConfigModeActive(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ConfigModeActive()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_ConfigModeActive()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ConfigModeActive(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConfigModeActive()))
                {
                    Construct_ConfigModeActive();
                }
                if ((*Value()).hasMember(ItemName_ConfigModeActive()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_ConfigModeActive()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ConfigModeActive(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_ConfigModeActive()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_ConfigModeActive(void) const
        {
            bool GetValue = (*Value())[ItemName_ConfigModeActive()];
            return (bool)GetValue;
        }
        bool Get_ConfigModeActive(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ConfigModeActive()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_ConfigModeActive()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Stable (Type: "bool")
protected:
    void Construct_Stable(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Stable()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Stable()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Stable(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Stable()))
                {
                    Construct_Stable();
                }
                if ((*Value()).hasMember(ItemName_Stable()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Stable()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Stable(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Stable()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Stable(void) const
        {
            bool GetValue = (*Value())[ItemName_Stable()];
            return (bool)GetValue;
        }
        bool Get_Stable(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Stable()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Stable()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Controllers (Type: "CType_Info_ConfigController[0]")
    protected:
        void Construct_Controllers(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Controllers()))
                {
                    CType_Info_ConfigController InitValue;
                    (*Value())[ItemName_Controllers()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Controllers(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Controllers()))
                {
                    Construct_Controllers();
                }
                if ((*Value()).hasMember(ItemName_Controllers()))
                {
                    CType_Info_ConfigController InitValue;
                    (*Value())[ItemName_Controllers()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Controllers(int NewSize)
        {
            try
            {
                CType_Info_ConfigController InitValue;
                (*Value())[ItemName_Controllers()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Controllers(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Controllers()))
                {
                    return (*Value())[ItemName_Controllers()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Controllers(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Controllers()))
                {
                    (*Value())[ItemName_Controllers()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Controllers(int ArrayIndex, CType_Info_ConfigController SetValue)
        {
            try
            {
                (*Value())[ItemName_Controllers()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Controllers(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Controllers()))
                {
                    (*Value())[ItemName_Controllers()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Controllers(int ArrayIndex, const CType_Info_ConfigController& SetValue)
        {
            try
            {
                (*Value())[ItemName_Controllers()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Controllers()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CType_Info_ConfigController Get_Controllers(int ArrayIndex) const
        {
            return (*Value())[ItemName_Controllers()][ArrayIndex];
        }
        bool Get_Controllers(int ArrayIndex, CType_Info_ConfigController& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Controllers()))
                {
                    if (((*Value())[ItemName_Controllers()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Controllers()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CType_Info_ConfigState


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::CType_Info_FirmwareUpdateProgress
//------------------------------------------------------------------------
class CType_Info_FirmwareUpdateProgress : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_State(void)
        {
            static std::string str("State");
            return str;
        }
    public:
        static std::string const& ItemName_Percentage(void)
        {
            static std::string str("Percentage");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("Type_Info_FirmwareUpdateProgress");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("17.10");
        return str;
    }
public:
    CType_Info_FirmwareUpdateProgress(void)
    {
        try
        {
            Construct_State();
            Construct_Percentage();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CType_Info_FirmwareUpdateProgress(const CType_Info_FirmwareUpdateProgress& rhs) : 
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
    CType_Info_FirmwareUpdateProgress(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_State();
            Construct_Percentage();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CType_Info_FirmwareUpdateProgress(void)
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
            Initialize_State();
            Initialize_Percentage();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item State (Type: "std::string")
    protected:
        void Construct_State(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_State()))
                {
                    std::string InitValue;
                    InitValue = "";
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
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_State()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_State(const std::string& SetValue)
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
        std::string Get_State(void) const
        {
            return (*Value())[ItemName_State()];
        }
        bool Get_State(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_State()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_State()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Percentage (Type: "int32_t")
protected:
    void Construct_Percentage(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Percentage()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Percentage()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Percentage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Percentage()))
                {
                    Construct_Percentage();
                }
                if ((*Value()).hasMember(ItemName_Percentage()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Percentage()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Percentage(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Percentage()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Percentage(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Percentage()];
            return (int32_t)GetValue;
        }
        bool Get_Percentage(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Percentage()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Percentage()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CType_Info_FirmwareUpdateProgress


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::CType_Info_FirmwareVersion
//------------------------------------------------------------------------
class CType_Info_FirmwareVersion : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Major(void)
        {
            static std::string str("Major");
            return str;
        }
    public:
        static std::string const& ItemName_Minor(void)
        {
            static std::string str("Minor");
            return str;
        }
    public:
        static std::string const& ItemName_Build(void)
        {
            static std::string str("Build");
            return str;
        }
    public:
        static std::string const& ItemName_Release(void)
        {
            static std::string str("Release");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("Type_Info_FirmwareVersion");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("17.11");
        return str;
    }
public:
    CType_Info_FirmwareVersion(void)
    {
        try
        {
            Construct_Major();
            Construct_Minor();
            Construct_Build();
            Construct_Release();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CType_Info_FirmwareVersion(const CType_Info_FirmwareVersion& rhs) : 
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
    CType_Info_FirmwareVersion(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_Major();
            Construct_Minor();
            Construct_Build();
            Construct_Release();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CType_Info_FirmwareVersion(void)
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
            Initialize_Major();
            Initialize_Minor();
            Initialize_Build();
            Initialize_Release();
        }
        catch (...) {}
    }
//------------------------------------------------------------------------
// Item Major (Type: "int32_t")
protected:
    void Construct_Major(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Major()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Major()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Major(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Major()))
                {
                    Construct_Major();
                }
                if ((*Value()).hasMember(ItemName_Major()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Major()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Major(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Major()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Major(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Major()];
            return (int32_t)GetValue;
        }
        bool Get_Major(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Major()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Major()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Minor (Type: "int32_t")
protected:
    void Construct_Minor(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Minor()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Minor()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Minor(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Minor()))
                {
                    Construct_Minor();
                }
                if ((*Value()).hasMember(ItemName_Minor()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Minor()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Minor(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Minor()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Minor(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Minor()];
            return (int32_t)GetValue;
        }
        bool Get_Minor(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Minor()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Minor()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Build (Type: "int32_t")
protected:
    void Construct_Build(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Build()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Build()] = (int32_t)InitValue;
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
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Build()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Build(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Build()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Build(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Build()];
            return (int32_t)GetValue;
        }
        bool Get_Build(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Build()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Build()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Release (Type: "bool")
protected:
    void Construct_Release(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Release()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Release()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Release(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Release()))
                {
                    Construct_Release();
                }
                if ((*Value()).hasMember(ItemName_Release()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Release()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Release(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Release()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Release(void) const
        {
            bool GetValue = (*Value())[ItemName_Release()];
            return (bool)GetValue;
        }
        bool Get_Release(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Release()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Release()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CType_Info_FirmwareVersion


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::CType_Info_FirmwareInfo
//------------------------------------------------------------------------
class CType_Info_FirmwareInfo : public GInsXmlRpc::XmlRpcValue
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
        static std::string const& ItemName_Version(void)
        {
            static std::string str("Version");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("Type_Info_FirmwareInfo");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("17.12");
        return str;
    }
public:
    CType_Info_FirmwareInfo(void)
    {
        try
        {
            Construct_Name();
            Construct_ID();
            Construct_Version();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CType_Info_FirmwareInfo(const CType_Info_FirmwareInfo& rhs) : 
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
    CType_Info_FirmwareInfo(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_ID();
            Construct_Version();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CType_Info_FirmwareInfo(void)
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
            Initialize_ID();
            Initialize_Version();
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
    // Item Version (Type: "CType_Info_FirmwareVersion")
    protected:
        void Construct_Version(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Version()))
                {
                    CType_Info_FirmwareVersion InitValue;
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
                    CType_Info_FirmwareVersion InitValue;
                    (*Value())[ItemName_Version()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Version(const CType_Info_FirmwareVersion& SetValue)
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
        CType_Info_FirmwareVersion Get_Version(void) const
        {
            return (*Value())[ItemName_Version()];
        }
        bool Get_Version(CType_Info_FirmwareVersion& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Version()]).valid())
                {
                    GetValue = (*Value())[ItemName_Version()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CType_Info_FirmwareInfo


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::CType_Edit_DateTimeSettings
//------------------------------------------------------------------------
class CType_Edit_DateTimeSettings : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Year(void)
        {
            static std::string str("Year");
            return str;
        }
    public:
        static std::string const& ItemName_Month(void)
        {
            static std::string str("Month");
            return str;
        }
    public:
        static std::string const& ItemName_Day(void)
        {
            static std::string str("Day");
            return str;
        }
    public:
        static std::string const& ItemName_Hour(void)
        {
            static std::string str("Hour");
            return str;
        }
    public:
        static std::string const& ItemName_Minute(void)
        {
            static std::string str("Minute");
            return str;
        }
    public:
        static std::string const& ItemName_Second(void)
        {
            static std::string str("Second");
            return str;
        }
    public:
        static std::string const& ItemName_MSecond(void)
        {
            static std::string str("MSecond");
            return str;
        }
    public:
        static std::string const& ItemName_USecond(void)
        {
            static std::string str("USecond");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("Type_Edit_DateTimeSettings");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("17.13");
        return str;
    }
public:
    CType_Edit_DateTimeSettings(void)
    {
        try
        {
            Construct_Year();
            Construct_Month();
            Construct_Day();
            Construct_Hour();
            Construct_Minute();
            Construct_Second();
            Construct_MSecond();
            Construct_USecond();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CType_Edit_DateTimeSettings(const CType_Edit_DateTimeSettings& rhs) : 
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
    CType_Edit_DateTimeSettings(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_Year();
            Construct_Month();
            Construct_Day();
            Construct_Hour();
            Construct_Minute();
            Construct_Second();
            Construct_MSecond();
            Construct_USecond();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CType_Edit_DateTimeSettings(void)
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
            Initialize_Year();
            Initialize_Month();
            Initialize_Day();
            Initialize_Hour();
            Initialize_Minute();
            Initialize_Second();
            Initialize_MSecond();
            Initialize_USecond();
        }
        catch (...) {}
    }
//------------------------------------------------------------------------
// Item Year (Type: "int32_t")
protected:
    void Construct_Year(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Year()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Year()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Year(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Year()))
                {
                    Construct_Year();
                }
                if ((*Value()).hasMember(ItemName_Year()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Year()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Year(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Year()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Year(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Year()];
            return (int32_t)GetValue;
        }
        bool Get_Year(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Year()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Year()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Month (Type: "int32_t")
protected:
    void Construct_Month(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Month()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Month()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Month(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Month()))
                {
                    Construct_Month();
                }
                if ((*Value()).hasMember(ItemName_Month()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Month()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Month(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Month()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Month(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Month()];
            return (int32_t)GetValue;
        }
        bool Get_Month(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Month()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Month()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Day (Type: "int32_t")
protected:
    void Construct_Day(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Day()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Day()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Day(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Day()))
                {
                    Construct_Day();
                }
                if ((*Value()).hasMember(ItemName_Day()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Day()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Day(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Day()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Day(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Day()];
            return (int32_t)GetValue;
        }
        bool Get_Day(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Day()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Day()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Hour (Type: "int32_t")
protected:
    void Construct_Hour(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Hour()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Hour()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Hour(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Hour()))
                {
                    Construct_Hour();
                }
                if ((*Value()).hasMember(ItemName_Hour()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Hour()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Hour(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Hour()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Hour(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Hour()];
            return (int32_t)GetValue;
        }
        bool Get_Hour(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Hour()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Hour()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Minute (Type: "int32_t")
protected:
    void Construct_Minute(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Minute()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Minute()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Minute(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Minute()))
                {
                    Construct_Minute();
                }
                if ((*Value()).hasMember(ItemName_Minute()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Minute()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Minute(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Minute()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Minute(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Minute()];
            return (int32_t)GetValue;
        }
        bool Get_Minute(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Minute()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Minute()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Second (Type: "int32_t")
protected:
    void Construct_Second(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Second()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Second()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Second(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Second()))
                {
                    Construct_Second();
                }
                if ((*Value()).hasMember(ItemName_Second()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Second()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Second(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Second()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Second(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Second()];
            return (int32_t)GetValue;
        }
        bool Get_Second(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Second()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Second()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item MSecond (Type: "int32_t")
protected:
    void Construct_MSecond(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MSecond()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_MSecond()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_MSecond(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MSecond()))
                {
                    Construct_MSecond();
                }
                if ((*Value()).hasMember(ItemName_MSecond()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_MSecond()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MSecond(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_MSecond()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_MSecond(void) const
        {
            int32_t GetValue = (*Value())[ItemName_MSecond()];
            return (int32_t)GetValue;
        }
        bool Get_MSecond(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MSecond()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_MSecond()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item USecond (Type: "int32_t")
protected:
    void Construct_USecond(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_USecond()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_USecond()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_USecond(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_USecond()))
                {
                    Construct_USecond();
                }
                if ((*Value()).hasMember(ItemName_USecond()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_USecond()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_USecond(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_USecond()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_USecond(void) const
        {
            int32_t GetValue = (*Value())[ItemName_USecond()];
            return (int32_t)GetValue;
        }
        bool Get_USecond(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_USecond()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_USecond()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CType_Edit_DateTimeSettings


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::CType_Info_ConnectionState
//------------------------------------------------------------------------
class CType_Info_ConnectionState : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_ConnectionURL(void)
        {
            static std::string str("ConnectionURL");
            return str;
        }
    public:
        static std::string const& ItemName_HasActiveCloudConnection(void)
        {
            static std::string str("HasActiveCloudConnection");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("Type_Info_ConnectionState");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("17.14");
        return str;
    }
public:
    CType_Info_ConnectionState(void)
    {
        try
        {
            Construct_ConnectionURL();
            Construct_HasActiveCloudConnection();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CType_Info_ConnectionState(const CType_Info_ConnectionState& rhs) : 
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
    CType_Info_ConnectionState(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_ConnectionURL();
            Construct_HasActiveCloudConnection();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CType_Info_ConnectionState(void)
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
            Initialize_ConnectionURL();
            Initialize_HasActiveCloudConnection();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item ConnectionURL (Type: "std::string")
    protected:
        void Construct_ConnectionURL(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConnectionURL()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ConnectionURL()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ConnectionURL(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConnectionURL()))
                {
                    Construct_ConnectionURL();
                }
                if ((*Value()).hasMember(ItemName_ConnectionURL()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ConnectionURL()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ConnectionURL(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ConnectionURL()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ConnectionURL(void) const
        {
            return (*Value())[ItemName_ConnectionURL()];
        }
        bool Get_ConnectionURL(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ConnectionURL()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ConnectionURL()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item HasActiveCloudConnection (Type: "bool")
protected:
    void Construct_HasActiveCloudConnection(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_HasActiveCloudConnection()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_HasActiveCloudConnection()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_HasActiveCloudConnection(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_HasActiveCloudConnection()))
                {
                    Construct_HasActiveCloudConnection();
                }
                if ((*Value()).hasMember(ItemName_HasActiveCloudConnection()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_HasActiveCloudConnection()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_HasActiveCloudConnection(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_HasActiveCloudConnection()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_HasActiveCloudConnection(void) const
        {
            bool GetValue = (*Value())[ItemName_HasActiveCloudConnection()];
            return (bool)GetValue;
        }
        bool Get_HasActiveCloudConnection(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_HasActiveCloudConnection()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_HasActiveCloudConnection()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CType_Info_ConnectionState


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::StartDeviceScan::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_STARTDEVICESCAN)
namespace StartDeviceScan
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Interface(void)
    {
        static std::string str("Interface");
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
        static std::string str("DeviceConfigAPI.StartDeviceScan");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Interface();
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
            Construct_Interface();
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
            Initialize_Interface();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::StartDeviceScan");
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
    // Item Interface (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Interface(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Interface()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Interface()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Interface(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Interface()))
                {
                    Construct_Interface();
                }
                if ((*Value()).hasMember(ItemName_Interface()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Interface()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Interface(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Interface()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Interface(void) const
        {
            return (*Value())[ItemName_Interface()];
        }
        bool Get_Interface(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Interface()]).valid())
                {
                    GetValue = (*Value())[ItemName_Interface()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace StartDeviceScan
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_STARTDEVICESCAN)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::GetDeviceState::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_GETDEVICESTATE)
namespace GetDeviceState
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ConnectionString(void)
    {
        static std::string str("ConnectionString");
        return str;
    }
public:
    static std::string const& ItemName_ConnectionType(void)
    {
        static std::string str("ConnectionType");
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
        static std::string str("DeviceConfigAPI.GetDeviceState");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ConnectionString();
            Construct_ConnectionType();
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
            Construct_ConnectionString();
            Construct_ConnectionType();
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
            Initialize_ConnectionString();
            Initialize_ConnectionType();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::GetDeviceState");
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
}; // class CParams
} // namespace GetDeviceState
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_GETDEVICESTATE)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::GetConnectionState::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_GETCONNECTIONSTATE)
namespace GetConnectionState
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ConnectionString(void)
    {
        static std::string str("ConnectionString");
        return str;
    }
public:
    static std::string const& ItemName_ConnectionType(void)
    {
        static std::string str("ConnectionType");
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
        static std::string str("DeviceConfigAPI.GetConnectionState");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ConnectionString();
            Construct_ConnectionType();
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
            Construct_ConnectionString();
            Construct_ConnectionType();
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
            Initialize_ConnectionString();
            Initialize_ConnectionType();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::GetConnectionState");
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
}; // class CParams
} // namespace GetConnectionState
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_GETCONNECTIONSTATE)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::IdentDevice::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_IDENTDEVICE)
namespace IdentDevice
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_MACAddress(void)
    {
        static std::string str("MACAddress");
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
        static std::string str("DeviceConfigAPI.IdentDevice");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_MACAddress();
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
            Construct_MACAddress();
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
            Initialize_MACAddress();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::IdentDevice");
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
    // Item MACAddress (Type: "std::string")
    protected:
        void Construct_MACAddress(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MACAddress()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MACAddress()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_MACAddress(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MACAddress()))
                {
                    Construct_MACAddress();
                }
                if ((*Value()).hasMember(ItemName_MACAddress()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MACAddress()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MACAddress(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_MACAddress()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_MACAddress(void) const
        {
            return (*Value())[ItemName_MACAddress()];
        }
        bool Get_MACAddress(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MACAddress()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_MACAddress()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace IdentDevice
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_IDENTDEVICE)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::RebootDevice::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_REBOOTDEVICE)
namespace RebootDevice
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_MACAddress(void)
    {
        static std::string str("MACAddress");
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
        static std::string str("DeviceConfigAPI.RebootDevice");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_MACAddress();
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
            Construct_MACAddress();
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
            Initialize_MACAddress();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::RebootDevice");
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
    // Item MACAddress (Type: "std::string")
    protected:
        void Construct_MACAddress(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MACAddress()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MACAddress()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_MACAddress(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MACAddress()))
                {
                    Construct_MACAddress();
                }
                if ((*Value()).hasMember(ItemName_MACAddress()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MACAddress()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MACAddress(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_MACAddress()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_MACAddress(void) const
        {
            return (*Value())[ItemName_MACAddress()];
        }
        bool Get_MACAddress(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MACAddress()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_MACAddress()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace RebootDevice
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_REBOOTDEVICE)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::DHCPRequest::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_DHCPREQUEST)
namespace DHCPRequest
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_MACAddress(void)
    {
        static std::string str("MACAddress");
        return str;
    }
public:
    static std::string const& ItemName_Enable(void)
    {
        static std::string str("Enable");
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
        static std::string str("DeviceConfigAPI.DHCPRequest");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_MACAddress();
            Construct_Enable();
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
            Construct_MACAddress();
            Construct_Enable();
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
            Initialize_MACAddress();
            Initialize_Enable();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::DHCPRequest");
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
    // Item MACAddress (Type: "std::string")
    protected:
        void Construct_MACAddress(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MACAddress()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MACAddress()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_MACAddress(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MACAddress()))
                {
                    Construct_MACAddress();
                }
                if ((*Value()).hasMember(ItemName_MACAddress()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MACAddress()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MACAddress(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_MACAddress()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_MACAddress(void) const
        {
            return (*Value())[ItemName_MACAddress()];
        }
        bool Get_MACAddress(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MACAddress()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_MACAddress()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Enable (Type: "bool")
protected:
    void Construct_Enable(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Enable()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Enable()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Enable(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Enable()))
                {
                    Construct_Enable();
                }
                if ((*Value()).hasMember(ItemName_Enable()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Enable()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Enable(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Enable()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Enable(void) const
        {
            bool GetValue = (*Value())[ItemName_Enable()];
            return (bool)GetValue;
        }
        bool Get_Enable(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Enable()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Enable()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace DHCPRequest
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_DHCPREQUEST)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::SetNetworkParameter::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_SETNETWORKPARAMETER)
namespace SetNetworkParameter
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_MACAddress(void)
    {
        static std::string str("MACAddress");
        return str;
    }
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
    static std::string const& ItemName_DefaultGateway(void)
    {
        static std::string str("DefaultGateway");
        return str;
    }
public:
    static std::string const& ItemName_DNSServer(void)
    {
        static std::string str("DNSServer");
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
        static std::string str("DeviceConfigAPI.SetNetworkParameter");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_MACAddress();
            Construct_IPAddress();
            Construct_SubnetMask();
            Construct_DefaultGateway();
            Construct_DNSServer();
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
            Construct_MACAddress();
            Construct_IPAddress();
            Construct_SubnetMask();
            Construct_DefaultGateway();
            Construct_DNSServer();
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
            Initialize_MACAddress();
            Initialize_IPAddress();
            Initialize_SubnetMask();
            Initialize_DefaultGateway();
            Initialize_DNSServer();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::SetNetworkParameter");
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
    // Item MACAddress (Type: "std::string")
    protected:
        void Construct_MACAddress(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MACAddress()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MACAddress()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_MACAddress(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MACAddress()))
                {
                    Construct_MACAddress();
                }
                if ((*Value()).hasMember(ItemName_MACAddress()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MACAddress()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MACAddress(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_MACAddress()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_MACAddress(void) const
        {
            return (*Value())[ItemName_MACAddress()];
        }
        bool Get_MACAddress(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MACAddress()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_MACAddress()]);
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
    //------------------------------------------------------------------------
    // Item DefaultGateway (Type: "std::string")
    protected:
        void Construct_DefaultGateway(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DefaultGateway()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DefaultGateway()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DefaultGateway(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DefaultGateway()))
                {
                    Construct_DefaultGateway();
                }
                if ((*Value()).hasMember(ItemName_DefaultGateway()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DefaultGateway()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DefaultGateway(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_DefaultGateway()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DefaultGateway(void) const
        {
            return (*Value())[ItemName_DefaultGateway()];
        }
        bool Get_DefaultGateway(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DefaultGateway()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DefaultGateway()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item DNSServer (Type: "std::string")
    protected:
        void Construct_DNSServer(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DNSServer()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DNSServer()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DNSServer(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DNSServer()))
                {
                    Construct_DNSServer();
                }
                if ((*Value()).hasMember(ItemName_DNSServer()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DNSServer()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DNSServer(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_DNSServer()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DNSServer(void) const
        {
            return (*Value())[ItemName_DNSServer()];
        }
        bool Get_DNSServer(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DNSServer()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DNSServer()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace SetNetworkParameter
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_SETNETWORKPARAMETER)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::Connect::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_CONNECT)
namespace Connect
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
    static std::string const& ItemName_IPAddress(void)
    {
        static std::string str("IPAddress");
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
    static std::string const& ItemName_ProjectPath(void)
    {
        static std::string str("ProjectPath");
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
        static std::string str("DeviceConfigAPI.Connect");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ID();
            Construct_IPAddress();
            Construct_Username();
            Construct_Password();
            Construct_ProjectPath();
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
            Construct_ID();
            Construct_IPAddress();
            Construct_Username();
            Construct_Password();
            Construct_ProjectPath();
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
            Initialize_ID();
            Initialize_IPAddress();
            Initialize_Username();
            Initialize_Password();
            Initialize_ProjectPath();
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
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::Connect");
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
} // namespace Connect
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_CONNECT)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::Disconnect::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_DISCONNECT)
namespace Disconnect
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Token(void)
    {
        static std::string str("Token");
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
        static std::string str("DeviceConfigAPI.Disconnect");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Token();
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
            Construct_Token();
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
            Initialize_Token();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::Disconnect");
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
    // Item Token (Type: "std::string")
    protected:
        void Construct_Token(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Token()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Token()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Token(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Token()))
                {
                    Construct_Token();
                }
                if ((*Value()).hasMember(ItemName_Token()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Token()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Token(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Token()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Token(void) const
        {
            return (*Value())[ItemName_Token()];
        }
        bool Get_Token(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Token()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Token()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace Disconnect
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_DISCONNECT)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::HandleConfig::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_HANDLECONFIG)
namespace HandleConfig
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Token(void)
    {
        static std::string str("Token");
        return str;
    }
public:
    static std::string const& ItemName_Action(void)
    {
        static std::string str("Action");
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
        static std::string str("DeviceConfigAPI.HandleConfig");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Token();
            Construct_Action();
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
            Construct_Token();
            Construct_Action();
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
            Initialize_Token();
            Initialize_Action();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::HandleConfig");
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
    // Item Token (Type: "std::string")
    protected:
        void Construct_Token(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Token()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Token()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Token(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Token()))
                {
                    Construct_Token();
                }
                if ((*Value()).hasMember(ItemName_Token()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Token()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Token(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Token()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Token(void) const
        {
            return (*Value())[ItemName_Token()];
        }
        bool Get_Token(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Token()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Token()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
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
}; // class CParams
} // namespace HandleConfig
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_HANDLECONFIG)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::RenewControllerUUID::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_RENEWCONTROLLERUUID)
namespace RenewControllerUUID
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Token(void)
    {
        static std::string str("Token");
        return str;
    }
public:
    static std::string const& ItemName_UUID(void)
    {
        static std::string str("UUID");
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
        static std::string str("DeviceConfigAPI.RenewControllerUUID");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Token();
            Construct_UUID();
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
            Construct_Token();
            Construct_UUID();
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
            Initialize_Token();
            Initialize_UUID();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::RenewControllerUUID");
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
    // Item Token (Type: "std::string")
    protected:
        void Construct_Token(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Token()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Token()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Token(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Token()))
                {
                    Construct_Token();
                }
                if ((*Value()).hasMember(ItemName_Token()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Token()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Token(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Token()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Token(void) const
        {
            return (*Value())[ItemName_Token()];
        }
        bool Get_Token(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Token()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Token()]);
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
}; // class CParams
} // namespace RenewControllerUUID
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_RENEWCONTROLLERUUID)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::GetConfigState::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_GETCONFIGSTATE)
namespace GetConfigState
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Token(void)
    {
        static std::string str("Token");
        return str;
    }
public:
    static std::string const& ItemName_ClearEvents(void)
    {
        static std::string str("ClearEvents");
        return str;
    }
public:
    static std::string const& ItemName_ConfigModeTimeoutMs(void)
    {
        static std::string str("ConfigModeTimeoutMs");
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
        static std::string str("DeviceConfigAPI.GetConfigState");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Token();
            Construct_ClearEvents();
            Construct_ConfigModeTimeoutMs();
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
            Construct_Token();
            Construct_ClearEvents();
            Construct_ConfigModeTimeoutMs();
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
            Initialize_Token();
            Initialize_ClearEvents();
            Initialize_ConfigModeTimeoutMs();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::GetConfigState");
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
    // Item Token (Type: "std::string")
    protected:
        void Construct_Token(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Token()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Token()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Token(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Token()))
                {
                    Construct_Token();
                }
                if ((*Value()).hasMember(ItemName_Token()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Token()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Token(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Token()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Token(void) const
        {
            return (*Value())[ItemName_Token()];
        }
        bool Get_Token(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Token()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Token()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item ClearEvents (Type: "bool")
protected:
    void Construct_ClearEvents(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ClearEvents()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_ClearEvents()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ClearEvents(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ClearEvents()))
                {
                    Construct_ClearEvents();
                }
                if ((*Value()).hasMember(ItemName_ClearEvents()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_ClearEvents()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ClearEvents(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_ClearEvents()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_ClearEvents(void) const
        {
            bool GetValue = (*Value())[ItemName_ClearEvents()];
            return (bool)GetValue;
        }
        bool Get_ClearEvents(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ClearEvents()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_ClearEvents()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item ConfigModeTimeoutMs (Type: "int32_t")
protected:
    void Construct_ConfigModeTimeoutMs(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ConfigModeTimeoutMs()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_ConfigModeTimeoutMs()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ConfigModeTimeoutMs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConfigModeTimeoutMs()))
                {
                    Construct_ConfigModeTimeoutMs();
                }
                if ((*Value()).hasMember(ItemName_ConfigModeTimeoutMs()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_ConfigModeTimeoutMs()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ConfigModeTimeoutMs(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_ConfigModeTimeoutMs()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_ConfigModeTimeoutMs(void) const
        {
            int32_t GetValue = (*Value())[ItemName_ConfigModeTimeoutMs()];
            return (int32_t)GetValue;
        }
        bool Get_ConfigModeTimeoutMs(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ConfigModeTimeoutMs()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_ConfigModeTimeoutMs()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GetConfigState
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_GETCONFIGSTATE)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::ListCompatibleFirmwares::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_LISTCOMPATIBLEFIRMWARES)
namespace ListCompatibleFirmwares
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_SearchDirectory(void)
    {
        static std::string str("SearchDirectory");
        return str;
    }
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
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DeviceConfigAPI.ListCompatibleFirmwares");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_SearchDirectory();
            Construct_ID();
            Construct_IPAddress();
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
            Construct_SearchDirectory();
            Construct_ID();
            Construct_IPAddress();
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
            Initialize_SearchDirectory();
            Initialize_ID();
            Initialize_IPAddress();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::ListCompatibleFirmwares");
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
    // Item SearchDirectory (Type: "std::string")
    protected:
        void Construct_SearchDirectory(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SearchDirectory()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SearchDirectory()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SearchDirectory(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SearchDirectory()))
                {
                    Construct_SearchDirectory();
                }
                if ((*Value()).hasMember(ItemName_SearchDirectory()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SearchDirectory()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SearchDirectory(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_SearchDirectory()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_SearchDirectory(void) const
        {
            return (*Value())[ItemName_SearchDirectory()];
        }
        bool Get_SearchDirectory(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SearchDirectory()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_SearchDirectory()]);
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
}; // class CParams
} // namespace ListCompatibleFirmwares
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_LISTCOMPATIBLEFIRMWARES)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::StartFirmwareUpdate::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_STARTFIRMWAREUPDATE)
namespace StartFirmwareUpdate
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Firmware(void)
    {
        static std::string str("Firmware");
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
        static std::string str("DeviceConfigAPI.StartFirmwareUpdate");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Firmware();
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
            Construct_Firmware();
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
            Initialize_Firmware();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::StartFirmwareUpdate");
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
    // Item Firmware (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Firmware(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Firmware()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Firmware()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Firmware(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Firmware()))
                {
                    Construct_Firmware();
                }
                if ((*Value()).hasMember(ItemName_Firmware()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Firmware()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Firmware(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Firmware()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Firmware(void) const
        {
            return (*Value())[ItemName_Firmware()];
        }
        bool Get_Firmware(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Firmware()]).valid())
                {
                    GetValue = (*Value())[ItemName_Firmware()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace StartFirmwareUpdate
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_STARTFIRMWAREUPDATE)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::GetFirmwareUpdateState::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_GETFIRMWAREUPDATESTATE)
namespace GetFirmwareUpdateState
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
        static std::string str("DeviceConfigAPI.GetFirmwareUpdateState");
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
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::GetFirmwareUpdateState");
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
} // namespace GetFirmwareUpdateState
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_GETFIRMWAREUPDATESTATE)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::RemoveManualDevice::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_REMOVEMANUALDEVICE)
namespace RemoveManualDevice
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
        static std::string str("DeviceConfigAPI.RemoveManualDevice");
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
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::RemoveManualDevice");
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
} // namespace RemoveManualDevice
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_REMOVEMANUALDEVICE)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::GetDeviceSystemTime::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_GETDEVICESYSTEMTIME)
namespace GetDeviceSystemTime
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ConnectionString(void)
    {
        static std::string str("ConnectionString");
        return str;
    }
public:
    static std::string const& ItemName_ConnectionType(void)
    {
        static std::string str("ConnectionType");
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
        static std::string str("DeviceConfigAPI.GetDeviceSystemTime");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ConnectionString();
            Construct_ConnectionType();
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
            Construct_ConnectionString();
            Construct_ConnectionType();
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
            Initialize_ConnectionString();
            Initialize_ConnectionType();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::GetDeviceSystemTime");
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
}; // class CParams
} // namespace GetDeviceSystemTime
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_GETDEVICESYSTEMTIME)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::SetDeviceSystemTime::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_SETDEVICESYSTEMTIME)
namespace SetDeviceSystemTime
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ConnectionString(void)
    {
        static std::string str("ConnectionString");
        return str;
    }
public:
    static std::string const& ItemName_ConnectionType(void)
    {
        static std::string str("ConnectionType");
        return str;
    }
public:
    static std::string const& ItemName_SystemTime(void)
    {
        static std::string str("SystemTime");
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
        static std::string str("DeviceConfigAPI.SetDeviceSystemTime");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ConnectionString();
            Construct_ConnectionType();
            Construct_SystemTime();
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
            Construct_ConnectionString();
            Construct_ConnectionType();
            Construct_SystemTime();
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
            Initialize_ConnectionString();
            Initialize_ConnectionType();
            Initialize_SystemTime();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::SetDeviceSystemTime");
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
    // Item SystemTime (Type: "CType_Edit_DateTimeSettings")
    protected:
        void Construct_SystemTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SystemTime()))
                {
                    CType_Edit_DateTimeSettings InitValue;
                    (*Value())[ItemName_SystemTime()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SystemTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SystemTime()))
                {
                    Construct_SystemTime();
                }
                if ((*Value()).hasMember(ItemName_SystemTime()))
                {
                    CType_Edit_DateTimeSettings InitValue;
                    (*Value())[ItemName_SystemTime()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SystemTime(const CType_Edit_DateTimeSettings& SetValue)
        {
            try
            {
                (*Value())[ItemName_SystemTime()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CType_Edit_DateTimeSettings Get_SystemTime(void) const
        {
            return (*Value())[ItemName_SystemTime()];
        }
        bool Get_SystemTime(CType_Edit_DateTimeSettings& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SystemTime()]).valid())
                {
                    GetValue = (*Value())[ItemName_SystemTime()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace SetDeviceSystemTime
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_SETDEVICESYSTEMTIME)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::StartDeviceScan::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_STARTDEVICESCAN)
namespace StartDeviceScan
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
        static std::string str("DeviceConfigAPI.StartDeviceScan");
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
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::StartDeviceScan");
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
} // namespace StartDeviceScan
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_STARTDEVICESCAN)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::GetDeviceState::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_GETDEVICESTATE)
namespace GetDeviceState
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
    static std::string const& ItemName_DeviceState(void)
    {
        static std::string str("DeviceState");
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
        static std::string str("DeviceConfigAPI.GetDeviceState");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
            Construct_DeviceState();
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
            Construct_DeviceState();
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
            Initialize_DeviceState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::GetDeviceState");
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
    // Item DeviceState (Type: "CType_Info_DeviceScanResult")
    protected:
        void Construct_DeviceState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceState()))
                {
                    CType_Info_DeviceScanResult InitValue;
                    (*Value())[ItemName_DeviceState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DeviceState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceState()))
                {
                    Construct_DeviceState();
                }
                if ((*Value()).hasMember(ItemName_DeviceState()))
                {
                    CType_Info_DeviceScanResult InitValue;
                    (*Value())[ItemName_DeviceState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DeviceState(const CType_Info_DeviceScanResult& SetValue)
        {
            try
            {
                (*Value())[ItemName_DeviceState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CType_Info_DeviceScanResult Get_DeviceState(void) const
        {
            return (*Value())[ItemName_DeviceState()];
        }
        bool Get_DeviceState(CType_Info_DeviceScanResult& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DeviceState()]).valid())
                {
                    GetValue = (*Value())[ItemName_DeviceState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetDeviceState
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_GETDEVICESTATE)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::GetConnectionState::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_GETCONNECTIONSTATE)
namespace GetConnectionState
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
    static std::string const& ItemName_ConnectionState(void)
    {
        static std::string str("ConnectionState");
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
        static std::string str("DeviceConfigAPI.GetConnectionState");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
            Construct_ConnectionState();
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
            Construct_ConnectionState();
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
            Initialize_ConnectionState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::GetConnectionState");
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
    // Item ConnectionState (Type: "CType_Info_ConnectionState")
    protected:
        void Construct_ConnectionState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConnectionState()))
                {
                    CType_Info_ConnectionState InitValue;
                    (*Value())[ItemName_ConnectionState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ConnectionState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConnectionState()))
                {
                    Construct_ConnectionState();
                }
                if ((*Value()).hasMember(ItemName_ConnectionState()))
                {
                    CType_Info_ConnectionState InitValue;
                    (*Value())[ItemName_ConnectionState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ConnectionState(const CType_Info_ConnectionState& SetValue)
        {
            try
            {
                (*Value())[ItemName_ConnectionState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CType_Info_ConnectionState Get_ConnectionState(void) const
        {
            return (*Value())[ItemName_ConnectionState()];
        }
        bool Get_ConnectionState(CType_Info_ConnectionState& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ConnectionState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ConnectionState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetConnectionState
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_GETCONNECTIONSTATE)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::IdentDevice::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_IDENTDEVICE)
namespace IdentDevice
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
        static std::string str("DeviceConfigAPI.IdentDevice");
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
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::IdentDevice");
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
} // namespace IdentDevice
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_IDENTDEVICE)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::RebootDevice::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_REBOOTDEVICE)
namespace RebootDevice
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
        static std::string str("DeviceConfigAPI.RebootDevice");
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
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::RebootDevice");
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
} // namespace RebootDevice
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_REBOOTDEVICE)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::DHCPRequest::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_DHCPREQUEST)
namespace DHCPRequest
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
        static std::string str("DeviceConfigAPI.DHCPRequest");
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
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::DHCPRequest");
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
} // namespace DHCPRequest
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_DHCPREQUEST)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::SetNetworkParameter::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_SETNETWORKPARAMETER)
namespace SetNetworkParameter
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
        static std::string str("DeviceConfigAPI.SetNetworkParameter");
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
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::SetNetworkParameter");
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
} // namespace SetNetworkParameter
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_SETNETWORKPARAMETER)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::GetDeviceScanResult::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_GETDEVICESCANRESULT)
namespace GetDeviceScanResult
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
    static std::string const& ItemName_ScanFinished(void)
    {
        static std::string str("ScanFinished");
        return str;
    }
public:
    static std::string const& ItemName_ScanResult(void)
    {
        static std::string str("ScanResult");
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
        static std::string str("DeviceConfigAPI.GetDeviceScanResult");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
            Construct_ScanFinished();
            Construct_ScanResult();
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
            Construct_ScanFinished();
            Construct_ScanResult();
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
            Initialize_ScanFinished();
            Initialize_ScanResult();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::GetDeviceScanResult");
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
// Item ScanFinished (Type: "bool")
protected:
    void Construct_ScanFinished(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ScanFinished()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_ScanFinished()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ScanFinished(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ScanFinished()))
                {
                    Construct_ScanFinished();
                }
                if ((*Value()).hasMember(ItemName_ScanFinished()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_ScanFinished()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ScanFinished(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_ScanFinished()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_ScanFinished(void) const
        {
            bool GetValue = (*Value())[ItemName_ScanFinished()];
            return (bool)GetValue;
        }
        bool Get_ScanFinished(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ScanFinished()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_ScanFinished()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ScanResult (Type: "CType_Info_DeviceScanResult[0]")
    protected:
        void Construct_ScanResult(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ScanResult()))
                {
                    CType_Info_DeviceScanResult InitValue;
                    (*Value())[ItemName_ScanResult()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_ScanResult(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ScanResult()))
                {
                    Construct_ScanResult();
                }
                if ((*Value()).hasMember(ItemName_ScanResult()))
                {
                    CType_Info_DeviceScanResult InitValue;
                    (*Value())[ItemName_ScanResult()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_ScanResult(int NewSize)
        {
            try
            {
                CType_Info_DeviceScanResult InitValue;
                (*Value())[ItemName_ScanResult()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_ScanResult(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ScanResult()))
                {
                    return (*Value())[ItemName_ScanResult()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_ScanResult(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ScanResult()))
                {
                    (*Value())[ItemName_ScanResult()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_ScanResult(int ArrayIndex, CType_Info_DeviceScanResult SetValue)
        {
            try
            {
                (*Value())[ItemName_ScanResult()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_ScanResult(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ScanResult()))
                {
                    (*Value())[ItemName_ScanResult()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ScanResult(int ArrayIndex, const CType_Info_DeviceScanResult& SetValue)
        {
            try
            {
                (*Value())[ItemName_ScanResult()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_ScanResult()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CType_Info_DeviceScanResult Get_ScanResult(int ArrayIndex) const
        {
            return (*Value())[ItemName_ScanResult()][ArrayIndex];
        }
        bool Get_ScanResult(int ArrayIndex, CType_Info_DeviceScanResult& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ScanResult()))
                {
                    if (((*Value())[ItemName_ScanResult()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_ScanResult()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetDeviceScanResult
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_GETDEVICESCANRESULT)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::Connect::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_CONNECT)
namespace Connect
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
    static std::string const& ItemName_Token(void)
    {
        static std::string str("Token");
        return str;
    }
public:
    static std::string const& ItemName_ProjectPath(void)
    {
        static std::string str("ProjectPath");
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
        static std::string str("DeviceConfigAPI.Connect");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
            Construct_Token();
            Construct_ProjectPath();
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
            Construct_Token();
            Construct_ProjectPath();
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
            Initialize_Token();
            Initialize_ProjectPath();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::Connect");
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
    // Item Token (Type: "std::string")
    protected:
        void Construct_Token(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Token()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Token()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Token(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Token()))
                {
                    Construct_Token();
                }
                if ((*Value()).hasMember(ItemName_Token()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Token()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Token(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Token()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Token(void) const
        {
            return (*Value())[ItemName_Token()];
        }
        bool Get_Token(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Token()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Token()]);
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
}; // class CResults
} // namespace Connect
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_CONNECT)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::Disconnect::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_DISCONNECT)
namespace Disconnect
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
        static std::string str("DeviceConfigAPI.Disconnect");
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
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::Disconnect");
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
} // namespace Disconnect
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_DISCONNECT)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::HandleConfig::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_HANDLECONFIG)
namespace HandleConfig
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
        static std::string str("DeviceConfigAPI.HandleConfig");
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
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::HandleConfig");
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
} // namespace HandleConfig
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_HANDLECONFIG)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::RenewControllerUUID::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_RENEWCONTROLLERUUID)
namespace RenewControllerUUID
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
    static std::string const& ItemName_UUID(void)
    {
        static std::string str("UUID");
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
        static std::string str("DeviceConfigAPI.RenewControllerUUID");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
            Construct_UUID();
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
            Construct_UUID();
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
            Initialize_UUID();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::RenewControllerUUID");
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
}; // class CResults
} // namespace RenewControllerUUID
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_RENEWCONTROLLERUUID)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::GetConfigState::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_GETCONFIGSTATE)
namespace GetConfigState
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ConfigState(void)
    {
        static std::string str("ConfigState");
        return str;
    }
public:
    static std::string const& ItemName_Events(void)
    {
        static std::string str("Events");
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
        static std::string str("DeviceConfigAPI.GetConfigState");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ConfigState();
            Construct_Events();
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
            Construct_ConfigState();
            Construct_Events();
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
            Initialize_ConfigState();
            Initialize_Events();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::GetConfigState");
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
    // Item ConfigState (Type: "CType_Info_ConfigState")
    protected:
        void Construct_ConfigState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConfigState()))
                {
                    CType_Info_ConfigState InitValue;
                    (*Value())[ItemName_ConfigState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ConfigState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConfigState()))
                {
                    Construct_ConfigState();
                }
                if ((*Value()).hasMember(ItemName_ConfigState()))
                {
                    CType_Info_ConfigState InitValue;
                    (*Value())[ItemName_ConfigState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ConfigState(const CType_Info_ConfigState& SetValue)
        {
            try
            {
                (*Value())[ItemName_ConfigState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CType_Info_ConfigState Get_ConfigState(void) const
        {
            return (*Value())[ItemName_ConfigState()];
        }
        bool Get_ConfigState(CType_Info_ConfigState& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ConfigState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ConfigState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Events (Type: "GInsXmlRpcStdAPI::CGIns_Info_State[0]")
    protected:
        void Construct_Events(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Events()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
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
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
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
                GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
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
        bool Insert_Events(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Info_State SetValue)
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
        bool Set_Events(int ArrayIndex, const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
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
        GInsXmlRpcStdAPI::CGIns_Info_State Get_Events(int ArrayIndex) const
        {
            return (*Value())[ItemName_Events()][ArrayIndex];
        }
        bool Get_Events(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
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
} // namespace GetConfigState
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_GETCONFIGSTATE)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::ListCompatibleFirmwares::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_LISTCOMPATIBLEFIRMWARES)
namespace ListCompatibleFirmwares
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
    static std::string const& ItemName_Firmwares(void)
    {
        static std::string str("Firmwares");
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
        static std::string str("DeviceConfigAPI.ListCompatibleFirmwares");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
            Construct_Firmwares();
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
            Construct_Firmwares();
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
            Initialize_Firmwares();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::ListCompatibleFirmwares");
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
    // Item Firmwares (Type: "CType_Info_FirmwareInfo[0]")
    protected:
        void Construct_Firmwares(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Firmwares()))
                {
                    CType_Info_FirmwareInfo InitValue;
                    (*Value())[ItemName_Firmwares()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Firmwares(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Firmwares()))
                {
                    Construct_Firmwares();
                }
                if ((*Value()).hasMember(ItemName_Firmwares()))
                {
                    CType_Info_FirmwareInfo InitValue;
                    (*Value())[ItemName_Firmwares()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Firmwares(int NewSize)
        {
            try
            {
                CType_Info_FirmwareInfo InitValue;
                (*Value())[ItemName_Firmwares()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Firmwares(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Firmwares()))
                {
                    return (*Value())[ItemName_Firmwares()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Firmwares(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Firmwares()))
                {
                    (*Value())[ItemName_Firmwares()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Firmwares(int ArrayIndex, CType_Info_FirmwareInfo SetValue)
        {
            try
            {
                (*Value())[ItemName_Firmwares()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Firmwares(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Firmwares()))
                {
                    (*Value())[ItemName_Firmwares()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Firmwares(int ArrayIndex, const CType_Info_FirmwareInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_Firmwares()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Firmwares()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CType_Info_FirmwareInfo Get_Firmwares(int ArrayIndex) const
        {
            return (*Value())[ItemName_Firmwares()][ArrayIndex];
        }
        bool Get_Firmwares(int ArrayIndex, CType_Info_FirmwareInfo& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Firmwares()))
                {
                    if (((*Value())[ItemName_Firmwares()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Firmwares()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace ListCompatibleFirmwares
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_LISTCOMPATIBLEFIRMWARES)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::StartFirmwareUpdate::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_STARTFIRMWAREUPDATE)
namespace StartFirmwareUpdate
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
        static std::string str("DeviceConfigAPI.StartFirmwareUpdate");
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
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::StartFirmwareUpdate");
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
} // namespace StartFirmwareUpdate
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_STARTFIRMWAREUPDATE)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::GetFirmwareUpdateState::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_GETFIRMWAREUPDATESTATE)
namespace GetFirmwareUpdateState
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
    static std::string const& ItemName_States(void)
    {
        static std::string str("States");
        return str;
    }
public:
    static std::string const& ItemName_UpdateFinished(void)
    {
        static std::string str("UpdateFinished");
        return str;
    }
public:
    static std::string const& ItemName_UpdateResult(void)
    {
        static std::string str("UpdateResult");
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
        static std::string str("DeviceConfigAPI.GetFirmwareUpdateState");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
            Construct_States();
            Construct_UpdateFinished();
            Construct_UpdateResult();
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
            Construct_States();
            Construct_UpdateFinished();
            Construct_UpdateResult();
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
            Initialize_States();
            Initialize_UpdateFinished();
            Initialize_UpdateResult();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::GetFirmwareUpdateState");
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
    // Item States (Type: "CType_Info_FirmwareUpdateProgress[0]")
    protected:
        void Construct_States(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_States()))
                {
                    CType_Info_FirmwareUpdateProgress InitValue;
                    (*Value())[ItemName_States()].setArraySizeAndInit(0,InitValue);
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
                    CType_Info_FirmwareUpdateProgress InitValue;
                    (*Value())[ItemName_States()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_States(int NewSize)
        {
            try
            {
                CType_Info_FirmwareUpdateProgress InitValue;
                (*Value())[ItemName_States()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_States(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_States()))
                {
                    return (*Value())[ItemName_States()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_States(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_States()))
                {
                    (*Value())[ItemName_States()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_States(int ArrayIndex, CType_Info_FirmwareUpdateProgress SetValue)
        {
            try
            {
                (*Value())[ItemName_States()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_States(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_States()))
                {
                    (*Value())[ItemName_States()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_States(int ArrayIndex, const CType_Info_FirmwareUpdateProgress& SetValue)
        {
            try
            {
                (*Value())[ItemName_States()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_States()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CType_Info_FirmwareUpdateProgress Get_States(int ArrayIndex) const
        {
            return (*Value())[ItemName_States()][ArrayIndex];
        }
        bool Get_States(int ArrayIndex, CType_Info_FirmwareUpdateProgress& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_States()))
                {
                    if (((*Value())[ItemName_States()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_States()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item UpdateFinished (Type: "bool")
protected:
    void Construct_UpdateFinished(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_UpdateFinished()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_UpdateFinished()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_UpdateFinished(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UpdateFinished()))
                {
                    Construct_UpdateFinished();
                }
                if ((*Value()).hasMember(ItemName_UpdateFinished()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_UpdateFinished()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_UpdateFinished(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_UpdateFinished()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_UpdateFinished(void) const
        {
            bool GetValue = (*Value())[ItemName_UpdateFinished()];
            return (bool)GetValue;
        }
        bool Get_UpdateFinished(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_UpdateFinished()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_UpdateFinished()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item UpdateResult (Type: "bool")
protected:
    void Construct_UpdateResult(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_UpdateResult()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_UpdateResult()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_UpdateResult(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UpdateResult()))
                {
                    Construct_UpdateResult();
                }
                if ((*Value()).hasMember(ItemName_UpdateResult()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_UpdateResult()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_UpdateResult(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_UpdateResult()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_UpdateResult(void) const
        {
            bool GetValue = (*Value())[ItemName_UpdateResult()];
            return (bool)GetValue;
        }
        bool Get_UpdateResult(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_UpdateResult()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_UpdateResult()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetFirmwareUpdateState
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_GETFIRMWAREUPDATESTATE)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::RemoveManualDevice::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_REMOVEMANUALDEVICE)
namespace RemoveManualDevice
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
        static std::string str("DeviceConfigAPI.RemoveManualDevice");
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
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::RemoveManualDevice");
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
} // namespace RemoveManualDevice
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_REMOVEMANUALDEVICE)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::GetDeviceSystemTime::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_GETDEVICESYSTEMTIME)
namespace GetDeviceSystemTime
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
    static std::string const& ItemName_SystemTime(void)
    {
        static std::string str("SystemTime");
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
        static std::string str("DeviceConfigAPI.GetDeviceSystemTime");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
            Construct_SystemTime();
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
            Construct_SystemTime();
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
            Initialize_SystemTime();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::GetDeviceSystemTime");
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
    // Item SystemTime (Type: "CType_Edit_DateTimeSettings")
    protected:
        void Construct_SystemTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SystemTime()))
                {
                    CType_Edit_DateTimeSettings InitValue;
                    (*Value())[ItemName_SystemTime()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SystemTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SystemTime()))
                {
                    Construct_SystemTime();
                }
                if ((*Value()).hasMember(ItemName_SystemTime()))
                {
                    CType_Edit_DateTimeSettings InitValue;
                    (*Value())[ItemName_SystemTime()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SystemTime(const CType_Edit_DateTimeSettings& SetValue)
        {
            try
            {
                (*Value())[ItemName_SystemTime()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CType_Edit_DateTimeSettings Get_SystemTime(void) const
        {
            return (*Value())[ItemName_SystemTime()];
        }
        bool Get_SystemTime(CType_Edit_DateTimeSettings& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SystemTime()]).valid())
                {
                    GetValue = (*Value())[ItemName_SystemTime()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetDeviceSystemTime
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_GETDEVICESYSTEMTIME)


//------------------------------------------------------------------------
// gicom_DeviceConfigAPI::SetDeviceSystemTime::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_SETDEVICESYSTEMTIME)
namespace SetDeviceSystemTime
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
        static std::string str("DeviceConfigAPI.SetDeviceSystemTime");
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
            (*Value())[ItemName_MethodID()] = std::string("DeviceConfigAPI::SetDeviceSystemTime");
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
} // namespace SetDeviceSystemTime
#endif //#if defined(IMPLEMENT_GICOM_DEVICECONFIGAPI_SETDEVICESYSTEMTIME)
//========================================================================
}; // namespace gicom_DeviceConfigAPI
//========================================================================
#endif // #if !defined(_GICOM_DEVICECONFIGAPI_TYPES_H)

