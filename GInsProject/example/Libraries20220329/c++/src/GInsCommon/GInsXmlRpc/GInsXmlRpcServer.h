#ifndef _GINSXMLRPCSERVER_H_
#define _GINSXMLRPCSERVER_H_

#if defined(_MSC_VER)
#pragma warning(disable : 4786) // identifier was truncated in debug info
#endif

#if defined (_WIN32)
#include "windows.h"
#endif // #if defined (_WIN32)

#ifndef MAKEDEPEND
#include <map>
#include <string>
#include <memory>
#endif

#include "GInsXmlRpcServerSystemAPIHandler.h"

//========================================================================
namespace GInsXmlRpc {
//========================================================================
// Class supporting XML RPC methods
class XmlRpcServerMethod;

// Class representing argument and result values
class XmlRpcValue;

// Class representing a XML RPC variable
class XmlRpcVariable;

// Class to handle XML RPC routing requests
class XmlRpcRouter;

class XmlRpcServerConnection;

//========================================================================
// XmlRpcServer
// Class to handle XML RPC requests
//========================================================================
class XmlRpcServer
{
friend class XmlRpcExecutor;

private:
    // Singleton Design Pattern
    XmlRpcServer(void);

public:
    // Singleton Design Pattern
    static XmlRpcServer& Instance(void)
    {
        static XmlRpcServer Server;
        return Server;
    }

private:
    XmlRpcServer(const XmlRpcServer&);              // Copy-CTOR nicht definiert
    XmlRpcServer& operator=(const XmlRpcServer&);   // Zuweisungsoperator nicht definiert

public:
    virtual ~XmlRpcServer(void);

    void setSystemAPIHandler(std::shared_ptr<XmlRpcServerSystemAPIHandler> &ptr);

//------------------------------------------------------------------------
// Methods
//------------------------------------------------------------------------
public:
    // Add a method
    void addMethod(XmlRpcServerMethod* method);

    // Remove a method
    void removeMethod(XmlRpcServerMethod* method);

    // Remove a method by name
    void removeMethod(const std::string& name);

    // Look up a method by name
    XmlRpcServerMethod* findMethod(const std::string& name);

protected:
    typedef std::map<std::string, XmlRpcServerMethod *> MethodMap;
    MethodMap   m_Methods;

protected:
    std::shared_ptr<XmlRpcServerSystemAPIHandler> m_pSystemAPIHandler;	// for transferring needed info from and to application

    // System methods
    XmlRpcServerMethod* m_pListMethods;         // List all methods
    XmlRpcServerMethod* m_pListRoutes;          // List all routes
    XmlRpcServerMethod* m_pListVariables;       // List all variables
    XmlRpcServerMethod* m_pMethodHelp;          // Retrieve the help string for a method
    XmlRpcServerMethod* m_pMethodDescription;   // Retrieve description for a method
    XmlRpcServerMethod* m_pGetState;            // Get the current state of server and router
    XmlRpcServerMethod* m_pGetAPIInfo;          // Get API info compatibility info
    XmlRpcServerMethod* m_pGetVersionInfo;      // Get version info about used application parts
    XmlRpcServerMethod* m_pSetLanguage;         // Get/Set language

//------------------------------------------------------------------------
// Variables
//------------------------------------------------------------------------
public:
    // Add a variable
    void addVariable(XmlRpcVariable* variable);

    // Remove a variable
    void removeVariable(XmlRpcVariable* variable);

    // Remove a variable by name
    void removeVariable(const std::string& name);

    // Look up a variable by name
    XmlRpcVariable* findVariable(const std::string& name, bool bUseLock = false);

protected:
    typedef std::map<std::string, XmlRpcVariable *> VariableMap;
    VariableMap m_Variables;

#if defined (_WIN32)
    HANDLE          m_muVariableMap;    // Handle for a Mutex
#endif // #if defined (_WIN32)
#if defined(__linux__)
    pthread_mutex_t m_muVariableMap;    // "FAST"-Mutex
#endif // #if defined(__linux__)

//------------------------------------------------------------------------
// Router
//------------------------------------------------------------------------
public:
    // Reference to the router to handle XML RPC routing requests
    const XmlRpcRouter* getRouter(void) const
    {
        return m_pRouter;
    }

    void setRouter(XmlRpcRouter* router)
    {
        m_pRouter = router;
    }

protected:
    XmlRpcRouter*   m_pRouter;

//------------------------------------------------------------------------
// State
//------------------------------------------------------------------------
public:
    void setState(const XmlRpcValue& state);
    void getState(XmlRpcValue& state) const;

protected:
    XmlRpcValue*    m_pState;

//------------------------------------------------------------------------
// APIInfo
//------------------------------------------------------------------------
public:
    void getAPIInfo(XmlRpcValue& result) const;

    void clearAPIInfoMap();
    void addAPIInfoToMap(const std::string &Name, const std::string &Revision, const std::string &GeneratorInfo = "");
    void removeAPIInfoFromMap(const std::string &Name);

protected:
    struct TAPIInfo
	{
    	std::string m_Name,
					m_Revision,
					m_GeneratorInfo;
	};
    std::vector<TAPIInfo> m_APIInfoMap;

//------------------------------------------------------------------------
// VersionInfo
//------------------------------------------------------------------------
public:
    void getVersionInfo(XmlRpcValue& result) const;

//------------------------------------------------------------------------
// Language
//------------------------------------------------------------------------
public:
    void getLanguage(XmlRpcValue& result) const;
    void setLanguage(XmlRpcValue& params, XmlRpcValue& result);

//------------------------------------------------------------------------
// Introspection support
//------------------------------------------------------------------------
public:
    // Specify whether introspection is enabled or not. Default is not enabled.
    void enableIntrospection(bool enabled = true);

    // List all methods
    void listMethods(XmlRpcValue& result) const;

    // List all variables
    void listVariables(XmlRpcValue& result) const;

protected:
    // Whether the introspection API is supported by this server
    bool    m_IntrospectionEnabled;
}; // class XmlRpcServer

//========================================================================
} // namespace GInsXmlRpc
//========================================================================

// Singleton Design Pattern!
GInsXmlRpc::XmlRpcServer& GInsXmlRpcServer(void);

//========================================================================
//========================================================================
#endif //_GINSXMLRPCSERVER_H_
