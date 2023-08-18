//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_DATABUFFERAPI_TYPES_H)
#define _DATABUFFERAPI_TYPES_H
//========================================================================
// Implemented methods
#define IMPLEMENT_DATABUFFERAPI_GETHSPBUFFERCONFIG
#define IMPLEMENT_DATABUFFERAPI_CREATE
#define IMPLEMENT_DATABUFFERAPI_GETSTATES
#define IMPLEMENT_DATABUFFERAPI_GETCONFIG
#define IMPLEMENT_DATABUFFERAPI_LISTBUFFERS
#define IMPLEMENT_DATABUFFERAPI_DELETE
#define IMPLEMENT_DATABUFFERAPI_ENABLE
#define IMPLEMENT_DATABUFFERAPI_STOP


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "DataBufferAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace DataBufferAPI {
//========================================================================
//------------------------------------------------------------------------
// DataBufferAPI::CAPIInfo
//------------------------------------------------------------------------
class CAPIInfo
{
public:
    static std::string const& Name(void)
    {
        static std::string str("DataBufferAPI");
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
// DataBufferAPI::CTypeHSPBufferConfig
//------------------------------------------------------------------------
class CTypeHSPBufferConfig : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_ServerAddress(void)
        {
            static std::string str("ServerAddress");
            return str;
        }
    public:
        static std::string const& ItemName_ServerPort(void)
        {
            static std::string str("ServerPort");
            return str;
        }
    public:
        static std::string const& ItemName_ServerAccessThemeIndex(void)
        {
            static std::string str("ServerAccessThemeIndex");
            return str;
        }
    public:
        static std::string const& ItemName_ServerAccessTheme(void)
        {
            static std::string str("ServerAccessTheme");
            return str;
        }
    public:
        static std::string const& ItemName_TimeoutSec(void)
        {
            static std::string str("TimeoutSec");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("TypeHSPBufferConfig");
        return str;
    }
public:
    CTypeHSPBufferConfig(void)
    {
        try
        {
            Construct_ServerAddress();
            Construct_ServerPort();
            Construct_ServerAccessThemeIndex();
            Construct_ServerAccessTheme();
            Construct_TimeoutSec();
            }
        catch (...) {}
    }
    CTypeHSPBufferConfig(const CTypeHSPBufferConfig& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        }
    CTypeHSPBufferConfig(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_ServerAddress();
            Construct_ServerPort();
            Construct_ServerAccessThemeIndex();
            Construct_ServerAccessTheme();
            Construct_TimeoutSec();
            }
        catch (...) {}
    }
public:
    ~CTypeHSPBufferConfig(void)
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
            Initialize_ServerAddress();
            Initialize_ServerPort();
            Initialize_ServerAccessThemeIndex();
            Initialize_ServerAccessTheme();
            Initialize_TimeoutSec();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item ServerAddress (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringValue")
    protected:
        void Construct_ServerAddress(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ServerAddress()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_ServerAddress()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ServerAddress(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ServerAddress()))
                {
                    Construct_ServerAddress();
                }
                if ((*Value()).hasMember(ItemName_ServerAddress()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_ServerAddress()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ServerAddress(const GInsXmlRpcStdAPI::CGIns_Edit_StringValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_ServerAddress()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringValue Get_ServerAddress(void) const
        {
            return (*Value())[ItemName_ServerAddress()];
        }
        bool Get_ServerAddress(GInsXmlRpcStdAPI::CGIns_Edit_StringValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ServerAddress()]).valid())
                {
                    GetValue = (*Value())[ItemName_ServerAddress()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ServerPort (Type: "GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer")
    protected:
        void Construct_ServerPort(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ServerPort()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer InitValue;
                    (*Value())[ItemName_ServerPort()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ServerPort(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ServerPort()))
                {
                    Construct_ServerPort();
                }
                if ((*Value()).hasMember(ItemName_ServerPort()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer InitValue;
                    (*Value())[ItemName_ServerPort()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ServerPort(const GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer& SetValue)
        {
            try
            {
                (*Value())[ItemName_ServerPort()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer Get_ServerPort(void) const
        {
            return (*Value())[ItemName_ServerPort()];
        }
        bool Get_ServerPort(GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ServerPort()]).valid())
                {
                    GetValue = (*Value())[ItemName_ServerPort()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ServerAccessThemeIndex (Type: "GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer")
    protected:
        void Construct_ServerAccessThemeIndex(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ServerAccessThemeIndex()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer InitValue;
                    (*Value())[ItemName_ServerAccessThemeIndex()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ServerAccessThemeIndex(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ServerAccessThemeIndex()))
                {
                    Construct_ServerAccessThemeIndex();
                }
                if ((*Value()).hasMember(ItemName_ServerAccessThemeIndex()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer InitValue;
                    (*Value())[ItemName_ServerAccessThemeIndex()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ServerAccessThemeIndex(const GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer& SetValue)
        {
            try
            {
                (*Value())[ItemName_ServerAccessThemeIndex()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer Get_ServerAccessThemeIndex(void) const
        {
            return (*Value())[ItemName_ServerAccessThemeIndex()];
        }
        bool Get_ServerAccessThemeIndex(GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Integer& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ServerAccessThemeIndex()]).valid())
                {
                    GetValue = (*Value())[ItemName_ServerAccessThemeIndex()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ServerAccessTheme (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_ServerAccessTheme(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ServerAccessTheme()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_ServerAccessTheme()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ServerAccessTheme(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ServerAccessTheme()))
                {
                    Construct_ServerAccessTheme();
                }
                if ((*Value()).hasMember(ItemName_ServerAccessTheme()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_ServerAccessTheme()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ServerAccessTheme(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_ServerAccessTheme()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_ServerAccessTheme(void) const
        {
            return (*Value())[ItemName_ServerAccessTheme()];
        }
        bool Get_ServerAccessTheme(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ServerAccessTheme()]).valid())
                {
                    GetValue = (*Value())[ItemName_ServerAccessTheme()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item TimeoutSec (Type: "GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Float")
    protected:
        void Construct_TimeoutSec(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TimeoutSec()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Float InitValue;
                    (*Value())[ItemName_TimeoutSec()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_TimeoutSec(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TimeoutSec()))
                {
                    Construct_TimeoutSec();
                }
                if ((*Value()).hasMember(ItemName_TimeoutSec()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Float InitValue;
                    (*Value())[ItemName_TimeoutSec()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TimeoutSec(const GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Float& SetValue)
        {
            try
            {
                (*Value())[ItemName_TimeoutSec()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Float Get_TimeoutSec(void) const
        {
            return (*Value())[ItemName_TimeoutSec()];
        }
        bool Get_TimeoutSec(GInsXmlRpcStdAPI::CGIns_Edit_RangeValue_Float& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TimeoutSec()]).valid())
                {
                    GetValue = (*Value())[ItemName_TimeoutSec()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CTypeHSPBufferConfig


//------------------------------------------------------------------------
// DataBufferAPI::CTypeBufferVariableConfig
//------------------------------------------------------------------------
class CTypeBufferVariableConfig : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Index(void)
        {
            static std::string str("Index");
            return str;
        }
    public:
        static std::string const& ItemName_Id(void)
        {
            static std::string str("Id");
            return str;
        }
    public:
        static std::string const& ItemName_Name(void)
        {
            static std::string str("Name");
            return str;
        }
    public:
        static std::string const& ItemName_Unit(void)
        {
            static std::string str("Unit");
            return str;
        }
    public:
        static std::string const& ItemName_Type(void)
        {
            static std::string str("Type");
            return str;
        }
    public:
        static std::string const& ItemName_RangeMax(void)
        {
            static std::string str("RangeMax");
            return str;
        }
    public:
        static std::string const& ItemName_RangeMin(void)
        {
            static std::string str("RangeMin");
            return str;
        }
    public:
        static std::string const& ItemName_Precision(void)
        {
            static std::string str("Precision");
            return str;
        }
    public:
        static std::string const& ItemName_DataFormat(void)
        {
            static std::string str("DataFormat");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("TypeBufferVariableConfig");
        return str;
    }
public:
    CTypeBufferVariableConfig(void)
    {
        try
        {
            Construct_Index();
            Construct_Id();
            Construct_Name();
            Construct_Unit();
            Construct_Type();
            Construct_RangeMax();
            Construct_RangeMin();
            Construct_Precision();
            Construct_DataFormat();
            }
        catch (...) {}
    }
    CTypeBufferVariableConfig(const CTypeBufferVariableConfig& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        }
    CTypeBufferVariableConfig(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_Index();
            Construct_Id();
            Construct_Name();
            Construct_Unit();
            Construct_Type();
            Construct_RangeMax();
            Construct_RangeMin();
            Construct_Precision();
            Construct_DataFormat();
            }
        catch (...) {}
    }
public:
    ~CTypeBufferVariableConfig(void)
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
            Initialize_Id();
            Initialize_Name();
            Initialize_Unit();
            Initialize_Type();
            Initialize_RangeMax();
            Initialize_RangeMin();
            Initialize_Precision();
            Initialize_DataFormat();
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
    // Item Id (Type: "std::string")
    protected:
        void Construct_Id(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Id()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Id()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Id(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Id()))
                {
                    Construct_Id();
                }
                if ((*Value()).hasMember(ItemName_Id()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Id()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Id(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Id()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Id(void) const
        {
            return (*Value())[ItemName_Id()];
        }
        bool Get_Id(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Id()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Id()]);
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
    // Item Type (Type: "std::string")
    protected:
        void Construct_Type(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Type()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Type()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Type(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Type()))
                {
                    Construct_Type();
                }
                if ((*Value()).hasMember(ItemName_Type()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Type()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Type(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Type()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Type(void) const
        {
            return (*Value())[ItemName_Type()];
        }
        bool Get_Type(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Type()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Type()]);
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
// Item Precision (Type: "int32_t")
protected:
    void Construct_Precision(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Precision()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Precision()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Precision(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Precision()))
                {
                    Construct_Precision();
                }
                if ((*Value()).hasMember(ItemName_Precision()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Precision()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Precision(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Precision()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Precision(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Precision()];
            return (int32_t)GetValue;
        }
        bool Get_Precision(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Precision()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Precision()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item DataFormat (Type: "GInsXmlRpcStdAPI::CGIns_Base_ElementValue")
    protected:
        void Construct_DataFormat(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataFormat()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_DataFormat()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DataFormat(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataFormat()))
                {
                    Construct_DataFormat();
                }
                if ((*Value()).hasMember(ItemName_DataFormat()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_DataFormat()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DataFormat(const GInsXmlRpcStdAPI::CGIns_Base_ElementValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_DataFormat()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Base_ElementValue Get_DataFormat(void) const
        {
            return (*Value())[ItemName_DataFormat()];
        }
        bool Get_DataFormat(GInsXmlRpcStdAPI::CGIns_Base_ElementValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DataFormat()]).valid())
                {
                    GetValue = (*Value())[ItemName_DataFormat()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CTypeBufferVariableConfig


//------------------------------------------------------------------------
// DataBufferAPI::CTypeBufferConfig
//------------------------------------------------------------------------
class CTypeBufferConfig : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Type(void)
        {
            static std::string str("Type");
            return str;
        }
    public:
        static std::string const& ItemName_Name(void)
        {
            static std::string str("Name");
            return str;
        }
    public:
        static std::string const& ItemName_Index(void)
        {
            static std::string str("Index");
            return str;
        }
    public:
        static std::string const& ItemName_Id(void)
        {
            static std::string str("Id");
            return str;
        }
    public:
        static std::string const& ItemName_SizeMB(void)
        {
            static std::string str("SizeMB");
            return str;
        }
    public:
        static std::string const& ItemName_SampleRate(void)
        {
            static std::string str("SampleRate");
            return str;
        }
    public:
        static std::string const& ItemName_TimestampDataFormat(void)
        {
            static std::string str("TimestampDataFormat");
            return str;
        }
    public:
        static std::string const& ItemName_Variables(void)
        {
            static std::string str("Variables");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("TypeBufferConfig");
        return str;
    }
public:
    CTypeBufferConfig(void)
    {
        try
        {
            Construct_Type();
            Construct_Name();
            Construct_Index();
            Construct_Id();
            Construct_SizeMB();
            Construct_SampleRate();
            Construct_TimestampDataFormat();
            Construct_Variables();
            }
        catch (...) {}
    }
    CTypeBufferConfig(const CTypeBufferConfig& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        }
    CTypeBufferConfig(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_Type();
            Construct_Name();
            Construct_Index();
            Construct_Id();
            Construct_SizeMB();
            Construct_SampleRate();
            Construct_TimestampDataFormat();
            Construct_Variables();
            }
        catch (...) {}
    }
public:
    ~CTypeBufferConfig(void)
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
            Initialize_Type();
            Initialize_Name();
            Initialize_Index();
            Initialize_Id();
            Initialize_SizeMB();
            Initialize_SampleRate();
            Initialize_TimestampDataFormat();
            Initialize_Variables();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item Type (Type: "std::string")
    protected:
        void Construct_Type(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Type()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Type()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Type(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Type()))
                {
                    Construct_Type();
                }
                if ((*Value()).hasMember(ItemName_Type()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Type()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Type(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Type()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Type(void) const
        {
            return (*Value())[ItemName_Type()];
        }
        bool Get_Type(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Type()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Type()]);
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
    // Item Id (Type: "std::string")
    protected:
        void Construct_Id(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Id()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Id()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Id(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Id()))
                {
                    Construct_Id();
                }
                if ((*Value()).hasMember(ItemName_Id()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Id()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Id(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Id()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Id(void) const
        {
            return (*Value())[ItemName_Id()];
        }
        bool Get_Id(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Id()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Id()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item SizeMB (Type: "int64_t")
protected:
    void Construct_SizeMB(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_SizeMB()))
            {
                int64_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_SizeMB()] = (int64_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_SizeMB(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SizeMB()))
                {
                    Construct_SizeMB();
                }
                if ((*Value()).hasMember(ItemName_SizeMB()))
                {
                    int64_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_SizeMB()] = (int64_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SizeMB(int64_t SetValue)
        {
            try
            {
                (*Value())[ItemName_SizeMB()] = (int64_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int64_t Get_SizeMB(void) const
        {
            int64_t GetValue = (*Value())[ItemName_SizeMB()];
            return (int64_t)GetValue;
        }
        bool Get_SizeMB(int64_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SizeMB()]).valid())
                {
                    GetValue = (int64_t)((int64_t)((*Value())[ItemName_SizeMB()]));
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
    // Item TimestampDataFormat (Type: "GInsXmlRpcStdAPI::CGIns_Base_ElementValue")
    protected:
        void Construct_TimestampDataFormat(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TimestampDataFormat()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_TimestampDataFormat()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_TimestampDataFormat(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TimestampDataFormat()))
                {
                    Construct_TimestampDataFormat();
                }
                if ((*Value()).hasMember(ItemName_TimestampDataFormat()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_TimestampDataFormat()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TimestampDataFormat(const GInsXmlRpcStdAPI::CGIns_Base_ElementValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_TimestampDataFormat()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Base_ElementValue Get_TimestampDataFormat(void) const
        {
            return (*Value())[ItemName_TimestampDataFormat()];
        }
        bool Get_TimestampDataFormat(GInsXmlRpcStdAPI::CGIns_Base_ElementValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TimestampDataFormat()]).valid())
                {
                    GetValue = (*Value())[ItemName_TimestampDataFormat()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Variables (Type: "CTypeBufferVariableConfig[0]")
    protected:
        void Construct_Variables(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Variables()))
                {
                    CTypeBufferVariableConfig InitValue;
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
                    CTypeBufferVariableConfig InitValue;
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
                CTypeBufferVariableConfig InitValue;
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
        bool Insert_Variables(int ArrayIndex, CTypeBufferVariableConfig SetValue)
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
        bool Set_Variables(int ArrayIndex, const CTypeBufferVariableConfig& SetValue)
        {
            try
            {
                (*Value())[ItemName_Variables()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Variables()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CTypeBufferVariableConfig Get_Variables(int ArrayIndex) const
        {
            return (*Value())[ItemName_Variables()][ArrayIndex];
        }
        bool Get_Variables(int ArrayIndex, CTypeBufferVariableConfig& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Variables()))
                {
                    if (((*Value())[ItemName_Variables()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Variables()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CTypeBufferConfig


//------------------------------------------------------------------------
// DataBufferAPI::CTypeBufferStates
//------------------------------------------------------------------------
class CTypeBufferStates : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Name(void)
        {
            static std::string str("Name");
            return str;
        }
    public:
        static std::string const& ItemName_Id(void)
        {
            static std::string str("Id");
            return str;
        }
    public:
        static std::string const& ItemName_Index(void)
        {
            static std::string str("Index");
            return str;
        }
    public:
        static std::string const& ItemName_ConfigValid(void)
        {
            static std::string str("ConfigValid");
            return str;
        }
    public:
        static std::string const& ItemName_Enabled(void)
        {
            static std::string str("Enabled");
            return str;
        }
    public:
        static std::string const& ItemName_Active(void)
        {
            static std::string str("Active");
            return str;
        }
    public:
        static std::string const& ItemName_LastActivityEpochSec(void)
        {
            static std::string str("LastActivityEpochSec");
            return str;
        }
    public:
        static std::string const& ItemName_MeasurementId(void)
        {
            static std::string str("MeasurementId");
            return str;
        }
    public:
        static std::string const& ItemName_MeasurementName(void)
        {
            static std::string str("MeasurementName");
            return str;
        }
    public:
        static std::string const& ItemName_AvailableSizeMB(void)
        {
            static std::string str("AvailableSizeMB");
            return str;
        }
    public:
        static std::string const& ItemName_CapacityMB(void)
        {
            static std::string str("CapacityMB");
            return str;
        }
    public:
        static std::string const& ItemName_MaxTimeSec(void)
        {
            static std::string str("MaxTimeSec");
            return str;
        }
    public:
        static std::string const& ItemName_HandledDataMB(void)
        {
            static std::string str("HandledDataMB");
            return str;
        }
    public:
        static std::string const& ItemName_ActualDataRateMBps(void)
        {
            static std::string str("ActualDataRateMBps");
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
        static std::string str("TypeBufferStates");
        return str;
    }
public:
    CTypeBufferStates(void)
    {
        try
        {
            Construct_Name();
            Construct_Id();
            Construct_Index();
            Construct_ConfigValid();
            Construct_Enabled();
            Construct_Active();
            Construct_LastActivityEpochSec();
            Construct_MeasurementId();
            Construct_MeasurementName();
            Construct_AvailableSizeMB();
            Construct_CapacityMB();
            Construct_MaxTimeSec();
            Construct_HandledDataMB();
            Construct_ActualDataRateMBps();
            Construct_Events();
            }
        catch (...) {}
    }
    CTypeBufferStates(const CTypeBufferStates& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        }
    CTypeBufferStates(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_Id();
            Construct_Index();
            Construct_ConfigValid();
            Construct_Enabled();
            Construct_Active();
            Construct_LastActivityEpochSec();
            Construct_MeasurementId();
            Construct_MeasurementName();
            Construct_AvailableSizeMB();
            Construct_CapacityMB();
            Construct_MaxTimeSec();
            Construct_HandledDataMB();
            Construct_ActualDataRateMBps();
            Construct_Events();
            }
        catch (...) {}
    }
public:
    ~CTypeBufferStates(void)
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
            Initialize_Id();
            Initialize_Index();
            Initialize_ConfigValid();
            Initialize_Enabled();
            Initialize_Active();
            Initialize_LastActivityEpochSec();
            Initialize_MeasurementId();
            Initialize_MeasurementName();
            Initialize_AvailableSizeMB();
            Initialize_CapacityMB();
            Initialize_MaxTimeSec();
            Initialize_HandledDataMB();
            Initialize_ActualDataRateMBps();
            Initialize_Events();
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
    // Item Id (Type: "std::string")
    protected:
        void Construct_Id(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Id()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Id()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Id(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Id()))
                {
                    Construct_Id();
                }
                if ((*Value()).hasMember(ItemName_Id()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Id()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Id(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Id()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Id(void) const
        {
            return (*Value())[ItemName_Id()];
        }
        bool Get_Id(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Id()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Id()]);
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
// Item ConfigValid (Type: "bool")
protected:
    void Construct_ConfigValid(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ConfigValid()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_ConfigValid()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ConfigValid(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ConfigValid()))
                {
                    Construct_ConfigValid();
                }
                if ((*Value()).hasMember(ItemName_ConfigValid()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_ConfigValid()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ConfigValid(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_ConfigValid()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_ConfigValid(void) const
        {
            bool GetValue = (*Value())[ItemName_ConfigValid()];
            return (bool)GetValue;
        }
        bool Get_ConfigValid(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ConfigValid()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_ConfigValid()]));
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
// Item LastActivityEpochSec (Type: "double")
protected:
    void Construct_LastActivityEpochSec(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_LastActivityEpochSec()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_LastActivityEpochSec()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_LastActivityEpochSec(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LastActivityEpochSec()))
                {
                    Construct_LastActivityEpochSec();
                }
                if ((*Value()).hasMember(ItemName_LastActivityEpochSec()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_LastActivityEpochSec()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LastActivityEpochSec(double SetValue)
        {
            try
            {
                (*Value())[ItemName_LastActivityEpochSec()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_LastActivityEpochSec(void) const
        {
            double GetValue = (*Value())[ItemName_LastActivityEpochSec()];
            return (double)GetValue;
        }
        bool Get_LastActivityEpochSec(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LastActivityEpochSec()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_LastActivityEpochSec()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item MeasurementId (Type: "std::string")
    protected:
        void Construct_MeasurementId(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MeasurementId()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MeasurementId()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_MeasurementId(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MeasurementId()))
                {
                    Construct_MeasurementId();
                }
                if ((*Value()).hasMember(ItemName_MeasurementId()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_MeasurementId()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MeasurementId(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_MeasurementId()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_MeasurementId(void) const
        {
            return (*Value())[ItemName_MeasurementId()];
        }
        bool Get_MeasurementId(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MeasurementId()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_MeasurementId()]);
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
// Item AvailableSizeMB (Type: "double")
protected:
    void Construct_AvailableSizeMB(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_AvailableSizeMB()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_AvailableSizeMB()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_AvailableSizeMB(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_AvailableSizeMB()))
                {
                    Construct_AvailableSizeMB();
                }
                if ((*Value()).hasMember(ItemName_AvailableSizeMB()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_AvailableSizeMB()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_AvailableSizeMB(double SetValue)
        {
            try
            {
                (*Value())[ItemName_AvailableSizeMB()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_AvailableSizeMB(void) const
        {
            double GetValue = (*Value())[ItemName_AvailableSizeMB()];
            return (double)GetValue;
        }
        bool Get_AvailableSizeMB(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_AvailableSizeMB()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_AvailableSizeMB()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item CapacityMB (Type: "double")
protected:
    void Construct_CapacityMB(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_CapacityMB()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_CapacityMB()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_CapacityMB(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CapacityMB()))
                {
                    Construct_CapacityMB();
                }
                if ((*Value()).hasMember(ItemName_CapacityMB()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_CapacityMB()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_CapacityMB(double SetValue)
        {
            try
            {
                (*Value())[ItemName_CapacityMB()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_CapacityMB(void) const
        {
            double GetValue = (*Value())[ItemName_CapacityMB()];
            return (double)GetValue;
        }
        bool Get_CapacityMB(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_CapacityMB()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_CapacityMB()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item MaxTimeSec (Type: "int32_t")
protected:
    void Construct_MaxTimeSec(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MaxTimeSec()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_MaxTimeSec()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_MaxTimeSec(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MaxTimeSec()))
                {
                    Construct_MaxTimeSec();
                }
                if ((*Value()).hasMember(ItemName_MaxTimeSec()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_MaxTimeSec()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MaxTimeSec(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_MaxTimeSec()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_MaxTimeSec(void) const
        {
            int32_t GetValue = (*Value())[ItemName_MaxTimeSec()];
            return (int32_t)GetValue;
        }
        bool Get_MaxTimeSec(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MaxTimeSec()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_MaxTimeSec()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item HandledDataMB (Type: "double")
protected:
    void Construct_HandledDataMB(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_HandledDataMB()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_HandledDataMB()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_HandledDataMB(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_HandledDataMB()))
                {
                    Construct_HandledDataMB();
                }
                if ((*Value()).hasMember(ItemName_HandledDataMB()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_HandledDataMB()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_HandledDataMB(double SetValue)
        {
            try
            {
                (*Value())[ItemName_HandledDataMB()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_HandledDataMB(void) const
        {
            double GetValue = (*Value())[ItemName_HandledDataMB()];
            return (double)GetValue;
        }
        bool Get_HandledDataMB(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_HandledDataMB()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_HandledDataMB()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item ActualDataRateMBps (Type: "double")
protected:
    void Construct_ActualDataRateMBps(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ActualDataRateMBps()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_ActualDataRateMBps()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ActualDataRateMBps(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ActualDataRateMBps()))
                {
                    Construct_ActualDataRateMBps();
                }
                if ((*Value()).hasMember(ItemName_ActualDataRateMBps()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_ActualDataRateMBps()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ActualDataRateMBps(double SetValue)
        {
            try
            {
                (*Value())[ItemName_ActualDataRateMBps()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_ActualDataRateMBps(void) const
        {
            double GetValue = (*Value())[ItemName_ActualDataRateMBps()];
            return (double)GetValue;
        }
        bool Get_ActualDataRateMBps(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ActualDataRateMBps()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_ActualDataRateMBps()]));
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
}; // class CTypeBufferStates


//------------------------------------------------------------------------
// DataBufferAPI::GetHSPBufferConfig::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATABUFFERAPI_GETHSPBUFFERCONFIG)
namespace GetHSPBufferConfig
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_HSPConfig(void)
    {
        static std::string str("HSPConfig");
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
        static std::string str("DataBufferAPI.GetHSPBufferConfig");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_HSPConfig();
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
            Construct_HSPConfig();
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
            Initialize_HSPConfig();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataBufferAPI::GetHSPBufferConfig");
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
    // Item HSPConfig (Type: "CTypeHSPBufferConfig")
    protected:
        void Construct_HSPConfig(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_HSPConfig()))
                {
                    CTypeHSPBufferConfig InitValue;
                    (*Value())[ItemName_HSPConfig()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_HSPConfig(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_HSPConfig()))
                {
                    Construct_HSPConfig();
                }
                if ((*Value()).hasMember(ItemName_HSPConfig()))
                {
                    CTypeHSPBufferConfig InitValue;
                    (*Value())[ItemName_HSPConfig()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_HSPConfig(const CTypeHSPBufferConfig& SetValue)
        {
            try
            {
                (*Value())[ItemName_HSPConfig()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CTypeHSPBufferConfig Get_HSPConfig(void) const
        {
            return (*Value())[ItemName_HSPConfig()];
        }
        bool Get_HSPConfig(CTypeHSPBufferConfig& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_HSPConfig()]).valid())
                {
                    GetValue = (*Value())[ItemName_HSPConfig()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GetHSPBufferConfig
#endif //#if defined(IMPLEMENT_DATABUFFERAPI_GETHSPBUFFERCONFIG)


//------------------------------------------------------------------------
// DataBufferAPI::Create::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATABUFFERAPI_CREATE)
namespace Create
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Config(void)
    {
        static std::string str("Config");
        return str;
    }
public:
    static std::string const& ItemName_HSPConfig(void)
    {
        static std::string str("HSPConfig");
        return str;
    }
public:
    static std::string const& ItemName_OverwriteExisting(void)
    {
        static std::string str("OverwriteExisting");
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
        static std::string str("DataBufferAPI.Create");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Config();
            Construct_HSPConfig();
            Construct_OverwriteExisting();
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
            Construct_Config();
            Construct_HSPConfig();
            Construct_OverwriteExisting();
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
            Initialize_Config();
            Initialize_HSPConfig();
            Initialize_OverwriteExisting();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataBufferAPI::Create");
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
    // Item Config (Type: "CTypeBufferConfig")
    protected:
        void Construct_Config(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Config()))
                {
                    CTypeBufferConfig InitValue;
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
                    CTypeBufferConfig InitValue;
                    (*Value())[ItemName_Config()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Config(const CTypeBufferConfig& SetValue)
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
        CTypeBufferConfig Get_Config(void) const
        {
            return (*Value())[ItemName_Config()];
        }
        bool Get_Config(CTypeBufferConfig& GetValue) const
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
    // Item HSPConfig (Type: "CTypeHSPBufferConfig")
    protected:
        void Construct_HSPConfig(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_HSPConfig()))
                {
                    CTypeHSPBufferConfig InitValue;
                    (*Value())[ItemName_HSPConfig()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_HSPConfig(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_HSPConfig()))
                {
                    Construct_HSPConfig();
                }
                if ((*Value()).hasMember(ItemName_HSPConfig()))
                {
                    CTypeHSPBufferConfig InitValue;
                    (*Value())[ItemName_HSPConfig()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_HSPConfig(const CTypeHSPBufferConfig& SetValue)
        {
            try
            {
                (*Value())[ItemName_HSPConfig()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CTypeHSPBufferConfig Get_HSPConfig(void) const
        {
            return (*Value())[ItemName_HSPConfig()];
        }
        bool Get_HSPConfig(CTypeHSPBufferConfig& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_HSPConfig()]).valid())
                {
                    GetValue = (*Value())[ItemName_HSPConfig()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item OverwriteExisting (Type: "bool")
protected:
    void Construct_OverwriteExisting(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_OverwriteExisting()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_OverwriteExisting()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_OverwriteExisting(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_OverwriteExisting()))
                {
                    Construct_OverwriteExisting();
                }
                if ((*Value()).hasMember(ItemName_OverwriteExisting()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_OverwriteExisting()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_OverwriteExisting(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_OverwriteExisting()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_OverwriteExisting(void) const
        {
            bool GetValue = (*Value())[ItemName_OverwriteExisting()];
            return (bool)GetValue;
        }
        bool Get_OverwriteExisting(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_OverwriteExisting()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_OverwriteExisting()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace Create
#endif //#if defined(IMPLEMENT_DATABUFFERAPI_CREATE)


//------------------------------------------------------------------------
// DataBufferAPI::GetStates::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATABUFFERAPI_GETSTATES)
namespace GetStates
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Buffer(void)
    {
        static std::string str("Buffer");
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
        static std::string str("DataBufferAPI.GetStates");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Buffer();
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
            Construct_Buffer();
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
            Initialize_Buffer();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataBufferAPI::GetStates");
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
    // Item Buffer (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Buffer(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Buffer()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Buffer()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Buffer(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Buffer()))
                {
                    Construct_Buffer();
                }
                if ((*Value()).hasMember(ItemName_Buffer()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Buffer()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Buffer(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Buffer()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Buffer(void) const
        {
            return (*Value())[ItemName_Buffer()];
        }
        bool Get_Buffer(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Buffer()]).valid())
                {
                    GetValue = (*Value())[ItemName_Buffer()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GetStates
#endif //#if defined(IMPLEMENT_DATABUFFERAPI_GETSTATES)


//------------------------------------------------------------------------
// DataBufferAPI::GetConfig::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATABUFFERAPI_GETCONFIG)
namespace GetConfig
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Buffer(void)
    {
        static std::string str("Buffer");
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
        static std::string str("DataBufferAPI.GetConfig");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Buffer();
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
            Construct_Buffer();
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
            Initialize_Buffer();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataBufferAPI::GetConfig");
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
    // Item Buffer (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Buffer(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Buffer()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Buffer()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Buffer(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Buffer()))
                {
                    Construct_Buffer();
                }
                if ((*Value()).hasMember(ItemName_Buffer()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Buffer()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Buffer(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Buffer()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Buffer(void) const
        {
            return (*Value())[ItemName_Buffer()];
        }
        bool Get_Buffer(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Buffer()]).valid())
                {
                    GetValue = (*Value())[ItemName_Buffer()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GetConfig
#endif //#if defined(IMPLEMENT_DATABUFFERAPI_GETCONFIG)


//------------------------------------------------------------------------
// DataBufferAPI::Delete::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATABUFFERAPI_DELETE)
namespace Delete
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Buffer(void)
    {
        static std::string str("Buffer");
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
        static std::string str("DataBufferAPI.Delete");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Buffer();
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
            Construct_Buffer();
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
            Initialize_Buffer();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataBufferAPI::Delete");
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
    // Item Buffer (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Buffer(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Buffer()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Buffer()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Buffer(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Buffer()))
                {
                    Construct_Buffer();
                }
                if ((*Value()).hasMember(ItemName_Buffer()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Buffer()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Buffer(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Buffer()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Buffer(void) const
        {
            return (*Value())[ItemName_Buffer()];
        }
        bool Get_Buffer(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Buffer()]).valid())
                {
                    GetValue = (*Value())[ItemName_Buffer()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace Delete
#endif //#if defined(IMPLEMENT_DATABUFFERAPI_DELETE)


//------------------------------------------------------------------------
// DataBufferAPI::Enable::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATABUFFERAPI_ENABLE)
namespace Enable
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Buffer(void)
    {
        static std::string str("Buffer");
        return str;
    }
public:
    static std::string const& ItemName_Enabled(void)
    {
        static std::string str("Enabled");
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
    static std::string const& ItemName_DataSegmentEndTime(void)
    {
        static std::string str("DataSegmentEndTime");
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
        static std::string str("DataBufferAPI.Enable");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Buffer();
            Construct_Enabled();
            Construct_MeasurementName();
            Construct_MetaData();
            Construct_DataSegmentEndTime();
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
            Construct_Buffer();
            Construct_Enabled();
            Construct_MeasurementName();
            Construct_MetaData();
            Construct_DataSegmentEndTime();
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
            Initialize_Buffer();
            Initialize_Enabled();
            Initialize_MeasurementName();
            Initialize_MetaData();
            Initialize_DataSegmentEndTime();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataBufferAPI::Enable");
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
    // Item Buffer (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Buffer(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Buffer()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Buffer()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Buffer(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Buffer()))
                {
                    Construct_Buffer();
                }
                if ((*Value()).hasMember(ItemName_Buffer()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Buffer()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Buffer(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Buffer()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Buffer(void) const
        {
            return (*Value())[ItemName_Buffer()];
        }
        bool Get_Buffer(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Buffer()]).valid())
                {
                    GetValue = (*Value())[ItemName_Buffer()];
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
    // Item DataSegmentEndTime (Type: "struct tm")
    protected:
        void Construct_DataSegmentEndTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataSegmentEndTime()))
                {
                    struct tm InitValue;
                    InitValue = {0};
                    (*Value())[ItemName_DataSegmentEndTime()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DataSegmentEndTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataSegmentEndTime()))
                {
                    Construct_DataSegmentEndTime();
                }
                if ((*Value()).hasMember(ItemName_DataSegmentEndTime()))
                {
                    struct tm InitValue;
                    InitValue = {0};
                    (*Value())[ItemName_DataSegmentEndTime()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DataSegmentEndTime(const struct tm& SetValue)
        {
            try 
            {
                (*Value())[ItemName_DataSegmentEndTime()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        struct tm Get_DataSegmentEndTime(void) const
        {
            return (*Value())[ItemName_DataSegmentEndTime()];
        }
        bool Get_DataSegmentEndTime(struct tm& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DataSegmentEndTime()]).valid())
                {
                    GetValue = (*Value())[ItemName_DataSegmentEndTime()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace Enable
#endif //#if defined(IMPLEMENT_DATABUFFERAPI_ENABLE)


//------------------------------------------------------------------------
// DataBufferAPI::Stop::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATABUFFERAPI_STOP)
namespace Stop
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Buffer(void)
    {
        static std::string str("Buffer");
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
        static std::string str("DataBufferAPI.Stop");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Buffer();
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
            Construct_Buffer();
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
            Initialize_Buffer();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataBufferAPI::Stop");
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
    // Item Buffer (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Buffer(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Buffer()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Buffer()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Buffer(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Buffer()))
                {
                    Construct_Buffer();
                }
                if ((*Value()).hasMember(ItemName_Buffer()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Buffer()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Buffer(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Buffer()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Buffer(void) const
        {
            return (*Value())[ItemName_Buffer()];
        }
        bool Get_Buffer(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Buffer()]).valid())
                {
                    GetValue = (*Value())[ItemName_Buffer()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace Stop
#endif //#if defined(IMPLEMENT_DATABUFFERAPI_STOP)


//------------------------------------------------------------------------
// DataBufferAPI::GetHSPBufferConfig::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATABUFFERAPI_GETHSPBUFFERCONFIG)
namespace GetHSPBufferConfig
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
        static std::string str("DataBufferAPI.GetHSPBufferConfig");
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
            (*Value())[ItemName_MethodID()] = std::string("DataBufferAPI::GetHSPBufferConfig");
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
    // Item Config (Type: "CTypeBufferConfig")
    protected:
        void Construct_Config(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Config()))
                {
                    CTypeBufferConfig InitValue;
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
                    CTypeBufferConfig InitValue;
                    (*Value())[ItemName_Config()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Config(const CTypeBufferConfig& SetValue)
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
        CTypeBufferConfig Get_Config(void) const
        {
            return (*Value())[ItemName_Config()];
        }
        bool Get_Config(CTypeBufferConfig& GetValue) const
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
} // namespace GetHSPBufferConfig
#endif //#if defined(IMPLEMENT_DATABUFFERAPI_GETHSPBUFFERCONFIG)


//------------------------------------------------------------------------
// DataBufferAPI::Create::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATABUFFERAPI_CREATE)
namespace Create
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Buffer(void)
    {
        static std::string str("Buffer");
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
        static std::string str("DataBufferAPI.Create");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Buffer();
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
            Construct_Buffer();
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
            Initialize_Buffer();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataBufferAPI::Create");
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
    // Item Buffer (Type: "GInsXmlRpcStdAPI::CGIns_Base_ElementValue")
    protected:
        void Construct_Buffer(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Buffer()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_Buffer()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Buffer(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Buffer()))
                {
                    Construct_Buffer();
                }
                if ((*Value()).hasMember(ItemName_Buffer()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_Buffer()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Buffer(const GInsXmlRpcStdAPI::CGIns_Base_ElementValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_Buffer()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Base_ElementValue Get_Buffer(void) const
        {
            return (*Value())[ItemName_Buffer()];
        }
        bool Get_Buffer(GInsXmlRpcStdAPI::CGIns_Base_ElementValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Buffer()]).valid())
                {
                    GetValue = (*Value())[ItemName_Buffer()];
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
} // namespace Create
#endif //#if defined(IMPLEMENT_DATABUFFERAPI_CREATE)


//------------------------------------------------------------------------
// DataBufferAPI::GetStates::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATABUFFERAPI_GETSTATES)
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
        static std::string str("DataBufferAPI.GetStates");
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
            (*Value())[ItemName_MethodID()] = std::string("DataBufferAPI::GetStates");
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
    // Item States (Type: "CTypeBufferStates")
    protected:
        void Construct_States(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_States()))
                {
                    CTypeBufferStates InitValue;
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
                    CTypeBufferStates InitValue;
                    (*Value())[ItemName_States()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_States(const CTypeBufferStates& SetValue)
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
        CTypeBufferStates Get_States(void) const
        {
            return (*Value())[ItemName_States()];
        }
        bool Get_States(CTypeBufferStates& GetValue) const
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
#endif //#if defined(IMPLEMENT_DATABUFFERAPI_GETSTATES)


//------------------------------------------------------------------------
// DataBufferAPI::GetConfig::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATABUFFERAPI_GETCONFIG)
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
        static std::string str("DataBufferAPI.GetConfig");
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
            (*Value())[ItemName_MethodID()] = std::string("DataBufferAPI::GetConfig");
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
    // Item Config (Type: "CTypeBufferConfig")
    protected:
        void Construct_Config(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Config()))
                {
                    CTypeBufferConfig InitValue;
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
                    CTypeBufferConfig InitValue;
                    (*Value())[ItemName_Config()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Config(const CTypeBufferConfig& SetValue)
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
        CTypeBufferConfig Get_Config(void) const
        {
            return (*Value())[ItemName_Config()];
        }
        bool Get_Config(CTypeBufferConfig& GetValue) const
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
#endif //#if defined(IMPLEMENT_DATABUFFERAPI_GETCONFIG)


//------------------------------------------------------------------------
// DataBufferAPI::ListBuffers::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATABUFFERAPI_LISTBUFFERS)
namespace ListBuffers
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
        static std::string str("DataBufferAPI.ListBuffers");
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
            (*Value())[ItemName_MethodID()] = std::string("DataBufferAPI::ListBuffers");
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
} // namespace ListBuffers
#endif //#if defined(IMPLEMENT_DATABUFFERAPI_LISTBUFFERS)


//------------------------------------------------------------------------
// DataBufferAPI::Delete::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATABUFFERAPI_DELETE)
namespace Delete
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
        static std::string str("DataBufferAPI.Delete");
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
            (*Value())[ItemName_MethodID()] = std::string("DataBufferAPI::Delete");
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
} // namespace Delete
#endif //#if defined(IMPLEMENT_DATABUFFERAPI_DELETE)


//------------------------------------------------------------------------
// DataBufferAPI::Enable::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATABUFFERAPI_ENABLE)
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
        static std::string str("DataBufferAPI.Enable");
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
            (*Value())[ItemName_MethodID()] = std::string("DataBufferAPI::Enable");
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
#endif //#if defined(IMPLEMENT_DATABUFFERAPI_ENABLE)


//------------------------------------------------------------------------
// DataBufferAPI::Stop::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DATABUFFERAPI_STOP)
namespace Stop
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
        static std::string str("DataBufferAPI.Stop");
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
            (*Value())[ItemName_MethodID()] = std::string("DataBufferAPI::Stop");
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
} // namespace Stop
#endif //#if defined(IMPLEMENT_DATABUFFERAPI_STOP)
//========================================================================
}; // namespace DataBufferAPI
//========================================================================
#endif // #if !defined(_DATABUFFERAPI_TYPES_H)

