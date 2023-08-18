//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_GICONFIG_ADMINAPI_TYPES_H)
#define _GICONFIG_ADMINAPI_TYPES_H
//========================================================================
// Implemented methods
#define IMPLEMENT_GICONFIG_ADMINAPI_CONNECT
#define IMPLEMENT_GICONFIG_ADMINAPI_DISCONNECT
#define IMPLEMENT_GICONFIG_ADMINAPI_INIFILESTEXTUALSORT
#define IMPLEMENT_GICONFIG_ADMINAPI_INIFILESCOMPARE
#define IMPLEMENT_GICONFIG_ADMINAPI_SETEXTERNALVERSIONINFOTOLIST
#define IMPLEMENT_GICONFIG_ADMINAPI_REMOVEEXTERNALVERSIONINFOSFROMLIST
#define IMPLEMENT_GICONFIG_ADMINAPI_ACCESSLOCK_CONFIGAPI
#define IMPLEMENT_GICONFIG_ADMINAPI_SETTINGS


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "giconfig_AdminAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
#include "GInsXmlRpcStdAPI_Types.h"
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace giconfig_AdminAPI {
//========================================================================
//------------------------------------------------------------------------
// giconfig_AdminAPI::CAPIInfo
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
// giconfig_AdminAPI::CTypeAppConfig
//------------------------------------------------------------------------
class CTypeAppConfig : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_AppDataPath(void)
        {
            static std::string str("AppDataPath");
            return str;
        }
    public:
        static std::string const& ItemName_ProjectsDataPath(void)
        {
            static std::string str("ProjectsDataPath");
            return str;
        }
    public:
        static std::string const& ItemName_DeviceListFilePath(void)
        {
            static std::string str("DeviceListFilePath");
            return str;
        }
    public:
        static std::string const& ItemName_TimeZoneDBFilePath(void)
        {
            static std::string str("TimeZoneDBFilePath");
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
        static std::string const& ItemName_KeepIDs(void)
        {
            static std::string str("KeepIDs");
            return str;
        }
    public:
        static std::string const& ItemName_Self_DeviceTypeMainCode(void)
        {
            static std::string str("Self_DeviceTypeMainCode");
            return str;
        }
    public:
        static std::string const& ItemName_Self_DeviceTypeSubCode(void)
        {
            static std::string str("Self_DeviceTypeSubCode");
            return str;
        }
    public:
        static std::string const& ItemName_Self_DeviceTypeFunctionCode(void)
        {
            static std::string str("Self_DeviceTypeFunctionCode");
            return str;
        }
    public:
        static std::string const& ItemName_Self_DeviceTypeCasingCode(void)
        {
            static std::string str("Self_DeviceTypeCasingCode");
            return str;
        }
    public:
        static std::string const& ItemName_Self_DeviceTypeFilePathes(void)
        {
            static std::string str("Self_DeviceTypeFilePathes");
            return str;
        }
    public:
        static std::string const& ItemName_Self_DeviceTypeVendor(void)
        {
            static std::string str("Self_DeviceTypeVendor");
            return str;
        }
    public:
        static std::string const& ItemName_Self_DeviceTypeVendorDeviceSeriesList(void)
        {
            static std::string str("Self_DeviceTypeVendorDeviceSeriesList");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("TypeAppConfig");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("2.0");
        return str;
    }
public:
    CTypeAppConfig(void)
    {
        try
        {
            Construct_AppDataPath();
            Construct_ProjectsDataPath();
            Construct_DeviceListFilePath();
            Construct_TimeZoneDBFilePath();
            Construct_Language();
            Construct_UserExperience();
            Construct_KeepIDs();
            Construct_Self_DeviceTypeMainCode();
            Construct_Self_DeviceTypeSubCode();
            Construct_Self_DeviceTypeFunctionCode();
            Construct_Self_DeviceTypeCasingCode();
            Construct_Self_DeviceTypeFilePathes();
            Construct_Self_DeviceTypeVendor();
            Construct_Self_DeviceTypeVendorDeviceSeriesList();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CTypeAppConfig(const CTypeAppConfig& rhs) : 
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
    CTypeAppConfig(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_ProjectsDataPath();
            Construct_DeviceListFilePath();
            Construct_TimeZoneDBFilePath();
            Construct_Language();
            Construct_UserExperience();
            Construct_KeepIDs();
            Construct_Self_DeviceTypeMainCode();
            Construct_Self_DeviceTypeSubCode();
            Construct_Self_DeviceTypeFunctionCode();
            Construct_Self_DeviceTypeCasingCode();
            Construct_Self_DeviceTypeFilePathes();
            Construct_Self_DeviceTypeVendor();
            Construct_Self_DeviceTypeVendorDeviceSeriesList();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CTypeAppConfig(void)
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
            Initialize_ProjectsDataPath();
            Initialize_DeviceListFilePath();
            Initialize_TimeZoneDBFilePath();
            Initialize_Language();
            Initialize_UserExperience();
            Initialize_KeepIDs();
            Initialize_Self_DeviceTypeMainCode();
            Initialize_Self_DeviceTypeSubCode();
            Initialize_Self_DeviceTypeFunctionCode();
            Initialize_Self_DeviceTypeCasingCode();
            Initialize_Self_DeviceTypeFilePathes();
            Initialize_Self_DeviceTypeVendor();
            Initialize_Self_DeviceTypeVendorDeviceSeriesList();
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
    // Item DeviceListFilePath (Type: "std::string")
    protected:
        void Construct_DeviceListFilePath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceListFilePath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DeviceListFilePath()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DeviceListFilePath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceListFilePath()))
                {
                    Construct_DeviceListFilePath();
                }
                if ((*Value()).hasMember(ItemName_DeviceListFilePath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DeviceListFilePath()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DeviceListFilePath(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_DeviceListFilePath()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DeviceListFilePath(void) const
        {
            return (*Value())[ItemName_DeviceListFilePath()];
        }
        bool Get_DeviceListFilePath(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DeviceListFilePath()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DeviceListFilePath()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item TimeZoneDBFilePath (Type: "std::string")
    protected:
        void Construct_TimeZoneDBFilePath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TimeZoneDBFilePath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_TimeZoneDBFilePath()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_TimeZoneDBFilePath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TimeZoneDBFilePath()))
                {
                    Construct_TimeZoneDBFilePath();
                }
                if ((*Value()).hasMember(ItemName_TimeZoneDBFilePath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_TimeZoneDBFilePath()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TimeZoneDBFilePath(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_TimeZoneDBFilePath()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_TimeZoneDBFilePath(void) const
        {
            return (*Value())[ItemName_TimeZoneDBFilePath()];
        }
        bool Get_TimeZoneDBFilePath(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TimeZoneDBFilePath()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_TimeZoneDBFilePath()]);
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
// Item KeepIDs (Type: "bool")
protected:
    void Construct_KeepIDs(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_KeepIDs()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_KeepIDs()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_KeepIDs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_KeepIDs()))
                {
                    Construct_KeepIDs();
                }
                if ((*Value()).hasMember(ItemName_KeepIDs()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_KeepIDs()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_KeepIDs(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_KeepIDs()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_KeepIDs(void) const
        {
            bool GetValue = (*Value())[ItemName_KeepIDs()];
            return (bool)GetValue;
        }
        bool Get_KeepIDs(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_KeepIDs()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_KeepIDs()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Self_DeviceTypeMainCode (Type: "int32_t")
protected:
    void Construct_Self_DeviceTypeMainCode(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Self_DeviceTypeMainCode()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Self_DeviceTypeMainCode()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Self_DeviceTypeMainCode(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Self_DeviceTypeMainCode()))
                {
                    Construct_Self_DeviceTypeMainCode();
                }
                if ((*Value()).hasMember(ItemName_Self_DeviceTypeMainCode()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Self_DeviceTypeMainCode()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Self_DeviceTypeMainCode(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Self_DeviceTypeMainCode()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Self_DeviceTypeMainCode(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Self_DeviceTypeMainCode()];
            return (int32_t)GetValue;
        }
        bool Get_Self_DeviceTypeMainCode(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Self_DeviceTypeMainCode()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Self_DeviceTypeMainCode()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Self_DeviceTypeSubCode (Type: "int32_t")
protected:
    void Construct_Self_DeviceTypeSubCode(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Self_DeviceTypeSubCode()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Self_DeviceTypeSubCode()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Self_DeviceTypeSubCode(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Self_DeviceTypeSubCode()))
                {
                    Construct_Self_DeviceTypeSubCode();
                }
                if ((*Value()).hasMember(ItemName_Self_DeviceTypeSubCode()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Self_DeviceTypeSubCode()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Self_DeviceTypeSubCode(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Self_DeviceTypeSubCode()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Self_DeviceTypeSubCode(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Self_DeviceTypeSubCode()];
            return (int32_t)GetValue;
        }
        bool Get_Self_DeviceTypeSubCode(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Self_DeviceTypeSubCode()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Self_DeviceTypeSubCode()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Self_DeviceTypeFunctionCode (Type: "int32_t")
protected:
    void Construct_Self_DeviceTypeFunctionCode(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Self_DeviceTypeFunctionCode()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Self_DeviceTypeFunctionCode()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Self_DeviceTypeFunctionCode(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Self_DeviceTypeFunctionCode()))
                {
                    Construct_Self_DeviceTypeFunctionCode();
                }
                if ((*Value()).hasMember(ItemName_Self_DeviceTypeFunctionCode()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Self_DeviceTypeFunctionCode()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Self_DeviceTypeFunctionCode(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Self_DeviceTypeFunctionCode()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Self_DeviceTypeFunctionCode(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Self_DeviceTypeFunctionCode()];
            return (int32_t)GetValue;
        }
        bool Get_Self_DeviceTypeFunctionCode(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Self_DeviceTypeFunctionCode()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Self_DeviceTypeFunctionCode()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Self_DeviceTypeCasingCode (Type: "int32_t")
protected:
    void Construct_Self_DeviceTypeCasingCode(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Self_DeviceTypeCasingCode()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Self_DeviceTypeCasingCode()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Self_DeviceTypeCasingCode(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Self_DeviceTypeCasingCode()))
                {
                    Construct_Self_DeviceTypeCasingCode();
                }
                if ((*Value()).hasMember(ItemName_Self_DeviceTypeCasingCode()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Self_DeviceTypeCasingCode()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Self_DeviceTypeCasingCode(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Self_DeviceTypeCasingCode()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Self_DeviceTypeCasingCode(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Self_DeviceTypeCasingCode()];
            return (int32_t)GetValue;
        }
        bool Get_Self_DeviceTypeCasingCode(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Self_DeviceTypeCasingCode()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Self_DeviceTypeCasingCode()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Self_DeviceTypeFilePathes (Type: "std::string[0]")
    protected:
        void Construct_Self_DeviceTypeFilePathes(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Self_DeviceTypeFilePathes()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Self_DeviceTypeFilePathes()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Self_DeviceTypeFilePathes(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Self_DeviceTypeFilePathes()))
                {
                    Construct_Self_DeviceTypeFilePathes();
                }
                if ((*Value()).hasMember(ItemName_Self_DeviceTypeFilePathes()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Self_DeviceTypeFilePathes()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Self_DeviceTypeFilePathes(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_Self_DeviceTypeFilePathes()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Self_DeviceTypeFilePathes(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Self_DeviceTypeFilePathes()))
                {
                    return (*Value())[ItemName_Self_DeviceTypeFilePathes()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Self_DeviceTypeFilePathes(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Self_DeviceTypeFilePathes()))
                {
                    (*Value())[ItemName_Self_DeviceTypeFilePathes()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Self_DeviceTypeFilePathes(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_Self_DeviceTypeFilePathes()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Self_DeviceTypeFilePathes(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Self_DeviceTypeFilePathes()))
                {
                    (*Value())[ItemName_Self_DeviceTypeFilePathes()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Self_DeviceTypeFilePathes(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_Self_DeviceTypeFilePathes())
                {
                    SetSize_Self_DeviceTypeFilePathes(ArrayIndex + 1);
                }
                (*Value())[ItemName_Self_DeviceTypeFilePathes()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Self_DeviceTypeFilePathes(int ArrayIndex) const
        {
            return (*Value())[ItemName_Self_DeviceTypeFilePathes()][ArrayIndex];
        }
        bool Get_Self_DeviceTypeFilePathes(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Self_DeviceTypeFilePathes()))
                {
                    if (((*Value())[ItemName_Self_DeviceTypeFilePathes()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_Self_DeviceTypeFilePathes()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Self_DeviceTypeVendor (Type: "std::string")
    protected:
        void Construct_Self_DeviceTypeVendor(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Self_DeviceTypeVendor()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Self_DeviceTypeVendor()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Self_DeviceTypeVendor(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Self_DeviceTypeVendor()))
                {
                    Construct_Self_DeviceTypeVendor();
                }
                if ((*Value()).hasMember(ItemName_Self_DeviceTypeVendor()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Self_DeviceTypeVendor()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Self_DeviceTypeVendor(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Self_DeviceTypeVendor()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Self_DeviceTypeVendor(void) const
        {
            return (*Value())[ItemName_Self_DeviceTypeVendor()];
        }
        bool Get_Self_DeviceTypeVendor(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Self_DeviceTypeVendor()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Self_DeviceTypeVendor()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Self_DeviceTypeVendorDeviceSeriesList (Type: "std::string[0]")
    protected:
        void Construct_Self_DeviceTypeVendorDeviceSeriesList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Self_DeviceTypeVendorDeviceSeriesList()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Self_DeviceTypeVendorDeviceSeriesList()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Self_DeviceTypeVendorDeviceSeriesList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Self_DeviceTypeVendorDeviceSeriesList()))
                {
                    Construct_Self_DeviceTypeVendorDeviceSeriesList();
                }
                if ((*Value()).hasMember(ItemName_Self_DeviceTypeVendorDeviceSeriesList()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Self_DeviceTypeVendorDeviceSeriesList()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Self_DeviceTypeVendorDeviceSeriesList(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_Self_DeviceTypeVendorDeviceSeriesList()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Self_DeviceTypeVendorDeviceSeriesList(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Self_DeviceTypeVendorDeviceSeriesList()))
                {
                    return (*Value())[ItemName_Self_DeviceTypeVendorDeviceSeriesList()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Self_DeviceTypeVendorDeviceSeriesList(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Self_DeviceTypeVendorDeviceSeriesList()))
                {
                    (*Value())[ItemName_Self_DeviceTypeVendorDeviceSeriesList()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Self_DeviceTypeVendorDeviceSeriesList(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_Self_DeviceTypeVendorDeviceSeriesList()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Self_DeviceTypeVendorDeviceSeriesList(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Self_DeviceTypeVendorDeviceSeriesList()))
                {
                    (*Value())[ItemName_Self_DeviceTypeVendorDeviceSeriesList()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Self_DeviceTypeVendorDeviceSeriesList(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_Self_DeviceTypeVendorDeviceSeriesList())
                {
                    SetSize_Self_DeviceTypeVendorDeviceSeriesList(ArrayIndex + 1);
                }
                (*Value())[ItemName_Self_DeviceTypeVendorDeviceSeriesList()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Self_DeviceTypeVendorDeviceSeriesList(int ArrayIndex) const
        {
            return (*Value())[ItemName_Self_DeviceTypeVendorDeviceSeriesList()][ArrayIndex];
        }
        bool Get_Self_DeviceTypeVendorDeviceSeriesList(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Self_DeviceTypeVendorDeviceSeriesList()))
                {
                    if (((*Value())[ItemName_Self_DeviceTypeVendorDeviceSeriesList()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_Self_DeviceTypeVendorDeviceSeriesList()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CTypeAppConfig


//------------------------------------------------------------------------
// giconfig_AdminAPI::Connect::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_ADMINAPI_CONNECT)
namespace Connect
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Text(void)
    {
        static std::string str("Text");
        return str;
    }
public:
    static std::string const& ItemName_ClientID(void)
    {
        static std::string str("ClientID");
        return str;
    }
public:
    static std::string const& ItemName_IP(void)
    {
        static std::string str("IP");
        return str;
    }
public:
    static std::string const& ItemName_Port(void)
    {
        static std::string str("Port");
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
        static std::string str("AdminAPI.Connect");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Text();
            Construct_ClientID();
            Construct_IP();
            Construct_Port();
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
            Construct_Text();
            Construct_ClientID();
            Construct_IP();
            Construct_Port();
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
            Initialize_Text();
            Initialize_ClientID();
            Initialize_IP();
            Initialize_Port();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::Connect");
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
    // Item Text (Type: "std::string")
    protected:
        void Construct_Text(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Text()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Text()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Text(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Text()))
                {
                    Construct_Text();
                }
                if ((*Value()).hasMember(ItemName_Text()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Text()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Text(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Text()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Text(void) const
        {
            return (*Value())[ItemName_Text()];
        }
        bool Get_Text(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Text()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Text()]);
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
    //------------------------------------------------------------------------
    // Item IP (Type: "std::string")
    protected:
        void Construct_IP(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IP()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_IP()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_IP(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IP()))
                {
                    Construct_IP();
                }
                if ((*Value()).hasMember(ItemName_IP()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_IP()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IP(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_IP()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_IP(void) const
        {
            return (*Value())[ItemName_IP()];
        }
        bool Get_IP(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IP()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_IP()]);
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
}; // class CParams
} // namespace Connect
#endif //#if defined(IMPLEMENT_GICONFIG_ADMINAPI_CONNECT)


//------------------------------------------------------------------------
// giconfig_AdminAPI::Disconnect::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_ADMINAPI_DISCONNECT)
namespace Disconnect
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
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
        static std::string str("AdminAPI.Disconnect");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
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
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::Disconnect");
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
} // namespace Disconnect
#endif //#if defined(IMPLEMENT_GICONFIG_ADMINAPI_DISCONNECT)


//------------------------------------------------------------------------
// giconfig_AdminAPI::INIFilesTextualSort::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_ADMINAPI_INIFILESTEXTUALSORT)
namespace INIFilesTextualSort
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_FullFileName(void)
    {
        static std::string str("FullFileName");
        return str;
    }
public:
    static std::string const& ItemName_ResultFilePrependName(void)
    {
        static std::string str("ResultFilePrependName");
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
        static std::string str("AdminAPI.INIFilesTextualSort");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_FullFileName();
            Construct_ResultFilePrependName();
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
            Construct_FullFileName();
            Construct_ResultFilePrependName();
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
            Initialize_FullFileName();
            Initialize_ResultFilePrependName();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::INIFilesTextualSort");
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
    // Item FullFileName (Type: "std::string")
    protected:
        void Construct_FullFileName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FullFileName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FullFileName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_FullFileName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FullFileName()))
                {
                    Construct_FullFileName();
                }
                if ((*Value()).hasMember(ItemName_FullFileName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FullFileName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FullFileName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_FullFileName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_FullFileName(void) const
        {
            return (*Value())[ItemName_FullFileName()];
        }
        bool Get_FullFileName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FullFileName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_FullFileName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ResultFilePrependName (Type: "std::string")
    protected:
        void Construct_ResultFilePrependName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ResultFilePrependName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ResultFilePrependName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ResultFilePrependName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ResultFilePrependName()))
                {
                    Construct_ResultFilePrependName();
                }
                if ((*Value()).hasMember(ItemName_ResultFilePrependName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ResultFilePrependName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ResultFilePrependName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ResultFilePrependName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ResultFilePrependName(void) const
        {
            return (*Value())[ItemName_ResultFilePrependName()];
        }
        bool Get_ResultFilePrependName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ResultFilePrependName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ResultFilePrependName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace INIFilesTextualSort
#endif //#if defined(IMPLEMENT_GICONFIG_ADMINAPI_INIFILESTEXTUALSORT)


//------------------------------------------------------------------------
// giconfig_AdminAPI::INIFilesCompare::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_ADMINAPI_INIFILESCOMPARE)
namespace INIFilesCompare
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_FullFileName1(void)
    {
        static std::string str("FullFileName1");
        return str;
    }
public:
    static std::string const& ItemName_FullFileName2(void)
    {
        static std::string str("FullFileName2");
        return str;
    }
public:
    static std::string const& ItemName_ExcludeItemList(void)
    {
        static std::string str("ExcludeItemList");
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
        static std::string str("AdminAPI.INIFilesCompare");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_FullFileName1();
            Construct_FullFileName2();
            Construct_ExcludeItemList();
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
            Construct_FullFileName1();
            Construct_FullFileName2();
            Construct_ExcludeItemList();
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
            Initialize_FullFileName1();
            Initialize_FullFileName2();
            Initialize_ExcludeItemList();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::INIFilesCompare");
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
    // Item FullFileName1 (Type: "std::string")
    protected:
        void Construct_FullFileName1(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FullFileName1()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FullFileName1()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_FullFileName1(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FullFileName1()))
                {
                    Construct_FullFileName1();
                }
                if ((*Value()).hasMember(ItemName_FullFileName1()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FullFileName1()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FullFileName1(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_FullFileName1()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_FullFileName1(void) const
        {
            return (*Value())[ItemName_FullFileName1()];
        }
        bool Get_FullFileName1(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FullFileName1()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_FullFileName1()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item FullFileName2 (Type: "std::string")
    protected:
        void Construct_FullFileName2(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FullFileName2()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FullFileName2()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_FullFileName2(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FullFileName2()))
                {
                    Construct_FullFileName2();
                }
                if ((*Value()).hasMember(ItemName_FullFileName2()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FullFileName2()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FullFileName2(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_FullFileName2()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_FullFileName2(void) const
        {
            return (*Value())[ItemName_FullFileName2()];
        }
        bool Get_FullFileName2(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FullFileName2()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_FullFileName2()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ExcludeItemList (Type: "std::string[0]")
    protected:
        void Construct_ExcludeItemList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ExcludeItemList()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ExcludeItemList()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_ExcludeItemList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ExcludeItemList()))
                {
                    Construct_ExcludeItemList();
                }
                if ((*Value()).hasMember(ItemName_ExcludeItemList()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ExcludeItemList()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_ExcludeItemList(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_ExcludeItemList()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_ExcludeItemList(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ExcludeItemList()))
                {
                    return (*Value())[ItemName_ExcludeItemList()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_ExcludeItemList(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ExcludeItemList()))
                {
                    (*Value())[ItemName_ExcludeItemList()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_ExcludeItemList(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_ExcludeItemList()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_ExcludeItemList(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ExcludeItemList()))
                {
                    (*Value())[ItemName_ExcludeItemList()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ExcludeItemList(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_ExcludeItemList())
                {
                    SetSize_ExcludeItemList(ArrayIndex + 1);
                }
                (*Value())[ItemName_ExcludeItemList()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ExcludeItemList(int ArrayIndex) const
        {
            return (*Value())[ItemName_ExcludeItemList()][ArrayIndex];
        }
        bool Get_ExcludeItemList(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ExcludeItemList()))
                {
                    if (((*Value())[ItemName_ExcludeItemList()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_ExcludeItemList()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace INIFilesCompare
#endif //#if defined(IMPLEMENT_GICONFIG_ADMINAPI_INIFILESCOMPARE)


//------------------------------------------------------------------------
// giconfig_AdminAPI::SetExternalVersionInfoToList::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_ADMINAPI_SETEXTERNALVERSIONINFOTOLIST)
namespace SetExternalVersionInfoToList
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ShortenedName(void)
    {
        static std::string str("ShortenedName");
        return str;
    }
public:
    static std::string const& ItemName_Version(void)
    {
        static std::string str("Version");
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
        static std::string str("AdminAPI.SetExternalVersionInfoToList");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ShortenedName();
            Construct_Version();
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
            Construct_ShortenedName();
            Construct_Version();
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
            Initialize_ShortenedName();
            Initialize_Version();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::SetExternalVersionInfoToList");
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
    // Item ShortenedName (Type: "std::string")
    protected:
        void Construct_ShortenedName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ShortenedName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ShortenedName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ShortenedName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ShortenedName()))
                {
                    Construct_ShortenedName();
                }
                if ((*Value()).hasMember(ItemName_ShortenedName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ShortenedName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ShortenedName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ShortenedName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ShortenedName(void) const
        {
            return (*Value())[ItemName_ShortenedName()];
        }
        bool Get_ShortenedName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ShortenedName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ShortenedName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Version (Type: "GInsXmlRpcStdAPI::CGIns_Info_Version")
    protected:
        void Construct_Version(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Version()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_Version InitValue;
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
                    GInsXmlRpcStdAPI::CGIns_Info_Version InitValue;
                    (*Value())[ItemName_Version()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Version(const GInsXmlRpcStdAPI::CGIns_Info_Version& SetValue)
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
        GInsXmlRpcStdAPI::CGIns_Info_Version Get_Version(void) const
        {
            return (*Value())[ItemName_Version()];
        }
        bool Get_Version(GInsXmlRpcStdAPI::CGIns_Info_Version& GetValue) const
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
}; // class CParams
} // namespace SetExternalVersionInfoToList
#endif //#if defined(IMPLEMENT_GICONFIG_ADMINAPI_SETEXTERNALVERSIONINFOTOLIST)


//------------------------------------------------------------------------
// giconfig_AdminAPI::RemoveExternalVersionInfosFromList::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_ADMINAPI_REMOVEEXTERNALVERSIONINFOSFROMLIST)
namespace RemoveExternalVersionInfosFromList
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ShortenedNames(void)
    {
        static std::string str("ShortenedNames");
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
        static std::string str("AdminAPI.RemoveExternalVersionInfosFromList");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ShortenedNames();
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
            Construct_ShortenedNames();
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
            Initialize_ShortenedNames();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::RemoveExternalVersionInfosFromList");
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
    // Item ShortenedNames (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList")
    protected:
        void Construct_ShortenedNames(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ShortenedNames()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList InitValue;
                    (*Value())[ItemName_ShortenedNames()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ShortenedNames(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ShortenedNames()))
                {
                    Construct_ShortenedNames();
                }
                if ((*Value()).hasMember(ItemName_ShortenedNames()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList InitValue;
                    (*Value())[ItemName_ShortenedNames()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ShortenedNames(const GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_ShortenedNames()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList Get_ShortenedNames(void) const
        {
            return (*Value())[ItemName_ShortenedNames()];
        }
        bool Get_ShortenedNames(GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ShortenedNames()]).valid())
                {
                    GetValue = (*Value())[ItemName_ShortenedNames()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace RemoveExternalVersionInfosFromList
#endif //#if defined(IMPLEMENT_GICONFIG_ADMINAPI_REMOVEEXTERNALVERSIONINFOSFROMLIST)


//------------------------------------------------------------------------
// giconfig_AdminAPI::AccessLock_ConfigAPI::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_ADMINAPI_ACCESSLOCK_CONFIGAPI)
namespace AccessLock_ConfigAPI
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
    static std::string const& ItemName_TimeoutS(void)
    {
        static std::string str("TimeoutS");
        return str;
    }
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
        static std::string str("AdminAPI.AccessLock_ConfigAPI");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Command();
            Construct_TimeoutS();
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
            Construct_Command();
            Construct_TimeoutS();
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
            Initialize_Command();
            Initialize_TimeoutS();
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
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::AccessLock_ConfigAPI");
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
// Item TimeoutS (Type: "double")
protected:
    void Construct_TimeoutS(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_TimeoutS()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_TimeoutS()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_TimeoutS(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TimeoutS()))
                {
                    Construct_TimeoutS();
                }
                if ((*Value()).hasMember(ItemName_TimeoutS()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_TimeoutS()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TimeoutS(double SetValue)
        {
            try
            {
                (*Value())[ItemName_TimeoutS()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_TimeoutS(void) const
        {
            double GetValue = (*Value())[ItemName_TimeoutS()];
            return (double)GetValue;
        }
        bool Get_TimeoutS(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TimeoutS()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_TimeoutS()]));
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
}; // class CParams
} // namespace AccessLock_ConfigAPI
#endif //#if defined(IMPLEMENT_GICONFIG_ADMINAPI_ACCESSLOCK_CONFIGAPI)


//------------------------------------------------------------------------
// giconfig_AdminAPI::Settings::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_ADMINAPI_SETTINGS)
namespace Settings
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_UserExperienceType(void)
    {
        static std::string str("UserExperienceType");
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
        static std::string str("AdminAPI.Settings");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_UserExperienceType();
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
            Construct_UserExperienceType();
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
            Initialize_UserExperienceType();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::Settings");
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
    // Item UserExperienceType (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_UserExperienceType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UserExperienceType()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_UserExperienceType()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_UserExperienceType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UserExperienceType()))
                {
                    Construct_UserExperienceType();
                }
                if ((*Value()).hasMember(ItemName_UserExperienceType()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_UserExperienceType()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_UserExperienceType(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_UserExperienceType()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_UserExperienceType(void) const
        {
            return (*Value())[ItemName_UserExperienceType()];
        }
        bool Get_UserExperienceType(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_UserExperienceType()]).valid())
                {
                    GetValue = (*Value())[ItemName_UserExperienceType()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace Settings
#endif //#if defined(IMPLEMENT_GICONFIG_ADMINAPI_SETTINGS)


//------------------------------------------------------------------------
// giconfig_AdminAPI::Connect::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_ADMINAPI_CONNECT)
namespace Connect
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ClientID(void)
    {
        static std::string str("ClientID");
        return str;
    }
public:
    static std::string const& ItemName_ServerID(void)
    {
        static std::string str("ServerID");
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
        static std::string str("AdminAPI.Connect");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ClientID();
            Construct_ServerID();
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
            Construct_ClientID();
            Construct_ServerID();
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
            Initialize_ClientID();
            Initialize_ServerID();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::Connect");
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
    //------------------------------------------------------------------------
    // Item ServerID (Type: "std::string")
    protected:
        void Construct_ServerID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ServerID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ServerID()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ServerID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ServerID()))
                {
                    Construct_ServerID();
                }
                if ((*Value()).hasMember(ItemName_ServerID()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ServerID()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ServerID(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ServerID()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ServerID(void) const
        {
            return (*Value())[ItemName_ServerID()];
        }
        bool Get_ServerID(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ServerID()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ServerID()]);
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
} // namespace Connect
#endif //#if defined(IMPLEMENT_GICONFIG_ADMINAPI_CONNECT)


//------------------------------------------------------------------------
// giconfig_AdminAPI::Disconnect::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_ADMINAPI_DISCONNECT)
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
        static std::string str("AdminAPI.Disconnect");
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
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::Disconnect");
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
#endif //#if defined(IMPLEMENT_GICONFIG_ADMINAPI_DISCONNECT)


//------------------------------------------------------------------------
// giconfig_AdminAPI::INIFilesTextualSort::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_ADMINAPI_INIFILESTEXTUALSORT)
namespace INIFilesTextualSort
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_SortedFilesCount(void)
    {
        static std::string str("SortedFilesCount");
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
        static std::string str("AdminAPI.INIFilesTextualSort");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_SortedFilesCount();
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
            Construct_SortedFilesCount();
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
            Initialize_SortedFilesCount();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::INIFilesTextualSort");
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
// Item SortedFilesCount (Type: "int32_t")
protected:
    void Construct_SortedFilesCount(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_SortedFilesCount()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_SortedFilesCount()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_SortedFilesCount(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SortedFilesCount()))
                {
                    Construct_SortedFilesCount();
                }
                if ((*Value()).hasMember(ItemName_SortedFilesCount()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_SortedFilesCount()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SortedFilesCount(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_SortedFilesCount()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_SortedFilesCount(void) const
        {
            int32_t GetValue = (*Value())[ItemName_SortedFilesCount()];
            return (int32_t)GetValue;
        }
        bool Get_SortedFilesCount(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SortedFilesCount()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_SortedFilesCount()]));
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
} // namespace INIFilesTextualSort
#endif //#if defined(IMPLEMENT_GICONFIG_ADMINAPI_INIFILESTEXTUALSORT)


//------------------------------------------------------------------------
// giconfig_AdminAPI::INIFilesCompare::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_ADMINAPI_INIFILESCOMPARE)
namespace INIFilesCompare
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_DifferenceList(void)
    {
        static std::string str("DifferenceList");
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
        static std::string str("AdminAPI.INIFilesCompare");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_DifferenceList();
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
            Construct_DifferenceList();
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
            Initialize_DifferenceList();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::INIFilesCompare");
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
    // Item DifferenceList (Type: "std::string[0]")
    protected:
        void Construct_DifferenceList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DifferenceList()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DifferenceList()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_DifferenceList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DifferenceList()))
                {
                    Construct_DifferenceList();
                }
                if ((*Value()).hasMember(ItemName_DifferenceList()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DifferenceList()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_DifferenceList(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_DifferenceList()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_DifferenceList(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DifferenceList()))
                {
                    return (*Value())[ItemName_DifferenceList()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_DifferenceList(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DifferenceList()))
                {
                    (*Value())[ItemName_DifferenceList()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_DifferenceList(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_DifferenceList()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_DifferenceList(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DifferenceList()))
                {
                    (*Value())[ItemName_DifferenceList()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DifferenceList(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_DifferenceList())
                {
                    SetSize_DifferenceList(ArrayIndex + 1);
                }
                (*Value())[ItemName_DifferenceList()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DifferenceList(int ArrayIndex) const
        {
            return (*Value())[ItemName_DifferenceList()][ArrayIndex];
        }
        bool Get_DifferenceList(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DifferenceList()))
                {
                    if (((*Value())[ItemName_DifferenceList()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_DifferenceList()][ArrayIndex]);
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
} // namespace INIFilesCompare
#endif //#if defined(IMPLEMENT_GICONFIG_ADMINAPI_INIFILESCOMPARE)


//------------------------------------------------------------------------
// giconfig_AdminAPI::SetExternalVersionInfoToList::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_ADMINAPI_SETEXTERNALVERSIONINFOTOLIST)
namespace SetExternalVersionInfoToList
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
        static std::string str("AdminAPI.SetExternalVersionInfoToList");
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
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::SetExternalVersionInfoToList");
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
} // namespace SetExternalVersionInfoToList
#endif //#if defined(IMPLEMENT_GICONFIG_ADMINAPI_SETEXTERNALVERSIONINFOTOLIST)


//------------------------------------------------------------------------
// giconfig_AdminAPI::RemoveExternalVersionInfosFromList::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_ADMINAPI_REMOVEEXTERNALVERSIONINFOSFROMLIST)
namespace RemoveExternalVersionInfosFromList
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
        static std::string str("AdminAPI.RemoveExternalVersionInfosFromList");
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
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::RemoveExternalVersionInfosFromList");
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
} // namespace RemoveExternalVersionInfosFromList
#endif //#if defined(IMPLEMENT_GICONFIG_ADMINAPI_REMOVEEXTERNALVERSIONINFOSFROMLIST)


//------------------------------------------------------------------------
// giconfig_AdminAPI::AccessLock_ConfigAPI::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_ADMINAPI_ACCESSLOCK_CONFIGAPI)
namespace AccessLock_ConfigAPI
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
    static std::string const& ItemName_RemainingTimeoutS(void)
    {
        static std::string str("RemainingTimeoutS");
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
        static std::string str("AdminAPI.AccessLock_ConfigAPI");
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
            Construct_RemainingTimeoutS();
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
            Construct_RemainingTimeoutS();
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
            Initialize_RemainingTimeoutS();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::AccessLock_ConfigAPI");
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
// Item RemainingTimeoutS (Type: "double")
protected:
    void Construct_RemainingTimeoutS(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_RemainingTimeoutS()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_RemainingTimeoutS()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_RemainingTimeoutS(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RemainingTimeoutS()))
                {
                    Construct_RemainingTimeoutS();
                }
                if ((*Value()).hasMember(ItemName_RemainingTimeoutS()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_RemainingTimeoutS()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RemainingTimeoutS(double SetValue)
        {
            try
            {
                (*Value())[ItemName_RemainingTimeoutS()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_RemainingTimeoutS(void) const
        {
            double GetValue = (*Value())[ItemName_RemainingTimeoutS()];
            return (double)GetValue;
        }
        bool Get_RemainingTimeoutS(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RemainingTimeoutS()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_RemainingTimeoutS()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace AccessLock_ConfigAPI
#endif //#if defined(IMPLEMENT_GICONFIG_ADMINAPI_ACCESSLOCK_CONFIGAPI)


//------------------------------------------------------------------------
// giconfig_AdminAPI::Settings::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_ADMINAPI_SETTINGS)
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
        static std::string str("AdminAPI.Settings");
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
            (*Value())[ItemName_MethodID()] = std::string("AdminAPI::Settings");
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
#endif //#if defined(IMPLEMENT_GICONFIG_ADMINAPI_SETTINGS)
//========================================================================
}; // namespace giconfig_AdminAPI
//========================================================================
#endif // #if !defined(_GICONFIG_ADMINAPI_TYPES_H)

