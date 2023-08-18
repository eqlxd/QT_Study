//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_MAINTENANCEAPI_TYPES_H)
#define _MAINTENANCEAPI_TYPES_H
//========================================================================
// Implemented methods
#define IMPLEMENT_MAINTENANCEAPI_GETFIRMWAREINFO
#define IMPLEMENT_MAINTENANCEAPI_GETSYSTEMSTATE
#define IMPLEMENT_MAINTENANCEAPI_SETSYSTEMSTATE
#define IMPLEMENT_MAINTENANCEAPI_GETCONFIGURATIONSTATE
#define IMPLEMENT_MAINTENANCEAPI_TRANSFERMASTER2SLAVE
#define IMPLEMENT_MAINTENANCEAPI_TRANSFERSLAVE2MASTER
#define IMPLEMENT_MAINTENANCEAPI_HANDLECONFIGURATIONCHANGE
#define IMPLEMENT_MAINTENANCEAPI_PERFORMFPGAFWUPDATE
#define IMPLEMENT_MAINTENANCEAPI_CHANGEHWPARAM
#define IMPLEMENT_MAINTENANCEAPI_CHANGEPASSWORD
#define IMPLEMENT_MAINTENANCEAPI_LAUNCHPROCESS
#define IMPLEMENT_MAINTENANCEAPI_KILLPROCESS
#define IMPLEMENT_MAINTENANCEAPI_GETPROCESSRESPONSE
#define IMPLEMENT_MAINTENANCEAPI_UPDATESYSTEMBIOS
#define IMPLEMENT_MAINTENANCEAPI_RESTORESYSTEMBIOS
#define IMPLEMENT_MAINTENANCEAPI_GENERICCALL
#define IMPLEMENT_MAINTENANCEAPI_ENABLETESTCONCORE
#define IMPLEMENT_MAINTENANCEAPI_SETLEDSTATES
#define IMPLEMENT_MAINTENANCEAPI_CONFIGURETOUCH


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "MaintenanceAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
#include "GInsXmlRpcStdAPI_Types.h"
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace MaintenanceAPI {
//========================================================================
//------------------------------------------------------------------------
// MaintenanceAPI::CAPIInfo
//------------------------------------------------------------------------
class CAPIInfo
{
public:
    static std::string const& Name(void)
    {
        static std::string str("MaintenanceAPI");
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
// MaintenanceAPI::TypeSystemState
//------------------------------------------------------------------------
enum TypeSystemState {
    Operational = 6,
    Config = 3,
    ConfigAuto = 4,
    Idle = 1,
    Init = 0,
    Terminate = 7,
    PreOperational = 5,
    PreConfig = 2,
}; // enum TypeSystemState


//------------------------------------------------------------------------
// MaintenanceAPI::CTypeModuleInfo
//------------------------------------------------------------------------
class CTypeModuleInfo : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_UARTIndex(void)
        {
            static std::string str("UARTIndex");
            return str;
        }
    public:
        static std::string const& ItemName_Address(void)
        {
            static std::string str("Address");
            return str;
        }
    public:
        static std::string const& ItemName_ID(void)
        {
            static std::string str("ID");
            return str;
        }
    public:
        static std::string const& ItemName_ConfigDifferent(void)
        {
            static std::string str("ConfigDifferent");
            return str;
        }
    public:
        static std::string const& ItemName_TransferLocked(void)
        {
            static std::string str("TransferLocked");
            return str;
        }
    public:
        static std::string const& ItemName_Incompatible(void)
        {
            static std::string str("Incompatible");
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
        static std::string const& ItemName_SlaveMID(void)
        {
            static std::string str("SlaveMID");
            return str;
        }
    public:
        static std::string const& ItemName_SlaveDeviceType(void)
        {
            static std::string str("SlaveDeviceType");
            return str;
        }
    public:
        static std::string const& ItemName_SlaveDeviceTypeCode(void)
        {
            static std::string str("SlaveDeviceTypeCode");
            return str;
        }
    public:
        static std::string const& ItemName_SlaveSerialNumber(void)
        {
            static std::string str("SlaveSerialNumber");
            return str;
        }
    public:
        static std::string const& ItemName_SlaveFirmwareVersion(void)
        {
            static std::string str("SlaveFirmwareVersion");
            return str;
        }
    public:
        static std::string const& ItemName_SlaveState(void)
        {
            static std::string str("SlaveState");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("TypeModuleInfo");
        return str;
    }
public:
    CTypeModuleInfo(void)
    {
        try
        {
            Construct_UARTIndex();
            Construct_Address();
            Construct_ID();
            Construct_ConfigDifferent();
            Construct_TransferLocked();
            Construct_Incompatible();
            Construct_MasterSide();
            Construct_SlaveSide();
            Construct_SlaveMID();
            Construct_SlaveDeviceType();
            Construct_SlaveDeviceTypeCode();
            Construct_SlaveSerialNumber();
            Construct_SlaveFirmwareVersion();
            Construct_SlaveState();
            }
        catch (...) {}
    }
    CTypeModuleInfo(const CTypeModuleInfo& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        }
    CTypeModuleInfo(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_UARTIndex();
            Construct_Address();
            Construct_ID();
            Construct_ConfigDifferent();
            Construct_TransferLocked();
            Construct_Incompatible();
            Construct_MasterSide();
            Construct_SlaveSide();
            Construct_SlaveMID();
            Construct_SlaveDeviceType();
            Construct_SlaveDeviceTypeCode();
            Construct_SlaveSerialNumber();
            Construct_SlaveFirmwareVersion();
            Construct_SlaveState();
            }
        catch (...) {}
    }
public:
    ~CTypeModuleInfo(void)
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
            Initialize_UARTIndex();
            Initialize_Address();
            Initialize_ID();
            Initialize_ConfigDifferent();
            Initialize_TransferLocked();
            Initialize_Incompatible();
            Initialize_MasterSide();
            Initialize_SlaveSide();
            Initialize_SlaveMID();
            Initialize_SlaveDeviceType();
            Initialize_SlaveDeviceTypeCode();
            Initialize_SlaveSerialNumber();
            Initialize_SlaveFirmwareVersion();
            Initialize_SlaveState();
        }
        catch (...) {}
    }
//------------------------------------------------------------------------
// Item UARTIndex (Type: "int32_t")
protected:
    void Construct_UARTIndex(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_UARTIndex()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_UARTIndex()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_UARTIndex(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UARTIndex()))
                {
                    Construct_UARTIndex();
                }
                if ((*Value()).hasMember(ItemName_UARTIndex()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_UARTIndex()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_UARTIndex(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_UARTIndex()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_UARTIndex(void) const
        {
            int32_t GetValue = (*Value())[ItemName_UARTIndex()];
            return (int32_t)GetValue;
        }
        bool Get_UARTIndex(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_UARTIndex()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_UARTIndex()]));
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
// Item Incompatible (Type: "bool")
protected:
    void Construct_Incompatible(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Incompatible()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Incompatible()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Incompatible(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Incompatible()))
                {
                    Construct_Incompatible();
                }
                if ((*Value()).hasMember(ItemName_Incompatible()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Incompatible()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Incompatible(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Incompatible()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Incompatible(void) const
        {
            bool GetValue = (*Value())[ItemName_Incompatible()];
            return (bool)GetValue;
        }
        bool Get_Incompatible(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Incompatible()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Incompatible()]));
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
    // Item SlaveMID (Type: "std::string")
    protected:
        void Construct_SlaveMID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SlaveMID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SlaveMID()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SlaveMID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SlaveMID()))
                {
                    Construct_SlaveMID();
                }
                if ((*Value()).hasMember(ItemName_SlaveMID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SlaveMID()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SlaveMID(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_SlaveMID()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_SlaveMID(void) const
        {
            return (*Value())[ItemName_SlaveMID()];
        }
        bool Get_SlaveMID(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SlaveMID()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_SlaveMID()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item SlaveDeviceType (Type: "std::string")
    protected:
        void Construct_SlaveDeviceType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SlaveDeviceType()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SlaveDeviceType()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SlaveDeviceType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SlaveDeviceType()))
                {
                    Construct_SlaveDeviceType();
                }
                if ((*Value()).hasMember(ItemName_SlaveDeviceType()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SlaveDeviceType()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SlaveDeviceType(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_SlaveDeviceType()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_SlaveDeviceType(void) const
        {
            return (*Value())[ItemName_SlaveDeviceType()];
        }
        bool Get_SlaveDeviceType(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SlaveDeviceType()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_SlaveDeviceType()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item SlaveDeviceTypeCode (Type: "std::string")
    protected:
        void Construct_SlaveDeviceTypeCode(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SlaveDeviceTypeCode()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SlaveDeviceTypeCode()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SlaveDeviceTypeCode(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SlaveDeviceTypeCode()))
                {
                    Construct_SlaveDeviceTypeCode();
                }
                if ((*Value()).hasMember(ItemName_SlaveDeviceTypeCode()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SlaveDeviceTypeCode()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SlaveDeviceTypeCode(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_SlaveDeviceTypeCode()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_SlaveDeviceTypeCode(void) const
        {
            return (*Value())[ItemName_SlaveDeviceTypeCode()];
        }
        bool Get_SlaveDeviceTypeCode(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SlaveDeviceTypeCode()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_SlaveDeviceTypeCode()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item SlaveSerialNumber (Type: "std::string")
    protected:
        void Construct_SlaveSerialNumber(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SlaveSerialNumber()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SlaveSerialNumber()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SlaveSerialNumber(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SlaveSerialNumber()))
                {
                    Construct_SlaveSerialNumber();
                }
                if ((*Value()).hasMember(ItemName_SlaveSerialNumber()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SlaveSerialNumber()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SlaveSerialNumber(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_SlaveSerialNumber()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_SlaveSerialNumber(void) const
        {
            return (*Value())[ItemName_SlaveSerialNumber()];
        }
        bool Get_SlaveSerialNumber(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SlaveSerialNumber()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_SlaveSerialNumber()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item SlaveFirmwareVersion (Type: "std::string")
    protected:
        void Construct_SlaveFirmwareVersion(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SlaveFirmwareVersion()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SlaveFirmwareVersion()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SlaveFirmwareVersion(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SlaveFirmwareVersion()))
                {
                    Construct_SlaveFirmwareVersion();
                }
                if ((*Value()).hasMember(ItemName_SlaveFirmwareVersion()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SlaveFirmwareVersion()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SlaveFirmwareVersion(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_SlaveFirmwareVersion()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_SlaveFirmwareVersion(void) const
        {
            return (*Value())[ItemName_SlaveFirmwareVersion()];
        }
        bool Get_SlaveFirmwareVersion(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SlaveFirmwareVersion()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_SlaveFirmwareVersion()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item SlaveState (Type: "std::string")
    protected:
        void Construct_SlaveState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SlaveState()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SlaveState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SlaveState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SlaveState()))
                {
                    Construct_SlaveState();
                }
                if ((*Value()).hasMember(ItemName_SlaveState()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SlaveState()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SlaveState(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_SlaveState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_SlaveState(void) const
        {
            return (*Value())[ItemName_SlaveState()];
        }
        bool Get_SlaveState(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SlaveState()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_SlaveState()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CTypeModuleInfo


//------------------------------------------------------------------------
// MaintenanceAPI::CTypeTouchEvent
//------------------------------------------------------------------------
class CTypeTouchEvent : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_EvtCode(void)
        {
            static std::string str("EvtCode");
            return str;
        }
    public:
        static std::string const& ItemName_LastEvtValues(void)
        {
            static std::string str("LastEvtValues");
            return str;
        }
    public:
        static std::string const& ItemName_AssignedAxis(void)
        {
            static std::string str("AssignedAxis");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("TypeTouchEvent");
        return str;
    }
public:
    CTypeTouchEvent(void)
    {
        try
        {
            Construct_EvtCode();
            Construct_LastEvtValues();
            Construct_AssignedAxis();
            }
        catch (...) {}
    }
    CTypeTouchEvent(const CTypeTouchEvent& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        }
    CTypeTouchEvent(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_EvtCode();
            Construct_LastEvtValues();
            Construct_AssignedAxis();
            }
        catch (...) {}
    }
public:
    ~CTypeTouchEvent(void)
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
            Initialize_EvtCode();
            Initialize_LastEvtValues();
            Initialize_AssignedAxis();
        }
        catch (...) {}
    }
//------------------------------------------------------------------------
// Item EvtCode (Type: "int32_t")
protected:
    void Construct_EvtCode(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_EvtCode()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_EvtCode()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_EvtCode(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_EvtCode()))
                {
                    Construct_EvtCode();
                }
                if ((*Value()).hasMember(ItemName_EvtCode()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_EvtCode()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_EvtCode(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_EvtCode()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_EvtCode(void) const
        {
            int32_t GetValue = (*Value())[ItemName_EvtCode()];
            return (int32_t)GetValue;
        }
        bool Get_EvtCode(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_EvtCode()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_EvtCode()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item LastEvtValues (Type: "int32_t[0]")
    protected:
        void Construct_LastEvtValues(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LastEvtValues()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_LastEvtValues()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_LastEvtValues(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LastEvtValues()))
                {
                    Construct_LastEvtValues();
                }
                if ((*Value()).hasMember(ItemName_LastEvtValues()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_LastEvtValues()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_LastEvtValues(int NewSize)
        {
            try
            {
                int32_t InitValue;
                InitValue = 0;
                (*Value())[ItemName_LastEvtValues()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch(...) {}
            return false;
        }
        int GetSize_LastEvtValues(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_LastEvtValues()))
                {
                    return (*Value())[ItemName_LastEvtValues()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_LastEvtValues(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_LastEvtValues()))
                {
                    (*Value())[ItemName_LastEvtValues()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_LastEvtValues(int ArrayIndex, int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_LastEvtValues()].insertArrayValue(ArrayIndex,(int32_t)SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_LastEvtValues(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_LastEvtValues()))
                {
                    (*Value())[ItemName_LastEvtValues()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LastEvtValues(int ArrayIndex, int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_LastEvtValues()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_LastEvtValues()][ArrayIndex] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Set_LastEvtValues(const std::vector<int32_t>& SetValue)
        {
            try
            {
                SetSize_LastEvtValues((int)SetValue.size());
                for (int ArrayIndex = 0; ArrayIndex < (int)SetValue.size(); ArrayIndex++)
                {
                    (*Value())[ItemName_LastEvtValues()][ArrayIndex] = (int32_t)SetValue[ArrayIndex];
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_LastEvtValues(int ArrayIndex) const
        {
            int32_t GetValue = (*Value())[ItemName_LastEvtValues()][ArrayIndex];
            return (int32_t)GetValue;
        }
        bool Get_LastEvtValues(int ArrayIndex, int32_t& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_LastEvtValues()))
                {
                    if (((*Value())[ItemName_LastEvtValues()][ArrayIndex]).valid())
                    {
                        GetValue = (int32_t)((int32_t)((*Value())[ItemName_LastEvtValues()][ArrayIndex]));
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item AssignedAxis (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_AssignedAxis(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_AssignedAxis()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_AssignedAxis()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_AssignedAxis(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_AssignedAxis()))
                {
                    Construct_AssignedAxis();
                }
                if ((*Value()).hasMember(ItemName_AssignedAxis()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_AssignedAxis()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_AssignedAxis(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_AssignedAxis()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_AssignedAxis(void) const
        {
            return (*Value())[ItemName_AssignedAxis()];
        }
        bool Get_AssignedAxis(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_AssignedAxis()]).valid())
                {
                    GetValue = (*Value())[ItemName_AssignedAxis()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CTypeTouchEvent


//------------------------------------------------------------------------
// MaintenanceAPI::SetSystemState::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_SETSYSTEMSTATE)
namespace SetSystemState
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_StateID(void)
    {
        static std::string str("StateID");
        return str;
    }
public:
    static std::string const& ItemName_State(void)
    {
        static std::string str("State");
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
        static std::string str("MaintenanceAPI.SetSystemState");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_StateID();
            Construct_State();
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
            Construct_StateID();
            Construct_State();
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
            Initialize_StateID();
            Initialize_State();
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
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::SetSystemState");
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
    // Item StateID (Type: "enum TypeSystemState")
    protected:
        void Construct_StateID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StateID()))
                {
                    enum TypeSystemState InitValue;
                    InitValue = Init;
                    (*Value())[ItemName_StateID()] = (int)InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_StateID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StateID()))
                {
                    Construct_StateID();
                }
                if ((*Value()).hasMember(ItemName_StateID()))
                {
                    enum TypeSystemState InitValue;
                    InitValue = Init;
                    (*Value())[ItemName_StateID()] = (int)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StateID(enum TypeSystemState SetValue)
        {
            try
            {
                (*Value())[ItemName_StateID()] = (int)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        enum TypeSystemState Get_StateID(void) const
        {
            int GetValue = (*Value())[ItemName_StateID()];
            return (enum TypeSystemState)GetValue;
        }
        bool Get_StateID(enum TypeSystemState& GetValue) const
        {
            try
            {
                if ((*Value())[ItemName_StateID()].valid())
                {
                    GetValue = (enum TypeSystemState)((int)((*Value())[ItemName_StateID()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item State (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_State(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_State()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
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
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_State()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_State(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
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
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_State(void) const
        {
            return (*Value())[ItemName_State()];
        }
        bool Get_State(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
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
} // namespace SetSystemState
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_SETSYSTEMSTATE)


//------------------------------------------------------------------------
// MaintenanceAPI::TransferMaster2Slave::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_TRANSFERMASTER2SLAVE)
namespace TransferMaster2Slave
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_UartIndex(void)
    {
        static std::string str("UartIndex");
        return str;
    }
public:
    static std::string const& ItemName_Address(void)
    {
        static std::string str("Address");
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
        static std::string str("MaintenanceAPI.TransferMaster2Slave");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_UartIndex();
            Construct_Address();
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
            Construct_UartIndex();
            Construct_Address();
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
            Initialize_UartIndex();
            Initialize_Address();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::TransferMaster2Slave");
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
// Item UartIndex (Type: "int32_t")
protected:
    void Construct_UartIndex(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_UartIndex()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_UartIndex()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_UartIndex(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UartIndex()))
                {
                    Construct_UartIndex();
                }
                if ((*Value()).hasMember(ItemName_UartIndex()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_UartIndex()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_UartIndex(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_UartIndex()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_UartIndex(void) const
        {
            int32_t GetValue = (*Value())[ItemName_UartIndex()];
            return (int32_t)GetValue;
        }
        bool Get_UartIndex(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_UartIndex()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_UartIndex()]));
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
                InitValue = 1;
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
                    InitValue = 1;
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
}; // class CParams
} // namespace TransferMaster2Slave
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_TRANSFERMASTER2SLAVE)


//------------------------------------------------------------------------
// MaintenanceAPI::TransferSlave2Master::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_TRANSFERSLAVE2MASTER)
namespace TransferSlave2Master
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_UartIndex(void)
    {
        static std::string str("UartIndex");
        return str;
    }
public:
    static std::string const& ItemName_Address(void)
    {
        static std::string str("Address");
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
        static std::string str("MaintenanceAPI.TransferSlave2Master");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_UartIndex();
            Construct_Address();
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
            Construct_UartIndex();
            Construct_Address();
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
            Initialize_UartIndex();
            Initialize_Address();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::TransferSlave2Master");
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
// Item UartIndex (Type: "int32_t")
protected:
    void Construct_UartIndex(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_UartIndex()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_UartIndex()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_UartIndex(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UartIndex()))
                {
                    Construct_UartIndex();
                }
                if ((*Value()).hasMember(ItemName_UartIndex()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_UartIndex()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_UartIndex(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_UartIndex()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_UartIndex(void) const
        {
            int32_t GetValue = (*Value())[ItemName_UartIndex()];
            return (int32_t)GetValue;
        }
        bool Get_UartIndex(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_UartIndex()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_UartIndex()]));
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
                InitValue = 1;
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
                    InitValue = 1;
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
}; // class CParams
} // namespace TransferSlave2Master
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_TRANSFERSLAVE2MASTER)


//------------------------------------------------------------------------
// MaintenanceAPI::HandleConfigurationChange::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_HANDLECONFIGURATIONCHANGE)
namespace HandleConfigurationChange
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_FileName(void)
    {
        static std::string str("FileName");
        return str;
    }
public:
    static std::string const& ItemName_Deleted(void)
    {
        static std::string str("Deleted");
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
        static std::string str("MaintenanceAPI.HandleConfigurationChange");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_FileName();
            Construct_Deleted();
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
            Construct_FileName();
            Construct_Deleted();
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
            Initialize_FileName();
            Initialize_Deleted();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::HandleConfigurationChange");
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
    // Item FileName (Type: "std::string")
    protected:
        void Construct_FileName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FileName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FileName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_FileName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FileName()))
                {
                    Construct_FileName();
                }
                if ((*Value()).hasMember(ItemName_FileName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FileName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FileName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_FileName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_FileName(void) const
        {
            return (*Value())[ItemName_FileName()];
        }
        bool Get_FileName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FileName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_FileName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Deleted (Type: "bool")
protected:
    void Construct_Deleted(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Deleted()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Deleted()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Deleted(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Deleted()))
                {
                    Construct_Deleted();
                }
                if ((*Value()).hasMember(ItemName_Deleted()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Deleted()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Deleted(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Deleted()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Deleted(void) const
        {
            bool GetValue = (*Value())[ItemName_Deleted()];
            return (bool)GetValue;
        }
        bool Get_Deleted(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Deleted()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Deleted()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace HandleConfigurationChange
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_HANDLECONFIGURATIONCHANGE)


//------------------------------------------------------------------------
// MaintenanceAPI::PerformFPGAFWUpdate::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_PERFORMFPGAFWUPDATE)
namespace PerformFPGAFWUpdate
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Path(void)
    {
        static std::string str("Path");
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
        static std::string str("MaintenanceAPI.PerformFPGAFWUpdate");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Path();
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
            Construct_Path();
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
            Initialize_Path();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::PerformFPGAFWUpdate");
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
}; // class CParams
} // namespace PerformFPGAFWUpdate
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_PERFORMFPGAFWUPDATE)


//------------------------------------------------------------------------
// MaintenanceAPI::ChangeHWParam::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_CHANGEHWPARAM)
namespace ChangeHWParam
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Key(void)
    {
        static std::string str("Key");
        return str;
    }
public:
    static std::string const& ItemName_Command(void)
    {
        static std::string str("Command");
        return str;
    }
public:
    static std::string const& ItemName_Values(void)
    {
        static std::string str("Values");
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
        static std::string str("MaintenanceAPI.ChangeHWParam");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Key();
            Construct_Command();
            Construct_Values();
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
            Construct_Key();
            Construct_Command();
            Construct_Values();
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
            Initialize_Key();
            Initialize_Command();
            Initialize_Values();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::ChangeHWParam");
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
    // Item Key (Type: "std::string")
    protected:
        void Construct_Key(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Key()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Key()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Key(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Key()))
                {
                    Construct_Key();
                }
                if ((*Value()).hasMember(ItemName_Key()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Key()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Key(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Key()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Key(void) const
        {
            return (*Value())[ItemName_Key()];
        }
        bool Get_Key(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Key()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Key()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Command (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Command(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Command()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
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
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Command()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Command(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
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
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Command(void) const
        {
            return (*Value())[ItemName_Command()];
        }
        bool Get_Command(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Command()]).valid())
                {
                    GetValue = (*Value())[ItemName_Command()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Values (Type: "std::string[0]")
    protected:
        void Construct_Values(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Values()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Values()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Values(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Values()))
                {
                    Construct_Values();
                }
                if ((*Value()).hasMember(ItemName_Values()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Values()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Values(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_Values()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Values(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Values()))
                {
                    return (*Value())[ItemName_Values()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Values(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Values()))
                {
                    (*Value())[ItemName_Values()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Values(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_Values()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Values(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Values()))
                {
                    (*Value())[ItemName_Values()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Values(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_Values())
                {
                    SetSize_Values(ArrayIndex + 1);
                }
                (*Value())[ItemName_Values()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Values(int ArrayIndex) const
        {
            return (*Value())[ItemName_Values()][ArrayIndex];
        }
        bool Get_Values(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Values()))
                {
                    if (((*Value())[ItemName_Values()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_Values()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace ChangeHWParam
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_CHANGEHWPARAM)


//------------------------------------------------------------------------
// MaintenanceAPI::ChangePassword::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_CHANGEPASSWORD)
namespace ChangePassword
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_username(void)
    {
        static std::string str("username");
        return str;
    }
public:
    static std::string const& ItemName_old(void)
    {
        static std::string str("old");
        return str;
    }
public:
    static std::string const& ItemName_new(void)
    {
        static std::string str("new");
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
        static std::string str("MaintenanceAPI.ChangePassword");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_username();
            Construct_old();
            Construct_new();
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
            Construct_username();
            Construct_old();
            Construct_new();
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
            Initialize_username();
            Initialize_old();
            Initialize_new();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::ChangePassword");
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
    // Item username (Type: "std::string")
    protected:
        void Construct_username(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_username()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_username()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_username(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_username()))
                {
                    Construct_username();
                }
                if ((*Value()).hasMember(ItemName_username()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_username()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_username(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_username()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_username(void) const
        {
            return (*Value())[ItemName_username()];
        }
        bool Get_username(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_username()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_username()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item old (Type: "std::string")
    protected:
        void Construct_old(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_old()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_old()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_old(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_old()))
                {
                    Construct_old();
                }
                if ((*Value()).hasMember(ItemName_old()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_old()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_old(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_old()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_old(void) const
        {
            return (*Value())[ItemName_old()];
        }
        bool Get_old(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_old()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_old()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item new (Type: "std::string[0]")
    protected:
        void Construct_new(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_new()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_new()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_new(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_new()))
                {
                    Construct_new();
                }
                if ((*Value()).hasMember(ItemName_new()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_new()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_new(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_new()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_new(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_new()))
                {
                    return (*Value())[ItemName_new()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_new(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_new()))
                {
                    (*Value())[ItemName_new()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_new(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_new()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_new(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_new()))
                {
                    (*Value())[ItemName_new()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_new(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_new())
                {
                    SetSize_new(ArrayIndex + 1);
                }
                (*Value())[ItemName_new()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_new(int ArrayIndex) const
        {
            return (*Value())[ItemName_new()][ArrayIndex];
        }
        bool Get_new(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_new()))
                {
                    if (((*Value())[ItemName_new()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_new()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace ChangePassword
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_CHANGEPASSWORD)


//------------------------------------------------------------------------
// MaintenanceAPI::LaunchProcess::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_LAUNCHPROCESS)
namespace LaunchProcess
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Cmd(void)
    {
        static std::string str("Cmd");
        return str;
    }
public:
    static std::string const& ItemName_Args(void)
    {
        static std::string str("Args");
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
        static std::string str("MaintenanceAPI.LaunchProcess");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Cmd();
            Construct_Args();
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
            Construct_Cmd();
            Construct_Args();
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
            Initialize_Cmd();
            Initialize_Args();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::LaunchProcess");
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
    // Item Cmd (Type: "std::string")
    protected:
        void Construct_Cmd(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Cmd()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Cmd()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Cmd(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Cmd()))
                {
                    Construct_Cmd();
                }
                if ((*Value()).hasMember(ItemName_Cmd()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Cmd()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Cmd(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Cmd()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Cmd(void) const
        {
            return (*Value())[ItemName_Cmd()];
        }
        bool Get_Cmd(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Cmd()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Cmd()]);
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
}; // class CParams
} // namespace LaunchProcess
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_LAUNCHPROCESS)


//------------------------------------------------------------------------
// MaintenanceAPI::KillProcess::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_KILLPROCESS)
namespace KillProcess
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
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("MaintenanceAPI.KillProcess");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Name();
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
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::KillProcess");
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
}; // class CParams
} // namespace KillProcess
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_KILLPROCESS)


//------------------------------------------------------------------------
// MaintenanceAPI::UpdateSystemBios::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_UPDATESYSTEMBIOS)
namespace UpdateSystemBios
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Path(void)
    {
        static std::string str("Path");
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
        static std::string str("MaintenanceAPI.UpdateSystemBios");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Path();
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
            Construct_Path();
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
            Initialize_Path();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::UpdateSystemBios");
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
}; // class CParams
} // namespace UpdateSystemBios
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_UPDATESYSTEMBIOS)


//------------------------------------------------------------------------
// MaintenanceAPI::RestoreSystemBios::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_RESTORESYSTEMBIOS)
namespace RestoreSystemBios
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Path(void)
    {
        static std::string str("Path");
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
        static std::string str("MaintenanceAPI.RestoreSystemBios");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Path();
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
            Construct_Path();
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
            Initialize_Path();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::RestoreSystemBios");
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
}; // class CParams
} // namespace RestoreSystemBios
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_RESTORESYSTEMBIOS)


//------------------------------------------------------------------------
// MaintenanceAPI::GenericCall::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_GENERICCALL)
namespace GenericCall
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
    static std::string const& ItemName_SParams(void)
    {
        static std::string str("SParams");
        return str;
    }
public:
    static std::string const& ItemName_FParams(void)
    {
        static std::string str("FParams");
        return str;
    }
public:
    static std::string const& ItemName_IParams(void)
    {
        static std::string str("IParams");
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
        static std::string str("MaintenanceAPI.GenericCall");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ID();
            Construct_SParams();
            Construct_FParams();
            Construct_IParams();
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
            Construct_SParams();
            Construct_FParams();
            Construct_IParams();
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
            Initialize_SParams();
            Initialize_FParams();
            Initialize_IParams();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::GenericCall");
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
    // Item SParams (Type: "std::string[0]")
    protected:
        void Construct_SParams(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SParams()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SParams()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_SParams(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SParams()))
                {
                    Construct_SParams();
                }
                if ((*Value()).hasMember(ItemName_SParams()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SParams()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_SParams(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_SParams()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_SParams(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_SParams()))
                {
                    return (*Value())[ItemName_SParams()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_SParams(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_SParams()))
                {
                    (*Value())[ItemName_SParams()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_SParams(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_SParams()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_SParams(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_SParams()))
                {
                    (*Value())[ItemName_SParams()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SParams(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_SParams())
                {
                    SetSize_SParams(ArrayIndex + 1);
                }
                (*Value())[ItemName_SParams()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_SParams(int ArrayIndex) const
        {
            return (*Value())[ItemName_SParams()][ArrayIndex];
        }
        bool Get_SParams(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_SParams()))
                {
                    if (((*Value())[ItemName_SParams()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_SParams()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item FParams (Type: "double[0]")
    protected:
        void Construct_FParams(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FParams()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_FParams()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_FParams(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FParams()))
                {
                    Construct_FParams();
                }
                if ((*Value()).hasMember(ItemName_FParams()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_FParams()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_FParams(int NewSize)
        {
            try
            {
                double InitValue;
                InitValue = 0.0;
                (*Value())[ItemName_FParams()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch(...) {}
            return false;
        }
        int GetSize_FParams(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_FParams()))
                {
                    return (*Value())[ItemName_FParams()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_FParams(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_FParams()))
                {
                    (*Value())[ItemName_FParams()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_FParams(int ArrayIndex, double SetValue)
        {
            try
            {
                (*Value())[ItemName_FParams()].insertArrayValue(ArrayIndex,(double)SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_FParams(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_FParams()))
                {
                    (*Value())[ItemName_FParams()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FParams(int ArrayIndex, double SetValue)
        {
            try
            {
                (*Value())[ItemName_FParams()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_FParams()][ArrayIndex] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Set_FParams(const std::vector<double>& SetValue)
        {
            try
            {
                SetSize_FParams((int)SetValue.size());
                for (int ArrayIndex = 0; ArrayIndex < (int)SetValue.size(); ArrayIndex++)
                {
                    (*Value())[ItemName_FParams()][ArrayIndex] = (double)SetValue[ArrayIndex];
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_FParams(int ArrayIndex) const
        {
            double GetValue = (*Value())[ItemName_FParams()][ArrayIndex];
            return (double)GetValue;
        }
        bool Get_FParams(int ArrayIndex, double& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_FParams()))
                {
                    if (((*Value())[ItemName_FParams()][ArrayIndex]).valid())
                    {
                        GetValue = (double)((double)((*Value())[ItemName_FParams()][ArrayIndex]));
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item IParams (Type: "int64_t[0]")
    protected:
        void Construct_IParams(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IParams()))
                {
                    int64_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_IParams()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_IParams(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IParams()))
                {
                    Construct_IParams();
                }
                if ((*Value()).hasMember(ItemName_IParams()))
                {
                    int64_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_IParams()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_IParams(int NewSize)
        {
            try
            {
                int64_t InitValue;
                InitValue = 0;
                (*Value())[ItemName_IParams()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch(...) {}
            return false;
        }
        int GetSize_IParams(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_IParams()))
                {
                    return (*Value())[ItemName_IParams()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_IParams(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_IParams()))
                {
                    (*Value())[ItemName_IParams()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_IParams(int ArrayIndex, int64_t SetValue)
        {
            try
            {
                (*Value())[ItemName_IParams()].insertArrayValue(ArrayIndex,(int64_t)SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_IParams(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_IParams()))
                {
                    (*Value())[ItemName_IParams()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IParams(int ArrayIndex, int64_t SetValue)
        {
            try
            {
                (*Value())[ItemName_IParams()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_IParams()][ArrayIndex] = (int64_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Set_IParams(const std::vector<int64_t>& SetValue)
        {
            try
            {
                SetSize_IParams((int)SetValue.size());
                for (int ArrayIndex = 0; ArrayIndex < (int)SetValue.size(); ArrayIndex++)
                {
                    (*Value())[ItemName_IParams()][ArrayIndex] = (int64_t)SetValue[ArrayIndex];
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int64_t Get_IParams(int ArrayIndex) const
        {
            int64_t GetValue = (*Value())[ItemName_IParams()][ArrayIndex];
            return (int64_t)GetValue;
        }
        bool Get_IParams(int ArrayIndex, int64_t& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_IParams()))
                {
                    if (((*Value())[ItemName_IParams()][ArrayIndex]).valid())
                    {
                        GetValue = (int64_t)((int64_t)((*Value())[ItemName_IParams()][ArrayIndex]));
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GenericCall
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_GENERICCALL)


//------------------------------------------------------------------------
// MaintenanceAPI::EnableTestConCore::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_ENABLETESTCONCORE)
namespace EnableTestConCore
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_CoreID(void)
    {
        static std::string str("CoreID");
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
        static std::string str("MaintenanceAPI.EnableTestConCore");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_CoreID();
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
            Construct_CoreID();
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
            Initialize_CoreID();
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
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::EnableTestConCore");
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
// Item CoreID (Type: "int32_t")
protected:
    void Construct_CoreID(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_CoreID()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_CoreID()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_CoreID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CoreID()))
                {
                    Construct_CoreID();
                }
                if ((*Value()).hasMember(ItemName_CoreID()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_CoreID()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_CoreID(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_CoreID()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_CoreID(void) const
        {
            int32_t GetValue = (*Value())[ItemName_CoreID()];
            return (int32_t)GetValue;
        }
        bool Get_CoreID(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_CoreID()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_CoreID()]));
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
} // namespace EnableTestConCore
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_ENABLETESTCONCORE)


//------------------------------------------------------------------------
// MaintenanceAPI::SetLEDStates::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_SETLEDSTATES)
namespace SetLEDStates
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Run(void)
    {
        static std::string str("Run");
        return str;
    }
public:
    static std::string const& ItemName_Error(void)
    {
        static std::string str("Error");
        return str;
    }
public:
    static std::string const& ItemName_Mode(void)
    {
        static std::string str("Mode");
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
        static std::string str("MaintenanceAPI.SetLEDStates");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Run();
            Construct_Error();
            Construct_Mode();
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
            Construct_Run();
            Construct_Error();
            Construct_Mode();
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
            Initialize_Run();
            Initialize_Error();
            Initialize_Mode();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::SetLEDStates");
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
// Item Run (Type: "bool")
protected:
    void Construct_Run(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Run()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Run()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Run(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Run()))
                {
                    Construct_Run();
                }
                if ((*Value()).hasMember(ItemName_Run()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Run()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Run(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Run()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Run(void) const
        {
            bool GetValue = (*Value())[ItemName_Run()];
            return (bool)GetValue;
        }
        bool Get_Run(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Run()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Run()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Error (Type: "bool")
protected:
    void Construct_Error(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Error()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Error()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Error(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Error()))
                {
                    Construct_Error();
                }
                if ((*Value()).hasMember(ItemName_Error()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Error()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Error(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Error()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Error(void) const
        {
            bool GetValue = (*Value())[ItemName_Error()];
            return (bool)GetValue;
        }
        bool Get_Error(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Error()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Error()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Mode (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Mode(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Mode()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Mode()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Mode(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Mode()))
                {
                    Construct_Mode();
                }
                if ((*Value()).hasMember(ItemName_Mode()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Mode()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Mode(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Mode()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Mode(void) const
        {
            return (*Value())[ItemName_Mode()];
        }
        bool Get_Mode(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Mode()]).valid())
                {
                    GetValue = (*Value())[ItemName_Mode()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace SetLEDStates
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_SETLEDSTATES)


//------------------------------------------------------------------------
// MaintenanceAPI::ConfigureTouch::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_CONFIGURETOUCH)
namespace ConfigureTouch
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Calibrate(void)
    {
        static std::string str("Calibrate");
        return str;
    }
public:
    static std::string const& ItemName_InputDevice(void)
    {
        static std::string str("InputDevice");
        return str;
    }
public:
    static std::string const& ItemName_EventList(void)
    {
        static std::string str("EventList");
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
        static std::string str("MaintenanceAPI.ConfigureTouch");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Calibrate();
            Construct_InputDevice();
            Construct_EventList();
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
            Construct_Calibrate();
            Construct_InputDevice();
            Construct_EventList();
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
            Initialize_Calibrate();
            Initialize_InputDevice();
            Initialize_EventList();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::ConfigureTouch");
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
// Item Calibrate (Type: "bool")
protected:
    void Construct_Calibrate(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Calibrate()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Calibrate()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Calibrate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Calibrate()))
                {
                    Construct_Calibrate();
                }
                if ((*Value()).hasMember(ItemName_Calibrate()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Calibrate()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Calibrate(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Calibrate()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Calibrate(void) const
        {
            bool GetValue = (*Value())[ItemName_Calibrate()];
            return (bool)GetValue;
        }
        bool Get_Calibrate(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Calibrate()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Calibrate()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item InputDevice (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_InputDevice(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_InputDevice()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_InputDevice()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_InputDevice(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_InputDevice()))
                {
                    Construct_InputDevice();
                }
                if ((*Value()).hasMember(ItemName_InputDevice()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_InputDevice()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_InputDevice(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_InputDevice()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_InputDevice(void) const
        {
            return (*Value())[ItemName_InputDevice()];
        }
        bool Get_InputDevice(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_InputDevice()]).valid())
                {
                    GetValue = (*Value())[ItemName_InputDevice()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item EventList (Type: "CTypeTouchEvent[0]")
    protected:
        void Construct_EventList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_EventList()))
                {
                    CTypeTouchEvent InitValue;
                    (*Value())[ItemName_EventList()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_EventList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_EventList()))
                {
                    Construct_EventList();
                }
                if ((*Value()).hasMember(ItemName_EventList()))
                {
                    CTypeTouchEvent InitValue;
                    (*Value())[ItemName_EventList()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_EventList(int NewSize)
        {
            try
            {
                CTypeTouchEvent InitValue;
                (*Value())[ItemName_EventList()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_EventList(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_EventList()))
                {
                    return (*Value())[ItemName_EventList()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_EventList(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_EventList()))
                {
                    (*Value())[ItemName_EventList()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_EventList(int ArrayIndex, CTypeTouchEvent SetValue)
        {
            try
            {
                (*Value())[ItemName_EventList()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_EventList(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_EventList()))
                {
                    (*Value())[ItemName_EventList()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_EventList(int ArrayIndex, const CTypeTouchEvent& SetValue)
        {
            try
            {
                (*Value())[ItemName_EventList()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_EventList()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CTypeTouchEvent Get_EventList(int ArrayIndex) const
        {
            return (*Value())[ItemName_EventList()][ArrayIndex];
        }
        bool Get_EventList(int ArrayIndex, CTypeTouchEvent& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_EventList()))
                {
                    if (((*Value())[ItemName_EventList()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_EventList()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace ConfigureTouch
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_CONFIGURETOUCH)


//------------------------------------------------------------------------
// MaintenanceAPI::GetFirmwareInfo::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_GETFIRMWAREINFO)
namespace GetFirmwareInfo
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_IsRelease(void)
    {
        static std::string str("IsRelease");
        return str;
    }
public:
    static std::string const& ItemName_Name(void)
    {
        static std::string str("Name");
        return str;
    }
public:
    static std::string const& ItemName_App(void)
    {
        static std::string str("App");
        return str;
    }
public:
    static std::string const& ItemName_FPGA(void)
    {
        static std::string str("FPGA");
        return str;
    }
public:
    static std::string const& ItemName_RTApp(void)
    {
        static std::string str("RTApp");
        return str;
    }
public:
    static std::string const& ItemName_RTArithmetic(void)
    {
        static std::string str("RTArithmetic");
        return str;
    }
public:
    static std::string const& ItemName_RTCAN(void)
    {
        static std::string str("RTCAN");
        return str;
    }
public:
    static std::string const& ItemName_PCIDrv(void)
    {
        static std::string str("PCIDrv");
        return str;
    }
public:
    static std::string const& ItemName_RTSysGbl(void)
    {
        static std::string str("RTSysGbl");
        return str;
    }
public:
    static std::string const& ItemName_RTDataSrv(void)
    {
        static std::string str("RTDataSrv");
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
        static std::string str("MaintenanceAPI.GetFirmwareInfo");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_IsRelease();
            Construct_Name();
            Construct_App();
            Construct_FPGA();
            Construct_RTApp();
            Construct_RTArithmetic();
            Construct_RTCAN();
            Construct_PCIDrv();
            Construct_RTSysGbl();
            Construct_RTDataSrv();
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
            Construct_IsRelease();
            Construct_Name();
            Construct_App();
            Construct_FPGA();
            Construct_RTApp();
            Construct_RTArithmetic();
            Construct_RTCAN();
            Construct_PCIDrv();
            Construct_RTSysGbl();
            Construct_RTDataSrv();
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
            Initialize_IsRelease();
            Initialize_Name();
            Initialize_App();
            Initialize_FPGA();
            Initialize_RTApp();
            Initialize_RTArithmetic();
            Initialize_RTCAN();
            Initialize_PCIDrv();
            Initialize_RTSysGbl();
            Initialize_RTDataSrv();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::GetFirmwareInfo");
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
// Item IsRelease (Type: "bool")
protected:
    void Construct_IsRelease(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_IsRelease()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_IsRelease()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_IsRelease(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IsRelease()))
                {
                    Construct_IsRelease();
                }
                if ((*Value()).hasMember(ItemName_IsRelease()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_IsRelease()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IsRelease(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_IsRelease()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_IsRelease(void) const
        {
            bool GetValue = (*Value())[ItemName_IsRelease()];
            return (bool)GetValue;
        }
        bool Get_IsRelease(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IsRelease()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_IsRelease()]));
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
    // Item App (Type: "std::string")
    protected:
        void Construct_App(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_App()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_App()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_App(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_App()))
                {
                    Construct_App();
                }
                if ((*Value()).hasMember(ItemName_App()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_App()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_App(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_App()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_App(void) const
        {
            return (*Value())[ItemName_App()];
        }
        bool Get_App(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_App()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_App()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item FPGA (Type: "std::string")
    protected:
        void Construct_FPGA(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FPGA()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FPGA()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_FPGA(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FPGA()))
                {
                    Construct_FPGA();
                }
                if ((*Value()).hasMember(ItemName_FPGA()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FPGA()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FPGA(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_FPGA()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_FPGA(void) const
        {
            return (*Value())[ItemName_FPGA()];
        }
        bool Get_FPGA(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FPGA()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_FPGA()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item RTApp (Type: "std::string")
    protected:
        void Construct_RTApp(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RTApp()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RTApp()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_RTApp(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RTApp()))
                {
                    Construct_RTApp();
                }
                if ((*Value()).hasMember(ItemName_RTApp()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RTApp()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RTApp(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_RTApp()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_RTApp(void) const
        {
            return (*Value())[ItemName_RTApp()];
        }
        bool Get_RTApp(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RTApp()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_RTApp()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item RTArithmetic (Type: "std::string")
    protected:
        void Construct_RTArithmetic(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RTArithmetic()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RTArithmetic()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_RTArithmetic(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RTArithmetic()))
                {
                    Construct_RTArithmetic();
                }
                if ((*Value()).hasMember(ItemName_RTArithmetic()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RTArithmetic()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RTArithmetic(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_RTArithmetic()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_RTArithmetic(void) const
        {
            return (*Value())[ItemName_RTArithmetic()];
        }
        bool Get_RTArithmetic(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RTArithmetic()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_RTArithmetic()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item RTCAN (Type: "std::string")
    protected:
        void Construct_RTCAN(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RTCAN()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RTCAN()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_RTCAN(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RTCAN()))
                {
                    Construct_RTCAN();
                }
                if ((*Value()).hasMember(ItemName_RTCAN()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RTCAN()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RTCAN(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_RTCAN()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_RTCAN(void) const
        {
            return (*Value())[ItemName_RTCAN()];
        }
        bool Get_RTCAN(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RTCAN()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_RTCAN()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item PCIDrv (Type: "std::string")
    protected:
        void Construct_PCIDrv(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PCIDrv()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_PCIDrv()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_PCIDrv(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PCIDrv()))
                {
                    Construct_PCIDrv();
                }
                if ((*Value()).hasMember(ItemName_PCIDrv()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_PCIDrv()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_PCIDrv(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_PCIDrv()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_PCIDrv(void) const
        {
            return (*Value())[ItemName_PCIDrv()];
        }
        bool Get_PCIDrv(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_PCIDrv()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_PCIDrv()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item RTSysGbl (Type: "std::string")
    protected:
        void Construct_RTSysGbl(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RTSysGbl()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RTSysGbl()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_RTSysGbl(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RTSysGbl()))
                {
                    Construct_RTSysGbl();
                }
                if ((*Value()).hasMember(ItemName_RTSysGbl()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RTSysGbl()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RTSysGbl(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_RTSysGbl()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_RTSysGbl(void) const
        {
            return (*Value())[ItemName_RTSysGbl()];
        }
        bool Get_RTSysGbl(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RTSysGbl()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_RTSysGbl()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item RTDataSrv (Type: "std::string")
    protected:
        void Construct_RTDataSrv(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RTDataSrv()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RTDataSrv()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_RTDataSrv(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RTDataSrv()))
                {
                    Construct_RTDataSrv();
                }
                if ((*Value()).hasMember(ItemName_RTDataSrv()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RTDataSrv()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RTDataSrv(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_RTDataSrv()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_RTDataSrv(void) const
        {
            return (*Value())[ItemName_RTDataSrv()];
        }
        bool Get_RTDataSrv(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RTDataSrv()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_RTDataSrv()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetFirmwareInfo
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_GETFIRMWAREINFO)


//------------------------------------------------------------------------
// MaintenanceAPI::GetSystemState::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_GETSYSTEMSTATE)
namespace GetSystemState
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_SystemStateName(void)
    {
        static std::string str("SystemStateName");
        return str;
    }
public:
    static std::string const& ItemName_StateID(void)
    {
        static std::string str("StateID");
        return str;
    }
public:
    static std::string const& ItemName_State(void)
    {
        static std::string str("State");
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
        static std::string str("MaintenanceAPI.GetSystemState");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_SystemStateName();
            Construct_StateID();
            Construct_State();
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
            Construct_SystemStateName();
            Construct_StateID();
            Construct_State();
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
            Initialize_SystemStateName();
            Initialize_StateID();
            Initialize_State();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::GetSystemState");
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
    // Item SystemStateName (Type: "std::string")
    protected:
        void Construct_SystemStateName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SystemStateName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SystemStateName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SystemStateName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SystemStateName()))
                {
                    Construct_SystemStateName();
                }
                if ((*Value()).hasMember(ItemName_SystemStateName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SystemStateName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SystemStateName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_SystemStateName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_SystemStateName(void) const
        {
            return (*Value())[ItemName_SystemStateName()];
        }
        bool Get_SystemStateName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SystemStateName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_SystemStateName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item StateID (Type: "enum TypeSystemState")
    protected:
        void Construct_StateID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StateID()))
                {
                    enum TypeSystemState InitValue;
                    InitValue = Init;
                    (*Value())[ItemName_StateID()] = (int)InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_StateID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StateID()))
                {
                    Construct_StateID();
                }
                if ((*Value()).hasMember(ItemName_StateID()))
                {
                    enum TypeSystemState InitValue;
                    InitValue = Init;
                    (*Value())[ItemName_StateID()] = (int)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StateID(enum TypeSystemState SetValue)
        {
            try
            {
                (*Value())[ItemName_StateID()] = (int)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        enum TypeSystemState Get_StateID(void) const
        {
            int GetValue = (*Value())[ItemName_StateID()];
            return (enum TypeSystemState)GetValue;
        }
        bool Get_StateID(enum TypeSystemState& GetValue) const
        {
            try
            {
                if ((*Value())[ItemName_StateID()].valid())
                {
                    GetValue = (enum TypeSystemState)((int)((*Value())[ItemName_StateID()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item State (Type: "GInsXmlRpcStdAPI::CGIns_Base_ElementValue")
    protected:
        void Construct_State(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_State()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
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
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_State()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_State(const GInsXmlRpcStdAPI::CGIns_Base_ElementValue& SetValue)
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
        GInsXmlRpcStdAPI::CGIns_Base_ElementValue Get_State(void) const
        {
            return (*Value())[ItemName_State()];
        }
        bool Get_State(GInsXmlRpcStdAPI::CGIns_Base_ElementValue& GetValue) const
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
} // namespace GetSystemState
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_GETSYSTEMSTATE)


//------------------------------------------------------------------------
// MaintenanceAPI::SetSystemState::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_SETSYSTEMSTATE)
namespace SetSystemState
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_GInsError(void)
    {
        static std::string str("GInsError");
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
        static std::string str("MaintenanceAPI.SetSystemState");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_GInsError();
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
            Construct_GInsError();
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
            Initialize_GInsError();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::SetSystemState");
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
// Item GInsError (Type: "int32_t")
protected:
    void Construct_GInsError(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_GInsError()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_GInsError()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_GInsError(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GInsError()))
                {
                    Construct_GInsError();
                }
                if ((*Value()).hasMember(ItemName_GInsError()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_GInsError()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_GInsError(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_GInsError()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_GInsError(void) const
        {
            int32_t GetValue = (*Value())[ItemName_GInsError()];
            return (int32_t)GetValue;
        }
        bool Get_GInsError(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_GInsError()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_GInsError()]));
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
} // namespace SetSystemState
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_SETSYSTEMSTATE)


//------------------------------------------------------------------------
// MaintenanceAPI::GetConfigurationState::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_GETCONFIGURATIONSTATE)
namespace GetConfigurationState
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ConfigurationStable(void)
    {
        static std::string str("ConfigurationStable");
        return str;
    }
public:
    static std::string const& ItemName_SlaveModules(void)
    {
        static std::string str("SlaveModules");
        return str;
    }
public:
    static std::string const& ItemName_GInsRet(void)
    {
        static std::string str("GInsRet");
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
        static std::string str("MaintenanceAPI.GetConfigurationState");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ConfigurationStable();
            Construct_SlaveModules();
            Construct_GInsRet();
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
            Construct_ConfigurationStable();
            Construct_SlaveModules();
            Construct_GInsRet();
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
            Initialize_ConfigurationStable();
            Initialize_SlaveModules();
            Initialize_GInsRet();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::GetConfigurationState");
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
// Item ConfigurationStable (Type: "bool")
protected:
    void Construct_ConfigurationStable(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ConfigurationStable()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_ConfigurationStable()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ConfigurationStable(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConfigurationStable()))
                {
                    Construct_ConfigurationStable();
                }
                if ((*Value()).hasMember(ItemName_ConfigurationStable()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_ConfigurationStable()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ConfigurationStable(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_ConfigurationStable()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_ConfigurationStable(void) const
        {
            bool GetValue = (*Value())[ItemName_ConfigurationStable()];
            return (bool)GetValue;
        }
        bool Get_ConfigurationStable(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ConfigurationStable()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_ConfigurationStable()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item SlaveModules (Type: "CTypeModuleInfo[0]")
    protected:
        void Construct_SlaveModules(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SlaveModules()))
                {
                    CTypeModuleInfo InitValue;
                    (*Value())[ItemName_SlaveModules()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_SlaveModules(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SlaveModules()))
                {
                    Construct_SlaveModules();
                }
                if ((*Value()).hasMember(ItemName_SlaveModules()))
                {
                    CTypeModuleInfo InitValue;
                    (*Value())[ItemName_SlaveModules()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_SlaveModules(int NewSize)
        {
            try
            {
                CTypeModuleInfo InitValue;
                (*Value())[ItemName_SlaveModules()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_SlaveModules(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_SlaveModules()))
                {
                    return (*Value())[ItemName_SlaveModules()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_SlaveModules(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_SlaveModules()))
                {
                    (*Value())[ItemName_SlaveModules()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_SlaveModules(int ArrayIndex, CTypeModuleInfo SetValue)
        {
            try
            {
                (*Value())[ItemName_SlaveModules()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_SlaveModules(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_SlaveModules()))
                {
                    (*Value())[ItemName_SlaveModules()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SlaveModules(int ArrayIndex, const CTypeModuleInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_SlaveModules()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_SlaveModules()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CTypeModuleInfo Get_SlaveModules(int ArrayIndex) const
        {
            return (*Value())[ItemName_SlaveModules()][ArrayIndex];
        }
        bool Get_SlaveModules(int ArrayIndex, CTypeModuleInfo& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_SlaveModules()))
                {
                    if (((*Value())[ItemName_SlaveModules()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_SlaveModules()][ArrayIndex];
                        return true;
                    }
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
} // namespace GetConfigurationState
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_GETCONFIGURATIONSTATE)


//------------------------------------------------------------------------
// MaintenanceAPI::TransferMaster2Slave::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_TRANSFERMASTER2SLAVE)
namespace TransferMaster2Slave
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
        static std::string str("MaintenanceAPI.TransferMaster2Slave");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_GInsRet();
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
            Construct_GInsRet();
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
            Initialize_GInsRet();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::TransferMaster2Slave");
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
} // namespace TransferMaster2Slave
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_TRANSFERMASTER2SLAVE)


//------------------------------------------------------------------------
// MaintenanceAPI::TransferSlave2Master::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_TRANSFERSLAVE2MASTER)
namespace TransferSlave2Master
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
        static std::string str("MaintenanceAPI.TransferSlave2Master");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_GInsRet();
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
            Construct_GInsRet();
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
            Initialize_GInsRet();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::TransferSlave2Master");
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
} // namespace TransferSlave2Master
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_TRANSFERSLAVE2MASTER)


//------------------------------------------------------------------------
// MaintenanceAPI::HandleConfigurationChange::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_HANDLECONFIGURATIONCHANGE)
namespace HandleConfigurationChange
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
        static std::string str("MaintenanceAPI.HandleConfigurationChange");
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
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::HandleConfigurationChange");
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
} // namespace HandleConfigurationChange
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_HANDLECONFIGURATIONCHANGE)


//------------------------------------------------------------------------
// MaintenanceAPI::PerformFPGAFWUpdate::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_PERFORMFPGAFWUPDATE)
namespace PerformFPGAFWUpdate
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
        static std::string str("MaintenanceAPI.PerformFPGAFWUpdate");
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
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::PerformFPGAFWUpdate");
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
} // namespace PerformFPGAFWUpdate
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_PERFORMFPGAFWUPDATE)


//------------------------------------------------------------------------
// MaintenanceAPI::ChangeHWParam::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_CHANGEHWPARAM)
namespace ChangeHWParam
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
        static std::string str("MaintenanceAPI.ChangeHWParam");
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
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::ChangeHWParam");
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
} // namespace ChangeHWParam
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_CHANGEHWPARAM)


//------------------------------------------------------------------------
// MaintenanceAPI::ChangePassword::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_CHANGEPASSWORD)
namespace ChangePassword
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
        static std::string str("MaintenanceAPI.ChangePassword");
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
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::ChangePassword");
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
} // namespace ChangePassword
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_CHANGEPASSWORD)


//------------------------------------------------------------------------
// MaintenanceAPI::LaunchProcess::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_LAUNCHPROCESS)
namespace LaunchProcess
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
        static std::string str("MaintenanceAPI.LaunchProcess");
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
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::LaunchProcess");
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
} // namespace LaunchProcess
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_LAUNCHPROCESS)


//------------------------------------------------------------------------
// MaintenanceAPI::KillProcess::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_KILLPROCESS)
namespace KillProcess
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
        static std::string str("MaintenanceAPI.KillProcess");
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
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::KillProcess");
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
} // namespace KillProcess
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_KILLPROCESS)


//------------------------------------------------------------------------
// MaintenanceAPI::GetProcessResponse::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_GETPROCESSRESPONSE)
namespace GetProcessResponse
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Output(void)
    {
        static std::string str("Output");
        return str;
    }
public:
    static std::string const& ItemName_Active(void)
    {
        static std::string str("Active");
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
        static std::string str("MaintenanceAPI.GetProcessResponse");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Output();
            Construct_Active();
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
            Construct_Output();
            Construct_Active();
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
            Initialize_Output();
            Initialize_Active();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::GetProcessResponse");
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
    // Item Output (Type: "std::string")
    protected:
        void Construct_Output(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Output()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Output()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Output(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Output()))
                {
                    Construct_Output();
                }
                if ((*Value()).hasMember(ItemName_Output()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Output()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Output(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Output()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Output(void) const
        {
            return (*Value())[ItemName_Output()];
        }
        bool Get_Output(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Output()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Output()]);
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
} // namespace GetProcessResponse
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_GETPROCESSRESPONSE)


//------------------------------------------------------------------------
// MaintenanceAPI::UpdateSystemBios::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_UPDATESYSTEMBIOS)
namespace UpdateSystemBios
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
        static std::string str("MaintenanceAPI.UpdateSystemBios");
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
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::UpdateSystemBios");
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
} // namespace UpdateSystemBios
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_UPDATESYSTEMBIOS)


//------------------------------------------------------------------------
// MaintenanceAPI::RestoreSystemBios::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_RESTORESYSTEMBIOS)
namespace RestoreSystemBios
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
        static std::string str("MaintenanceAPI.RestoreSystemBios");
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
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::RestoreSystemBios");
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
} // namespace RestoreSystemBios
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_RESTORESYSTEMBIOS)


//------------------------------------------------------------------------
// MaintenanceAPI::GenericCall::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_GENERICCALL)
namespace GenericCall
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_SResults(void)
    {
        static std::string str("SResults");
        return str;
    }
public:
    static std::string const& ItemName_FResults(void)
    {
        static std::string str("FResults");
        return str;
    }
public:
    static std::string const& ItemName_IResults(void)
    {
        static std::string str("IResults");
        return str;
    }
public:
    static std::string const& ItemName_Return(void)
    {
        static std::string str("Return");
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
        static std::string str("MaintenanceAPI.GenericCall");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_SResults();
            Construct_FResults();
            Construct_IResults();
            Construct_Return();
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
            Construct_SResults();
            Construct_FResults();
            Construct_IResults();
            Construct_Return();
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
            Initialize_SResults();
            Initialize_FResults();
            Initialize_IResults();
            Initialize_Return();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::GenericCall");
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
    // Item SResults (Type: "std::string[0]")
    protected:
        void Construct_SResults(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SResults()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SResults()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_SResults(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SResults()))
                {
                    Construct_SResults();
                }
                if ((*Value()).hasMember(ItemName_SResults()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SResults()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_SResults(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_SResults()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_SResults(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_SResults()))
                {
                    return (*Value())[ItemName_SResults()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_SResults(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_SResults()))
                {
                    (*Value())[ItemName_SResults()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_SResults(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_SResults()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_SResults(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_SResults()))
                {
                    (*Value())[ItemName_SResults()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SResults(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_SResults())
                {
                    SetSize_SResults(ArrayIndex + 1);
                }
                (*Value())[ItemName_SResults()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_SResults(int ArrayIndex) const
        {
            return (*Value())[ItemName_SResults()][ArrayIndex];
        }
        bool Get_SResults(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_SResults()))
                {
                    if (((*Value())[ItemName_SResults()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_SResults()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item FResults (Type: "double[0]")
    protected:
        void Construct_FResults(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FResults()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_FResults()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_FResults(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FResults()))
                {
                    Construct_FResults();
                }
                if ((*Value()).hasMember(ItemName_FResults()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_FResults()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_FResults(int NewSize)
        {
            try
            {
                double InitValue;
                InitValue = 0.0;
                (*Value())[ItemName_FResults()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch(...) {}
            return false;
        }
        int GetSize_FResults(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_FResults()))
                {
                    return (*Value())[ItemName_FResults()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_FResults(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_FResults()))
                {
                    (*Value())[ItemName_FResults()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_FResults(int ArrayIndex, double SetValue)
        {
            try
            {
                (*Value())[ItemName_FResults()].insertArrayValue(ArrayIndex,(double)SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_FResults(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_FResults()))
                {
                    (*Value())[ItemName_FResults()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FResults(int ArrayIndex, double SetValue)
        {
            try
            {
                (*Value())[ItemName_FResults()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_FResults()][ArrayIndex] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Set_FResults(const std::vector<double>& SetValue)
        {
            try
            {
                SetSize_FResults((int)SetValue.size());
                for (int ArrayIndex = 0; ArrayIndex < (int)SetValue.size(); ArrayIndex++)
                {
                    (*Value())[ItemName_FResults()][ArrayIndex] = (double)SetValue[ArrayIndex];
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_FResults(int ArrayIndex) const
        {
            double GetValue = (*Value())[ItemName_FResults()][ArrayIndex];
            return (double)GetValue;
        }
        bool Get_FResults(int ArrayIndex, double& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_FResults()))
                {
                    if (((*Value())[ItemName_FResults()][ArrayIndex]).valid())
                    {
                        GetValue = (double)((double)((*Value())[ItemName_FResults()][ArrayIndex]));
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item IResults (Type: "int64_t[0]")
    protected:
        void Construct_IResults(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IResults()))
                {
                    int64_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_IResults()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_IResults(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IResults()))
                {
                    Construct_IResults();
                }
                if ((*Value()).hasMember(ItemName_IResults()))
                {
                    int64_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_IResults()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_IResults(int NewSize)
        {
            try
            {
                int64_t InitValue;
                InitValue = 0;
                (*Value())[ItemName_IResults()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch(...) {}
            return false;
        }
        int GetSize_IResults(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_IResults()))
                {
                    return (*Value())[ItemName_IResults()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_IResults(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_IResults()))
                {
                    (*Value())[ItemName_IResults()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_IResults(int ArrayIndex, int64_t SetValue)
        {
            try
            {
                (*Value())[ItemName_IResults()].insertArrayValue(ArrayIndex,(int64_t)SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_IResults(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_IResults()))
                {
                    (*Value())[ItemName_IResults()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IResults(int ArrayIndex, int64_t SetValue)
        {
            try
            {
                (*Value())[ItemName_IResults()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_IResults()][ArrayIndex] = (int64_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Set_IResults(const std::vector<int64_t>& SetValue)
        {
            try
            {
                SetSize_IResults((int)SetValue.size());
                for (int ArrayIndex = 0; ArrayIndex < (int)SetValue.size(); ArrayIndex++)
                {
                    (*Value())[ItemName_IResults()][ArrayIndex] = (int64_t)SetValue[ArrayIndex];
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int64_t Get_IResults(int ArrayIndex) const
        {
            int64_t GetValue = (*Value())[ItemName_IResults()][ArrayIndex];
            return (int64_t)GetValue;
        }
        bool Get_IResults(int ArrayIndex, int64_t& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_IResults()))
                {
                    if (((*Value())[ItemName_IResults()][ArrayIndex]).valid())
                    {
                        GetValue = (int64_t)((int64_t)((*Value())[ItemName_IResults()][ArrayIndex]));
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Return (Type: "int32_t")
protected:
    void Construct_Return(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Return()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Return()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Return(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Return()))
                {
                    Construct_Return();
                }
                if ((*Value()).hasMember(ItemName_Return()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Return()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Return(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Return()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Return(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Return()];
            return (int32_t)GetValue;
        }
        bool Get_Return(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Return()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Return()]));
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
} // namespace GenericCall
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_GENERICCALL)


//------------------------------------------------------------------------
// MaintenanceAPI::EnableTestConCore::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_ENABLETESTCONCORE)
namespace EnableTestConCore
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
        static std::string str("MaintenanceAPI.EnableTestConCore");
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
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::EnableTestConCore");
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
} // namespace EnableTestConCore
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_ENABLETESTCONCORE)


//------------------------------------------------------------------------
// MaintenanceAPI::SetLEDStates::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_SETLEDSTATES)
namespace SetLEDStates
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
        static std::string str("MaintenanceAPI.SetLEDStates");
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
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::SetLEDStates");
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
} // namespace SetLEDStates
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_SETLEDSTATES)


//------------------------------------------------------------------------
// MaintenanceAPI::ConfigureTouch::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_MAINTENANCEAPI_CONFIGURETOUCH)
namespace ConfigureTouch
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_EventList(void)
    {
        static std::string str("EventList");
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
        static std::string str("MaintenanceAPI.ConfigureTouch");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_EventList();
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
            Construct_EventList();
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
            Initialize_EventList();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::ConfigureTouch");
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
    // Item EventList (Type: "CTypeTouchEvent[0]")
    protected:
        void Construct_EventList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_EventList()))
                {
                    CTypeTouchEvent InitValue;
                    (*Value())[ItemName_EventList()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_EventList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_EventList()))
                {
                    Construct_EventList();
                }
                if ((*Value()).hasMember(ItemName_EventList()))
                {
                    CTypeTouchEvent InitValue;
                    (*Value())[ItemName_EventList()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_EventList(int NewSize)
        {
            try
            {
                CTypeTouchEvent InitValue;
                (*Value())[ItemName_EventList()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_EventList(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_EventList()))
                {
                    return (*Value())[ItemName_EventList()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_EventList(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_EventList()))
                {
                    (*Value())[ItemName_EventList()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_EventList(int ArrayIndex, CTypeTouchEvent SetValue)
        {
            try
            {
                (*Value())[ItemName_EventList()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_EventList(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_EventList()))
                {
                    (*Value())[ItemName_EventList()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_EventList(int ArrayIndex, const CTypeTouchEvent& SetValue)
        {
            try
            {
                (*Value())[ItemName_EventList()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_EventList()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CTypeTouchEvent Get_EventList(int ArrayIndex) const
        {
            return (*Value())[ItemName_EventList()][ArrayIndex];
        }
        bool Get_EventList(int ArrayIndex, CTypeTouchEvent& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_EventList()))
                {
                    if (((*Value())[ItemName_EventList()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_EventList()][ArrayIndex];
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
} // namespace ConfigureTouch
#endif //#if defined(IMPLEMENT_MAINTENANCEAPI_CONFIGURETOUCH)
//========================================================================
}; // namespace MaintenanceAPI
//========================================================================
#endif // #if !defined(_MAINTENANCEAPI_TYPES_H)

