#if defined(_MSC_VER)
#pragma warning(disable : 4786) // identifier was truncated in debug info
#endif


#include "GInsXmlRpcException.h"
#include "GInsXmlRpcValue.h"
#include "GInsXmlRpcUtil.h"

#include "ginsportabletrace.h"

#if defined(XMLRPC_INCLUDE_SERVER)
#include "GInsXmlRpcServerMethod.h"
#include "GInsXmlRpcServer.h"
#include "GInsXmlRpcRouterMethod.h"
#include "GInsXmlRpcRouter.h"
#include "GInsXmlRpcExecutor.h"
#include "GInsXmlRpcServerTransport.h"
#endif // #if defined(XMLRPC_INCLUDE_SERVER)

#if defined(XMLRPC_INCLUDE_SERVERTHREAD)
#include "GInsXmlRpcServerThread.h"
#endif

#if defined(XMLRPC_INCLUDE_CLIENT)
#include "GInsXmlRpcClient.h"
#include "GInsXmlRpcClientTransport.h"
#endif // #if defined(XMLRPC_INCLUDE_CLIENT)

#ifndef _GINSXMLRPC_H_
#define _GINSXMLRPC_H_

#define _MEASURE_EXECUTION_TIME // Ausführungszeiten messen

//========================================================================
namespace GInsXmlRpc {
//========================================================================

// An interface allowing custom handling of error message reporting.
class XmlRpcErrorHandler
{
public:
    XmlRpcErrorHandler(void)
    {
    }

    virtual ~XmlRpcErrorHandler(void)
    {
    }

public:
    // Returns a pointer to the currently installed error handling object.
    static XmlRpcErrorHandler* getErrorHandler(void)
    {
        return m_pErrorHandler;
    }

    // Specifies the error handler.
    static void setErrorHandler(XmlRpcErrorHandler* eh)
    {
        m_pErrorHandler = eh;
    }

    // Report an error. Custom error handlers should define this method.
    virtual void error(const char* msg) = 0;

protected:
    static XmlRpcErrorHandler* m_pErrorHandler;
}; // class XmlRpcErrorHandler

// An interface allowing custom handling of informational message reporting.
class XmlRpcLogHandler
{
public:
    XmlRpcLogHandler(void)
    {
    }

    virtual ~XmlRpcLogHandler(void)
    {
    }

public:
    // Returns a pointer to the currently installed message reporting object.
    static XmlRpcLogHandler* getLogHandler(void)
    {
        return m_pLogHandler;
    }

    // Specifies the message handler.
    static void setLogHandler(XmlRpcLogHandler* lh)
    {
        m_pLogHandler = lh;
    }

    // Returns the level of verbosity of informational messages. 0 is no output, 5 is very verbose.
    static int getVerbosity(void)
    {
        return m_Verbosity;
    }

    // Specify the level of verbosity of informational messages. 0 is no output, 5 is very verbose.
    static void setVerbosity(int v)
    {
        m_Verbosity = v;
    }

    // Output a message. Custom error handlers should define this method.
    virtual void log(int level, const char* msg) = 0;

protected:
    static XmlRpcLogHandler* m_pLogHandler;
    static int               m_Verbosity;
}; // class XmlRpcLogHandler

// Returns log message verbosity. This is short for XmlRpcLogHandler::getVerbosity()
int  getVerbosity(void);

// Sets log message verbosity. This is short for XmlRpcLogHandler::setVerbosity(level)
void setVerbosity(int level);

//========================================================================
} // namespace GInsXmlRpc
//========================================================================
#endif // _GINSXMLRPC_H_
