#ifndef _GINSXMLRPCVARIABLE_H_
#define _GINSXMLRPCVARIABLE_H_

#include "ginsportabletrace.h"
#include "GInsXmlRpcValue.h"
#include "GInsXmlRpcServer.h"

//========================================================================
namespace GInsXmlRpc {
//========================================================================

//=============================================================================
// Debugging
#ifdef _DEBUG
static int _DEBUG_XMLRPCVARIABLE_CTOR = 0;
static int _DEBUG_XMLRPCVARIABLE_OPERATOR = 0;
static int _DEBUG_XMLRPCVARIABLE_SETVALUE = 0;
static int _DEBUG_XMLRPCVARIABLE_GETVALUE = 0;
static int _DEBUG_XMLRPCVARIABLE_GETVARHOOK = 0;
static int _DEBUG_XMLRPCVARIABLE_SETVARHOOK = 0;
#else // #ifdef _DEBUG
static int _DEBUG_XMLRPCVARIABLE_CTOR = 0;
static int _DEBUG_XMLRPCVARIABLE_OPERATOR = 0;
static int _DEBUG_XMLRPCVARIABLE_SETVALUE = 0;
static int _DEBUG_XMLRPCVARIABLE_GETVALUE = 0;
static int _DEBUG_XMLRPCVARIABLE_GETVARHOOK = 0;
static int _DEBUG_XMLRPCVARIABLE_SETVARHOOK = 0;
#endif // #ifdef _DEBUG
//=============================================================================

//=============================================================================
// XmlRpcVariable
//=============================================================================
class XmlRpcVariable : public XmlRpcValue
{
public:
    typedef bool (*PFUNC_GETVARHOOK) (XmlRpcValue& Value);
    typedef bool (*PFUNC_SETVARHOOK) (XmlRpcValue& Value);

    // CTOR()
    XmlRpcVariable(const char* name, bool remotewriteable, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(), m_Name(name), m_bRemoteWriteable(remotewriteable), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }
    XmlRpcVariable(const char* name, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(), m_Name(name), m_bRemoteWriteable(false), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }

    // CTOR(bool)
    XmlRpcVariable(const char* name, bool value, bool remotewriteable, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(value), m_Name(name), m_bRemoteWriteable(remotewriteable), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(bool): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }

    // CTOR(int)
    XmlRpcVariable(const char* name, int value, bool remotewriteable, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(value), m_Name(name), m_bRemoteWriteable(remotewriteable), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(int): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }
    XmlRpcVariable(const char* name, int value, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(value), m_Name(name), m_bRemoteWriteable(false), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(int): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }

    // CTOR(GINS_SINT64)
    XmlRpcVariable(const char* name, int64_t value, bool remotewriteable, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(value), m_Name(name), m_bRemoteWriteable(remotewriteable), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(GINS_SINT64): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }
    XmlRpcVariable(const char* name, int64_t value, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(value), m_Name(name), m_bRemoteWriteable(false), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(GINS_SINT64): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }

    // CTOR(double)
    XmlRpcVariable(const char* name, double value, bool remotewriteable, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(value), m_Name(name), m_bRemoteWriteable(remotewriteable), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(double): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }
    XmlRpcVariable(const char* name, double value, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(value), m_Name(name), m_bRemoteWriteable(false), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(double): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }

    // CTOR(std::string)
    XmlRpcVariable(const char* name, std::string const &value, bool remotewriteable, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(value), m_Name(name), m_bRemoteWriteable(remotewriteable), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(std::string): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }
    XmlRpcVariable(const char* name, std::string const &value, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(value), m_Name(name), m_bRemoteWriteable(false), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(std::string): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }

    // CTOR(char*)
    XmlRpcVariable(const char* name, const char* value, bool remotewriteable, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(value), m_Name(name), m_bRemoteWriteable(remotewriteable), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(char*): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }
    XmlRpcVariable(const char* name, const char* value, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(value), m_Name(name), m_bRemoteWriteable(false), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(char*): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }

    // CTOR(struct tm)
    XmlRpcVariable(const char* name, struct tm const& value, bool remotewriteable, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(value), m_Name(name), m_bRemoteWriteable(remotewriteable), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(struct tm): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }
    XmlRpcVariable(const char* name, struct tm const& value, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(value), m_Name(name), m_bRemoteWriteable(false), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(struct tm): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }

