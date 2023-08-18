//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_GICOM_DEVICEAPI_TYPES_H)
#define _GICOM_DEVICEAPI_TYPES_H
//========================================================================
// Implemented methods
#define IMPLEMENT_GICOM_DEVICEAPI_RESOLVECLIENTADDRESS
#define IMPLEMENT_GICOM_DEVICEAPI_START
#define IMPLEMENT_GICOM_DEVICEAPI_STOP
#define IMPLEMENT_GICOM_DEVICEAPI_REMOVEINSTANCE
#define IMPLEMENT_GICOM_DEVICEAPI_ADDINSTANCE
#define IMPLEMENT_GICOM_DEVICEAPI_GETCONFIG
#define IMPLEMENT_GICOM_DEVICEAPI_GETSTATES
#define IMPLEMENT_GICOM_DEVICEAPI_GETLOGS
#define IMPLEMENT_GICOM_DEVICEAPI_SENDMESSAGE


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "gicom_DeviceAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace gicom_DeviceAPI {
//========================================================================
//------------------------------------------------------------------------
// gicom_DeviceAPI::CAPIInfo
//------------------------------------------------------------------------
class CAPIInfo
{
public:
    static std::string const& Name(void)
    {
        static std::string str("DeviceAPI");
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
// gicom_DeviceAPI::Start::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICEAPI_START)
namespace Start
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Instance(void)
    {
        static std::string str("Instance");
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
        static std::string str("DeviceAPI.Start");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Instance();
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
            Construct_Instance();
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
            Initialize_Instance();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceAPI::Start");
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
    // Item Instance (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Instance(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Instance()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Instance()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Instance(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Instance()))
                {
                    Construct_Instance();
                }
                if ((*Value()).hasMember(ItemName_Instance()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Instance()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Instance(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Instance()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Instance(void) const
        {
            return (*Value())[ItemName_Instance()];
        }
        bool Get_Instance(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Instance()]).valid())
                {
                    GetValue = (*Value())[ItemName_Instance()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace Start
#endif //#if defined(IMPLEMENT_GICOM_DEVICEAPI_START)


//------------------------------------------------------------------------
// gicom_DeviceAPI::Stop::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICEAPI_STOP)
namespace Stop
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Instance(void)
    {
        static std::string str("Instance");
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
        static std::string str("DeviceAPI.Stop");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Instance();
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
            Construct_Instance();
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
            Initialize_Instance();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceAPI::Stop");
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
    // Item Instance (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Instance(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Instance()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Instance()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Instance(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Instance()))
                {
                    Construct_Instance();
                }
                if ((*Value()).hasMember(ItemName_Instance()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Instance()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Instance(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Instance()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Instance(void) const
        {
            return (*Value())[ItemName_Instance()];
        }
        bool Get_Instance(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Instance()]).valid())
                {
                    GetValue = (*Value())[ItemName_Instance()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace Stop
#endif //#if defined(IMPLEMENT_GICOM_DEVICEAPI_STOP)


//------------------------------------------------------------------------
// gicom_DeviceAPI::RemoveInstance::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICEAPI_REMOVEINSTANCE)
namespace RemoveInstance
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Instance(void)
    {
        static std::string str("Instance");
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
        static std::string str("DeviceAPI.RemoveInstance");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Instance();
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
            Construct_Instance();
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
            Initialize_Instance();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceAPI::RemoveInstance");
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
    // Item Instance (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Instance(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Instance()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Instance()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Instance(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Instance()))
                {
                    Construct_Instance();
                }
                if ((*Value()).hasMember(ItemName_Instance()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Instance()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Instance(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Instance()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Instance(void) const
        {
            return (*Value())[ItemName_Instance()];
        }
        bool Get_Instance(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Instance()]).valid())
                {
                    GetValue = (*Value())[ItemName_Instance()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace RemoveInstance
#endif //#if defined(IMPLEMENT_GICOM_DEVICEAPI_REMOVEINSTANCE)


//------------------------------------------------------------------------
// gicom_DeviceAPI::AddInstance::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICEAPI_ADDINSTANCE)
namespace AddInstance
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Instance(void)
    {
        static std::string str("Instance");
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
        static std::string str("DeviceAPI.AddInstance");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Instance();
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
            Construct_Instance();
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
            Initialize_Instance();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceAPI::AddInstance");
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
    // Item Instance (Type: "gicom_CommonAPI::CStructInstance")
    protected:
        void Construct_Instance(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Instance()))
                {
                    gicom_CommonAPI::CStructInstance InitValue;
                    (*Value())[ItemName_Instance()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Instance(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Instance()))
                {
                    Construct_Instance();
                }
                if ((*Value()).hasMember(ItemName_Instance()))
                {
                    gicom_CommonAPI::CStructInstance InitValue;
                    (*Value())[ItemName_Instance()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Instance(const gicom_CommonAPI::CStructInstance& SetValue)
        {
            try
            {
                (*Value())[ItemName_Instance()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        gicom_CommonAPI::CStructInstance Get_Instance(void) const
        {
            return (*Value())[ItemName_Instance()];
        }
        bool Get_Instance(gicom_CommonAPI::CStructInstance& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Instance()]).valid())
                {
                    GetValue = (*Value())[ItemName_Instance()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace AddInstance
#endif //#if defined(IMPLEMENT_GICOM_DEVICEAPI_ADDINSTANCE)


//------------------------------------------------------------------------
// gicom_DeviceAPI::GetLogs::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICEAPI_GETLOGS)
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
        static std::string str("DeviceAPI.GetLogs");
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
            (*Value())[ItemName_MethodID()] = std::string("DeviceAPI::GetLogs");
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
#endif //#if defined(IMPLEMENT_GICOM_DEVICEAPI_GETLOGS)


//------------------------------------------------------------------------
// gicom_DeviceAPI::SendMessage::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICEAPI_SENDMESSAGE)
namespace SendMessage
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Message(void)
    {
        static std::string str("Message");
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
        static std::string str("DeviceAPI.SendMessage");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Message();
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
            Construct_Message();
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
            Initialize_Message();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceAPI::SendMessage");
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
    // Item Message (Type: "GInsXmlRpcStdAPI::CGIns_Base_Message")
    protected:
        void Construct_Message(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Message()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_Message InitValue;
                    (*Value())[ItemName_Message()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Message(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Message()))
                {
                    Construct_Message();
                }
                if ((*Value()).hasMember(ItemName_Message()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_Message InitValue;
                    (*Value())[ItemName_Message()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Message(const GInsXmlRpcStdAPI::CGIns_Base_Message& SetValue)
        {
            try
            {
                (*Value())[ItemName_Message()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Base_Message Get_Message(void) const
        {
            return (*Value())[ItemName_Message()];
        }
        bool Get_Message(GInsXmlRpcStdAPI::CGIns_Base_Message& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Message()]).valid())
                {
                    GetValue = (*Value())[ItemName_Message()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace SendMessage
#endif //#if defined(IMPLEMENT_GICOM_DEVICEAPI_SENDMESSAGE)


//------------------------------------------------------------------------
// gicom_DeviceAPI::ResolveClientAddress::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICEAPI_RESOLVECLIENTADDRESS)
namespace ResolveClientAddress
{
class CResults : public GInsXmlRpc::XmlRpcValue
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
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("DeviceAPI.ResolveClientAddress");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_IPAddress();
            Construct_Port();
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
            Construct_IPAddress();
            Construct_Port();
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
            Initialize_IPAddress();
            Initialize_Port();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceAPI::ResolveClientAddress");
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
}; // class CResults
} // namespace ResolveClientAddress
#endif //#if defined(IMPLEMENT_GICOM_DEVICEAPI_RESOLVECLIENTADDRESS)


//------------------------------------------------------------------------
// gicom_DeviceAPI::Start::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICEAPI_START)
namespace Start
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
        static std::string str("DeviceAPI.Start");
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
            (*Value())[ItemName_MethodID()] = std::string("DeviceAPI::Start");
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
} // namespace Start
#endif //#if defined(IMPLEMENT_GICOM_DEVICEAPI_START)


//------------------------------------------------------------------------
// gicom_DeviceAPI::Stop::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICEAPI_STOP)
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
        static std::string str("DeviceAPI.Stop");
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
            (*Value())[ItemName_MethodID()] = std::string("DeviceAPI::Stop");
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
#endif //#if defined(IMPLEMENT_GICOM_DEVICEAPI_STOP)


//------------------------------------------------------------------------
// gicom_DeviceAPI::RemoveInstance::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICEAPI_REMOVEINSTANCE)
namespace RemoveInstance
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
        static std::string str("DeviceAPI.RemoveInstance");
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
            (*Value())[ItemName_MethodID()] = std::string("DeviceAPI::RemoveInstance");
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
} // namespace RemoveInstance
#endif //#if defined(IMPLEMENT_GICOM_DEVICEAPI_REMOVEINSTANCE)


//------------------------------------------------------------------------
// gicom_DeviceAPI::AddInstance::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICEAPI_ADDINSTANCE)
namespace AddInstance
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ID(void)
    {
        static std::string str("ID");
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
        static std::string str("DeviceAPI.AddInstance");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ID();
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
            Construct_ID();
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
            Initialize_ID();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceAPI::AddInstance");
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
} // namespace AddInstance
#endif //#if defined(IMPLEMENT_GICOM_DEVICEAPI_ADDINSTANCE)


//------------------------------------------------------------------------
// gicom_DeviceAPI::GetConfig::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICEAPI_GETCONFIG)
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
        static std::string str("DeviceAPI.GetConfig");
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
            (*Value())[ItemName_MethodID()] = std::string("DeviceAPI::GetConfig");
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
    // Item Config (Type: "gicom_CommonAPI::CStructDeviceConfig")
    protected:
        void Construct_Config(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Config()))
                {
                    gicom_CommonAPI::CStructDeviceConfig InitValue;
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
                    gicom_CommonAPI::CStructDeviceConfig InitValue;
                    (*Value())[ItemName_Config()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Config(const gicom_CommonAPI::CStructDeviceConfig& SetValue)
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
        gicom_CommonAPI::CStructDeviceConfig Get_Config(void) const
        {
            return (*Value())[ItemName_Config()];
        }
        bool Get_Config(gicom_CommonAPI::CStructDeviceConfig& GetValue) const
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
#endif //#if defined(IMPLEMENT_GICOM_DEVICEAPI_GETCONFIG)


//------------------------------------------------------------------------
// gicom_DeviceAPI::GetStates::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICEAPI_GETSTATES)
namespace GetStates
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
        static std::string str("DeviceAPI.GetStates");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
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
            (*Value())[ItemName_MethodID()] = std::string("DeviceAPI::GetStates");
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
    // Item State (Type: "gicom_CommonAPI::CStructInstanceState[0]")
    protected:
        void Construct_State(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_State()))
                {
                    gicom_CommonAPI::CStructInstanceState InitValue;
                    (*Value())[ItemName_State()].setArraySizeAndInit(0,InitValue);
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
                    gicom_CommonAPI::CStructInstanceState InitValue;
                    (*Value())[ItemName_State()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_State(int NewSize)
        {
            try
            {
                gicom_CommonAPI::CStructInstanceState InitValue;
                (*Value())[ItemName_State()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_State(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_State()))
                {
                    return (*Value())[ItemName_State()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_State(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_State()))
                {
                    (*Value())[ItemName_State()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_State(int ArrayIndex, gicom_CommonAPI::CStructInstanceState SetValue)
        {
            try
            {
                (*Value())[ItemName_State()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_State(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_State()))
                {
                    (*Value())[ItemName_State()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_State(int ArrayIndex, const gicom_CommonAPI::CStructInstanceState& SetValue)
        {
            try
            {
                (*Value())[ItemName_State()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_State()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        gicom_CommonAPI::CStructInstanceState Get_State(int ArrayIndex) const
        {
            return (*Value())[ItemName_State()][ArrayIndex];
        }
        bool Get_State(int ArrayIndex, gicom_CommonAPI::CStructInstanceState& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_State()))
                {
                    if (((*Value())[ItemName_State()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_State()][ArrayIndex];
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
} // namespace GetStates
#endif //#if defined(IMPLEMENT_GICOM_DEVICEAPI_GETSTATES)


//------------------------------------------------------------------------
// gicom_DeviceAPI::GetLogs::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICEAPI_GETLOGS)
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
        static std::string str("DeviceAPI.GetLogs");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Logs();
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
            Construct_Logs();
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
            Initialize_Logs();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DeviceAPI::GetLogs");
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
} // namespace GetLogs
#endif //#if defined(IMPLEMENT_GICOM_DEVICEAPI_GETLOGS)


//------------------------------------------------------------------------
// gicom_DeviceAPI::SendMessage::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_DEVICEAPI_SENDMESSAGE)
namespace SendMessage
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
        static std::string str("DeviceAPI.SendMessage");
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
            (*Value())[ItemName_MethodID()] = std::string("DeviceAPI::SendMessage");
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
} // namespace SendMessage
#endif //#if defined(IMPLEMENT_GICOM_DEVICEAPI_SENDMESSAGE)
//========================================================================
}; // namespace gicom_DeviceAPI
//========================================================================
#endif // #if !defined(_GICOM_DEVICEAPI_TYPES_H)

