//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_GICOM_SERVERAPI_TYPES_H)
#define _GICOM_SERVERAPI_TYPES_H
//========================================================================
// Implemented methods
#define IMPLEMENT_GICOM_SERVERAPI_GETCONFIG
#define IMPLEMENT_GICOM_SERVERAPI_ADDORMODIFYPORTS
#define IMPLEMENT_GICOM_SERVERAPI_ADDDEVICE
#define IMPLEMENT_GICOM_SERVERAPI_UPDATEDEVICEID
#define IMPLEMENT_GICOM_SERVERAPI_GETDEVICES
#define IMPLEMENT_GICOM_SERVERAPI_SAVEDEVICES
#define IMPLEMENT_GICOM_SERVERAPI_HANDLEPROJECT
#define IMPLEMENT_GICOM_SERVERAPI_REMOVEDEVICE
#define IMPLEMENT_GICOM_SERVERAPI_GETLOGS
#define IMPLEMENT_GICOM_SERVERAPI_GETDEVICESTATES
#define IMPLEMENT_GICOM_SERVERAPI_GETDEVICEMESSAGES
#define IMPLEMENT_GICOM_SERVERAPI_GETTRAFFIC
#define IMPLEMENT_GICOM_SERVERAPI_CLEARTRAFFIC
#define IMPLEMENT_GICOM_SERVERAPI_ADDROUTE


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "gicom_ServerAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
#include "GInsXmlRpcStdAPI_Types.h"
#include "gicom_CommonAPI_Types.h"
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace gicom_ServerAPI {
//========================================================================
//------------------------------------------------------------------------
// gicom_ServerAPI::CAPIInfo
//------------------------------------------------------------------------
class CAPIInfo
{
public:
    static std::string const& Name(void)
    {
        static std::string str("ServerAPI");
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
// gicom_ServerAPI::GetConfig::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_GETCONFIG)
namespace GetConfig
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("ServerAPI.GetConfig");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
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
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::GetConfig");
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
}; // class CParams
} // namespace GetConfig
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_GETCONFIG)


//------------------------------------------------------------------------
// gicom_ServerAPI::AddOrModifyPorts::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_ADDORMODIFYPORTS)
namespace AddOrModifyPorts
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Ports(void)
    {
        static std::string str("Ports");
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
        static std::string str("ServerAPI.AddOrModifyPorts");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Ports();
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
            Construct_Ports();
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
            Initialize_Ports();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::AddOrModifyPorts");
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
}; // class CParams
} // namespace AddOrModifyPorts
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_ADDORMODIFYPORTS)


//------------------------------------------------------------------------
// gicom_ServerAPI::AddDevice::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_ADDDEVICE)
namespace AddDevice
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
        static std::string str("ServerAPI.AddDevice");
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
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::AddDevice");
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
    // Item Device (Type: "gicom_CommonAPI::CStructDevice")
    protected:
        void Construct_Device(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Device()))
                {
                    gicom_CommonAPI::CStructDevice InitValue;
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
                    gicom_CommonAPI::CStructDevice InitValue;
                    (*Value())[ItemName_Device()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Device(const gicom_CommonAPI::CStructDevice& SetValue)
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
        gicom_CommonAPI::CStructDevice Get_Device(void) const
        {
            return (*Value())[ItemName_Device()];
        }
        bool Get_Device(gicom_CommonAPI::CStructDevice& GetValue) const
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
} // namespace AddDevice
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_ADDDEVICE)


//------------------------------------------------------------------------
// gicom_ServerAPI::UpdateDeviceID::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_UPDATEDEVICEID)
namespace UpdateDeviceID
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Serialnumber(void)
    {
        static std::string str("Serialnumber");
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
        static std::string str("ServerAPI.UpdateDeviceID");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Serialnumber();
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
            Construct_Serialnumber();
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
            Initialize_Serialnumber();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::UpdateDeviceID");
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
}; // class CParams
} // namespace UpdateDeviceID
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_UPDATEDEVICEID)


