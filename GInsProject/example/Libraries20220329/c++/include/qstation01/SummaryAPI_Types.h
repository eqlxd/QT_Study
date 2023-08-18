//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_SUMMARYAPI_TYPES_H)
#define _SUMMARYAPI_TYPES_H
//========================================================================
// Implemented methods
#define IMPLEMENT_SUMMARYAPI_GETGLOBALSYSINFOS
#define IMPLEMENT_SUMMARYAPI_GETVARIABLES
#define IMPLEMENT_SUMMARYAPI_GETMODULES
#define IMPLEMENT_SUMMARYAPI_GETMODULEVARIABLES
#define IMPLEMENT_SUMMARYAPI_GETDATASOURCEINFOS


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "SummaryAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace SummaryAPI {
//========================================================================
//------------------------------------------------------------------------
// SummaryAPI::CAPIInfo
//------------------------------------------------------------------------
class CAPIInfo
{
public:
    static std::string const& Name(void)
    {
        static std::string str("SummaryAPI");
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
// SummaryAPI::TypeInterfaceType
//------------------------------------------------------------------------
enum TypeInterfaceType {
    ProcessImage = 0,
    ProcessBuffer = 1,
    PostProcessBuffer = 2,
    HighSpeedPortProcessImage = 3,
    HighSpeedPortProcessBuffer = 4,
    HighSpeedPortPostProcessBuffer = 5,
    HighSpeedPortTestConLogger = 6,
    SplittedDataFile = 7,
    CombinedDataFile = 8,
    LoggerFileArchive = 9,
}; // enum TypeInterfaceType


//------------------------------------------------------------------------
// SummaryAPI::CTypeModuleInfo
//------------------------------------------------------------------------
class CTypeModuleInfo : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_ModuleName(void)
        {
            static std::string str("ModuleName");
            return str;
        }
    public:
        static std::string const& ItemName_ID(void)
        {
            static std::string str("ID");
            return str;
        }
    public:
        static std::string const& ItemName_MID(void)
        {
            static std::string str("MID");
            return str;
        }
    public:
        static std::string const& ItemName_DeviceType(void)
        {
            static std::string str("DeviceType");
            return str;
        }
    public:
        static std::string const& ItemName_DeviceTypeCode(void)
        {
            static std::string str("DeviceTypeCode");
            return str;
        }
    public:
        static std::string const& ItemName_MainModuleType(void)
        {
            static std::string str("MainModuleType");
            return str;
        }
    public:
        static std::string const& ItemName_SubModuleType(void)
        {
            static std::string str("SubModuleType");
            return str;
        }
    public:
        static std::string const& ItemName_FunctionModuleType(void)
        {
            static std::string str("FunctionModuleType");
            return str;
        }
    public:
        static std::string const& ItemName_CasingModuleType(void)
        {
            static std::string str("CasingModuleType");
            return str;
        }
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
        static std::string const& ItemName_VariablesCount(void)
        {
            static std::string str("VariablesCount");
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
            Construct_ModuleName();
            Construct_ID();
            Construct_MID();
            Construct_DeviceType();
            Construct_DeviceTypeCode();
            Construct_MainModuleType();
            Construct_SubModuleType();
            Construct_FunctionModuleType();
            Construct_CasingModuleType();
            Construct_UARTIndex();
            Construct_Address();
            Construct_VariablesCount();
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
            Construct_ModuleName();
            Construct_ID();
            Construct_MID();
            Construct_DeviceType();
            Construct_DeviceTypeCode();
            Construct_MainModuleType();
            Construct_SubModuleType();
            Construct_FunctionModuleType();
            Construct_CasingModuleType();
            Construct_UARTIndex();
            Construct_Address();
            Construct_VariablesCount();
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
            Initialize_ModuleName();
            Initialize_ID();
            Initialize_MID();
            Initialize_DeviceType();
            Initialize_DeviceTypeCode();
            Initialize_MainModuleType();
            Initialize_SubModuleType();
            Initialize_FunctionModuleType();
            Initialize_CasingModuleType();
            Initialize_UARTIndex();
            Initialize_Address();
            Initialize_VariablesCount();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item ModuleName (Type: "std::string")
    protected:
        void Construct_ModuleName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ModuleName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ModuleName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ModuleName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ModuleName()))
                {
                    Construct_ModuleName();
                }
                if ((*Value()).hasMember(ItemName_ModuleName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ModuleName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ModuleName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ModuleName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ModuleName(void) const
        {
            return (*Value())[ItemName_ModuleName()];
        }
        bool Get_ModuleName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ModuleName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ModuleName()]);
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
    // Item MID (Type: "std::string")
    protected:
        void Construct_MID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MID()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_MID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MID()))
                {
                    Construct_MID();
                }
                if ((*Value()).hasMember(ItemName_MID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MID()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MID(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_MID()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_MID(void) const
        {
            return (*Value())[ItemName_MID()];
        }
        bool Get_MID(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MID()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_MID()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item DeviceType (Type: "std::string")
    protected:
        void Construct_DeviceType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceType()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DeviceType()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DeviceType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceType()))
                {
                    Construct_DeviceType();
                }
                if ((*Value()).hasMember(ItemName_DeviceType()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DeviceType()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DeviceType(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_DeviceType()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DeviceType(void) const
        {
            return (*Value())[ItemName_DeviceType()];
        }
        bool Get_DeviceType(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DeviceType()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DeviceType()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item DeviceTypeCode (Type: "std::string")
    protected:
        void Construct_DeviceTypeCode(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceTypeCode()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DeviceTypeCode()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DeviceTypeCode(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceTypeCode()))
                {
                    Construct_DeviceTypeCode();
                }
                if ((*Value()).hasMember(ItemName_DeviceTypeCode()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DeviceTypeCode()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DeviceTypeCode(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_DeviceTypeCode()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DeviceTypeCode(void) const
        {
            return (*Value())[ItemName_DeviceTypeCode()];
        }
        bool Get_DeviceTypeCode(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DeviceTypeCode()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DeviceTypeCode()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item MainModuleType (Type: "int32_t")
protected:
    void Construct_MainModuleType(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MainModuleType()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_MainModuleType()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_MainModuleType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MainModuleType()))
                {
                    Construct_MainModuleType();
                }
                if ((*Value()).hasMember(ItemName_MainModuleType()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_MainModuleType()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MainModuleType(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_MainModuleType()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_MainModuleType(void) const
        {
            int32_t GetValue = (*Value())[ItemName_MainModuleType()];
            return (int32_t)GetValue;
        }
        bool Get_MainModuleType(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MainModuleType()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_MainModuleType()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item SubModuleType (Type: "int32_t")
protected:
    void Construct_SubModuleType(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_SubModuleType()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_SubModuleType()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_SubModuleType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SubModuleType()))
                {
                    Construct_SubModuleType();
                }
                if ((*Value()).hasMember(ItemName_SubModuleType()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_SubModuleType()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SubModuleType(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_SubModuleType()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_SubModuleType(void) const
        {
            int32_t GetValue = (*Value())[ItemName_SubModuleType()];
            return (int32_t)GetValue;
        }
        bool Get_SubModuleType(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SubModuleType()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_SubModuleType()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item FunctionModuleType (Type: "int32_t")
protected:
    void Construct_FunctionModuleType(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_FunctionModuleType()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_FunctionModuleType()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_FunctionModuleType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FunctionModuleType()))
                {
                    Construct_FunctionModuleType();
                }
                if ((*Value()).hasMember(ItemName_FunctionModuleType()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_FunctionModuleType()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FunctionModuleType(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_FunctionModuleType()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_FunctionModuleType(void) const
        {
            int32_t GetValue = (*Value())[ItemName_FunctionModuleType()];
            return (int32_t)GetValue;
        }
        bool Get_FunctionModuleType(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FunctionModuleType()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_FunctionModuleType()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item CasingModuleType (Type: "int32_t")
protected:
    void Construct_CasingModuleType(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_CasingModuleType()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_CasingModuleType()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_CasingModuleType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CasingModuleType()))
                {
                    Construct_CasingModuleType();
                }
                if ((*Value()).hasMember(ItemName_CasingModuleType()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_CasingModuleType()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_CasingModuleType(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_CasingModuleType()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_CasingModuleType(void) const
        {
            int32_t GetValue = (*Value())[ItemName_CasingModuleType()];
            return (int32_t)GetValue;
        }
        bool Get_CasingModuleType(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_CasingModuleType()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_CasingModuleType()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
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
// Item VariablesCount (Type: "int32_t")
protected:
    void Construct_VariablesCount(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_VariablesCount()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_VariablesCount()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_VariablesCount(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_VariablesCount()))
                {
                    Construct_VariablesCount();
                }
                if ((*Value()).hasMember(ItemName_VariablesCount()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_VariablesCount()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_VariablesCount(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_VariablesCount()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_VariablesCount(void) const
        {
            int32_t GetValue = (*Value())[ItemName_VariablesCount()];
            return (int32_t)GetValue;
        }
        bool Get_VariablesCount(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_VariablesCount()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_VariablesCount()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CTypeModuleInfo


//------------------------------------------------------------------------
// SummaryAPI::CTypeVariableInfo
//------------------------------------------------------------------------
class CTypeVariableInfo : public GInsXmlRpc::XmlRpcValue
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
        static std::string const& ItemName_MID(void)
        {
            static std::string str("MID");
            return str;
        }
    public:
        static std::string const& ItemName_VariableType(void)
        {
            static std::string str("VariableType");
            return str;
        }
    public:
        static std::string const& ItemName_DataType(void)
        {
            static std::string str("DataType");
            return str;
        }
    public:
        static std::string const& ItemName_DataTypeCode(void)
        {
            static std::string str("DataTypeCode");
            return str;
        }
    public:
        static std::string const& ItemName_Format(void)
        {
            static std::string str("Format");
            return str;
        }
    public:
        static std::string const& ItemName_Unit(void)
        {
            static std::string str("Unit");
            return str;
        }
    public:
        static std::string const& ItemName_AccessIndex(void)
        {
            static std::string str("AccessIndex");
            return str;
        }
    public:
        static std::string const& ItemName_IsInput(void)
        {
            static std::string str("IsInput");
            return str;
        }
    public:
        static std::string const& ItemName_IsOutput(void)
        {
            static std::string str("IsOutput");
            return str;
        }
    public:
        static std::string const& ItemName_InputIndex(void)
        {
            static std::string str("InputIndex");
            return str;
        }
    public:
        static std::string const& ItemName_OutputIndex(void)
        {
            static std::string str("OutputIndex");
            return str;
        }
    public:
        static std::string const& ItemName_InputByteOffset(void)
        {
            static std::string str("InputByteOffset");
            return str;
        }
    public:
        static std::string const& ItemName_OutputByteOffset(void)
        {
            static std::string str("OutputByteOffset");
            return str;
        }
    public:
        static std::string const& ItemName_DataRate(void)
        {
            static std::string str("DataRate");
            return str;
        }
    public:
        static std::string const& ItemName_RangeMin(void)
        {
            static std::string str("RangeMin");
            return str;
        }
    public:
        static std::string const& ItemName_RangeMax(void)
        {
            static std::string str("RangeMax");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("TypeVariableInfo");
        return str;
    }
public:
    CTypeVariableInfo(void)
    {
        try
        {
            Construct_Name();
            Construct_ID();
            Construct_MID();
            Construct_VariableType();
            Construct_DataType();
            Construct_DataTypeCode();
            Construct_Format();
            Construct_Unit();
            Construct_AccessIndex();
            Construct_IsInput();
            Construct_IsOutput();
            Construct_InputIndex();
            Construct_OutputIndex();
            Construct_InputByteOffset();
            Construct_OutputByteOffset();
            Construct_DataRate();
            Construct_RangeMin();
            Construct_RangeMax();
            }
        catch (...) {}
    }
    CTypeVariableInfo(const CTypeVariableInfo& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        }
    CTypeVariableInfo(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_ID();
            Construct_MID();
            Construct_VariableType();
            Construct_DataType();
            Construct_DataTypeCode();
            Construct_Format();
            Construct_Unit();
            Construct_AccessIndex();
            Construct_IsInput();
            Construct_IsOutput();
            Construct_InputIndex();
            Construct_OutputIndex();
            Construct_InputByteOffset();
            Construct_OutputByteOffset();
            Construct_DataRate();
            Construct_RangeMin();
            Construct_RangeMax();
            }
        catch (...) {}
    }
public:
    ~CTypeVariableInfo(void)
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
            Initialize_MID();
            Initialize_VariableType();
            Initialize_DataType();
            Initialize_DataTypeCode();
            Initialize_Format();
            Initialize_Unit();
            Initialize_AccessIndex();
            Initialize_IsInput();
            Initialize_IsOutput();
            Initialize_InputIndex();
            Initialize_OutputIndex();
            Initialize_InputByteOffset();
            Initialize_OutputByteOffset();
            Initialize_DataRate();
            Initialize_RangeMin();
            Initialize_RangeMax();
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
    // Item MID (Type: "std::string")
    protected:
        void Construct_MID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MID()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_MID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MID()))
                {
                    Construct_MID();
                }
                if ((*Value()).hasMember(ItemName_MID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MID()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MID(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_MID()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_MID(void) const
        {
            return (*Value())[ItemName_MID()];
        }
        bool Get_MID(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MID()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_MID()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item VariableType (Type: "std::string")
    protected:
        void Construct_VariableType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_VariableType()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_VariableType()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_VariableType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_VariableType()))
                {
                    Construct_VariableType();
                }
                if ((*Value()).hasMember(ItemName_VariableType()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_VariableType()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_VariableType(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_VariableType()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_VariableType(void) const
        {
            return (*Value())[ItemName_VariableType()];
        }
        bool Get_VariableType(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_VariableType()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_VariableType()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item DataType (Type: "std::string")
    protected:
        void Construct_DataType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataType()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DataType()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DataType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataType()))
                {
                    Construct_DataType();
                }
                if ((*Value()).hasMember(ItemName_DataType()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DataType()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DataType(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_DataType()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DataType(void) const
        {
            return (*Value())[ItemName_DataType()];
        }
        bool Get_DataType(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DataType()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DataType()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item DataTypeCode (Type: "int32_t")
protected:
    void Construct_DataTypeCode(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_DataTypeCode()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_DataTypeCode()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_DataTypeCode(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataTypeCode()))
                {
                    Construct_DataTypeCode();
                }
                if ((*Value()).hasMember(ItemName_DataTypeCode()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_DataTypeCode()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DataTypeCode(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_DataTypeCode()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_DataTypeCode(void) const
        {
            int32_t GetValue = (*Value())[ItemName_DataTypeCode()];
            return (int32_t)GetValue;
        }
        bool Get_DataTypeCode(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DataTypeCode()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_DataTypeCode()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Format (Type: "std::string")
    protected:
        void Construct_Format(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Format()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Format()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Format(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Format()))
                {
                    Construct_Format();
                }
                if ((*Value()).hasMember(ItemName_Format()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Format()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Format(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Format()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Format(void) const
        {
            return (*Value())[ItemName_Format()];
        }
        bool Get_Format(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Format()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Format()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Unit (Type: "std::string")
    protected:
        void Construct_Unit(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Unit()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Unit()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Unit(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Unit()))
                {
                    Construct_Unit();
                }
                if ((*Value()).hasMember(ItemName_Unit()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Unit()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Unit(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Unit()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Unit(void) const
        {
            return (*Value())[ItemName_Unit()];
        }
        bool Get_Unit(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Unit()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Unit()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item AccessIndex (Type: "int32_t")
protected:
    void Construct_AccessIndex(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_AccessIndex()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_AccessIndex()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_AccessIndex(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_AccessIndex()))
                {
                    Construct_AccessIndex();
                }
                if ((*Value()).hasMember(ItemName_AccessIndex()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_AccessIndex()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_AccessIndex(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_AccessIndex()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_AccessIndex(void) const
        {
            int32_t GetValue = (*Value())[ItemName_AccessIndex()];
            return (int32_t)GetValue;
        }
        bool Get_AccessIndex(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_AccessIndex()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_AccessIndex()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item IsInput (Type: "int32_t")
protected:
    void Construct_IsInput(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_IsInput()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_IsInput()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_IsInput(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IsInput()))
                {
                    Construct_IsInput();
                }
                if ((*Value()).hasMember(ItemName_IsInput()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_IsInput()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IsInput(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_IsInput()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_IsInput(void) const
        {
            int32_t GetValue = (*Value())[ItemName_IsInput()];
            return (int32_t)GetValue;
        }
        bool Get_IsInput(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IsInput()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_IsInput()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item IsOutput (Type: "int32_t")
protected:
    void Construct_IsOutput(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_IsOutput()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_IsOutput()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_IsOutput(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IsOutput()))
                {
                    Construct_IsOutput();
                }
                if ((*Value()).hasMember(ItemName_IsOutput()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_IsOutput()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IsOutput(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_IsOutput()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_IsOutput(void) const
        {
            int32_t GetValue = (*Value())[ItemName_IsOutput()];
            return (int32_t)GetValue;
        }
        bool Get_IsOutput(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IsOutput()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_IsOutput()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item InputIndex (Type: "int32_t")
protected:
    void Construct_InputIndex(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_InputIndex()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_InputIndex()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_InputIndex(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_InputIndex()))
                {
                    Construct_InputIndex();
                }
                if ((*Value()).hasMember(ItemName_InputIndex()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_InputIndex()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_InputIndex(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_InputIndex()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_InputIndex(void) const
        {
            int32_t GetValue = (*Value())[ItemName_InputIndex()];
            return (int32_t)GetValue;
        }
        bool Get_InputIndex(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_InputIndex()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_InputIndex()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item OutputIndex (Type: "int32_t")
protected:
    void Construct_OutputIndex(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_OutputIndex()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_OutputIndex()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_OutputIndex(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_OutputIndex()))
                {
                    Construct_OutputIndex();
                }
                if ((*Value()).hasMember(ItemName_OutputIndex()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_OutputIndex()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_OutputIndex(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_OutputIndex()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_OutputIndex(void) const
        {
            int32_t GetValue = (*Value())[ItemName_OutputIndex()];
            return (int32_t)GetValue;
        }
        bool Get_OutputIndex(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_OutputIndex()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_OutputIndex()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item InputByteOffset (Type: "int32_t")
protected:
    void Construct_InputByteOffset(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_InputByteOffset()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_InputByteOffset()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_InputByteOffset(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_InputByteOffset()))
                {
                    Construct_InputByteOffset();
                }
                if ((*Value()).hasMember(ItemName_InputByteOffset()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_InputByteOffset()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_InputByteOffset(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_InputByteOffset()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_InputByteOffset(void) const
        {
            int32_t GetValue = (*Value())[ItemName_InputByteOffset()];
            return (int32_t)GetValue;
        }
        bool Get_InputByteOffset(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_InputByteOffset()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_InputByteOffset()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item OutputByteOffset (Type: "int32_t")
protected:
    void Construct_OutputByteOffset(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_OutputByteOffset()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_OutputByteOffset()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_OutputByteOffset(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_OutputByteOffset()))
                {
                    Construct_OutputByteOffset();
                }
                if ((*Value()).hasMember(ItemName_OutputByteOffset()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_OutputByteOffset()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_OutputByteOffset(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_OutputByteOffset()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_OutputByteOffset(void) const
        {
            int32_t GetValue = (*Value())[ItemName_OutputByteOffset()];
            return (int32_t)GetValue;
        }
        bool Get_OutputByteOffset(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_OutputByteOffset()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_OutputByteOffset()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item DataRate (Type: "int32_t")
protected:
    void Construct_DataRate(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_DataRate()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_DataRate()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_DataRate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataRate()))
                {
                    Construct_DataRate();
                }
                if ((*Value()).hasMember(ItemName_DataRate()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_DataRate()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DataRate(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_DataRate()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_DataRate(void) const
        {
            int32_t GetValue = (*Value())[ItemName_DataRate()];
            return (int32_t)GetValue;
        }
        bool Get_DataRate(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DataRate()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_DataRate()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item RangeMin (Type: "double")
protected:
    void Construct_RangeMin(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_RangeMin()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_RangeMin()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_RangeMin(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RangeMin()))
                {
                    Construct_RangeMin();
                }
                if ((*Value()).hasMember(ItemName_RangeMin()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_RangeMin()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RangeMin(double SetValue)
        {
            try
            {
                (*Value())[ItemName_RangeMin()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_RangeMin(void) const
        {
            double GetValue = (*Value())[ItemName_RangeMin()];
            return (double)GetValue;
        }
        bool Get_RangeMin(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RangeMin()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_RangeMin()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item RangeMax (Type: "double")
protected:
    void Construct_RangeMax(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_RangeMax()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_RangeMax()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_RangeMax(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RangeMax()))
                {
                    Construct_RangeMax();
                }
                if ((*Value()).hasMember(ItemName_RangeMax()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_RangeMax()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RangeMax(double SetValue)
        {
            try
            {
                (*Value())[ItemName_RangeMax()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_RangeMax(void) const
        {
            double GetValue = (*Value())[ItemName_RangeMax()];
            return (double)GetValue;
        }
        bool Get_RangeMax(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RangeMax()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_RangeMax()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CTypeVariableInfo


//------------------------------------------------------------------------
// SummaryAPI::CTypeLocationDetails
//------------------------------------------------------------------------
class CTypeLocationDetails : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_SiteName(void)
        {
            static std::string str("SiteName");
            return str;
        }
    public:
        static std::string const& ItemName_Continent(void)
        {
            static std::string str("Continent");
            return str;
        }
    public:
        static std::string const& ItemName_Street(void)
        {
            static std::string str("Street");
            return str;
        }
    public:
        static std::string const& ItemName_City(void)
        {
            static std::string str("City");
            return str;
        }
    public:
        static std::string const& ItemName_Province(void)
        {
            static std::string str("Province");
            return str;
        }
    public:
        static std::string const& ItemName_PostCode(void)
        {
            static std::string str("PostCode");
            return str;
        }
    public:
        static std::string const& ItemName_Country(void)
        {
            static std::string str("Country");
            return str;
        }
    public:
        static std::string const& ItemName_Latitude(void)
        {
            static std::string str("Latitude");
            return str;
        }
    public:
        static std::string const& ItemName_Longitude(void)
        {
            static std::string str("Longitude");
            return str;
        }
    public:
        static std::string const& ItemName_Altitude(void)
        {
            static std::string str("Altitude");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("TypeLocationDetails");
        return str;
    }
public:
    CTypeLocationDetails(void)
    {
        try
        {
            Construct_SiteName();
            Construct_Continent();
            Construct_Street();
            Construct_City();
            Construct_Province();
            Construct_PostCode();
            Construct_Country();
            Construct_Latitude();
            Construct_Longitude();
            Construct_Altitude();
            }
        catch (...) {}
    }
    CTypeLocationDetails(const CTypeLocationDetails& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        }
    CTypeLocationDetails(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_SiteName();
            Construct_Continent();
            Construct_Street();
            Construct_City();
            Construct_Province();
            Construct_PostCode();
            Construct_Country();
            Construct_Latitude();
            Construct_Longitude();
            Construct_Altitude();
            }
        catch (...) {}
    }
public:
    ~CTypeLocationDetails(void)
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
            Initialize_SiteName();
            Initialize_Continent();
            Initialize_Street();
            Initialize_City();
            Initialize_Province();
            Initialize_PostCode();
            Initialize_Country();
            Initialize_Latitude();
            Initialize_Longitude();
            Initialize_Altitude();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item SiteName (Type: "std::string")
    protected:
        void Construct_SiteName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SiteName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SiteName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SiteName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SiteName()))
                {
                    Construct_SiteName();
                }
                if ((*Value()).hasMember(ItemName_SiteName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SiteName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SiteName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_SiteName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_SiteName(void) const
        {
            return (*Value())[ItemName_SiteName()];
        }
        bool Get_SiteName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SiteName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_SiteName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Continent (Type: "std::string")
    protected:
        void Construct_Continent(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Continent()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Continent()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Continent(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Continent()))
                {
                    Construct_Continent();
                }
                if ((*Value()).hasMember(ItemName_Continent()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Continent()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Continent(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Continent()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Continent(void) const
        {
            return (*Value())[ItemName_Continent()];
        }
        bool Get_Continent(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Continent()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Continent()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Street (Type: "std::string")
    protected:
        void Construct_Street(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Street()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Street()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Street(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Street()))
                {
                    Construct_Street();
                }
                if ((*Value()).hasMember(ItemName_Street()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Street()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Street(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Street()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Street(void) const
        {
            return (*Value())[ItemName_Street()];
        }
        bool Get_Street(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Street()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Street()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item City (Type: "std::string")
    protected:
        void Construct_City(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_City()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_City()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_City(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_City()))
                {
                    Construct_City();
                }
                if ((*Value()).hasMember(ItemName_City()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_City()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_City(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_City()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_City(void) const
        {
            return (*Value())[ItemName_City()];
        }
        bool Get_City(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_City()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_City()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Province (Type: "std::string")
    protected:
        void Construct_Province(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Province()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Province()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Province(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Province()))
                {
                    Construct_Province();
                }
                if ((*Value()).hasMember(ItemName_Province()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Province()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Province(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Province()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Province(void) const
        {
            return (*Value())[ItemName_Province()];
        }
        bool Get_Province(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Province()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Province()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item PostCode (Type: "std::string")
    protected:
        void Construct_PostCode(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PostCode()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_PostCode()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_PostCode(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PostCode()))
                {
                    Construct_PostCode();
                }
                if ((*Value()).hasMember(ItemName_PostCode()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_PostCode()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_PostCode(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_PostCode()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_PostCode(void) const
        {
            return (*Value())[ItemName_PostCode()];
        }
        bool Get_PostCode(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_PostCode()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_PostCode()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Country (Type: "std::string")
    protected:
        void Construct_Country(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Country()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Country()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Country(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Country()))
                {
                    Construct_Country();
                }
                if ((*Value()).hasMember(ItemName_Country()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Country()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Country(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Country()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Country(void) const
        {
            return (*Value())[ItemName_Country()];
        }
        bool Get_Country(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Country()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Country()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Latitude (Type: "double")
protected:
    void Construct_Latitude(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Latitude()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_Latitude()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Latitude(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Latitude()))
                {
                    Construct_Latitude();
                }
                if ((*Value()).hasMember(ItemName_Latitude()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_Latitude()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Latitude(double SetValue)
        {
            try
            {
                (*Value())[ItemName_Latitude()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_Latitude(void) const
        {
            double GetValue = (*Value())[ItemName_Latitude()];
            return (double)GetValue;
        }
        bool Get_Latitude(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Latitude()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_Latitude()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Longitude (Type: "double")
protected:
    void Construct_Longitude(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Longitude()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_Longitude()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Longitude(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Longitude()))
                {
                    Construct_Longitude();
                }
                if ((*Value()).hasMember(ItemName_Longitude()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_Longitude()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Longitude(double SetValue)
        {
            try
            {
                (*Value())[ItemName_Longitude()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_Longitude(void) const
        {
            double GetValue = (*Value())[ItemName_Longitude()];
            return (double)GetValue;
        }
        bool Get_Longitude(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Longitude()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_Longitude()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Altitude (Type: "double")
protected:
    void Construct_Altitude(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Altitude()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_Altitude()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Altitude(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Altitude()))
                {
                    Construct_Altitude();
                }
                if ((*Value()).hasMember(ItemName_Altitude()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_Altitude()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Altitude(double SetValue)
        {
            try
            {
                (*Value())[ItemName_Altitude()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_Altitude(void) const
        {
            double GetValue = (*Value())[ItemName_Altitude()];
            return (double)GetValue;
        }
        bool Get_Altitude(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Altitude()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_Altitude()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CTypeLocationDetails


//------------------------------------------------------------------------
// SummaryAPI::GetVariables::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_SUMMARYAPI_GETVARIABLES)
namespace GetVariables
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_VariableIndex(void)
    {
        static std::string str("VariableIndex");
        return str;
    }
public:
    static std::string const& ItemName_InterfaceType(void)
    {
        static std::string str("InterfaceType");
        return str;
    }
public:
    static std::string const& ItemName_Index(void)
    {
        static std::string str("Index");
        return str;
    }
public:
    static std::string const& ItemName_Name0(void)
    {
        static std::string str("Name0");
        return str;
    }
public:
    static std::string const& ItemName_Name1(void)
    {
        static std::string str("Name1");
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
        static std::string str("SummaryAPI.GetVariables");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_VariableIndex();
            Construct_InterfaceType();
            Construct_Index();
            Construct_Name0();
            Construct_Name1();
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
            Construct_VariableIndex();
            Construct_InterfaceType();
            Construct_Index();
            Construct_Name0();
            Construct_Name1();
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
            Initialize_VariableIndex();
            Initialize_InterfaceType();
            Initialize_Index();
            Initialize_Name0();
            Initialize_Name1();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SummaryAPI::GetVariables");
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
// Item VariableIndex (Type: "int32_t")
protected:
    void Construct_VariableIndex(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_VariableIndex()))
            {
                int32_t InitValue;
                InitValue = -1;
                    (*Value())[ItemName_VariableIndex()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_VariableIndex(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_VariableIndex()))
                {
                    Construct_VariableIndex();
                }
                if ((*Value()).hasMember(ItemName_VariableIndex()))
                {
                    int32_t InitValue;
                    InitValue = -1;
                    (*Value())[ItemName_VariableIndex()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_VariableIndex(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_VariableIndex()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_VariableIndex(void) const
        {
            int32_t GetValue = (*Value())[ItemName_VariableIndex()];
            return (int32_t)GetValue;
        }
        bool Get_VariableIndex(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_VariableIndex()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_VariableIndex()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item InterfaceType (Type: "enum TypeInterfaceType")
    protected:
        void Construct_InterfaceType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_InterfaceType()))
                {
                    enum TypeInterfaceType InitValue;
                    InitValue = ProcessImage;
                    (*Value())[ItemName_InterfaceType()] = (int)InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_InterfaceType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_InterfaceType()))
                {
                    Construct_InterfaceType();
                }
                if ((*Value()).hasMember(ItemName_InterfaceType()))
                {
                    enum TypeInterfaceType InitValue;
                    InitValue = ProcessImage;
                    (*Value())[ItemName_InterfaceType()] = (int)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_InterfaceType(enum TypeInterfaceType SetValue)
        {
            try
            {
                (*Value())[ItemName_InterfaceType()] = (int)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        enum TypeInterfaceType Get_InterfaceType(void) const
        {
            int GetValue = (*Value())[ItemName_InterfaceType()];
            return (enum TypeInterfaceType)GetValue;
        }
        bool Get_InterfaceType(enum TypeInterfaceType& GetValue) const
        {
            try
            {
                if ((*Value())[ItemName_InterfaceType()].valid())
                {
                    GetValue = (enum TypeInterfaceType)((int)((*Value())[ItemName_InterfaceType()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
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
    // Item Name0 (Type: "std::string")
    protected:
        void Construct_Name0(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Name0()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Name0()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Name0(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Name0()))
                {
                    Construct_Name0();
                }
                if ((*Value()).hasMember(ItemName_Name0()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Name0()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Name0(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Name0()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Name0(void) const
        {
            return (*Value())[ItemName_Name0()];
        }
        bool Get_Name0(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Name0()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Name0()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Name1 (Type: "std::string")
    protected:
        void Construct_Name1(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Name1()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Name1()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Name1(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Name1()))
                {
                    Construct_Name1();
                }
                if ((*Value()).hasMember(ItemName_Name1()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Name1()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Name1(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Name1()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Name1(void) const
        {
            return (*Value())[ItemName_Name1()];
        }
        bool Get_Name1(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Name1()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Name1()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GetVariables
#endif //#if defined(IMPLEMENT_SUMMARYAPI_GETVARIABLES)


//------------------------------------------------------------------------
// SummaryAPI::GetModules::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_SUMMARYAPI_GETMODULES)
namespace GetModules
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ModuleIndex(void)
    {
        static std::string str("ModuleIndex");
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
        static std::string str("SummaryAPI.GetModules");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ModuleIndex();
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
            Construct_ModuleIndex();
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
            Initialize_ModuleIndex();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SummaryAPI::GetModules");
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
// Item ModuleIndex (Type: "int32_t")
protected:
    void Construct_ModuleIndex(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ModuleIndex()))
            {
                int32_t InitValue;
                InitValue = -1;
                    (*Value())[ItemName_ModuleIndex()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ModuleIndex(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ModuleIndex()))
                {
                    Construct_ModuleIndex();
                }
                if ((*Value()).hasMember(ItemName_ModuleIndex()))
                {
                    int32_t InitValue;
                    InitValue = -1;
                    (*Value())[ItemName_ModuleIndex()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ModuleIndex(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_ModuleIndex()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_ModuleIndex(void) const
        {
            int32_t GetValue = (*Value())[ItemName_ModuleIndex()];
            return (int32_t)GetValue;
        }
        bool Get_ModuleIndex(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ModuleIndex()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_ModuleIndex()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GetModules
#endif //#if defined(IMPLEMENT_SUMMARYAPI_GETMODULES)


//------------------------------------------------------------------------
// SummaryAPI::GetModuleVariables::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_SUMMARYAPI_GETMODULEVARIABLES)
namespace GetModuleVariables
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ModuleIndex(void)
    {
        static std::string str("ModuleIndex");
        return str;
    }
public:
    static std::string const& ItemName_VariableIndex(void)
    {
        static std::string str("VariableIndex");
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
        static std::string str("SummaryAPI.GetModuleVariables");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ModuleIndex();
            Construct_VariableIndex();
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
            Construct_ModuleIndex();
            Construct_VariableIndex();
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
            Initialize_ModuleIndex();
            Initialize_VariableIndex();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SummaryAPI::GetModuleVariables");
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
// Item ModuleIndex (Type: "int32_t")
protected:
    void Construct_ModuleIndex(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ModuleIndex()))
            {
                int32_t InitValue;
                InitValue = -1;
                    (*Value())[ItemName_ModuleIndex()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ModuleIndex(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ModuleIndex()))
                {
                    Construct_ModuleIndex();
                }
                if ((*Value()).hasMember(ItemName_ModuleIndex()))
                {
                    int32_t InitValue;
                    InitValue = -1;
                    (*Value())[ItemName_ModuleIndex()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ModuleIndex(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_ModuleIndex()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_ModuleIndex(void) const
        {
            int32_t GetValue = (*Value())[ItemName_ModuleIndex()];
            return (int32_t)GetValue;
        }
        bool Get_ModuleIndex(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ModuleIndex()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_ModuleIndex()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item VariableIndex (Type: "int32_t")
protected:
    void Construct_VariableIndex(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_VariableIndex()))
            {
                int32_t InitValue;
                InitValue = -1;
                    (*Value())[ItemName_VariableIndex()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_VariableIndex(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_VariableIndex()))
                {
                    Construct_VariableIndex();
                }
                if ((*Value()).hasMember(ItemName_VariableIndex()))
                {
                    int32_t InitValue;
                    InitValue = -1;
                    (*Value())[ItemName_VariableIndex()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_VariableIndex(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_VariableIndex()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_VariableIndex(void) const
        {
            int32_t GetValue = (*Value())[ItemName_VariableIndex()];
            return (int32_t)GetValue;
        }
        bool Get_VariableIndex(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_VariableIndex()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_VariableIndex()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GetModuleVariables
#endif //#if defined(IMPLEMENT_SUMMARYAPI_GETMODULEVARIABLES)


//------------------------------------------------------------------------
// SummaryAPI::GetDataSourceInfos::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_SUMMARYAPI_GETDATASOURCEINFOS)
namespace GetDataSourceInfos
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Index(void)
    {
        static std::string str("Index");
        return str;
    }
public:
    static std::string const& ItemName_InterfaceType(void)
    {
        static std::string str("InterfaceType");
        return str;
    }
public:
    static std::string const& ItemName_Name0(void)
    {
        static std::string str("Name0");
        return str;
    }
public:
    static std::string const& ItemName_Name1(void)
    {
        static std::string str("Name1");
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
        static std::string str("SummaryAPI.GetDataSourceInfos");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Index();
            Construct_InterfaceType();
            Construct_Name0();
            Construct_Name1();
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
            Construct_Index();
            Construct_InterfaceType();
            Construct_Name0();
            Construct_Name1();
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
            Initialize_Index();
            Initialize_InterfaceType();
            Initialize_Name0();
            Initialize_Name1();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SummaryAPI::GetDataSourceInfos");
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
    // Item InterfaceType (Type: "enum TypeInterfaceType")
    protected:
        void Construct_InterfaceType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_InterfaceType()))
                {
                    enum TypeInterfaceType InitValue;
                    InitValue = ProcessBuffer;
                    (*Value())[ItemName_InterfaceType()] = (int)InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_InterfaceType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_InterfaceType()))
                {
                    Construct_InterfaceType();
                }
                if ((*Value()).hasMember(ItemName_InterfaceType()))
                {
                    enum TypeInterfaceType InitValue;
                    InitValue = ProcessBuffer;
                    (*Value())[ItemName_InterfaceType()] = (int)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_InterfaceType(enum TypeInterfaceType SetValue)
        {
            try
            {
                (*Value())[ItemName_InterfaceType()] = (int)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        enum TypeInterfaceType Get_InterfaceType(void) const
        {
            int GetValue = (*Value())[ItemName_InterfaceType()];
            return (enum TypeInterfaceType)GetValue;
        }
        bool Get_InterfaceType(enum TypeInterfaceType& GetValue) const
        {
            try
            {
                if ((*Value())[ItemName_InterfaceType()].valid())
                {
                    GetValue = (enum TypeInterfaceType)((int)((*Value())[ItemName_InterfaceType()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Name0 (Type: "std::string")
    protected:
        void Construct_Name0(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Name0()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Name0()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Name0(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Name0()))
                {
                    Construct_Name0();
                }
                if ((*Value()).hasMember(ItemName_Name0()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Name0()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Name0(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Name0()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Name0(void) const
        {
            return (*Value())[ItemName_Name0()];
        }
        bool Get_Name0(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Name0()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Name0()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Name1 (Type: "std::string")
    protected:
        void Construct_Name1(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Name1()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Name1()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Name1(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Name1()))
                {
                    Construct_Name1();
                }
                if ((*Value()).hasMember(ItemName_Name1()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Name1()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Name1(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Name1()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Name1(void) const
        {
            return (*Value())[ItemName_Name1()];
        }
        bool Get_Name1(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Name1()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Name1()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GetDataSourceInfos
#endif //#if defined(IMPLEMENT_SUMMARYAPI_GETDATASOURCEINFOS)


//------------------------------------------------------------------------
// SummaryAPI::GetGlobalSysInfos::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_SUMMARYAPI_GETGLOBALSYSINFOS)
namespace GetGlobalSysInfos
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_DeviceType(void)
    {
        static std::string str("DeviceType");
        return str;
    }
public:
    static std::string const& ItemName_DeviceName(void)
    {
        static std::string str("DeviceName");
        return str;
    }
public:
    static std::string const& ItemName_LocationDetails(void)
    {
        static std::string str("LocationDetails");
        return str;
    }
public:
    static std::string const& ItemName_ID(void)
    {
        static std::string str("ID");
        return str;
    }
public:
    static std::string const& ItemName_MID(void)
    {
        static std::string str("MID");
        return str;
    }
public:
    static std::string const& ItemName_TypeCode(void)
    {
        static std::string str("TypeCode");
        return str;
    }
public:
    static std::string const& ItemName_MainModuleType(void)
    {
        static std::string str("MainModuleType");
        return str;
    }
public:
    static std::string const& ItemName_SubModuleType(void)
    {
        static std::string str("SubModuleType");
        return str;
    }
public:
    static std::string const& ItemName_FunctionModuleType(void)
    {
        static std::string str("FunctionModuleType");
        return str;
    }
public:
    static std::string const& ItemName_CasingModuleType(void)
    {
        static std::string str("CasingModuleType");
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
    static std::string const& ItemName_IsBigEndian(void)
    {
        static std::string str("IsBigEndian");
        return str;
    }
public:
    static std::string const& ItemName_MeasurementRate(void)
    {
        static std::string str("MeasurementRate");
        return str;
    }
public:
    static std::string const& ItemName_InternalProcessingRate(void)
    {
        static std::string str("InternalProcessingRate");
        return str;
    }
public:
    static std::string const& ItemName_DataBufferCount(void)
    {
        static std::string str("DataBufferCount");
        return str;
    }
public:
    static std::string const& ItemName_ProcessBufferCount(void)
    {
        static std::string str("ProcessBufferCount");
        return str;
    }
public:
    static std::string const& ItemName_PostProcessBufferCount(void)
    {
        static std::string str("PostProcessBufferCount");
        return str;
    }
public:
    static std::string const& ItemName_PostProcessBuffers(void)
    {
        static std::string str("PostProcessBuffers");
        return str;
    }
public:
    static std::string const& ItemName_DataLoggerCount(void)
    {
        static std::string str("DataLoggerCount");
        return str;
    }
public:
    static std::string const& ItemName_VariablesCount(void)
    {
        static std::string str("VariablesCount");
        return str;
    }
public:
    static std::string const& ItemName_SlaveModuleCount(void)
    {
        static std::string str("SlaveModuleCount");
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
    static std::string const& ItemName_ErrorMsg(void)
    {
        static std::string str("ErrorMsg");
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
        static std::string str("SummaryAPI.GetGlobalSysInfos");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_DeviceType();
            Construct_DeviceName();
            Construct_LocationDetails();
            Construct_ID();
            Construct_MID();
            Construct_TypeCode();
            Construct_MainModuleType();
            Construct_SubModuleType();
            Construct_FunctionModuleType();
            Construct_CasingModuleType();
            Construct_SerialNumber();
            Construct_Firmware();
            Construct_IsBigEndian();
            Construct_MeasurementRate();
            Construct_InternalProcessingRate();
            Construct_DataBufferCount();
            Construct_ProcessBufferCount();
            Construct_PostProcessBufferCount();
            Construct_PostProcessBuffers();
            Construct_DataLoggerCount();
            Construct_VariablesCount();
            Construct_SlaveModuleCount();
            Construct_GInsRet();
            Construct_ReturnState();
            Construct_ErrorMsg();
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
            Construct_DeviceType();
            Construct_DeviceName();
            Construct_LocationDetails();
            Construct_ID();
            Construct_MID();
            Construct_TypeCode();
            Construct_MainModuleType();
            Construct_SubModuleType();
            Construct_FunctionModuleType();
            Construct_CasingModuleType();
            Construct_SerialNumber();
            Construct_Firmware();
            Construct_IsBigEndian();
            Construct_MeasurementRate();
            Construct_InternalProcessingRate();
            Construct_DataBufferCount();
            Construct_ProcessBufferCount();
            Construct_PostProcessBufferCount();
            Construct_PostProcessBuffers();
            Construct_DataLoggerCount();
            Construct_VariablesCount();
            Construct_SlaveModuleCount();
            Construct_GInsRet();
            Construct_ReturnState();
            Construct_ErrorMsg();
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
            Initialize_DeviceType();
            Initialize_DeviceName();
            Initialize_LocationDetails();
            Initialize_ID();
            Initialize_MID();
            Initialize_TypeCode();
            Initialize_MainModuleType();
            Initialize_SubModuleType();
            Initialize_FunctionModuleType();
            Initialize_CasingModuleType();
            Initialize_SerialNumber();
            Initialize_Firmware();
            Initialize_IsBigEndian();
            Initialize_MeasurementRate();
            Initialize_InternalProcessingRate();
            Initialize_DataBufferCount();
            Initialize_ProcessBufferCount();
            Initialize_PostProcessBufferCount();
            Initialize_PostProcessBuffers();
            Initialize_DataLoggerCount();
            Initialize_VariablesCount();
            Initialize_SlaveModuleCount();
            Initialize_GInsRet();
            Initialize_ReturnState();
            Initialize_ErrorMsg();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SummaryAPI::GetGlobalSysInfos");
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
    // Item DeviceType (Type: "std::string")
    protected:
        void Construct_DeviceType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceType()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DeviceType()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DeviceType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceType()))
                {
                    Construct_DeviceType();
                }
                if ((*Value()).hasMember(ItemName_DeviceType()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DeviceType()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DeviceType(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_DeviceType()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DeviceType(void) const
        {
            return (*Value())[ItemName_DeviceType()];
        }
        bool Get_DeviceType(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DeviceType()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DeviceType()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
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
    // Item LocationDetails (Type: "CTypeLocationDetails")
    protected:
        void Construct_LocationDetails(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LocationDetails()))
                {
                    CTypeLocationDetails InitValue = GInsXmlRpc::XmlRpcValue();
                    (*Value())[ItemName_LocationDetails()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_LocationDetails(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LocationDetails()))
                {
                    Construct_LocationDetails();
                }
                if ((*Value()).hasMember(ItemName_LocationDetails()))
                {
                    CTypeLocationDetails InitValue = GInsXmlRpc::XmlRpcValue();
                    (*Value())[ItemName_LocationDetails()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LocationDetails(const CTypeLocationDetails& SetValue)
        {
            try
            {
                (*Value())[ItemName_LocationDetails()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CTypeLocationDetails Get_LocationDetails(void) const
        {
            return (*Value())[ItemName_LocationDetails()];
        }
        bool Get_LocationDetails(CTypeLocationDetails& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LocationDetails()]).valid())
                {
                    GetValue = (*Value())[ItemName_LocationDetails()];
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
    // Item MID (Type: "std::string")
    protected:
        void Construct_MID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MID()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_MID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MID()))
                {
                    Construct_MID();
                }
                if ((*Value()).hasMember(ItemName_MID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MID()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MID(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_MID()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_MID(void) const
        {
            return (*Value())[ItemName_MID()];
        }
        bool Get_MID(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MID()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_MID()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item TypeCode (Type: "std::string")
    protected:
        void Construct_TypeCode(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TypeCode()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_TypeCode()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_TypeCode(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TypeCode()))
                {
                    Construct_TypeCode();
                }
                if ((*Value()).hasMember(ItemName_TypeCode()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_TypeCode()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TypeCode(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_TypeCode()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_TypeCode(void) const
        {
            return (*Value())[ItemName_TypeCode()];
        }
        bool Get_TypeCode(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TypeCode()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_TypeCode()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item MainModuleType (Type: "int32_t")
protected:
    void Construct_MainModuleType(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MainModuleType()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_MainModuleType()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_MainModuleType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MainModuleType()))
                {
                    Construct_MainModuleType();
                }
                if ((*Value()).hasMember(ItemName_MainModuleType()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_MainModuleType()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MainModuleType(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_MainModuleType()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_MainModuleType(void) const
        {
            int32_t GetValue = (*Value())[ItemName_MainModuleType()];
            return (int32_t)GetValue;
        }
        bool Get_MainModuleType(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MainModuleType()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_MainModuleType()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item SubModuleType (Type: "int32_t")
protected:
    void Construct_SubModuleType(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_SubModuleType()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_SubModuleType()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_SubModuleType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SubModuleType()))
                {
                    Construct_SubModuleType();
                }
                if ((*Value()).hasMember(ItemName_SubModuleType()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_SubModuleType()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SubModuleType(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_SubModuleType()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_SubModuleType(void) const
        {
            int32_t GetValue = (*Value())[ItemName_SubModuleType()];
            return (int32_t)GetValue;
        }
        bool Get_SubModuleType(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SubModuleType()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_SubModuleType()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item FunctionModuleType (Type: "int32_t")
protected:
    void Construct_FunctionModuleType(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_FunctionModuleType()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_FunctionModuleType()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_FunctionModuleType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FunctionModuleType()))
                {
                    Construct_FunctionModuleType();
                }
                if ((*Value()).hasMember(ItemName_FunctionModuleType()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_FunctionModuleType()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FunctionModuleType(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_FunctionModuleType()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_FunctionModuleType(void) const
        {
            int32_t GetValue = (*Value())[ItemName_FunctionModuleType()];
            return (int32_t)GetValue;
        }
        bool Get_FunctionModuleType(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FunctionModuleType()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_FunctionModuleType()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item CasingModuleType (Type: "int32_t")
protected:
    void Construct_CasingModuleType(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_CasingModuleType()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_CasingModuleType()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_CasingModuleType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CasingModuleType()))
                {
                    Construct_CasingModuleType();
                }
                if ((*Value()).hasMember(ItemName_CasingModuleType()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_CasingModuleType()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_CasingModuleType(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_CasingModuleType()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_CasingModuleType(void) const
        {
            int32_t GetValue = (*Value())[ItemName_CasingModuleType()];
            return (int32_t)GetValue;
        }
        bool Get_CasingModuleType(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_CasingModuleType()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_CasingModuleType()]));
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
// Item IsBigEndian (Type: "bool")
protected:
    void Construct_IsBigEndian(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_IsBigEndian()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_IsBigEndian()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_IsBigEndian(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IsBigEndian()))
                {
                    Construct_IsBigEndian();
                }
                if ((*Value()).hasMember(ItemName_IsBigEndian()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_IsBigEndian()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IsBigEndian(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_IsBigEndian()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_IsBigEndian(void) const
        {
            bool GetValue = (*Value())[ItemName_IsBigEndian()];
            return (bool)GetValue;
        }
        bool Get_IsBigEndian(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IsBigEndian()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_IsBigEndian()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item MeasurementRate (Type: "double")
protected:
    void Construct_MeasurementRate(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MeasurementRate()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_MeasurementRate()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_MeasurementRate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MeasurementRate()))
                {
                    Construct_MeasurementRate();
                }
                if ((*Value()).hasMember(ItemName_MeasurementRate()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_MeasurementRate()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MeasurementRate(double SetValue)
        {
            try
            {
                (*Value())[ItemName_MeasurementRate()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_MeasurementRate(void) const
        {
            double GetValue = (*Value())[ItemName_MeasurementRate()];
            return (double)GetValue;
        }
        bool Get_MeasurementRate(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MeasurementRate()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_MeasurementRate()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item InternalProcessingRate (Type: "double")
protected:
    void Construct_InternalProcessingRate(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_InternalProcessingRate()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_InternalProcessingRate()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_InternalProcessingRate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_InternalProcessingRate()))
                {
                    Construct_InternalProcessingRate();
                }
                if ((*Value()).hasMember(ItemName_InternalProcessingRate()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_InternalProcessingRate()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_InternalProcessingRate(double SetValue)
        {
            try
            {
                (*Value())[ItemName_InternalProcessingRate()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_InternalProcessingRate(void) const
        {
            double GetValue = (*Value())[ItemName_InternalProcessingRate()];
            return (double)GetValue;
        }
        bool Get_InternalProcessingRate(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_InternalProcessingRate()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_InternalProcessingRate()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item DataBufferCount (Type: "int32_t")
protected:
    void Construct_DataBufferCount(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_DataBufferCount()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_DataBufferCount()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_DataBufferCount(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataBufferCount()))
                {
                    Construct_DataBufferCount();
                }
                if ((*Value()).hasMember(ItemName_DataBufferCount()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_DataBufferCount()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DataBufferCount(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_DataBufferCount()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_DataBufferCount(void) const
        {
            int32_t GetValue = (*Value())[ItemName_DataBufferCount()];
            return (int32_t)GetValue;
        }
        bool Get_DataBufferCount(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DataBufferCount()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_DataBufferCount()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item ProcessBufferCount (Type: "int32_t")
protected:
    void Construct_ProcessBufferCount(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ProcessBufferCount()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_ProcessBufferCount()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ProcessBufferCount(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProcessBufferCount()))
                {
                    Construct_ProcessBufferCount();
                }
                if ((*Value()).hasMember(ItemName_ProcessBufferCount()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_ProcessBufferCount()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ProcessBufferCount(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_ProcessBufferCount()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_ProcessBufferCount(void) const
        {
            int32_t GetValue = (*Value())[ItemName_ProcessBufferCount()];
            return (int32_t)GetValue;
        }
        bool Get_ProcessBufferCount(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ProcessBufferCount()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_ProcessBufferCount()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item PostProcessBufferCount (Type: "int32_t")
protected:
    void Construct_PostProcessBufferCount(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_PostProcessBufferCount()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_PostProcessBufferCount()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_PostProcessBufferCount(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PostProcessBufferCount()))
                {
                    Construct_PostProcessBufferCount();
                }
                if ((*Value()).hasMember(ItemName_PostProcessBufferCount()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_PostProcessBufferCount()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_PostProcessBufferCount(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_PostProcessBufferCount()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_PostProcessBufferCount(void) const
        {
            int32_t GetValue = (*Value())[ItemName_PostProcessBufferCount()];
            return (int32_t)GetValue;
        }
        bool Get_PostProcessBufferCount(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_PostProcessBufferCount()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_PostProcessBufferCount()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item PostProcessBuffers (Type: "std::string[0]")
    protected:
        void Construct_PostProcessBuffers(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PostProcessBuffers()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_PostProcessBuffers()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_PostProcessBuffers(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PostProcessBuffers()))
                {
                    Construct_PostProcessBuffers();
                }
                if ((*Value()).hasMember(ItemName_PostProcessBuffers()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_PostProcessBuffers()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_PostProcessBuffers(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_PostProcessBuffers()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_PostProcessBuffers(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_PostProcessBuffers()))
                {
                    return (*Value())[ItemName_PostProcessBuffers()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_PostProcessBuffers(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_PostProcessBuffers()))
                {
                    (*Value())[ItemName_PostProcessBuffers()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_PostProcessBuffers(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_PostProcessBuffers()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_PostProcessBuffers(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_PostProcessBuffers()))
                {
                    (*Value())[ItemName_PostProcessBuffers()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_PostProcessBuffers(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_PostProcessBuffers())
                {
                    SetSize_PostProcessBuffers(ArrayIndex + 1);
                }
                (*Value())[ItemName_PostProcessBuffers()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_PostProcessBuffers(int ArrayIndex) const
        {
            return (*Value())[ItemName_PostProcessBuffers()][ArrayIndex];
        }
        bool Get_PostProcessBuffers(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_PostProcessBuffers()))
                {
                    if (((*Value())[ItemName_PostProcessBuffers()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_PostProcessBuffers()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item DataLoggerCount (Type: "int32_t")
protected:
    void Construct_DataLoggerCount(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_DataLoggerCount()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_DataLoggerCount()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_DataLoggerCount(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataLoggerCount()))
                {
                    Construct_DataLoggerCount();
                }
                if ((*Value()).hasMember(ItemName_DataLoggerCount()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_DataLoggerCount()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DataLoggerCount(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_DataLoggerCount()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_DataLoggerCount(void) const
        {
            int32_t GetValue = (*Value())[ItemName_DataLoggerCount()];
            return (int32_t)GetValue;
        }
        bool Get_DataLoggerCount(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DataLoggerCount()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_DataLoggerCount()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item VariablesCount (Type: "int32_t")
protected:
    void Construct_VariablesCount(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_VariablesCount()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_VariablesCount()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_VariablesCount(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_VariablesCount()))
                {
                    Construct_VariablesCount();
                }
                if ((*Value()).hasMember(ItemName_VariablesCount()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_VariablesCount()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_VariablesCount(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_VariablesCount()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_VariablesCount(void) const
        {
            int32_t GetValue = (*Value())[ItemName_VariablesCount()];
            return (int32_t)GetValue;
        }
        bool Get_VariablesCount(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_VariablesCount()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_VariablesCount()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item SlaveModuleCount (Type: "int32_t")
protected:
    void Construct_SlaveModuleCount(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_SlaveModuleCount()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_SlaveModuleCount()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_SlaveModuleCount(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SlaveModuleCount()))
                {
                    Construct_SlaveModuleCount();
                }
                if ((*Value()).hasMember(ItemName_SlaveModuleCount()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_SlaveModuleCount()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SlaveModuleCount(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_SlaveModuleCount()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_SlaveModuleCount(void) const
        {
            int32_t GetValue = (*Value())[ItemName_SlaveModuleCount()];
            return (int32_t)GetValue;
        }
        bool Get_SlaveModuleCount(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SlaveModuleCount()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_SlaveModuleCount()]));
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
}; // class CResults
} // namespace GetGlobalSysInfos
#endif //#if defined(IMPLEMENT_SUMMARYAPI_GETGLOBALSYSINFOS)


//------------------------------------------------------------------------
// SummaryAPI::GetVariables::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_SUMMARYAPI_GETVARIABLES)
namespace GetVariables
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_VariableList(void)
    {
        static std::string str("VariableList");
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
    static std::string const& ItemName_ErrorMsg(void)
    {
        static std::string str("ErrorMsg");
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
        static std::string str("SummaryAPI.GetVariables");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_VariableList();
            Construct_GInsRet();
            Construct_ReturnState();
            Construct_ErrorMsg();
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
            Construct_VariableList();
            Construct_GInsRet();
            Construct_ReturnState();
            Construct_ErrorMsg();
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
            Initialize_VariableList();
            Initialize_GInsRet();
            Initialize_ReturnState();
            Initialize_ErrorMsg();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SummaryAPI::GetVariables");
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
    // Item VariableList (Type: "CTypeVariableInfo[0]")
    protected:
        void Construct_VariableList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_VariableList()))
                {
                    CTypeVariableInfo InitValue;
                    (*Value())[ItemName_VariableList()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_VariableList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_VariableList()))
                {
                    Construct_VariableList();
                }
                if ((*Value()).hasMember(ItemName_VariableList()))
                {
                    CTypeVariableInfo InitValue;
                    (*Value())[ItemName_VariableList()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_VariableList(int NewSize)
        {
            try
            {
                CTypeVariableInfo InitValue;
                (*Value())[ItemName_VariableList()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_VariableList(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_VariableList()))
                {
                    return (*Value())[ItemName_VariableList()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_VariableList(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_VariableList()))
                {
                    (*Value())[ItemName_VariableList()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_VariableList(int ArrayIndex, CTypeVariableInfo SetValue)
        {
            try
            {
                (*Value())[ItemName_VariableList()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_VariableList(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_VariableList()))
                {
                    (*Value())[ItemName_VariableList()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_VariableList(int ArrayIndex, const CTypeVariableInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_VariableList()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_VariableList()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CTypeVariableInfo Get_VariableList(int ArrayIndex) const
        {
            return (*Value())[ItemName_VariableList()][ArrayIndex];
        }
        bool Get_VariableList(int ArrayIndex, CTypeVariableInfo& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_VariableList()))
                {
                    if (((*Value())[ItemName_VariableList()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_VariableList()][ArrayIndex];
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
}; // class CResults
} // namespace GetVariables
#endif //#if defined(IMPLEMENT_SUMMARYAPI_GETVARIABLES)


//------------------------------------------------------------------------
// SummaryAPI::GetModules::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_SUMMARYAPI_GETMODULES)
namespace GetModules
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ModuleList(void)
    {
        static std::string str("ModuleList");
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
    static std::string const& ItemName_ErrorMsg(void)
    {
        static std::string str("ErrorMsg");
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
        static std::string str("SummaryAPI.GetModules");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ModuleList();
            Construct_GInsRet();
            Construct_ReturnState();
            Construct_ErrorMsg();
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
            Construct_ModuleList();
            Construct_GInsRet();
            Construct_ReturnState();
            Construct_ErrorMsg();
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
            Initialize_ModuleList();
            Initialize_GInsRet();
            Initialize_ReturnState();
            Initialize_ErrorMsg();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SummaryAPI::GetModules");
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
    // Item ModuleList (Type: "CTypeModuleInfo[0]")
    protected:
        void Construct_ModuleList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ModuleList()))
                {
                    CTypeModuleInfo InitValue;
                    (*Value())[ItemName_ModuleList()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_ModuleList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ModuleList()))
                {
                    Construct_ModuleList();
                }
                if ((*Value()).hasMember(ItemName_ModuleList()))
                {
                    CTypeModuleInfo InitValue;
                    (*Value())[ItemName_ModuleList()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_ModuleList(int NewSize)
        {
            try
            {
                CTypeModuleInfo InitValue;
                (*Value())[ItemName_ModuleList()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_ModuleList(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ModuleList()))
                {
                    return (*Value())[ItemName_ModuleList()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_ModuleList(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ModuleList()))
                {
                    (*Value())[ItemName_ModuleList()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_ModuleList(int ArrayIndex, CTypeModuleInfo SetValue)
        {
            try
            {
                (*Value())[ItemName_ModuleList()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_ModuleList(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ModuleList()))
                {
                    (*Value())[ItemName_ModuleList()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ModuleList(int ArrayIndex, const CTypeModuleInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_ModuleList()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_ModuleList()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CTypeModuleInfo Get_ModuleList(int ArrayIndex) const
        {
            return (*Value())[ItemName_ModuleList()][ArrayIndex];
        }
        bool Get_ModuleList(int ArrayIndex, CTypeModuleInfo& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ModuleList()))
                {
                    if (((*Value())[ItemName_ModuleList()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_ModuleList()][ArrayIndex];
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
}; // class CResults
} // namespace GetModules
#endif //#if defined(IMPLEMENT_SUMMARYAPI_GETMODULES)


//------------------------------------------------------------------------
// SummaryAPI::GetModuleVariables::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_SUMMARYAPI_GETMODULEVARIABLES)
namespace GetModuleVariables
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_VariableList(void)
    {
        static std::string str("VariableList");
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
    static std::string const& ItemName_ErrorMsg(void)
    {
        static std::string str("ErrorMsg");
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
        static std::string str("SummaryAPI.GetModuleVariables");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_VariableList();
            Construct_GInsRet();
            Construct_ReturnState();
            Construct_ErrorMsg();
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
            Construct_VariableList();
            Construct_GInsRet();
            Construct_ReturnState();
            Construct_ErrorMsg();
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
            Initialize_VariableList();
            Initialize_GInsRet();
            Initialize_ReturnState();
            Initialize_ErrorMsg();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SummaryAPI::GetModuleVariables");
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
    // Item VariableList (Type: "CTypeVariableInfo[0]")
    protected:
        void Construct_VariableList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_VariableList()))
                {
                    CTypeVariableInfo InitValue;
                    (*Value())[ItemName_VariableList()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_VariableList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_VariableList()))
                {
                    Construct_VariableList();
                }
                if ((*Value()).hasMember(ItemName_VariableList()))
                {
                    CTypeVariableInfo InitValue;
                    (*Value())[ItemName_VariableList()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_VariableList(int NewSize)
        {
            try
            {
                CTypeVariableInfo InitValue;
                (*Value())[ItemName_VariableList()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_VariableList(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_VariableList()))
                {
                    return (*Value())[ItemName_VariableList()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_VariableList(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_VariableList()))
                {
                    (*Value())[ItemName_VariableList()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_VariableList(int ArrayIndex, CTypeVariableInfo SetValue)
        {
            try
            {
                (*Value())[ItemName_VariableList()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_VariableList(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_VariableList()))
                {
                    (*Value())[ItemName_VariableList()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_VariableList(int ArrayIndex, const CTypeVariableInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_VariableList()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_VariableList()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CTypeVariableInfo Get_VariableList(int ArrayIndex) const
        {
            return (*Value())[ItemName_VariableList()][ArrayIndex];
        }
        bool Get_VariableList(int ArrayIndex, CTypeVariableInfo& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_VariableList()))
                {
                    if (((*Value())[ItemName_VariableList()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_VariableList()][ArrayIndex];
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
}; // class CResults
} // namespace GetModuleVariables
#endif //#if defined(IMPLEMENT_SUMMARYAPI_GETMODULEVARIABLES)


//------------------------------------------------------------------------
// SummaryAPI::GetDataSourceInfos::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_SUMMARYAPI_GETDATASOURCEINFOS)
namespace GetDataSourceInfos
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Name(void)
    {
        static std::string str("Name");
        return str;
    }
public:
    static std::string const& ItemName_SampleRate(void)
    {
        static std::string str("SampleRate");
        return str;
    }
public:
    static std::string const& ItemName_BufferSize(void)
    {
        static std::string str("BufferSize");
        return str;
    }
public:
    static std::string const& ItemName_FrameLength(void)
    {
        static std::string str("FrameLength");
        return str;
    }
public:
    static std::string const& ItemName_TimeToOverrun(void)
    {
        static std::string str("TimeToOverrun");
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
    static std::string const& ItemName_ErrorMsg(void)
    {
        static std::string str("ErrorMsg");
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
        static std::string str("SummaryAPI.GetDataSourceInfos");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Name();
            Construct_SampleRate();
            Construct_BufferSize();
            Construct_FrameLength();
            Construct_TimeToOverrun();
            Construct_GInsRet();
            Construct_ReturnState();
            Construct_ErrorMsg();
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
            Construct_Name();
            Construct_SampleRate();
            Construct_BufferSize();
            Construct_FrameLength();
            Construct_TimeToOverrun();
            Construct_GInsRet();
            Construct_ReturnState();
            Construct_ErrorMsg();
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
            Initialize_Name();
            Initialize_SampleRate();
            Initialize_BufferSize();
            Initialize_FrameLength();
            Initialize_TimeToOverrun();
            Initialize_GInsRet();
            Initialize_ReturnState();
            Initialize_ErrorMsg();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SummaryAPI::GetDataSourceInfos");
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
// Item SampleRate (Type: "double")
protected:
    void Construct_SampleRate(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_SampleRate()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_SampleRate()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_SampleRate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SampleRate()))
                {
                    Construct_SampleRate();
                }
                if ((*Value()).hasMember(ItemName_SampleRate()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_SampleRate()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SampleRate(double SetValue)
        {
            try
            {
                (*Value())[ItemName_SampleRate()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_SampleRate(void) const
        {
            double GetValue = (*Value())[ItemName_SampleRate()];
            return (double)GetValue;
        }
        bool Get_SampleRate(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SampleRate()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_SampleRate()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item BufferSize (Type: "double")
protected:
    void Construct_BufferSize(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_BufferSize()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_BufferSize()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_BufferSize(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_BufferSize()))
                {
                    Construct_BufferSize();
                }
                if ((*Value()).hasMember(ItemName_BufferSize()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_BufferSize()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_BufferSize(double SetValue)
        {
            try
            {
                (*Value())[ItemName_BufferSize()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_BufferSize(void) const
        {
            double GetValue = (*Value())[ItemName_BufferSize()];
            return (double)GetValue;
        }
        bool Get_BufferSize(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_BufferSize()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_BufferSize()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item FrameLength (Type: "int32_t")
protected:
    void Construct_FrameLength(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_FrameLength()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_FrameLength()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_FrameLength(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FrameLength()))
                {
                    Construct_FrameLength();
                }
                if ((*Value()).hasMember(ItemName_FrameLength()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_FrameLength()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FrameLength(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_FrameLength()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_FrameLength(void) const
        {
            int32_t GetValue = (*Value())[ItemName_FrameLength()];
            return (int32_t)GetValue;
        }
        bool Get_FrameLength(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FrameLength()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_FrameLength()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item TimeToOverrun (Type: "double")
protected:
    void Construct_TimeToOverrun(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_TimeToOverrun()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_TimeToOverrun()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_TimeToOverrun(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TimeToOverrun()))
                {
                    Construct_TimeToOverrun();
                }
                if ((*Value()).hasMember(ItemName_TimeToOverrun()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_TimeToOverrun()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TimeToOverrun(double SetValue)
        {
            try
            {
                (*Value())[ItemName_TimeToOverrun()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_TimeToOverrun(void) const
        {
            double GetValue = (*Value())[ItemName_TimeToOverrun()];
            return (double)GetValue;
        }
        bool Get_TimeToOverrun(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TimeToOverrun()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_TimeToOverrun()]));
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
}; // class CResults
} // namespace GetDataSourceInfos
#endif //#if defined(IMPLEMENT_SUMMARYAPI_GETDATASOURCEINFOS)
//========================================================================
}; // namespace SummaryAPI
//========================================================================
#endif // #if !defined(_SUMMARYAPI_TYPES_H)

