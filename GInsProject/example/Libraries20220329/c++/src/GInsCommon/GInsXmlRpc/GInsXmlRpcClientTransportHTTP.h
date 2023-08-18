#ifndef _GINSXMLRPCCLIENTTRANSPORTHTTP_H_
#define _GINSXMLRPCCLIENTTRANSPORTHTTP_H_

#define XMLRPC_INCLUDE_CLIENT
#include "GInsXmlRpc.h"

class CTCP;

//========================================================================
namespace GInsXmlRpc {
//========================================================================

class XmlRpcClientTransportHTTP : public XmlRpcClientTransport
{
protected:
    static const int MAX_RECEIVEBYTES;

public:
    static const char CfgParam_ServerIP[];
    static const char CfgParam_ServerPort[];

public:
	XmlRpcClientTransportHTTP(void);
	XmlRpcClientTransportHTTP(const std::string& ServerIP, int ServerPort);

private:
    XmlRpcClientTransportHTTP(const XmlRpcClientTransportHTTP&);            // Copy-CTOR nicht definiert
    XmlRpcClientTransportHTTP &operator=(const XmlRpcClientTransportHTTP&); // Zuweisungsoperator nicht definiert

public:
	~XmlRpcClientTransportHTTP(void);

public:
    int SetCfg(XmlRpcValue& Cfg);

    void SetServerIP(const std::string& ServerIP)
    {
        if (m_ServerIP != ServerIP)
        {
            Disconnect();
        }
        m_ServerIP = ServerIP;
    }
    const std::string& GetServerIP(void)
    {
        return m_ServerIP;
    }

    void SetServerPort(int ServerPort)
    {
        if (m_ServerPort != ServerPort)
        {
            Disconnect();
        }
        m_ServerPort = ServerPort;
    }
    int GetServerPort(void)
    {
        return m_ServerPort;
    }

    // Timeout: [ms]
    void SetTimeout(unsigned long Timeout)
    {
    	m_Timeout = Timeout;
    }
    unsigned long GetTimeout(void)
    {
        return m_Timeout;
    }

public:
    // Verbindung herstellen (Timeout: [ms])
    int Connect(void);
    int Connect(unsigned long Timeout);

    // Verbindung trennen.
    int Disconnect(void);

    virtual int TestConnection(void) const
    {
        return (m_ConnectionState) ? TEnumGInsStateType::eGInsStateType__NONE : TEnumGInsStateType::eGInsStateType__NET_CONNECTION_CLOSED;
    }
    virtual bool isConnected() const { return m_ConnectionState; }

public:
    // Ausführung einer Methode (Timeout: [ms])
    int execute(const std::string& methodCall, std::string& methodResponse);
    int execute(const std::string& methodCall, std::string& methodResponse, unsigned long Timeout);

protected:
    std::string generateHeader(std::string const& Content);
    int  readString(std::string & Text);
    int  readHeader(void);
    int  readResponse(void);

protected:
    // TCP Socket
    std::string                m_ServerIP;
    unsigned short             m_ServerPort;
    CTCP*                      m_TcpPtr;

    // Aktueller Zustand der Verbindung
    // true -> verbunden false -> getrennt
    bool           m_ConnectionState;

    unsigned long  m_Timeout;   // [ms]

    int            m_ContentLength;

    std::string    m_Header;
    std::string    m_Response;
};

//========================================================================
} // namespace GInsXmlRpc
//========================================================================
#endif // #ifndef _GINSXMLRPCCLIENTTRANSPORTHTTP_H_