//------------------------------------------------------------------------
// gicom_ServerAPI::HandleProject::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_HANDLEPROJECT)
namespace HandleProject
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Action(void)
    {
        static std::string str("Action");
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
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("ServerAPI.HandleProject");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Action();
            Construct_ProjectPath();
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
            Construct_Action();
            Construct_ProjectPath();
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
            Initialize_Action();
            Initialize_ProjectPath();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::HandleProject");
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
}; // class CParams
} // namespace HandleProject
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_HANDLEPROJECT)


//------------------------------------------------------------------------
// gicom_ServerAPI::RemoveDevice::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_REMOVEDEVICE)
namespace RemoveDevice
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
        static std::string str("ServerAPI.RemoveDevice");
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
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::RemoveDevice");
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
} // namespace RemoveDevice
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_REMOVEDEVICE)


//------------------------------------------------------------------------
// gicom_ServerAPI::GetLogs::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_GETLOGS)
namespace GetLogs
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
        static std::string str("ServerAPI.GetLogs");
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
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::GetLogs");
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
} // namespace GetLogs
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_GETLOGS)


//------------------------------------------------------------------------
// gicom_ServerAPI::GetDeviceStates::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_GETDEVICESTATES)
namespace GetDeviceStates
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Serialnumber(void)
    {
        static std::string str("Serialnumber");
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
        static std::string str("ServerAPI.GetDeviceStates");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Serialnumber();
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
            Construct_Serialnumber();
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
            Initialize_Serialnumber();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::GetDeviceStates");
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
}; // class CParams
} // namespace GetDeviceStates
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_GETDEVICESTATES)


//------------------------------------------------------------------------
// gicom_ServerAPI::GetDeviceMessages::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_GETDEVICEMESSAGES)
namespace GetDeviceMessages
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Serialnumber(void)
    {
        static std::string str("Serialnumber");
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
        static std::string str("ServerAPI.GetDeviceMessages");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Serialnumber();
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
            Construct_Serialnumber();
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
            Initialize_Serialnumber();
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
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::GetDeviceMessages");
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
} // namespace GetDeviceMessages
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_GETDEVICEMESSAGES)


//------------------------------------------------------------------------
// gicom_ServerAPI::GetTraffic::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_GETTRAFFIC)
namespace GetTraffic
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("ServerAPI.GetTraffic");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
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
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::GetTraffic");
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
}; // class CParams
} // namespace GetTraffic
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_GETTRAFFIC)


//------------------------------------------------------------------------
// gicom_ServerAPI::ClearTraffic::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_CLEARTRAFFIC)
namespace ClearTraffic
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Serialnumber(void)
    {
        static std::string str("Serialnumber");
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
        static std::string str("ServerAPI.ClearTraffic");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Serialnumber();
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
            Construct_Serialnumber();
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
            Initialize_Serialnumber();
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
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::ClearTraffic");
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
} // namespace ClearTraffic
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_CLEARTRAFFIC)


//------------------------------------------------------------------------
// gicom_ServerAPI::AddRoute::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_ADDROUTE)
namespace AddRoute
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_IPAddress(void)
    {
        static std::string str("IPAddress");
        return str;
    }
public:
    static std::string const& ItemName_Port(void)
    {
        static std::string str("Port");
        return str;
    }
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
        static std::string str("ServerAPI.AddRoute");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_IPAddress();
            Construct_Port();
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
            Construct_IPAddress();
            Construct_Port();
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
            Initialize_IPAddress();
            Initialize_Port();
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
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::AddRoute");
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
} // namespace AddRoute
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_ADDROUTE)


//------------------------------------------------------------------------
// gicom_ServerAPI::GetConfig::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_GETCONFIG)
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
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("ServerAPI.GetConfig");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Config();
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
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::GetConfig");
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
    // Item Config (Type: "gicom_CommonAPI::CStructServerConfig")
    protected:
        void Construct_Config(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Config()))
                {
                    gicom_CommonAPI::CStructServerConfig InitValue;
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
                    gicom_CommonAPI::CStructServerConfig InitValue;
                    (*Value())[ItemName_Config()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Config(const gicom_CommonAPI::CStructServerConfig& SetValue)
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
        gicom_CommonAPI::CStructServerConfig Get_Config(void) const
        {
            return (*Value())[ItemName_Config()];
        }
        bool Get_Config(gicom_CommonAPI::CStructServerConfig& GetValue) const
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
}; // class CResults
} // namespace GetConfig
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_GETCONFIG)


