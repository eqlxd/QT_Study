//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_NETWORKAPI_TYPES_H)
#define _NETWORKAPI_TYPES_H
//========================================================================
// Implemented methods
#define IMPLEMENT_NETWORKAPI_SETNETWORK
#define IMPLEMENT_NETWORKAPI_GETNICSTATES
#define IMPLEMENT_NETWORKAPI_GETNETWORK
#define IMPLEMENT_NETWORKAPI_GETDHCPSTATE
#define IMPLEMENT_NETWORKAPI_REQUESTDHCP


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "NetworkAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace NetworkAPI {
//========================================================================
//------------------------------------------------------------------------
// NetworkAPI::CAPIInfo
//------------------------------------------------------------------------
class CAPIInfo
{
public:
    static std::string const& Name(void)
    {
        static std::string str("NetworkAPI");
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
// NetworkAPI::CType_NetworkSettings
//------------------------------------------------------------------------
class CType_NetworkSettings : public GInsXmlRpc::XmlRpcValue
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
        static std::string const& ItemName_GatewayAddress(void)
        {
            static std::string str("GatewayAddress");
            return str;
        }
    public:
        static std::string const& ItemName_DNSAddresses(void)
        {
            static std::string str("DNSAddresses");
            return str;
        }
    public:
        static std::string const& ItemName_DHCPActive(void)
        {
            static std::string str("DHCPActive");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("Type_NetworkSettings");
        return str;
    }
public:
    CType_NetworkSettings(void)
    {
        try
        {
            Construct_IPAddress();
            Construct_SubnetMask();
            Construct_GatewayAddress();
            Construct_DNSAddresses();
            Construct_DHCPActive();
            }
        catch (...) {}
    }
    CType_NetworkSettings(const CType_NetworkSettings& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        }
    CType_NetworkSettings(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_IPAddress();
            Construct_SubnetMask();
            Construct_GatewayAddress();
            Construct_DNSAddresses();
            Construct_DHCPActive();
            }
        catch (...) {}
    }
public:
    ~CType_NetworkSettings(void)
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
            Initialize_GatewayAddress();
            Initialize_DNSAddresses();
            Initialize_DHCPActive();
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
    //------------------------------------------------------------------------
    // Item DNSAddresses (Type: "std::string[0]")
    protected:
        void Construct_DNSAddresses(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DNSAddresses()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DNSAddresses()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_DNSAddresses(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DNSAddresses()))
                {
                    Construct_DNSAddresses();
                }
                if ((*Value()).hasMember(ItemName_DNSAddresses()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DNSAddresses()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_DNSAddresses(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_DNSAddresses()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_DNSAddresses(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DNSAddresses()))
                {
                    return (*Value())[ItemName_DNSAddresses()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_DNSAddresses(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DNSAddresses()))
                {
                    (*Value())[ItemName_DNSAddresses()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_DNSAddresses(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_DNSAddresses()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_DNSAddresses(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DNSAddresses()))
                {
                    (*Value())[ItemName_DNSAddresses()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DNSAddresses(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_DNSAddresses())
                {
                    SetSize_DNSAddresses(ArrayIndex + 1);
                }
                (*Value())[ItemName_DNSAddresses()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DNSAddresses(int ArrayIndex) const
        {
            return (*Value())[ItemName_DNSAddresses()][ArrayIndex];
        }
        bool Get_DNSAddresses(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DNSAddresses()))
                {
                    if (((*Value())[ItemName_DNSAddresses()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_DNSAddresses()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item DHCPActive (Type: "bool")
protected:
    void Construct_DHCPActive(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_DHCPActive()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_DHCPActive()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_DHCPActive(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DHCPActive()))
                {
                    Construct_DHCPActive();
                }
                if ((*Value()).hasMember(ItemName_DHCPActive()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_DHCPActive()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DHCPActive(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_DHCPActive()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_DHCPActive(void) const
        {
            bool GetValue = (*Value())[ItemName_DHCPActive()];
            return (bool)GetValue;
        }
        bool Get_DHCPActive(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DHCPActive()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_DHCPActive()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CType_NetworkSettings


//------------------------------------------------------------------------
// NetworkAPI::CType_NICStates
//------------------------------------------------------------------------
class CType_NICStates : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Name(void)
        {
            static std::string str("Name");
            return str;
        }
    public:
        static std::string const& ItemName_LinkActive(void)
        {
            static std::string str("LinkActive");
            return str;
        }
    public:
        static std::string const& ItemName_SpeedMBit(void)
        {
            static std::string str("SpeedMBit");
            return str;
        }
    public:
        static std::string const& ItemName_TXBytes(void)
        {
            static std::string str("TXBytes");
            return str;
        }
    public:
        static std::string const& ItemName_RXBytes(void)
        {
            static std::string str("RXBytes");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("Type_NICStates");
        return str;
    }
public:
    CType_NICStates(void)
    {
        try
        {
            Construct_Name();
            Construct_LinkActive();
            Construct_SpeedMBit();
            Construct_TXBytes();
            Construct_RXBytes();
            }
        catch (...) {}
    }
    CType_NICStates(const CType_NICStates& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        }
    CType_NICStates(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_LinkActive();
            Construct_SpeedMBit();
            Construct_TXBytes();
            Construct_RXBytes();
            }
        catch (...) {}
    }
public:
    ~CType_NICStates(void)
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
            Initialize_LinkActive();
            Initialize_SpeedMBit();
            Initialize_TXBytes();
            Initialize_RXBytes();
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
// Item LinkActive (Type: "bool")
protected:
    void Construct_LinkActive(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_LinkActive()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_LinkActive()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_LinkActive(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LinkActive()))
                {
                    Construct_LinkActive();
                }
                if ((*Value()).hasMember(ItemName_LinkActive()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_LinkActive()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LinkActive(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_LinkActive()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_LinkActive(void) const
        {
            bool GetValue = (*Value())[ItemName_LinkActive()];
            return (bool)GetValue;
        }
        bool Get_LinkActive(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LinkActive()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_LinkActive()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item SpeedMBit (Type: "double")
protected:
    void Construct_SpeedMBit(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_SpeedMBit()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_SpeedMBit()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_SpeedMBit(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SpeedMBit()))
                {
                    Construct_SpeedMBit();
                }
                if ((*Value()).hasMember(ItemName_SpeedMBit()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_SpeedMBit()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SpeedMBit(double SetValue)
        {
            try
            {
                (*Value())[ItemName_SpeedMBit()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_SpeedMBit(void) const
        {
            double GetValue = (*Value())[ItemName_SpeedMBit()];
            return (double)GetValue;
        }
        bool Get_SpeedMBit(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SpeedMBit()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_SpeedMBit()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item TXBytes (Type: "double")
protected:
    void Construct_TXBytes(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_TXBytes()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_TXBytes()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_TXBytes(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TXBytes()))
                {
                    Construct_TXBytes();
                }
                if ((*Value()).hasMember(ItemName_TXBytes()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_TXBytes()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TXBytes(double SetValue)
        {
            try
            {
                (*Value())[ItemName_TXBytes()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_TXBytes(void) const
        {
            double GetValue = (*Value())[ItemName_TXBytes()];
            return (double)GetValue;
        }
        bool Get_TXBytes(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TXBytes()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_TXBytes()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item RXBytes (Type: "double")
protected:
    void Construct_RXBytes(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_RXBytes()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_RXBytes()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_RXBytes(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RXBytes()))
                {
                    Construct_RXBytes();
                }
                if ((*Value()).hasMember(ItemName_RXBytes()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_RXBytes()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RXBytes(double SetValue)
        {
            try
            {
                (*Value())[ItemName_RXBytes()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_RXBytes(void) const
        {
            double GetValue = (*Value())[ItemName_RXBytes()];
            return (double)GetValue;
        }
        bool Get_RXBytes(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RXBytes()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_RXBytes()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CType_NICStates


//------------------------------------------------------------------------
// NetworkAPI::SetNetwork::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_NETWORKAPI_SETNETWORK)
namespace SetNetwork
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_DeviceName(void)
    {
        static std::string str("DeviceName");
        return str;
    }
public:
    static std::string const& ItemName_Activate(void)
    {
        static std::string str("Activate");
        return str;
    }
public:
    static std::string const& ItemName_Save(void)
    {
        static std::string str("Save");
        return str;
    }
public:
    static std::string const& ItemName_Settings(void)
    {
        static std::string str("Settings");
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
        static std::string str("NetworkAPI.SetNetwork");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_DeviceName();
            Construct_Activate();
            Construct_Save();
            Construct_Settings();
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
            Construct_DeviceName();
            Construct_Activate();
            Construct_Save();
            Construct_Settings();
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
            Initialize_DeviceName();
            Initialize_Activate();
            Initialize_Save();
            Initialize_Settings();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("NetworkAPI::SetNetwork");
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
    // Item DeviceName (Type: "std::string")
    protected:
        void Construct_DeviceName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DeviceName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DeviceName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceName()))
                {
                    Construct_DeviceName();
                }
                if ((*Value()).hasMember(ItemName_DeviceName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DeviceName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DeviceName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_DeviceName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DeviceName(void) const
        {
            return (*Value())[ItemName_DeviceName()];
        }
        bool Get_DeviceName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DeviceName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DeviceName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Activate (Type: "bool")
protected:
    void Construct_Activate(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Activate()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Activate()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Activate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Activate()))
                {
                    Construct_Activate();
                }
                if ((*Value()).hasMember(ItemName_Activate()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Activate()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Activate(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Activate()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Activate(void) const
        {
            bool GetValue = (*Value())[ItemName_Activate()];
            return (bool)GetValue;
        }
        bool Get_Activate(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Activate()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Activate()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Save (Type: "bool")
protected:
    void Construct_Save(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Save()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Save()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Save(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Save()))
                {
                    Construct_Save();
                }
                if ((*Value()).hasMember(ItemName_Save()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Save()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Save(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Save()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Save(void) const
        {
            bool GetValue = (*Value())[ItemName_Save()];
            return (bool)GetValue;
        }
        bool Get_Save(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Save()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Save()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Settings (Type: "CType_NetworkSettings")
    protected:
        void Construct_Settings(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Settings()))
                {
                    CType_NetworkSettings InitValue;
                    (*Value())[ItemName_Settings()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Settings(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Settings()))
                {
                    Construct_Settings();
                }
                if ((*Value()).hasMember(ItemName_Settings()))
                {
                    CType_NetworkSettings InitValue;
                    (*Value())[ItemName_Settings()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Settings(const CType_NetworkSettings& SetValue)
        {
            try
            {
                (*Value())[ItemName_Settings()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CType_NetworkSettings Get_Settings(void) const
        {
            return (*Value())[ItemName_Settings()];
        }
        bool Get_Settings(CType_NetworkSettings& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Settings()]).valid())
                {
                    GetValue = (*Value())[ItemName_Settings()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace SetNetwork
#endif //#if defined(IMPLEMENT_NETWORKAPI_SETNETWORK)


//------------------------------------------------------------------------
// NetworkAPI::GetNetwork::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_NETWORKAPI_GETNETWORK)
namespace GetNetwork
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_DeviceName(void)
    {
        static std::string str("DeviceName");
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
        static std::string str("NetworkAPI.GetNetwork");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_DeviceName();
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
            Construct_DeviceName();
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
            Initialize_DeviceName();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("NetworkAPI::GetNetwork");
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
    // Item DeviceName (Type: "std::string")
    protected:
        void Construct_DeviceName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DeviceName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DeviceName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceName()))
                {
                    Construct_DeviceName();
                }
                if ((*Value()).hasMember(ItemName_DeviceName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DeviceName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DeviceName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_DeviceName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DeviceName(void) const
        {
            return (*Value())[ItemName_DeviceName()];
        }
        bool Get_DeviceName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DeviceName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DeviceName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GetNetwork
#endif //#if defined(IMPLEMENT_NETWORKAPI_GETNETWORK)


//------------------------------------------------------------------------
// NetworkAPI::GetDHCPState::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_NETWORKAPI_GETDHCPSTATE)
namespace GetDHCPState
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_DeviceName(void)
    {
        static std::string str("DeviceName");
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
        static std::string str("NetworkAPI.GetDHCPState");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_DeviceName();
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
            Construct_DeviceName();
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
            Initialize_DeviceName();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("NetworkAPI::GetDHCPState");
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
    // Item DeviceName (Type: "std::string")
    protected:
        void Construct_DeviceName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DeviceName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DeviceName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceName()))
                {
                    Construct_DeviceName();
                }
                if ((*Value()).hasMember(ItemName_DeviceName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DeviceName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DeviceName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_DeviceName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DeviceName(void) const
        {
            return (*Value())[ItemName_DeviceName()];
        }
        bool Get_DeviceName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DeviceName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DeviceName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GetDHCPState
#endif //#if defined(IMPLEMENT_NETWORKAPI_GETDHCPSTATE)


//------------------------------------------------------------------------
// NetworkAPI::RequestDHCP::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_NETWORKAPI_REQUESTDHCP)
namespace RequestDHCP
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_DeviceName(void)
    {
        static std::string str("DeviceName");
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
        static std::string str("NetworkAPI.RequestDHCP");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_DeviceName();
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
            Construct_DeviceName();
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
            Initialize_DeviceName();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("NetworkAPI::RequestDHCP");
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
    // Item DeviceName (Type: "std::string")
    protected:
        void Construct_DeviceName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DeviceName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DeviceName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceName()))
                {
                    Construct_DeviceName();
                }
                if ((*Value()).hasMember(ItemName_DeviceName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DeviceName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DeviceName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_DeviceName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DeviceName(void) const
        {
            return (*Value())[ItemName_DeviceName()];
        }
        bool Get_DeviceName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DeviceName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DeviceName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace RequestDHCP
#endif //#if defined(IMPLEMENT_NETWORKAPI_REQUESTDHCP)


//------------------------------------------------------------------------
// NetworkAPI::SetNetwork::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_NETWORKAPI_SETNETWORK)
namespace SetNetwork
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_GInsRet(void)
    {
        static std::string str("GInsRet");
        return str;
    }
public:
    static std::string const& ItemName_MsgList(void)
    {
        static std::string str("MsgList");
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
        static std::string str("NetworkAPI.SetNetwork");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_GInsRet();
            Construct_MsgList();
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
            Construct_GInsRet();
            Construct_MsgList();
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
            Initialize_GInsRet();
            Initialize_MsgList();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("NetworkAPI::SetNetwork");
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
// Item GInsRet (Type: "int32_t")
protected:
    void Construct_GInsRet(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_GInsRet()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_GInsRet()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_GInsRet(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GInsRet()))
                {
                    Construct_GInsRet();
                }
                if ((*Value()).hasMember(ItemName_GInsRet()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_GInsRet()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_GInsRet(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_GInsRet()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_GInsRet(void) const
        {
            int32_t GetValue = (*Value())[ItemName_GInsRet()];
            return (int32_t)GetValue;
        }
        bool Get_GInsRet(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_GInsRet()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_GInsRet()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item MsgList (Type: "std::string[0]")
    protected:
        void Construct_MsgList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MsgList()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MsgList()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_MsgList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MsgList()))
                {
                    Construct_MsgList();
                }
                if ((*Value()).hasMember(ItemName_MsgList()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MsgList()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_MsgList(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_MsgList()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_MsgList(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_MsgList()))
                {
                    return (*Value())[ItemName_MsgList()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_MsgList(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_MsgList()))
                {
                    (*Value())[ItemName_MsgList()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_MsgList(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_MsgList()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_MsgList(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_MsgList()))
                {
                    (*Value())[ItemName_MsgList()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MsgList(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_MsgList())
                {
                    SetSize_MsgList(ArrayIndex + 1);
                }
                (*Value())[ItemName_MsgList()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_MsgList(int ArrayIndex) const
        {
            return (*Value())[ItemName_MsgList()][ArrayIndex];
        }
        bool Get_MsgList(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_MsgList()))
                {
                    if (((*Value())[ItemName_MsgList()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_MsgList()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace SetNetwork
#endif //#if defined(IMPLEMENT_NETWORKAPI_SETNETWORK)


//------------------------------------------------------------------------
// NetworkAPI::GetNICStates::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_NETWORKAPI_GETNICSTATES)
namespace GetNICStates
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
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("NetworkAPI.GetNICStates");
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
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("NetworkAPI::GetNICStates");
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
    // Item States (Type: "CType_NICStates[0]")
    protected:
        void Construct_States(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_States()))
                {
                    CType_NICStates InitValue;
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
                    CType_NICStates InitValue;
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
                CType_NICStates InitValue;
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
        bool Insert_States(int ArrayIndex, CType_NICStates SetValue)
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
        bool Set_States(int ArrayIndex, const CType_NICStates& SetValue)
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
        CType_NICStates Get_States(int ArrayIndex) const
        {
            return (*Value())[ItemName_States()][ArrayIndex];
        }
        bool Get_States(int ArrayIndex, CType_NICStates& GetValue) const
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
}; // class CResults
} // namespace GetNICStates
#endif //#if defined(IMPLEMENT_NETWORKAPI_GETNICSTATES)


//------------------------------------------------------------------------
// NetworkAPI::GetNetwork::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_NETWORKAPI_GETNETWORK)
namespace GetNetwork
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Settings(void)
    {
        static std::string str("Settings");
        return str;
    }
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
    static std::string const& ItemName_GInsRet(void)
    {
        static std::string str("GInsRet");
        return str;
    }
public:
    static std::string const& ItemName_MsgList(void)
    {
        static std::string str("MsgList");
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
        static std::string str("NetworkAPI.GetNetwork");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Settings();
            Construct_MACAddress();
            Construct_IPAddress();
            Construct_GInsRet();
            Construct_MsgList();
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
            Construct_Settings();
            Construct_MACAddress();
            Construct_IPAddress();
            Construct_GInsRet();
            Construct_MsgList();
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
            Initialize_Settings();
            Initialize_MACAddress();
            Initialize_IPAddress();
            Initialize_GInsRet();
            Initialize_MsgList();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("NetworkAPI::GetNetwork");
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
    // Item Settings (Type: "CType_NetworkSettings")
    protected:
        void Construct_Settings(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Settings()))
                {
                    CType_NetworkSettings InitValue;
                    (*Value())[ItemName_Settings()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Settings(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Settings()))
                {
                    Construct_Settings();
                }
                if ((*Value()).hasMember(ItemName_Settings()))
                {
                    CType_NetworkSettings InitValue;
                    (*Value())[ItemName_Settings()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Settings(const CType_NetworkSettings& SetValue)
        {
            try
            {
                (*Value())[ItemName_Settings()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CType_NetworkSettings Get_Settings(void) const
        {
            return (*Value())[ItemName_Settings()];
        }
        bool Get_Settings(CType_NetworkSettings& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Settings()]).valid())
                {
                    GetValue = (*Value())[ItemName_Settings()];
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
// Item GInsRet (Type: "int32_t")
protected:
    void Construct_GInsRet(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_GInsRet()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_GInsRet()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_GInsRet(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GInsRet()))
                {
                    Construct_GInsRet();
                }
                if ((*Value()).hasMember(ItemName_GInsRet()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_GInsRet()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_GInsRet(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_GInsRet()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_GInsRet(void) const
        {
            int32_t GetValue = (*Value())[ItemName_GInsRet()];
            return (int32_t)GetValue;
        }
        bool Get_GInsRet(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_GInsRet()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_GInsRet()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item MsgList (Type: "std::string[0]")
    protected:
        void Construct_MsgList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MsgList()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MsgList()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_MsgList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MsgList()))
                {
                    Construct_MsgList();
                }
                if ((*Value()).hasMember(ItemName_MsgList()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MsgList()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_MsgList(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_MsgList()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_MsgList(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_MsgList()))
                {
                    return (*Value())[ItemName_MsgList()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_MsgList(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_MsgList()))
                {
                    (*Value())[ItemName_MsgList()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_MsgList(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_MsgList()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_MsgList(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_MsgList()))
                {
                    (*Value())[ItemName_MsgList()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MsgList(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_MsgList())
                {
                    SetSize_MsgList(ArrayIndex + 1);
                }
                (*Value())[ItemName_MsgList()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_MsgList(int ArrayIndex) const
        {
            return (*Value())[ItemName_MsgList()][ArrayIndex];
        }
        bool Get_MsgList(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_MsgList()))
                {
                    if (((*Value())[ItemName_MsgList()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_MsgList()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetNetwork
#endif //#if defined(IMPLEMENT_NETWORKAPI_GETNETWORK)


//------------------------------------------------------------------------
// NetworkAPI::GetDHCPState::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_NETWORKAPI_GETDHCPSTATE)
namespace GetDHCPState
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_LeaseTime(void)
    {
        static std::string str("LeaseTime");
        return str;
    }
public:
    static std::string const& ItemName_TimeToRefresh(void)
    {
        static std::string str("TimeToRefresh");
        return str;
    }
public:
    static std::string const& ItemName_Valid(void)
    {
        static std::string str("Valid");
        return str;
    }
public:
    static std::string const& ItemName_GInsRet(void)
    {
        static std::string str("GInsRet");
        return str;
    }
public:
    static std::string const& ItemName_MsgList(void)
    {
        static std::string str("MsgList");
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
        static std::string str("NetworkAPI.GetDHCPState");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_LeaseTime();
            Construct_TimeToRefresh();
            Construct_Valid();
            Construct_GInsRet();
            Construct_MsgList();
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
            Construct_LeaseTime();
            Construct_TimeToRefresh();
            Construct_Valid();
            Construct_GInsRet();
            Construct_MsgList();
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
            Initialize_LeaseTime();
            Initialize_TimeToRefresh();
            Initialize_Valid();
            Initialize_GInsRet();
            Initialize_MsgList();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("NetworkAPI::GetDHCPState");
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
// Item LeaseTime (Type: "double")
protected:
    void Construct_LeaseTime(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_LeaseTime()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_LeaseTime()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_LeaseTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LeaseTime()))
                {
                    Construct_LeaseTime();
                }
                if ((*Value()).hasMember(ItemName_LeaseTime()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_LeaseTime()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LeaseTime(double SetValue)
        {
            try
            {
                (*Value())[ItemName_LeaseTime()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_LeaseTime(void) const
        {
            double GetValue = (*Value())[ItemName_LeaseTime()];
            return (double)GetValue;
        }
        bool Get_LeaseTime(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LeaseTime()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_LeaseTime()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item TimeToRefresh (Type: "double")
protected:
    void Construct_TimeToRefresh(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_TimeToRefresh()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_TimeToRefresh()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_TimeToRefresh(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TimeToRefresh()))
                {
                    Construct_TimeToRefresh();
                }
                if ((*Value()).hasMember(ItemName_TimeToRefresh()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_TimeToRefresh()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TimeToRefresh(double SetValue)
        {
            try
            {
                (*Value())[ItemName_TimeToRefresh()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_TimeToRefresh(void) const
        {
            double GetValue = (*Value())[ItemName_TimeToRefresh()];
            return (double)GetValue;
        }
        bool Get_TimeToRefresh(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TimeToRefresh()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_TimeToRefresh()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Valid (Type: "bool")
protected:
    void Construct_Valid(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Valid()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Valid()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Valid(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Valid()))
                {
                    Construct_Valid();
                }
                if ((*Value()).hasMember(ItemName_Valid()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Valid()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Valid(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Valid()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Valid(void) const
        {
            bool GetValue = (*Value())[ItemName_Valid()];
            return (bool)GetValue;
        }
        bool Get_Valid(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Valid()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Valid()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item GInsRet (Type: "int32_t")
protected:
    void Construct_GInsRet(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_GInsRet()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_GInsRet()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_GInsRet(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GInsRet()))
                {
                    Construct_GInsRet();
                }
                if ((*Value()).hasMember(ItemName_GInsRet()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_GInsRet()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_GInsRet(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_GInsRet()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_GInsRet(void) const
        {
            int32_t GetValue = (*Value())[ItemName_GInsRet()];
            return (int32_t)GetValue;
        }
        bool Get_GInsRet(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_GInsRet()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_GInsRet()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item MsgList (Type: "std::string[0]")
    protected:
        void Construct_MsgList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MsgList()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MsgList()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_MsgList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MsgList()))
                {
                    Construct_MsgList();
                }
                if ((*Value()).hasMember(ItemName_MsgList()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MsgList()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_MsgList(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_MsgList()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_MsgList(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_MsgList()))
                {
                    return (*Value())[ItemName_MsgList()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_MsgList(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_MsgList()))
                {
                    (*Value())[ItemName_MsgList()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_MsgList(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_MsgList()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_MsgList(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_MsgList()))
                {
                    (*Value())[ItemName_MsgList()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MsgList(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_MsgList())
                {
                    SetSize_MsgList(ArrayIndex + 1);
                }
                (*Value())[ItemName_MsgList()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_MsgList(int ArrayIndex) const
        {
            return (*Value())[ItemName_MsgList()][ArrayIndex];
        }
        bool Get_MsgList(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_MsgList()))
                {
                    if (((*Value())[ItemName_MsgList()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_MsgList()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetDHCPState
#endif //#if defined(IMPLEMENT_NETWORKAPI_GETDHCPSTATE)


//------------------------------------------------------------------------
// NetworkAPI::RequestDHCP::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_NETWORKAPI_REQUESTDHCP)
namespace RequestDHCP
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Settings(void)
    {
        static std::string str("Settings");
        return str;
    }
public:
    static std::string const& ItemName_LeaseTime(void)
    {
        static std::string str("LeaseTime");
        return str;
    }
public:
    static std::string const& ItemName_GInsRet(void)
    {
        static std::string str("GInsRet");
        return str;
    }
public:
    static std::string const& ItemName_MsgList(void)
    {
        static std::string str("MsgList");
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
        static std::string str("NetworkAPI.RequestDHCP");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Settings();
            Construct_LeaseTime();
            Construct_GInsRet();
            Construct_MsgList();
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
            Construct_Settings();
            Construct_LeaseTime();
            Construct_GInsRet();
            Construct_MsgList();
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
            Initialize_Settings();
            Initialize_LeaseTime();
            Initialize_GInsRet();
            Initialize_MsgList();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("NetworkAPI::RequestDHCP");
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
    // Item Settings (Type: "CType_NetworkSettings")
    protected:
        void Construct_Settings(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Settings()))
                {
                    CType_NetworkSettings InitValue;
                    (*Value())[ItemName_Settings()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Settings(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Settings()))
                {
                    Construct_Settings();
                }
                if ((*Value()).hasMember(ItemName_Settings()))
                {
                    CType_NetworkSettings InitValue;
                    (*Value())[ItemName_Settings()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Settings(const CType_NetworkSettings& SetValue)
        {
            try
            {
                (*Value())[ItemName_Settings()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CType_NetworkSettings Get_Settings(void) const
        {
            return (*Value())[ItemName_Settings()];
        }
        bool Get_Settings(CType_NetworkSettings& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Settings()]).valid())
                {
                    GetValue = (*Value())[ItemName_Settings()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item LeaseTime (Type: "double")
protected:
    void Construct_LeaseTime(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_LeaseTime()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_LeaseTime()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_LeaseTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LeaseTime()))
                {
                    Construct_LeaseTime();
                }
                if ((*Value()).hasMember(ItemName_LeaseTime()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_LeaseTime()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LeaseTime(double SetValue)
        {
            try
            {
                (*Value())[ItemName_LeaseTime()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_LeaseTime(void) const
        {
            double GetValue = (*Value())[ItemName_LeaseTime()];
            return (double)GetValue;
        }
        bool Get_LeaseTime(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LeaseTime()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_LeaseTime()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item GInsRet (Type: "int32_t")
protected:
    void Construct_GInsRet(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_GInsRet()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_GInsRet()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_GInsRet(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GInsRet()))
                {
                    Construct_GInsRet();
                }
                if ((*Value()).hasMember(ItemName_GInsRet()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_GInsRet()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_GInsRet(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_GInsRet()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_GInsRet(void) const
        {
            int32_t GetValue = (*Value())[ItemName_GInsRet()];
            return (int32_t)GetValue;
        }
        bool Get_GInsRet(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_GInsRet()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_GInsRet()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item MsgList (Type: "std::string[0]")
    protected:
        void Construct_MsgList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MsgList()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MsgList()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_MsgList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MsgList()))
                {
                    Construct_MsgList();
                }
                if ((*Value()).hasMember(ItemName_MsgList()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MsgList()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_MsgList(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_MsgList()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_MsgList(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_MsgList()))
                {
                    return (*Value())[ItemName_MsgList()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_MsgList(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_MsgList()))
                {
                    (*Value())[ItemName_MsgList()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_MsgList(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_MsgList()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_MsgList(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_MsgList()))
                {
                    (*Value())[ItemName_MsgList()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MsgList(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_MsgList())
                {
                    SetSize_MsgList(ArrayIndex + 1);
                }
                (*Value())[ItemName_MsgList()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_MsgList(int ArrayIndex) const
        {
            return (*Value())[ItemName_MsgList()][ArrayIndex];
        }
        bool Get_MsgList(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_MsgList()))
                {
                    if (((*Value())[ItemName_MsgList()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_MsgList()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace RequestDHCP
#endif //#if defined(IMPLEMENT_NETWORKAPI_REQUESTDHCP)
//========================================================================
}; // namespace NetworkAPI
//========================================================================
#endif // #if !defined(_NETWORKAPI_TYPES_H)

