//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_HARDWAREAPI_TYPES_H)
#define _HARDWAREAPI_TYPES_H
//========================================================================
// Implemented methods
#define IMPLEMENT_HARDWAREAPI_I2CREAD
#define IMPLEMENT_HARDWAREAPI_I2CWRITE
#define IMPLEMENT_HARDWAREAPI_I2CSCAN
#define IMPLEMENT_HARDWAREAPI_GETCPUINFO
#define IMPLEMENT_HARDWAREAPI_SETDISPLAYBACKLIGHT
#define IMPLEMENT_HARDWAREAPI_GETTEMPINFOS
#define IMPLEMENT_HARDWAREAPI_GETVOLTAGEINFOS
#define IMPLEMENT_HARDWAREAPI_FPGAGETBAR0REGISTERS
#define IMPLEMENT_HARDWAREAPI_FPGASETBAR0REGISTER
#define IMPLEMENT_HARDWAREAPI_FPGAGETBAR1REGISTERS
#define IMPLEMENT_HARDWAREAPI_RESETBOARD
#define IMPLEMENT_HARDWAREAPI_SETDIGITALOUTPUTCONFIG
#define IMPLEMENT_HARDWAREAPI_SETDIGITALINPUTCONFIG
#define IMPLEMENT_HARDWAREAPI_GETDIGITALINPUTSTATE
#define IMPLEMENT_HARDWAREAPI_GETDIGITALOUTPUTCONTROLSTATE
#define IMPLEMENT_HARDWAREAPI_SETDIGITALOUTPUTCONTROLSTATE


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "HardwareAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace HardwareAPI {
//========================================================================
//------------------------------------------------------------------------
// HardwareAPI::CAPIInfo
//------------------------------------------------------------------------
class CAPIInfo
{
public:
    static std::string const& Name(void)
    {
        static std::string str("HardwareAPI");
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
// HardwareAPI::CTypeTempInfo
//------------------------------------------------------------------------
class CTypeTempInfo : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Sensor(void)
        {
            static std::string str("Sensor");
            return str;
        }
    public:
        static std::string const& ItemName_CurrentValue(void)
        {
            static std::string str("CurrentValue");
            return str;
        }
    public:
        static std::string const& ItemName_MinVal(void)
        {
            static std::string str("MinVal");
            return str;
        }
    public:
        static std::string const& ItemName_MaxVal(void)
        {
            static std::string str("MaxVal");
            return str;
        }
    public:
        static std::string const& ItemName_Active(void)
        {
            static std::string str("Active");
            return str;
        }
    public:
        static std::string const& ItemName_Broken(void)
        {
            static std::string str("Broken");
            return str;
        }
    public:
        static std::string const& ItemName_Alarm(void)
        {
            static std::string str("Alarm");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("TypeTempInfo");
        return str;
    }
public:
    CTypeTempInfo(void)
    {
        try
        {
            Construct_Sensor();
            Construct_CurrentValue();
            Construct_MinVal();
            Construct_MaxVal();
            Construct_Active();
            Construct_Broken();
            Construct_Alarm();
            }
        catch (...) {}
    }
    CTypeTempInfo(const CTypeTempInfo& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        }
    CTypeTempInfo(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_Sensor();
            Construct_CurrentValue();
            Construct_MinVal();
            Construct_MaxVal();
            Construct_Active();
            Construct_Broken();
            Construct_Alarm();
            }
        catch (...) {}
    }
public:
    ~CTypeTempInfo(void)
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
            Initialize_Sensor();
            Initialize_CurrentValue();
            Initialize_MinVal();
            Initialize_MaxVal();
            Initialize_Active();
            Initialize_Broken();
            Initialize_Alarm();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item Sensor (Type: "std::string")
    protected:
        void Construct_Sensor(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Sensor()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Sensor()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Sensor(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Sensor()))
                {
                    Construct_Sensor();
                }
                if ((*Value()).hasMember(ItemName_Sensor()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Sensor()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Sensor(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Sensor()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Sensor(void) const
        {
            return (*Value())[ItemName_Sensor()];
        }
        bool Get_Sensor(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Sensor()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Sensor()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item CurrentValue (Type: "double")
protected:
    void Construct_CurrentValue(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_CurrentValue()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_CurrentValue()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_CurrentValue(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CurrentValue()))
                {
                    Construct_CurrentValue();
                }
                if ((*Value()).hasMember(ItemName_CurrentValue()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_CurrentValue()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_CurrentValue(double SetValue)
        {
            try
            {
                (*Value())[ItemName_CurrentValue()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_CurrentValue(void) const
        {
            double GetValue = (*Value())[ItemName_CurrentValue()];
            return (double)GetValue;
        }
        bool Get_CurrentValue(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_CurrentValue()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_CurrentValue()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item MinVal (Type: "double")
protected:
    void Construct_MinVal(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MinVal()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_MinVal()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_MinVal(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MinVal()))
                {
                    Construct_MinVal();
                }
                if ((*Value()).hasMember(ItemName_MinVal()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_MinVal()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MinVal(double SetValue)
        {
            try
            {
                (*Value())[ItemName_MinVal()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_MinVal(void) const
        {
            double GetValue = (*Value())[ItemName_MinVal()];
            return (double)GetValue;
        }
        bool Get_MinVal(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MinVal()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_MinVal()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item MaxVal (Type: "double")
protected:
    void Construct_MaxVal(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MaxVal()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_MaxVal()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_MaxVal(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MaxVal()))
                {
                    Construct_MaxVal();
                }
                if ((*Value()).hasMember(ItemName_MaxVal()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_MaxVal()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MaxVal(double SetValue)
        {
            try
            {
                (*Value())[ItemName_MaxVal()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_MaxVal(void) const
        {
            double GetValue = (*Value())[ItemName_MaxVal()];
            return (double)GetValue;
        }
        bool Get_MaxVal(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MaxVal()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_MaxVal()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Active (Type: "double")
protected:
    void Construct_Active(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Active()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_Active()] = (double)InitValue;
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
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_Active()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Active(double SetValue)
        {
            try
            {
                (*Value())[ItemName_Active()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_Active(void) const
        {
            double GetValue = (*Value())[ItemName_Active()];
            return (double)GetValue;
        }
        bool Get_Active(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Active()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_Active()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Broken (Type: "bool")
protected:
    void Construct_Broken(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Broken()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Broken()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Broken(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Broken()))
                {
                    Construct_Broken();
                }
                if ((*Value()).hasMember(ItemName_Broken()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Broken()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Broken(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Broken()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Broken(void) const
        {
            bool GetValue = (*Value())[ItemName_Broken()];
            return (bool)GetValue;
        }
        bool Get_Broken(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Broken()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Broken()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Alarm (Type: "bool")
protected:
    void Construct_Alarm(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Alarm()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Alarm()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Alarm(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Alarm()))
                {
                    Construct_Alarm();
                }
                if ((*Value()).hasMember(ItemName_Alarm()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Alarm()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Alarm(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Alarm()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Alarm(void) const
        {
            bool GetValue = (*Value())[ItemName_Alarm()];
            return (bool)GetValue;
        }
        bool Get_Alarm(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Alarm()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Alarm()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CTypeTempInfo


//------------------------------------------------------------------------
// HardwareAPI::CTypeVoltageInfo
//------------------------------------------------------------------------
class CTypeVoltageInfo : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Sensor(void)
        {
            static std::string str("Sensor");
            return str;
        }
    public:
        static std::string const& ItemName_CurrentValue(void)
        {
            static std::string str("CurrentValue");
            return str;
        }
    public:
        static std::string const& ItemName_NomVal(void)
        {
            static std::string str("NomVal");
            return str;
        }
    public:
        static std::string const& ItemName_MinVal(void)
        {
            static std::string str("MinVal");
            return str;
        }
    public:
        static std::string const& ItemName_MaxVal(void)
        {
            static std::string str("MaxVal");
            return str;
        }
    public:
        static std::string const& ItemName_Active(void)
        {
            static std::string str("Active");
            return str;
        }
    public:
        static std::string const& ItemName_Broken(void)
        {
            static std::string str("Broken");
            return str;
        }
    public:
        static std::string const& ItemName_Alarm(void)
        {
            static std::string str("Alarm");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("TypeVoltageInfo");
        return str;
    }
public:
    CTypeVoltageInfo(void)
    {
        try
        {
            Construct_Sensor();
            Construct_CurrentValue();
            Construct_NomVal();
            Construct_MinVal();
            Construct_MaxVal();
            Construct_Active();
            Construct_Broken();
            Construct_Alarm();
            }
        catch (...) {}
    }
    CTypeVoltageInfo(const CTypeVoltageInfo& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        }
    CTypeVoltageInfo(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_Sensor();
            Construct_CurrentValue();
            Construct_NomVal();
            Construct_MinVal();
            Construct_MaxVal();
            Construct_Active();
            Construct_Broken();
            Construct_Alarm();
            }
        catch (...) {}
    }
public:
    ~CTypeVoltageInfo(void)
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
            Initialize_Sensor();
            Initialize_CurrentValue();
            Initialize_NomVal();
            Initialize_MinVal();
            Initialize_MaxVal();
            Initialize_Active();
            Initialize_Broken();
            Initialize_Alarm();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item Sensor (Type: "std::string")
    protected:
        void Construct_Sensor(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Sensor()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Sensor()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Sensor(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Sensor()))
                {
                    Construct_Sensor();
                }
                if ((*Value()).hasMember(ItemName_Sensor()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Sensor()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Sensor(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Sensor()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Sensor(void) const
        {
            return (*Value())[ItemName_Sensor()];
        }
        bool Get_Sensor(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Sensor()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Sensor()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item CurrentValue (Type: "double")
protected:
    void Construct_CurrentValue(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_CurrentValue()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_CurrentValue()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_CurrentValue(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_CurrentValue()))
                {
                    Construct_CurrentValue();
                }
                if ((*Value()).hasMember(ItemName_CurrentValue()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_CurrentValue()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_CurrentValue(double SetValue)
        {
            try
            {
                (*Value())[ItemName_CurrentValue()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_CurrentValue(void) const
        {
            double GetValue = (*Value())[ItemName_CurrentValue()];
            return (double)GetValue;
        }
        bool Get_CurrentValue(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_CurrentValue()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_CurrentValue()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item NomVal (Type: "double")
protected:
    void Construct_NomVal(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_NomVal()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_NomVal()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_NomVal(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_NomVal()))
                {
                    Construct_NomVal();
                }
                if ((*Value()).hasMember(ItemName_NomVal()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_NomVal()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_NomVal(double SetValue)
        {
            try
            {
                (*Value())[ItemName_NomVal()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_NomVal(void) const
        {
            double GetValue = (*Value())[ItemName_NomVal()];
            return (double)GetValue;
        }
        bool Get_NomVal(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_NomVal()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_NomVal()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item MinVal (Type: "double")
protected:
    void Construct_MinVal(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MinVal()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_MinVal()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_MinVal(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MinVal()))
                {
                    Construct_MinVal();
                }
                if ((*Value()).hasMember(ItemName_MinVal()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_MinVal()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MinVal(double SetValue)
        {
            try
            {
                (*Value())[ItemName_MinVal()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_MinVal(void) const
        {
            double GetValue = (*Value())[ItemName_MinVal()];
            return (double)GetValue;
        }
        bool Get_MinVal(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MinVal()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_MinVal()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item MaxVal (Type: "double")
protected:
    void Construct_MaxVal(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_MaxVal()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_MaxVal()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_MaxVal(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_MaxVal()))
                {
                    Construct_MaxVal();
                }
                if ((*Value()).hasMember(ItemName_MaxVal()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_MaxVal()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_MaxVal(double SetValue)
        {
            try
            {
                (*Value())[ItemName_MaxVal()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_MaxVal(void) const
        {
            double GetValue = (*Value())[ItemName_MaxVal()];
            return (double)GetValue;
        }
        bool Get_MaxVal(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_MaxVal()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_MaxVal()]));
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
// Item Broken (Type: "bool")
protected:
    void Construct_Broken(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Broken()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Broken()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Broken(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Broken()))
                {
                    Construct_Broken();
                }
                if ((*Value()).hasMember(ItemName_Broken()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Broken()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Broken(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Broken()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Broken(void) const
        {
            bool GetValue = (*Value())[ItemName_Broken()];
            return (bool)GetValue;
        }
        bool Get_Broken(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Broken()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Broken()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Alarm (Type: "bool")
protected:
    void Construct_Alarm(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Alarm()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Alarm()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Alarm(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Alarm()))
                {
                    Construct_Alarm();
                }
                if ((*Value()).hasMember(ItemName_Alarm()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Alarm()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Alarm(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Alarm()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Alarm(void) const
        {
            bool GetValue = (*Value())[ItemName_Alarm()];
            return (bool)GetValue;
        }
        bool Get_Alarm(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Alarm()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Alarm()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CTypeVoltageInfo


//------------------------------------------------------------------------
// HardwareAPI::I2CRead::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_I2CREAD)
namespace I2CRead
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Address(void)
    {
        static std::string str("Address");
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
        static std::string str("HardwareAPI.I2CRead");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Address();
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
            Construct_Address();
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
            Initialize_Address();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::I2CRead");
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
// Item Address (Type: "int32_t")
protected:
    void Construct_Address(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Address()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Address()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Address(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Address()))
                {
                    Construct_Address();
                }
                if ((*Value()).hasMember(ItemName_Address()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Address()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Address(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Address()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Address(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Address()];
            return (int32_t)GetValue;
        }
        bool Get_Address(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Address()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Address()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace I2CRead
#endif //#if defined(IMPLEMENT_HARDWAREAPI_I2CREAD)


//------------------------------------------------------------------------
// HardwareAPI::I2CWrite::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_I2CWRITE)
namespace I2CWrite
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Address(void)
    {
        static std::string str("Address");
        return str;
    }
public:
    static std::string const& ItemName_bData(void)
    {
        static std::string str("bData");
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
        static std::string str("HardwareAPI.I2CWrite");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Address();
            Construct_bData();
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
            Construct_Address();
            Construct_bData();
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
            Initialize_Address();
            Initialize_bData();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::I2CWrite");
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
// Item Address (Type: "int32_t")
protected:
    void Construct_Address(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Address()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Address()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Address(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Address()))
                {
                    Construct_Address();
                }
                if ((*Value()).hasMember(ItemName_Address()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Address()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Address(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Address()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Address(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Address()];
            return (int32_t)GetValue;
        }
        bool Get_Address(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Address()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Address()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item bData (Type: "int32_t")
protected:
    void Construct_bData(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_bData()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_bData()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_bData(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_bData()))
                {
                    Construct_bData();
                }
                if ((*Value()).hasMember(ItemName_bData()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_bData()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_bData(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_bData()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_bData(void) const
        {
            int32_t GetValue = (*Value())[ItemName_bData()];
            return (int32_t)GetValue;
        }
        bool Get_bData(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_bData()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_bData()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace I2CWrite
#endif //#if defined(IMPLEMENT_HARDWAREAPI_I2CWRITE)


//------------------------------------------------------------------------
// HardwareAPI::I2CScan::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_I2CSCAN)
namespace I2CScan
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_StartAddress(void)
    {
        static std::string str("StartAddress");
        return str;
    }
public:
    static std::string const& ItemName_EndAddress(void)
    {
        static std::string str("EndAddress");
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
        static std::string str("HardwareAPI.I2CScan");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_StartAddress();
            Construct_EndAddress();
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
            Construct_StartAddress();
            Construct_EndAddress();
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
            Initialize_StartAddress();
            Initialize_EndAddress();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::I2CScan");
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
// Item StartAddress (Type: "int32_t")
protected:
    void Construct_StartAddress(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_StartAddress()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_StartAddress()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_StartAddress(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_StartAddress()))
                {
                    Construct_StartAddress();
                }
                if ((*Value()).hasMember(ItemName_StartAddress()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_StartAddress()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_StartAddress(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_StartAddress()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_StartAddress(void) const
        {
            int32_t GetValue = (*Value())[ItemName_StartAddress()];
            return (int32_t)GetValue;
        }
        bool Get_StartAddress(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_StartAddress()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_StartAddress()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item EndAddress (Type: "int32_t")
protected:
    void Construct_EndAddress(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_EndAddress()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_EndAddress()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_EndAddress(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_EndAddress()))
                {
                    Construct_EndAddress();
                }
                if ((*Value()).hasMember(ItemName_EndAddress()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_EndAddress()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_EndAddress(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_EndAddress()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_EndAddress(void) const
        {
            int32_t GetValue = (*Value())[ItemName_EndAddress()];
            return (int32_t)GetValue;
        }
        bool Get_EndAddress(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_EndAddress()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_EndAddress()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace I2CScan
#endif //#if defined(IMPLEMENT_HARDWAREAPI_I2CSCAN)


//------------------------------------------------------------------------
// HardwareAPI::SetDisplayBackLight::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_SETDISPLAYBACKLIGHT)
namespace SetDisplayBackLight
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Index(void)
    {
        static std::string str("Index");
        return str;
    }
public:
    static std::string const& ItemName_Enable(void)
    {
        static std::string str("Enable");
        return str;
    }
public:
    static std::string const& ItemName_Setting(void)
    {
        static std::string str("Setting");
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
        static std::string str("HardwareAPI.SetDisplayBackLight");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Index();
            Construct_Enable();
            Construct_Setting();
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
            Construct_Index();
            Construct_Enable();
            Construct_Setting();
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
            Initialize_Index();
            Initialize_Enable();
            Initialize_Setting();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::SetDisplayBackLight");
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
// Item Enable (Type: "int32_t")
protected:
    void Construct_Enable(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Enable()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Enable()] = (int32_t)InitValue;
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
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Enable()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Enable(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Enable()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Enable(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Enable()];
            return (int32_t)GetValue;
        }
        bool Get_Enable(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Enable()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Enable()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Setting (Type: "int32_t")
protected:
    void Construct_Setting(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Setting()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Setting()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Setting(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Setting()))
                {
                    Construct_Setting();
                }
                if ((*Value()).hasMember(ItemName_Setting()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Setting()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Setting(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Setting()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Setting(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Setting()];
            return (int32_t)GetValue;
        }
        bool Get_Setting(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Setting()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Setting()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace SetDisplayBackLight
#endif //#if defined(IMPLEMENT_HARDWAREAPI_SETDISPLAYBACKLIGHT)


//------------------------------------------------------------------------
// HardwareAPI::FPGAGetBAR0Registers::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_FPGAGETBAR0REGISTERS)
namespace FPGAGetBAR0Registers
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_FirstReg(void)
    {
        static std::string str("FirstReg");
        return str;
    }
public:
    static std::string const& ItemName_LastReg(void)
    {
        static std::string str("LastReg");
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
        static std::string str("HardwareAPI.FPGAGetBAR0Registers");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_FirstReg();
            Construct_LastReg();
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
            Construct_FirstReg();
            Construct_LastReg();
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
            Initialize_FirstReg();
            Initialize_LastReg();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::FPGAGetBAR0Registers");
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
// Item FirstReg (Type: "int32_t")
protected:
    void Construct_FirstReg(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_FirstReg()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_FirstReg()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_FirstReg(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FirstReg()))
                {
                    Construct_FirstReg();
                }
                if ((*Value()).hasMember(ItemName_FirstReg()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_FirstReg()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FirstReg(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_FirstReg()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_FirstReg(void) const
        {
            int32_t GetValue = (*Value())[ItemName_FirstReg()];
            return (int32_t)GetValue;
        }
        bool Get_FirstReg(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FirstReg()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_FirstReg()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item LastReg (Type: "int32_t")
protected:
    void Construct_LastReg(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_LastReg()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_LastReg()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_LastReg(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LastReg()))
                {
                    Construct_LastReg();
                }
                if ((*Value()).hasMember(ItemName_LastReg()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_LastReg()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LastReg(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_LastReg()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_LastReg(void) const
        {
            int32_t GetValue = (*Value())[ItemName_LastReg()];
            return (int32_t)GetValue;
        }
        bool Get_LastReg(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LastReg()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_LastReg()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace FPGAGetBAR0Registers
#endif //#if defined(IMPLEMENT_HARDWAREAPI_FPGAGETBAR0REGISTERS)


//------------------------------------------------------------------------
// HardwareAPI::FPGASetBAR0Register::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_FPGASETBAR0REGISTER)
namespace FPGASetBAR0Register
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Offset(void)
    {
        static std::string str("Offset");
        return str;
    }
public:
    static std::string const& ItemName_ValHex(void)
    {
        static std::string str("ValHex");
        return str;
    }
public:
    static std::string const& ItemName_ValBin(void)
    {
        static std::string str("ValBin");
        return str;
    }
public:
    static std::string const& ItemName_ValDec(void)
    {
        static std::string str("ValDec");
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
        static std::string str("HardwareAPI.FPGASetBAR0Register");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Offset();
            Construct_ValHex();
            Construct_ValBin();
            Construct_ValDec();
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
            Construct_Offset();
            Construct_ValHex();
            Construct_ValBin();
            Construct_ValDec();
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
            Initialize_Offset();
            Initialize_ValHex();
            Initialize_ValBin();
            Initialize_ValDec();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::FPGASetBAR0Register");
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
// Item Offset (Type: "int32_t")
protected:
    void Construct_Offset(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Offset()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Offset()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Offset(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Offset()))
                {
                    Construct_Offset();
                }
                if ((*Value()).hasMember(ItemName_Offset()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Offset()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Offset(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Offset()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Offset(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Offset()];
            return (int32_t)GetValue;
        }
        bool Get_Offset(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Offset()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Offset()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ValHex (Type: "std::string")
    protected:
        void Construct_ValHex(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ValHex()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ValHex()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ValHex(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ValHex()))
                {
                    Construct_ValHex();
                }
                if ((*Value()).hasMember(ItemName_ValHex()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ValHex()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ValHex(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ValHex()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ValHex(void) const
        {
            return (*Value())[ItemName_ValHex()];
        }
        bool Get_ValHex(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ValHex()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ValHex()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ValBin (Type: "std::string")
    protected:
        void Construct_ValBin(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ValBin()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ValBin()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ValBin(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ValBin()))
                {
                    Construct_ValBin();
                }
                if ((*Value()).hasMember(ItemName_ValBin()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ValBin()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ValBin(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ValBin()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ValBin(void) const
        {
            return (*Value())[ItemName_ValBin()];
        }
        bool Get_ValBin(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ValBin()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ValBin()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item ValDec (Type: "int64_t")
protected:
    void Construct_ValDec(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ValDec()))
            {
                int64_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_ValDec()] = (int64_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ValDec(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ValDec()))
                {
                    Construct_ValDec();
                }
                if ((*Value()).hasMember(ItemName_ValDec()))
                {
                    int64_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_ValDec()] = (int64_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ValDec(int64_t SetValue)
        {
            try
            {
                (*Value())[ItemName_ValDec()] = (int64_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int64_t Get_ValDec(void) const
        {
            int64_t GetValue = (*Value())[ItemName_ValDec()];
            return (int64_t)GetValue;
        }
        bool Get_ValDec(int64_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ValDec()]).valid())
                {
                    GetValue = (int64_t)((int64_t)((*Value())[ItemName_ValDec()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace FPGASetBAR0Register
#endif //#if defined(IMPLEMENT_HARDWAREAPI_FPGASETBAR0REGISTER)


//------------------------------------------------------------------------
// HardwareAPI::FPGAGetBAR1Registers::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_FPGAGETBAR1REGISTERS)
namespace FPGAGetBAR1Registers
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Offset(void)
    {
        static std::string str("Offset");
        return str;
    }
public:
    static std::string const& ItemName_Length(void)
    {
        static std::string str("Length");
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
        static std::string str("HardwareAPI.FPGAGetBAR1Registers");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Offset();
            Construct_Length();
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
            Construct_Offset();
            Construct_Length();
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
            Initialize_Offset();
            Initialize_Length();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::FPGAGetBAR1Registers");
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
// Item Offset (Type: "int32_t")
protected:
    void Construct_Offset(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Offset()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Offset()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Offset(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Offset()))
                {
                    Construct_Offset();
                }
                if ((*Value()).hasMember(ItemName_Offset()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Offset()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Offset(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Offset()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Offset(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Offset()];
            return (int32_t)GetValue;
        }
        bool Get_Offset(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Offset()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Offset()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Length (Type: "int32_t")
protected:
    void Construct_Length(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Length()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Length()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Length(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Length()))
                {
                    Construct_Length();
                }
                if ((*Value()).hasMember(ItemName_Length()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Length()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Length(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Length()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Length(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Length()];
            return (int32_t)GetValue;
        }
        bool Get_Length(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Length()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Length()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace FPGAGetBAR1Registers
#endif //#if defined(IMPLEMENT_HARDWAREAPI_FPGAGETBAR1REGISTERS)


//------------------------------------------------------------------------
// HardwareAPI::SetDigitalOutputConfig::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_SETDIGITALOUTPUTCONFIG)
namespace SetDigitalOutputConfig
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Index(void)
    {
        static std::string str("Index");
        return str;
    }
public:
    static std::string const& ItemName_PortConfig(void)
    {
        static std::string str("PortConfig");
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
        static std::string str("HardwareAPI.SetDigitalOutputConfig");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Index();
            Construct_PortConfig();
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
            Construct_Index();
            Construct_PortConfig();
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
            Initialize_Index();
            Initialize_PortConfig();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::SetDigitalOutputConfig");
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
    // Item PortConfig (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_PortConfig(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PortConfig()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_PortConfig()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_PortConfig(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PortConfig()))
                {
                    Construct_PortConfig();
                }
                if ((*Value()).hasMember(ItemName_PortConfig()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_PortConfig()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_PortConfig(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_PortConfig()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_PortConfig(void) const
        {
            return (*Value())[ItemName_PortConfig()];
        }
        bool Get_PortConfig(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_PortConfig()]).valid())
                {
                    GetValue = (*Value())[ItemName_PortConfig()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace SetDigitalOutputConfig
#endif //#if defined(IMPLEMENT_HARDWAREAPI_SETDIGITALOUTPUTCONFIG)


//------------------------------------------------------------------------
// HardwareAPI::SetDigitalInputConfig::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_SETDIGITALINPUTCONFIG)
namespace SetDigitalInputConfig
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Index(void)
    {
        static std::string str("Index");
        return str;
    }
public:
    static std::string const& ItemName_PortConfig(void)
    {
        static std::string str("PortConfig");
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
        static std::string str("HardwareAPI.SetDigitalInputConfig");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Index();
            Construct_PortConfig();
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
            Construct_Index();
            Construct_PortConfig();
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
            Initialize_Index();
            Initialize_PortConfig();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::SetDigitalInputConfig");
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
    // Item PortConfig (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_PortConfig(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PortConfig()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_PortConfig()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_PortConfig(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PortConfig()))
                {
                    Construct_PortConfig();
                }
                if ((*Value()).hasMember(ItemName_PortConfig()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_PortConfig()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_PortConfig(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_PortConfig()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_PortConfig(void) const
        {
            return (*Value())[ItemName_PortConfig()];
        }
        bool Get_PortConfig(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_PortConfig()]).valid())
                {
                    GetValue = (*Value())[ItemName_PortConfig()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace SetDigitalInputConfig
#endif //#if defined(IMPLEMENT_HARDWAREAPI_SETDIGITALINPUTCONFIG)


//------------------------------------------------------------------------
// HardwareAPI::GetDigitalInputState::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_GETDIGITALINPUTSTATE)
namespace GetDigitalInputState
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Index(void)
    {
        static std::string str("Index");
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
        static std::string str("HardwareAPI.GetDigitalInputState");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Index();
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
            Construct_Index();
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
            Initialize_Index();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::GetDigitalInputState");
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
}; // class CParams
} // namespace GetDigitalInputState
#endif //#if defined(IMPLEMENT_HARDWAREAPI_GETDIGITALINPUTSTATE)


//------------------------------------------------------------------------
// HardwareAPI::GetDigitalOutputControlState::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_GETDIGITALOUTPUTCONTROLSTATE)
namespace GetDigitalOutputControlState
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Index(void)
    {
        static std::string str("Index");
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
        static std::string str("HardwareAPI.GetDigitalOutputControlState");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Index();
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
            Construct_Index();
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
            Initialize_Index();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::GetDigitalOutputControlState");
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
}; // class CParams
} // namespace GetDigitalOutputControlState
#endif //#if defined(IMPLEMENT_HARDWAREAPI_GETDIGITALOUTPUTCONTROLSTATE)


//------------------------------------------------------------------------
// HardwareAPI::SetDigitalOutputControlState::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_SETDIGITALOUTPUTCONTROLSTATE)
namespace SetDigitalOutputControlState
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Index(void)
    {
        static std::string str("Index");
        return str;
    }
public:
    static std::string const& ItemName_Enabled(void)
    {
        static std::string str("Enabled");
        return str;
    }
public:
    static std::string const& ItemName_State(void)
    {
        static std::string str("State");
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
        static std::string str("HardwareAPI.SetDigitalOutputControlState");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Index();
            Construct_Enabled();
            Construct_State();
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
            Construct_Index();
            Construct_Enabled();
            Construct_State();
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
            Initialize_Index();
            Initialize_Enabled();
            Initialize_State();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::SetDigitalOutputControlState");
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
// Item Enabled (Type: "int32_t")
protected:
    void Construct_Enabled(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Enabled()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Enabled()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Enabled(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Enabled()))
                {
                    Construct_Enabled();
                }
                if ((*Value()).hasMember(ItemName_Enabled()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Enabled()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Enabled(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Enabled()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Enabled(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Enabled()];
            return (int32_t)GetValue;
        }
        bool Get_Enabled(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Enabled()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Enabled()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item State (Type: "bool")
protected:
    void Construct_State(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_State()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_State()] = (bool)InitValue;
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
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_State()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_State(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_State()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_State(void) const
        {
            bool GetValue = (*Value())[ItemName_State()];
            return (bool)GetValue;
        }
        bool Get_State(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_State()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_State()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace SetDigitalOutputControlState
#endif //#if defined(IMPLEMENT_HARDWAREAPI_SETDIGITALOUTPUTCONTROLSTATE)


//------------------------------------------------------------------------
// HardwareAPI::I2CRead::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_I2CREAD)
namespace I2CRead
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_bData(void)
    {
        static std::string str("bData");
        return str;
    }
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
        static std::string str("HardwareAPI.I2CRead");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_bData();
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
            Construct_bData();
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
            Initialize_bData();
            Initialize_GInsRet();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::I2CRead");
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
// Item bData (Type: "int32_t")
protected:
    void Construct_bData(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_bData()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_bData()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_bData(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_bData()))
                {
                    Construct_bData();
                }
                if ((*Value()).hasMember(ItemName_bData()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_bData()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_bData(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_bData()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_bData(void) const
        {
            int32_t GetValue = (*Value())[ItemName_bData()];
            return (int32_t)GetValue;
        }
        bool Get_bData(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_bData()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_bData()]));
                    return true;
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
}; // class CResults
} // namespace I2CRead
#endif //#if defined(IMPLEMENT_HARDWAREAPI_I2CREAD)


//------------------------------------------------------------------------
// HardwareAPI::I2CWrite::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_I2CWRITE)
namespace I2CWrite
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
        static std::string str("HardwareAPI.I2CWrite");
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
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::I2CWrite");
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
} // namespace I2CWrite
#endif //#if defined(IMPLEMENT_HARDWAREAPI_I2CWRITE)


//------------------------------------------------------------------------
// HardwareAPI::I2CScan::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_I2CSCAN)
namespace I2CScan
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_DeviceList(void)
    {
        static std::string str("DeviceList");
        return str;
    }
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
        static std::string str("HardwareAPI.I2CScan");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_DeviceList();
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
            Construct_DeviceList();
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
            Initialize_DeviceList();
            Initialize_GInsRet();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::I2CScan");
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
// Item DeviceList (Type: "int32_t[0]")
    protected:
        void Construct_DeviceList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceList()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_DeviceList()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_DeviceList(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DeviceList()))
                {
                    Construct_DeviceList();
                }
                if ((*Value()).hasMember(ItemName_DeviceList()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_DeviceList()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_DeviceList(int NewSize)
        {
            try
            {
                int32_t InitValue;
                InitValue = 0;
                (*Value())[ItemName_DeviceList()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch(...) {}
            return false;
        }
        int GetSize_DeviceList(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DeviceList()))
                {
                    return (*Value())[ItemName_DeviceList()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_DeviceList(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DeviceList()))
                {
                    (*Value())[ItemName_DeviceList()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_DeviceList(int ArrayIndex, int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_DeviceList()].insertArrayValue(ArrayIndex,(int32_t)SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_DeviceList(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DeviceList()))
                {
                    (*Value())[ItemName_DeviceList()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DeviceList(int ArrayIndex, int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_DeviceList()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_DeviceList()][ArrayIndex] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Set_DeviceList(const std::vector<int32_t>& SetValue)
        {
            try
            {
                SetSize_DeviceList((int)SetValue.size());
                for (int ArrayIndex = 0; ArrayIndex < (int)SetValue.size(); ArrayIndex++)
                {
                    (*Value())[ItemName_DeviceList()][ArrayIndex] = (int32_t)SetValue[ArrayIndex];
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_DeviceList(int ArrayIndex) const
        {
            int32_t GetValue = (*Value())[ItemName_DeviceList()][ArrayIndex];
            return (int32_t)GetValue;
        }
        bool Get_DeviceList(int ArrayIndex, int32_t& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_DeviceList()))
                {
                    if (((*Value())[ItemName_DeviceList()][ArrayIndex]).valid())
                    {
                        GetValue = (int32_t)((int32_t)((*Value())[ItemName_DeviceList()][ArrayIndex]));
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
}; // class CResults
} // namespace I2CScan
#endif //#if defined(IMPLEMENT_HARDWAREAPI_I2CSCAN)


//------------------------------------------------------------------------
// HardwareAPI::GetCPUInfo::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_GETCPUINFO)
namespace GetCPUInfo
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Board(void)
    {
        static std::string str("Board");
        return str;
    }
public:
    static std::string const& ItemName_BoardSub(void)
    {
        static std::string str("BoardSub");
        return str;
    }
public:
    static std::string const& ItemName_BoardName(void)
    {
        static std::string str("BoardName");
        return str;
    }
public:
    static std::string const& ItemName_Manufacturer(void)
    {
        static std::string str("Manufacturer");
        return str;
    }
public:
    static std::string const& ItemName_ManufacturingDate(void)
    {
        static std::string str("ManufacturingDate");
        return str;
    }
public:
    static std::string const& ItemName_LastRepairDate(void)
    {
        static std::string str("LastRepairDate");
        return str;
    }
public:
    static std::string const& ItemName_SerialNumber(void)
    {
        static std::string str("SerialNumber");
        return str;
    }
public:
    static std::string const& ItemName_ProductRevision(void)
    {
        static std::string str("ProductRevision");
        return str;
    }
public:
    static std::string const& ItemName_SystemBiosRevision(void)
    {
        static std::string str("SystemBiosRevision");
        return str;
    }
public:
    static std::string const& ItemName_BiosInterfaceRevision(void)
    {
        static std::string str("BiosInterfaceRevision");
        return str;
    }
public:
    static std::string const& ItemName_BiosInterfaceBuildRevision(void)
    {
        static std::string str("BiosInterfaceBuildRevision");
        return str;
    }
public:
    static std::string const& ItemName_PartNumber(void)
    {
        static std::string str("PartNumber");
        return str;
    }
public:
    static std::string const& ItemName_EAN(void)
    {
        static std::string str("EAN");
        return str;
    }
public:
    static std::string const& ItemName_Classes(void)
    {
        static std::string str("Classes");
        return str;
    }
public:
    static std::string const& ItemName_PrimaryClass(void)
    {
        static std::string str("PrimaryClass");
        return str;
    }
public:
    static std::string const& ItemName_RepairCounter(void)
    {
        static std::string str("RepairCounter");
        return str;
    }
public:
    static std::string const& ItemName_ManufacturerCode(void)
    {
        static std::string str("ManufacturerCode");
        return str;
    }
public:
    static std::string const& ItemName_RunningTime(void)
    {
        static std::string str("RunningTime");
        return str;
    }
public:
    static std::string const& ItemName_BootCount(void)
    {
        static std::string str("BootCount");
        return str;
    }
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
        static std::string str("HardwareAPI.GetCPUInfo");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Board();
            Construct_BoardSub();
            Construct_BoardName();
            Construct_Manufacturer();
            Construct_ManufacturingDate();
            Construct_LastRepairDate();
            Construct_SerialNumber();
            Construct_ProductRevision();
            Construct_SystemBiosRevision();
            Construct_BiosInterfaceRevision();
            Construct_BiosInterfaceBuildRevision();
            Construct_PartNumber();
            Construct_EAN();
            Construct_Classes();
            Construct_PrimaryClass();
            Construct_RepairCounter();
            Construct_ManufacturerCode();
            Construct_RunningTime();
            Construct_BootCount();
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
            Construct_Board();
            Construct_BoardSub();
            Construct_BoardName();
            Construct_Manufacturer();
            Construct_ManufacturingDate();
            Construct_LastRepairDate();
            Construct_SerialNumber();
            Construct_ProductRevision();
            Construct_SystemBiosRevision();
            Construct_BiosInterfaceRevision();
            Construct_BiosInterfaceBuildRevision();
            Construct_PartNumber();
            Construct_EAN();
            Construct_Classes();
            Construct_PrimaryClass();
            Construct_RepairCounter();
            Construct_ManufacturerCode();
            Construct_RunningTime();
            Construct_BootCount();
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
            Initialize_Board();
            Initialize_BoardSub();
            Initialize_BoardName();
            Initialize_Manufacturer();
            Initialize_ManufacturingDate();
            Initialize_LastRepairDate();
            Initialize_SerialNumber();
            Initialize_ProductRevision();
            Initialize_SystemBiosRevision();
            Initialize_BiosInterfaceRevision();
            Initialize_BiosInterfaceBuildRevision();
            Initialize_PartNumber();
            Initialize_EAN();
            Initialize_Classes();
            Initialize_PrimaryClass();
            Initialize_RepairCounter();
            Initialize_ManufacturerCode();
            Initialize_RunningTime();
            Initialize_BootCount();
            Initialize_GInsRet();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::GetCPUInfo");
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
    // Item Board (Type: "std::string")
    protected:
        void Construct_Board(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Board()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Board()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Board(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Board()))
                {
                    Construct_Board();
                }
                if ((*Value()).hasMember(ItemName_Board()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Board()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Board(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Board()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Board(void) const
        {
            return (*Value())[ItemName_Board()];
        }
        bool Get_Board(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Board()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Board()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item BoardSub (Type: "std::string")
    protected:
        void Construct_BoardSub(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_BoardSub()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_BoardSub()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_BoardSub(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_BoardSub()))
                {
                    Construct_BoardSub();
                }
                if ((*Value()).hasMember(ItemName_BoardSub()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_BoardSub()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_BoardSub(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_BoardSub()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_BoardSub(void) const
        {
            return (*Value())[ItemName_BoardSub()];
        }
        bool Get_BoardSub(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_BoardSub()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_BoardSub()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item BoardName (Type: "std::string")
    protected:
        void Construct_BoardName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_BoardName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_BoardName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_BoardName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_BoardName()))
                {
                    Construct_BoardName();
                }
                if ((*Value()).hasMember(ItemName_BoardName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_BoardName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_BoardName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_BoardName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_BoardName(void) const
        {
            return (*Value())[ItemName_BoardName()];
        }
        bool Get_BoardName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_BoardName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_BoardName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Manufacturer (Type: "std::string")
    protected:
        void Construct_Manufacturer(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Manufacturer()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Manufacturer()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Manufacturer(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Manufacturer()))
                {
                    Construct_Manufacturer();
                }
                if ((*Value()).hasMember(ItemName_Manufacturer()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Manufacturer()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Manufacturer(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Manufacturer()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Manufacturer(void) const
        {
            return (*Value())[ItemName_Manufacturer()];
        }
        bool Get_Manufacturer(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Manufacturer()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Manufacturer()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ManufacturingDate (Type: "std::string")
    protected:
        void Construct_ManufacturingDate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ManufacturingDate()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ManufacturingDate()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ManufacturingDate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ManufacturingDate()))
                {
                    Construct_ManufacturingDate();
                }
                if ((*Value()).hasMember(ItemName_ManufacturingDate()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_ManufacturingDate()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ManufacturingDate(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_ManufacturingDate()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_ManufacturingDate(void) const
        {
            return (*Value())[ItemName_ManufacturingDate()];
        }
        bool Get_ManufacturingDate(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ManufacturingDate()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_ManufacturingDate()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item LastRepairDate (Type: "std::string")
    protected:
        void Construct_LastRepairDate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LastRepairDate()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_LastRepairDate()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_LastRepairDate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LastRepairDate()))
                {
                    Construct_LastRepairDate();
                }
                if ((*Value()).hasMember(ItemName_LastRepairDate()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_LastRepairDate()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LastRepairDate(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_LastRepairDate()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_LastRepairDate(void) const
        {
            return (*Value())[ItemName_LastRepairDate()];
        }
        bool Get_LastRepairDate(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LastRepairDate()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_LastRepairDate()]);
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
//------------------------------------------------------------------------
// Item ProductRevision (Type: "int32_t")
protected:
    void Construct_ProductRevision(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ProductRevision()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_ProductRevision()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ProductRevision(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ProductRevision()))
                {
                    Construct_ProductRevision();
                }
                if ((*Value()).hasMember(ItemName_ProductRevision()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_ProductRevision()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ProductRevision(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_ProductRevision()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_ProductRevision(void) const
        {
            int32_t GetValue = (*Value())[ItemName_ProductRevision()];
            return (int32_t)GetValue;
        }
        bool Get_ProductRevision(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ProductRevision()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_ProductRevision()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item SystemBiosRevision (Type: "int32_t")
protected:
    void Construct_SystemBiosRevision(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_SystemBiosRevision()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_SystemBiosRevision()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_SystemBiosRevision(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SystemBiosRevision()))
                {
                    Construct_SystemBiosRevision();
                }
                if ((*Value()).hasMember(ItemName_SystemBiosRevision()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_SystemBiosRevision()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SystemBiosRevision(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_SystemBiosRevision()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_SystemBiosRevision(void) const
        {
            int32_t GetValue = (*Value())[ItemName_SystemBiosRevision()];
            return (int32_t)GetValue;
        }
        bool Get_SystemBiosRevision(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SystemBiosRevision()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_SystemBiosRevision()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item BiosInterfaceRevision (Type: "int32_t")
protected:
    void Construct_BiosInterfaceRevision(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_BiosInterfaceRevision()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_BiosInterfaceRevision()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_BiosInterfaceRevision(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_BiosInterfaceRevision()))
                {
                    Construct_BiosInterfaceRevision();
                }
                if ((*Value()).hasMember(ItemName_BiosInterfaceRevision()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_BiosInterfaceRevision()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_BiosInterfaceRevision(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_BiosInterfaceRevision()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_BiosInterfaceRevision(void) const
        {
            int32_t GetValue = (*Value())[ItemName_BiosInterfaceRevision()];
            return (int32_t)GetValue;
        }
        bool Get_BiosInterfaceRevision(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_BiosInterfaceRevision()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_BiosInterfaceRevision()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item BiosInterfaceBuildRevision (Type: "int32_t")
protected:
    void Construct_BiosInterfaceBuildRevision(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_BiosInterfaceBuildRevision()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_BiosInterfaceBuildRevision()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_BiosInterfaceBuildRevision(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_BiosInterfaceBuildRevision()))
                {
                    Construct_BiosInterfaceBuildRevision();
                }
                if ((*Value()).hasMember(ItemName_BiosInterfaceBuildRevision()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_BiosInterfaceBuildRevision()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_BiosInterfaceBuildRevision(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_BiosInterfaceBuildRevision()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_BiosInterfaceBuildRevision(void) const
        {
            int32_t GetValue = (*Value())[ItemName_BiosInterfaceBuildRevision()];
            return (int32_t)GetValue;
        }
        bool Get_BiosInterfaceBuildRevision(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_BiosInterfaceBuildRevision()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_BiosInterfaceBuildRevision()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item PartNumber (Type: "std::string")
    protected:
        void Construct_PartNumber(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PartNumber()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_PartNumber()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_PartNumber(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PartNumber()))
                {
                    Construct_PartNumber();
                }
                if ((*Value()).hasMember(ItemName_PartNumber()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_PartNumber()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_PartNumber(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_PartNumber()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_PartNumber(void) const
        {
            return (*Value())[ItemName_PartNumber()];
        }
        bool Get_PartNumber(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_PartNumber()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_PartNumber()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item EAN (Type: "std::string")
    protected:
        void Construct_EAN(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_EAN()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_EAN()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_EAN(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_EAN()))
                {
                    Construct_EAN();
                }
                if ((*Value()).hasMember(ItemName_EAN()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_EAN()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_EAN(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_EAN()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_EAN(void) const
        {
            return (*Value())[ItemName_EAN()];
        }
        bool Get_EAN(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_EAN()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_EAN()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Classes (Type: "int32_t")
protected:
    void Construct_Classes(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Classes()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Classes()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Classes(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Classes()))
                {
                    Construct_Classes();
                }
                if ((*Value()).hasMember(ItemName_Classes()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Classes()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Classes(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Classes()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Classes(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Classes()];
            return (int32_t)GetValue;
        }
        bool Get_Classes(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Classes()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Classes()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item PrimaryClass (Type: "int32_t")
protected:
    void Construct_PrimaryClass(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_PrimaryClass()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_PrimaryClass()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_PrimaryClass(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PrimaryClass()))
                {
                    Construct_PrimaryClass();
                }
                if ((*Value()).hasMember(ItemName_PrimaryClass()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_PrimaryClass()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_PrimaryClass(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_PrimaryClass()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_PrimaryClass(void) const
        {
            int32_t GetValue = (*Value())[ItemName_PrimaryClass()];
            return (int32_t)GetValue;
        }
        bool Get_PrimaryClass(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_PrimaryClass()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_PrimaryClass()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item RepairCounter (Type: "int32_t")
protected:
    void Construct_RepairCounter(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_RepairCounter()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_RepairCounter()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_RepairCounter(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RepairCounter()))
                {
                    Construct_RepairCounter();
                }
                if ((*Value()).hasMember(ItemName_RepairCounter()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_RepairCounter()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RepairCounter(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_RepairCounter()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_RepairCounter(void) const
        {
            int32_t GetValue = (*Value())[ItemName_RepairCounter()];
            return (int32_t)GetValue;
        }
        bool Get_RepairCounter(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RepairCounter()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_RepairCounter()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item ManufacturerCode (Type: "int32_t")
protected:
    void Construct_ManufacturerCode(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ManufacturerCode()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_ManufacturerCode()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ManufacturerCode(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ManufacturerCode()))
                {
                    Construct_ManufacturerCode();
                }
                if ((*Value()).hasMember(ItemName_ManufacturerCode()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_ManufacturerCode()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ManufacturerCode(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_ManufacturerCode()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_ManufacturerCode(void) const
        {
            int32_t GetValue = (*Value())[ItemName_ManufacturerCode()];
            return (int32_t)GetValue;
        }
        bool Get_ManufacturerCode(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ManufacturerCode()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_ManufacturerCode()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item RunningTime (Type: "int32_t")
protected:
    void Construct_RunningTime(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_RunningTime()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_RunningTime()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_RunningTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RunningTime()))
                {
                    Construct_RunningTime();
                }
                if ((*Value()).hasMember(ItemName_RunningTime()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_RunningTime()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RunningTime(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_RunningTime()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_RunningTime(void) const
        {
            int32_t GetValue = (*Value())[ItemName_RunningTime()];
            return (int32_t)GetValue;
        }
        bool Get_RunningTime(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RunningTime()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_RunningTime()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item BootCount (Type: "int32_t")
protected:
    void Construct_BootCount(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_BootCount()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_BootCount()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_BootCount(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_BootCount()))
                {
                    Construct_BootCount();
                }
                if ((*Value()).hasMember(ItemName_BootCount()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_BootCount()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_BootCount(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_BootCount()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_BootCount(void) const
        {
            int32_t GetValue = (*Value())[ItemName_BootCount()];
            return (int32_t)GetValue;
        }
        bool Get_BootCount(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_BootCount()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_BootCount()]));
                    return true;
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
}; // class CResults
} // namespace GetCPUInfo
#endif //#if defined(IMPLEMENT_HARDWAREAPI_GETCPUINFO)


//------------------------------------------------------------------------
// HardwareAPI::SetDisplayBackLight::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_SETDISPLAYBACKLIGHT)
namespace SetDisplayBackLight
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
        static std::string str("HardwareAPI.SetDisplayBackLight");
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
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::SetDisplayBackLight");
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
} // namespace SetDisplayBackLight
#endif //#if defined(IMPLEMENT_HARDWAREAPI_SETDISPLAYBACKLIGHT)


//------------------------------------------------------------------------
// HardwareAPI::GetTempInfos::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_GETTEMPINFOS)
namespace GetTempInfos
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Temperatures(void)
    {
        static std::string str("Temperatures");
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
        static std::string str("HardwareAPI.GetTempInfos");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Temperatures();
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
            Construct_Temperatures();
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
            Initialize_Temperatures();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::GetTempInfos");
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
    // Item Temperatures (Type: "CTypeTempInfo[0]")
    protected:
        void Construct_Temperatures(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Temperatures()))
                {
                    CTypeTempInfo InitValue;
                    (*Value())[ItemName_Temperatures()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Temperatures(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Temperatures()))
                {
                    Construct_Temperatures();
                }
                if ((*Value()).hasMember(ItemName_Temperatures()))
                {
                    CTypeTempInfo InitValue;
                    (*Value())[ItemName_Temperatures()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Temperatures(int NewSize)
        {
            try
            {
                CTypeTempInfo InitValue;
                (*Value())[ItemName_Temperatures()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Temperatures(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Temperatures()))
                {
                    return (*Value())[ItemName_Temperatures()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Temperatures(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Temperatures()))
                {
                    (*Value())[ItemName_Temperatures()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Temperatures(int ArrayIndex, CTypeTempInfo SetValue)
        {
            try
            {
                (*Value())[ItemName_Temperatures()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Temperatures(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Temperatures()))
                {
                    (*Value())[ItemName_Temperatures()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Temperatures(int ArrayIndex, const CTypeTempInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_Temperatures()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Temperatures()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CTypeTempInfo Get_Temperatures(int ArrayIndex) const
        {
            return (*Value())[ItemName_Temperatures()][ArrayIndex];
        }
        bool Get_Temperatures(int ArrayIndex, CTypeTempInfo& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Temperatures()))
                {
                    if (((*Value())[ItemName_Temperatures()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Temperatures()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetTempInfos
#endif //#if defined(IMPLEMENT_HARDWAREAPI_GETTEMPINFOS)


//------------------------------------------------------------------------
// HardwareAPI::GetVoltageInfos::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_GETVOLTAGEINFOS)
namespace GetVoltageInfos
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Voltages(void)
    {
        static std::string str("Voltages");
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
        static std::string str("HardwareAPI.GetVoltageInfos");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Voltages();
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
            Construct_Voltages();
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
            Initialize_Voltages();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::GetVoltageInfos");
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
    // Item Voltages (Type: "CTypeVoltageInfo[0]")
    protected:
        void Construct_Voltages(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Voltages()))
                {
                    CTypeVoltageInfo InitValue;
                    (*Value())[ItemName_Voltages()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Voltages(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Voltages()))
                {
                    Construct_Voltages();
                }
                if ((*Value()).hasMember(ItemName_Voltages()))
                {
                    CTypeVoltageInfo InitValue;
                    (*Value())[ItemName_Voltages()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Voltages(int NewSize)
        {
            try
            {
                CTypeVoltageInfo InitValue;
                (*Value())[ItemName_Voltages()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Voltages(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Voltages()))
                {
                    return (*Value())[ItemName_Voltages()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Voltages(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Voltages()))
                {
                    (*Value())[ItemName_Voltages()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Voltages(int ArrayIndex, CTypeVoltageInfo SetValue)
        {
            try
            {
                (*Value())[ItemName_Voltages()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Voltages(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Voltages()))
                {
                    (*Value())[ItemName_Voltages()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Voltages(int ArrayIndex, const CTypeVoltageInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_Voltages()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Voltages()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CTypeVoltageInfo Get_Voltages(int ArrayIndex) const
        {
            return (*Value())[ItemName_Voltages()][ArrayIndex];
        }
        bool Get_Voltages(int ArrayIndex, CTypeVoltageInfo& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Voltages()))
                {
                    if (((*Value())[ItemName_Voltages()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Voltages()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetVoltageInfos
#endif //#if defined(IMPLEMENT_HARDWAREAPI_GETVOLTAGEINFOS)


//------------------------------------------------------------------------
// HardwareAPI::FPGAGetBAR0Registers::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_FPGAGETBAR0REGISTERS)
namespace FPGAGetBAR0Registers
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Result(void)
    {
        static std::string str("Result");
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
        static std::string str("HardwareAPI.FPGAGetBAR0Registers");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Result();
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
            Construct_Result();
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
            Initialize_Result();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::FPGAGetBAR0Registers");
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
    // Item Result (Type: "std::string")
    protected:
        void Construct_Result(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Result()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Result()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Result(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Result()))
                {
                    Construct_Result();
                }
                if ((*Value()).hasMember(ItemName_Result()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Result()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Result(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Result()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Result(void) const
        {
            return (*Value())[ItemName_Result()];
        }
        bool Get_Result(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Result()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Result()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace FPGAGetBAR0Registers
#endif //#if defined(IMPLEMENT_HARDWAREAPI_FPGAGETBAR0REGISTERS)


//------------------------------------------------------------------------
// HardwareAPI::FPGASetBAR0Register::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_FPGASETBAR0REGISTER)
namespace FPGASetBAR0Register
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_RegVal(void)
    {
        static std::string str("RegVal");
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
        static std::string str("HardwareAPI.FPGASetBAR0Register");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_RegVal();
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
            Construct_RegVal();
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
            Initialize_RegVal();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::FPGASetBAR0Register");
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
    // Item RegVal (Type: "std::string")
    protected:
        void Construct_RegVal(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RegVal()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RegVal()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_RegVal(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_RegVal()))
                {
                    Construct_RegVal();
                }
                if ((*Value()).hasMember(ItemName_RegVal()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_RegVal()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_RegVal(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_RegVal()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_RegVal(void) const
        {
            return (*Value())[ItemName_RegVal()];
        }
        bool Get_RegVal(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_RegVal()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_RegVal()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace FPGASetBAR0Register
#endif //#if defined(IMPLEMENT_HARDWAREAPI_FPGASETBAR0REGISTER)


//------------------------------------------------------------------------
// HardwareAPI::FPGAGetBAR1Registers::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_FPGAGETBAR1REGISTERS)
namespace FPGAGetBAR1Registers
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Result(void)
    {
        static std::string str("Result");
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
        static std::string str("HardwareAPI.FPGAGetBAR1Registers");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Result();
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
            Construct_Result();
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
            Initialize_Result();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::FPGAGetBAR1Registers");
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
    // Item Result (Type: "std::string")
    protected:
        void Construct_Result(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Result()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Result()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Result(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Result()))
                {
                    Construct_Result();
                }
                if ((*Value()).hasMember(ItemName_Result()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Result()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Result(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Result()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Result(void) const
        {
            return (*Value())[ItemName_Result()];
        }
        bool Get_Result(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Result()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Result()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace FPGAGetBAR1Registers
#endif //#if defined(IMPLEMENT_HARDWAREAPI_FPGAGETBAR1REGISTERS)


//------------------------------------------------------------------------
// HardwareAPI::ResetBoard::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_RESETBOARD)
namespace ResetBoard
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
        static std::string str("HardwareAPI.ResetBoard");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_GInsRet();
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
            Construct_GInsRet();
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
            Initialize_GInsRet();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::ResetBoard");
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
} // namespace ResetBoard
#endif //#if defined(IMPLEMENT_HARDWAREAPI_RESETBOARD)


//------------------------------------------------------------------------
// HardwareAPI::SetDigitalOutputConfig::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_SETDIGITALOUTPUTCONFIG)
namespace SetDigitalOutputConfig
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
        static std::string str("HardwareAPI.SetDigitalOutputConfig");
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
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::SetDigitalOutputConfig");
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
} // namespace SetDigitalOutputConfig
#endif //#if defined(IMPLEMENT_HARDWAREAPI_SETDIGITALOUTPUTCONFIG)


//------------------------------------------------------------------------
// HardwareAPI::SetDigitalInputConfig::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_SETDIGITALINPUTCONFIG)
namespace SetDigitalInputConfig
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
        static std::string str("HardwareAPI.SetDigitalInputConfig");
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
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::SetDigitalInputConfig");
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
} // namespace SetDigitalInputConfig
#endif //#if defined(IMPLEMENT_HARDWAREAPI_SETDIGITALINPUTCONFIG)


//------------------------------------------------------------------------
// HardwareAPI::GetDigitalInputState::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_GETDIGITALINPUTSTATE)
namespace GetDigitalInputState
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
    static std::string const& ItemName_State(void)
    {
        static std::string str("State");
        return str;
    }
public:
    static std::string const& ItemName_PortConfig(void)
    {
        static std::string str("PortConfig");
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
        static std::string str("HardwareAPI.GetDigitalInputState");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
            Construct_State();
            Construct_PortConfig();
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
            Construct_State();
            Construct_PortConfig();
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
            Initialize_State();
            Initialize_PortConfig();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::GetDigitalInputState");
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
// Item State (Type: "bool")
protected:
    void Construct_State(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_State()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_State()] = (bool)InitValue;
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
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_State()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_State(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_State()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_State(void) const
        {
            bool GetValue = (*Value())[ItemName_State()];
            return (bool)GetValue;
        }
        bool Get_State(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_State()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_State()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item PortConfig (Type: "GInsXmlRpcStdAPI::CGIns_Base_ElementValue")
    protected:
        void Construct_PortConfig(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PortConfig()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_PortConfig()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_PortConfig(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PortConfig()))
                {
                    Construct_PortConfig();
                }
                if ((*Value()).hasMember(ItemName_PortConfig()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_PortConfig()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_PortConfig(const GInsXmlRpcStdAPI::CGIns_Base_ElementValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_PortConfig()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Base_ElementValue Get_PortConfig(void) const
        {
            return (*Value())[ItemName_PortConfig()];
        }
        bool Get_PortConfig(GInsXmlRpcStdAPI::CGIns_Base_ElementValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_PortConfig()]).valid())
                {
                    GetValue = (*Value())[ItemName_PortConfig()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetDigitalInputState
#endif //#if defined(IMPLEMENT_HARDWAREAPI_GETDIGITALINPUTSTATE)


//------------------------------------------------------------------------
// HardwareAPI::GetDigitalOutputControlState::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_GETDIGITALOUTPUTCONTROLSTATE)
namespace GetDigitalOutputControlState
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
    static std::string const& ItemName_State(void)
    {
        static std::string str("State");
        return str;
    }
public:
    static std::string const& ItemName_PortConfig(void)
    {
        static std::string str("PortConfig");
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
        static std::string str("HardwareAPI.GetDigitalOutputControlState");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
            Construct_State();
            Construct_PortConfig();
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
            Construct_State();
            Construct_PortConfig();
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
            Initialize_State();
            Initialize_PortConfig();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::GetDigitalOutputControlState");
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
// Item State (Type: "bool")
protected:
    void Construct_State(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_State()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_State()] = (bool)InitValue;
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
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_State()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_State(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_State()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_State(void) const
        {
            bool GetValue = (*Value())[ItemName_State()];
            return (bool)GetValue;
        }
        bool Get_State(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_State()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_State()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item PortConfig (Type: "GInsXmlRpcStdAPI::CGIns_Base_ElementValue")
    protected:
        void Construct_PortConfig(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PortConfig()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_PortConfig()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_PortConfig(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PortConfig()))
                {
                    Construct_PortConfig();
                }
                if ((*Value()).hasMember(ItemName_PortConfig()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_PortConfig()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_PortConfig(const GInsXmlRpcStdAPI::CGIns_Base_ElementValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_PortConfig()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Base_ElementValue Get_PortConfig(void) const
        {
            return (*Value())[ItemName_PortConfig()];
        }
        bool Get_PortConfig(GInsXmlRpcStdAPI::CGIns_Base_ElementValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_PortConfig()]).valid())
                {
                    GetValue = (*Value())[ItemName_PortConfig()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetDigitalOutputControlState
#endif //#if defined(IMPLEMENT_HARDWAREAPI_GETDIGITALOUTPUTCONTROLSTATE)


//------------------------------------------------------------------------
// HardwareAPI::SetDigitalOutputControlState::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_HARDWAREAPI_SETDIGITALOUTPUTCONTROLSTATE)
namespace SetDigitalOutputControlState
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
        static std::string str("HardwareAPI.SetDigitalOutputControlState");
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
            (*Value())[ItemName_MethodID()] = std::string("HardwareAPI::SetDigitalOutputControlState");
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
} // namespace SetDigitalOutputControlState
#endif //#if defined(IMPLEMENT_HARDWAREAPI_SETDIGITALOUTPUTCONTROLSTATE)
//========================================================================
}; // namespace HardwareAPI
//========================================================================
#endif // #if !defined(_HARDWAREAPI_TYPES_H)