//------------------------------------------------------------------------
// gicom_ServerAPI::AddOrModifyPorts::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_ADDORMODIFYPORTS)
namespace AddOrModifyPorts
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
        static std::string str("ServerAPI.AddOrModifyPorts");
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
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::AddOrModifyPorts");
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
} // namespace AddOrModifyPorts
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_ADDORMODIFYPORTS)


//------------------------------------------------------------------------
// gicom_ServerAPI::AddDevice::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_ADDDEVICE)
namespace AddDevice
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
        static std::string str("ServerAPI.AddDevice");
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
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::AddDevice");
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
} // namespace AddDevice
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_ADDDEVICE)


//------------------------------------------------------------------------
// gicom_ServerAPI::UpdateDeviceID::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_UPDATEDEVICEID)
namespace UpdateDeviceID
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
        static std::string str("ServerAPI.UpdateDeviceID");
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
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::UpdateDeviceID");
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
} // namespace UpdateDeviceID
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_UPDATEDEVICEID)


//------------------------------------------------------------------------
// gicom_ServerAPI::GetDevices::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_GETDEVICES)
namespace GetDevices
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Devices(void)
    {
        static std::string str("Devices");
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
        static std::string str("ServerAPI.GetDevices");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Devices();
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
            Construct_Devices();
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
            Initialize_Devices();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::GetDevices");
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
    // Item Devices (Type: "gicom_CommonAPI::CStructDevice[0]")
    protected:
        void Construct_Devices(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Devices()))
                {
                    gicom_CommonAPI::CStructDevice InitValue;
                    (*Value())[ItemName_Devices()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Devices(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Devices()))
                {
                    Construct_Devices();
                }
                if ((*Value()).hasMember(ItemName_Devices()))
                {
                    gicom_CommonAPI::CStructDevice InitValue;
                    (*Value())[ItemName_Devices()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Devices(int NewSize)
        {
            try
            {
                gicom_CommonAPI::CStructDevice InitValue;
                (*Value())[ItemName_Devices()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Devices(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Devices()))
                {
                    return (*Value())[ItemName_Devices()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Devices(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Devices()))
                {
                    (*Value())[ItemName_Devices()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Devices(int ArrayIndex, gicom_CommonAPI::CStructDevice SetValue)
        {
            try
            {
                (*Value())[ItemName_Devices()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Devices(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Devices()))
                {
                    (*Value())[ItemName_Devices()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Devices(int ArrayIndex, const gicom_CommonAPI::CStructDevice& SetValue)
        {
            try
            {
                (*Value())[ItemName_Devices()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Devices()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        gicom_CommonAPI::CStructDevice Get_Devices(int ArrayIndex) const
        {
            return (*Value())[ItemName_Devices()][ArrayIndex];
        }
        bool Get_Devices(int ArrayIndex, gicom_CommonAPI::CStructDevice& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Devices()))
                {
                    if (((*Value())[ItemName_Devices()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Devices()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetDevices
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_GETDEVICES)


//------------------------------------------------------------------------
// gicom_ServerAPI::SaveDevices::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_SAVEDEVICES)
namespace SaveDevices
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
        static std::string str("ServerAPI.SaveDevices");
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
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::SaveDevices");
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
} // namespace SaveDevices
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_SAVEDEVICES)


//------------------------------------------------------------------------
// gicom_ServerAPI::HandleProject::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_HANDLEPROJECT)
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
        static std::string str("ServerAPI.HandleProject");
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
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::HandleProject");
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
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_HANDLEPROJECT)


//------------------------------------------------------------------------
// gicom_ServerAPI::RemoveDevice::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_REMOVEDEVICE)
namespace RemoveDevice
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
        static std::string str("ServerAPI.RemoveDevice");
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
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::RemoveDevice");
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
} // namespace RemoveDevice
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_REMOVEDEVICE)


//------------------------------------------------------------------------
// gicom_ServerAPI::GetLogs::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_GETLOGS)
namespace GetLogs
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Logs(void)
    {
        static std::string str("Logs");
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
        static std::string str("ServerAPI.GetLogs");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Logs();
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
            Construct_Logs();
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
            Initialize_Logs();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::GetLogs");
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
    // Item Logs (Type: "gicom_CommonAPI::CStructLogEntry[0]")
    protected:
        void Construct_Logs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Logs()))
                {
                    gicom_CommonAPI::CStructLogEntry InitValue;
                    (*Value())[ItemName_Logs()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Logs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Logs()))
                {
                    Construct_Logs();
                }
                if ((*Value()).hasMember(ItemName_Logs()))
                {
                    gicom_CommonAPI::CStructLogEntry InitValue;
                    (*Value())[ItemName_Logs()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Logs(int NewSize)
        {
            try
            {
                gicom_CommonAPI::CStructLogEntry InitValue;
                (*Value())[ItemName_Logs()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Logs(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Logs()))
                {
                    return (*Value())[ItemName_Logs()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Logs(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Logs()))
                {
                    (*Value())[ItemName_Logs()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Logs(int ArrayIndex, gicom_CommonAPI::CStructLogEntry SetValue)
        {
            try
            {
                (*Value())[ItemName_Logs()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Logs(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Logs()))
                {
                    (*Value())[ItemName_Logs()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Logs(int ArrayIndex, const gicom_CommonAPI::CStructLogEntry& SetValue)
        {
            try
            {
                (*Value())[ItemName_Logs()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Logs()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        gicom_CommonAPI::CStructLogEntry Get_Logs(int ArrayIndex) const
        {
            return (*Value())[ItemName_Logs()][ArrayIndex];
        }
        bool Get_Logs(int ArrayIndex, gicom_CommonAPI::CStructLogEntry& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Logs()))
                {
                    if (((*Value())[ItemName_Logs()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Logs()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetLogs
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_GETLOGS)


//------------------------------------------------------------------------
// gicom_ServerAPI::GetDeviceStates::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_GETDEVICESTATES)
namespace GetDeviceStates
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_DeviceStates(void)
    {
        static std::string str("DeviceStates");
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
        static std::string str("ServerAPI.GetDeviceStates");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_DeviceStates();
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
            Construct_DeviceStates();
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
            Initialize_DeviceStates();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::GetDeviceStates");
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
    // Item DeviceStates (Type: "gicom_CommonAPI::CStructDeviceState[0]")
    protected:
        void Construct_DeviceStates(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceStates()))
                {
                    gicom_CommonAPI::CStructDeviceState InitValue;
                    (*Value())[ItemName_DeviceStates()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_DeviceStates(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceStates()))
                {
                    Construct_DeviceStates();
                }
                if ((*Value()).hasMember(ItemName_DeviceStates()))
                {
                    gicom_CommonAPI::CStructDeviceState InitValue;
                    (*Value())[ItemName_DeviceStates()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_DeviceStates(int NewSize)
        {
            try
            {
                gicom_CommonAPI::CStructDeviceState InitValue;
                (*Value())[ItemName_DeviceStates()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_DeviceStates(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DeviceStates()))
                {
                    return (*Value())[ItemName_DeviceStates()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_DeviceStates(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DeviceStates()))
                {
                    (*Value())[ItemName_DeviceStates()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_DeviceStates(int ArrayIndex, gicom_CommonAPI::CStructDeviceState SetValue)
        {
            try
            {
                (*Value())[ItemName_DeviceStates()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_DeviceStates(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DeviceStates()))
                {
                    (*Value())[ItemName_DeviceStates()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DeviceStates(int ArrayIndex, const gicom_CommonAPI::CStructDeviceState& SetValue)
        {
            try
            {
                (*Value())[ItemName_DeviceStates()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_DeviceStates()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        gicom_CommonAPI::CStructDeviceState Get_DeviceStates(int ArrayIndex) const
        {
            return (*Value())[ItemName_DeviceStates()][ArrayIndex];
        }
        bool Get_DeviceStates(int ArrayIndex, gicom_CommonAPI::CStructDeviceState& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DeviceStates()))
                {
                    if (((*Value())[ItemName_DeviceStates()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_DeviceStates()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetDeviceStates
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_GETDEVICESTATES)


//------------------------------------------------------------------------
// gicom_ServerAPI::GetDeviceMessages::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_GETDEVICEMESSAGES)
namespace GetDeviceMessages
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Messages(void)
    {
        static std::string str("Messages");
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
        static std::string str("ServerAPI.GetDeviceMessages");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Messages();
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
            Construct_Messages();
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
            Initialize_Messages();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::GetDeviceMessages");
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
    // Item Messages (Type: "gicom_CommonAPI::CStructDeviceMessage[0]")
    protected:
        void Construct_Messages(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Messages()))
                {
                    gicom_CommonAPI::CStructDeviceMessage InitValue;
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
                    gicom_CommonAPI::CStructDeviceMessage InitValue;
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
                gicom_CommonAPI::CStructDeviceMessage InitValue;
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
        bool Insert_Messages(int ArrayIndex, gicom_CommonAPI::CStructDeviceMessage SetValue)
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
        bool Set_Messages(int ArrayIndex, const gicom_CommonAPI::CStructDeviceMessage& SetValue)
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
        gicom_CommonAPI::CStructDeviceMessage Get_Messages(int ArrayIndex) const
        {
            return (*Value())[ItemName_Messages()][ArrayIndex];
        }
        bool Get_Messages(int ArrayIndex, gicom_CommonAPI::CStructDeviceMessage& GetValue) const
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
}; // class CResults
} // namespace GetDeviceMessages
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_GETDEVICEMESSAGES)


//------------------------------------------------------------------------
// gicom_ServerAPI::GetTraffic::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_GETTRAFFIC)
namespace GetTraffic
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Traffic(void)
    {
        static std::string str("Traffic");
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
        static std::string str("ServerAPI.GetTraffic");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Traffic();
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
            Construct_Traffic();
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
            Initialize_Traffic();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::GetTraffic");
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
    // Item Traffic (Type: "gicom_CommonAPI::CStructTraffic[0]")
    protected:
        void Construct_Traffic(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Traffic()))
                {
                    gicom_CommonAPI::CStructTraffic InitValue;
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
                    gicom_CommonAPI::CStructTraffic InitValue;
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
                gicom_CommonAPI::CStructTraffic InitValue;
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
        bool Insert_Traffic(int ArrayIndex, gicom_CommonAPI::CStructTraffic SetValue)
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
        bool Set_Traffic(int ArrayIndex, const gicom_CommonAPI::CStructTraffic& SetValue)
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
        gicom_CommonAPI::CStructTraffic Get_Traffic(int ArrayIndex) const
        {
            return (*Value())[ItemName_Traffic()][ArrayIndex];
        }
        bool Get_Traffic(int ArrayIndex, gicom_CommonAPI::CStructTraffic& GetValue) const
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
}; // class CResults
} // namespace GetTraffic
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_GETTRAFFIC)


//------------------------------------------------------------------------
// gicom_ServerAPI::ClearTraffic::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_CLEARTRAFFIC)
namespace ClearTraffic
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
        static std::string str("ServerAPI.ClearTraffic");
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
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::ClearTraffic");
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
} // namespace ClearTraffic
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_CLEARTRAFFIC)


//------------------------------------------------------------------------
// gicom_ServerAPI::AddRoute::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_SERVERAPI_ADDROUTE)
namespace AddRoute
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
        static std::string str("ServerAPI.AddRoute");
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
            (*Value())[ItemName_MethodID()] = std::string("ServerAPI::AddRoute");
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
} // namespace AddRoute
#endif //#if defined(IMPLEMENT_GICOM_SERVERAPI_ADDROUTE)
//========================================================================
}; // namespace gicom_ServerAPI
//========================================================================
#endif // #if !defined(_GICOM_SERVERAPI_TYPES_H)

