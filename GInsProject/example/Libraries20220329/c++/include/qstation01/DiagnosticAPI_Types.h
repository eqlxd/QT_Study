//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_DIAGNOSTICAPI_TYPES_H)
#define _DIAGNOSTICAPI_TYPES_H
//========================================================================
// Implemented methods
#define IMPLEMENT_DIAGNOSTICAPI_GETSYSTEMSTATE
#define IMPLEMENT_DIAGNOSTICAPI_GETMODULEDIAGNOSTIC
#define IMPLEMENT_DIAGNOSTICAPI_GETSYSTEMHEALTH
#define IMPLEMENT_DIAGNOSTICAPI_GETTHREADINFO
#define IMPLEMENT_DIAGNOSTICAPI_GETPROCINFO
#define IMPLEMENT_DIAGNOSTICAPI_GETERRORSTATES
#define IMPLEMENT_DIAGNOSTICAPI_GETRUNSTATES
#define IMPLEMENT_DIAGNOSTICAPI_SETTRACECHANNEL
#define IMPLEMENT_DIAGNOSTICAPI_SETTRACELEVEL


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "DiagnosticAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace DiagnosticAPI {
//========================================================================
//------------------------------------------------------------------------
// DiagnosticAPI::CAPIInfo
//------------------------------------------------------------------------
class CAPIInfo
{
public:
    static std::string const& Name(void)
    {
        static std::string str("DiagnosticAPI");
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
// DiagnosticAPI::TypeTraceLevel
//------------------------------------------------------------------------
enum TypeTraceLevel {
    Debug = 0,
    Info = 1,
    Warning = 2,
    Error = 3,
    No = -1,
}; // enum TypeTraceLevel


//------------------------------------------------------------------------
// DiagnosticAPI::CTypeDiagInfo
//------------------------------------------------------------------------
class CTypeDiagInfo : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_IsResponding(void)
        {
            static std::string str("IsResponding");
            return str;
        }
    public:
        static std::string const& ItemName_CycleCount(void)
        {
            static std::string str("CycleCount");
            return str;
        }
    public:
        static std::string const& ItemName_ErrorCount(void)
        {
            static std::string str("ErrorCount");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("TypeDiagInfo");
        return str;
    }
public:
    CTypeDiagInfo(void)
    {
        try
        {
            Construct_IsResponding();
            Construct_CycleCount();
            Construct_ErrorCount();
            }
        catch (...) {}
    }
    CTypeDiagInfo(const CTypeDiagInfo& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        }
    CTypeDiagInfo(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_IsResponding();
            Construct_CycleCount();
            Construct_ErrorCount();
            }
        catch (...) {}
    }
public:
    ~CTypeDiagInfo(void)
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
            Initialize_IsResponding();
            Initialize_CycleCount();
            Initialize_ErrorCount();
        }
        catch (...) {}
    }
