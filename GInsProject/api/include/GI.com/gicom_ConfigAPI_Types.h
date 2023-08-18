//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_GICOM_CONFIGAPI_TYPES_H)
#define _GICOM_CONFIGAPI_TYPES_H
//========================================================================
// Implemented methods
#define IMPLEMENT_GICOM_CONFIGAPI_SETTINGS


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "gicom_ConfigAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
#include "GInsXmlRpcStdAPI_Types.h"
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace gicom_ConfigAPI {
//========================================================================
//------------------------------------------------------------------------
// gicom_ConfigAPI::CAPIInfo
//------------------------------------------------------------------------
class CAPIInfo
{
public:
    static std::string const& Name(void)
    {
        static std::string str("ConfigAPI");
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
// gicom_ConfigAPI::Settings::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_CONFIGAPI_SETTINGS)
namespace Settings
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_TraceOutput(void)
    {
        static std::string str("TraceOutput");
        return str;
    }
public:
    static std::string const& ItemName_FeatureSelector(void)
    {
        static std::string str("FeatureSelector");
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
        static std::string str("ConfigAPI.Settings");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_TraceOutput();
            Construct_FeatureSelector();
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
            Construct_TraceOutput();
            Construct_FeatureSelector();
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
            Initialize_TraceOutput();
            Initialize_FeatureSelector();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::Settings");
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
    // Item TraceOutput (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_TraceOutput(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TraceOutput()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_TraceOutput()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_TraceOutput(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TraceOutput()))
                {
                    Construct_TraceOutput();
                }
                if ((*Value()).hasMember(ItemName_TraceOutput()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_TraceOutput()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TraceOutput(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_TraceOutput()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_TraceOutput(void) const
        {
            return (*Value())[ItemName_TraceOutput()];
        }
        bool Get_TraceOutput(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TraceOutput()]).valid())
                {
                    GetValue = (*Value())[ItemName_TraceOutput()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item FeatureSelector (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringValue")
    protected:
        void Construct_FeatureSelector(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FeatureSelector()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_FeatureSelector()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_FeatureSelector(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FeatureSelector()))
                {
                    Construct_FeatureSelector();
                }
                if ((*Value()).hasMember(ItemName_FeatureSelector()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_FeatureSelector()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FeatureSelector(const GInsXmlRpcStdAPI::CGIns_Edit_StringValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_FeatureSelector()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringValue Get_FeatureSelector(void) const
        {
            return (*Value())[ItemName_FeatureSelector()];
        }
        bool Get_FeatureSelector(GInsXmlRpcStdAPI::CGIns_Edit_StringValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FeatureSelector()]).valid())
                {
                    GetValue = (*Value())[ItemName_FeatureSelector()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace Settings
#endif //#if defined(IMPLEMENT_GICOM_CONFIGAPI_SETTINGS)


//------------------------------------------------------------------------
// gicom_ConfigAPI::Settings::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICOM_CONFIGAPI_SETTINGS)
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
        static std::string str("ConfigAPI.Settings");
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
            (*Value())[ItemName_MethodID()] = std::string("ConfigAPI::Settings");
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
#endif //#if defined(IMPLEMENT_GICOM_CONFIGAPI_SETTINGS)
//========================================================================
}; // namespace gicom_ConfigAPI
//========================================================================
#endif // #if !defined(_GICOM_CONFIGAPI_TYPES_H)

