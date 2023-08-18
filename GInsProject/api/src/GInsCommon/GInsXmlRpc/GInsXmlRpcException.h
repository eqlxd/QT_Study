#ifndef _GINSXMLRPCEXCEPTION_H_
#define _GINSXMLRPCEXCEPTION_H_


#include "ginsstate.h"

//========================================================================
namespace GInsXmlRpc {
//========================================================================

// A class representing an error.
// If server methods throw this exception, a fault response is returned
// to the client.
class   XmlRpcException
{
public:

    // Constructor
    //   @param message  A descriptive error message
    //   @param code     An integer error code
    XmlRpcException(const std::string& message, int code = TEnumGInsStateType::eGInsStateType__XMLRPC_UNSPECIFIED) :
        m_Message(message),
        m_Code(code)
    {
    }

    // Return the error message.
    const std::string& getMessage() const
    {
        return m_Message;
    }

    // Return the error code.
    int getCode(void) const
    {
        return m_Code;
    }

private:
    std::string m_Message;
    int         m_Code;
}; // class XmlRpcException

//========================================================================
} // namespace GInsXmlRpc
//========================================================================
#endif // _GINSXMLRPCEXCEPTION_H_
