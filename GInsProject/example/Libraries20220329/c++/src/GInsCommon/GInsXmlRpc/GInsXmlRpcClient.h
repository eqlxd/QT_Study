#ifndef _GINSXMLRPCCLIENT_H_
#define _GINSXMLRPCCLIENT_H_

#if defined(_MSC_VER)
#pragma warning(disable:4786)   // identifier was truncated in debug info
#endif
#ifndef MAKEDEPEND
#include <string>
#endif

#include <map>

#include "GInsXmlRpcStdAPI/GInsXmlRpcStdAPI_Types.h"

//========================================================================
namespace GInsXmlRpc {
//========================================================================

// Arguments and results are represented by XmlRpcValues
class XmlRpcValue;

// The transport channel to the server
class XmlRpcClientTransport;

// A class to send XML RPC requests to a server and return the results.
class XmlRpcClient
{
public:
    XmlRpcClient(XmlRpcClientTransport& Transport);

private:
    XmlRpcClient(void);                           // Standardkonstruktor nicht definiert
    XmlRpcClient(const XmlRpcClient&);            // Copy-CTOR nicht definiert
    XmlRpcClient& operator=(const XmlRpcClient&); // Zuweisungsoperator nicht definiert

public:
    virtual ~XmlRpcClient(void);

public:
    // Execute the named method
    //  @param method The name of the method to execute
    //  @param params An array of the arguments for the method
    //  @param result The result value to be returned to the client
    //  @param TimeoutMS Timeout time in [ms] if timeout is > 0 the timeout value is added to the method request xml
    //  @return 0 if the request was sent and a result received
    //   (although the result might be a fault).
	int execute(const std::string& methodName, const XmlRpcValue& params, XmlRpcValue& result, const std::string &authorizationToken = "");
	int execute(const std::string& methodName, const XmlRpcValue& params, XmlRpcValue& result, uint32_t TimeoutMs, const std::string &authorizationToken = "");

	int execute(const std::string& methodName, const std::string& paramsXml, XmlRpcValue& result, const std::string &authorizationToken = "");
	int execute(const std::string& methodName, const std::string& paramsXml, XmlRpcValue& result, uint32_t TimeoutMs, const std::string &authorizationToken = "");


    /**
     * Get method params to pre-fill for the next execute call
     *
     * @param methodName	The name of the method to execute
     * @param params		The param value to be returned to the client
     * @param TimeoutMs		Timeout time in [ms]
     *
     * @return			0 if the request was sent and a result received
     */
    int getParams(const std::string& methodName, XmlRpcValue& params, uint32_t TimeoutMs=5000);

    int getHelp(const std::string& methodName, std::string& methodHelp, uint32_t TimeoutMs=5000);

    int getRouteList(std::vector<std::string> &routes, uint32_t TimeoutMs=5000);

    int getMethodList(std::vector<std::string> &methods, uint32_t TimeoutMs=5000);

    int getPath(std::string &path, uint32_t TimeoutMs=5000);

    int getAPIInfo(std::map<std::string, std::string> &APIInfoList, uint32_t TimeoutMs=5000);

    int getVersionInfo(GInsXmlRpcStdAPI::CGIns_Info_Version &VersionInfo, uint32_t TimeoutMs=5000);

    int getLanguage(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList &Language, uint32_t TimeoutMs=5000);
    int setLanguage(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList &Language, uint32_t TimeoutMs=5000);

	void setSessionId(const std::string &sessionId);
	void setSessionIdPrefix(const std::string &sessionIdPrefix);

    // Returns true if the result of the last execute() was a fault response.
    bool isFault() const
    {
        return m_IsFault;
    }

public:
    XmlRpcClientTransport& Transport(void)
    {
        return m_Transport;
    }

protected:
    XmlRpcClientTransport& m_Transport;

protected:
    // Execution processing helpers
	virtual bool generateRequest(const std::string& methodName, XmlRpcValue const& params, uint32_t TimeoutMs = 0, const std::string &authorizationToken = "");
	virtual bool generateRequest(const std::string& methodName, const std::string& paramsXml, uint32_t TimeoutMs = 0, const std::string &authorizationToken = "");
    virtual bool parseResponse(XmlRpcValue& result);

	std::string createRandomString(const int length);

protected:
    // The xml-encoded request and response xml
    std::string m_Request;
    std::string m_Response;
	std::string m_SessionId;
	std::string m_SessionIdPrefix;

    // True if a fault response was returned by the server
    bool m_IsFault;
}; // class XmlRpcClient

//========================================================================
} // namespace GInsXmlRpc
//========================================================================
#endif // _GINSXMLRPCCLIENT_H_
