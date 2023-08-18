//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_FILETRANSFERAPI_TYPES_H)
#define _FILETRANSFERAPI_TYPES_H
//========================================================================
// Implemented methods
#define IMPLEMENT_FILETRANSFERAPI_READFILE
#define IMPLEMENT_FILETRANSFERAPI_WRITEFILE
#define IMPLEMENT_FILETRANSFERAPI_SETFILEATTRIBUTE
#define IMPLEMENT_FILETRANSFERAPI_REMOVEFILE
#define IMPLEMENT_FILETRANSFERAPI_GETFILESIZE
#define IMPLEMENT_FILETRANSFERAPI_LISTDIRECTORY
#define IMPLEMENT_FILETRANSFERAPI_LISTDIRECTORYASYNC
#define IMPLEMENT_FILETRANSFERAPI_GETLISTDIRECTORYASYNCRESULT


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "GInsXmlRpcFileTransferAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace GInsXmlRpc {
namespace FileTransferAPI { 
//========================================================================
//------------------------------------------------------------------------
// GInsXmlRpc::FileTransferAPI::CAPIInfo
//------------------------------------------------------------------------
class CAPIInfo
{
public:
    static std::string const& Name(void)
    {
        static std::string str("FileTransferAPI");
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
// GInsXmlRpc::FileTransferAPI::CTypeDirInfo
//------------------------------------------------------------------------
class CTypeDirInfo : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_Name(void)
        {
            static std::string str("Name");
            return str;
        }
    public:
        static std::string const& ItemName_Size(void)
        {
            static std::string str("Size");
            return str;
        }
    public:
        static std::string const& ItemName_LastModified(void)
        {
            static std::string str("LastModified");
            return str;
        }
    public:
        static std::string const& ItemName_Checksum(void)
        {
            static std::string str("Checksum");
            return str;
        }
    public:
        static std::string const& ItemName_IsFile(void)
        {
            static std::string str("IsFile");
            return str;
        }
    public:
        static std::string const& ItemName_IsDir(void)
        {
            static std::string str("IsDir");
            return str;
        }
    public:
        static std::string const& ItemName_IsLink(void)
        {
            static std::string str("IsLink");
            return str;
        }
    public:
        static std::string const& ItemName_IsHidden(void)
        {
            static std::string str("IsHidden");
            return str;
        }
    public:
        static std::string const& ItemName_IsReadable(void)
        {
            static std::string str("IsReadable");
            return str;
        }
    public:
        static std::string const& ItemName_IsWritable(void)
        {
            static std::string str("IsWritable");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("TypeDirInfo");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("3.0");
        return str;
    }
public:
    CTypeDirInfo(void)
    {
        try
        {
            Construct_Name();
            Construct_Size();
            Construct_LastModified();
            Construct_Checksum();
            Construct_IsFile();
            Construct_IsDir();
            Construct_IsLink();
            Construct_IsHidden();
            Construct_IsReadable();
            Construct_IsWritable();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CTypeDirInfo(const CTypeDirInfo& rhs) : 
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
    CTypeDirInfo(const GInsXmlRpc::XmlRpcValue& rhs) :
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
            Construct_Size();
            Construct_LastModified();
            Construct_Checksum();
            Construct_IsFile();
            Construct_IsDir();
            Construct_IsLink();
            Construct_IsHidden();
            Construct_IsReadable();
            Construct_IsWritable();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CTypeDirInfo(void)
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
            Initialize_Size();
            Initialize_LastModified();
            Initialize_Checksum();
            Initialize_IsFile();
            Initialize_IsDir();
            Initialize_IsLink();
            Initialize_IsHidden();
            Initialize_IsReadable();
            Initialize_IsWritable();
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
// Item Size (Type: "int64_t")
protected:
    void Construct_Size(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Size()))
            {
                int64_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Size()] = (int64_t)InitValue;
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
                    int64_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Size()] = (int64_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Size(int64_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Size()] = (int64_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int64_t Get_Size(void) const
        {
            int64_t GetValue = (*Value())[ItemName_Size()];
            return (int64_t)GetValue;
        }
        bool Get_Size(int64_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Size()]).valid())
                {
                    GetValue = (int64_t)((int64_t)((*Value())[ItemName_Size()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item LastModified (Type: "std::string")
    protected:
        void Construct_LastModified(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LastModified()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_LastModified()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_LastModified(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_LastModified()))
                {
                    Construct_LastModified();
                }
                if ((*Value()).hasMember(ItemName_LastModified()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_LastModified()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_LastModified(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_LastModified()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_LastModified(void) const
        {
            return (*Value())[ItemName_LastModified()];
        }
        bool Get_LastModified(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_LastModified()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_LastModified()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Checksum (Type: "std::string")
    protected:
        void Construct_Checksum(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Checksum()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Checksum()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Checksum(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Checksum()))
                {
                    Construct_Checksum();
                }
                if ((*Value()).hasMember(ItemName_Checksum()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Checksum()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Checksum(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Checksum()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Checksum(void) const
        {
            return (*Value())[ItemName_Checksum()];
        }
        bool Get_Checksum(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Checksum()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Checksum()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item IsFile (Type: "bool")
protected:
    void Construct_IsFile(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_IsFile()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_IsFile()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_IsFile(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IsFile()))
                {
                    Construct_IsFile();
                }
                if ((*Value()).hasMember(ItemName_IsFile()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_IsFile()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IsFile(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_IsFile()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_IsFile(void) const
        {
            bool GetValue = (*Value())[ItemName_IsFile()];
            return (bool)GetValue;
        }
        bool Get_IsFile(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IsFile()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_IsFile()]));
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
// Item IsLink (Type: "bool")
protected:
    void Construct_IsLink(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_IsLink()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_IsLink()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_IsLink(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IsLink()))
                {
                    Construct_IsLink();
                }
                if ((*Value()).hasMember(ItemName_IsLink()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_IsLink()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IsLink(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_IsLink()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_IsLink(void) const
        {
            bool GetValue = (*Value())[ItemName_IsLink()];
            return (bool)GetValue;
        }
        bool Get_IsLink(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IsLink()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_IsLink()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item IsHidden (Type: "bool")
protected:
    void Construct_IsHidden(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_IsHidden()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_IsHidden()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_IsHidden(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IsHidden()))
                {
                    Construct_IsHidden();
                }
                if ((*Value()).hasMember(ItemName_IsHidden()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_IsHidden()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IsHidden(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_IsHidden()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_IsHidden(void) const
        {
            bool GetValue = (*Value())[ItemName_IsHidden()];
            return (bool)GetValue;
        }
        bool Get_IsHidden(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IsHidden()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_IsHidden()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item IsReadable (Type: "bool")
protected:
    void Construct_IsReadable(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_IsReadable()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_IsReadable()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_IsReadable(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IsReadable()))
                {
                    Construct_IsReadable();
                }
                if ((*Value()).hasMember(ItemName_IsReadable()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_IsReadable()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IsReadable(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_IsReadable()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_IsReadable(void) const
        {
            bool GetValue = (*Value())[ItemName_IsReadable()];
            return (bool)GetValue;
        }
        bool Get_IsReadable(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IsReadable()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_IsReadable()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item IsWritable (Type: "bool")
protected:
    void Construct_IsWritable(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_IsWritable()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_IsWritable()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_IsWritable(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IsWritable()))
                {
                    Construct_IsWritable();
                }
                if ((*Value()).hasMember(ItemName_IsWritable()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_IsWritable()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IsWritable(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_IsWritable()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_IsWritable(void) const
        {
            bool GetValue = (*Value())[ItemName_IsWritable()];
            return (bool)GetValue;
        }
        bool Get_IsWritable(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IsWritable()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_IsWritable()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CTypeDirInfo


//------------------------------------------------------------------------
// GInsXmlRpc::FileTransferAPI::ReadFile::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FILETRANSFERAPI_READFILE)
namespace ReadFile
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
    static std::string const& ItemName_FileSymbol(void)
    {
        static std::string str("FileSymbol");
        return str;
    }
public:
    static std::string const& ItemName_Position(void)
    {
        static std::string str("Position");
        return str;
    }
public:
    static std::string const& ItemName_Count(void)
    {
        static std::string str("Count");
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
        static std::string str("FileTransferAPI.ReadFile");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_FileName();
            Construct_FileSymbol();
            Construct_Position();
            Construct_Count();
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
            Construct_FileSymbol();
            Construct_Position();
            Construct_Count();
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
            Initialize_FileSymbol();
            Initialize_Position();
            Initialize_Count();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FileTransferAPI::ReadFile");
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
    //------------------------------------------------------------------------
    // Item FileSymbol (Type: "std::string")
    protected:
        void Construct_FileSymbol(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FileSymbol()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FileSymbol()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_FileSymbol(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FileSymbol()))
                {
                    Construct_FileSymbol();
                }
                if ((*Value()).hasMember(ItemName_FileSymbol()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FileSymbol()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FileSymbol(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_FileSymbol()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_FileSymbol(void) const
        {
            return (*Value())[ItemName_FileSymbol()];
        }
        bool Get_FileSymbol(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FileSymbol()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_FileSymbol()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Position (Type: "int32_t")
protected:
    void Construct_Position(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Position()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Position()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Position(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Position()))
                {
                    Construct_Position();
                }
                if ((*Value()).hasMember(ItemName_Position()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Position()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Position(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Position()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Position(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Position()];
            return (int32_t)GetValue;
        }
        bool Get_Position(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Position()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Position()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
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
}; // class CParams
} // namespace ReadFile
#endif //#if defined(IMPLEMENT_FILETRANSFERAPI_READFILE)


//------------------------------------------------------------------------
// GInsXmlRpc::FileTransferAPI::WriteFile::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FILETRANSFERAPI_WRITEFILE)
namespace WriteFile
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
    static std::string const& ItemName_FileSymbol(void)
    {
        static std::string str("FileSymbol");
        return str;
    }
public:
    static std::string const& ItemName_Position(void)
    {
        static std::string str("Position");
        return str;
    }
public:
    static std::string const& ItemName_Data(void)
    {
        static std::string str("Data");
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
        static std::string str("FileTransferAPI.WriteFile");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_FileName();
            Construct_FileSymbol();
            Construct_Position();
            Construct_Data();
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
            Construct_FileSymbol();
            Construct_Position();
            Construct_Data();
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
            Initialize_FileSymbol();
            Initialize_Position();
            Initialize_Data();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FileTransferAPI::WriteFile");
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
    //------------------------------------------------------------------------
    // Item FileSymbol (Type: "std::string")
    protected:
        void Construct_FileSymbol(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FileSymbol()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FileSymbol()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_FileSymbol(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FileSymbol()))
                {
                    Construct_FileSymbol();
                }
                if ((*Value()).hasMember(ItemName_FileSymbol()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FileSymbol()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FileSymbol(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_FileSymbol()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_FileSymbol(void) const
        {
            return (*Value())[ItemName_FileSymbol()];
        }
        bool Get_FileSymbol(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FileSymbol()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_FileSymbol()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Position (Type: "int32_t")
protected:
    void Construct_Position(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Position()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Position()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Position(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Position()))
                {
                    Construct_Position();
                }
                if ((*Value()).hasMember(ItemName_Position()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Position()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Position(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Position()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Position(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Position()];
            return (int32_t)GetValue;
        }
        bool Get_Position(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Position()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Position()]));
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
}; // class CParams
} // namespace WriteFile
#endif //#if defined(IMPLEMENT_FILETRANSFERAPI_WRITEFILE)


//------------------------------------------------------------------------
// GInsXmlRpc::FileTransferAPI::SetFileAttribute::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FILETRANSFERAPI_SETFILEATTRIBUTE)
namespace SetFileAttribute
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
    static std::string const& ItemName_FileSymbol(void)
    {
        static std::string str("FileSymbol");
        return str;
    }
public:
    static std::string const& ItemName_Permissions(void)
    {
        static std::string str("Permissions");
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
        static std::string str("FileTransferAPI.SetFileAttribute");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_FileName();
            Construct_FileSymbol();
            Construct_Permissions();
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
            Construct_FileSymbol();
            Construct_Permissions();
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
            Initialize_FileSymbol();
            Initialize_Permissions();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FileTransferAPI::SetFileAttribute");
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
    //------------------------------------------------------------------------
    // Item FileSymbol (Type: "std::string")
    protected:
        void Construct_FileSymbol(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FileSymbol()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FileSymbol()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_FileSymbol(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FileSymbol()))
                {
                    Construct_FileSymbol();
                }
                if ((*Value()).hasMember(ItemName_FileSymbol()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FileSymbol()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FileSymbol(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_FileSymbol()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_FileSymbol(void) const
        {
            return (*Value())[ItemName_FileSymbol()];
        }
        bool Get_FileSymbol(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FileSymbol()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_FileSymbol()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item Permissions (Type: "int32_t")
protected:
    void Construct_Permissions(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Permissions()))
            {
                int32_t InitValue;
                InitValue = -1;
                    (*Value())[ItemName_Permissions()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Permissions(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Permissions()))
                {
                    Construct_Permissions();
                }
                if ((*Value()).hasMember(ItemName_Permissions()))
                {
                    int32_t InitValue;
                    InitValue = -1;
                    (*Value())[ItemName_Permissions()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Permissions(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Permissions()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Permissions(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Permissions()];
            return (int32_t)GetValue;
        }
        bool Get_Permissions(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Permissions()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Permissions()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace SetFileAttribute
#endif //#if defined(IMPLEMENT_FILETRANSFERAPI_SETFILEATTRIBUTE)


//------------------------------------------------------------------------
// GInsXmlRpc::FileTransferAPI::RemoveFile::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FILETRANSFERAPI_REMOVEFILE)
namespace RemoveFile
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
    static std::string const& ItemName_FileSymbol(void)
    {
        static std::string str("FileSymbol");
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
        static std::string str("FileTransferAPI.RemoveFile");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_FileName();
            Construct_FileSymbol();
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
            Construct_FileSymbol();
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
            Initialize_FileSymbol();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FileTransferAPI::RemoveFile");
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
    //------------------------------------------------------------------------
    // Item FileSymbol (Type: "std::string")
    protected:
        void Construct_FileSymbol(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FileSymbol()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FileSymbol()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_FileSymbol(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FileSymbol()))
                {
                    Construct_FileSymbol();
                }
                if ((*Value()).hasMember(ItemName_FileSymbol()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FileSymbol()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FileSymbol(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_FileSymbol()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_FileSymbol(void) const
        {
            return (*Value())[ItemName_FileSymbol()];
        }
        bool Get_FileSymbol(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FileSymbol()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_FileSymbol()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace RemoveFile
#endif //#if defined(IMPLEMENT_FILETRANSFERAPI_REMOVEFILE)


//------------------------------------------------------------------------
// GInsXmlRpc::FileTransferAPI::GetFileSize::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FILETRANSFERAPI_GETFILESIZE)
namespace GetFileSize
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
    static std::string const& ItemName_FileSymbol(void)
    {
        static std::string str("FileSymbol");
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
        static std::string str("FileTransferAPI.GetFileSize");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_FileName();
            Construct_FileSymbol();
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
            Construct_FileSymbol();
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
            Initialize_FileSymbol();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FileTransferAPI::GetFileSize");
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
    //------------------------------------------------------------------------
    // Item FileSymbol (Type: "std::string")
    protected:
        void Construct_FileSymbol(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FileSymbol()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FileSymbol()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_FileSymbol(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_FileSymbol()))
                {
                    Construct_FileSymbol();
                }
                if ((*Value()).hasMember(ItemName_FileSymbol()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_FileSymbol()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_FileSymbol(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_FileSymbol()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_FileSymbol(void) const
        {
            return (*Value())[ItemName_FileSymbol()];
        }
        bool Get_FileSymbol(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_FileSymbol()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_FileSymbol()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace GetFileSize
#endif //#if defined(IMPLEMENT_FILETRANSFERAPI_GETFILESIZE)


//------------------------------------------------------------------------
// GInsXmlRpc::FileTransferAPI::ListDirectory::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FILETRANSFERAPI_LISTDIRECTORY)
namespace ListDirectory
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
    static std::string const& ItemName_Filter(void)
    {
        static std::string str("Filter");
        return str;
    }
public:
    static std::string const& ItemName_WithDrivesOrRoots(void)
    {
        static std::string str("WithDrivesOrRoots");
        return str;
    }
public:
    static std::string const& ItemName_WithDirectories(void)
    {
        static std::string str("WithDirectories");
        return str;
    }
public:
    static std::string const& ItemName_WithLinks(void)
    {
        static std::string str("WithLinks");
        return str;
    }
public:
    static std::string const& ItemName_WithFiles(void)
    {
        static std::string str("WithFiles");
        return str;
    }
public:
    static std::string const& ItemName_WithChecksum(void)
    {
        static std::string str("WithChecksum");
        return str;
    }
public:
    static std::string const& ItemName_AbsoluteNames(void)
    {
        static std::string str("AbsoluteNames");
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
        static std::string str("FileTransferAPI.ListDirectory");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Path();
            Construct_Filter();
            Construct_WithDrivesOrRoots();
            Construct_WithDirectories();
            Construct_WithLinks();
            Construct_WithFiles();
            Construct_WithChecksum();
            Construct_AbsoluteNames();
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
            Construct_Filter();
            Construct_WithDrivesOrRoots();
            Construct_WithDirectories();
            Construct_WithLinks();
            Construct_WithFiles();
            Construct_WithChecksum();
            Construct_AbsoluteNames();
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
            Initialize_Filter();
            Initialize_WithDrivesOrRoots();
            Initialize_WithDirectories();
            Initialize_WithLinks();
            Initialize_WithFiles();
            Initialize_WithChecksum();
            Initialize_AbsoluteNames();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FileTransferAPI::ListDirectory");
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
    //------------------------------------------------------------------------
    // Item Filter (Type: "std::string")
    protected:
        void Construct_Filter(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Filter()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Filter()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Filter(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Filter()))
                {
                    Construct_Filter();
                }
                if ((*Value()).hasMember(ItemName_Filter()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Filter()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Filter(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Filter()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Filter(void) const
        {
            return (*Value())[ItemName_Filter()];
        }
        bool Get_Filter(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Filter()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Filter()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item WithDrivesOrRoots (Type: "bool")
protected:
    void Construct_WithDrivesOrRoots(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_WithDrivesOrRoots()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_WithDrivesOrRoots()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_WithDrivesOrRoots(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_WithDrivesOrRoots()))
                {
                    Construct_WithDrivesOrRoots();
                }
                if ((*Value()).hasMember(ItemName_WithDrivesOrRoots()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_WithDrivesOrRoots()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_WithDrivesOrRoots(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_WithDrivesOrRoots()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_WithDrivesOrRoots(void) const
        {
            bool GetValue = (*Value())[ItemName_WithDrivesOrRoots()];
            return (bool)GetValue;
        }
        bool Get_WithDrivesOrRoots(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_WithDrivesOrRoots()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_WithDrivesOrRoots()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item WithDirectories (Type: "bool")
protected:
    void Construct_WithDirectories(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_WithDirectories()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_WithDirectories()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_WithDirectories(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_WithDirectories()))
                {
                    Construct_WithDirectories();
                }
                if ((*Value()).hasMember(ItemName_WithDirectories()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_WithDirectories()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_WithDirectories(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_WithDirectories()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_WithDirectories(void) const
        {
            bool GetValue = (*Value())[ItemName_WithDirectories()];
            return (bool)GetValue;
        }
        bool Get_WithDirectories(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_WithDirectories()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_WithDirectories()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item WithLinks (Type: "bool")
protected:
    void Construct_WithLinks(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_WithLinks()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_WithLinks()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_WithLinks(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_WithLinks()))
                {
                    Construct_WithLinks();
                }
                if ((*Value()).hasMember(ItemName_WithLinks()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_WithLinks()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_WithLinks(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_WithLinks()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_WithLinks(void) const
        {
            bool GetValue = (*Value())[ItemName_WithLinks()];
            return (bool)GetValue;
        }
        bool Get_WithLinks(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_WithLinks()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_WithLinks()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item WithFiles (Type: "bool")
protected:
    void Construct_WithFiles(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_WithFiles()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_WithFiles()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_WithFiles(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_WithFiles()))
                {
                    Construct_WithFiles();
                }
                if ((*Value()).hasMember(ItemName_WithFiles()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_WithFiles()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_WithFiles(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_WithFiles()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_WithFiles(void) const
        {
            bool GetValue = (*Value())[ItemName_WithFiles()];
            return (bool)GetValue;
        }
        bool Get_WithFiles(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_WithFiles()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_WithFiles()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item WithChecksum (Type: "bool")
protected:
    void Construct_WithChecksum(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_WithChecksum()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_WithChecksum()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_WithChecksum(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_WithChecksum()))
                {
                    Construct_WithChecksum();
                }
                if ((*Value()).hasMember(ItemName_WithChecksum()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_WithChecksum()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_WithChecksum(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_WithChecksum()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_WithChecksum(void) const
        {
            bool GetValue = (*Value())[ItemName_WithChecksum()];
            return (bool)GetValue;
        }
        bool Get_WithChecksum(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_WithChecksum()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_WithChecksum()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item AbsoluteNames (Type: "bool")
protected:
    void Construct_AbsoluteNames(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_AbsoluteNames()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_AbsoluteNames()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_AbsoluteNames(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_AbsoluteNames()))
                {
                    Construct_AbsoluteNames();
                }
                if ((*Value()).hasMember(ItemName_AbsoluteNames()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_AbsoluteNames()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_AbsoluteNames(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_AbsoluteNames()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_AbsoluteNames(void) const
        {
            bool GetValue = (*Value())[ItemName_AbsoluteNames()];
            return (bool)GetValue;
        }
        bool Get_AbsoluteNames(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_AbsoluteNames()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_AbsoluteNames()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace ListDirectory
#endif //#if defined(IMPLEMENT_FILETRANSFERAPI_LISTDIRECTORY)


//------------------------------------------------------------------------
// GInsXmlRpc::FileTransferAPI::ListDirectoryAsync::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FILETRANSFERAPI_LISTDIRECTORYASYNC)
namespace ListDirectoryAsync
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
    static std::string const& ItemName_Filter(void)
    {
        static std::string str("Filter");
        return str;
    }
public:
    static std::string const& ItemName_WithDrivesOrRoots(void)
    {
        static std::string str("WithDrivesOrRoots");
        return str;
    }
public:
    static std::string const& ItemName_WithDirectories(void)
    {
        static std::string str("WithDirectories");
        return str;
    }
public:
    static std::string const& ItemName_WithLinks(void)
    {
        static std::string str("WithLinks");
        return str;
    }
public:
    static std::string const& ItemName_WithFiles(void)
    {
        static std::string str("WithFiles");
        return str;
    }
public:
    static std::string const& ItemName_WithChecksum(void)
    {
        static std::string str("WithChecksum");
        return str;
    }
public:
    static std::string const& ItemName_AbsoluteNames(void)
    {
        static std::string str("AbsoluteNames");
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
        static std::string str("FileTransferAPI.ListDirectoryAsync");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Path();
            Construct_Filter();
            Construct_WithDrivesOrRoots();
            Construct_WithDirectories();
            Construct_WithLinks();
            Construct_WithFiles();
            Construct_WithChecksum();
            Construct_AbsoluteNames();
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
            Construct_Filter();
            Construct_WithDrivesOrRoots();
            Construct_WithDirectories();
            Construct_WithLinks();
            Construct_WithFiles();
            Construct_WithChecksum();
            Construct_AbsoluteNames();
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
            Initialize_Filter();
            Initialize_WithDrivesOrRoots();
            Initialize_WithDirectories();
            Initialize_WithLinks();
            Initialize_WithFiles();
            Initialize_WithChecksum();
            Initialize_AbsoluteNames();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FileTransferAPI::ListDirectoryAsync");
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
    //------------------------------------------------------------------------
    // Item Filter (Type: "std::string")
    protected:
        void Construct_Filter(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Filter()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Filter()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Filter(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Filter()))
                {
                    Construct_Filter();
                }
                if ((*Value()).hasMember(ItemName_Filter()))
                {
                    std::string InitValue;
                    InitValue = "";
                    (*Value())[ItemName_Filter()] = (std::string)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Filter(const std::string& SetValue)
        {
            try
            {
                (*Value())[ItemName_Filter()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        std::string Get_Filter(void) const
        {
            return (*Value())[ItemName_Filter()];
        }
        bool Get_Filter(std::string& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Filter()]).valid())
                {
                    GetValue = (std::string)((*Value())[ItemName_Filter()]);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item WithDrivesOrRoots (Type: "bool")
protected:
    void Construct_WithDrivesOrRoots(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_WithDrivesOrRoots()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_WithDrivesOrRoots()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_WithDrivesOrRoots(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_WithDrivesOrRoots()))
                {
                    Construct_WithDrivesOrRoots();
                }
                if ((*Value()).hasMember(ItemName_WithDrivesOrRoots()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_WithDrivesOrRoots()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_WithDrivesOrRoots(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_WithDrivesOrRoots()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_WithDrivesOrRoots(void) const
        {
            bool GetValue = (*Value())[ItemName_WithDrivesOrRoots()];
            return (bool)GetValue;
        }
        bool Get_WithDrivesOrRoots(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_WithDrivesOrRoots()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_WithDrivesOrRoots()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item WithDirectories (Type: "bool")
protected:
    void Construct_WithDirectories(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_WithDirectories()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_WithDirectories()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_WithDirectories(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_WithDirectories()))
                {
                    Construct_WithDirectories();
                }
                if ((*Value()).hasMember(ItemName_WithDirectories()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_WithDirectories()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_WithDirectories(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_WithDirectories()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_WithDirectories(void) const
        {
            bool GetValue = (*Value())[ItemName_WithDirectories()];
            return (bool)GetValue;
        }
        bool Get_WithDirectories(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_WithDirectories()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_WithDirectories()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item WithLinks (Type: "bool")
protected:
    void Construct_WithLinks(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_WithLinks()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_WithLinks()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_WithLinks(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_WithLinks()))
                {
                    Construct_WithLinks();
                }
                if ((*Value()).hasMember(ItemName_WithLinks()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_WithLinks()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_WithLinks(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_WithLinks()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_WithLinks(void) const
        {
            bool GetValue = (*Value())[ItemName_WithLinks()];
            return (bool)GetValue;
        }
        bool Get_WithLinks(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_WithLinks()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_WithLinks()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item WithFiles (Type: "bool")
protected:
    void Construct_WithFiles(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_WithFiles()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_WithFiles()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_WithFiles(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_WithFiles()))
                {
                    Construct_WithFiles();
                }
                if ((*Value()).hasMember(ItemName_WithFiles()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_WithFiles()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_WithFiles(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_WithFiles()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_WithFiles(void) const
        {
            bool GetValue = (*Value())[ItemName_WithFiles()];
            return (bool)GetValue;
        }
        bool Get_WithFiles(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_WithFiles()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_WithFiles()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item WithChecksum (Type: "bool")
protected:
    void Construct_WithChecksum(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_WithChecksum()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_WithChecksum()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_WithChecksum(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_WithChecksum()))
                {
                    Construct_WithChecksum();
                }
                if ((*Value()).hasMember(ItemName_WithChecksum()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_WithChecksum()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_WithChecksum(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_WithChecksum()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_WithChecksum(void) const
        {
            bool GetValue = (*Value())[ItemName_WithChecksum()];
            return (bool)GetValue;
        }
        bool Get_WithChecksum(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_WithChecksum()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_WithChecksum()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item AbsoluteNames (Type: "bool")
protected:
    void Construct_AbsoluteNames(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_AbsoluteNames()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_AbsoluteNames()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_AbsoluteNames(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_AbsoluteNames()))
                {
                    Construct_AbsoluteNames();
                }
                if ((*Value()).hasMember(ItemName_AbsoluteNames()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_AbsoluteNames()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_AbsoluteNames(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_AbsoluteNames()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_AbsoluteNames(void) const
        {
            bool GetValue = (*Value())[ItemName_AbsoluteNames()];
            return (bool)GetValue;
        }
        bool Get_AbsoluteNames(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_AbsoluteNames()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_AbsoluteNames()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace ListDirectoryAsync
#endif //#if defined(IMPLEMENT_FILETRANSFERAPI_LISTDIRECTORYASYNC)


//------------------------------------------------------------------------
// GInsXmlRpc::FileTransferAPI::GetListDirectoryAsyncResult::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FILETRANSFERAPI_GETLISTDIRECTORYASYNCRESULT)
namespace GetListDirectoryAsyncResult
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
        static std::string str("FileTransferAPI.GetListDirectoryAsyncResult");
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
            (*Value())[ItemName_MethodID()] = std::string("FileTransferAPI::GetListDirectoryAsyncResult");
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
} // namespace GetListDirectoryAsyncResult
#endif //#if defined(IMPLEMENT_FILETRANSFERAPI_GETLISTDIRECTORYASYNCRESULT)


//------------------------------------------------------------------------
// GInsXmlRpc::FileTransferAPI::ReadFile::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FILETRANSFERAPI_READFILE)
namespace ReadFile
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Data(void)
    {
        static std::string str("Data");
        return str;
    }
public:
    static std::string const& ItemName_Count(void)
    {
        static std::string str("Count");
        return str;
    }
public:
    static std::string const& ItemName_EndOfFile(void)
    {
        static std::string str("EndOfFile");
        return str;
    }
public:
    static std::string const& ItemName_GInsError(void)
    {
        static std::string str("GInsError");
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
        static std::string str("FileTransferAPI.ReadFile");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Data();
            Construct_Count();
            Construct_EndOfFile();
            Construct_GInsError();
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
            Construct_Data();
            Construct_Count();
            Construct_EndOfFile();
            Construct_GInsError();
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
            Initialize_Data();
            Initialize_Count();
            Initialize_EndOfFile();
            Initialize_GInsError();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FileTransferAPI::ReadFile");
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
// Item EndOfFile (Type: "bool")
protected:
    void Construct_EndOfFile(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_EndOfFile()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_EndOfFile()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_EndOfFile(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_EndOfFile()))
                {
                    Construct_EndOfFile();
                }
                if ((*Value()).hasMember(ItemName_EndOfFile()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_EndOfFile()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_EndOfFile(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_EndOfFile()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_EndOfFile(void) const
        {
            bool GetValue = (*Value())[ItemName_EndOfFile()];
            return (bool)GetValue;
        }
        bool Get_EndOfFile(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_EndOfFile()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_EndOfFile()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item GInsError (Type: "int32_t")
protected:
    void Construct_GInsError(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_GInsError()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_GInsError()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_GInsError(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GInsError()))
                {
                    Construct_GInsError();
                }
                if ((*Value()).hasMember(ItemName_GInsError()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_GInsError()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_GInsError(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_GInsError()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_GInsError(void) const
        {
            int32_t GetValue = (*Value())[ItemName_GInsError()];
            return (int32_t)GetValue;
        }
        bool Get_GInsError(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_GInsError()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_GInsError()]));
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
} // namespace ReadFile
#endif //#if defined(IMPLEMENT_FILETRANSFERAPI_READFILE)


//------------------------------------------------------------------------
// GInsXmlRpc::FileTransferAPI::WriteFile::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FILETRANSFERAPI_WRITEFILE)
namespace WriteFile
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_GInsError(void)
    {
        static std::string str("GInsError");
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
        static std::string str("FileTransferAPI.WriteFile");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_GInsError();
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
            Construct_GInsError();
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
            Initialize_GInsError();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FileTransferAPI::WriteFile");
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
// Item GInsError (Type: "int32_t")
protected:
    void Construct_GInsError(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_GInsError()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_GInsError()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_GInsError(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GInsError()))
                {
                    Construct_GInsError();
                }
                if ((*Value()).hasMember(ItemName_GInsError()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_GInsError()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_GInsError(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_GInsError()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_GInsError(void) const
        {
            int32_t GetValue = (*Value())[ItemName_GInsError()];
            return (int32_t)GetValue;
        }
        bool Get_GInsError(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_GInsError()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_GInsError()]));
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
} // namespace WriteFile
#endif //#if defined(IMPLEMENT_FILETRANSFERAPI_WRITEFILE)


//------------------------------------------------------------------------
// GInsXmlRpc::FileTransferAPI::SetFileAttribute::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FILETRANSFERAPI_SETFILEATTRIBUTE)
namespace SetFileAttribute
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_GInsError(void)
    {
        static std::string str("GInsError");
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
        static std::string str("FileTransferAPI.SetFileAttribute");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_GInsError();
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
            Construct_GInsError();
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
            Initialize_GInsError();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FileTransferAPI::SetFileAttribute");
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
// Item GInsError (Type: "int32_t")
protected:
    void Construct_GInsError(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_GInsError()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_GInsError()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_GInsError(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GInsError()))
                {
                    Construct_GInsError();
                }
                if ((*Value()).hasMember(ItemName_GInsError()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_GInsError()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_GInsError(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_GInsError()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_GInsError(void) const
        {
            int32_t GetValue = (*Value())[ItemName_GInsError()];
            return (int32_t)GetValue;
        }
        bool Get_GInsError(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_GInsError()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_GInsError()]));
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
} // namespace SetFileAttribute
#endif //#if defined(IMPLEMENT_FILETRANSFERAPI_SETFILEATTRIBUTE)


//------------------------------------------------------------------------
// GInsXmlRpc::FileTransferAPI::RemoveFile::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FILETRANSFERAPI_REMOVEFILE)
namespace RemoveFile
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_GInsError(void)
    {
        static std::string str("GInsError");
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
        static std::string str("FileTransferAPI.RemoveFile");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_GInsError();
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
            Construct_GInsError();
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
            Initialize_GInsError();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FileTransferAPI::RemoveFile");
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
// Item GInsError (Type: "int32_t")
protected:
    void Construct_GInsError(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_GInsError()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_GInsError()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_GInsError(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GInsError()))
                {
                    Construct_GInsError();
                }
                if ((*Value()).hasMember(ItemName_GInsError()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_GInsError()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_GInsError(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_GInsError()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_GInsError(void) const
        {
            int32_t GetValue = (*Value())[ItemName_GInsError()];
            return (int32_t)GetValue;
        }
        bool Get_GInsError(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_GInsError()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_GInsError()]));
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
} // namespace RemoveFile
#endif //#if defined(IMPLEMENT_FILETRANSFERAPI_REMOVEFILE)


//------------------------------------------------------------------------
// GInsXmlRpc::FileTransferAPI::GetFileSize::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FILETRANSFERAPI_GETFILESIZE)
namespace GetFileSize
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Size(void)
    {
        static std::string str("Size");
        return str;
    }
public:
    static std::string const& ItemName_GInsError(void)
    {
        static std::string str("GInsError");
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
        static std::string str("FileTransferAPI.GetFileSize");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Size();
            Construct_GInsError();
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
            Construct_Size();
            Construct_GInsError();
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
            Initialize_Size();
            Initialize_GInsError();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FileTransferAPI::GetFileSize");
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
// Item Size (Type: "int32_t")
protected:
    void Construct_Size(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Size()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_Size()] = (int32_t)InitValue;
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
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_Size()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Size(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_Size()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_Size(void) const
        {
            int32_t GetValue = (*Value())[ItemName_Size()];
            return (int32_t)GetValue;
        }
        bool Get_Size(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Size()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_Size()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item GInsError (Type: "int32_t")
protected:
    void Construct_GInsError(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_GInsError()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_GInsError()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_GInsError(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GInsError()))
                {
                    Construct_GInsError();
                }
                if ((*Value()).hasMember(ItemName_GInsError()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_GInsError()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_GInsError(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_GInsError()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_GInsError(void) const
        {
            int32_t GetValue = (*Value())[ItemName_GInsError()];
            return (int32_t)GetValue;
        }
        bool Get_GInsError(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_GInsError()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_GInsError()]));
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
} // namespace GetFileSize
#endif //#if defined(IMPLEMENT_FILETRANSFERAPI_GETFILESIZE)


//------------------------------------------------------------------------
// GInsXmlRpc::FileTransferAPI::ListDirectory::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FILETRANSFERAPI_LISTDIRECTORY)
namespace ListDirectory
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
    static std::string const& ItemName_GInsError(void)
    {
        static std::string str("GInsError");
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
        static std::string str("FileTransferAPI.ListDirectory");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_List();
            Construct_GInsError();
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
            Construct_List();
            Construct_GInsError();
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
            Initialize_List();
            Initialize_GInsError();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FileTransferAPI::ListDirectory");
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
    // Item List (Type: "CTypeDirInfo[0]")
    protected:
        void Construct_List(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_List()))
                {
                    CTypeDirInfo InitValue;
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
                    CTypeDirInfo InitValue;
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
                CTypeDirInfo InitValue;
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
        bool Insert_List(int ArrayIndex, CTypeDirInfo SetValue)
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
        bool Set_List(int ArrayIndex, const CTypeDirInfo& SetValue)
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
        CTypeDirInfo Get_List(int ArrayIndex) const
        {
            return (*Value())[ItemName_List()][ArrayIndex];
        }
        bool Get_List(int ArrayIndex, CTypeDirInfo& GetValue) const
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
// Item GInsError (Type: "int32_t")
protected:
    void Construct_GInsError(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_GInsError()))
            {
                int32_t InitValue;
                InitValue = 0;
                    (*Value())[ItemName_GInsError()] = (int32_t)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_GInsError(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_GInsError()))
                {
                    Construct_GInsError();
                }
                if ((*Value()).hasMember(ItemName_GInsError()))
                {
                    int32_t InitValue;
                    InitValue = 0;
                    (*Value())[ItemName_GInsError()] = (int32_t)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_GInsError(int32_t SetValue)
        {
            try
            {
                (*Value())[ItemName_GInsError()] = (int32_t)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        int32_t Get_GInsError(void) const
        {
            int32_t GetValue = (*Value())[ItemName_GInsError()];
            return (int32_t)GetValue;
        }
        bool Get_GInsError(int32_t& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_GInsError()]).valid())
                {
                    GetValue = (int32_t)((int32_t)((*Value())[ItemName_GInsError()]));
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
} // namespace ListDirectory
#endif //#if defined(IMPLEMENT_FILETRANSFERAPI_LISTDIRECTORY)


//------------------------------------------------------------------------
// GInsXmlRpc::FileTransferAPI::ListDirectoryAsync::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FILETRANSFERAPI_LISTDIRECTORYASYNC)
namespace ListDirectoryAsync
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
        static std::string str("FileTransferAPI.ListDirectoryAsync");
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
            (*Value())[ItemName_MethodID()] = std::string("FileTransferAPI::ListDirectoryAsync");
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
} // namespace ListDirectoryAsync
#endif //#if defined(IMPLEMENT_FILETRANSFERAPI_LISTDIRECTORYASYNC)


//------------------------------------------------------------------------
// GInsXmlRpc::FileTransferAPI::GetListDirectoryAsyncResult::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_FILETRANSFERAPI_GETLISTDIRECTORYASYNCRESULT)
namespace GetListDirectoryAsyncResult
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
    static std::string const& ItemName_ReturnState(void)
    {
        static std::string str("ReturnState");
        return str;
    }
public:
    static std::string const& ItemName_Finished(void)
    {
        static std::string str("Finished");
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
        static std::string str("FileTransferAPI.GetListDirectoryAsyncResult");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_List();
            Construct_ReturnState();
            Construct_Finished();
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
            Construct_ReturnState();
            Construct_Finished();
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
            Initialize_ReturnState();
            Initialize_Finished();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("FileTransferAPI::GetListDirectoryAsyncResult");
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
    // Item List (Type: "CTypeDirInfo[0]")
    protected:
        void Construct_List(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_List()))
                {
                    CTypeDirInfo InitValue;
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
                    CTypeDirInfo InitValue;
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
                CTypeDirInfo InitValue;
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
        bool Insert_List(int ArrayIndex, CTypeDirInfo SetValue)
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
        bool Set_List(int ArrayIndex, const CTypeDirInfo& SetValue)
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
        CTypeDirInfo Get_List(int ArrayIndex) const
        {
            return (*Value())[ItemName_List()][ArrayIndex];
        }
        bool Get_List(int ArrayIndex, CTypeDirInfo& GetValue) const
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
// Item Finished (Type: "bool")
protected:
    void Construct_Finished(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_Finished()))
            {
                bool InitValue;
                InitValue = false;
                    (*Value())[ItemName_Finished()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_Finished(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Finished()))
                {
                    Construct_Finished();
                }
                if ((*Value()).hasMember(ItemName_Finished()))
                {
                    bool InitValue;
                    InitValue = false;
                    (*Value())[ItemName_Finished()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Finished(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_Finished()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_Finished(void) const
        {
            bool GetValue = (*Value())[ItemName_Finished()];
            return (bool)GetValue;
        }
        bool Get_Finished(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Finished()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_Finished()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetListDirectoryAsyncResult
#endif //#if defined(IMPLEMENT_FILETRANSFERAPI_GETLISTDIRECTORYASYNCRESULT)
//========================================================================
}; // namespace GInsXmlRpc
}; // namespace FileTransferAPI
//========================================================================
#endif // #if !defined(_FILETRANSFERAPI_TYPES_H)