//------------------------------------------------------------------------
// Item IsResponding (Type: "bool")
protected:
    void Construct_IsResponding(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_IsResponding()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_IsResponding()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_IsResponding(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IsResponding()))
                {
                    Construct_IsResponding();
                }
                if ((*Value()).hasMember(ItemName_IsResponding()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_IsResponding()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IsResponding(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_IsResponding()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_IsResponding(void) const
        {
            bool GetValue = (*Value())[ItemName_IsResponding()];
            return (bool)GetValue;
        }
        bool Get_IsResponding(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IsResponding()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_IsResponding()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item CycleCount (Type: "int64_t")
protected:
    void Construct_CycleCount(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_CycleCount()))
            {
                int64_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_CycleCount()] = (int64_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_CycleCount(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CycleCount()))
                {
                    Construct_CycleCount();
                }
                if ((*Value()).hasMember(ItemName_CycleCount()))
                {
                    int64_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_CycleCount()] = (int64_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_CycleCount(int64_t SetValue)
        {
            try
            {
                (*Value())[ItemName_CycleCount()] = (int64_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int64_t Get_CycleCount(void) const
        {
            int64_t GetValue = (*Value())[ItemName_CycleCount()];
            return (int64_t)GetValue;
        }
        bool Get_CycleCount(int64_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_CycleCount()]).valid())
                {
                    GetValue = (int64_t)((int64_t)((*Value())[ItemName_CycleCount()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item ErrorCount (Type: "int64_t")
protected:
    void Construct_ErrorCount(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ErrorCount()))
            {
                int64_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_ErrorCount()] = (int64_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ErrorCount(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ErrorCount()))
                {
                    Construct_ErrorCount();
                }
                if ((*Value()).hasMember(ItemName_ErrorCount()))
                {
                    int64_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_ErrorCount()] = (int64_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ErrorCount(int64_t SetValue)
        {
            try
            {
                (*Value())[ItemName_ErrorCount()] = (int64_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int64_t Get_ErrorCount(void) const
        {
            int64_t GetValue = (*Value())[ItemName_ErrorCount()];
            return (int64_t)GetValue;
        }
        bool Get_ErrorCount(int64_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ErrorCount()]).valid())
                {
                    GetValue = (int64_t)((int64_t)((*Value())[ItemName_ErrorCount()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CTypeDiagInfo


//------------------------------------------------------------------------
// DiagnosticAPI::CTypeThreadInfo
//------------------------------------------------------------------------
class CTypeThreadInfo : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_ThreadName(void)
        {
            static std::string str("ThreadName");
            return str;
        }
    public:
        static std::string const& ItemName_StackSize(void)
        {
            static std::string str("StackSize");
            return str;
        }
    public:
        static std::string const& ItemName_CyclesPerSecond(void)
        {
            static std::string str("CyclesPerSecond");
            return str;
        }
    public:
        static std::string const& ItemName_Priority(void)
        {
            static std::string str("Priority");
            return str;
        }
    public:
        static std::string const& ItemName_SchedulePolicy(void)
        {
            static std::string str("SchedulePolicy");
            return str;
        }
    public:
        static std::string const& ItemName_LockedBy(void)
        {
            static std::string str("LockedBy");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("TypeThreadInfo");
        return str;
    }
public:
    CTypeThreadInfo(void)
    {
        try
        {
            Construct_ThreadName();
            Construct_StackSize();
            Construct_CyclesPerSecond();
            Construct_Priority();
            Construct_SchedulePolicy();
            Construct_LockedBy();
            }
        catch (...) {}
    }
    CTypeThreadInfo(const CTypeThreadInfo& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        }
    CTypeThreadInfo(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_ThreadName();
            Construct_StackSize();
            Construct_CyclesPerSecond();
            Construct_Priority();
            Construct_SchedulePolicy();
            Construct_LockedBy();
            }
        catch (...) {}
    }
public:
    ~CTypeThreadInfo(void)
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
            Initialize_ThreadName();
            Initialize_StackSize();
            Initialize_CyclesPerSecond();
            Initialize_Priority();
            Initialize_SchedulePolicy();
            Initialize_LockedBy();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item ThreadName (Type: "std::string")
    protected:
        void Construct_ThreadName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ThreadName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ThreadName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ThreadName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ThreadName()))
                {
                    Construct_ThreadName();
                }
                if ((*Value()).hasMember(ItemName_ThreadName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ThreadName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ThreadName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ThreadName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ThreadName(void) const
        {
            return (*Value())[ItemName_ThreadName()];
        }
        bool Get_ThreadName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ThreadName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ThreadName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item StackSize (Type: "int64_t")
protected:
    void Construct_StackSize(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_StackSize()))
            {
                int64_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_StackSize()] = (int64_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_StackSize(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StackSize()))
                {
                    Construct_StackSize();
                }
                if ((*Value()).hasMember(ItemName_StackSize()))
                {
                    int64_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_StackSize()] = (int64_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StackSize(int64_t SetValue)
        {
            try
            {
                (*Value())[ItemName_StackSize()] = (int64_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int64_t Get_StackSize(void) const
        {
            int64_t GetValue = (*Value())[ItemName_StackSize()];
            return (int64_t)GetValue;
        }
        bool Get_StackSize(int64_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_StackSize()]).valid())
                {
                    GetValue = (int64_t)((int64_t)((*Value())[ItemName_StackSize()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item CyclesPerSecond (Type: "double")
protected:
    void Construct_CyclesPerSecond(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_CyclesPerSecond()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_CyclesPerSecond()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_CyclesPerSecond(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CyclesPerSecond()))
                {
                    Construct_CyclesPerSecond();
                }
                if ((*Value()).hasMember(ItemName_CyclesPerSecond()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_CyclesPerSecond()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_CyclesPerSecond(double SetValue)
        {
            try
            {
                (*Value())[ItemName_CyclesPerSecond()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_CyclesPerSecond(void) const
        {
            double GetValue = (*Value())[ItemName_CyclesPerSecond()];
            return (double)GetValue;
        }
        bool Get_CyclesPerSecond(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_CyclesPerSecond()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_CyclesPerSecond()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Priority (Type: "int32_t")
protected:
    void Construct_Priority(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Priority()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Priority()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Priority(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Priority()))
                {
                    Construct_Priority();
                }
                if ((*Value()).hasMember(ItemName_Priority()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Priority()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Priority(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Priority()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Priority(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Priority()];
            return (int32_t)GetValue;
        }
        bool Get_Priority(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Priority()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Priority()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item SchedulePolicy (Type: "std::string")
    protected:
        void Construct_SchedulePolicy(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SchedulePolicy()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SchedulePolicy()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SchedulePolicy(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SchedulePolicy()))
                {
                    Construct_SchedulePolicy();
                }
                if ((*Value()).hasMember(ItemName_SchedulePolicy()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SchedulePolicy()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SchedulePolicy(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_SchedulePolicy()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_SchedulePolicy(void) const
        {
            return (*Value())[ItemName_SchedulePolicy()];
        }
        bool Get_SchedulePolicy(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SchedulePolicy()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_SchedulePolicy()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item LockedBy (Type: "std::string")
    protected:
        void Construct_LockedBy(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LockedBy()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_LockedBy()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_LockedBy(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LockedBy()))
                {
                    Construct_LockedBy();
                }
                if ((*Value()).hasMember(ItemName_LockedBy()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_LockedBy()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LockedBy(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_LockedBy()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_LockedBy(void) const
        {
            return (*Value())[ItemName_LockedBy()];
        }
        bool Get_LockedBy(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LockedBy()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_LockedBy()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CTypeThreadInfo


//------------------------------------------------------------------------
// DiagnosticAPI::CTypeProcInfo
//------------------------------------------------------------------------
class CTypeProcInfo : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Name(void)
        {
            static std::string str("Name");
            return str;
        }
    public:
        static std::string const& ItemName_PID(void)
        {
            static std::string str("PID");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("TypeProcInfo");
        return str;
    }
public:
    CTypeProcInfo(void)
    {
        try
        {
            Construct_Name();
            Construct_PID();
            }
        catch (...) {}
    }
    CTypeProcInfo(const CTypeProcInfo& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        }
    CTypeProcInfo(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_PID();
            }
        catch (...) {}
    }
public:
    ~CTypeProcInfo(void)
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
            Initialize_PID();
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
// Item PID (Type: "int32_t")
protected:
    void Construct_PID(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_PID()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_PID()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_PID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PID()))
                {
                    Construct_PID();
                }
                if ((*Value()).hasMember(ItemName_PID()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_PID()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_PID(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_PID()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_PID(void) const
        {
            int32_t GetValue = (*Value())[ItemName_PID()];
            return (int32_t)GetValue;
        }
        bool Get_PID(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_PID()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_PID()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CTypeProcInfo


//------------------------------------------------------------------------
// DiagnosticAPI::GetSystemState::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DIAGNOSTICAPI_GETSYSTEMSTATE)
namespace GetSystemState
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ClearCounter(void)
    {
        static std::string str("ClearCounter");
        return str;
    }
public:
    static std::string const& ItemName_Extended(void)
    {
        static std::string str("Extended");
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
        static std::string str("DiagnosticAPI.GetSystemState");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ClearCounter();
            Construct_Extended();
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
            Construct_ClearCounter();
            Construct_Extended();
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
            Initialize_ClearCounter();
            Initialize_Extended();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DiagnosticAPI::GetSystemState");
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
// Item ClearCounter (Type: "bool")
protected:
    void Construct_ClearCounter(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ClearCounter()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_ClearCounter()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ClearCounter(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ClearCounter()))
                {
                    Construct_ClearCounter();
                }
                if ((*Value()).hasMember(ItemName_ClearCounter()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_ClearCounter()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ClearCounter(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_ClearCounter()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_ClearCounter(void) const
        {
            bool GetValue = (*Value())[ItemName_ClearCounter()];
            return (bool)GetValue;
        }
        bool Get_ClearCounter(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ClearCounter()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_ClearCounter()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Extended (Type: "bool")
protected:
    void Construct_Extended(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Extended()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Extended()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Extended(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Extended()))
                {
                    Construct_Extended();
                }
                if ((*Value()).hasMember(ItemName_Extended()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Extended()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Extended(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Extended()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Extended(void) const
        {
            bool GetValue = (*Value())[ItemName_Extended()];
            return (bool)GetValue;
        }
        bool Get_Extended(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Extended()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Extended()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GetSystemState
#endif //#if defined(IMPLEMENT_DIAGNOSTICAPI_GETSYSTEMSTATE)


//------------------------------------------------------------------------
// DiagnosticAPI::GetModuleDiagnostic::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DIAGNOSTICAPI_GETMODULEDIAGNOSTIC)
namespace GetModuleDiagnostic
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ModuleIndex(void)
    {
        static std::string str("ModuleIndex");
        return str;
    }
public:
    static std::string const& ItemName_ClearCounter(void)
    {
        static std::string str("ClearCounter");
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
        static std::string str("DiagnosticAPI.GetModuleDiagnostic");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ModuleIndex();
            Construct_ClearCounter();
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
            Construct_ModuleIndex();
            Construct_ClearCounter();
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
            Initialize_ModuleIndex();
            Initialize_ClearCounter();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DiagnosticAPI::GetModuleDiagnostic");
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
// Item ModuleIndex (Type: "int32_t")
protected:
    void Construct_ModuleIndex(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ModuleIndex()))
            {
                int32_t InitValue;
                InitValue = -1;
                    (*Value())[ItemName_ModuleIndex()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ModuleIndex(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ModuleIndex()))
                {
                    Construct_ModuleIndex();
                }
                if ((*Value()).hasMember(ItemName_ModuleIndex()))
                {
                    int32_t InitValue;
                    InitValue = -1;
                    (*Value())[ItemName_ModuleIndex()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ModuleIndex(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_ModuleIndex()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_ModuleIndex(void) const
        {
            int32_t GetValue = (*Value())[ItemName_ModuleIndex()];
            return (int32_t)GetValue;
        }
        bool Get_ModuleIndex(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ModuleIndex()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_ModuleIndex()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item ClearCounter (Type: "bool")
protected:
    void Construct_ClearCounter(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ClearCounter()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_ClearCounter()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ClearCounter(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ClearCounter()))
                {
                    Construct_ClearCounter();
                }
                if ((*Value()).hasMember(ItemName_ClearCounter()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_ClearCounter()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ClearCounter(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_ClearCounter()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_ClearCounter(void) const
        {
            bool GetValue = (*Value())[ItemName_ClearCounter()];
            return (bool)GetValue;
        }
        bool Get_ClearCounter(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ClearCounter()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_ClearCounter()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GetModuleDiagnostic
#endif //#if defined(IMPLEMENT_DIAGNOSTICAPI_GETMODULEDIAGNOSTIC)


//------------------------------------------------------------------------
// DiagnosticAPI::GetProcInfo::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DIAGNOSTICAPI_GETPROCINFO)
namespace GetProcInfo
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_PID(void)
    {
        static std::string str("PID");
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
        static std::string str("DiagnosticAPI.GetProcInfo");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_PID();
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
            Construct_PID();
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
            Initialize_PID();
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
            (*Value())[ItemName_MethodID()] = std::string("DiagnosticAPI::GetProcInfo");
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
// Item PID (Type: "int32_t")
protected:
    void Construct_PID(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_PID()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_PID()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_PID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PID()))
                {
                    Construct_PID();
                }
                if ((*Value()).hasMember(ItemName_PID()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_PID()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_PID(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_PID()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_PID(void) const
        {
            int32_t GetValue = (*Value())[ItemName_PID()];
            return (int32_t)GetValue;
        }
        bool Get_PID(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_PID()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_PID()]));
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
} // namespace GetProcInfo
#endif //#if defined(IMPLEMENT_DIAGNOSTICAPI_GETPROCINFO)


//------------------------------------------------------------------------
// DiagnosticAPI::GetErrorStates::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DIAGNOSTICAPI_GETERRORSTATES)
namespace GetErrorStates
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
        static std::string str("DiagnosticAPI.GetErrorStates");
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
            (*Value())[ItemName_MethodID()] = std::string("DiagnosticAPI::GetErrorStates");
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
} // namespace GetErrorStates
#endif //#if defined(IMPLEMENT_DIAGNOSTICAPI_GETERRORSTATES)


//------------------------------------------------------------------------
// DiagnosticAPI::SetTraceChannel::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DIAGNOSTICAPI_SETTRACECHANNEL)
namespace SetTraceChannel
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Channel(void)
    {
        static std::string str("Channel");
        return str;
    }
public:
    static std::string const& ItemName_FileName(void)
    {
        static std::string str("FileName");
        return str;
    }
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
    static std::string const& ItemName_Limit(void)
    {
        static std::string str("Limit");
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
        static std::string str("DiagnosticAPI.SetTraceChannel");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Channel();
            Construct_FileName();
            Construct_IPAddress();
            Construct_Port();
            Construct_Limit();
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
            Construct_Channel();
            Construct_FileName();
            Construct_IPAddress();
            Construct_Port();
            Construct_Limit();
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
            Initialize_Channel();
            Initialize_FileName();
            Initialize_IPAddress();
            Initialize_Port();
            Initialize_Limit();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DiagnosticAPI::SetTraceChannel");
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
    // Item Channel (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Channel(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Channel()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Channel()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Channel(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Channel()))
                {
                    Construct_Channel();
                }
                if ((*Value()).hasMember(ItemName_Channel()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Channel()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Channel(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Channel()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Channel(void) const
        {
            return (*Value())[ItemName_Channel()];
        }
        bool Get_Channel(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Channel()]).valid())
                {
                    GetValue = (*Value())[ItemName_Channel()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item FileName (Type: "std::string")
    protected:
        void Construct_FileName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FileName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FileName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_FileName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FileName()))
                {
                    Construct_FileName();
                }
                if ((*Value()).hasMember(ItemName_FileName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FileName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FileName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_FileName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_FileName(void) const
        {
            return (*Value())[ItemName_FileName()];
        }
        bool Get_FileName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FileName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_FileName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
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
// Item Limit (Type: "int32_t")
protected:
    void Construct_Limit(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Limit()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Limit()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Limit(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Limit()))
                {
                    Construct_Limit();
                }
                if ((*Value()).hasMember(ItemName_Limit()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Limit()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Limit(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Limit()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Limit(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Limit()];
            return (int32_t)GetValue;
        }
        bool Get_Limit(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Limit()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Limit()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace SetTraceChannel
#endif //#if defined(IMPLEMENT_DIAGNOSTICAPI_SETTRACECHANNEL)


//------------------------------------------------------------------------
// DiagnosticAPI::SetTraceLevel::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DIAGNOSTICAPI_SETTRACELEVEL)
namespace SetTraceLevel
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Objects(void)
    {
        static std::string str("Objects");
        return str;
    }
public:
    static std::string const& ItemName_System(void)
    {
        static std::string str("System");
        return str;
    }
public:
    static std::string const& ItemName_DataLogger(void)
    {
        static std::string str("DataLogger");
        return str;
    }
public:
    static std::string const& ItemName_Plugin(void)
    {
        static std::string str("Plugin");
        return str;
    }
public:
    static std::string const& ItemName_Sync(void)
    {
        static std::string str("Sync");
        return str;
    }
public:
    static std::string const& ItemName_DataStorageHandler(void)
    {
        static std::string str("DataStorageHandler");
        return str;
    }
public:
    static std::string const& ItemName_FFTProcessor(void)
    {
        static std::string str("FFTProcessor");
        return str;
    }
public:
    static std::string const& ItemName_ProcessBuffer(void)
    {
        static std::string str("ProcessBuffer");
        return str;
    }
public:
    static std::string const& ItemName_ProcessImage(void)
    {
        static std::string str("ProcessImage");
        return str;
    }
public:
    static std::string const& ItemName_CANInterface(void)
    {
        static std::string str("CANInterface");
        return str;
    }
public:
    static std::string const& ItemName_ModbusMaster(void)
    {
        static std::string str("ModbusMaster");
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
        static std::string str("DiagnosticAPI.SetTraceLevel");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Objects();
            Construct_System();
            Construct_DataLogger();
            Construct_Plugin();
            Construct_Sync();
            Construct_DataStorageHandler();
            Construct_FFTProcessor();
            Construct_ProcessBuffer();
            Construct_ProcessImage();
            Construct_CANInterface();
            Construct_ModbusMaster();
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
            Construct_Objects();
            Construct_System();
            Construct_DataLogger();
            Construct_Plugin();
            Construct_Sync();
            Construct_DataStorageHandler();
            Construct_FFTProcessor();
            Construct_ProcessBuffer();
            Construct_ProcessImage();
            Construct_CANInterface();
            Construct_ModbusMaster();
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
            Initialize_Objects();
            Initialize_System();
            Initialize_DataLogger();
            Initialize_Plugin();
            Initialize_Sync();
            Initialize_DataStorageHandler();
            Initialize_FFTProcessor();
            Initialize_ProcessBuffer();
            Initialize_ProcessImage();
            Initialize_CANInterface();
            Initialize_ModbusMaster();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DiagnosticAPI::SetTraceLevel");
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
    // Item Objects (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList")
    protected:
        void Construct_Objects(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Objects()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList InitValue;
                    (*Value())[ItemName_Objects()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Objects(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Objects()))
                {
                    Construct_Objects();
                }
                if ((*Value()).hasMember(ItemName_Objects()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList InitValue;
                    (*Value())[ItemName_Objects()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Objects(const GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Objects()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList Get_Objects(void) const
        {
            return (*Value())[ItemName_Objects()];
        }
        bool Get_Objects(GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Objects()]).valid())
                {
                    GetValue = (*Value())[ItemName_Objects()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item System (Type: "enum TypeTraceLevel")
    protected:
        void Construct_System(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_System()))
                {
                    enum TypeTraceLevel InitValue;
                    InitValue = Info;
                    (*Value())[ItemName_System()] = (int)InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_System(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_System()))
                {
                    Construct_System();
                }
                if ((*Value()).hasMember(ItemName_System()))
                {
                    enum TypeTraceLevel InitValue;
                    InitValue = Info;
                    (*Value())[ItemName_System()] = (int)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_System(enum TypeTraceLevel SetValue)
        {
            try
            {
                (*Value())[ItemName_System()] = (int)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        enum TypeTraceLevel Get_System(void) const
        {
            int GetValue = (*Value())[ItemName_System()];
            return (enum TypeTraceLevel)GetValue;
        }
        bool Get_System(enum TypeTraceLevel& GetValue) const
        {
            try
            {
                if ((*Value())[ItemName_System()].valid())
                {
                    GetValue = (enum TypeTraceLevel)((int)((*Value())[ItemName_System()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item DataLogger (Type: "enum TypeTraceLevel")
    protected:
        void Construct_DataLogger(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataLogger()))
                {
                    enum TypeTraceLevel InitValue;
                    InitValue = Info;
                    (*Value())[ItemName_DataLogger()] = (int)InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DataLogger(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataLogger()))
                {
                    Construct_DataLogger();
                }
                if ((*Value()).hasMember(ItemName_DataLogger()))
                {
                    enum TypeTraceLevel InitValue;
                    InitValue = Info;
                    (*Value())[ItemName_DataLogger()] = (int)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DataLogger(enum TypeTraceLevel SetValue)
        {
            try
            {
                (*Value())[ItemName_DataLogger()] = (int)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        enum TypeTraceLevel Get_DataLogger(void) const
        {
            int GetValue = (*Value())[ItemName_DataLogger()];
            return (enum TypeTraceLevel)GetValue;
        }
        bool Get_DataLogger(enum TypeTraceLevel& GetValue) const
        {
            try
            {
                if ((*Value())[ItemName_DataLogger()].valid())
                {
                    GetValue = (enum TypeTraceLevel)((int)((*Value())[ItemName_DataLogger()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Plugin (Type: "enum TypeTraceLevel")
    protected:
        void Construct_Plugin(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Plugin()))
                {
                    enum TypeTraceLevel InitValue;
                    InitValue = Info;
                    (*Value())[ItemName_Plugin()] = (int)InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Plugin(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Plugin()))
                {
                    Construct_Plugin();
                }
                if ((*Value()).hasMember(ItemName_Plugin()))
                {
                    enum TypeTraceLevel InitValue;
                    InitValue = Info;
                    (*Value())[ItemName_Plugin()] = (int)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Plugin(enum TypeTraceLevel SetValue)
        {
            try
            {
                (*Value())[ItemName_Plugin()] = (int)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        enum TypeTraceLevel Get_Plugin(void) const
        {
            int GetValue = (*Value())[ItemName_Plugin()];
            return (enum TypeTraceLevel)GetValue;
        }
        bool Get_Plugin(enum TypeTraceLevel& GetValue) const
        {
            try
            {
                if ((*Value())[ItemName_Plugin()].valid())
                {
                    GetValue = (enum TypeTraceLevel)((int)((*Value())[ItemName_Plugin()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Sync (Type: "enum TypeTraceLevel")
    protected:
        void Construct_Sync(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Sync()))
                {
                    enum TypeTraceLevel InitValue;
                    InitValue = Info;
                    (*Value())[ItemName_Sync()] = (int)InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Sync(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Sync()))
                {
                    Construct_Sync();
                }
                if ((*Value()).hasMember(ItemName_Sync()))
                {
                    enum TypeTraceLevel InitValue;
                    InitValue = Info;
                    (*Value())[ItemName_Sync()] = (int)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Sync(enum TypeTraceLevel SetValue)
        {
            try
            {
                (*Value())[ItemName_Sync()] = (int)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        enum TypeTraceLevel Get_Sync(void) const
        {
            int GetValue = (*Value())[ItemName_Sync()];
            return (enum TypeTraceLevel)GetValue;
        }
        bool Get_Sync(enum TypeTraceLevel& GetValue) const
        {
            try
            {
                if ((*Value())[ItemName_Sync()].valid())
                {
                    GetValue = (enum TypeTraceLevel)((int)((*Value())[ItemName_Sync()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item DataStorageHandler (Type: "enum TypeTraceLevel")
    protected:
        void Construct_DataStorageHandler(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataStorageHandler()))
                {
                    enum TypeTraceLevel InitValue;
                    InitValue = Info;
                    (*Value())[ItemName_DataStorageHandler()] = (int)InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DataStorageHandler(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DataStorageHandler()))
                {
                    Construct_DataStorageHandler();
                }
                if ((*Value()).hasMember(ItemName_DataStorageHandler()))
                {
                    enum TypeTraceLevel InitValue;
                    InitValue = Info;
                    (*Value())[ItemName_DataStorageHandler()] = (int)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DataStorageHandler(enum TypeTraceLevel SetValue)
        {
            try
            {
                (*Value())[ItemName_DataStorageHandler()] = (int)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        enum TypeTraceLevel Get_DataStorageHandler(void) const
        {
            int GetValue = (*Value())[ItemName_DataStorageHandler()];
            return (enum TypeTraceLevel)GetValue;
        }
        bool Get_DataStorageHandler(enum TypeTraceLevel& GetValue) const
        {
            try
            {
                if ((*Value())[ItemName_DataStorageHandler()].valid())
                {
                    GetValue = (enum TypeTraceLevel)((int)((*Value())[ItemName_DataStorageHandler()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item FFTProcessor (Type: "enum TypeTraceLevel")
    protected:
        void Construct_FFTProcessor(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FFTProcessor()))
                {
                    enum TypeTraceLevel InitValue;
                    InitValue = Info;
                    (*Value())[ItemName_FFTProcessor()] = (int)InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_FFTProcessor(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FFTProcessor()))
                {
                    Construct_FFTProcessor();
                }
                if ((*Value()).hasMember(ItemName_FFTProcessor()))
                {
                    enum TypeTraceLevel InitValue;
                    InitValue = Info;
                    (*Value())[ItemName_FFTProcessor()] = (int)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FFTProcessor(enum TypeTraceLevel SetValue)
        {
            try
            {
                (*Value())[ItemName_FFTProcessor()] = (int)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        enum TypeTraceLevel Get_FFTProcessor(void) const
        {
            int GetValue = (*Value())[ItemName_FFTProcessor()];
            return (enum TypeTraceLevel)GetValue;
        }
        bool Get_FFTProcessor(enum TypeTraceLevel& GetValue) const
        {
            try
            {
                if ((*Value())[ItemName_FFTProcessor()].valid())
                {
                    GetValue = (enum TypeTraceLevel)((int)((*Value())[ItemName_FFTProcessor()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ProcessBuffer (Type: "enum TypeTraceLevel")
    protected:
        void Construct_ProcessBuffer(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProcessBuffer()))
                {
                    enum TypeTraceLevel InitValue;
                    InitValue = Info;
                    (*Value())[ItemName_ProcessBuffer()] = (int)InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ProcessBuffer(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProcessBuffer()))
                {
                    Construct_ProcessBuffer();
                }
                if ((*Value()).hasMember(ItemName_ProcessBuffer()))
                {
                    enum TypeTraceLevel InitValue;
                    InitValue = Info;
                    (*Value())[ItemName_ProcessBuffer()] = (int)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ProcessBuffer(enum TypeTraceLevel SetValue)
        {
            try
            {
                (*Value())[ItemName_ProcessBuffer()] = (int)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        enum TypeTraceLevel Get_ProcessBuffer(void) const
        {
            int GetValue = (*Value())[ItemName_ProcessBuffer()];
            return (enum TypeTraceLevel)GetValue;
        }
        bool Get_ProcessBuffer(enum TypeTraceLevel& GetValue) const
        {
            try
            {
                if ((*Value())[ItemName_ProcessBuffer()].valid())
                {
                    GetValue = (enum TypeTraceLevel)((int)((*Value())[ItemName_ProcessBuffer()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ProcessImage (Type: "enum TypeTraceLevel")
    protected:
        void Construct_ProcessImage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProcessImage()))
                {
                    enum TypeTraceLevel InitValue;
                    InitValue = Info;
                    (*Value())[ItemName_ProcessImage()] = (int)InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ProcessImage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProcessImage()))
                {
                    Construct_ProcessImage();
                }
                if ((*Value()).hasMember(ItemName_ProcessImage()))
                {
                    enum TypeTraceLevel InitValue;
                    InitValue = Info;
                    (*Value())[ItemName_ProcessImage()] = (int)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ProcessImage(enum TypeTraceLevel SetValue)
        {
            try
            {
                (*Value())[ItemName_ProcessImage()] = (int)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        enum TypeTraceLevel Get_ProcessImage(void) const
        {
            int GetValue = (*Value())[ItemName_ProcessImage()];
            return (enum TypeTraceLevel)GetValue;
        }
        bool Get_ProcessImage(enum TypeTraceLevel& GetValue) const
        {
            try
            {
                if ((*Value())[ItemName_ProcessImage()].valid())
                {
                    GetValue = (enum TypeTraceLevel)((int)((*Value())[ItemName_ProcessImage()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item CANInterface (Type: "enum TypeTraceLevel")
    protected:
        void Construct_CANInterface(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CANInterface()))
                {
                    enum TypeTraceLevel InitValue;
                    InitValue = Info;
                    (*Value())[ItemName_CANInterface()] = (int)InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_CANInterface(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CANInterface()))
                {
                    Construct_CANInterface();
                }
                if ((*Value()).hasMember(ItemName_CANInterface()))
                {
                    enum TypeTraceLevel InitValue;
                    InitValue = Info;
                    (*Value())[ItemName_CANInterface()] = (int)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_CANInterface(enum TypeTraceLevel SetValue)
        {
            try
            {
                (*Value())[ItemName_CANInterface()] = (int)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        enum TypeTraceLevel Get_CANInterface(void) const
        {
            int GetValue = (*Value())[ItemName_CANInterface()];
            return (enum TypeTraceLevel)GetValue;
        }
        bool Get_CANInterface(enum TypeTraceLevel& GetValue) const
        {
            try
            {
                if ((*Value())[ItemName_CANInterface()].valid())
                {
                    GetValue = (enum TypeTraceLevel)((int)((*Value())[ItemName_CANInterface()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ModbusMaster (Type: "enum TypeTraceLevel")
    protected:
        void Construct_ModbusMaster(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ModbusMaster()))
                {
                    enum TypeTraceLevel InitValue;
                    InitValue = Info;
                    (*Value())[ItemName_ModbusMaster()] = (int)InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ModbusMaster(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ModbusMaster()))
                {
                    Construct_ModbusMaster();
                }
                if ((*Value()).hasMember(ItemName_ModbusMaster()))
                {
                    enum TypeTraceLevel InitValue;
                    InitValue = Info;
                    (*Value())[ItemName_ModbusMaster()] = (int)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ModbusMaster(enum TypeTraceLevel SetValue)
        {
            try
            {
                (*Value())[ItemName_ModbusMaster()] = (int)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        enum TypeTraceLevel Get_ModbusMaster(void) const
        {
            int GetValue = (*Value())[ItemName_ModbusMaster()];
            return (enum TypeTraceLevel)GetValue;
        }
        bool Get_ModbusMaster(enum TypeTraceLevel& GetValue) const
        {
            try
            {
                if ((*Value())[ItemName_ModbusMaster()].valid())
                {
                    GetValue = (enum TypeTraceLevel)((int)((*Value())[ItemName_ModbusMaster()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace SetTraceLevel
#endif //#if defined(IMPLEMENT_DIAGNOSTICAPI_SETTRACELEVEL)


//------------------------------------------------------------------------
// DiagnosticAPI::GetSystemState::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DIAGNOSTICAPI_GETSYSTEMSTATE)
namespace GetSystemState
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_SystemState(void)
    {
        static std::string str("SystemState");
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
        static std::string str("DiagnosticAPI.GetSystemState");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_SystemState();
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
            Construct_SystemState();
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
            Initialize_SystemState();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DiagnosticAPI::GetSystemState");
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
    // Item SystemState (Type: "GInsXmlRpcStdAPI::CGIns_Info_Device_SystemState")
    protected:
        void Construct_SystemState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SystemState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_Device_SystemState InitValue;
                    (*Value())[ItemName_SystemState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SystemState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SystemState()))
                {
                    Construct_SystemState();
                }
                if ((*Value()).hasMember(ItemName_SystemState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_Device_SystemState InitValue;
                    (*Value())[ItemName_SystemState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SystemState(const GInsXmlRpcStdAPI::CGIns_Info_Device_SystemState& SetValue)
        {
            try
            {
                (*Value())[ItemName_SystemState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_Device_SystemState Get_SystemState(void) const
        {
            return (*Value())[ItemName_SystemState()];
        }
        bool Get_SystemState(GInsXmlRpcStdAPI::CGIns_Info_Device_SystemState& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SystemState()]).valid())
                {
                    GetValue = (*Value())[ItemName_SystemState()];
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
#endif //#if defined(IMPLEMENT_DIAGNOSTICAPI_GETSYSTEMSTATE)


//------------------------------------------------------------------------
// DiagnosticAPI::GetModuleDiagnostic::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DIAGNOSTICAPI_GETMODULEDIAGNOSTIC)
namespace GetModuleDiagnostic
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ModuleList(void)
    {
        static std::string str("ModuleList");
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
        static std::string str("DiagnosticAPI.GetModuleDiagnostic");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ModuleList();
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
            Construct_ModuleList();
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
            Initialize_ModuleList();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DiagnosticAPI::GetModuleDiagnostic");
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
    // Item ModuleList (Type: "CTypeDiagInfo[0]")
    protected:
        void Construct_ModuleList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ModuleList()))
                {
                    CTypeDiagInfo InitValue;
                    (*Value())[ItemName_ModuleList()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_ModuleList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ModuleList()))
                {
                    Construct_ModuleList();
                }
                if ((*Value()).hasMember(ItemName_ModuleList()))
                {
                    CTypeDiagInfo InitValue;
                    (*Value())[ItemName_ModuleList()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_ModuleList(int NewSize)
        {
            try
            {
                CTypeDiagInfo InitValue;
                (*Value())[ItemName_ModuleList()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_ModuleList(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ModuleList()))
                {
                    return (*Value())[ItemName_ModuleList()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_ModuleList(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ModuleList()))
                {
                    (*Value())[ItemName_ModuleList()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_ModuleList(int ArrayIndex, CTypeDiagInfo SetValue)
        {
            try
            {
                (*Value())[ItemName_ModuleList()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_ModuleList(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ModuleList()))
                {
                    (*Value())[ItemName_ModuleList()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ModuleList(int ArrayIndex, const CTypeDiagInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_ModuleList()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_ModuleList()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CTypeDiagInfo Get_ModuleList(int ArrayIndex) const
        {
            return (*Value())[ItemName_ModuleList()][ArrayIndex];
        }
        bool Get_ModuleList(int ArrayIndex, CTypeDiagInfo& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ModuleList()))
                {
                    if (((*Value())[ItemName_ModuleList()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_ModuleList()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetModuleDiagnostic
#endif //#if defined(IMPLEMENT_DIAGNOSTICAPI_GETMODULEDIAGNOSTIC)


//------------------------------------------------------------------------
// DiagnosticAPI::GetSystemHealth::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DIAGNOSTICAPI_GETSYSTEMHEALTH)
namespace GetSystemHealth
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_User(void)
    {
        static std::string str("User");
        return str;
    }
public:
    static std::string const& ItemName_UserAverage(void)
    {
        static std::string str("UserAverage");
        return str;
    }
public:
    static std::string const& ItemName_Realtime(void)
    {
        static std::string str("Realtime");
        return str;
    }
public:
    static std::string const& ItemName_RealtimeAverage(void)
    {
        static std::string str("RealtimeAverage");
        return str;
    }
public:
    static std::string const& ItemName_RealtimeOverloads(void)
    {
        static std::string str("RealtimeOverloads");
        return str;
    }
public:
    static std::string const& ItemName_MemTotal(void)
    {
        static std::string str("MemTotal");
        return str;
    }
public:
    static std::string const& ItemName_MemUsed(void)
    {
        static std::string str("MemUsed");
        return str;
    }
public:
    static std::string const& ItemName_MemFree(void)
    {
        static std::string str("MemFree");
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
        static std::string str("DiagnosticAPI.GetSystemHealth");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_User();
            Construct_UserAverage();
            Construct_Realtime();
            Construct_RealtimeAverage();
            Construct_RealtimeOverloads();
            Construct_MemTotal();
            Construct_MemUsed();
            Construct_MemFree();
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
            Construct_User();
            Construct_UserAverage();
            Construct_Realtime();
            Construct_RealtimeAverage();
            Construct_RealtimeOverloads();
            Construct_MemTotal();
            Construct_MemUsed();
            Construct_MemFree();
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
            Initialize_User();
            Initialize_UserAverage();
            Initialize_Realtime();
            Initialize_RealtimeAverage();
            Initialize_RealtimeOverloads();
            Initialize_MemTotal();
            Initialize_MemUsed();
            Initialize_MemFree();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DiagnosticAPI::GetSystemHealth");
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
// Item User (Type: "int32_t")
protected:
    void Construct_User(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_User()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_User()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_User(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_User()))
                {
                    Construct_User();
                }
                if ((*Value()).hasMember(ItemName_User()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_User()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_User(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_User()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_User(void) const
        {
            int32_t GetValue = (*Value())[ItemName_User()];
            return (int32_t)GetValue;
        }
        bool Get_User(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_User()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_User()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item UserAverage (Type: "int32_t")
protected:
    void Construct_UserAverage(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_UserAverage()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_UserAverage()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_UserAverage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UserAverage()))
                {
                    Construct_UserAverage();
                }
                if ((*Value()).hasMember(ItemName_UserAverage()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_UserAverage()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_UserAverage(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_UserAverage()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_UserAverage(void) const
        {
            int32_t GetValue = (*Value())[ItemName_UserAverage()];
            return (int32_t)GetValue;
        }
        bool Get_UserAverage(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_UserAverage()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_UserAverage()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Realtime (Type: "int32_t")
protected:
    void Construct_Realtime(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Realtime()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Realtime()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Realtime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Realtime()))
                {
                    Construct_Realtime();
                }
                if ((*Value()).hasMember(ItemName_Realtime()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Realtime()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Realtime(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Realtime()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Realtime(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Realtime()];
            return (int32_t)GetValue;
        }
        bool Get_Realtime(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Realtime()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Realtime()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item RealtimeAverage (Type: "int32_t")
protected:
    void Construct_RealtimeAverage(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_RealtimeAverage()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_RealtimeAverage()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_RealtimeAverage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RealtimeAverage()))
                {
                    Construct_RealtimeAverage();
                }
                if ((*Value()).hasMember(ItemName_RealtimeAverage()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_RealtimeAverage()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RealtimeAverage(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_RealtimeAverage()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_RealtimeAverage(void) const
        {
            int32_t GetValue = (*Value())[ItemName_RealtimeAverage()];
            return (int32_t)GetValue;
        }
        bool Get_RealtimeAverage(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RealtimeAverage()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_RealtimeAverage()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item RealtimeOverloads (Type: "int32_t")
protected:
    void Construct_RealtimeOverloads(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_RealtimeOverloads()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_RealtimeOverloads()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_RealtimeOverloads(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RealtimeOverloads()))
                {
                    Construct_RealtimeOverloads();
                }
                if ((*Value()).hasMember(ItemName_RealtimeOverloads()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_RealtimeOverloads()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RealtimeOverloads(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_RealtimeOverloads()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_RealtimeOverloads(void) const
        {
            int32_t GetValue = (*Value())[ItemName_RealtimeOverloads()];
            return (int32_t)GetValue;
        }
        bool Get_RealtimeOverloads(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RealtimeOverloads()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_RealtimeOverloads()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item MemTotal (Type: "int32_t")
protected:
    void Construct_MemTotal(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MemTotal()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_MemTotal()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_MemTotal(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MemTotal()))
                {
                    Construct_MemTotal();
                }
                if ((*Value()).hasMember(ItemName_MemTotal()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_MemTotal()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MemTotal(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_MemTotal()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_MemTotal(void) const
        {
            int32_t GetValue = (*Value())[ItemName_MemTotal()];
            return (int32_t)GetValue;
        }
        bool Get_MemTotal(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MemTotal()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_MemTotal()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item MemUsed (Type: "int32_t")
protected:
    void Construct_MemUsed(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MemUsed()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_MemUsed()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_MemUsed(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MemUsed()))
                {
                    Construct_MemUsed();
                }
                if ((*Value()).hasMember(ItemName_MemUsed()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_MemUsed()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MemUsed(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_MemUsed()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_MemUsed(void) const
        {
            int32_t GetValue = (*Value())[ItemName_MemUsed()];
            return (int32_t)GetValue;
        }
        bool Get_MemUsed(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MemUsed()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_MemUsed()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item MemFree (Type: "int32_t")
protected:
    void Construct_MemFree(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MemFree()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_MemFree()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_MemFree(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MemFree()))
                {
                    Construct_MemFree();
                }
                if ((*Value()).hasMember(ItemName_MemFree()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_MemFree()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MemFree(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_MemFree()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_MemFree(void) const
        {
            int32_t GetValue = (*Value())[ItemName_MemFree()];
            return (int32_t)GetValue;
        }
        bool Get_MemFree(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MemFree()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_MemFree()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetSystemHealth
#endif //#if defined(IMPLEMENT_DIAGNOSTICAPI_GETSYSTEMHEALTH)


//------------------------------------------------------------------------
// DiagnosticAPI::GetThreadInfo::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DIAGNOSTICAPI_GETTHREADINFO)
namespace GetThreadInfo
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Threads(void)
    {
        static std::string str("Threads");
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
        static std::string str("DiagnosticAPI.GetThreadInfo");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Threads();
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
            Construct_Threads();
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
            Initialize_Threads();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DiagnosticAPI::GetThreadInfo");
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
    // Item Threads (Type: "CTypeThreadInfo[0]")
    protected:
        void Construct_Threads(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Threads()))
                {
                    CTypeThreadInfo InitValue;
                    (*Value())[ItemName_Threads()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Threads(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Threads()))
                {
                    Construct_Threads();
                }
                if ((*Value()).hasMember(ItemName_Threads()))
                {
                    CTypeThreadInfo InitValue;
                    (*Value())[ItemName_Threads()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Threads(int NewSize)
        {
            try
            {
                CTypeThreadInfo InitValue;
                (*Value())[ItemName_Threads()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Threads(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Threads()))
                {
                    return (*Value())[ItemName_Threads()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Threads(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Threads()))
                {
                    (*Value())[ItemName_Threads()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Threads(int ArrayIndex, CTypeThreadInfo SetValue)
        {
            try
            {
                (*Value())[ItemName_Threads()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Threads(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Threads()))
                {
                    (*Value())[ItemName_Threads()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Threads(int ArrayIndex, const CTypeThreadInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_Threads()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Threads()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CTypeThreadInfo Get_Threads(int ArrayIndex) const
        {
            return (*Value())[ItemName_Threads()][ArrayIndex];
        }
        bool Get_Threads(int ArrayIndex, CTypeThreadInfo& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Threads()))
                {
                    if (((*Value())[ItemName_Threads()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Threads()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetThreadInfo
#endif //#if defined(IMPLEMENT_DIAGNOSTICAPI_GETTHREADINFO)


//------------------------------------------------------------------------
// DiagnosticAPI::GetProcInfo::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DIAGNOSTICAPI_GETPROCINFO)
namespace GetProcInfo
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ProcessList(void)
    {
        static std::string str("ProcessList");
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
        static std::string str("DiagnosticAPI.GetProcInfo");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ProcessList();
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
            Construct_ProcessList();
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
            Initialize_ProcessList();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DiagnosticAPI::GetProcInfo");
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
    // Item ProcessList (Type: "CTypeProcInfo[0]")
    protected:
        void Construct_ProcessList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProcessList()))
                {
                    CTypeProcInfo InitValue;
                    (*Value())[ItemName_ProcessList()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_ProcessList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProcessList()))
                {
                    Construct_ProcessList();
                }
                if ((*Value()).hasMember(ItemName_ProcessList()))
                {
                    CTypeProcInfo InitValue;
                    (*Value())[ItemName_ProcessList()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_ProcessList(int NewSize)
        {
            try
            {
                CTypeProcInfo InitValue;
                (*Value())[ItemName_ProcessList()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_ProcessList(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ProcessList()))
                {
                    return (*Value())[ItemName_ProcessList()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_ProcessList(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ProcessList()))
                {
                    (*Value())[ItemName_ProcessList()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_ProcessList(int ArrayIndex, CTypeProcInfo SetValue)
        {
            try
            {
                (*Value())[ItemName_ProcessList()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_ProcessList(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ProcessList()))
                {
                    (*Value())[ItemName_ProcessList()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ProcessList(int ArrayIndex, const CTypeProcInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_ProcessList()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_ProcessList()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CTypeProcInfo Get_ProcessList(int ArrayIndex) const
        {
            return (*Value())[ItemName_ProcessList()][ArrayIndex];
        }
        bool Get_ProcessList(int ArrayIndex, CTypeProcInfo& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ProcessList()))
                {
                    if (((*Value())[ItemName_ProcessList()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_ProcessList()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetProcInfo
#endif //#if defined(IMPLEMENT_DIAGNOSTICAPI_GETPROCINFO)


//------------------------------------------------------------------------
// DiagnosticAPI::GetErrorStates::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DIAGNOSTICAPI_GETERRORSTATES)
namespace GetErrorStates
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Count(void)
    {
        static std::string str("Count");
        return str;
    }
public:
    static std::string const& ItemName_ErrorStates(void)
    {
        static std::string str("ErrorStates");
        return str;
    }
public:
    static std::string const& ItemName_BitSet(void)
    {
        static std::string str("BitSet");
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
        static std::string str("DiagnosticAPI.GetErrorStates");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Count();
            Construct_ErrorStates();
            Construct_BitSet();
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
            Construct_Count();
            Construct_ErrorStates();
            Construct_BitSet();
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
            Initialize_Count();
            Initialize_ErrorStates();
            Initialize_BitSet();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DiagnosticAPI::GetErrorStates");
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
// Item Count (Type: "int32_t")
protected:
    void Construct_Count(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Count()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Count()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Count(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Count()))
                {
                    Construct_Count();
                }
                if ((*Value()).hasMember(ItemName_Count()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Count()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Count(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Count()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Count(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Count()];
            return (int32_t)GetValue;
        }
        bool Get_Count(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Count()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Count()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ErrorStates (Type: "GInsXmlRpcStdAPI::CGIns_Info_Event[0]")
    protected:
        void Construct_ErrorStates(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ErrorStates()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_Event InitValue;
                    (*Value())[ItemName_ErrorStates()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_ErrorStates(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ErrorStates()))
                {
                    Construct_ErrorStates();
                }
                if ((*Value()).hasMember(ItemName_ErrorStates()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_Event InitValue;
                    (*Value())[ItemName_ErrorStates()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_ErrorStates(int NewSize)
        {
            try
            {
                GInsXmlRpcStdAPI::CGIns_Info_Event InitValue;
                (*Value())[ItemName_ErrorStates()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_ErrorStates(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ErrorStates()))
                {
                    return (*Value())[ItemName_ErrorStates()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_ErrorStates(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ErrorStates()))
                {
                    (*Value())[ItemName_ErrorStates()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_ErrorStates(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Info_Event SetValue)
        {
            try
            {
                (*Value())[ItemName_ErrorStates()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_ErrorStates(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ErrorStates()))
                {
                    (*Value())[ItemName_ErrorStates()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ErrorStates(int ArrayIndex, const GInsXmlRpcStdAPI::CGIns_Info_Event& SetValue)
        {
            try
            {
                (*Value())[ItemName_ErrorStates()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_ErrorStates()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_Event Get_ErrorStates(int ArrayIndex) const
        {
            return (*Value())[ItemName_ErrorStates()][ArrayIndex];
        }
        bool Get_ErrorStates(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Info_Event& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_ErrorStates()))
                {
                    if (((*Value())[ItemName_ErrorStates()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_ErrorStates()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item BitSet (Type: "int64_t")
protected:
    void Construct_BitSet(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_BitSet()))
            {
                int64_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_BitSet()] = (int64_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_BitSet(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_BitSet()))
                {
                    Construct_BitSet();
                }
                if ((*Value()).hasMember(ItemName_BitSet()))
                {
                    int64_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_BitSet()] = (int64_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_BitSet(int64_t SetValue)
        {
            try
            {
                (*Value())[ItemName_BitSet()] = (int64_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int64_t Get_BitSet(void) const
        {
            int64_t GetValue = (*Value())[ItemName_BitSet()];
            return (int64_t)GetValue;
        }
        bool Get_BitSet(int64_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_BitSet()]).valid())
                {
                    GetValue = (int64_t)((int64_t)((*Value())[ItemName_BitSet()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetErrorStates
#endif //#if defined(IMPLEMENT_DIAGNOSTICAPI_GETERRORSTATES)


//------------------------------------------------------------------------
// DiagnosticAPI::GetRunStates::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DIAGNOSTICAPI_GETRUNSTATES)
namespace GetRunStates
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Count(void)
    {
        static std::string str("Count");
        return str;
    }
public:
    static std::string const& ItemName_RunStates(void)
    {
        static std::string str("RunStates");
        return str;
    }
public:
    static std::string const& ItemName_BitSet(void)
    {
        static std::string str("BitSet");
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
        static std::string str("DiagnosticAPI.GetRunStates");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Count();
            Construct_RunStates();
            Construct_BitSet();
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
            Construct_Count();
            Construct_RunStates();
            Construct_BitSet();
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
            Initialize_Count();
            Initialize_RunStates();
            Initialize_BitSet();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("DiagnosticAPI::GetRunStates");
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
// Item Count (Type: "int32_t")
protected:
    void Construct_Count(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Count()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Count()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Count(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Count()))
                {
                    Construct_Count();
                }
                if ((*Value()).hasMember(ItemName_Count()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Count()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Count(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Count()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Count(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Count()];
            return (int32_t)GetValue;
        }
        bool Get_Count(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Count()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Count()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item RunStates (Type: "std::string[0]")
    protected:
        void Construct_RunStates(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RunStates()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RunStates()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_RunStates(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RunStates()))
                {
                    Construct_RunStates();
                }
                if ((*Value()).hasMember(ItemName_RunStates()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RunStates()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_RunStates(int NewSize)
        {
            try
            {
                std::string InitValue;
                InitValue = "";
                (*Value())[ItemName_RunStates()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_RunStates(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_RunStates()))
                {
                    return (*Value())[ItemName_RunStates()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_RunStates(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_RunStates()))
                {
                    (*Value())[ItemName_RunStates()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_RunStates(int ArrayIndex, std::string SetValue)
        {
            try
            {
                (*Value())[ItemName_RunStates()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_RunStates(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_RunStates()))
                {
                    (*Value())[ItemName_RunStates()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RunStates(int ArrayIndex, const std::string& SetValue)
        {
            try
            {
                if (ArrayIndex >= GetSize_RunStates())
                {
                    SetSize_RunStates(ArrayIndex + 1);
                }
                (*Value())[ItemName_RunStates()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_RunStates(int ArrayIndex) const
        {
            return (*Value())[ItemName_RunStates()][ArrayIndex];
        }
        bool Get_RunStates(int ArrayIndex, std::string& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_RunStates()))
                {
                    if (((*Value())[ItemName_RunStates()][ArrayIndex]).valid())
                    {
                        GetValue = (std::string)((*Value())[ItemName_RunStates()][ArrayIndex]);
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item BitSet (Type: "int64_t")
protected:
    void Construct_BitSet(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_BitSet()))
            {
                int64_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_BitSet()] = (int64_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_BitSet(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_BitSet()))
                {
                    Construct_BitSet();
                }
                if ((*Value()).hasMember(ItemName_BitSet()))
                {
                    int64_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_BitSet()] = (int64_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_BitSet(int64_t SetValue)
        {
            try
            {
                (*Value())[ItemName_BitSet()] = (int64_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int64_t Get_BitSet(void) const
        {
            int64_t GetValue = (*Value())[ItemName_BitSet()];
            return (int64_t)GetValue;
        }
        bool Get_BitSet(int64_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_BitSet()]).valid())
                {
                    GetValue = (int64_t)((int64_t)((*Value())[ItemName_BitSet()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetRunStates
#endif //#if defined(IMPLEMENT_DIAGNOSTICAPI_GETRUNSTATES)


//------------------------------------------------------------------------
// DiagnosticAPI::SetTraceChannel::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DIAGNOSTICAPI_SETTRACECHANNEL)
namespace SetTraceChannel
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
        static std::string str("DiagnosticAPI.SetTraceChannel");
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
            (*Value())[ItemName_MethodID()] = std::string("DiagnosticAPI::SetTraceChannel");
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
} // namespace SetTraceChannel
#endif //#if defined(IMPLEMENT_DIAGNOSTICAPI_SETTRACECHANNEL)


//------------------------------------------------------------------------
// DiagnosticAPI::SetTraceLevel::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_DIAGNOSTICAPI_SETTRACELEVEL)
namespace SetTraceLevel
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
        static std::string str("DiagnosticAPI.SetTraceLevel");
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
            (*Value())[ItemName_MethodID()] = std::string("DiagnosticAPI::SetTraceLevel");
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
} // namespace SetTraceLevel
#endif //#if defined(IMPLEMENT_DIAGNOSTICAPI_SETTRACELEVEL)
//========================================================================
}; // namespace DiagnosticAPI
//========================================================================
#endif // #if !defined(_DIAGNOSTICAPI_TYPES_H)

