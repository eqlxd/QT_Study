#include <stdlib.h>

#include "ginsstate.h"

#include "GInsXmlRpcClientTransportHTTP.h"

#include "tcp.h"

//========================================================================
namespace GInsXmlRpc {
//========================================================================

//========================================================================
// Debugging
// Ist "XmlRpcTrace" aktiv, so darf innerhalb von GInsXmlRpc kein "TRACE()", "TRACEIF()", "PRINT()" oder "PRINTF()" verwendet werden!
// Grund: XmlRpcTrace verwendet GInsXmlRpc (XmlRpcClient, XmlRpcClientTransport, XmlRpcClientTransportHTTP).
// Die Verwendeung von "TRACE()", "TRACEIF()", "PRINT()" oder "PRINTF()" führt zu unendlichen rekursiven Aufrufen!
#ifdef _DEBUG
//#define _DEBUG_XMLRPC_TRANSPORT_HTTP
#endif // #ifdef _DEBUG
//========================================================================

const int XmlRpcClientTransportHTTP::MAX_RECEIVEBYTES = 0x2000;
const char XmlRpcClientTransportHTTP::CfgParam_ServerIP[]   = "IP";
const char XmlRpcClientTransportHTTP::CfgParam_ServerPort[] = "Port";

XmlRpcClientTransportHTTP::XmlRpcClientTransportHTTP(void) :
	m_ServerPort(0),
	m_TcpPtr(new CTCP()),
	m_ConnectionState(false),
	m_Timeout(5000),
	m_ContentLength(0)
{
}

XmlRpcClientTransportHTTP::XmlRpcClientTransportHTTP(const std::string& ServerIP, int ServerPort) :
	m_ServerIP(ServerIP),
	m_ServerPort(ServerPort),
	m_TcpPtr(new CTCP()),
	m_ConnectionState(false),
	m_Timeout(5000),
	m_ContentLength(0)
{
}

XmlRpcClientTransportHTTP::~XmlRpcClientTransportHTTP(void)
{
	if (this->m_TcpPtr != NULL)
	{
		delete this->m_TcpPtr;
	}
}

int XmlRpcClientTransportHTTP::SetCfg(XmlRpcValue& Cfg)
{
    if (XmlRpcValue::TypeStruct != Cfg.getType()) {
        return TEnumGInsStateType::eGInsStateType__XMLRPC_TRANSPORTINVALIDCFG;
    }

    // Port
    if (false == Cfg.hasMember(CfgParam_ServerPort)) {
        return TEnumGInsStateType::eGInsStateType__XMLRPC_TRANSPORTINVALIDCFG;
    }
    if (Cfg[CfgParam_ServerPort].getType() != XmlRpcValue::TypeInt) {
        return TEnumGInsStateType::eGInsStateType__XMLRPC_TRANSPORTINVALIDCFG;
    }
    m_ServerPort = (unsigned short) ((int) Cfg[CfgParam_ServerPort]);
    if (0 == m_ServerPort) {
        return TEnumGInsStateType::eGInsStateType__XMLRPC_TRANSPORTINVALIDCFG;
    }

    // IP
    if (false == Cfg.hasMember(CfgParam_ServerIP)) {
        return TEnumGInsStateType::eGInsStateType__XMLRPC_TRANSPORTINVALIDCFG;
    }
    if (Cfg[CfgParam_ServerIP].getType() != XmlRpcValue::TypeString) {
        return TEnumGInsStateType::eGInsStateType__XMLRPC_TRANSPORTINVALIDCFG;
    }
    m_ServerIP = (std::string&) Cfg[CfgParam_ServerIP];
    if (true == m_ServerIP.empty()) {
        m_ServerPort = 0;
        return TEnumGInsStateType::eGInsStateType__XMLRPC_TRANSPORTINVALIDCFG;
    }

    return TEnumGInsStateType::eGInsStateType__NONE;
}

int XmlRpcClientTransportHTTP::Connect(void)
{
    if (m_TcpPtr != NULL && !m_ConnectionState)
    {
        if (!m_TcpPtr->Call(m_ServerIP, m_ServerPort))
        {
            return TEnumGInsStateType::eGInsStateType__XMLRPC_TRANSPORTCONNECTIONESTABLISH;
        }
        m_ConnectionState = true;
    }
    return TEnumGInsStateType::eGInsStateType__NONE;
}
int XmlRpcClientTransportHTTP::Connect(unsigned long Timeout)
// Timeout: [ms]
{
    if (m_TcpPtr != NULL && !m_ConnectionState)
    {
        if (!m_TcpPtr->Call(m_ServerIP, m_ServerPort,Timeout))
        {
            return TEnumGInsStateType::eGInsStateType__XMLRPC_TRANSPORTCONNECTIONESTABLISH;
        }
        m_ConnectionState = true;
        SetTimeout(Timeout);
    }
    return TEnumGInsStateType::eGInsStateType__NONE;
}

int XmlRpcClientTransportHTTP::Disconnect(void)
{
	if (m_TcpPtr != NULL)
	{
		m_TcpPtr->clear();
		m_ConnectionState = false;
	}
    return TEnumGInsStateType::eGInsStateType__NONE;
}

int XmlRpcClientTransportHTTP::execute(const std::string& methodCall, std::string& methodResponse)
{
    int iRet = TEnumGInsStateType::eGInsStateType__NONE;

	if (m_TcpPtr != NULL)
	{
		std::string request = generateHeader(methodCall);
		request += methodCall;
		if (!m_TcpPtr->Send(request.c_str(), request.length()))
		{
			XmlRpcUtil::generateFaultResponse(methodResponse, "Transmission failed!", -1);
			return TEnumGInsStateType::eGInsStateType__XMLRPC_TRANSPORTSEND;
		}

		m_Header = "";
		m_Response = "";
		do
		{
			iRet = readHeader();
		} while (iRet == TEnumGInsStateType::eGInsStateType__XMLRPC_TRANSPORTPROGRESS);

		if (iRet != TEnumGInsStateType::eGInsStateType__NONE)
		{
			XmlRpcUtil::generateFaultResponse(methodResponse, "readHeader() failed!", iRet);
			return iRet;
		}

		iRet = readResponse();
		if (iRet != TEnumGInsStateType::eGInsStateType__NONE)
		{
			XmlRpcUtil::generateFaultResponse(methodResponse, "readResponse() failed!", iRet);
			return iRet;
		}
		methodResponse = m_Response;
	}
	else
	{
		XmlRpcUtil::generateFaultResponse(methodResponse, "Transmission failed!", -1);
		return TEnumGInsStateType::eGInsStateType__XMLRPC_TRANSPORTSEND;
	}
    m_Response = "";
    return iRet;
}

int XmlRpcClientTransportHTTP::execute(const std::string& methodCall, std::string& methodResponse, unsigned long Timeout)
{
    SetTimeout(Timeout);
    return execute(methodCall, methodResponse);
}

std::string XmlRpcClientTransportHTTP::generateHeader(std::string const& Content)
{
    std::string Header = "POST ";
	
	char Port[16];
	sprintf(Port, "%d", m_ServerPort);
	
    Header += "/xml";
    Header += " HTTP/1.1\r\n"
        "User-Agent: ";
    Header += XMLRPC_VERSION;
    Header += "\r\nHost: ";
	Header += m_ServerIP;
	Header += ":";
	Header += Port;
    Header += "\r\n"
        "Content-Type: text/xml\r\n"
        "Content-length: ";

    char ContentSize[40];
    sprintf(ContentSize,"%ld\r\n\r\n", (long)Content.size());

    return Header + ContentSize;
}

int XmlRpcClientTransportHTTP::readString(std::string& Text)
{
    char Data[MAX_RECEIVEBYTES + 1];
#ifdef _DEBUG_XMLRPC_TRANSPORT_HTTP
    TRACE("XmlRpcClientTransportHTTP::readString()\n");
#endif
	if (m_TcpPtr != NULL)
	{
		if (GetTimeout() <= 0)
		{
			if (!m_TcpPtr->Receive(Data, MAX_RECEIVEBYTES))
			{
#ifdef _DEBUG_XMLRPC_TRANSPORT_HTTP
				TRACE("XmlRpcClientTransportHTTP::readString(): m_Tcp.Receive() == false!\n");
#endif
				return TEnumGInsStateType::eGInsStateType__XMLRPC_TRANSPORTRECEIVE;
			}
		}
		else
		{
			int iRet = TEnumGInsStateType::eGInsStateType__NONE;
			iRet = m_TcpPtr->Receive(Data, MAX_RECEIVEBYTES, GetTimeout());
			if (iRet != TEnumGInsStateType::eGInsStateType__NONE)
			{
#ifdef _DEBUG_XMLRPC_TRANSPORT_HTTP
				TRACE("XmlRpcClientTransportHTTP::readString(): m_Tcp.Receive() == false!\n");
#endif
				return iRet;
			}
		}

		Data[m_TcpPtr->m_dwReceivedBytes] = 0;
#ifdef _DEBUG_XMLRPC_TRANSPORT_HTTP
		TRACE("Str = %s!\n", Data);
#endif
		Text.append(Data, m_TcpPtr->m_dwReceivedBytes);
	}
	else
	{
		return TEnumGInsStateType::eGInsStateType__XMLRPC_TRANSPORTRECEIVE;
	}
    return TEnumGInsStateType::eGInsStateType__NONE;
}

int XmlRpcClientTransportHTTP::readHeader()
{
    int iRet = TEnumGInsStateType::eGInsStateType__NONE;

    iRet = readString(m_Header);
    if (iRet != TEnumGInsStateType::eGInsStateType__NONE)
    {
        return iRet;
    }

    XmlRpcUtil::log(4, "XmlRpcClientTransportHTTP::readHeader(): client has read %d bytes", m_Header.length());

    char *hp = (char *) m_Header.c_str();  // Start of header
    char *ep = hp + m_Header.length();     // End of string
    char *bp = 0;                          // Start of body
    char *lp = 0;                          // Start of content-length value

    for (char *cp = hp; (bp == 0) && (cp < ep); ++cp)
    {
        if ((ep - cp > 16) && (strncasecmp(cp, "Content-length: ", 16) == 0))
        {
            lp = cp + 16;
        }
        else if ((ep - cp > 4) && (strncmp(cp, "\r\n\r\n", 4) == 0))
        {
            bp = cp + 4;
        }
        else if ((ep - cp > 2) && (strncmp(cp, "\n\n", 2) == 0))
        {
            bp = cp + 2;
        }
    }

    // If we haven't gotten the entire header yet, return (keep reading)
    if (0 == bp)
    {
        return TEnumGInsStateType::eGInsStateType__XMLRPC_TRANSPORTPROGRESS; // Keep reading
    }

    // Decode content length
    if (0 == lp)
    {
        TRACE("Error XmlRpcClientTransportHTTP::readHeader(): No Content-length specified\n");
        return TEnumGInsStateType::eGInsStateType__XMLRPC_FORMATRESPONSE;   // We could try to figure it out by parsing as we read, but for now...
    }

    m_ContentLength = atoi(lp);
    if (0 >= m_ContentLength)
    {
        TRACE("Error in XmlRpcClientTransportHTTP::readHeader(): Invalid Content-length specified (%d).\n", m_ContentLength);
        return TEnumGInsStateType::eGInsStateType__XMLRPC_FORMATRESPONSE;
    }

    XmlRpcUtil::log(4, "client read content length: %d", m_ContentLength);

    // Otherwise copy non-header data to response buffer.
    m_Response = bp;
    m_Header = "";   // should parse out any interesting bits from the header (connection, etc)...

    return TEnumGInsStateType::eGInsStateType__NONE;
}

int XmlRpcClientTransportHTTP::readResponse()
{
    int iRet = TEnumGInsStateType::eGInsStateType__NONE;

    while(int(m_Response.length()) < m_ContentLength)
    {
        iRet = readString(m_Response);
        if (iRet != TEnumGInsStateType::eGInsStateType__NONE)
        {
            return iRet;
        }
    }

    XmlRpcUtil::log(3, "XmlRpcClientTransportHTTP::readResponse (read %d bytes)", m_Response.length());
    XmlRpcUtil::log(5, "response:\n%s", m_Response.c_str());

    return TEnumGInsStateType::eGInsStateType__NONE;
}

//========================================================================
} // namespace GInsXmlRpc
//========================================================================
