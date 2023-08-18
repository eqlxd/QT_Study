//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_GIDATA_MAINTENANCEAPI_TYPES_H)
#define _GIDATA_MAINTENANCEAPI_TYPES_H
//========================================================================
// Implemented methods
#define IMPLEMENT_GIDATA_MAINTENANCEAPI_HANDLEPROJECT
#define IMPLEMENT_GIDATA_MAINTENANCEAPI_GETSYSTEMSTATE
#define IMPLEMENT_GIDATA_MAINTENANCEAPI_GETONLINEDATATRANSFERSTATES


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "gidata_MaintenanceAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
#include "gidata_MaintenanceAPI_Options.h"
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace gidata_MaintenanceAPI {
//========================================================================
//------------------------------------------------------------------------
// gidata_MaintenanceAPI::CAPIInfo
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
// gidata_MaintenanceAPI::CGlobalSettings
//------------------------------------------------------------------------
class CGlobalSettings : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_ProjectPath(void)
        {
            static std::string str("ProjectPath");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("GlobalSettings");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("0");
        return str;
    }
public:
    CGlobalSettings(void)
    {
        try
        {
            Construct_ProjectPath();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CGlobalSettings(const CGlobalSettings& rhs) : 
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
    CGlobalSettings(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_ProjectPath();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CGlobalSettings(void)
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
            Initialize_ProjectPath();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item ProjectPath (Type: "GInsXmlRpcStdAPI::CGIns_Info_StringValue")
    protected:
        void Construct_ProjectPath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProjectPath()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_StringValue InitValue;
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
                    GInsXmlRpcStdAPI::CGIns_Info_StringValue InitValue;
                    (*Value())[ItemName_ProjectPath()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ProjectPath(const GInsXmlRpcStdAPI::CGIns_Info_StringValue& SetValue)
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
        GInsXmlRpcStdAPI::CGIns_Info_StringValue Get_ProjectPath(void) const
        {
            return (*Value())[ItemName_ProjectPath()];
        }
        bool Get_ProjectPath(GInsXmlRpcStdAPI::CGIns_Info_StringValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ProjectPath()]).valid())
                {
                    GetValue = (*Value())[ItemName_ProjectPath()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CGlobalSettings


//------------------------------------------------------------------------
// gidata_MaintenanceAPI::COnlineDataTransferStates
//------------------------------------------------------------------------
class COnlineDataTransferStates : public GInsXmlRpc::XmlRpcValue
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
        static std::string const& ItemName_Hostname(void)
        {
            static std::string str("Hostname");
            return str;
        }
    public:
        static std::string const& ItemName_Index(void)
        {
            static std::string str("Index");
            return str;
        }
    public:
        static std::string const& ItemName_Port(void)
        {
            static std::string str("Port");
            return str;
        }
    public:
        static std::string const& ItemName_Active(void)
        {
            static std::string str("Active");
            return str;
        }
    public:
        static std::string const& ItemName_LastTransfer(void)
        {
            static std::string str("LastTransfer");
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
        static std::string str("OnlineDataTransferStates");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("1");
        return str;
    }
public:
    COnlineDataTransferStates(void)
    {
        try
        {
            Construct_Name();
            Construct_ID();
            Construct_Hostname();
            Construct_Index();
            Construct_Port();
            Construct_Active();
            Construct_LastTransfer();
            Construct_Events();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    COnlineDataTransferStates(const COnlineDataTransferStates& rhs) : 
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
    COnlineDataTransferStates(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_Hostname();
            Construct_Index();
            Construct_Port();
            Construct_Active();
            Construct_LastTransfer();
            Construct_Events();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~COnlineDataTransferStates(void)
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
            Initialize_Hostname();
            Initialize_Index();
            Initialize_Port();
            Initialize_Active();
            Initialize_LastTransfer();
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
    // Item Hostname (Type: "std::string")
    protected:
        void Construct_Hostname(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Hostname()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Hostname()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Hostname(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Hostname()))
                {
                    Construct_Hostname();
                }
                if ((*Value()).hasMember(ItemName_Hostname()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Hostname()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Hostname(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Hostname()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Hostname(void) const
        {
            return (*Value())[ItemName_Hostname()];
        }
        bool Get_Hostname(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Hostname()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Hostname()]);
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
// Item LastTransfer (Type: "int64_t")
protected:
    void Construct_LastTransfer(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_LastTransfer()))
            {
                int64_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_LastTransfer()] = (int64_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_LastTransfer(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LastTransfer()))
                {
                    Construct_LastTransfer();
                }
                if ((*Value()).hasMember(ItemName_LastTransfer()))
                {
                    int64_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_LastTransfer()] = (int64_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LastTransfer(int64_t SetValue)
        {
            try
            {
                (*Value())[ItemName_LastTransfer()] = (int64_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int64_t Get_LastTransfer(void) const
        {
            int64_t GetValue = (*Value())[ItemName_LastTransfer()];
            return (int64_t)GetValue;
        }
        bool Get_LastTransfer(int64_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LastTransfer()]).valid())
                {
                    GetValue = (int64_t)((int64_t)((*Value())[ItemName_LastTransfer()]));
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
}; // class COnlineDataTransferStates


//------------------------------------------------------------------------
// gidata_MaintenanceAPI::HandleProject::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GIDATA_MAINTENANCEAPI_HANDLEPROJECT)
namespace HandleProject
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ProjectPath(void)
    {
        static std::string str("ProjectPath");
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
        static std::string str("MaintenanceAPI.HandleProject");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ProjectPath();
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
            Construct_ProjectPath();
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
            Initialize_ProjectPath();
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
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::HandleProject");
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
} // namespace HandleProject
#endif //#if defined(IMPLEMENT_GIDATA_MAINTENANCEAPI_HANDLEPROJECT)


//------------------------------------------------------------------------
// gidata_MaintenanceAPI::HandleProject::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GIDATA_MAINTENANCEAPI_HANDLEPROJECT)
namespace HandleProject
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
        static std::string str("MaintenanceAPI.HandleProject");
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
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::HandleProject");
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
} // namespace HandleProject
#endif //#if defined(IMPLEMENT_GIDATA_MAINTENANCEAPI_HANDLEPROJECT)


//------------------------------------------------------------------------
// gidata_MaintenanceAPI::GetSystemState::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GIDATA_MAINTENANCEAPI_GETSYSTEMSTATE)
namespace GetSystemState
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_State(void)
    {
        static std::string str("State");
        return str;
    }
public:
    static std::string const& ItemName_Events(void)
    {
        static std::string str("Events");
        return str;
    }
public:
    static std::string const& ItemName_ActiveProject(void)
    {
        static std::string str("ActiveProject");
        return str;
    }
public:
    static std::string const& ItemName_ProjectDate(void)
    {
        static std::string str("ProjectDate");
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
            Construct_State();
            Construct_Events();
            Construct_ActiveProject();
            Construct_ProjectDate();
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
            Construct_State();
            Construct_Events();
            Construct_ActiveProject();
            Construct_ProjectDate();
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
            Initialize_State();
            Initialize_Events();
            Initialize_ActiveProject();
            Initialize_ProjectDate();
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
    //------------------------------------------------------------------------
    // Item ActiveProject (Type: "std::string")
    protected:
        void Construct_ActiveProject(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ActiveProject()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ActiveProject()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ActiveProject(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ActiveProject()))
                {
                    Construct_ActiveProject();
                }
                if ((*Value()).hasMember(ItemName_ActiveProject()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ActiveProject()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ActiveProject(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ActiveProject()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ActiveProject(void) const
        {
            return (*Value())[ItemName_ActiveProject()];
        }
        bool Get_ActiveProject(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ActiveProject()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ActiveProject()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ProjectDate (Type: "std::string")
    protected:
        void Construct_ProjectDate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProjectDate()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ProjectDate()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ProjectDate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProjectDate()))
                {
                    Construct_ProjectDate();
                }
                if ((*Value()).hasMember(ItemName_ProjectDate()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ProjectDate()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ProjectDate(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ProjectDate()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ProjectDate(void) const
        {
            return (*Value())[ItemName_ProjectDate()];
        }
        bool Get_ProjectDate(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ProjectDate()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ProjectDate()]);
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
#endif //#if defined(IMPLEMENT_GIDATA_MAINTENANCEAPI_GETSYSTEMSTATE)


//------------------------------------------------------------------------
// gidata_MaintenanceAPI::GetOnlineDataTransferStates::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GIDATA_MAINTENANCEAPI_GETONLINEDATATRANSFERSTATES)
namespace GetOnlineDataTransferStates
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
        static std::string str("MaintenanceAPI.GetOnlineDataTransferStates");
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
            (*Value())[ItemName_MethodID()] = std::string("MaintenanceAPI::GetOnlineDataTransferStates");
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
    // Item States (Type: "COnlineDataTransferStates[0]")
    protected:
        void Construct_States(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_States()))
                {
                    COnlineDataTransferStates InitValue;
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
                    COnlineDataTransferStates InitValue;
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
                COnlineDataTransferStates InitValue;
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
        bool Insert_States(int ArrayIndex, COnlineDataTransferStates SetValue)
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
        bool Set_States(int ArrayIndex, const COnlineDataTransferStates& SetValue)
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
        COnlineDataTransferStates Get_States(int ArrayIndex) const
        {
            return (*Value())[ItemName_States()][ArrayIndex];
        }
        bool Get_States(int ArrayIndex, COnlineDataTransferStates& GetValue) const
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
} // namespace GetOnlineDataTransferStates
#endif //#if defined(IMPLEMENT_GIDATA_MAINTENANCEAPI_GETONLINEDATATRANSFERSTATES)
//========================================================================
}; // namespace gidata_MaintenanceAPI
//========================================================================
#endif // #if !defined(_GIDATA_MAINTENANCEAPI_TYPES_H)

