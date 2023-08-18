//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_GPSCLIENTAPI_TYPES_H)
#define _GPSCLIENTAPI_TYPES_H
//========================================================================
// Implemented methods
#define IMPLEMENT_GPSCLIENTAPI_GETPORTSETTINGS
#define IMPLEMENT_GPSCLIENTAPI_SETPORTSETTINGS
#define IMPLEMENT_GPSCLIENTAPI_GETGPSVALUES
#define IMPLEMENT_GPSCLIENTAPI_ENABLE


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "GPSClientAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace GPSClientAPI {
//========================================================================
//------------------------------------------------------------------------
// GPSClientAPI::CAPIInfo
//------------------------------------------------------------------------
class CAPIInfo
{
public:
    static std::string const& Name(void)
    {
        static std::string str("GPSClientAPI");
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
// GPSClientAPI::GetPortSettings::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GPSCLIENTAPI_GETPORTSETTINGS)
namespace GetPortSettings
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_GPSClient(void)
    {
        static std::string str("GPSClient");
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
        static std::string str("GPSClientAPI.GetPortSettings");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_GPSClient();
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
            Construct_GPSClient();
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
            Initialize_GPSClient();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("GPSClientAPI::GetPortSettings");
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
    // Item GPSClient (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_GPSClient(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GPSClient()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_GPSClient()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_GPSClient(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GPSClient()))
                {
                    Construct_GPSClient();
                }
                if ((*Value()).hasMember(ItemName_GPSClient()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_GPSClient()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_GPSClient(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_GPSClient()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_GPSClient(void) const
        {
            return (*Value())[ItemName_GPSClient()];
        }
        bool Get_GPSClient(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_GPSClient()]).valid())
                {
                    GetValue = (*Value())[ItemName_GPSClient()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GetPortSettings
#endif //#if defined(IMPLEMENT_GPSCLIENTAPI_GETPORTSETTINGS)


//------------------------------------------------------------------------
// GPSClientAPI::SetPortSettings::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GPSCLIENTAPI_SETPORTSETTINGS)
namespace SetPortSettings
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_GPSClient(void)
    {
        static std::string str("GPSClient");
        return str;
    }
public:
    static std::string const& ItemName_BaudRate(void)
    {
        static std::string str("BaudRate");
        return str;
    }
public:
    static std::string const& ItemName_CharSize(void)
    {
        static std::string str("CharSize");
        return str;
    }
public:
    static std::string const& ItemName_Parity(void)
    {
        static std::string str("Parity");
        return str;
    }
public:
    static std::string const& ItemName_StopBits(void)
    {
        static std::string str("StopBits");
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
        static std::string str("GPSClientAPI.SetPortSettings");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_GPSClient();
            Construct_BaudRate();
            Construct_CharSize();
            Construct_Parity();
            Construct_StopBits();
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
            Construct_GPSClient();
            Construct_BaudRate();
            Construct_CharSize();
            Construct_Parity();
            Construct_StopBits();
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
            Initialize_GPSClient();
            Initialize_BaudRate();
            Initialize_CharSize();
            Initialize_Parity();
            Initialize_StopBits();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("GPSClientAPI::SetPortSettings");
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
    // Item GPSClient (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_GPSClient(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GPSClient()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_GPSClient()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_GPSClient(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GPSClient()))
                {
                    Construct_GPSClient();
                }
                if ((*Value()).hasMember(ItemName_GPSClient()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_GPSClient()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_GPSClient(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_GPSClient()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_GPSClient(void) const
        {
            return (*Value())[ItemName_GPSClient()];
        }
        bool Get_GPSClient(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_GPSClient()]).valid())
                {
                    GetValue = (*Value())[ItemName_GPSClient()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item BaudRate (Type: "int32_t")
protected:
    void Construct_BaudRate(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_BaudRate()))
            {
                int32_t InitValue;
                InitValue = 19200;
                    (*Value())[ItemName_BaudRate()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_BaudRate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_BaudRate()))
                {
                    Construct_BaudRate();
                }
                if ((*Value()).hasMember(ItemName_BaudRate()))
                {
                    int32_t InitValue;
                    InitValue = 19200;
                    (*Value())[ItemName_BaudRate()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_BaudRate(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_BaudRate()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_BaudRate(void) const
        {
            int32_t GetValue = (*Value())[ItemName_BaudRate()];
            return (int32_t)GetValue;
        }
        bool Get_BaudRate(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_BaudRate()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_BaudRate()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item CharSize (Type: "int32_t")
protected:
    void Construct_CharSize(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_CharSize()))
            {
                int32_t InitValue;
                InitValue = 8;
                    (*Value())[ItemName_CharSize()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_CharSize(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CharSize()))
                {
                    Construct_CharSize();
                }
                if ((*Value()).hasMember(ItemName_CharSize()))
                {
                    int32_t InitValue;
                    InitValue = 8;
                    (*Value())[ItemName_CharSize()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_CharSize(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_CharSize()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_CharSize(void) const
        {
            int32_t GetValue = (*Value())[ItemName_CharSize()];
            return (int32_t)GetValue;
        }
        bool Get_CharSize(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_CharSize()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_CharSize()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Parity (Type: "std::string")
    protected:
        void Construct_Parity(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Parity()))
                {
                    std::string InitValue;
                    InitValue = "n";
                    (*Value())[ItemName_Parity()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Parity(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Parity()))
                {
                    Construct_Parity();
                }
                if ((*Value()).hasMember(ItemName_Parity()))
                {
                    std::string InitValue;
                    InitValue = "n";
                    (*Value())[ItemName_Parity()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Parity(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Parity()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Parity(void) const
        {
            return (*Value())[ItemName_Parity()];
        }
        bool Get_Parity(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Parity()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Parity()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item StopBits (Type: "int32_t")
protected:
    void Construct_StopBits(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_StopBits()))
            {
                int32_t InitValue;
                InitValue = 1;
                    (*Value())[ItemName_StopBits()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_StopBits(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StopBits()))
                {
                    Construct_StopBits();
                }
                if ((*Value()).hasMember(ItemName_StopBits()))
                {
                    int32_t InitValue;
                    InitValue = 1;
                    (*Value())[ItemName_StopBits()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StopBits(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_StopBits()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_StopBits(void) const
        {
            int32_t GetValue = (*Value())[ItemName_StopBits()];
            return (int32_t)GetValue;
        }
        bool Get_StopBits(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_StopBits()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_StopBits()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace SetPortSettings
#endif //#if defined(IMPLEMENT_GPSCLIENTAPI_SETPORTSETTINGS)


//------------------------------------------------------------------------
// GPSClientAPI::GetGPSValues::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GPSCLIENTAPI_GETGPSVALUES)
namespace GetGPSValues
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_GPSClient(void)
    {
        static std::string str("GPSClient");
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
        static std::string str("GPSClientAPI.GetGPSValues");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_GPSClient();
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
            Construct_GPSClient();
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
            Initialize_GPSClient();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("GPSClientAPI::GetGPSValues");
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
    // Item GPSClient (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_GPSClient(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GPSClient()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_GPSClient()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_GPSClient(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GPSClient()))
                {
                    Construct_GPSClient();
                }
                if ((*Value()).hasMember(ItemName_GPSClient()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_GPSClient()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_GPSClient(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_GPSClient()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_GPSClient(void) const
        {
            return (*Value())[ItemName_GPSClient()];
        }
        bool Get_GPSClient(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_GPSClient()]).valid())
                {
                    GetValue = (*Value())[ItemName_GPSClient()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GetGPSValues
#endif //#if defined(IMPLEMENT_GPSCLIENTAPI_GETGPSVALUES)


//------------------------------------------------------------------------
// GPSClientAPI::Enable::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GPSCLIENTAPI_ENABLE)
namespace Enable
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_GPSClient(void)
    {
        static std::string str("GPSClient");
        return str;
    }
public:
    static std::string const& ItemName_Enable(void)
    {
        static std::string str("Enable");
        return str;
    }
public:
    static std::string const& ItemName_Debug(void)
    {
        static std::string str("Debug");
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
        static std::string str("GPSClientAPI.Enable");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_GPSClient();
            Construct_Enable();
            Construct_Debug();
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
            Construct_GPSClient();
            Construct_Enable();
            Construct_Debug();
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
            Initialize_GPSClient();
            Initialize_Enable();
            Initialize_Debug();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("GPSClientAPI::Enable");
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
    // Item GPSClient (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_GPSClient(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GPSClient()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_GPSClient()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_GPSClient(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GPSClient()))
                {
                    Construct_GPSClient();
                }
                if ((*Value()).hasMember(ItemName_GPSClient()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_GPSClient()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_GPSClient(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_GPSClient()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_GPSClient(void) const
        {
            return (*Value())[ItemName_GPSClient()];
        }
        bool Get_GPSClient(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_GPSClient()]).valid())
                {
                    GetValue = (*Value())[ItemName_GPSClient()];
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
//------------------------------------------------------------------------
// Item Debug (Type: "bool")
protected:
    void Construct_Debug(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Debug()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Debug()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Debug(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Debug()))
                {
                    Construct_Debug();
                }
                if ((*Value()).hasMember(ItemName_Debug()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Debug()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Debug(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Debug()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Debug(void) const
        {
            bool GetValue = (*Value())[ItemName_Debug()];
            return (bool)GetValue;
        }
        bool Get_Debug(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Debug()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Debug()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace Enable
#endif //#if defined(IMPLEMENT_GPSCLIENTAPI_ENABLE)


//------------------------------------------------------------------------
// GPSClientAPI::GetPortSettings::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GPSCLIENTAPI_GETPORTSETTINGS)
namespace GetPortSettings
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_PortName(void)
    {
        static std::string str("PortName");
        return str;
    }
public:
    static std::string const& ItemName_BaudRate(void)
    {
        static std::string str("BaudRate");
        return str;
    }
public:
    static std::string const& ItemName_CharFormat(void)
    {
        static std::string str("CharFormat");
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
        static std::string str("GPSClientAPI.GetPortSettings");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_PortName();
            Construct_BaudRate();
            Construct_CharFormat();
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
            Construct_PortName();
            Construct_BaudRate();
            Construct_CharFormat();
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
            Initialize_PortName();
            Initialize_BaudRate();
            Initialize_CharFormat();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("GPSClientAPI::GetPortSettings");
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
    // Item PortName (Type: "std::string")
    protected:
        void Construct_PortName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PortName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_PortName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_PortName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PortName()))
                {
                    Construct_PortName();
                }
                if ((*Value()).hasMember(ItemName_PortName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_PortName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_PortName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_PortName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_PortName(void) const
        {
            return (*Value())[ItemName_PortName()];
        }
        bool Get_PortName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_PortName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_PortName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item BaudRate (Type: "int32_t")
protected:
    void Construct_BaudRate(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_BaudRate()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_BaudRate()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_BaudRate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_BaudRate()))
                {
                    Construct_BaudRate();
                }
                if ((*Value()).hasMember(ItemName_BaudRate()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_BaudRate()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_BaudRate(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_BaudRate()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_BaudRate(void) const
        {
            int32_t GetValue = (*Value())[ItemName_BaudRate()];
            return (int32_t)GetValue;
        }
        bool Get_BaudRate(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_BaudRate()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_BaudRate()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item CharFormat (Type: "std::string")
    protected:
        void Construct_CharFormat(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CharFormat()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_CharFormat()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_CharFormat(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CharFormat()))
                {
                    Construct_CharFormat();
                }
                if ((*Value()).hasMember(ItemName_CharFormat()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_CharFormat()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_CharFormat(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_CharFormat()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_CharFormat(void) const
        {
            return (*Value())[ItemName_CharFormat()];
        }
        bool Get_CharFormat(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_CharFormat()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_CharFormat()]);
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
} // namespace GetPortSettings
#endif //#if defined(IMPLEMENT_GPSCLIENTAPI_GETPORTSETTINGS)


//------------------------------------------------------------------------
// GPSClientAPI::SetPortSettings::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GPSCLIENTAPI_SETPORTSETTINGS)
namespace SetPortSettings
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
        static std::string str("GPSClientAPI.SetPortSettings");
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
            (*Value())[ItemName_MethodID()] = std::string("GPSClientAPI::SetPortSettings");
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
} // namespace SetPortSettings
#endif //#if defined(IMPLEMENT_GPSCLIENTAPI_SETPORTSETTINGS)


//------------------------------------------------------------------------
// GPSClientAPI::GetGPSValues::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GPSCLIENTAPI_GETGPSVALUES)
namespace GetGPSValues
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_DateTime(void)
    {
        static std::string str("DateTime");
        return str;
    }
public:
    static std::string const& ItemName_OleTime(void)
    {
        static std::string str("OleTime");
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
    static std::string const& ItemName_Speed(void)
    {
        static std::string str("Speed");
        return str;
    }
public:
    static std::string const& ItemName_Heading(void)
    {
        static std::string str("Heading");
        return str;
    }
public:
    static std::string const& ItemName_SatCount(void)
    {
        static std::string str("SatCount");
        return str;
    }
public:
    static std::string const& ItemName_Altitude(void)
    {
        static std::string str("Altitude");
        return str;
    }
public:
    static std::string const& ItemName_MsgCount(void)
    {
        static std::string str("MsgCount");
        return str;
    }
public:
    static std::string const& ItemName_Sentences(void)
    {
        static std::string str("Sentences");
        return str;
    }
public:
    static std::string const& ItemName_Quality(void)
    {
        static std::string str("Quality");
        return str;
    }
public:
    static std::string const& ItemName_PrecisionDelution(void)
    {
        static std::string str("PrecisionDelution");
        return str;
    }
public:
    static std::string const& ItemName_RotateOfTurn(void)
    {
        static std::string str("RotateOfTurn");
        return str;
    }
public:
    static std::string const& ItemName_LongitudialWaterSpeed(void)
    {
        static std::string str("LongitudialWaterSpeed");
        return str;
    }
public:
    static std::string const& ItemName_TraverseWaterSpeed(void)
    {
        static std::string str("TraverseWaterSpeed");
        return str;
    }
public:
    static std::string const& ItemName_LongitudialGroundSpeed(void)
    {
        static std::string str("LongitudialGroundSpeed");
        return str;
    }
public:
    static std::string const& ItemName_TraverseGroundSpeed(void)
    {
        static std::string str("TraverseGroundSpeed");
        return str;
    }
public:
    static std::string const& ItemName_TrackDegreesTrue(void)
    {
        static std::string str("TrackDegreesTrue");
        return str;
    }
public:
    static std::string const& ItemName_TrackDegreesMagnetic(void)
    {
        static std::string str("TrackDegreesMagnetic");
        return str;
    }
public:
    static std::string const& ItemName_DepthBelowTransducerFeet(void)
    {
        static std::string str("DepthBelowTransducerFeet");
        return str;
    }
public:
    static std::string const& ItemName_DepthBelowTransducerMeters(void)
    {
        static std::string str("DepthBelowTransducerMeters");
        return str;
    }
public:
    static std::string const& ItemName_DepthBelowTransducerFathoms(void)
    {
        static std::string str("DepthBelowTransducerFathoms");
        return str;
    }
public:
    static std::string const& ItemName_DepthOfWaterMeter(void)
    {
        static std::string str("DepthOfWaterMeter");
        return str;
    }
public:
    static std::string const& ItemName_DepthOfWaterOffsetFromTransducer(void)
    {
        static std::string str("DepthOfWaterOffsetFromTransducer");
        return str;
    }
public:
    static std::string const& ItemName_WindAngle(void)
    {
        static std::string str("WindAngle");
        return str;
    }
public:
    static std::string const& ItemName_WindSpeed(void)
    {
        static std::string str("WindSpeed");
        return str;
    }
public:
    static std::string const& ItemName_WaterTemperature(void)
    {
        static std::string str("WaterTemperature");
        return str;
    }
public:
    static std::string const& ItemName_OwnShipHeading(void)
    {
        static std::string str("OwnShipHeading");
        return str;
    }
public:
    static std::string const& ItemName_VesselCourse(void)
    {
        static std::string str("VesselCourse");
        return str;
    }
public:
    static std::string const& ItemName_VesselSpeed(void)
    {
        static std::string str("VesselSpeed");
        return str;
    }
public:
    static std::string const& ItemName_VesselSet(void)
    {
        static std::string str("VesselSet");
        return str;
    }
public:
    static std::string const& ItemName_VesselDrift(void)
    {
        static std::string str("VesselDrift");
        return str;
    }
public:
    static std::string const& ItemName_RadarCursorRange(void)
    {
        static std::string str("RadarCursorRange");
        return str;
    }
public:
    static std::string const& ItemName_RadarCursorBearing(void)
    {
        static std::string str("RadarCursorBearing");
        return str;
    }
public:
    static std::string const& ItemName_RadarRangeScale(void)
    {
        static std::string str("RadarRangeScale");
        return str;
    }
public:
    static std::string const& ItemName_HDTHeading(void)
    {
        static std::string str("HDTHeading");
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
        static std::string str("GPSClientAPI.GetGPSValues");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_DateTime();
            Construct_OleTime();
            Construct_Latitude();
            Construct_Longitude();
            Construct_Speed();
            Construct_Heading();
            Construct_SatCount();
            Construct_Altitude();
            Construct_MsgCount();
            Construct_Sentences();
            Construct_Quality();
            Construct_PrecisionDelution();
            Construct_RotateOfTurn();
            Construct_LongitudialWaterSpeed();
            Construct_TraverseWaterSpeed();
            Construct_LongitudialGroundSpeed();
            Construct_TraverseGroundSpeed();
            Construct_TrackDegreesTrue();
            Construct_TrackDegreesMagnetic();
            Construct_DepthBelowTransducerFeet();
            Construct_DepthBelowTransducerMeters();
            Construct_DepthBelowTransducerFathoms();
            Construct_DepthOfWaterMeter();
            Construct_DepthOfWaterOffsetFromTransducer();
            Construct_WindAngle();
            Construct_WindSpeed();
            Construct_WaterTemperature();
            Construct_OwnShipHeading();
            Construct_VesselCourse();
            Construct_VesselSpeed();
            Construct_VesselSet();
            Construct_VesselDrift();
            Construct_RadarCursorRange();
            Construct_RadarCursorBearing();
            Construct_RadarRangeScale();
            Construct_HDTHeading();
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
            Construct_DateTime();
            Construct_OleTime();
            Construct_Latitude();
            Construct_Longitude();
            Construct_Speed();
            Construct_Heading();
            Construct_SatCount();
            Construct_Altitude();
            Construct_MsgCount();
            Construct_Sentences();
            Construct_Quality();
            Construct_PrecisionDelution();
            Construct_RotateOfTurn();
            Construct_LongitudialWaterSpeed();
            Construct_TraverseWaterSpeed();
            Construct_LongitudialGroundSpeed();
            Construct_TraverseGroundSpeed();
            Construct_TrackDegreesTrue();
            Construct_TrackDegreesMagnetic();
            Construct_DepthBelowTransducerFeet();
            Construct_DepthBelowTransducerMeters();
            Construct_DepthBelowTransducerFathoms();
            Construct_DepthOfWaterMeter();
            Construct_DepthOfWaterOffsetFromTransducer();
            Construct_WindAngle();
            Construct_WindSpeed();
            Construct_WaterTemperature();
            Construct_OwnShipHeading();
            Construct_VesselCourse();
            Construct_VesselSpeed();
            Construct_VesselSet();
            Construct_VesselDrift();
            Construct_RadarCursorRange();
            Construct_RadarCursorBearing();
            Construct_RadarRangeScale();
            Construct_HDTHeading();
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
            Initialize_DateTime();
            Initialize_OleTime();
            Initialize_Latitude();
            Initialize_Longitude();
            Initialize_Speed();
            Initialize_Heading();
            Initialize_SatCount();
            Initialize_Altitude();
            Initialize_MsgCount();
            Initialize_Sentences();
            Initialize_Quality();
            Initialize_PrecisionDelution();
            Initialize_RotateOfTurn();
            Initialize_LongitudialWaterSpeed();
            Initialize_TraverseWaterSpeed();
            Initialize_LongitudialGroundSpeed();
            Initialize_TraverseGroundSpeed();
            Initialize_TrackDegreesTrue();
            Initialize_TrackDegreesMagnetic();
            Initialize_DepthBelowTransducerFeet();
            Initialize_DepthBelowTransducerMeters();
            Initialize_DepthBelowTransducerFathoms();
            Initialize_DepthOfWaterMeter();
            Initialize_DepthOfWaterOffsetFromTransducer();
            Initialize_WindAngle();
            Initialize_WindSpeed();
            Initialize_WaterTemperature();
            Initialize_OwnShipHeading();
            Initialize_VesselCourse();
            Initialize_VesselSpeed();
            Initialize_VesselSet();
            Initialize_VesselDrift();
            Initialize_RadarCursorRange();
            Initialize_RadarCursorBearing();
            Initialize_RadarRangeScale();
            Initialize_HDTHeading();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("GPSClientAPI::GetGPSValues");
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
    // Item DateTime (Type: "std::string")
    protected:
        void Construct_DateTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DateTime()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DateTime()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DateTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DateTime()))
                {
                    Construct_DateTime();
                }
                if ((*Value()).hasMember(ItemName_DateTime()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DateTime()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DateTime(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_DateTime()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DateTime(void) const
        {
            return (*Value())[ItemName_DateTime()];
        }
        bool Get_DateTime(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DateTime()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DateTime()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item OleTime (Type: "double")
protected:
    void Construct_OleTime(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_OleTime()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_OleTime()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_OleTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_OleTime()))
                {
                    Construct_OleTime();
                }
                if ((*Value()).hasMember(ItemName_OleTime()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_OleTime()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_OleTime(double SetValue)
        {
            try
            {
                (*Value())[ItemName_OleTime()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_OleTime(void) const
        {
            double GetValue = (*Value())[ItemName_OleTime()];
            return (double)GetValue;
        }
        bool Get_OleTime(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_OleTime()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_OleTime()]));
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
// Item Speed (Type: "double")
protected:
    void Construct_Speed(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Speed()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_Speed()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Speed(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Speed()))
                {
                    Construct_Speed();
                }
                if ((*Value()).hasMember(ItemName_Speed()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_Speed()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Speed(double SetValue)
        {
            try
            {
                (*Value())[ItemName_Speed()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_Speed(void) const
        {
            double GetValue = (*Value())[ItemName_Speed()];
            return (double)GetValue;
        }
        bool Get_Speed(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Speed()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_Speed()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Heading (Type: "double")
protected:
    void Construct_Heading(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Heading()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_Heading()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Heading(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Heading()))
                {
                    Construct_Heading();
                }
                if ((*Value()).hasMember(ItemName_Heading()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_Heading()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Heading(double SetValue)
        {
            try
            {
                (*Value())[ItemName_Heading()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_Heading(void) const
        {
            double GetValue = (*Value())[ItemName_Heading()];
            return (double)GetValue;
        }
        bool Get_Heading(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Heading()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_Heading()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item SatCount (Type: "double")
protected:
    void Construct_SatCount(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_SatCount()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_SatCount()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_SatCount(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SatCount()))
                {
                    Construct_SatCount();
                }
                if ((*Value()).hasMember(ItemName_SatCount()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_SatCount()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SatCount(double SetValue)
        {
            try
            {
                (*Value())[ItemName_SatCount()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_SatCount(void) const
        {
            double GetValue = (*Value())[ItemName_SatCount()];
            return (double)GetValue;
        }
        bool Get_SatCount(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SatCount()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_SatCount()]));
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
//------------------------------------------------------------------------
// Item MsgCount (Type: "int32_t")
protected:
    void Construct_MsgCount(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MsgCount()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_MsgCount()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_MsgCount(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MsgCount()))
                {
                    Construct_MsgCount();
                }
                if ((*Value()).hasMember(ItemName_MsgCount()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_MsgCount()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MsgCount(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_MsgCount()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_MsgCount(void) const
        {
            int32_t GetValue = (*Value())[ItemName_MsgCount()];
            return (int32_t)GetValue;
        }
        bool Get_MsgCount(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MsgCount()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_MsgCount()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Sentences (Type: "std::string[0]")
    protected:
        void Construct_Sentences(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Sentences()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Sentences()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Sentences(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Sentences()))
                {
                    Construct_Sentences();
                }
                if ((*Value()).hasMember(ItemName_Sentences()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Sentences()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Sentences(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_Sentences()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Sentences(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Sentences()))
                {
                    return (*Value())[ItemName_Sentences()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Sentences(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Sentences()))
                {
                    (*Value())[ItemName_Sentences()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Sentences(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_Sentences()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Sentences(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Sentences()))
                {
                    (*Value())[ItemName_Sentences()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Sentences(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_Sentences())
                {
                    SetSize_Sentences(ArrayIndex + 1);
                }
                (*Value())[ItemName_Sentences()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Sentences(int ArrayIndex) const
        {
            return (*Value())[ItemName_Sentences()][ArrayIndex];
        }
        bool Get_Sentences(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Sentences()))
                {
                    if (((*Value())[ItemName_Sentences()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_Sentences()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Quality (Type: "double")
protected:
    void Construct_Quality(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Quality()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_Quality()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Quality(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Quality()))
                {
                    Construct_Quality();
                }
                if ((*Value()).hasMember(ItemName_Quality()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_Quality()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Quality(double SetValue)
        {
            try
            {
                (*Value())[ItemName_Quality()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_Quality(void) const
        {
            double GetValue = (*Value())[ItemName_Quality()];
            return (double)GetValue;
        }
        bool Get_Quality(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Quality()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_Quality()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item PrecisionDelution (Type: "double")
protected:
    void Construct_PrecisionDelution(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_PrecisionDelution()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_PrecisionDelution()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_PrecisionDelution(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PrecisionDelution()))
                {
                    Construct_PrecisionDelution();
                }
                if ((*Value()).hasMember(ItemName_PrecisionDelution()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_PrecisionDelution()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_PrecisionDelution(double SetValue)
        {
            try
            {
                (*Value())[ItemName_PrecisionDelution()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_PrecisionDelution(void) const
        {
            double GetValue = (*Value())[ItemName_PrecisionDelution()];
            return (double)GetValue;
        }
        bool Get_PrecisionDelution(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_PrecisionDelution()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_PrecisionDelution()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item RotateOfTurn (Type: "double")
protected:
    void Construct_RotateOfTurn(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_RotateOfTurn()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_RotateOfTurn()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_RotateOfTurn(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RotateOfTurn()))
                {
                    Construct_RotateOfTurn();
                }
                if ((*Value()).hasMember(ItemName_RotateOfTurn()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_RotateOfTurn()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RotateOfTurn(double SetValue)
        {
            try
            {
                (*Value())[ItemName_RotateOfTurn()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_RotateOfTurn(void) const
        {
            double GetValue = (*Value())[ItemName_RotateOfTurn()];
            return (double)GetValue;
        }
        bool Get_RotateOfTurn(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RotateOfTurn()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_RotateOfTurn()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item LongitudialWaterSpeed (Type: "double")
protected:
    void Construct_LongitudialWaterSpeed(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_LongitudialWaterSpeed()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_LongitudialWaterSpeed()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_LongitudialWaterSpeed(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LongitudialWaterSpeed()))
                {
                    Construct_LongitudialWaterSpeed();
                }
                if ((*Value()).hasMember(ItemName_LongitudialWaterSpeed()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_LongitudialWaterSpeed()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LongitudialWaterSpeed(double SetValue)
        {
            try
            {
                (*Value())[ItemName_LongitudialWaterSpeed()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_LongitudialWaterSpeed(void) const
        {
            double GetValue = (*Value())[ItemName_LongitudialWaterSpeed()];
            return (double)GetValue;
        }
        bool Get_LongitudialWaterSpeed(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LongitudialWaterSpeed()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_LongitudialWaterSpeed()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item TraverseWaterSpeed (Type: "double")
protected:
    void Construct_TraverseWaterSpeed(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_TraverseWaterSpeed()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_TraverseWaterSpeed()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_TraverseWaterSpeed(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TraverseWaterSpeed()))
                {
                    Construct_TraverseWaterSpeed();
                }
                if ((*Value()).hasMember(ItemName_TraverseWaterSpeed()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_TraverseWaterSpeed()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TraverseWaterSpeed(double SetValue)
        {
            try
            {
                (*Value())[ItemName_TraverseWaterSpeed()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_TraverseWaterSpeed(void) const
        {
            double GetValue = (*Value())[ItemName_TraverseWaterSpeed()];
            return (double)GetValue;
        }
        bool Get_TraverseWaterSpeed(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TraverseWaterSpeed()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_TraverseWaterSpeed()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item LongitudialGroundSpeed (Type: "double")
protected:
    void Construct_LongitudialGroundSpeed(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_LongitudialGroundSpeed()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_LongitudialGroundSpeed()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_LongitudialGroundSpeed(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LongitudialGroundSpeed()))
                {
                    Construct_LongitudialGroundSpeed();
                }
                if ((*Value()).hasMember(ItemName_LongitudialGroundSpeed()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_LongitudialGroundSpeed()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LongitudialGroundSpeed(double SetValue)
        {
            try
            {
                (*Value())[ItemName_LongitudialGroundSpeed()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_LongitudialGroundSpeed(void) const
        {
            double GetValue = (*Value())[ItemName_LongitudialGroundSpeed()];
            return (double)GetValue;
        }
        bool Get_LongitudialGroundSpeed(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LongitudialGroundSpeed()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_LongitudialGroundSpeed()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item TraverseGroundSpeed (Type: "double")
protected:
    void Construct_TraverseGroundSpeed(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_TraverseGroundSpeed()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_TraverseGroundSpeed()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_TraverseGroundSpeed(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TraverseGroundSpeed()))
                {
                    Construct_TraverseGroundSpeed();
                }
                if ((*Value()).hasMember(ItemName_TraverseGroundSpeed()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_TraverseGroundSpeed()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TraverseGroundSpeed(double SetValue)
        {
            try
            {
                (*Value())[ItemName_TraverseGroundSpeed()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_TraverseGroundSpeed(void) const
        {
            double GetValue = (*Value())[ItemName_TraverseGroundSpeed()];
            return (double)GetValue;
        }
        bool Get_TraverseGroundSpeed(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TraverseGroundSpeed()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_TraverseGroundSpeed()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item TrackDegreesTrue (Type: "double")
protected:
    void Construct_TrackDegreesTrue(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_TrackDegreesTrue()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_TrackDegreesTrue()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_TrackDegreesTrue(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TrackDegreesTrue()))
                {
                    Construct_TrackDegreesTrue();
                }
                if ((*Value()).hasMember(ItemName_TrackDegreesTrue()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_TrackDegreesTrue()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TrackDegreesTrue(double SetValue)
        {
            try
            {
                (*Value())[ItemName_TrackDegreesTrue()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_TrackDegreesTrue(void) const
        {
            double GetValue = (*Value())[ItemName_TrackDegreesTrue()];
            return (double)GetValue;
        }
        bool Get_TrackDegreesTrue(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TrackDegreesTrue()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_TrackDegreesTrue()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item TrackDegreesMagnetic (Type: "double")
protected:
    void Construct_TrackDegreesMagnetic(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_TrackDegreesMagnetic()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_TrackDegreesMagnetic()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_TrackDegreesMagnetic(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TrackDegreesMagnetic()))
                {
                    Construct_TrackDegreesMagnetic();
                }
                if ((*Value()).hasMember(ItemName_TrackDegreesMagnetic()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_TrackDegreesMagnetic()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TrackDegreesMagnetic(double SetValue)
        {
            try
            {
                (*Value())[ItemName_TrackDegreesMagnetic()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_TrackDegreesMagnetic(void) const
        {
            double GetValue = (*Value())[ItemName_TrackDegreesMagnetic()];
            return (double)GetValue;
        }
        bool Get_TrackDegreesMagnetic(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TrackDegreesMagnetic()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_TrackDegreesMagnetic()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item DepthBelowTransducerFeet (Type: "double")
protected:
    void Construct_DepthBelowTransducerFeet(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_DepthBelowTransducerFeet()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_DepthBelowTransducerFeet()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_DepthBelowTransducerFeet(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DepthBelowTransducerFeet()))
                {
                    Construct_DepthBelowTransducerFeet();
                }
                if ((*Value()).hasMember(ItemName_DepthBelowTransducerFeet()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_DepthBelowTransducerFeet()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DepthBelowTransducerFeet(double SetValue)
        {
            try
            {
                (*Value())[ItemName_DepthBelowTransducerFeet()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_DepthBelowTransducerFeet(void) const
        {
            double GetValue = (*Value())[ItemName_DepthBelowTransducerFeet()];
            return (double)GetValue;
        }
        bool Get_DepthBelowTransducerFeet(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DepthBelowTransducerFeet()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_DepthBelowTransducerFeet()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item DepthBelowTransducerMeters (Type: "double")
protected:
    void Construct_DepthBelowTransducerMeters(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_DepthBelowTransducerMeters()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_DepthBelowTransducerMeters()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_DepthBelowTransducerMeters(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DepthBelowTransducerMeters()))
                {
                    Construct_DepthBelowTransducerMeters();
                }
                if ((*Value()).hasMember(ItemName_DepthBelowTransducerMeters()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_DepthBelowTransducerMeters()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DepthBelowTransducerMeters(double SetValue)
        {
            try
            {
                (*Value())[ItemName_DepthBelowTransducerMeters()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_DepthBelowTransducerMeters(void) const
        {
            double GetValue = (*Value())[ItemName_DepthBelowTransducerMeters()];
            return (double)GetValue;
        }
        bool Get_DepthBelowTransducerMeters(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DepthBelowTransducerMeters()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_DepthBelowTransducerMeters()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item DepthBelowTransducerFathoms (Type: "double")
protected:
    void Construct_DepthBelowTransducerFathoms(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_DepthBelowTransducerFathoms()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_DepthBelowTransducerFathoms()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_DepthBelowTransducerFathoms(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DepthBelowTransducerFathoms()))
                {
                    Construct_DepthBelowTransducerFathoms();
                }
                if ((*Value()).hasMember(ItemName_DepthBelowTransducerFathoms()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_DepthBelowTransducerFathoms()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DepthBelowTransducerFathoms(double SetValue)
        {
            try
            {
                (*Value())[ItemName_DepthBelowTransducerFathoms()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_DepthBelowTransducerFathoms(void) const
        {
            double GetValue = (*Value())[ItemName_DepthBelowTransducerFathoms()];
            return (double)GetValue;
        }
        bool Get_DepthBelowTransducerFathoms(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DepthBelowTransducerFathoms()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_DepthBelowTransducerFathoms()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item DepthOfWaterMeter (Type: "double")
protected:
    void Construct_DepthOfWaterMeter(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_DepthOfWaterMeter()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_DepthOfWaterMeter()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_DepthOfWaterMeter(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DepthOfWaterMeter()))
                {
                    Construct_DepthOfWaterMeter();
                }
                if ((*Value()).hasMember(ItemName_DepthOfWaterMeter()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_DepthOfWaterMeter()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DepthOfWaterMeter(double SetValue)
        {
            try
            {
                (*Value())[ItemName_DepthOfWaterMeter()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_DepthOfWaterMeter(void) const
        {
            double GetValue = (*Value())[ItemName_DepthOfWaterMeter()];
            return (double)GetValue;
        }
        bool Get_DepthOfWaterMeter(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DepthOfWaterMeter()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_DepthOfWaterMeter()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item DepthOfWaterOffsetFromTransducer (Type: "double")
protected:
    void Construct_DepthOfWaterOffsetFromTransducer(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_DepthOfWaterOffsetFromTransducer()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_DepthOfWaterOffsetFromTransducer()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_DepthOfWaterOffsetFromTransducer(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DepthOfWaterOffsetFromTransducer()))
                {
                    Construct_DepthOfWaterOffsetFromTransducer();
                }
                if ((*Value()).hasMember(ItemName_DepthOfWaterOffsetFromTransducer()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_DepthOfWaterOffsetFromTransducer()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DepthOfWaterOffsetFromTransducer(double SetValue)
        {
            try
            {
                (*Value())[ItemName_DepthOfWaterOffsetFromTransducer()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_DepthOfWaterOffsetFromTransducer(void) const
        {
            double GetValue = (*Value())[ItemName_DepthOfWaterOffsetFromTransducer()];
            return (double)GetValue;
        }
        bool Get_DepthOfWaterOffsetFromTransducer(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DepthOfWaterOffsetFromTransducer()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_DepthOfWaterOffsetFromTransducer()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item WindAngle (Type: "double")
protected:
    void Construct_WindAngle(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_WindAngle()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_WindAngle()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_WindAngle(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_WindAngle()))
                {
                    Construct_WindAngle();
                }
                if ((*Value()).hasMember(ItemName_WindAngle()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_WindAngle()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_WindAngle(double SetValue)
        {
            try
            {
                (*Value())[ItemName_WindAngle()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_WindAngle(void) const
        {
            double GetValue = (*Value())[ItemName_WindAngle()];
            return (double)GetValue;
        }
        bool Get_WindAngle(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_WindAngle()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_WindAngle()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item WindSpeed (Type: "double")
protected:
    void Construct_WindSpeed(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_WindSpeed()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_WindSpeed()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_WindSpeed(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_WindSpeed()))
                {
                    Construct_WindSpeed();
                }
                if ((*Value()).hasMember(ItemName_WindSpeed()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_WindSpeed()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_WindSpeed(double SetValue)
        {
            try
            {
                (*Value())[ItemName_WindSpeed()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_WindSpeed(void) const
        {
            double GetValue = (*Value())[ItemName_WindSpeed()];
            return (double)GetValue;
        }
        bool Get_WindSpeed(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_WindSpeed()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_WindSpeed()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item WaterTemperature (Type: "double")
protected:
    void Construct_WaterTemperature(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_WaterTemperature()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_WaterTemperature()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_WaterTemperature(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_WaterTemperature()))
                {
                    Construct_WaterTemperature();
                }
                if ((*Value()).hasMember(ItemName_WaterTemperature()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_WaterTemperature()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_WaterTemperature(double SetValue)
        {
            try
            {
                (*Value())[ItemName_WaterTemperature()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_WaterTemperature(void) const
        {
            double GetValue = (*Value())[ItemName_WaterTemperature()];
            return (double)GetValue;
        }
        bool Get_WaterTemperature(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_WaterTemperature()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_WaterTemperature()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item OwnShipHeading (Type: "double")
protected:
    void Construct_OwnShipHeading(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_OwnShipHeading()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_OwnShipHeading()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_OwnShipHeading(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_OwnShipHeading()))
                {
                    Construct_OwnShipHeading();
                }
                if ((*Value()).hasMember(ItemName_OwnShipHeading()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_OwnShipHeading()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_OwnShipHeading(double SetValue)
        {
            try
            {
                (*Value())[ItemName_OwnShipHeading()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_OwnShipHeading(void) const
        {
            double GetValue = (*Value())[ItemName_OwnShipHeading()];
            return (double)GetValue;
        }
        bool Get_OwnShipHeading(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_OwnShipHeading()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_OwnShipHeading()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item VesselCourse (Type: "double")
protected:
    void Construct_VesselCourse(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_VesselCourse()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_VesselCourse()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_VesselCourse(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_VesselCourse()))
                {
                    Construct_VesselCourse();
                }
                if ((*Value()).hasMember(ItemName_VesselCourse()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_VesselCourse()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_VesselCourse(double SetValue)
        {
            try
            {
                (*Value())[ItemName_VesselCourse()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_VesselCourse(void) const
        {
            double GetValue = (*Value())[ItemName_VesselCourse()];
            return (double)GetValue;
        }
        bool Get_VesselCourse(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_VesselCourse()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_VesselCourse()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item VesselSpeed (Type: "double")
protected:
    void Construct_VesselSpeed(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_VesselSpeed()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_VesselSpeed()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_VesselSpeed(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_VesselSpeed()))
                {
                    Construct_VesselSpeed();
                }
                if ((*Value()).hasMember(ItemName_VesselSpeed()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_VesselSpeed()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_VesselSpeed(double SetValue)
        {
            try
            {
                (*Value())[ItemName_VesselSpeed()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_VesselSpeed(void) const
        {
            double GetValue = (*Value())[ItemName_VesselSpeed()];
            return (double)GetValue;
        }
        bool Get_VesselSpeed(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_VesselSpeed()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_VesselSpeed()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item VesselSet (Type: "double")
protected:
    void Construct_VesselSet(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_VesselSet()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_VesselSet()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_VesselSet(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_VesselSet()))
                {
                    Construct_VesselSet();
                }
                if ((*Value()).hasMember(ItemName_VesselSet()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_VesselSet()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_VesselSet(double SetValue)
        {
            try
            {
                (*Value())[ItemName_VesselSet()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_VesselSet(void) const
        {
            double GetValue = (*Value())[ItemName_VesselSet()];
            return (double)GetValue;
        }
        bool Get_VesselSet(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_VesselSet()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_VesselSet()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item VesselDrift (Type: "double")
protected:
    void Construct_VesselDrift(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_VesselDrift()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_VesselDrift()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_VesselDrift(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_VesselDrift()))
                {
                    Construct_VesselDrift();
                }
                if ((*Value()).hasMember(ItemName_VesselDrift()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_VesselDrift()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_VesselDrift(double SetValue)
        {
            try
            {
                (*Value())[ItemName_VesselDrift()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_VesselDrift(void) const
        {
            double GetValue = (*Value())[ItemName_VesselDrift()];
            return (double)GetValue;
        }
        bool Get_VesselDrift(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_VesselDrift()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_VesselDrift()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item RadarCursorRange (Type: "double")
protected:
    void Construct_RadarCursorRange(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_RadarCursorRange()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_RadarCursorRange()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_RadarCursorRange(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RadarCursorRange()))
                {
                    Construct_RadarCursorRange();
                }
                if ((*Value()).hasMember(ItemName_RadarCursorRange()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_RadarCursorRange()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RadarCursorRange(double SetValue)
        {
            try
            {
                (*Value())[ItemName_RadarCursorRange()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_RadarCursorRange(void) const
        {
            double GetValue = (*Value())[ItemName_RadarCursorRange()];
            return (double)GetValue;
        }
        bool Get_RadarCursorRange(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RadarCursorRange()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_RadarCursorRange()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item RadarCursorBearing (Type: "double")
protected:
    void Construct_RadarCursorBearing(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_RadarCursorBearing()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_RadarCursorBearing()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_RadarCursorBearing(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RadarCursorBearing()))
                {
                    Construct_RadarCursorBearing();
                }
                if ((*Value()).hasMember(ItemName_RadarCursorBearing()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_RadarCursorBearing()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RadarCursorBearing(double SetValue)
        {
            try
            {
                (*Value())[ItemName_RadarCursorBearing()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_RadarCursorBearing(void) const
        {
            double GetValue = (*Value())[ItemName_RadarCursorBearing()];
            return (double)GetValue;
        }
        bool Get_RadarCursorBearing(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RadarCursorBearing()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_RadarCursorBearing()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item RadarRangeScale (Type: "double")
protected:
    void Construct_RadarRangeScale(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_RadarRangeScale()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_RadarRangeScale()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_RadarRangeScale(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RadarRangeScale()))
                {
                    Construct_RadarRangeScale();
                }
                if ((*Value()).hasMember(ItemName_RadarRangeScale()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_RadarRangeScale()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RadarRangeScale(double SetValue)
        {
            try
            {
                (*Value())[ItemName_RadarRangeScale()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_RadarRangeScale(void) const
        {
            double GetValue = (*Value())[ItemName_RadarRangeScale()];
            return (double)GetValue;
        }
        bool Get_RadarRangeScale(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RadarRangeScale()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_RadarRangeScale()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item HDTHeading (Type: "double")
protected:
    void Construct_HDTHeading(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_HDTHeading()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_HDTHeading()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_HDTHeading(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_HDTHeading()))
                {
                    Construct_HDTHeading();
                }
                if ((*Value()).hasMember(ItemName_HDTHeading()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_HDTHeading()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_HDTHeading(double SetValue)
        {
            try
            {
                (*Value())[ItemName_HDTHeading()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_HDTHeading(void) const
        {
            double GetValue = (*Value())[ItemName_HDTHeading()];
            return (double)GetValue;
        }
        bool Get_HDTHeading(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_HDTHeading()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_HDTHeading()]));
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
} // namespace GetGPSValues
#endif //#if defined(IMPLEMENT_GPSCLIENTAPI_GETGPSVALUES)


//------------------------------------------------------------------------
// GPSClientAPI::Enable::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GPSCLIENTAPI_ENABLE)
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
        static std::string str("GPSClientAPI.Enable");
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
            (*Value())[ItemName_MethodID()] = std::string("GPSClientAPI::Enable");
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
#endif //#if defined(IMPLEMENT_GPSCLIENTAPI_ENABLE)
//========================================================================
}; // namespace GPSClientAPI
//========================================================================
#endif // #if !defined(_GPSCLIENTAPI_TYPES_H)