    // CTOR(void*)
    XmlRpcVariable(const char* name, void* value, int nBytes, bool remotewriteable, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(value, nBytes), m_Name(name), m_bRemoteWriteable(remotewriteable), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(void*): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }
    XmlRpcVariable(const char* name, void* value, int nBytes, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(value, nBytes), m_Name(name), m_bRemoteWriteable(false), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(void*): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }

    // CTOR(BinaryData)
    XmlRpcVariable(const char* name, BinaryData const& value, bool remotewriteable, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(value), m_Name(name), m_bRemoteWriteable(remotewriteable), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(BinaryData): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }
    XmlRpcVariable(const char* name, BinaryData const& value, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(value), m_Name(name), m_bRemoteWriteable(false), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(BinaryData): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }

    // CTOR(XmlRpcValue)
    XmlRpcVariable(const char* name, const XmlRpcValue& value, bool remotewriteable, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(value), m_Name(name), m_bRemoteWriteable(remotewriteable), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(XmlRpcValue): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }
    XmlRpcVariable(const char* name, const XmlRpcValue& value, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(value), m_Name(name), m_bRemoteWriteable(false), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(XmlRpcValue): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }

    // Construct from xml, beginning at *offset chars into the string, updates offset
    XmlRpcVariable(const char* name, std::string const& xml, size_t* offset, bool remotewriteable, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(xml, offset), m_Name(name), m_bRemoteWriteable(remotewriteable), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(xml): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }
    XmlRpcVariable(const char* name, std::string const& xml, size_t* offset, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(xml, offset), m_Name(name), m_bRemoteWriteable(false), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(xml): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }

    // Copy Constructor
    XmlRpcVariable(const char* name, XmlRpcVariable const& rhs, bool remotewriteable, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(rhs), m_Name(name), m_bRemoteWriteable(remotewriteable), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(XmlRpcVariable): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }
    XmlRpcVariable(const char* name, XmlRpcVariable const& rhs, PFUNC_GETVARHOOK pGetVarHook = 0, PFUNC_SETVARHOOK pSetVarHook = 0) : XmlRpcValue(rhs), m_Name(name), m_bRemoteWriteable(false), m_pGetVarHook(pGetVarHook), m_pSetVarHook(pSetVarHook)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(XmlRpcVariable): \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_init(&m_muVariable, 0); // "FAST"-Mutex
#endif // #if defined(__linux__)
        if (!m_Name.empty()) {
            GInsXmlRpcServer().addVariable(this);
        }
        TRACEIF(_DEBUG_XMLRPCVARIABLE_CTOR, "XmlRpcVariable::CTOR(): Ende, \"%s\"\n", m_Name.c_str());
    }

public:
    // Destructor
    virtual ~XmlRpcVariable(void)
    {
        invalidate();
        GInsXmlRpcServer().removeVariable(this);
#if defined(__linux__)
        pthread_mutex_unlock(&m_muVariable);
        pthread_mutex_destroy(&m_muVariable);
#endif // #if defined(__linux__)
    }

public:
    XmlRpcVariable& operator=(XmlRpcValue const& rhs) 
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_OPERATOR, "XmlRpcVariable::operator=(XmlRpcValue const&): \"%s\"\n", m_Name.c_str());
        SetValue(rhs);
        return *this;
    }

    XmlRpcVariable& operator=(bool const& rhs)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_OPERATOR, "XmlRpcVariable::operator=(bool const&): \"%s\"\n", m_Name.c_str());
        return operator=(XmlRpcValue(rhs));
    }

    XmlRpcVariable& operator=(int const& rhs)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_OPERATOR, "XmlRpcVariable::operator=(int const&): \"%s\"\n", m_Name.c_str());
        return operator=(XmlRpcValue(rhs));
    }

    XmlRpcVariable& operator=(int64_t const& rhs)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_OPERATOR, "XmlRpcVariable::operator=(GINS_SINT64 const&): \"%s\"\n", m_Name.c_str());
        return operator=(XmlRpcValue(rhs));
    }

    XmlRpcVariable& operator=(double const& rhs)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_OPERATOR, "XmlRpcVariable::operator=(double const&): \"%s\"\n", m_Name.c_str());
        return operator=(XmlRpcValue(rhs));
    }

    XmlRpcVariable& operator=(const char* rhs)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_OPERATOR, "XmlRpcVariable::operator=(const char*): \"%s\"\n", m_Name.c_str());
        return operator=(XmlRpcValue(std::string(rhs)));
    }

    XmlRpcVariable& operator=(struct tm const& rhs)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_OPERATOR, "XmlRpcVariable::operator=(struct tm): \"%s\"\n", m_Name.c_str());
        return operator=(XmlRpcValue(rhs));
    }

    XmlRpcVariable& operator=(BinaryData const& rhs)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_OPERATOR, "XmlRpcVariable::operator=(BinaryData): \"%s\"\n", m_Name.c_str());
        return operator=(XmlRpcValue(rhs));
    }

