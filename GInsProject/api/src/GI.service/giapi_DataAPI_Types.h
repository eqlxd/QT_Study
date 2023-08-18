//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_GIAPI_DATAAPI_TYPES_H)
#define _GIAPI_DATAAPI_TYPES_H
//========================================================================
// Implemented methods
#define IMPLEMENT_GIAPI_DATAAPI_GETONLINEVARIABLES
#define IMPLEMENT_GIAPI_DATAAPI_GETONLINEDATA
#define IMPLEMENT_GIAPI_DATAAPI_SETONLINEDATA
#define IMPLEMENT_GIAPI_DATAAPI_SENDVALUECMD
#define IMPLEMENT_GIAPI_DATAAPI_ADDMETADATAFORSTREAM
#define IMPLEMENT_GIAPI_DATAAPI_CLEARSTREAMCLIENTS
#define IMPLEMENT_GIAPI_DATAAPI_GETRAWDATAPACKETS


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "giapi_DataAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace giapi_DataAPI {
//========================================================================
//------------------------------------------------------------------------
// giapi_DataAPI::CAPIInfo
//------------------------------------------------------------------------
class CAPIInfo
{
public:
    static std::string const& Name(void)
    {
        static std::string str("DataAPI");
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
// giapi_DataAPI::Enum_ValueState
//------------------------------------------------------------------------
enum Enum_ValueState {
    VALUESTATE_OK = 0,
    VALUESTATE_ERROR_RANGE_MIN = 1,
    VALUESTATE_ERROR_RANGE_MAX = 2,
    VALUESTATE_ERROR_NOTANUMBER = 3,
    VALUESTATE_WARNUNG_LIMIT_LOW = 4,
    VALUESTATE_WARNUNG_LIMIT_HIGH = 5,
    VALUESTATE_ERROR_LIMIT_LOW = 6,
    VALUESTATE_ERROR_LIMIT_HIGH = 7,
}; // enum Enum_ValueState


//------------------------------------------------------------------------
// giapi_DataAPI::CStructVariable
//------------------------------------------------------------------------
class CStructVariable : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Index(void)
        {
            static std::string str("Index");
            return str;
        }
    public:
        static std::string const& ItemName_IndexIn(void)
        {
            static std::string str("IndexIn");
            return str;
        }
    public:
        static std::string const& ItemName_IndexOut(void)
        {
            static std::string str("IndexOut");
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
        static std::string const& ItemName_Direction(void)
        {
            static std::string str("Direction");
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
        static std::string str("StructVariable");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("7.0");
        return str;
    }
public:
    CStructVariable(void)
    {
        try
        {
            Construct_Index();
            Construct_IndexIn();
            Construct_IndexOut();
            Construct_Id();
            Construct_Name();
            Construct_Unit();
            Construct_Type();
            Construct_RangeMax();
            Construct_RangeMin();
            Construct_Direction();
            Construct_Precision();
            Construct_DataFormat();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructVariable(const CStructVariable& rhs) : 
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
    CStructVariable(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_IndexIn();
            Construct_IndexOut();
            Construct_Id();
            Construct_Name();
            Construct_Unit();
            Construct_Type();
            Construct_RangeMax();
            Construct_RangeMin();
            Construct_Direction();
            Construct_Precision();
            Construct_DataFormat();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructVariable(void)
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
            Initialize_IndexIn();
            Initialize_IndexOut();
            Initialize_Id();
            Initialize_Name();
            Initialize_Unit();
            Initialize_Type();
            Initialize_RangeMax();
            Initialize_RangeMin();
            Initialize_Direction();
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
// Item IndexIn (Type: "int32_t")
protected:
    void Construct_IndexIn(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_IndexIn()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_IndexIn()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_IndexIn(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IndexIn()))
                {
                    Construct_IndexIn();
                }
                if ((*Value()).hasMember(ItemName_IndexIn()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_IndexIn()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IndexIn(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_IndexIn()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_IndexIn(void) const
        {
            int32_t GetValue = (*Value())[ItemName_IndexIn()];
            return (int32_t)GetValue;
        }
        bool Get_IndexIn(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IndexIn()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_IndexIn()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item IndexOut (Type: "int32_t")
protected:
    void Construct_IndexOut(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_IndexOut()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_IndexOut()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_IndexOut(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IndexOut()))
                {
                    Construct_IndexOut();
                }
                if ((*Value()).hasMember(ItemName_IndexOut()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_IndexOut()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IndexOut(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_IndexOut()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_IndexOut(void) const
        {
            int32_t GetValue = (*Value())[ItemName_IndexOut()];
            return (int32_t)GetValue;
        }
        bool Get_IndexOut(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IndexOut()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_IndexOut()]));
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
    // Item Direction (Type: "std::string")
    protected:
        void Construct_Direction(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Direction()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Direction()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Direction(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Direction()))
                {
                    Construct_Direction();
                }
                if ((*Value()).hasMember(ItemName_Direction()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Direction()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Direction(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Direction()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Direction(void) const
        {
            return (*Value())[ItemName_Direction()];
        }
        bool Get_Direction(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Direction()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Direction()]);
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
    // Item DataFormat (Type: "std::string")
    protected:
        void Construct_DataFormat(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataFormat()))
                {
                    std::string InitValue;
                    InitValue = "";
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
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DataFormat()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DataFormat(const std::string& SetValue)
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
        std::string Get_DataFormat(void) const
        {
            return (*Value())[ItemName_DataFormat()];
        }
        bool Get_DataFormat(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DataFormat()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DataFormat()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructVariable


//------------------------------------------------------------------------
// giapi_DataAPI::CStructDevice
//------------------------------------------------------------------------
class CStructDevice : public GInsXmlRpc::XmlRpcValue
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
        static std::string const& ItemName_Location(void)
        {
            static std::string str("Location");
            return str;
        }
    public:
        static std::string const& ItemName_DeviceType(void)
        {
            static std::string str("DeviceType");
            return str;
        }
    public:
        static std::string const& ItemName_Serialnumber(void)
        {
            static std::string str("Serialnumber");
            return str;
        }
    public:
        static std::string const& ItemName_CfgCheckSum(void)
        {
            static std::string str("CfgCheckSum");
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
        static std::string str("7.1");
        return str;
    }
public:
    CStructDevice(void)
    {
        try
        {
            Construct_Index();
            Construct_Id();
            Construct_Location();
            Construct_DeviceType();
            Construct_Serialnumber();
            Construct_CfgCheckSum();
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
            Construct_Index();
            Construct_Id();
            Construct_Location();
            Construct_DeviceType();
            Construct_Serialnumber();
            Construct_CfgCheckSum();
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
            Initialize_Index();
            Initialize_Id();
            Initialize_Location();
            Initialize_DeviceType();
            Initialize_Serialnumber();
            Initialize_CfgCheckSum();
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
    // Item CfgCheckSum (Type: "std::string")
    protected:
        void Construct_CfgCheckSum(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CfgCheckSum()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_CfgCheckSum()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_CfgCheckSum(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CfgCheckSum()))
                {
                    Construct_CfgCheckSum();
                }
                if ((*Value()).hasMember(ItemName_CfgCheckSum()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_CfgCheckSum()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_CfgCheckSum(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_CfgCheckSum()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_CfgCheckSum(void) const
        {
            return (*Value())[ItemName_CfgCheckSum()];
        }
        bool Get_CfgCheckSum(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_CfgCheckSum()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_CfgCheckSum()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructDevice


//------------------------------------------------------------------------
// giapi_DataAPI::CStructMeasurement
//------------------------------------------------------------------------
class CStructMeasurement : public GInsXmlRpc::XmlRpcValue
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
        static std::string const& ItemName_StartDate(void)
        {
            static std::string str("StartDate");
            return str;
        }
    public:
        static std::string const& ItemName_AbsoluteStart(void)
        {
            static std::string str("AbsoluteStart");
            return str;
        }
    public:
        static std::string const& ItemName_LastTimeStamp(void)
        {
            static std::string str("LastTimeStamp");
            return str;
        }
    public:
        static std::string const& ItemName_MaxTimeSec(void)
        {
            static std::string str("MaxTimeSec");
            return str;
        }
    public:
        static std::string const& ItemName_AvailableTimeSec(void)
        {
            static std::string str("AvailableTimeSec");
            return str;
        }
    public:
        static std::string const& ItemName_SampleRateHz(void)
        {
            static std::string str("SampleRateHz");
            return str;
        }
    public:
        static std::string const& ItemName_Kind(void)
        {
            static std::string str("Kind");
            return str;
        }
    public:
        static std::string const& ItemName_CfgCheckSum(void)
        {
            static std::string str("CfgCheckSum");
            return str;
        }
    public:
        static std::string const& ItemName_Updated(void)
        {
            static std::string str("Updated");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructMeasurement");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("7.2");
        return str;
    }
public:
    CStructMeasurement(void)
    {
        try
        {
            Construct_Index();
            Construct_Id();
            Construct_Name();
            Construct_StartDate();
            Construct_AbsoluteStart();
            Construct_LastTimeStamp();
            Construct_MaxTimeSec();
            Construct_AvailableTimeSec();
            Construct_SampleRateHz();
            Construct_Kind();
            Construct_CfgCheckSum();
            Construct_Updated();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructMeasurement(const CStructMeasurement& rhs) : 
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
    CStructMeasurement(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_Id();
            Construct_Name();
            Construct_StartDate();
            Construct_AbsoluteStart();
            Construct_LastTimeStamp();
            Construct_MaxTimeSec();
            Construct_AvailableTimeSec();
            Construct_SampleRateHz();
            Construct_Kind();
            Construct_CfgCheckSum();
            Construct_Updated();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructMeasurement(void)
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
            Initialize_StartDate();
            Initialize_AbsoluteStart();
            Initialize_LastTimeStamp();
            Initialize_MaxTimeSec();
            Initialize_AvailableTimeSec();
            Initialize_SampleRateHz();
            Initialize_Kind();
            Initialize_CfgCheckSum();
            Initialize_Updated();
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
    // Item StartDate (Type: "std::string")
    protected:
        void Construct_StartDate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StartDate()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_StartDate()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_StartDate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StartDate()))
                {
                    Construct_StartDate();
                }
                if ((*Value()).hasMember(ItemName_StartDate()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_StartDate()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StartDate(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_StartDate()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_StartDate(void) const
        {
            return (*Value())[ItemName_StartDate()];
        }
        bool Get_StartDate(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_StartDate()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_StartDate()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item AbsoluteStart (Type: "double")
protected:
    void Construct_AbsoluteStart(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_AbsoluteStart()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_AbsoluteStart()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_AbsoluteStart(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_AbsoluteStart()))
                {
                    Construct_AbsoluteStart();
                }
                if ((*Value()).hasMember(ItemName_AbsoluteStart()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_AbsoluteStart()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_AbsoluteStart(double SetValue)
        {
            try
            {
                (*Value())[ItemName_AbsoluteStart()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_AbsoluteStart(void) const
        {
            double GetValue = (*Value())[ItemName_AbsoluteStart()];
            return (double)GetValue;
        }
        bool Get_AbsoluteStart(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_AbsoluteStart()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_AbsoluteStart()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item LastTimeStamp (Type: "double")
protected:
    void Construct_LastTimeStamp(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_LastTimeStamp()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_LastTimeStamp()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_LastTimeStamp(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LastTimeStamp()))
                {
                    Construct_LastTimeStamp();
                }
                if ((*Value()).hasMember(ItemName_LastTimeStamp()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_LastTimeStamp()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LastTimeStamp(double SetValue)
        {
            try
            {
                (*Value())[ItemName_LastTimeStamp()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_LastTimeStamp(void) const
        {
            double GetValue = (*Value())[ItemName_LastTimeStamp()];
            return (double)GetValue;
        }
        bool Get_LastTimeStamp(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LastTimeStamp()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_LastTimeStamp()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item MaxTimeSec (Type: "double")
protected:
    void Construct_MaxTimeSec(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MaxTimeSec()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_MaxTimeSec()] = (double)InitValue;
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
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_MaxTimeSec()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MaxTimeSec(double SetValue)
        {
            try
            {
                (*Value())[ItemName_MaxTimeSec()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_MaxTimeSec(void) const
        {
            double GetValue = (*Value())[ItemName_MaxTimeSec()];
            return (double)GetValue;
        }
        bool Get_MaxTimeSec(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MaxTimeSec()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_MaxTimeSec()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item AvailableTimeSec (Type: "double")
protected:
    void Construct_AvailableTimeSec(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_AvailableTimeSec()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_AvailableTimeSec()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_AvailableTimeSec(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_AvailableTimeSec()))
                {
                    Construct_AvailableTimeSec();
                }
                if ((*Value()).hasMember(ItemName_AvailableTimeSec()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_AvailableTimeSec()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_AvailableTimeSec(double SetValue)
        {
            try
            {
                (*Value())[ItemName_AvailableTimeSec()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_AvailableTimeSec(void) const
        {
            double GetValue = (*Value())[ItemName_AvailableTimeSec()];
            return (double)GetValue;
        }
        bool Get_AvailableTimeSec(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_AvailableTimeSec()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_AvailableTimeSec()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item SampleRateHz (Type: "double")
protected:
    void Construct_SampleRateHz(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_SampleRateHz()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_SampleRateHz()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_SampleRateHz(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SampleRateHz()))
                {
                    Construct_SampleRateHz();
                }
                if ((*Value()).hasMember(ItemName_SampleRateHz()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_SampleRateHz()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SampleRateHz(double SetValue)
        {
            try
            {
                (*Value())[ItemName_SampleRateHz()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_SampleRateHz(void) const
        {
            double GetValue = (*Value())[ItemName_SampleRateHz()];
            return (double)GetValue;
        }
        bool Get_SampleRateHz(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SampleRateHz()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_SampleRateHz()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Kind (Type: "std::string")
    protected:
        void Construct_Kind(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Kind()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Kind()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Kind(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Kind()))
                {
                    Construct_Kind();
                }
                if ((*Value()).hasMember(ItemName_Kind()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Kind()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Kind(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Kind()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Kind(void) const
        {
            return (*Value())[ItemName_Kind()];
        }
        bool Get_Kind(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Kind()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Kind()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item CfgCheckSum (Type: "std::string")
    protected:
        void Construct_CfgCheckSum(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CfgCheckSum()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_CfgCheckSum()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_CfgCheckSum(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CfgCheckSum()))
                {
                    Construct_CfgCheckSum();
                }
                if ((*Value()).hasMember(ItemName_CfgCheckSum()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_CfgCheckSum()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_CfgCheckSum(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_CfgCheckSum()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_CfgCheckSum(void) const
        {
            return (*Value())[ItemName_CfgCheckSum()];
        }
        bool Get_CfgCheckSum(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_CfgCheckSum()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_CfgCheckSum()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Updated (Type: "bool")
protected:
    void Construct_Updated(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Updated()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Updated()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Updated(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Updated()))
                {
                    Construct_Updated();
                }
                if ((*Value()).hasMember(ItemName_Updated()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Updated()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Updated(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Updated()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Updated(void) const
        {
            bool GetValue = (*Value())[ItemName_Updated()];
            return (bool)GetValue;
        }
        bool Get_Updated(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Updated()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Updated()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructMeasurement


//------------------------------------------------------------------------
// giapi_DataAPI::CStructExtValue
//------------------------------------------------------------------------
class CStructExtValue : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Value(void)
        {
            static std::string str("Value");
            return str;
        }
    public:
        static std::string const& ItemName_Id(void)
        {
            static std::string str("Id");
            return str;
        }
    public:
        static std::string const& ItemName_State(void)
        {
            static std::string str("State");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("StructExtValue");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("7.3");
        return str;
    }
public:
    CStructExtValue(void)
    {
        try
        {
            Construct_Value();
            Construct_Id();
            Construct_State();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CStructExtValue(const CStructExtValue& rhs) : 
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
    CStructExtValue(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_Value();
            Construct_Id();
            Construct_State();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CStructExtValue(void)
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
            Initialize_Value();
            Initialize_Id();
            Initialize_State();
        }
        catch (...) {}
    }
//------------------------------------------------------------------------
// Item Value (Type: "double")
protected:
    void Construct_Value(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Value()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_Value()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Value(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Value()))
                {
                    Construct_Value();
                }
                if ((*Value()).hasMember(ItemName_Value()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_Value()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Value(double SetValue)
        {
            try
            {
                (*Value())[ItemName_Value()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_Value(void) const
        {
            double GetValue = (*Value())[ItemName_Value()];
            return (double)GetValue;
        }
        bool Get_Value(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Value()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_Value()]));
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
    // Item State (Type: "enum Enum_ValueState")
    protected:
        void Construct_State(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_State()))
                {
                    enum Enum_ValueState InitValue;
                    InitValue = VALUESTATE_OK;
                    (*Value())[ItemName_State()] = (int)InitValue;
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
                    enum Enum_ValueState InitValue;
                    InitValue = VALUESTATE_OK;
                    (*Value())[ItemName_State()] = (int)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_State(enum Enum_ValueState SetValue)
        {
            try
            {
                (*Value())[ItemName_State()] = (int)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        enum Enum_ValueState Get_State(void) const
        {
            int GetValue = (*Value())[ItemName_State()];
            return (enum Enum_ValueState)GetValue;
        }
        bool Get_State(enum Enum_ValueState& GetValue) const
        {
            try
            {
                if ((*Value())[ItemName_State()].valid())
                {
                    GetValue = (enum Enum_ValueState)((int)((*Value())[ItemName_State()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CStructExtValue


//------------------------------------------------------------------------
// giapi_DataAPI::GetOnlineData::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GIAPI_DATAAPI_GETONLINEDATA)
namespace GetOnlineData
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Index_List(void)
    {
        static std::string str("Index_List");
        return str;
    }
public:
    static std::string const& ItemName_Id_List(void)
    {
        static std::string str("Id_List");
        return str;
    }
public:
    static std::string const& ItemName_ExtAnswer(void)
    {
        static std::string str("ExtAnswer");
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
        static std::string str("DataAPI.GetOnlineData");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Index_List();
            Construct_Id_List();
            Construct_ExtAnswer();
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
            Construct_Index_List();
            Construct_Id_List();
            Construct_ExtAnswer();
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
            Initialize_Index_List();
            Initialize_Id_List();
            Initialize_ExtAnswer();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataAPI::GetOnlineData");
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
// Item Index_List (Type: "int32_t[0]")
    protected:
        void Construct_Index_List(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Index_List()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Index_List()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Index_List(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Index_List()))
                {
                    Construct_Index_List();
                }
                if ((*Value()).hasMember(ItemName_Index_List()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Index_List()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Index_List(int NewSize)
        {
            try
            {
                int32_t InitValue;
                InitValue = 0;
                (*Value())[ItemName_Index_List()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch(...) {}
            return false;
        }
        int GetSize_Index_List(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Index_List()))
                {
                    return (*Value())[ItemName_Index_List()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Index_List(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Index_List()))
                {
                    (*Value())[ItemName_Index_List()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Index_List(int ArrayIndex, int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Index_List()].insertArrayValue(ArrayIndex,(int32_t)SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Index_List(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Index_List()))
                {
                    (*Value())[ItemName_Index_List()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Index_List(int ArrayIndex, int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Index_List()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Index_List()][ArrayIndex] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Set_Index_List(const std::vector<int32_t>& SetValue)
        {
            try
            {
                SetSize_Index_List((int)SetValue.size());
                for (int ArrayIndex = 0; ArrayIndex < (int)SetValue.size(); ArrayIndex++)
                {
                    (*Value())[ItemName_Index_List()][ArrayIndex] = (int32_t)SetValue[ArrayIndex];
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Index_List(int ArrayIndex) const
        {
            int32_t GetValue = (*Value())[ItemName_Index_List()][ArrayIndex];
            return (int32_t)GetValue;
        }
        bool Get_Index_List(int ArrayIndex, int32_t& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Index_List()))
                {
                    if (((*Value())[ItemName_Index_List()][ArrayIndex]).valid())
                    {
                        GetValue = (int32_t)((int32_t)((*Value())[ItemName_Index_List()][ArrayIndex]));
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Id_List (Type: "std::string[0]")
    protected:
        void Construct_Id_List(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Id_List()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Id_List()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Id_List(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Id_List()))
                {
                    Construct_Id_List();
                }
                if ((*Value()).hasMember(ItemName_Id_List()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Id_List()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Id_List(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_Id_List()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Id_List(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Id_List()))
                {
                    return (*Value())[ItemName_Id_List()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Id_List(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Id_List()))
                {
                    (*Value())[ItemName_Id_List()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Id_List(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_Id_List()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Id_List(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Id_List()))
                {
                    (*Value())[ItemName_Id_List()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Id_List(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_Id_List())
                {
                    SetSize_Id_List(ArrayIndex + 1);
                }
                (*Value())[ItemName_Id_List()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Id_List(int ArrayIndex) const
        {
            return (*Value())[ItemName_Id_List()][ArrayIndex];
        }
        bool Get_Id_List(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Id_List()))
                {
                    if (((*Value())[ItemName_Id_List()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_Id_List()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item ExtAnswer (Type: "bool")
protected:
    void Construct_ExtAnswer(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ExtAnswer()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_ExtAnswer()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ExtAnswer(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ExtAnswer()))
                {
                    Construct_ExtAnswer();
                }
                if ((*Value()).hasMember(ItemName_ExtAnswer()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_ExtAnswer()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ExtAnswer(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_ExtAnswer()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_ExtAnswer(void) const
        {
            bool GetValue = (*Value())[ItemName_ExtAnswer()];
            return (bool)GetValue;
        }
        bool Get_ExtAnswer(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ExtAnswer()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_ExtAnswer()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GetOnlineData
#endif //#if defined(IMPLEMENT_GIAPI_DATAAPI_GETONLINEDATA)


//------------------------------------------------------------------------
// giapi_DataAPI::SetOnlineData::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GIAPI_DATAAPI_SETONLINEDATA)
namespace SetOnlineData
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Index_List(void)
    {
        static std::string str("Index_List");
        return str;
    }
public:
    static std::string const& ItemName_Id_List(void)
    {
        static std::string str("Id_List");
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
        static std::string str("DataAPI.SetOnlineData");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Index_List();
            Construct_Id_List();
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
            Construct_Index_List();
            Construct_Id_List();
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
            Initialize_Index_List();
            Initialize_Id_List();
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
            (*Value())[ItemName_MethodID()] = std::string("DataAPI::SetOnlineData");
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
// Item Index_List (Type: "int32_t[0]")
    protected:
        void Construct_Index_List(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Index_List()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Index_List()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Index_List(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Index_List()))
                {
                    Construct_Index_List();
                }
                if ((*Value()).hasMember(ItemName_Index_List()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Index_List()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Index_List(int NewSize)
        {
            try
            {
                int32_t InitValue;
                InitValue = 0;
                (*Value())[ItemName_Index_List()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch(...) {}
            return false;
        }
        int GetSize_Index_List(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Index_List()))
                {
                    return (*Value())[ItemName_Index_List()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Index_List(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Index_List()))
                {
                    (*Value())[ItemName_Index_List()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Index_List(int ArrayIndex, int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Index_List()].insertArrayValue(ArrayIndex,(int32_t)SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Index_List(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Index_List()))
                {
                    (*Value())[ItemName_Index_List()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Index_List(int ArrayIndex, int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Index_List()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Index_List()][ArrayIndex] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Set_Index_List(const std::vector<int32_t>& SetValue)
        {
            try
            {
                SetSize_Index_List((int)SetValue.size());
                for (int ArrayIndex = 0; ArrayIndex < (int)SetValue.size(); ArrayIndex++)
                {
                    (*Value())[ItemName_Index_List()][ArrayIndex] = (int32_t)SetValue[ArrayIndex];
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Index_List(int ArrayIndex) const
        {
            int32_t GetValue = (*Value())[ItemName_Index_List()][ArrayIndex];
            return (int32_t)GetValue;
        }
        bool Get_Index_List(int ArrayIndex, int32_t& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Index_List()))
                {
                    if (((*Value())[ItemName_Index_List()][ArrayIndex]).valid())
                    {
                        GetValue = (int32_t)((int32_t)((*Value())[ItemName_Index_List()][ArrayIndex]));
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Id_List (Type: "std::string[0]")
    protected:
        void Construct_Id_List(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Id_List()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Id_List()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Id_List(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Id_List()))
                {
                    Construct_Id_List();
                }
                if ((*Value()).hasMember(ItemName_Id_List()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Id_List()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Id_List(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_Id_List()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Id_List(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Id_List()))
                {
                    return (*Value())[ItemName_Id_List()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Id_List(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Id_List()))
                {
                    (*Value())[ItemName_Id_List()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Id_List(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_Id_List()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Id_List(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Id_List()))
                {
                    (*Value())[ItemName_Id_List()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Id_List(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_Id_List())
                {
                    SetSize_Id_List(ArrayIndex + 1);
                }
                (*Value())[ItemName_Id_List()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Id_List(int ArrayIndex) const
        {
            return (*Value())[ItemName_Id_List()][ArrayIndex];
        }
        bool Get_Id_List(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Id_List()))
                {
                    if (((*Value())[ItemName_Id_List()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_Id_List()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Values (Type: "double[0]")
    protected:
        void Construct_Values(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Values()))
                {
                    double InitValue;
                    InitValue = 0.0;
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
                    double InitValue;
                    InitValue = 0.0;
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
                double InitValue;
                InitValue = 0.0;
                (*Value())[ItemName_Values()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch(...) {}
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
        bool Insert_Values(int ArrayIndex, double SetValue)
        {
            try
            {
                (*Value())[ItemName_Values()].insertArrayValue(ArrayIndex,(double)SetValue);
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
        bool Set_Values(int ArrayIndex, double SetValue)
        {
            try
            {
                (*Value())[ItemName_Values()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Values()][ArrayIndex] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Set_Values(const std::vector<double>& SetValue)
        {
            try
            {
                SetSize_Values((int)SetValue.size());
                for (int ArrayIndex = 0; ArrayIndex < (int)SetValue.size(); ArrayIndex++)
                {
                    (*Value())[ItemName_Values()][ArrayIndex] = (double)SetValue[ArrayIndex];
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_Values(int ArrayIndex) const
        {
            double GetValue = (*Value())[ItemName_Values()][ArrayIndex];
            return (double)GetValue;
        }
        bool Get_Values(int ArrayIndex, double& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Values()))
                {
                    if (((*Value())[ItemName_Values()][ArrayIndex]).valid())
                    {
                        GetValue = (double)((double)((*Value())[ItemName_Values()][ArrayIndex]));
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace SetOnlineData
#endif //#if defined(IMPLEMENT_GIAPI_DATAAPI_SETONLINEDATA)


//------------------------------------------------------------------------
// giapi_DataAPI::SendValueCmd::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GIAPI_DATAAPI_SENDVALUECMD)
namespace SendValueCmd
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Index_List(void)
    {
        static std::string str("Index_List");
        return str;
    }
public:
    static std::string const& ItemName_Id_List(void)
    {
        static std::string str("Id_List");
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
        static std::string str("DataAPI.SendValueCmd");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Index_List();
            Construct_Id_List();
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
            Construct_Index_List();
            Construct_Id_List();
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
            Initialize_Index_List();
            Initialize_Id_List();
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
            (*Value())[ItemName_MethodID()] = std::string("DataAPI::SendValueCmd");
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
// Item Index_List (Type: "int32_t[0]")
    protected:
        void Construct_Index_List(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Index_List()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Index_List()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Index_List(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Index_List()))
                {
                    Construct_Index_List();
                }
                if ((*Value()).hasMember(ItemName_Index_List()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Index_List()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Index_List(int NewSize)
        {
            try
            {
                int32_t InitValue;
                InitValue = 0;
                (*Value())[ItemName_Index_List()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch(...) {}
            return false;
        }
        int GetSize_Index_List(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Index_List()))
                {
                    return (*Value())[ItemName_Index_List()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Index_List(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Index_List()))
                {
                    (*Value())[ItemName_Index_List()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Index_List(int ArrayIndex, int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Index_List()].insertArrayValue(ArrayIndex,(int32_t)SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Index_List(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Index_List()))
                {
                    (*Value())[ItemName_Index_List()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Index_List(int ArrayIndex, int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Index_List()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Index_List()][ArrayIndex] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Set_Index_List(const std::vector<int32_t>& SetValue)
        {
            try
            {
                SetSize_Index_List((int)SetValue.size());
                for (int ArrayIndex = 0; ArrayIndex < (int)SetValue.size(); ArrayIndex++)
                {
                    (*Value())[ItemName_Index_List()][ArrayIndex] = (int32_t)SetValue[ArrayIndex];
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Index_List(int ArrayIndex) const
        {
            int32_t GetValue = (*Value())[ItemName_Index_List()][ArrayIndex];
            return (int32_t)GetValue;
        }
        bool Get_Index_List(int ArrayIndex, int32_t& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Index_List()))
                {
                    if (((*Value())[ItemName_Index_List()][ArrayIndex]).valid())
                    {
                        GetValue = (int32_t)((int32_t)((*Value())[ItemName_Index_List()][ArrayIndex]));
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Id_List (Type: "std::string[0]")
    protected:
        void Construct_Id_List(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Id_List()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Id_List()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Id_List(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Id_List()))
                {
                    Construct_Id_List();
                }
                if ((*Value()).hasMember(ItemName_Id_List()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Id_List()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Id_List(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_Id_List()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Id_List(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Id_List()))
                {
                    return (*Value())[ItemName_Id_List()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Id_List(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Id_List()))
                {
                    (*Value())[ItemName_Id_List()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Id_List(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_Id_List()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Id_List(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Id_List()))
                {
                    (*Value())[ItemName_Id_List()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Id_List(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_Id_List())
                {
                    SetSize_Id_List(ArrayIndex + 1);
                }
                (*Value())[ItemName_Id_List()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Id_List(int ArrayIndex) const
        {
            return (*Value())[ItemName_Id_List()][ArrayIndex];
        }
        bool Get_Id_List(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Id_List()))
                {
                    if (((*Value())[ItemName_Id_List()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_Id_List()][ArrayIndex]);
                        return true;
                    }
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
} // namespace SendValueCmd
#endif //#if defined(IMPLEMENT_GIAPI_DATAAPI_SENDVALUECMD)


//------------------------------------------------------------------------
// giapi_DataAPI::AddMetaDataForStream::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GIAPI_DATAAPI_ADDMETADATAFORSTREAM)
namespace AddMetaDataForStream
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_DataSource(void)
    {
        static std::string str("DataSource");
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
        static std::string str("DataAPI.AddMetaDataForStream");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_DataSource();
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
            Construct_DataSource();
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
            Initialize_DataSource();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataAPI::AddMetaDataForStream");
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
    // Item DataSource (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList")
    protected:
        void Construct_DataSource(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataSource()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList InitValue;
                    (*Value())[ItemName_DataSource()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DataSource(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataSource()))
                {
                    Construct_DataSource();
                }
                if ((*Value()).hasMember(ItemName_DataSource()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList InitValue;
                    (*Value())[ItemName_DataSource()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DataSource(const GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_DataSource()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList Get_DataSource(void) const
        {
            return (*Value())[ItemName_DataSource()];
        }
        bool Get_DataSource(GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DataSource()]).valid())
                {
                    GetValue = (*Value())[ItemName_DataSource()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace AddMetaDataForStream
#endif //#if defined(IMPLEMENT_GIAPI_DATAAPI_ADDMETADATAFORSTREAM)


//------------------------------------------------------------------------
// giapi_DataAPI::GetRawDataPackets::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GIAPI_DATAAPI_GETRAWDATAPACKETS)
namespace GetRawDataPackets
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_DataTopic(void)
    {
        static std::string str("DataTopic");
        return str;
    }
public:
    static std::string const& ItemName_StartEpochTimeMs(void)
    {
        static std::string str("StartEpochTimeMs");
        return str;
    }
public:
    static std::string const& ItemName_PacketCount(void)
    {
        static std::string str("PacketCount");
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
        static std::string str("DataAPI.GetRawDataPackets");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_DataTopic();
            Construct_StartEpochTimeMs();
            Construct_PacketCount();
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
            Construct_DataTopic();
            Construct_StartEpochTimeMs();
            Construct_PacketCount();
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
            Initialize_DataTopic();
            Initialize_StartEpochTimeMs();
            Initialize_PacketCount();
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
            (*Value())[ItemName_MethodID()] = std::string("DataAPI::GetRawDataPackets");
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
    // Item DataTopic (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify")
    protected:
        void Construct_DataTopic(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataTopic()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_DataTopic()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DataTopic(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataTopic()))
                {
                    Construct_DataTopic();
                }
                if ((*Value()).hasMember(ItemName_DataTopic()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_DataTopic()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DataTopic(const GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& SetValue)
        {
            try
            {
                (*Value())[ItemName_DataTopic()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify Get_DataTopic(void) const
        {
            return (*Value())[ItemName_DataTopic()];
        }
        bool Get_DataTopic(GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DataTopic()]).valid())
                {
                    GetValue = (*Value())[ItemName_DataTopic()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item StartEpochTimeMs (Type: "int64_t")
protected:
    void Construct_StartEpochTimeMs(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_StartEpochTimeMs()))
            {
                int64_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_StartEpochTimeMs()] = (int64_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_StartEpochTimeMs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StartEpochTimeMs()))
                {
                    Construct_StartEpochTimeMs();
                }
                if ((*Value()).hasMember(ItemName_StartEpochTimeMs()))
                {
                    int64_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_StartEpochTimeMs()] = (int64_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StartEpochTimeMs(int64_t SetValue)
        {
            try
            {
                (*Value())[ItemName_StartEpochTimeMs()] = (int64_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int64_t Get_StartEpochTimeMs(void) const
        {
            int64_t GetValue = (*Value())[ItemName_StartEpochTimeMs()];
            return (int64_t)GetValue;
        }
        bool Get_StartEpochTimeMs(int64_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_StartEpochTimeMs()]).valid())
                {
                    GetValue = (int64_t)((int64_t)((*Value())[ItemName_StartEpochTimeMs()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item PacketCount (Type: "int32_t")
protected:
    void Construct_PacketCount(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_PacketCount()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_PacketCount()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_PacketCount(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PacketCount()))
                {
                    Construct_PacketCount();
                }
                if ((*Value()).hasMember(ItemName_PacketCount()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_PacketCount()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_PacketCount(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_PacketCount()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_PacketCount(void) const
        {
            int32_t GetValue = (*Value())[ItemName_PacketCount()];
            return (int32_t)GetValue;
        }
        bool Get_PacketCount(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_PacketCount()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_PacketCount()]));
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
} // namespace GetRawDataPackets
#endif //#if defined(IMPLEMENT_GIAPI_DATAAPI_GETRAWDATAPACKETS)


//------------------------------------------------------------------------
// giapi_DataAPI::GetOnlineVariables::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GIAPI_DATAAPI_GETONLINEVARIABLES)
namespace GetOnlineVariables
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Variables(void)
    {
        static std::string str("Variables");
        return str;
    }
public:
    static std::string const& ItemName_CfgCheckSum(void)
    {
        static std::string str("CfgCheckSum");
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
        static std::string str("DataAPI.GetOnlineVariables");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Variables();
            Construct_CfgCheckSum();
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
            Construct_Variables();
            Construct_CfgCheckSum();
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
            Initialize_Variables();
            Initialize_CfgCheckSum();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataAPI::GetOnlineVariables");
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
    // Item Variables (Type: "CStructVariable[0]")
    protected:
        void Construct_Variables(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Variables()))
                {
                    CStructVariable InitValue;
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
                    CStructVariable InitValue;
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
                CStructVariable InitValue;
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
        bool Insert_Variables(int ArrayIndex, CStructVariable SetValue)
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
        bool Set_Variables(int ArrayIndex, const CStructVariable& SetValue)
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
        CStructVariable Get_Variables(int ArrayIndex) const
        {
            return (*Value())[ItemName_Variables()][ArrayIndex];
        }
        bool Get_Variables(int ArrayIndex, CStructVariable& GetValue) const
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
    //------------------------------------------------------------------------
    // Item CfgCheckSum (Type: "std::string")
    protected:
        void Construct_CfgCheckSum(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CfgCheckSum()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_CfgCheckSum()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_CfgCheckSum(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CfgCheckSum()))
                {
                    Construct_CfgCheckSum();
                }
                if ((*Value()).hasMember(ItemName_CfgCheckSum()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_CfgCheckSum()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_CfgCheckSum(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_CfgCheckSum()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_CfgCheckSum(void) const
        {
            return (*Value())[ItemName_CfgCheckSum()];
        }
        bool Get_CfgCheckSum(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_CfgCheckSum()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_CfgCheckSum()]);
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
} // namespace GetOnlineVariables
#endif //#if defined(IMPLEMENT_GIAPI_DATAAPI_GETONLINEVARIABLES)


//------------------------------------------------------------------------
// giapi_DataAPI::GetOnlineData::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GIAPI_DATAAPI_GETONLINEDATA)
namespace GetOnlineData
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Values(void)
    {
        static std::string str("Values");
        return str;
    }
public:
    static std::string const& ItemName_ExtValues(void)
    {
        static std::string str("ExtValues");
        return str;
    }
public:
    static std::string const& ItemName_CfgCheckSum(void)
    {
        static std::string str("CfgCheckSum");
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
        static std::string str("DataAPI.GetOnlineData");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Values();
            Construct_ExtValues();
            Construct_CfgCheckSum();
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
            Construct_Values();
            Construct_ExtValues();
            Construct_CfgCheckSum();
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
            Initialize_Values();
            Initialize_ExtValues();
            Initialize_CfgCheckSum();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataAPI::GetOnlineData");
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
// Item Values (Type: "double[0]")
    protected:
        void Construct_Values(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Values()))
                {
                    double InitValue;
                    InitValue = 0.0;
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
                    double InitValue;
                    InitValue = 0.0;
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
                double InitValue;
                InitValue = 0.0;
                (*Value())[ItemName_Values()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch(...) {}
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
        bool Insert_Values(int ArrayIndex, double SetValue)
        {
            try
            {
                (*Value())[ItemName_Values()].insertArrayValue(ArrayIndex,(double)SetValue);
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
        bool Set_Values(int ArrayIndex, double SetValue)
        {
            try
            {
                (*Value())[ItemName_Values()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Values()][ArrayIndex] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Set_Values(const std::vector<double>& SetValue)
        {
            try
            {
                SetSize_Values((int)SetValue.size());
                for (int ArrayIndex = 0; ArrayIndex < (int)SetValue.size(); ArrayIndex++)
                {
                    (*Value())[ItemName_Values()][ArrayIndex] = (double)SetValue[ArrayIndex];
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_Values(int ArrayIndex) const
        {
            double GetValue = (*Value())[ItemName_Values()][ArrayIndex];
            return (double)GetValue;
        }
        bool Get_Values(int ArrayIndex, double& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Values()))
                {
                    if (((*Value())[ItemName_Values()][ArrayIndex]).valid())
                    {
                        GetValue = (double)((double)((*Value())[ItemName_Values()][ArrayIndex]));
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ExtValues (Type: "CStructExtValue[0]")
    protected:
        void Construct_ExtValues(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ExtValues()))
                {
                    CStructExtValue InitValue;
                    (*Value())[ItemName_ExtValues()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_ExtValues(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ExtValues()))
                {
                    Construct_ExtValues();
                }
                if ((*Value()).hasMember(ItemName_ExtValues()))
                {
                    CStructExtValue InitValue;
                    (*Value())[ItemName_ExtValues()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_ExtValues(int NewSize)
        {
            try
            {
                CStructExtValue InitValue;
                (*Value())[ItemName_ExtValues()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_ExtValues(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ExtValues()))
                {
                    return (*Value())[ItemName_ExtValues()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_ExtValues(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ExtValues()))
                {
                    (*Value())[ItemName_ExtValues()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_ExtValues(int ArrayIndex, CStructExtValue SetValue)
        {
            try
            {
                (*Value())[ItemName_ExtValues()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_ExtValues(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ExtValues()))
                {
                    (*Value())[ItemName_ExtValues()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ExtValues(int ArrayIndex, const CStructExtValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_ExtValues()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_ExtValues()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CStructExtValue Get_ExtValues(int ArrayIndex) const
        {
            return (*Value())[ItemName_ExtValues()][ArrayIndex];
        }
        bool Get_ExtValues(int ArrayIndex, CStructExtValue& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ExtValues()))
                {
                    if (((*Value())[ItemName_ExtValues()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_ExtValues()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item CfgCheckSum (Type: "std::string")
    protected:
        void Construct_CfgCheckSum(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CfgCheckSum()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_CfgCheckSum()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_CfgCheckSum(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CfgCheckSum()))
                {
                    Construct_CfgCheckSum();
                }
                if ((*Value()).hasMember(ItemName_CfgCheckSum()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_CfgCheckSum()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_CfgCheckSum(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_CfgCheckSum()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_CfgCheckSum(void) const
        {
            return (*Value())[ItemName_CfgCheckSum()];
        }
        bool Get_CfgCheckSum(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_CfgCheckSum()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_CfgCheckSum()]);
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
} // namespace GetOnlineData
#endif //#if defined(IMPLEMENT_GIAPI_DATAAPI_GETONLINEDATA)


//------------------------------------------------------------------------
// giapi_DataAPI::SetOnlineData::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GIAPI_DATAAPI_SETONLINEDATA)
namespace SetOnlineData
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
        static std::string str("DataAPI.SetOnlineData");
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
            (*Value())[ItemName_MethodID()] = std::string("DataAPI::SetOnlineData");
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
} // namespace SetOnlineData
#endif //#if defined(IMPLEMENT_GIAPI_DATAAPI_SETONLINEDATA)


//------------------------------------------------------------------------
// giapi_DataAPI::SendValueCmd::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GIAPI_DATAAPI_SENDVALUECMD)
namespace SendValueCmd
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
        static std::string str("DataAPI.SendValueCmd");
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
            (*Value())[ItemName_MethodID()] = std::string("DataAPI::SendValueCmd");
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
} // namespace SendValueCmd
#endif //#if defined(IMPLEMENT_GIAPI_DATAAPI_SENDVALUECMD)


//------------------------------------------------------------------------
// giapi_DataAPI::AddMetaDataForStream::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GIAPI_DATAAPI_ADDMETADATAFORSTREAM)
namespace AddMetaDataForStream
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
        static std::string str("DataAPI.AddMetaDataForStream");
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
            (*Value())[ItemName_MethodID()] = std::string("DataAPI::AddMetaDataForStream");
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
} // namespace AddMetaDataForStream
#endif //#if defined(IMPLEMENT_GIAPI_DATAAPI_ADDMETADATAFORSTREAM)


//------------------------------------------------------------------------
// giapi_DataAPI::ClearStreamClients::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GIAPI_DATAAPI_CLEARSTREAMCLIENTS)
namespace ClearStreamClients
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
        static std::string str("DataAPI.ClearStreamClients");
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
            (*Value())[ItemName_MethodID()] = std::string("DataAPI::ClearStreamClients");
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
} // namespace ClearStreamClients
#endif //#if defined(IMPLEMENT_GIAPI_DATAAPI_CLEARSTREAMCLIENTS)


//------------------------------------------------------------------------
// giapi_DataAPI::GetRawDataPackets::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GIAPI_DATAAPI_GETRAWDATAPACKETS)
namespace GetRawDataPackets
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Packets(void)
    {
        static std::string str("Packets");
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
        static std::string str("DataAPI.GetRawDataPackets");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Packets();
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
            Construct_Packets();
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
            Initialize_Packets();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DataAPI::GetRawDataPackets");
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
    // Item Packets (Type: "GInsXmlRpc::XmlRpcValue[0]")
    protected:
        void Construct_Packets(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Packets()))
                {
                    GInsXmlRpc::XmlRpcValue InitValue = (int)0;
                    (*Value())[ItemName_Packets()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Packets(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Packets()))
                {
                    Construct_Packets();
                }
                if ((*Value()).hasMember(ItemName_Packets()))
                {
                    GInsXmlRpc::XmlRpcValue InitValue = (int)0;
                    (*Value())[ItemName_Packets()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Packets(int NewSize)
        {
            try
            {
                GInsXmlRpc::XmlRpcValue InitValue = (int)0;
                (*Value())[ItemName_Packets()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Packets(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Packets()))
                {
                    return (*Value())[ItemName_Packets()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Packets(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Packets()))
                {
                    (*Value())[ItemName_Packets()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Packets(int ArrayIndex, GInsXmlRpc::XmlRpcValue SetValue)
        {
            try
            {
                (*Value())[ItemName_Packets()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Packets(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Packets()))
                {
                    (*Value())[ItemName_Packets()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Packets(int ArrayIndex, const GInsXmlRpc::XmlRpcValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_Packets()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Packets()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpc::XmlRpcValue Get_Packets(int ArrayIndex) const
        {
            return (*Value())[ItemName_Packets()][ArrayIndex];
        }
        bool Get_Packets(int ArrayIndex, GInsXmlRpc::XmlRpcValue& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Packets()))
                {
                    if (((*Value())[ItemName_Packets()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Packets()][ArrayIndex];
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
} // namespace GetRawDataPackets
#endif //#if defined(IMPLEMENT_GIAPI_DATAAPI_GETRAWDATAPACKETS)
//========================================================================
}; // namespace giapi_DataAPI
//========================================================================
#endif // #if !defined(_GIAPI_DATAAPI_TYPES_H)

