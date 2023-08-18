
#define XMLRPC_INCLUDE_CLIENT
#include "GInsXmlRpc.h"

#include "time.h"
#include "ginsstate.h"

//========================================================================
namespace GInsXmlRpc {
//========================================================================

//=============================================================================
// Debugging
// Ist "XmlRpcTrace" (IDIF) aktiv, so darf innerhalb von GInsXmlRpc kein "TRACE()", "TRACEIF()", "PRINT()" oder "PRINTF()" verwendet werden!
// Grund: XmlRpcTrace verwendet GInsXmlRpc (XmlRpcClient, XmlRpcClientTransport, XmlRpcClientTransportHTTP).
// Die Verwendeung von "TRACE()", "TRACEIF()", "PRINT()" oder "PRINTF()" führt zu unendlichen rekursiven Aufrufen!
#ifdef _DEBUG
//#define _DEBUG_XMLRPC_CLIENT
#endif // #ifdef _DEBUG
//=============================================================================

XmlRpcClient::XmlRpcClient(XmlRpcClientTransport& Transport) :
    m_Transport(Transport),
	m_SessionIdPrefix(""),
    m_IsFault(false)
{
	m_SessionId = createRandomString(32);
};

XmlRpcClient::~XmlRpcClient(void)
{
};

int XmlRpcClient::execute(const std::string& methodName, const XmlRpcValue& params, XmlRpcValue& result, const std::string &authorizationToken)
{
    int iRet = (int)GINSSTATE_BuildLevel_Error(TEnumGInsStateType::eGInsStateType__XMLRPC_UNSPECIFIED);

    result.clear();

    while (true)
    {
        // Encode the request to call the specified method with the specified parameters into xml
        if (!this->generateRequest(methodName, params, 0, authorizationToken))
            break; // while(true)

        // Execute delivers an int (0: no error) !
        iRet = m_Transport.execute(m_Request, m_Response);
        if (iRet != TEnumGInsStateType::eGInsStateType__NONE)
            break; // while(true)

        // Convert the response xml into a result value
        if (!this->parseResponse(result))
        {
            iRet = TEnumGInsStateType::eGInsStateType__XMLRPC_FORMATRESPONSE;
            break; // while(true)
        }

        iRet = result.GetFaultCode();
        break; // while(true)
    } // while(true)

    m_Request = "";
    m_Response = "";

    return iRet;
}

int XmlRpcClient::execute(const std::string& methodName, const XmlRpcValue& params, XmlRpcValue& result, uint32_t TimeoutMs, const std::string &authorizationToken)
{
    int iRet = TEnumGInsStateType::eGInsStateType__XMLRPC_UNSPECIFIED;

    result.clear();

    while (true)
    {

        // Encode the request to call the specified method with the specified parameters into xml
        if (!this->generateRequest(methodName, params, TimeoutMs, authorizationToken))
            break; // while(true)

        // Execute delivers an int (0: no error) !
        iRet = m_Transport.execute(m_Request, m_Response, TimeoutMs);
        if (iRet != TEnumGInsStateType::eGInsStateType__NONE)
            break; // while(true)

        // Convert the response xml into a result value
        if (!this->parseResponse(result))
            iRet = TEnumGInsStateType::eGInsStateType__XMLRPC_FORMATRESPONSE;

        iRet = result.GetFaultCode();
        break; // while(true)
    } // while(true)

    m_Request = "";
    m_Response = "";

    return iRet;
}

int XmlRpcClient::execute(const std::string& methodName, const std::string& paramsXml, XmlRpcValue& result, const std::string &authorizationToken)
{
    int iRet = TEnumGInsStateType::eGInsStateType__XMLRPC_UNSPECIFIED;

    result.clear();

    while (true)
    {
        // Encode the request to call the specified method with the specified parameters into xml
        if (!this->generateRequest(methodName, paramsXml, 0, authorizationToken))
            break; // while(true)

        // Execute delivers an int (0: no error) !
        iRet = m_Transport.execute(m_Request, m_Response);
        if (iRet != TEnumGInsStateType::eGInsStateType__NONE)
            break; // while(true)

        // Convert the response xml into a result value
        if (!this->parseResponse(result))
            iRet = TEnumGInsStateType::eGInsStateType__XMLRPC_FORMATRESPONSE;

        break; // while(true)
    } // while(true)

    m_Request = "";
    m_Response = "";

    return iRet;
}

int XmlRpcClient::execute(const std::string& methodName, const std::string& paramsXml, XmlRpcValue& result, uint32_t TimeoutMs, const std::string &authorizationToken)
{
    int iRet = TEnumGInsStateType::eGInsStateType__XMLRPC_UNSPECIFIED;

    result.clear();

    while (true)
    {
        // Encode the request to call the specified method with the specified parameters into xml
        if (!this->generateRequest(methodName, paramsXml, TimeoutMs, authorizationToken))
            break; // while(true)

        // Execute delivers an int (0: no error) !
        iRet = m_Transport.execute(m_Request, m_Response, TimeoutMs);
        if (iRet != TEnumGInsStateType::eGInsStateType__NONE)
            break; // while(true)

        // Convert the response xml into a result value
        if (!this->parseResponse(result))
            iRet = TEnumGInsStateType::eGInsStateType__XMLRPC_FORMATRESPONSE;
        break; // while(true)
    } // while(true)

    m_Request = "";
    m_Response = "";

    return iRet;
}

int XmlRpcClient::getParams(const std::string& methodName, XmlRpcValue& params, uint32_t TimeoutMs)
{
	int iRet = TEnumGInsStateType::eGInsStateType__XMLRPC_UNSPECIFIED;
	params.clear();

	std::string methodHelp = "";
	iRet = this->getHelp(methodName, methodHelp, TimeoutMs);
	if (iRet == TEnumGInsStateType::eGInsStateType__NONE)
	{
		size_t offset = 0;
		params.fromXml(methodHelp, &offset);
	}
	return iRet;
}

int XmlRpcClient::getHelp(const std::string& methodName, std::string& methodHelp, uint32_t TimeoutMs)
{
	int iRet = TEnumGInsStateType::eGInsStateType__XMLRPC_UNSPECIFIED;
	while (true)
	{
		const char *pMethodName = methodName.c_str();
		std::string methodHelpName = "";
		const char *pMethodHelpParams = pMethodName;
		const char *pch = strrchr(pMethodName, '/');	// search for the last route separator
		if (pch == NULL)
			methodHelpName = SYSTEM_METHOD_HELP;
		else
		{
			// add route as prefix to methodHelp
			methodHelpName.append(pMethodName,(size_t)(pch-pMethodName+1));
			methodHelpName.append(SYSTEM_METHOD_HELP);
			// methodhelp params is part after route
			pMethodHelpParams = pch+1;
		}
		XmlRpcValue methodHelpParams(pMethodHelpParams);	// only the method name itself

		// Encode the request to call the specified method with the specified parameters into xml
		if (!this->generateRequest(methodHelpName.c_str(), methodHelpParams))
			break; // while(true)

		// Execute delivers an int (0: no error) !
		iRet = m_Transport.execute(m_Request, m_Response, TimeoutMs);
		if (iRet != TEnumGInsStateType::eGInsStateType__NONE)
			break; // while(true)
		XmlRpcValue methodHelpResults;
		// Convert the response xml into a result value
		if (!this->parseResponse(methodHelpResults))
			iRet = TEnumGInsStateType::eGInsStateType__XMLRPC_FORMATRESPONSE;
		if (methodHelpResults.getXmlTagSet() == JSON_TAG_SET1)
			methodHelp = methodHelpResults.toXml();
		else
			methodHelp = GInsXmlRpc::XmlRpcUtil::xmlDecode(methodHelpResults.toXml());
		if (methodHelp.find(std::string(GInsXmlRpc::XmlRpcValue::XML_TAG_VALUE[0])) == 0)
		{
			methodHelp.erase(0,strlen(GInsXmlRpc::XmlRpcValue::XML_TAG_VALUE[0]));
			size_t len = strlen(GInsXmlRpc::XmlRpcValue::XML_ENDTAG_VALUE[0]);
			size_t pos = methodHelp.find(GInsXmlRpc::XmlRpcValue::XML_ENDTAG_VALUE[0]);
			if (pos == methodHelp.size()-len)
				methodHelp.erase(methodHelp.size()-len,len);
		}
		else if(methodHelp.find(std::string(GInsXmlRpc::XmlRpcValue::XML_TAG_VALUE[1])) == 0)
		{
			methodHelp.erase(0,strlen(GInsXmlRpc::XmlRpcValue::XML_TAG_VALUE[1]));
			size_t len = strlen(GInsXmlRpc::XmlRpcValue::XML_ENDTAG_VALUE[1]);
			size_t pos = methodHelp.find(GInsXmlRpc::XmlRpcValue::XML_ENDTAG_VALUE[1]);
			if (pos == methodHelp.size()-len)
				methodHelp.erase(methodHelp.size()-len,len);
		}
		break; // while(true)
	} // while(true)
	return iRet;
}

int XmlRpcClient::getRouteList(std::vector<std::string> &routes, uint32_t TimeoutMs)
{
	int iRet = 0;

	XmlRpcValue params("");
	if (!this->generateRequest(SYSTEM_LIST_ROUTES, params))
		return -1;

	iRet = m_Transport.execute(m_Request, m_Response, TimeoutMs);
	if (iRet != TEnumGInsStateType::eGInsStateType__NONE)
		return iRet;

	XmlRpcValue result;
	if (!this->parseResponse(result))
		return -1;

	// Check array
	if (result.size() > 0)
	{
		for (int i = 0; i < result.size(); i++)
			routes.push_back(result[i]);
	}

	return 0;
}

int XmlRpcClient::getMethodList(std::vector<std::string> &methods, uint32_t TimeoutMs)
{
	int iRet = 0;

	XmlRpcValue params("");
	if (!this->generateRequest(SYSTEM_LIST_METHODS, params))
		return -1;

	iRet = m_Transport.execute(m_Request, m_Response, TimeoutMs);
	if (iRet != TEnumGInsStateType::eGInsStateType__NONE)
		return iRet;

	XmlRpcValue result;
	if (!this->parseResponse(result))
		return -1;

	// Check array
	if (result.size() > 0)
	{
		for (int i = 0; i < result.size(); i++)
			methods.push_back(result[i]);
	}

	return 0;
}

int XmlRpcClient::getPath(std::string &path, uint32_t TimeoutMs)
{
	int iRet = 0;

	XmlRpcValue params("");
	if (!this->generateRequest(SYSTEM_GET_PROPERTIES, params))
		return -1;

	iRet = m_Transport.execute(m_Request, m_Response, TimeoutMs);
	if (iRet != TEnumGInsStateType::eGInsStateType__NONE)
		return iRet;

	XmlRpcValue result;
	if (!this->parseResponse(result))
		return -1;

	// Check for "Path" param
	if (!result.hasMember("Path"))
		return -1;

	path = (const std::string&)result["Path"];
	return 0;
}

int XmlRpcClient::getAPIInfo(std::map<std::string, std::string> &APIInfoList, uint32_t TimeoutMs)
//                                    APIName    , Revision
{
	int iRet = 0;
	APIInfoList.clear();

	XmlRpcValue params("");
	if (!this->generateRequest(SYSTEM_GET_APIINFO, params))
		return -1;

	iRet = m_Transport.execute(m_Request, m_Response, TimeoutMs);
	if (iRet != TEnumGInsStateType::eGInsStateType__NONE)
		return iRet;

	XmlRpcValue result;
	if (!this->parseResponse(result))
		return -1;

	// assign essential struct ... in this case an array of GInsXmlRpcStdAPI::CGIns_Info_Version_Source
	XmlRpcValue Value = result[APIINFO_VALUE];

	// Check array
	if (Value.size() > 0)
	{
		for (int32_t ii = 0; ii < Value.size(); ii++)
		{
			GInsXmlRpcStdAPI::CGIns_Info_Version_Source Item = Value[ii];
			APIInfoList[Item.Get_Name()] = Item.Get_Revision();
		}
	}

	return 0;
}

int XmlRpcClient::getVersionInfo(GInsXmlRpcStdAPI::CGIns_Info_Version &VersionInfo, uint32_t TimeoutMs)
{
	int iRet = 0;
	VersionInfo.clear();

	XmlRpcValue params("");
	if (!this->generateRequest(SYSTEM_GET_VERSIONINFO, params))
		return -1;

	iRet = m_Transport.execute(m_Request, m_Response, TimeoutMs);
	if (iRet != TEnumGInsStateType::eGInsStateType__NONE)
		return iRet;

	XmlRpcValue result;
	if (!this->parseResponse(result))
		return -1;

	// assign essential struct ... in this case a GInsXmlRpcStdAPI::CGIns_Info_Version
	VersionInfo = result[VERSIONINFO_VALUE];

	return 0;
}

int XmlRpcClient::getLanguage(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList &Language, uint32_t TimeoutMs)
{
	Language.clear();
	return (this->getParams(SYSTEM_SET_LANGUAGE, Language, TimeoutMs));
}
int XmlRpcClient::setLanguage(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList &Language, uint32_t TimeoutMs)
{
	int iRet = 0;

	if (!this->generateRequest(SYSTEM_SET_LANGUAGE, Language))
		return -1;

	iRet = m_Transport.execute(m_Request, m_Response, TimeoutMs);
	if (iRet != TEnumGInsStateType::eGInsStateType__NONE)
		return iRet;

	XmlRpcValue result;
	if (!this->parseResponse(result))
		return -1;

	// assign essential struct ... in this case a GInsXmlRpcStdAPI::CGIns_Info_State
	GInsXmlRpcStdAPI::CGIns_Info_State ReturnState = result[LANGUAGE_RETURNSTATE];
	if (GINSSTATE_IsLevel_Error(ReturnState.Get_Value()))
		return -1;
	return 0;
}

void XmlRpcClient::setSessionId(const std::string &sessionId)
{
	m_SessionId = sessionId;
}

void XmlRpcClient::setSessionIdPrefix(const std::string &sessionIdPrefix)
{
	m_SessionIdPrefix = sessionIdPrefix;
}

// Encode the request to call the specified method with the specified parameters into xml
bool XmlRpcClient::generateRequest(const std::string& methodName, XmlRpcValue const& params, uint32_t TimeoutMs, const std::string &authorizationToken)
{
    m_Request = XML_TAG_VERSION;
    m_Request += XML_TAG_METHODCALL;
    m_Request += XML_TAG_METHODNAME;
    m_Request += methodName;
    m_Request += XML_ENDTAG_METHODNAME;

    if (TimeoutMs > 0)	// set timeout only if needed
    {
		m_Request += XML_TAG_TIMEOUT;
		m_Request += std::to_string((long long)TimeoutMs);
		m_Request += XML_ENDTAG_TIMEOUT;
    }

	if (!authorizationToken.empty())
	{
		m_Request += XML_TAG_AUTHTOKEN;
		m_Request += authorizationToken;
		m_Request += XML_ENDTAG_AUTHTOKEN;
	}

	if (!m_SessionId.empty())
	{
		m_Request += XML_TAG_SESSIONID;

		if (!m_SessionIdPrefix.empty())
		{
			m_Request += m_SessionIdPrefix + "_" + m_SessionId;
		}
		else
		{
			m_Request += m_SessionId;
		}

		m_Request += XML_ENDTAG_SESSIONID;
	}

    if (params.valid())
    {
        m_Request += XML_TAG_PARAMS;
        {
            m_Request += XML_TAG_PARAM;
            m_Request += params.toXml(params.getXmlTagSet());
            m_Request += XML_ENDTAG_PARAM;
        }
        m_Request += XML_ENDTAG_PARAMS;
    }

    m_Request += XML_ENDTAG_METHODCALL;
    return true;
}

bool XmlRpcClient::generateRequest(const std::string& methodName, const std::string& paramsXml, uint32_t TimeoutMs, const std::string &authorizationToken)
{
    m_Request = XML_TAG_VERSION;
    m_Request += XML_TAG_METHODCALL;
    m_Request += XML_TAG_METHODNAME;
    m_Request += methodName;
    m_Request += XML_ENDTAG_METHODNAME;

    if (TimeoutMs > 0)	// set timeout only if needed
    {
		m_Request += XML_TAG_TIMEOUT;
		m_Request += std::to_string((long long)TimeoutMs);
		m_Request += XML_ENDTAG_TIMEOUT;
    }

	if (!authorizationToken.empty())
	{
		m_Request += XML_TAG_AUTHTOKEN;
		m_Request += authorizationToken;
		m_Request += XML_ENDTAG_AUTHTOKEN;
	}

	if (!m_SessionId.empty())
	{
		m_Request += XML_TAG_SESSIONID;
		
		if (!m_SessionIdPrefix.empty())
		{
			m_Request += m_SessionIdPrefix + "_" + m_SessionId;
		}
		else
		{
			m_Request += m_SessionId;
		}

		m_Request += XML_ENDTAG_SESSIONID;
	}

    if (!paramsXml.empty())
    {
        m_Request += XML_TAG_PARAMS;
        {
            m_Request += XML_TAG_PARAM;
            m_Request += paramsXml;
            m_Request += XML_ENDTAG_PARAM;
        }
        m_Request += XML_ENDTAG_PARAMS;
    }

    m_Request += XML_ENDTAG_METHODCALL;
    return true;
}

// Convert the response xml into a result value
bool XmlRpcClient::parseResponse(XmlRpcValue& result)
{
    size_t offset = 0;
    bool LeadingTagFound = false;

    // Parse response xml into result
    if (!XmlRpcUtil::findTag(XML_TAG_METHODRESPONSE,m_Response,&offset))
    {
        XmlRpcUtil::error("XmlRpcClient::parseResponse(): Invalid response - no methodResponse. Response:\n%s", m_Response.c_str());
        return false;
    }

    // Expect either <params><param>... or <fault>...
    if (XmlRpcUtil::nextTagIs(XML_TAG_PARAMS,m_Response,&offset) && XmlRpcUtil::nextTagIs(XML_TAG_PARAM,m_Response,&offset))
        LeadingTagFound = true;
    else if (XmlRpcUtil::nextTagIs(XML_TAG_FAULT,m_Response,&offset))
    {
        m_IsFault = true;
        LeadingTagFound = true;
    }

    if (LeadingTagFound)
    {
        if (!result.fromXml(m_Response, &offset))
        {
            XmlRpcUtil::error("XmlRpcClient::parseResponse(): Invalid response value. Response:\n%s", m_Response.c_str());
            m_Response = "";
            return false;
        }
    }
    else
    {
        XmlRpcUtil::error("XmlRpcClient::parseResponse(): Invalid response - no param or fault tag. Response:\n%s", m_Response.c_str());
        m_Response = "";
        return false;
    }

    if (!result.valid())
        return false;

    return true;
}

std::string XmlRpcClient::createRandomString(const int length)
{
	std::string result = "";

	static const char alphanum[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	srand((unsigned)time(NULL));

	result.reserve(length);

	for (int i = 0; i < length; ++i)
	{
		result += alphanum[rand() % (sizeof(alphanum) - 1)];
	}

	return result;
}

//========================================================================
} // namespace GInsXmlRpc
//========================================================================