public:
    const std::string& name(void) 
    {
        return m_Name;
    }

    bool isRemoteWritable(void)
    {
        return m_bRemoteWriteable;
    }

public:
    // multithread safe
    void GetValue(XmlRpcValue& Value)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_GETVALUE, "XmlRpcVariable::GetValue(): Name = \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_lock(&m_muVariable);
        pthread_cleanup_push((void (*)(void *)) pthread_mutex_unlock, &m_muVariable);
#endif // #if defined(__linux__)
        Value = *((XmlRpcValue*) this);
#if defined(__linux__)
        pthread_cleanup_pop(1); // Ausf�hrung von pthread_mutex_unlock(&m_muVariable)
#endif // #if defined(__linux__)
    }

    void SetValue(const XmlRpcValue& Value)
    {
        TRACEIF(_DEBUG_XMLRPCVARIABLE_SETVALUE, "XmlRpcVariable::SetValue(): Name = \"%s\"\n", m_Name.c_str());
#if defined(__linux__)
        pthread_mutex_lock(&m_muVariable);
        pthread_cleanup_push((void (*)(void *)) pthread_mutex_unlock, &m_muVariable);
#endif // #if defined(__linux__)
        XmlRpcValue::operator=(Value);
#if defined(__linux__)
        pthread_cleanup_pop(1); // Ausf�hrung von pthread_mutex_unlock(&m_muVariable)
#endif // #if defined(__linux__)
    }

public:
    bool GetVarHook(void)
    {
        if (0 == m_pGetVarHook) {
            return true;
        }
        XmlRpcValue Value;
        bool bGetVarHook = m_pGetVarHook(Value);
        TRACEIF(_DEBUG_XMLRPCVARIABLE_GETVARHOOK, "XmlRpcVariable::GetVarHook(): Name = \"%s\", bGetVarHook = %s\n", m_Name.c_str(), (true == bGetVarHook) ? "true" : "false");
        if (true == bGetVarHook) {
            SetValue(Value);
        }
        PrintIf(_DEBUG_XMLRPCVARIABLE_GETVARHOOK, m_Name.c_str(), "XmlRpcVariable::GetVarHook(): ");
        return bGetVarHook;
    }

    bool SetVarHook(void)
    {
        if (0 == m_pSetVarHook) {
            return true;
        }
        bool bSetVarHook = m_pSetVarHook(*((XmlRpcValue*) this));
        TRACEIF(_DEBUG_XMLRPCVARIABLE_SETVARHOOK, "XmlRpcVariable::SetVarHook(): Name = \"%s\", bSetVarHook = %s\n", m_Name.c_str(), (true == bSetVarHook) ? "true" : "false");

        PrintIf(_DEBUG_XMLRPCVARIABLE_SETVARHOOK, m_Name.c_str(), "XmlRpcVariable::SetVarHook(): ");
        return bSetVarHook;
    }

protected:
    std::string         m_Name;
    bool                m_bRemoteWriteable;
    PFUNC_GETVARHOOK    m_pGetVarHook;
    PFUNC_SETVARHOOK    m_pSetVarHook;
#if defined(__linux__)
    pthread_mutex_t     m_muVariable;   // "FAST"-Mutex
#endif // #if defined(__linux__)
};  // class XmlRpcVariable

//========================================================================
} // namespace GInsXmlRpc
//========================================================================
#endif // _GINSXMLRPCVARIABLE_H_
