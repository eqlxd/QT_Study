//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_FIRMWAREUPDATEAPI_TYPES_H)
#define _FIRMWAREUPDATEAPI_TYPES_H
//========================================================================
// Implemented methods
#define IMPLEMENT_FIRMWAREUPDATEAPI_HANDLEUPDATETASK
#define IMPLEMENT_FIRMWAREUPDATEAPI_GETUPDATESTATE
#define IMPLEMENT_FIRMWAREUPDATEAPI_CHANGESERIALNUMBER
#define IMPLEMENT_FIRMWAREUPDATEAPI_CHANGEMODULETYPE
#define IMPLEMENT_FIRMWAREUPDATEAPI_CHANGEBOARDINFO


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "FirmwareUpdateAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace FirmwareUpdateAPI {
//========================================================================
//------------------------------------------------------------------------
// FirmwareUpdateAPI::CAPIInfo
//------------------------------------------------------------------------
class CAPIInfo
{
public:
    static std::string const& Name(void)
    {
        static std::string str("FirmwareUpdateAPI");
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
// FirmwareUpdateAPI::CType_Info_UpdateState
//------------------------------------------------------------------------
class CType_Info_UpdateState : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Busy(void)
        {
            static std::string str("Busy");
            return str;
        }
    public:
        static std::string const& ItemName_State(void)
        {
            static std::string str("State");
            return str;
        }
    public:
        static std::string const& ItemName_Progress(void)
        {
            static std::string str("Progress");
            return str;
        }
    public:
        static std::string const& ItemName_BootMode(void)
        {
            static std::string str("BootMode");
            return str;
        }
    public:
        static std::string const& ItemName_ModTy(void)
        {
            static std::string str("ModTy");
            return str;
        }
    public:
        static std::string const& ItemName_CoTy(void)
        {
            static std::string str("CoTy");
            return str;
        }
    public:
        static std::string const& ItemName_Device(void)
        {
            static std::string str("Device");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("Type_Info_UpdateState");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("1");
        return str;
    }
public:
    CType_Info_UpdateState(void)
    {
        try
        {
            Construct_Busy();
            Construct_State();
            Construct_Progress();
            Construct_BootMode();
            Construct_ModTy();
            Construct_CoTy();
            Construct_Device();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CType_Info_UpdateState(const CType_Info_UpdateState& rhs) : 
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
    CType_Info_UpdateState(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_Busy();
            Construct_State();
            Construct_Progress();
            Construct_BootMode();
            Construct_ModTy();
            Construct_CoTy();
            Construct_Device();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CType_Info_UpdateState(void)
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
            Initialize_Busy();
            Initialize_State();
            Initialize_Progress();
            Initialize_BootMode();
            Initialize_ModTy();
            Initialize_CoTy();
            Initialize_Device();
        }
        catch (...) {}
    }
//------------------------------------------------------------------------
// Item Busy (Type: "bool")
protected:
    void Construct_Busy(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Busy()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Busy()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Busy(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Busy()))
                {
                    Construct_Busy();
                }
                if ((*Value()).hasMember(ItemName_Busy()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Busy()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Busy(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Busy()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Busy(void) const
        {
            bool GetValue = (*Value())[ItemName_Busy()];
            return (bool)GetValue;
        }
        bool Get_Busy(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Busy()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Busy()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item State (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_State(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_State()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
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
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_State()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_State(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
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
        GInsXmlRpcStdAPI::CGIns_Info_State Get_State(void) const
        {
            return (*Value())[ItemName_State()];
        }
        bool Get_State(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
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
// Item Progress (Type: "int32_t")
protected:
    void Construct_Progress(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Progress()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Progress()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Progress(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Progress()))
                {
                    Construct_Progress();
                }
                if ((*Value()).hasMember(ItemName_Progress()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Progress()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Progress(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Progress()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Progress(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Progress()];
            return (int32_t)GetValue;
        }
        bool Get_Progress(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Progress()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Progress()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item BootMode (Type: "GInsXmlRpcStdAPI::CGIns_Base_ElementValue")
    protected:
        void Construct_BootMode(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_BootMode()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_BootMode()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_BootMode(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_BootMode()))
                {
                    Construct_BootMode();
                }
                if ((*Value()).hasMember(ItemName_BootMode()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_BootMode()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_BootMode(const GInsXmlRpcStdAPI::CGIns_Base_ElementValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_BootMode()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Base_ElementValue Get_BootMode(void) const
        {
            return (*Value())[ItemName_BootMode()];
        }
        bool Get_BootMode(GInsXmlRpcStdAPI::CGIns_Base_ElementValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_BootMode()]).valid())
                {
                    GetValue = (*Value())[ItemName_BootMode()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item ModTy (Type: "int32_t")
protected:
    void Construct_ModTy(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ModTy()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_ModTy()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ModTy(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ModTy()))
                {
                    Construct_ModTy();
                }
                if ((*Value()).hasMember(ItemName_ModTy()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_ModTy()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ModTy(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_ModTy()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_ModTy(void) const
        {
            int32_t GetValue = (*Value())[ItemName_ModTy()];
            return (int32_t)GetValue;
        }
        bool Get_ModTy(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ModTy()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_ModTy()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item CoTy (Type: "std::string")
    protected:
        void Construct_CoTy(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CoTy()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_CoTy()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_CoTy(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CoTy()))
                {
                    Construct_CoTy();
                }
                if ((*Value()).hasMember(ItemName_CoTy()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_CoTy()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_CoTy(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_CoTy()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_CoTy(void) const
        {
            return (*Value())[ItemName_CoTy()];
        }
        bool Get_CoTy(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_CoTy()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_CoTy()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Device (Type: "std::string")
    protected:
        void Construct_Device(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Device()))
                {
                    std::string InitValue;
                    InitValue = "";
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
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Device()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Device(const std::string& SetValue)
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
        std::string Get_Device(void) const
        {
            return (*Value())[ItemName_Device()];
        }
        bool Get_Device(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Device()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Device()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CType_Info_UpdateState


//------------------------------------------------------------------------
// FirmwareUpdateAPI::CType_Edit_HWInfo
//------------------------------------------------------------------------
class CType_Edit_HWInfo : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Type(void)
        {
            static std::string str("Type");
            return str;
        }
    public:
        static std::string const& ItemName_Rev(void)
        {
            static std::string str("Rev");
            return str;
        }
    public:
        static std::string const& ItemName_SRev(void)
        {
            static std::string str("SRev");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("Type_Edit_HWInfo");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("2");
        return str;
    }
public:
    CType_Edit_HWInfo(void)
    {
        try
        {
            Construct_Type();
            Construct_Rev();
            Construct_SRev();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CType_Edit_HWInfo(const CType_Edit_HWInfo& rhs) : 
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
    CType_Edit_HWInfo(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_Type();
            Construct_Rev();
            Construct_SRev();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CType_Edit_HWInfo(void)
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
            Initialize_Rev();
            Initialize_SRev();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item Type (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Type(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Type()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
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
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Type()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Type(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
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
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Type(void) const
        {
            return (*Value())[ItemName_Type()];
        }
        bool Get_Type(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Type()]).valid())
                {
                    GetValue = (*Value())[ItemName_Type()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Rev (Type: "int32_t")
protected:
    void Construct_Rev(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Rev()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Rev()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Rev(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Rev()))
                {
                    Construct_Rev();
                }
                if ((*Value()).hasMember(ItemName_Rev()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Rev()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Rev(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Rev()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Rev(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Rev()];
            return (int32_t)GetValue;
        }
        bool Get_Rev(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Rev()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Rev()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item SRev (Type: "int32_t")
protected:
    void Construct_SRev(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_SRev()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_SRev()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_SRev(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SRev()))
                {
                    Construct_SRev();
                }
                if ((*Value()).hasMember(ItemName_SRev()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_SRev()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SRev(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_SRev()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_SRev(void) const
        {
            int32_t GetValue = (*Value())[ItemName_SRev()];
            return (int32_t)GetValue;
        }
        bool Get_SRev(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SRev()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_SRev()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CType_Edit_HWInfo


//------------------------------------------------------------------------
// FirmwareUpdateAPI::HandleUpdateTask::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FIRMWAREUPDATEAPI_HANDLEUPDATETASK)
namespace HandleUpdateTask
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
    static std::string const& ItemName_TargetFilePath(void)
    {
        static std::string str("TargetFilePath");
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
        static std::string str("FirmwareUpdateAPI.HandleUpdateTask");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Action();
            Construct_TargetFilePath();
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
            Construct_TargetFilePath();
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
            Initialize_TargetFilePath();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FirmwareUpdateAPI::HandleUpdateTask");
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
    // Item TargetFilePath (Type: "std::string")
    protected:
        void Construct_TargetFilePath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TargetFilePath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_TargetFilePath()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_TargetFilePath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TargetFilePath()))
                {
                    Construct_TargetFilePath();
                }
                if ((*Value()).hasMember(ItemName_TargetFilePath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_TargetFilePath()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TargetFilePath(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_TargetFilePath()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_TargetFilePath(void) const
        {
            return (*Value())[ItemName_TargetFilePath()];
        }
        bool Get_TargetFilePath(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TargetFilePath()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_TargetFilePath()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace HandleUpdateTask
#endif //#if defined(IMPLEMENT_FIRMWAREUPDATEAPI_HANDLEUPDATETASK)


//------------------------------------------------------------------------
// FirmwareUpdateAPI::ChangeSerialNumber::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FIRMWAREUPDATEAPI_CHANGESERIALNUMBER)
namespace ChangeSerialNumber
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Key(void)
    {
        static std::string str("Key");
        return str;
    }
public:
    static std::string const& ItemName_SerialNumber(void)
    {
        static std::string str("SerialNumber");
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
        static std::string str("FirmwareUpdateAPI.ChangeSerialNumber");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Key();
            Construct_SerialNumber();
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
            Construct_Key();
            Construct_SerialNumber();
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
            Initialize_Key();
            Initialize_SerialNumber();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FirmwareUpdateAPI::ChangeSerialNumber");
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
    // Item Key (Type: "std::string")
    protected:
        void Construct_Key(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Key()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Key()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Key(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Key()))
                {
                    Construct_Key();
                }
                if ((*Value()).hasMember(ItemName_Key()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Key()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Key(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Key()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Key(void) const
        {
            return (*Value())[ItemName_Key()];
        }
        bool Get_Key(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Key()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Key()]);
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
}; // class CParams
} // namespace ChangeSerialNumber
#endif //#if defined(IMPLEMENT_FIRMWAREUPDATEAPI_CHANGESERIALNUMBER)


//------------------------------------------------------------------------
// FirmwareUpdateAPI::ChangeModuleType::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FIRMWAREUPDATEAPI_CHANGEMODULETYPE)
namespace ChangeModuleType
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Key(void)
    {
        static std::string str("Key");
        return str;
    }
public:
    static std::string const& ItemName_ModuleType(void)
    {
        static std::string str("ModuleType");
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
        static std::string str("FirmwareUpdateAPI.ChangeModuleType");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Key();
            Construct_ModuleType();
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
            Construct_Key();
            Construct_ModuleType();
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
            Initialize_Key();
            Initialize_ModuleType();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FirmwareUpdateAPI::ChangeModuleType");
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
    // Item Key (Type: "std::string")
    protected:
        void Construct_Key(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Key()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Key()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Key(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Key()))
                {
                    Construct_Key();
                }
                if ((*Value()).hasMember(ItemName_Key()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Key()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Key(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Key()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Key(void) const
        {
            return (*Value())[ItemName_Key()];
        }
        bool Get_Key(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Key()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Key()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ModuleType (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_ModuleType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ModuleType()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_ModuleType()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ModuleType(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ModuleType()))
                {
                    Construct_ModuleType();
                }
                if ((*Value()).hasMember(ItemName_ModuleType()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_ModuleType()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ModuleType(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_ModuleType()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_ModuleType(void) const
        {
            return (*Value())[ItemName_ModuleType()];
        }
        bool Get_ModuleType(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ModuleType()]).valid())
                {
                    GetValue = (*Value())[ItemName_ModuleType()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace ChangeModuleType
#endif //#if defined(IMPLEMENT_FIRMWAREUPDATEAPI_CHANGEMODULETYPE)


//------------------------------------------------------------------------
// FirmwareUpdateAPI::ChangeBoardInfo::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FIRMWAREUPDATEAPI_CHANGEBOARDINFO)
namespace ChangeBoardInfo
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Key(void)
    {
        static std::string str("Key");
        return str;
    }
public:
    static std::string const& ItemName_BoardInfo(void)
    {
        static std::string str("BoardInfo");
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
        static std::string str("FirmwareUpdateAPI.ChangeBoardInfo");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Key();
            Construct_BoardInfo();
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
            Construct_Key();
            Construct_BoardInfo();
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
            Initialize_Key();
            Initialize_BoardInfo();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FirmwareUpdateAPI::ChangeBoardInfo");
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
    // Item Key (Type: "std::string")
    protected:
        void Construct_Key(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Key()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Key()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Key(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Key()))
                {
                    Construct_Key();
                }
                if ((*Value()).hasMember(ItemName_Key()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Key()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Key(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Key()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Key(void) const
        {
            return (*Value())[ItemName_Key()];
        }
        bool Get_Key(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Key()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Key()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item BoardInfo (Type: "CType_Edit_HWInfo[0]")
    protected:
        void Construct_BoardInfo(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_BoardInfo()))
                {
                    CType_Edit_HWInfo InitValue;
                    (*Value())[ItemName_BoardInfo()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_BoardInfo(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_BoardInfo()))
                {
                    Construct_BoardInfo();
                }
                if ((*Value()).hasMember(ItemName_BoardInfo()))
                {
                    CType_Edit_HWInfo InitValue;
                    (*Value())[ItemName_BoardInfo()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_BoardInfo(int NewSize)
        {
            try
            {
                CType_Edit_HWInfo InitValue;
                (*Value())[ItemName_BoardInfo()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_BoardInfo(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_BoardInfo()))
                {
                    return (*Value())[ItemName_BoardInfo()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_BoardInfo(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_BoardInfo()))
                {
                    (*Value())[ItemName_BoardInfo()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_BoardInfo(int ArrayIndex, CType_Edit_HWInfo SetValue)
        {
            try
            {
                (*Value())[ItemName_BoardInfo()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_BoardInfo(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_BoardInfo()))
                {
                    (*Value())[ItemName_BoardInfo()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_BoardInfo(int ArrayIndex, const CType_Edit_HWInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_BoardInfo()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_BoardInfo()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CType_Edit_HWInfo Get_BoardInfo(int ArrayIndex) const
        {
            return (*Value())[ItemName_BoardInfo()][ArrayIndex];
        }
        bool Get_BoardInfo(int ArrayIndex, CType_Edit_HWInfo& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_BoardInfo()))
                {
                    if (((*Value())[ItemName_BoardInfo()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_BoardInfo()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace ChangeBoardInfo
#endif //#if defined(IMPLEMENT_FIRMWAREUPDATEAPI_CHANGEBOARDINFO)


//------------------------------------------------------------------------
// FirmwareUpdateAPI::HandleUpdateTask::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FIRMWAREUPDATEAPI_HANDLEUPDATETASK)
namespace HandleUpdateTask
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
        static std::string str("FirmwareUpdateAPI.HandleUpdateTask");
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
            (*Value())[ItemName_MethodID()] = std::string("FirmwareUpdateAPI::HandleUpdateTask");
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
} // namespace HandleUpdateTask
#endif //#if defined(IMPLEMENT_FIRMWAREUPDATEAPI_HANDLEUPDATETASK)


//------------------------------------------------------------------------
// FirmwareUpdateAPI::GetUpdateState::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FIRMWAREUPDATEAPI_GETUPDATESTATE)
namespace GetUpdateState
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_UpdateState(void)
    {
        static std::string str("UpdateState");
        return str;
    }
public:
    static std::string const& ItemName_Events(void)
    {
        static std::string str("Events");
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
        static std::string str("FirmwareUpdateAPI.GetUpdateState");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_UpdateState();
            Construct_Events();
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
            Construct_UpdateState();
            Construct_Events();
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
            Initialize_UpdateState();
            Initialize_Events();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FirmwareUpdateAPI::GetUpdateState");
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
    // Item UpdateState (Type: "CType_Info_UpdateState")
    protected:
        void Construct_UpdateState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UpdateState()))
                {
                    CType_Info_UpdateState InitValue;
                    (*Value())[ItemName_UpdateState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_UpdateState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UpdateState()))
                {
                    Construct_UpdateState();
                }
                if ((*Value()).hasMember(ItemName_UpdateState()))
                {
                    CType_Info_UpdateState InitValue;
                    (*Value())[ItemName_UpdateState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_UpdateState(const CType_Info_UpdateState& SetValue)
        {
            try
            {
                (*Value())[ItemName_UpdateState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CType_Info_UpdateState Get_UpdateState(void) const
        {
            return (*Value())[ItemName_UpdateState()];
        }
        bool Get_UpdateState(CType_Info_UpdateState& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_UpdateState()]).valid())
                {
                    GetValue = (*Value())[ItemName_UpdateState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Events (Type: "GInsXmlRpcStdAPI::CGIns_Info_State[0]")
    protected:
        void Construct_Events(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Events()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
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
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
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
                GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
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
        bool Insert_Events(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Info_State SetValue)
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
        bool Set_Events(int ArrayIndex, const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
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
        GInsXmlRpcStdAPI::CGIns_Info_State Get_Events(int ArrayIndex) const
        {
            return (*Value())[ItemName_Events()][ArrayIndex];
        }
        bool Get_Events(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
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
} // namespace GetUpdateState
#endif //#if defined(IMPLEMENT_FIRMWAREUPDATEAPI_GETUPDATESTATE)


//------------------------------------------------------------------------
// FirmwareUpdateAPI::ChangeSerialNumber::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FIRMWAREUPDATEAPI_CHANGESERIALNUMBER)
namespace ChangeSerialNumber
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
        static std::string str("FirmwareUpdateAPI.ChangeSerialNumber");
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
            (*Value())[ItemName_MethodID()] = std::string("FirmwareUpdateAPI::ChangeSerialNumber");
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
} // namespace ChangeSerialNumber
#endif //#if defined(IMPLEMENT_FIRMWAREUPDATEAPI_CHANGESERIALNUMBER)


//------------------------------------------------------------------------
// FirmwareUpdateAPI::ChangeModuleType::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FIRMWAREUPDATEAPI_CHANGEMODULETYPE)
namespace ChangeModuleType
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
        static std::string str("FirmwareUpdateAPI.ChangeModuleType");
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
            (*Value())[ItemName_MethodID()] = std::string("FirmwareUpdateAPI::ChangeModuleType");
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
} // namespace ChangeModuleType
#endif //#if defined(IMPLEMENT_FIRMWAREUPDATEAPI_CHANGEMODULETYPE)


//------------------------------------------------------------------------
// FirmwareUpdateAPI::ChangeBoardInfo::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FIRMWAREUPDATEAPI_CHANGEBOARDINFO)
namespace ChangeBoardInfo
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
        static std::string str("FirmwareUpdateAPI.ChangeBoardInfo");
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
            (*Value())[ItemName_MethodID()] = std::string("FirmwareUpdateAPI::ChangeBoardInfo");
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
} // namespace ChangeBoardInfo
#endif //#if defined(IMPLEMENT_FIRMWAREUPDATEAPI_CHANGEBOARDINFO)
//========================================================================
}; // namespace FirmwareUpdateAPI
//========================================================================
#endif // #if !defined(_FIRMWAREUPDATEAPI_TYPES_H)

