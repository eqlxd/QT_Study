//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_PLUGINAPI_TYPES_H)
#define _PLUGINAPI_TYPES_H
//========================================================================
// Implemented methods
#define IMPLEMENT_PLUGINAPI_REGISTERPLUGIN
#define IMPLEMENT_PLUGINAPI_REMOVEPLUGIN
#define IMPLEMENT_PLUGINAPI_GETINSTALLEDPLUGINS
#define IMPLEMENT_PLUGINAPI_INSTALLPLUGIN
#define IMPLEMENT_PLUGINAPI_EVENT


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "PluginAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace PluginAPI {
//========================================================================
//------------------------------------------------------------------------
// PluginAPI::CAPIInfo
//------------------------------------------------------------------------
class CAPIInfo
{
public:
    static std::string const& Name(void)
    {
        static std::string str("PluginAPI");
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
// PluginAPI::TypePluginType
//------------------------------------------------------------------------
enum TypePluginType {
    userland = 0,
    kernel = 1,
    realtime = 2,
}; // enum TypePluginType


//------------------------------------------------------------------------
// PluginAPI::TypeEvent
//------------------------------------------------------------------------
enum TypeEvent {
    EventTypeDebug = 0,
    EventTypeInfo = 1,
    EventTypeWarning = 2,
    EventTypeError = 3,
}; // enum TypeEvent


//------------------------------------------------------------------------
// PluginAPI::CTypePluginInfo
//------------------------------------------------------------------------
class CTypePluginInfo : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Name(void)
        {
            static std::string str("Name");
            return str;
        }
    public:
        static std::string const& ItemName_Version(void)
        {
            static std::string str("Version");
            return str;
        }
    public:
        static std::string const& ItemName_Port(void)
        {
            static std::string str("Port");
            return str;
        }
    public:
        static std::string const& ItemName_Started(void)
        {
            static std::string str("Started");
            return str;
        }
    public:
        static std::string const& ItemName_CycleCounter(void)
        {
            static std::string str("CycleCounter");
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
        static std::string str("TypePluginInfo");
        return str;
    }
public:
    CTypePluginInfo(void)
    {
        try
        {
            Construct_Name();
            Construct_Version();
            Construct_Port();
            Construct_Started();
            Construct_CycleCounter();
            Construct_Events();
            }
        catch (...) {}
    }
    CTypePluginInfo(const CTypePluginInfo& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        }
    CTypePluginInfo(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_Version();
            Construct_Port();
            Construct_Started();
            Construct_CycleCounter();
            Construct_Events();
            }
        catch (...) {}
    }
public:
    ~CTypePluginInfo(void)
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
            Initialize_Version();
            Initialize_Port();
            Initialize_Started();
            Initialize_CycleCounter();
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
//------------------------------------------------------------------------
// Item Started (Type: "bool")
protected:
    void Construct_Started(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Started()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Started()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Started(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Started()))
                {
                    Construct_Started();
                }
                if ((*Value()).hasMember(ItemName_Started()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Started()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Started(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Started()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Started(void) const
        {
            bool GetValue = (*Value())[ItemName_Started()];
            return (bool)GetValue;
        }
        bool Get_Started(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Started()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Started()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item CycleCounter (Type: "int32_t")
protected:
    void Construct_CycleCounter(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_CycleCounter()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_CycleCounter()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_CycleCounter(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CycleCounter()))
                {
                    Construct_CycleCounter();
                }
                if ((*Value()).hasMember(ItemName_CycleCounter()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_CycleCounter()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_CycleCounter(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_CycleCounter()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_CycleCounter(void) const
        {
            int32_t GetValue = (*Value())[ItemName_CycleCounter()];
            return (int32_t)GetValue;
        }
        bool Get_CycleCounter(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_CycleCounter()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_CycleCounter()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Events (Type: "std::string[0]")
    protected:
        void Construct_Events(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Events()))
                {
                    std::string InitValue;
                    InitValue = "";
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
                    std::string InitValue;
                    InitValue = "";
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
                std::string InitValue;
                InitValue = "";
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
        bool Insert_Events(int ArrayIndex, std::string SetValue)
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
        bool Set_Events(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_Events())
                {
                    SetSize_Events(ArrayIndex + 1);
                }
                (*Value())[ItemName_Events()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Events(int ArrayIndex) const
        {
            return (*Value())[ItemName_Events()][ArrayIndex];
        }
        bool Get_Events(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Events()))
                {
                    if (((*Value())[ItemName_Events()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_Events()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CTypePluginInfo


//------------------------------------------------------------------------
// PluginAPI::RegisterPlugin::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_PLUGINAPI_REGISTERPLUGIN)
namespace RegisterPlugin
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
    static std::string const& ItemName_PluginType(void)
    {
        static std::string str("PluginType");
        return str;
    }
public:
    static std::string const& ItemName_Version(void)
    {
        static std::string str("Version");
        return str;
    }
public:
    static std::string const& ItemName_DataAPIVersion(void)
    {
        static std::string str("DataAPIVersion");
        return str;
    }
public:
    static std::string const& ItemName_Cmd(void)
    {
        static std::string str("Cmd");
        return str;
    }
public:
    static std::string const& ItemName_Exe(void)
    {
        static std::string str("Exe");
        return str;
    }
public:
    static std::string const& ItemName_LicenseKey(void)
    {
        static std::string str("LicenseKey");
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
        static std::string str("PluginAPI.RegisterPlugin");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Name();
            Construct_PluginType();
            Construct_Version();
            Construct_DataAPIVersion();
            Construct_Cmd();
            Construct_Exe();
            Construct_LicenseKey();
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
            Construct_PluginType();
            Construct_Version();
            Construct_DataAPIVersion();
            Construct_Cmd();
            Construct_Exe();
            Construct_LicenseKey();
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
            Initialize_PluginType();
            Initialize_Version();
            Initialize_DataAPIVersion();
            Initialize_Cmd();
            Initialize_Exe();
            Initialize_LicenseKey();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("PluginAPI::RegisterPlugin");
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
    // Item PluginType (Type: "enum TypePluginType")
    protected:
        void Construct_PluginType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PluginType()))
                {
                    enum TypePluginType InitValue;
                    InitValue = userland;
                    (*Value())[ItemName_PluginType()] = (int)InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_PluginType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PluginType()))
                {
                    Construct_PluginType();
                }
                if ((*Value()).hasMember(ItemName_PluginType()))
                {
                    enum TypePluginType InitValue;
                    InitValue = userland;
                    (*Value())[ItemName_PluginType()] = (int)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_PluginType(enum TypePluginType SetValue)
        {
            try
            {
                (*Value())[ItemName_PluginType()] = (int)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        enum TypePluginType Get_PluginType(void) const
        {
            int GetValue = (*Value())[ItemName_PluginType()];
            return (enum TypePluginType)GetValue;
        }
        bool Get_PluginType(enum TypePluginType& GetValue) const
        {
            try
            {
                if ((*Value())[ItemName_PluginType()].valid())
                {
                    GetValue = (enum TypePluginType)((int)((*Value())[ItemName_PluginType()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
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
    // Item DataAPIVersion (Type: "std::string")
    protected:
        void Construct_DataAPIVersion(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataAPIVersion()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DataAPIVersion()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DataAPIVersion(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataAPIVersion()))
                {
                    Construct_DataAPIVersion();
                }
                if ((*Value()).hasMember(ItemName_DataAPIVersion()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DataAPIVersion()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DataAPIVersion(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_DataAPIVersion()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DataAPIVersion(void) const
        {
            return (*Value())[ItemName_DataAPIVersion()];
        }
        bool Get_DataAPIVersion(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DataAPIVersion()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DataAPIVersion()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
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
    // Item Exe (Type: "std::string")
    protected:
        void Construct_Exe(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Exe()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Exe()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Exe(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Exe()))
                {
                    Construct_Exe();
                }
                if ((*Value()).hasMember(ItemName_Exe()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Exe()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Exe(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Exe()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Exe(void) const
        {
            return (*Value())[ItemName_Exe()];
        }
        bool Get_Exe(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Exe()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Exe()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item LicenseKey (Type: "std::string")
    protected:
        void Construct_LicenseKey(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LicenseKey()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_LicenseKey()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_LicenseKey(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LicenseKey()))
                {
                    Construct_LicenseKey();
                }
                if ((*Value()).hasMember(ItemName_LicenseKey()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_LicenseKey()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LicenseKey(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_LicenseKey()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_LicenseKey(void) const
        {
            return (*Value())[ItemName_LicenseKey()];
        }
        bool Get_LicenseKey(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LicenseKey()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_LicenseKey()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace RegisterPlugin
#endif //#if defined(IMPLEMENT_PLUGINAPI_REGISTERPLUGIN)


//------------------------------------------------------------------------
// PluginAPI::RemovePlugin::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_PLUGINAPI_REMOVEPLUGIN)
namespace RemovePlugin
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
        static std::string str("PluginAPI.RemovePlugin");
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
            (*Value())[ItemName_MethodID()] = std::string("PluginAPI::RemovePlugin");
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
} // namespace RemovePlugin
#endif //#if defined(IMPLEMENT_PLUGINAPI_REMOVEPLUGIN)


//------------------------------------------------------------------------
// PluginAPI::GetInstalledPlugins::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_PLUGINAPI_GETINSTALLEDPLUGINS)
namespace GetInstalledPlugins
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_PluginName(void)
    {
        static std::string str("PluginName");
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
        static std::string str("PluginAPI.GetInstalledPlugins");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_PluginName();
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
            Construct_PluginName();
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
            Initialize_PluginName();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("PluginAPI::GetInstalledPlugins");
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
    // Item PluginName (Type: "std::string")
    protected:
        void Construct_PluginName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PluginName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_PluginName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_PluginName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PluginName()))
                {
                    Construct_PluginName();
                }
                if ((*Value()).hasMember(ItemName_PluginName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_PluginName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_PluginName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_PluginName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_PluginName(void) const
        {
            return (*Value())[ItemName_PluginName()];
        }
        bool Get_PluginName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_PluginName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_PluginName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GetInstalledPlugins
#endif //#if defined(IMPLEMENT_PLUGINAPI_GETINSTALLEDPLUGINS)


//------------------------------------------------------------------------
// PluginAPI::InstallPlugin::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_PLUGINAPI_INSTALLPLUGIN)
namespace InstallPlugin
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
    static std::string const& ItemName_Data(void)
    {
        static std::string str("Data");
        return str;
    }
public:
    static std::string const& ItemName_LicenseKey(void)
    {
        static std::string str("LicenseKey");
        return str;
    }
public:
    static std::string const& ItemName_Cmd(void)
    {
        static std::string str("Cmd");
        return str;
    }
public:
    static std::string const& ItemName_Exe(void)
    {
        static std::string str("Exe");
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
        static std::string str("PluginAPI.InstallPlugin");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Name();
            Construct_Data();
            Construct_LicenseKey();
            Construct_Cmd();
            Construct_Exe();
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
            Construct_Data();
            Construct_LicenseKey();
            Construct_Cmd();
            Construct_Exe();
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
            Initialize_Data();
            Initialize_LicenseKey();
            Initialize_Cmd();
            Initialize_Exe();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("PluginAPI::InstallPlugin");
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
    // Item Data (Type: "GInsXmlRpc::XmlRpcValue")
    protected:
        void Construct_Data(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Data()))
                {
                    GInsXmlRpc::XmlRpcValue InitValue = (int)0;
                    (*Value())[ItemName_Data()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Data(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Data()))
                {
                    Construct_Data();
                }
                if ((*Value()).hasMember(ItemName_Data()))
                {
                    GInsXmlRpc::XmlRpcValue InitValue = (int)0;
                    (*Value())[ItemName_Data()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Data(const GInsXmlRpc::XmlRpcValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_Data()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpc::XmlRpcValue Get_Data(void) const
        {
            return (*Value())[ItemName_Data()];
        }
        bool Get_Data(GInsXmlRpc::XmlRpcValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Data()]).valid())
                {
                    GetValue = (*Value())[ItemName_Data()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item LicenseKey (Type: "std::string")
    protected:
        void Construct_LicenseKey(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LicenseKey()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_LicenseKey()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_LicenseKey(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LicenseKey()))
                {
                    Construct_LicenseKey();
                }
                if ((*Value()).hasMember(ItemName_LicenseKey()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_LicenseKey()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LicenseKey(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_LicenseKey()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_LicenseKey(void) const
        {
            return (*Value())[ItemName_LicenseKey()];
        }
        bool Get_LicenseKey(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LicenseKey()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_LicenseKey()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
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
    // Item Exe (Type: "std::string")
    protected:
        void Construct_Exe(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Exe()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Exe()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Exe(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Exe()))
                {
                    Construct_Exe();
                }
                if ((*Value()).hasMember(ItemName_Exe()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Exe()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Exe(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Exe()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Exe(void) const
        {
            return (*Value())[ItemName_Exe()];
        }
        bool Get_Exe(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Exe()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Exe()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace InstallPlugin
#endif //#if defined(IMPLEMENT_PLUGINAPI_INSTALLPLUGIN)


//------------------------------------------------------------------------
// PluginAPI::Event::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_PLUGINAPI_EVENT)
namespace Event
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_PluginName(void)
    {
        static std::string str("PluginName");
        return str;
    }
public:
    static std::string const& ItemName_EventMsg(void)
    {
        static std::string str("EventMsg");
        return str;
    }
public:
    static std::string const& ItemName_EventCode(void)
    {
        static std::string str("EventCode");
        return str;
    }
public:
    static std::string const& ItemName_Type(void)
    {
        static std::string str("Type");
        return str;
    }
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
        static std::string str("PluginAPI.Event");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_PluginName();
            Construct_EventMsg();
            Construct_EventCode();
            Construct_Type();
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
            Construct_PluginName();
            Construct_EventMsg();
            Construct_EventCode();
            Construct_Type();
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
            Initialize_PluginName();
            Initialize_EventMsg();
            Initialize_EventCode();
            Initialize_Type();
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
            (*Value())[ItemName_MethodID()] = std::string("PluginAPI::Event");
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
    // Item PluginName (Type: "std::string")
    protected:
        void Construct_PluginName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PluginName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_PluginName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_PluginName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PluginName()))
                {
                    Construct_PluginName();
                }
                if ((*Value()).hasMember(ItemName_PluginName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_PluginName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_PluginName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_PluginName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_PluginName(void) const
        {
            return (*Value())[ItemName_PluginName()];
        }
        bool Get_PluginName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_PluginName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_PluginName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item EventMsg (Type: "std::string")
    protected:
        void Construct_EventMsg(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_EventMsg()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_EventMsg()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_EventMsg(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_EventMsg()))
                {
                    Construct_EventMsg();
                }
                if ((*Value()).hasMember(ItemName_EventMsg()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_EventMsg()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_EventMsg(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_EventMsg()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_EventMsg(void) const
        {
            return (*Value())[ItemName_EventMsg()];
        }
        bool Get_EventMsg(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_EventMsg()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_EventMsg()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item EventCode (Type: "int32_t")
protected:
    void Construct_EventCode(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_EventCode()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_EventCode()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_EventCode(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_EventCode()))
                {
                    Construct_EventCode();
                }
                if ((*Value()).hasMember(ItemName_EventCode()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_EventCode()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_EventCode(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_EventCode()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_EventCode(void) const
        {
            int32_t GetValue = (*Value())[ItemName_EventCode()];
            return (int32_t)GetValue;
        }
        bool Get_EventCode(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_EventCode()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_EventCode()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Type (Type: "enum TypeEvent")
    protected:
        void Construct_Type(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Type()))
                {
                    enum TypeEvent InitValue;
                    InitValue = EventTypeDebug;
                    (*Value())[ItemName_Type()] = (int)InitValue;
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
                    enum TypeEvent InitValue;
                    InitValue = EventTypeDebug;
                    (*Value())[ItemName_Type()] = (int)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Type(enum TypeEvent SetValue)
        {
            try
            {
                (*Value())[ItemName_Type()] = (int)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        enum TypeEvent Get_Type(void) const
        {
            int GetValue = (*Value())[ItemName_Type()];
            return (enum TypeEvent)GetValue;
        }
        bool Get_Type(enum TypeEvent& GetValue) const
        {
            try
            {
                if ((*Value())[ItemName_Type()].valid())
                {
                    GetValue = (enum TypeEvent)((int)((*Value())[ItemName_Type()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
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
} // namespace Event
#endif //#if defined(IMPLEMENT_PLUGINAPI_EVENT)


//------------------------------------------------------------------------
// PluginAPI::RegisterPlugin::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_PLUGINAPI_REGISTERPLUGIN)
namespace RegisterPlugin
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
        static std::string str("PluginAPI.RegisterPlugin");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_GInsRet();
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
            Construct_GInsRet();
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
            Initialize_GInsRet();
            Initialize_ErrorMsg();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("PluginAPI::RegisterPlugin");
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
    // Item ErrorMsg (Type: "std::string")
    protected:
        void Construct_ErrorMsg(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ErrorMsg()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ErrorMsg()] = InitValue;
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
                    (*Value())[ItemName_ErrorMsg()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ErrorMsg(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ErrorMsg()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ErrorMsg(void) const
        {
            return (*Value())[ItemName_ErrorMsg()];
        }
        bool Get_ErrorMsg(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ErrorMsg()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ErrorMsg()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace RegisterPlugin
#endif //#if defined(IMPLEMENT_PLUGINAPI_REGISTERPLUGIN)


//------------------------------------------------------------------------
// PluginAPI::RemovePlugin::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_PLUGINAPI_REMOVEPLUGIN)
namespace RemovePlugin
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
        static std::string str("PluginAPI.RemovePlugin");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_GInsRet();
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
            Construct_GInsRet();
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
            Initialize_GInsRet();
            Initialize_ErrorMsg();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("PluginAPI::RemovePlugin");
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
    // Item ErrorMsg (Type: "std::string")
    protected:
        void Construct_ErrorMsg(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ErrorMsg()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ErrorMsg()] = InitValue;
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
                    (*Value())[ItemName_ErrorMsg()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ErrorMsg(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ErrorMsg()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ErrorMsg(void) const
        {
            return (*Value())[ItemName_ErrorMsg()];
        }
        bool Get_ErrorMsg(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ErrorMsg()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ErrorMsg()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace RemovePlugin
#endif //#if defined(IMPLEMENT_PLUGINAPI_REMOVEPLUGIN)


//------------------------------------------------------------------------
// PluginAPI::GetInstalledPlugins::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_PLUGINAPI_GETINSTALLEDPLUGINS)
namespace GetInstalledPlugins
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Plugins(void)
    {
        static std::string str("Plugins");
        return str;
    }
public:
    static std::string const& ItemName_GInsRet(void)
    {
        static std::string str("GInsRet");
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
        static std::string str("PluginAPI.GetInstalledPlugins");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Plugins();
            Construct_GInsRet();
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
            Construct_Plugins();
            Construct_GInsRet();
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
            Initialize_Plugins();
            Initialize_GInsRet();
            Initialize_ErrorMsg();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("PluginAPI::GetInstalledPlugins");
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
    // Item Plugins (Type: "CTypePluginInfo[0]")
    protected:
        void Construct_Plugins(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Plugins()))
                {
                    CTypePluginInfo InitValue;
                    (*Value())[ItemName_Plugins()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Plugins(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Plugins()))
                {
                    Construct_Plugins();
                }
                if ((*Value()).hasMember(ItemName_Plugins()))
                {
                    CTypePluginInfo InitValue;
                    (*Value())[ItemName_Plugins()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Plugins(int NewSize)
        {
            try
            {
                CTypePluginInfo InitValue;
                (*Value())[ItemName_Plugins()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Plugins(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Plugins()))
                {
                    return (*Value())[ItemName_Plugins()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Plugins(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Plugins()))
                {
                    (*Value())[ItemName_Plugins()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Plugins(int ArrayIndex, CTypePluginInfo SetValue)
        {
            try
            {
                (*Value())[ItemName_Plugins()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Plugins(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Plugins()))
                {
                    (*Value())[ItemName_Plugins()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Plugins(int ArrayIndex, const CTypePluginInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_Plugins()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Plugins()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CTypePluginInfo Get_Plugins(int ArrayIndex) const
        {
            return (*Value())[ItemName_Plugins()][ArrayIndex];
        }
        bool Get_Plugins(int ArrayIndex, CTypePluginInfo& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Plugins()))
                {
                    if (((*Value())[ItemName_Plugins()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Plugins()][ArrayIndex];
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
} // namespace GetInstalledPlugins
#endif //#if defined(IMPLEMENT_PLUGINAPI_GETINSTALLEDPLUGINS)


//------------------------------------------------------------------------
// PluginAPI::InstallPlugin::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_PLUGINAPI_INSTALLPLUGIN)
namespace InstallPlugin
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
        static std::string str("PluginAPI.InstallPlugin");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_GInsRet();
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
            Construct_GInsRet();
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
            Initialize_GInsRet();
            Initialize_ErrorMsg();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("PluginAPI::InstallPlugin");
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
} // namespace InstallPlugin
#endif //#if defined(IMPLEMENT_PLUGINAPI_INSTALLPLUGIN)


//------------------------------------------------------------------------
// PluginAPI::Event::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_PLUGINAPI_EVENT)
namespace Event
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
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("PluginAPI.Event");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_GInsRet();
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
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("PluginAPI::Event");
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
}; // class CResults
} // namespace Event
#endif //#if defined(IMPLEMENT_PLUGINAPI_EVENT)
//========================================================================
}; // namespace PluginAPI
//========================================================================
#endif // #if !defined(_PLUGINAPI_TYPES_H)

