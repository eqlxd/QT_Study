#ifndef _GINSXMLRPCUTIL_H_
#define _GINSXMLRPCUTIL_H_


#include <string>
#include "ginsstate.h"

#include "snprintf.h"

#if defined(_MSC_VER)
# define strcasecmp	    _stricmp
# define strncasecmp    _strnicmp
#elif defined(__BORLANDC__)
# define strcasecmp     stricmp
# define strncasecmp    strnicmp
#endif

//========================================================================
namespace GInsXmlRpc {
//========================================================================

const int XML_TAG_UNDEF = -1;
const int XML_TAG_SET1 = 0;
const int XML_TAG_SET2 = 1;
const int JSON_TAG_SET1 = 2;
const int JSON_TAG_SET1_PRETTY = 3;

// XmlRpcValue: Members
const char PARAMS[]         = "params";
const char METHODNAME[]     = "methodName";
const char FAULTCODE[]      = "faultCode";
const char FAULTSTRING[]    = "faultString";
// Ende: XmlRpcValue: Members

// Xml: Tags
#if defined(XMLRPC_ENCODING_ISO8859_1)
const char XML_TAG_VERSION[]            = "<?xml version=\"1.0\" encoding=\"ISO-8859-1\"?>\r\n";
#else
const char XML_TAG_VERSION[]            = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n";
#endif
const char XML_TAG_METHODCALL[]         = "<methodCall>";
const char XML_ENDTAG_METHODCALL[]      = "</methodCall>\r\n";
const char XML_TAG_METHODNAME[]         = "<methodName>";
const char XML_ENDTAG_METHODNAME[]      = "</methodName>\r\n";
const char XML_TAG_TIMEOUT[]         	= "<timeout>";
const char XML_ENDTAG_TIMEOUT[]      	= "</timeout>\r\n";
const char XML_TAG_AUTHTOKEN[]			= "<authToken>";
const char XML_ENDTAG_AUTHTOKEN[]		= "</authToken>\r\n";
const char XML_TAG_SESSIONID[]			= "<sessionId>";
const char XML_ENDTAG_SESSIONID[]		= "</sessionId>\r\n";
const char XML_TAG_PARAMS[]             = "<params>";
const char XML_ENDTAG_PARAMS[]          = "</params>";
const char XML_TAG_PARAM[]              = "<param>";
const char XML_ENDTAG_PARAM[]           = "</param>";
const char XML_TAG_METHODRESPONSE[]     = "<methodResponse>";
const char XML_ENDTAG_METHODRESPONSE[]  = "</methodResponse>\r\n";
const char XML_TAG_FAULT[]              = "<fault>";
const char XML_ENDTAG_FAULT[]           = "</fault>\r\n";
const char XML_TAG_RESPONSE[]           = "<methodResponse><params><param>\r\n";
const char XML_ENDTAG_RESPONSE[]        = "\r\n</param></params></methodResponse>\r\n";
const char XML_TAG_FAULTRESPONSE[]      = "<methodResponse><fault>\r\n";
const char XML_ENDTAG_FAULTRESPONSE[]   = "\r\n</fault></methodResponse>\r\n";
// Ende: Xml: Tags

// System methods
#define SYSTEM_API_NAME                   "system"
const char SYSTEM_LIST_METHODS[]        = SYSTEM_API_NAME ".listMethods";
const char SYSTEM_LIST_ROUTES[]         = SYSTEM_API_NAME ".listRoutes";
const char SYSTEM_LIST_VARIABLES[]      = SYSTEM_API_NAME ".listVariables";
const char SYSTEM_UPDATE_PROPERTIES[]   = SYSTEM_API_NAME ".updateProperties";
const char SYSTEM_GET_PROPERTIES[]      = SYSTEM_API_NAME ".getProperties";
const char SYSTEM_GET_STATE[]           = SYSTEM_API_NAME ".getState";
const char SYSTEM_METHOD_HELP[]         = SYSTEM_API_NAME ".methodHelp";
const char SYSTEM_METHOD_DESCRIPTION[]  = SYSTEM_API_NAME ".methodDescription";
const char SYSTEM_MULTICALL[]           = SYSTEM_API_NAME ".multicall";
const char SYSTEM_SYSLOGIN[]            = SYSTEM_API_NAME ".Login";
const char SYSTEM_TRACE_EXECUTION[]     = SYSTEM_API_NAME ".traceExecution";
const char SYSTEM_GET_APIINFO[]         = SYSTEM_API_NAME ".getAPIInfo";
const char SYSTEM_GET_VERSIONINFO[]     = SYSTEM_API_NAME ".getVersionInfo";
const char SYSTEM_SET_LANGUAGE[]        = SYSTEM_API_NAME ".setLanguage";
// Ende: System methods

// Routes for variables
const char VARIABLE[]                   = "variable";
const char VARIABLE_GET[]               = "variable.get";
const char VARIABLE_SET[]               = "variable.set";

// APIInfo params
const char APIINFO_VALUE[]              = "Value";
const char APIINFO_RETURNSTATE[]        = "ReturnState";

// VersionInfo params
const char VERSIONINFO_VALUE[]          = "Value";
const char VERSIONINFO_RETURNSTATE[]    = "ReturnState";

// Language params
const char LANGUAGE_RETURNSTATE[]       = "ReturnState";

// Status
const char SERVER_STATE[]               = "ServerState";
const char ROUTER_STATE[]               = "RouterState";

// Login
const char LOGIN_USERID[]               = "UserID";
const char LOGIN_USERINFO[]             = "UserInfo";

// Version
const char XMLRPC_VERSION[]             = "GINSXMLRPC++ 1.0";

// Utilities for XML parsing, encoding, and decoding and message handlers.
class XmlRpcUtil
{
public:
    // Construct a response from the result xml.
    static void generateResponse(std::string& methodResponse, std::string const &resultXml);
    static void generateFaultResponse(std::string& methodResponse, std::string const &msg, int errorCode = TEnumGInsStateType::eGInsStateType__XMLRPC_UNSPECIFIED);

    // hokey xml parsing
    // Returns contents between <tag> and </tag>, updates offset to char after </tag>
    static std::string parseTag(const char* tag, std::string const& xml, size_t* offset);

    // Returns true if the tag is found and updates offset to the char after the tag
    static bool findTag(const char* tag, std::string const& xml, size_t* offset);

    // Returns the next tag and updates offset to the char after the tag, or empty string
    // if the next non-whitespace character is not '<'
    static std::string getNextTag(std::string const& xml, size_t* offset);

    static std::string getNextJsonTag(std::string const &json, int *offset) ;

    // Returns true if the tag is found at the specified offset (modulo any whitespace)
    // and updates offset to the char after the tag
    static bool nextTagIs(const char* tag, std::string const& xml, size_t* offset);

	// Returns true if the tag is found at the specified offset (modulo any whitespace)
	// and updates offset to the char after the tag
	// If parameter searchEmpty is true, an empty tag is searched, otherwise a normal one
	static bool nextTagIs(const char *tag, std::string const &xml, size_t* offset, bool searchEmpty);

    // Convert raw text to encoded xml.
    static std::string xmlEncode(const std::string& raw);

    // Convert encoded xml to raw text
    static std::string xmlDecode(const std::string& encoded);

    // Dump messages somewhere
    static void log(int level, const char* fmt, ...);

    // Dump error messages somewhere
    static void error(const char* fmt, ...);
}; // class XmlRpcUtil

//========================================================================
} // namespace GInsXmlRpc
//========================================================================
#endif // _GINSXMLRPCUTIL_H_
