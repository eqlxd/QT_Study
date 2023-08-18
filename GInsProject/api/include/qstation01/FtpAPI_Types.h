//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_FTPAPI_TYPES_H)
#define _FTPAPI_TYPES_H
//========================================================================
// Implemented methods
#define IMPLEMENT_FTPAPI_OPENCONNECTION
#define IMPLEMENT_FTPAPI_CLOSECONNECTION
#define IMPLEMENT_FTPAPI_GETACTUALDIRECTORY
#define IMPLEMENT_FTPAPI_CHANGEACTUALDIRECTORY
#define IMPLEMENT_FTPAPI_READFILE
#define IMPLEMENT_FTPAPI_WRITEFILE
#define IMPLEMENT_FTPAPI_DELETEFILE
#define IMPLEMENT_FTPAPI_GETSERVERSTATES
#define IMPLEMENT_FTPAPI_CLEARSERVERCLIENTS


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "FtpAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace FtpAPI {
//========================================================================
//------------------------------------------------------------------------
// FtpAPI::CAPIInfo
//------------------------------------------------------------------------
class CAPIInfo
{
public:
    static std::string const& Name(void)
    {
        static std::string str("FtpAPI");
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
// FtpAPI::CTypeFileInfo
//------------------------------------------------------------------------
class CTypeFileInfo : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Name(void)
        {
            static std::string str("Name");
            return str;
        }
    public:
        static std::string const& ItemName_IsDir(void)
        {
            static std::string str("IsDir");
            return str;
        }
    public:
        static std::string const& ItemName_Size(void)
        {
            static std::string str("Size");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("TypeFileInfo");
        return str;
    }
public:
    CTypeFileInfo(void)
    {
        try
        {
            Construct_Name();
            Construct_IsDir();
            Construct_Size();
            }
        catch (...) {}
    }
    CTypeFileInfo(const CTypeFileInfo& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        }
    CTypeFileInfo(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_IsDir();
            Construct_Size();
            }
        catch (...) {}
    }
public:
    ~CTypeFileInfo(void)
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
            Initialize_IsDir();
            Initialize_Size();
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
// Item IsDir (Type: "bool")
protected:
    void Construct_IsDir(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_IsDir()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_IsDir()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_IsDir(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IsDir()))
                {
                    Construct_IsDir();
                }
                if ((*Value()).hasMember(ItemName_IsDir()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_IsDir()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IsDir(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_IsDir()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_IsDir(void) const
        {
            bool GetValue = (*Value())[ItemName_IsDir()];
            return (bool)GetValue;
        }
        bool Get_IsDir(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IsDir()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_IsDir()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Size (Type: "double")
protected:
    void Construct_Size(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Size()))
            {
                double InitValue;
                InitValue = 0.0;
                    (*Value())[ItemName_Size()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Size(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Size()))
                {
                    Construct_Size();
                }
                if ((*Value()).hasMember(ItemName_Size()))
                {
                    double InitValue;
                    InitValue = 0.0;
                    (*Value())[ItemName_Size()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Size(double SetValue)
        {
            try
            {
                (*Value())[ItemName_Size()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_Size(void) const
        {
            double GetValue = (*Value())[ItemName_Size()];
            return (double)GetValue;
        }
        bool Get_Size(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Size()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_Size()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CTypeFileInfo


//------------------------------------------------------------------------
// FtpAPI::OpenConnection::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FTPAPI_OPENCONNECTION)
namespace OpenConnection
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_HostName(void)
    {
        static std::string str("HostName");
        return str;
    }
public:
    static std::string const& ItemName_Port(void)
    {
        static std::string str("Port");
        return str;
    }
public:
    static std::string const& ItemName_Timeout(void)
    {
        static std::string str("Timeout");
        return str;
    }
public:
    static std::string const& ItemName_UserName(void)
    {
        static std::string str("UserName");
        return str;
    }
public:
    static std::string const& ItemName_Password(void)
    {
        static std::string str("Password");
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
        static std::string str("FtpAPI.OpenConnection");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_HostName();
            Construct_Port();
            Construct_Timeout();
            Construct_UserName();
            Construct_Password();
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
            Construct_HostName();
            Construct_Port();
            Construct_Timeout();
            Construct_UserName();
            Construct_Password();
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
            Initialize_HostName();
            Initialize_Port();
            Initialize_Timeout();
            Initialize_UserName();
            Initialize_Password();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FtpAPI::OpenConnection");
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
    // Item HostName (Type: "std::string")
    protected:
        void Construct_HostName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_HostName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_HostName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_HostName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_HostName()))
                {
                    Construct_HostName();
                }
                if ((*Value()).hasMember(ItemName_HostName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_HostName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_HostName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_HostName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_HostName(void) const
        {
            return (*Value())[ItemName_HostName()];
        }
        bool Get_HostName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_HostName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_HostName()]);
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
                InitValue = 21;
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
                    InitValue = 21;
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
// Item Timeout (Type: "double")
protected:
    void Construct_Timeout(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Timeout()))
            {
                double InitValue;
                InitValue = 5;
                    (*Value())[ItemName_Timeout()] = (double)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Timeout(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Timeout()))
                {
                    Construct_Timeout();
                }
                if ((*Value()).hasMember(ItemName_Timeout()))
                {
                    double InitValue;
                    InitValue = 5;
                    (*Value())[ItemName_Timeout()] = (double)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Timeout(double SetValue)
        {
            try
            {
                (*Value())[ItemName_Timeout()] = (double)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        double Get_Timeout(void) const
        {
            double GetValue = (*Value())[ItemName_Timeout()];
            return (double)GetValue;
        }
        bool Get_Timeout(double& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Timeout()]).valid())
                {
                    GetValue = (double)((double)((*Value())[ItemName_Timeout()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item UserName (Type: "std::string")
    protected:
        void Construct_UserName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UserName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_UserName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_UserName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UserName()))
                {
                    Construct_UserName();
                }
                if ((*Value()).hasMember(ItemName_UserName()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_UserName()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_UserName(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_UserName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_UserName(void) const
        {
            return (*Value())[ItemName_UserName()];
        }
        bool Get_UserName(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_UserName()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_UserName()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Password (Type: "std::string")
    protected:
        void Construct_Password(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Password()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Password()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Password(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Password()))
                {
                    Construct_Password();
                }
                if ((*Value()).hasMember(ItemName_Password()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Password()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Password(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Password()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Password(void) const
        {
            return (*Value())[ItemName_Password()];
        }
        bool Get_Password(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Password()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Password()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace OpenConnection
#endif //#if defined(IMPLEMENT_FTPAPI_OPENCONNECTION)


//------------------------------------------------------------------------
// FtpAPI::CloseConnection::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FTPAPI_CLOSECONNECTION)
namespace CloseConnection
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
        static std::string str("FtpAPI.CloseConnection");
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
            (*Value())[ItemName_MethodID()] = std::string("FtpAPI::CloseConnection");
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
} // namespace CloseConnection
#endif //#if defined(IMPLEMENT_FTPAPI_CLOSECONNECTION)


//------------------------------------------------------------------------
// FtpAPI::ChangeActualDirectory::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FTPAPI_CHANGEACTUALDIRECTORY)
namespace ChangeActualDirectory
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Path(void)
    {
        static std::string str("Path");
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
        static std::string str("FtpAPI.ChangeActualDirectory");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Path();
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
            Construct_Path();
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
            Initialize_Path();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FtpAPI::ChangeActualDirectory");
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
    // Item Path (Type: "std::string")
    protected:
        void Construct_Path(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Path()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Path()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Path(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Path()))
                {
                    Construct_Path();
                }
                if ((*Value()).hasMember(ItemName_Path()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Path()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Path(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Path()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Path(void) const
        {
            return (*Value())[ItemName_Path()];
        }
        bool Get_Path(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Path()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Path()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace ChangeActualDirectory
#endif //#if defined(IMPLEMENT_FTPAPI_CHANGEACTUALDIRECTORY)


//------------------------------------------------------------------------
// FtpAPI::ReadFile::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FTPAPI_READFILE)
namespace ReadFile
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_SrcFile(void)
    {
        static std::string str("SrcFile");
        return str;
    }
public:
    static std::string const& ItemName_DestFilePath(void)
    {
        static std::string str("DestFilePath");
        return str;
    }
public:
    static std::string const& ItemName_Append(void)
    {
        static std::string str("Append");
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
        static std::string str("FtpAPI.ReadFile");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_SrcFile();
            Construct_DestFilePath();
            Construct_Append();
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
            Construct_SrcFile();
            Construct_DestFilePath();
            Construct_Append();
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
            Initialize_SrcFile();
            Initialize_DestFilePath();
            Initialize_Append();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FtpAPI::ReadFile");
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
    // Item SrcFile (Type: "std::string")
    protected:
        void Construct_SrcFile(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SrcFile()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SrcFile()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SrcFile(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SrcFile()))
                {
                    Construct_SrcFile();
                }
                if ((*Value()).hasMember(ItemName_SrcFile()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SrcFile()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SrcFile(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_SrcFile()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_SrcFile(void) const
        {
            return (*Value())[ItemName_SrcFile()];
        }
        bool Get_SrcFile(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SrcFile()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_SrcFile()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item DestFilePath (Type: "std::string")
    protected:
        void Construct_DestFilePath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DestFilePath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DestFilePath()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DestFilePath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DestFilePath()))
                {
                    Construct_DestFilePath();
                }
                if ((*Value()).hasMember(ItemName_DestFilePath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DestFilePath()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DestFilePath(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_DestFilePath()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DestFilePath(void) const
        {
            return (*Value())[ItemName_DestFilePath()];
        }
        bool Get_DestFilePath(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DestFilePath()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DestFilePath()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Append (Type: "bool")
protected:
    void Construct_Append(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Append()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Append()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Append(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Append()))
                {
                    Construct_Append();
                }
                if ((*Value()).hasMember(ItemName_Append()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Append()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Append(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Append()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Append(void) const
        {
            bool GetValue = (*Value())[ItemName_Append()];
            return (bool)GetValue;
        }
        bool Get_Append(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Append()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Append()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace ReadFile
#endif //#if defined(IMPLEMENT_FTPAPI_READFILE)


//------------------------------------------------------------------------
// FtpAPI::WriteFile::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FTPAPI_WRITEFILE)
namespace WriteFile
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_SrcFilePath(void)
    {
        static std::string str("SrcFilePath");
        return str;
    }
public:
    static std::string const& ItemName_DestFile(void)
    {
        static std::string str("DestFile");
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
        static std::string str("FtpAPI.WriteFile");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_SrcFilePath();
            Construct_DestFile();
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
            Construct_SrcFilePath();
            Construct_DestFile();
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
            Initialize_SrcFilePath();
            Initialize_DestFile();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FtpAPI::WriteFile");
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
    // Item SrcFilePath (Type: "std::string")
    protected:
        void Construct_SrcFilePath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SrcFilePath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SrcFilePath()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_SrcFilePath(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_SrcFilePath()))
                {
                    Construct_SrcFilePath();
                }
                if ((*Value()).hasMember(ItemName_SrcFilePath()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_SrcFilePath()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_SrcFilePath(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_SrcFilePath()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_SrcFilePath(void) const
        {
            return (*Value())[ItemName_SrcFilePath()];
        }
        bool Get_SrcFilePath(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_SrcFilePath()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_SrcFilePath()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item DestFile (Type: "std::string")
    protected:
        void Construct_DestFile(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DestFile()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DestFile()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_DestFile(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_DestFile()))
                {
                    Construct_DestFile();
                }
                if ((*Value()).hasMember(ItemName_DestFile()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_DestFile()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_DestFile(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_DestFile()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_DestFile(void) const
        {
            return (*Value())[ItemName_DestFile()];
        }
        bool Get_DestFile(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_DestFile()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_DestFile()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace WriteFile
#endif //#if defined(IMPLEMENT_FTPAPI_WRITEFILE)


//------------------------------------------------------------------------
// FtpAPI::DeleteFile::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FTPAPI_DELETEFILE)
namespace DeleteFile
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_FileName(void)
    {
        static std::string str("FileName");
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
        static std::string str("FtpAPI.DeleteFile");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_FileName();
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
            Construct_FileName();
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
            Initialize_FileName();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FtpAPI::DeleteFile");
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
}; // class CParams
} // namespace DeleteFile
#endif //#if defined(IMPLEMENT_FTPAPI_DELETEFILE)


//------------------------------------------------------------------------
// FtpAPI::OpenConnection::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FTPAPI_OPENCONNECTION)
namespace OpenConnection
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Error(void)
    {
        static std::string str("Error");
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
        static std::string str("FtpAPI.OpenConnection");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Error();
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
            Construct_Error();
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
            Initialize_Error();
            Initialize_GInsRet();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FtpAPI::OpenConnection");
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
    // Item Error (Type: "std::string")
    protected:
        void Construct_Error(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Error()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Error()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Error(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Error()))
                {
                    Construct_Error();
                }
                if ((*Value()).hasMember(ItemName_Error()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Error()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Error(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Error()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Error(void) const
        {
            return (*Value())[ItemName_Error()];
        }
        bool Get_Error(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Error()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Error()]);
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
} // namespace OpenConnection
#endif //#if defined(IMPLEMENT_FTPAPI_OPENCONNECTION)


//------------------------------------------------------------------------
// FtpAPI::CloseConnection::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FTPAPI_CLOSECONNECTION)
namespace CloseConnection
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Error(void)
    {
        static std::string str("Error");
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
        static std::string str("FtpAPI.CloseConnection");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Error();
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
            Construct_Error();
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
            Initialize_Error();
            Initialize_GInsRet();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FtpAPI::CloseConnection");
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
    // Item Error (Type: "std::string")
    protected:
        void Construct_Error(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Error()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Error()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Error(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Error()))
                {
                    Construct_Error();
                }
                if ((*Value()).hasMember(ItemName_Error()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Error()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Error(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Error()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Error(void) const
        {
            return (*Value())[ItemName_Error()];
        }
        bool Get_Error(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Error()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Error()]);
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
} // namespace CloseConnection
#endif //#if defined(IMPLEMENT_FTPAPI_CLOSECONNECTION)


//------------------------------------------------------------------------
// FtpAPI::GetActualDirectory::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FTPAPI_GETACTUALDIRECTORY)
namespace GetActualDirectory
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_List(void)
    {
        static std::string str("List");
        return str;
    }
public:
    static std::string const& ItemName_Error(void)
    {
        static std::string str("Error");
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
        static std::string str("FtpAPI.GetActualDirectory");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_List();
            Construct_Error();
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
            Construct_List();
            Construct_Error();
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
            Initialize_List();
            Initialize_Error();
            Initialize_GInsRet();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FtpAPI::GetActualDirectory");
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
    // Item List (Type: "CTypeFileInfo[0]")
    protected:
        void Construct_List(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_List()))
                {
                    CTypeFileInfo InitValue;
                    (*Value())[ItemName_List()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_List(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_List()))
                {
                    Construct_List();
                }
                if ((*Value()).hasMember(ItemName_List()))
                {
                    CTypeFileInfo InitValue;
                    (*Value())[ItemName_List()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_List(int NewSize)
        {
            try
            {
                CTypeFileInfo InitValue;
                (*Value())[ItemName_List()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_List(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_List()))
                {
                    return (*Value())[ItemName_List()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_List(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_List()))
                {
                    (*Value())[ItemName_List()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_List(int ArrayIndex, CTypeFileInfo SetValue)
        {
            try
            {
                (*Value())[ItemName_List()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_List(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_List()))
                {
                    (*Value())[ItemName_List()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_List(int ArrayIndex, const CTypeFileInfo& SetValue)
        {
            try
            {
                (*Value())[ItemName_List()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_List()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CTypeFileInfo Get_List(int ArrayIndex) const
        {
            return (*Value())[ItemName_List()][ArrayIndex];
        }
        bool Get_List(int ArrayIndex, CTypeFileInfo& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_List()))
                {
                    if (((*Value())[ItemName_List()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_List()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Error (Type: "std::string")
    protected:
        void Construct_Error(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Error()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Error()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Error(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Error()))
                {
                    Construct_Error();
                }
                if ((*Value()).hasMember(ItemName_Error()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Error()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Error(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Error()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Error(void) const
        {
            return (*Value())[ItemName_Error()];
        }
        bool Get_Error(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Error()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Error()]);
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
} // namespace GetActualDirectory
#endif //#if defined(IMPLEMENT_FTPAPI_GETACTUALDIRECTORY)


//------------------------------------------------------------------------
// FtpAPI::ChangeActualDirectory::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FTPAPI_CHANGEACTUALDIRECTORY)
namespace ChangeActualDirectory
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Error(void)
    {
        static std::string str("Error");
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
        static std::string str("FtpAPI.ChangeActualDirectory");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Error();
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
            Construct_Error();
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
            Initialize_Error();
            Initialize_GInsRet();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FtpAPI::ChangeActualDirectory");
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
    // Item Error (Type: "std::string")
    protected:
        void Construct_Error(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Error()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Error()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Error(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Error()))
                {
                    Construct_Error();
                }
                if ((*Value()).hasMember(ItemName_Error()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Error()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Error(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Error()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Error(void) const
        {
            return (*Value())[ItemName_Error()];
        }
        bool Get_Error(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Error()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Error()]);
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
} // namespace ChangeActualDirectory
#endif //#if defined(IMPLEMENT_FTPAPI_CHANGEACTUALDIRECTORY)


//------------------------------------------------------------------------
// FtpAPI::ReadFile::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FTPAPI_READFILE)
namespace ReadFile
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Error(void)
    {
        static std::string str("Error");
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
        static std::string str("FtpAPI.ReadFile");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Error();
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
            Construct_Error();
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
            Initialize_Error();
            Initialize_GInsRet();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FtpAPI::ReadFile");
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
    // Item Error (Type: "std::string")
    protected:
        void Construct_Error(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Error()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Error()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Error(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Error()))
                {
                    Construct_Error();
                }
                if ((*Value()).hasMember(ItemName_Error()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Error()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Error(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Error()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Error(void) const
        {
            return (*Value())[ItemName_Error()];
        }
        bool Get_Error(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Error()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Error()]);
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
} // namespace ReadFile
#endif //#if defined(IMPLEMENT_FTPAPI_READFILE)


//------------------------------------------------------------------------
// FtpAPI::WriteFile::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FTPAPI_WRITEFILE)
namespace WriteFile
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Error(void)
    {
        static std::string str("Error");
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
        static std::string str("FtpAPI.WriteFile");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Error();
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
            Construct_Error();
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
            Initialize_Error();
            Initialize_GInsRet();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FtpAPI::WriteFile");
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
    // Item Error (Type: "std::string")
    protected:
        void Construct_Error(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Error()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Error()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Error(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Error()))
                {
                    Construct_Error();
                }
                if ((*Value()).hasMember(ItemName_Error()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Error()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Error(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Error()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Error(void) const
        {
            return (*Value())[ItemName_Error()];
        }
        bool Get_Error(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Error()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Error()]);
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
} // namespace WriteFile
#endif //#if defined(IMPLEMENT_FTPAPI_WRITEFILE)


//------------------------------------------------------------------------
// FtpAPI::DeleteFile::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FTPAPI_DELETEFILE)
namespace DeleteFile
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Error(void)
    {
        static std::string str("Error");
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
        static std::string str("FtpAPI.DeleteFile");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Error();
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
            Construct_Error();
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
            Initialize_Error();
            Initialize_GInsRet();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FtpAPI::DeleteFile");
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
    // Item Error (Type: "std::string")
    protected:
        void Construct_Error(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Error()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Error()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Error(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Error()))
                {
                    Construct_Error();
                }
                if ((*Value()).hasMember(ItemName_Error()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Error()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Error(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Error()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Error(void) const
        {
            return (*Value())[ItemName_Error()];
        }
        bool Get_Error(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Error()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Error()]);
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
} // namespace DeleteFile
#endif //#if defined(IMPLEMENT_FTPAPI_DELETEFILE)


//------------------------------------------------------------------------
// FtpAPI::GetServerStates::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FTPAPI_GETSERVERSTATES)
namespace GetServerStates
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ActiveClients(void)
    {
        static std::string str("ActiveClients");
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
        static std::string str("FtpAPI.GetServerStates");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ActiveClients();
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
            Construct_ActiveClients();
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
            Initialize_ActiveClients();
            Initialize_GInsRet();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FtpAPI::GetServerStates");
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
// Item ActiveClients (Type: "int32_t")
protected:
    void Construct_ActiveClients(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_ActiveClients()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_ActiveClients()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_ActiveClients(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ActiveClients()))
                {
                    Construct_ActiveClients();
                }
                if ((*Value()).hasMember(ItemName_ActiveClients()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_ActiveClients()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ActiveClients(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_ActiveClients()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_ActiveClients(void) const
        {
            int32_t GetValue = (*Value())[ItemName_ActiveClients()];
            return (int32_t)GetValue;
        }
        bool Get_ActiveClients(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ActiveClients()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_ActiveClients()]));
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
} // namespace GetServerStates
#endif //#if defined(IMPLEMENT_FTPAPI_GETSERVERSTATES)


//------------------------------------------------------------------------
// FtpAPI::ClearServerClients::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FTPAPI_CLEARSERVERCLIENTS)
namespace ClearServerClients
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
        static std::string str("FtpAPI.ClearServerClients");
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
            (*Value())[ItemName_MethodID()] = std::string("FtpAPI::ClearServerClients");
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
} // namespace ClearServerClients
#endif //#if defined(IMPLEMENT_FTPAPI_CLEARSERVERCLIENTS)
//========================================================================
}; // namespace FtpAPI
//========================================================================
#endif // #if !defined(_FTPAPI_TYPES_H)

