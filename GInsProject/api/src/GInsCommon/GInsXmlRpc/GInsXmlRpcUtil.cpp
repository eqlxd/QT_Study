#include "GInsXmlRpcUtil.h"

#ifndef MAKEDEPEND
#include <ctype.h>
#include <iostream>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#endif
#include "GInsXmlRpc.h"

#if _MSC_VER>=1400
#pragma warning( disable: 4996 )
#endif

//========================================================================
namespace GInsXmlRpc {
//========================================================================

// Default log verbosity: 0 for no messages through 5 (writes everything)
int XmlRpcLogHandler::m_Verbosity = 0;

// Default log handler
static class DefaultLogHandler : public XmlRpcLogHandler
{
public:
    void log(int level, const char* msg)
    {
#ifdef USE_WINDOWS_DEBUG
        if (level <= m_Verbosity) {
            OutputDebugString(msg);
            OutputDebugString("\n");
        }
#else
        if (level <= m_Verbosity) {
            std::cout << msg << std::endl;
        }
#endif
    }
}
defaultLogHandler;

// Message log singleton
XmlRpcLogHandler* XmlRpcLogHandler::m_pLogHandler = &defaultLogHandler;

// Default error handler
static class DefaultErrorHandler : public XmlRpcErrorHandler
{
public:
    void error(const char* msg)
    {
        std::cerr << msg << std::endl;
    }
}
defaultErrorHandler;

// Error handler singleton
XmlRpcErrorHandler* XmlRpcErrorHandler::m_pErrorHandler = &defaultErrorHandler;

// Easy API for log verbosity
int getVerbosity(void)
{
    return XmlRpcLogHandler::getVerbosity();
}

void setVerbosity(int level)
{
    XmlRpcLogHandler::setVerbosity(level);
}

void XmlRpcUtil::log(int level, const char* fmt, ...)
{
    if (level <= XmlRpcLogHandler::getVerbosity()) {
        va_list va;
        char    buf[1024];
        va_start(va, fmt);
        vsnprintf(buf, sizeof(buf) - 1, fmt, va);
        buf[sizeof(buf) - 1] = 0;
        XmlRpcLogHandler::getLogHandler()->log(level, buf);
    }
}

void XmlRpcUtil::error(const char* fmt, ...)
{
    va_list va;
    va_start(va, fmt);

    char    buf[1024];
    vsnprintf(buf, sizeof(buf) - 1, fmt, va);
    buf[sizeof(buf) - 1] = 0;
    XmlRpcErrorHandler::getErrorHandler()->error(buf);
}

// Returns contents between <tag> and </tag>, updates offset to char after </tag>
std::string XmlRpcUtil::parseTag (const char*tag, std::string const&xml, size_t* offset) {
    if (*offset >= xml.length()) {
        return std::string();
    }
    size_t  istart = xml.find(tag, *offset);
    if (istart == std::string::npos) {
        return std::string();
    }
    istart += strlen(tag);
    std::string etag = "</";
    etag += tag + 1;
    size_t  iend = xml.find(etag, istart);
    if (iend == std::string::npos) {
        return std::string();
    }
    *offset = int(iend + etag.length());
    return xml.substr(istart, iend - istart);
}

// Returns true if the tag is found and updates offset to the char after the tag
bool XmlRpcUtil::findTag(const char *tag, std::string const &xml, size_t* offset)
{
    if (*offset >= xml.length()) {
        return false;
    }

    size_t  istart = xml.find(tag, *offset);
    if (istart == std::string::npos) {
        return false;
    }

    *offset = int(istart + strlen(tag));
    return true;
}

// Returns true if the tag is found at the specified offset (modulo any whitespace)
// and updates offset to the char after the tag
bool XmlRpcUtil::nextTagIs(const char *tag, std::string const &xml, size_t* offset)
{
    return nextTagIs(tag, xml, offset, false);
}

// Returns true if the tag is found at the specified offset (modulo any whitespace)
// and updates offset to the char after the tag
// If parameter searchEmpty is true, an empty tag is searched, otherwise a normal
bool XmlRpcUtil::nextTagIs(const char *tag, std::string const &xml, size_t* offset, bool searchEmpty)
{
    if (*offset >= xml.length()) {
        return false;
    }

    const char*     cp = xml.c_str() + *offset;
    int             nc = 0;
    while (*cp && isspace(*cp)) {
        ++cp;
        ++nc;
    }

    int len = int(strlen(tag));
	if(searchEmpty) {
		len--;
	}
    if (*cp && (strncmp(cp, tag, len) == 0)) {
		if(searchEmpty) {
			cp += len;
			nc += len;
			while (*cp && isspace(*cp)) {
				++cp;
				++nc;
			}
			if(*cp && cp[0] == '/') {
				++cp;
				++nc;
			} else {
				return false;
			}
			if(*cp && (strncmp(cp, tag+len, 1) == 0)) {
				len = 1;
			} else {
				return false;
			}
		}
		*offset += nc + len;
		return true;
    }

    return false;
}

// Returns the next tag and updates offset to the char after the tag, or empty string
// if the next non-whitespace character is not '<'
std::string XmlRpcUtil::getNextTag(std::string const &xml, size_t* offset) {

// own implementation of isspace, which doesn't check chars (>=-1 && <=255) and asserting if other !!!
#define my_isspace(ch)	((ch == ' ') || (ch == '\t') || (ch == '\n') || (ch == '\v') || (ch == '\f') || (ch == '\r'))

    if (*offset >= xml.length()) {
        return std::string();
    }
    size_t          pos = *offset;
    const char*     cp = xml.c_str() + pos;
    while (*cp && my_isspace(*cp)) {
        ++cp;
        ++pos;
    }
    if (*cp != '<') {
        return std::string();
    }
    std::string s;
    do
    {
        s += *cp;
        ++pos;
    } while (*cp++ != '>' && *cp != 0);

    *offset = int(pos);
    return s;
}

// Returns the next tag and updates offset to the char after the tag, or empty string
// if the next non-whitespace character is not '<'
std::string XmlRpcUtil::getNextJsonTag(std::string const &json, int *offset) {
    if (*offset >= int(json.length())) {
        return std::string();
    }
    size_t          pos = *offset;
    const char*     cp = json.c_str()+ pos;
    while (*cp && isspace(*cp)) {
        ++cp;
        ++pos;
    }
    if (*cp != '{' && *cp != '\"') {
        return std::string();
    }
    std::string s;
    s.append(cp);
    ++pos;
    *offset = int(pos);
    return s;
}

// xml encodings (xml-encoded entities are preceded with '&')
static const char   AMP = '&';
static const std::string AMP_STR = "&";

// Benannte Zeichen für die Kodierung ISO 8859-1
// Siehe z.B. http://de.selfhtml.org/html/referenz/zeichen.htm#allgemeines
struct tag_xmlCoding {
    tag_xmlCoding(void)
    {
        // xml to raw
        // ISO-8859-Zeichenkodierungen (Latin-1)
        memset(rawEntity, 0, sizeof(rawEntity));
        rawEntity[0]  = '<';        // '<' (öffnende spitze Klammer)
        rawEntity[1]  = '>';        // '>' (schließende spitze Klammer)
        rawEntity[2]  = '&';        // '&' (Ampersand-Zeichen, kaufmännisches Und)
        rawEntity[3]  = '\'';       // '\''
        rawEntity[4]  = '\"';       // '\"' (Anführungszeichen oben)
        /*
        rawEntity[5]  = (char)196;  // '�'
        rawEntity[6]  = (char)228;  // '�'
        rawEntity[7]  = (char)214;  // '�'
        rawEntity[8]  = (char)246;  // '�'
        rawEntity[9]  = (char)220;  // '�'
        rawEntity[10] = (char)252;  // '�'
        rawEntity[11] = (char)181;  // '�'
        rawEntity[12] = (char)176;  // '�' (Grad-Zeichen)
        rawEntity[13] = (char)223;  // '�' (scharfes S)
        */

        // Benannte Zeichen für die Kodierung ISO 8859-1 (Latin-1)
        memset(xmlEntity, 0, sizeof(xmlEntity));
        xmlEntity[0]  = "lt;";      // '<' (öffnende spitze Klammer)
        xmlEntity[1]  = "gt;";      // '>' (schließende spitze Klammer)
        xmlEntity[2]  = "amp;";     // '&' (Ampersand-Zeichen, kaufmännisches Und)
        xmlEntity[3]  = "apos;";    // '\''
        xmlEntity[4]  = "quot;";    // '\"' (Anführungszeichen oben)
        /*
        xmlEntity[5]  = "Auml;";    // '�'
        xmlEntity[6]  = "auml;";    // '�'
        xmlEntity[7]  = "Ouml;";    // '�'
        xmlEntity[8]  = "ouml;";    // '�'
        xmlEntity[9]  = "Uuml;";    // '�'
        xmlEntity[10] = "uuml;";    // '�'
        xmlEntity[11] = "micro;";   // '�'
        xmlEntity[12] = "deg;";     // '�' (Grad-Zeichen)
        xmlEntity[13] = "szlig;";   // '�' (scharfes S)
        */

        memset(xmlEntityLength, 0, sizeof(xmlEntityLength));
        for (int n = 0; n < 20; ++n) {
            if ((const char*)0 != xmlEntity[n]) {
                xmlEntityLength[n] = strlen(xmlEntity[n]);
            }
        }

        // raw to xml
        // Benannte Zeichen für die Kodierung ISO 8859-1
        memset(rawToXml, 0, sizeof(rawToXml));
        rawToXml['<']  = "lt;";     // '<' (öffnende spitze Klammer)
        rawToXml['>']  = "gt;";     // '>' (schließende spitze Klammer)
        rawToXml['&']  = "amp;";    // '&' (Ampersand-Zeichen, kaufmännisches Und)
        rawToXml['\''] = "apos;";   // '\''
        rawToXml['\"'] = "quot;";   // '\"' (Anführungszeichen oben)
        /*
        rawToXml[196]  = "Auml;";   // '�'
        rawToXml[228]  = "auml;";   // '�'
        rawToXml[214]  = "Ouml;";   // '�'
        rawToXml[246]  = "ouml;";   // '�'
        rawToXml[220]  = "Uuml;";   // '�'
        rawToXml[252]  = "uuml;";   // '�'
        rawToXml[181]  = "micro;";  // '�'
        rawToXml[176]  = "deg;";    // '�' (Grad-Zeichen)
        rawToXml[223]  = "szlig;";  // '�' (scharfes S)
        */
    };

    // xml to raw
    char rawEntity[20];
    const char* xmlEntity[20];
    size_t xmlEntityLength[20];

    // raw to xml
    const char* rawToXml[256];
};
static struct tag_xmlCoding   xmlCoding;

// Replace xml-encoded entities with the raw text equivalents.
std::string XmlRpcUtil::xmlDecode(const std::string& encoded)
{
    std::string::size_type iAmp = encoded.find(AMP);
    if (iAmp == std::string::npos) {
        return encoded;
    }

    std::string decoded(encoded, 0, iAmp);
    std::string::size_type iSize = encoded.size();
    decoded.reserve(iSize);

    const char*  ens = encoded.c_str();
    while (iAmp != iSize) {
        if ((encoded[iAmp] == AMP) && (iAmp + 1) < iSize) {
            int iEntity;
            for (iEntity = 0; 0 != xmlCoding.xmlEntity[iEntity]; ++iEntity) {
                if (strncmp(ens + iAmp + 1, xmlCoding.xmlEntity[iEntity], xmlCoding.xmlEntityLength[iEntity]) == 0) {
                    decoded += xmlCoding.rawEntity[iEntity];
                    iAmp += xmlCoding.xmlEntityLength[iEntity] + 1;
                    break;
                }
            }

            if (0 == xmlCoding.xmlEntity[iEntity]) {
                // unrecognized sequence
                decoded += encoded[iAmp++];
            }
        }
        else {
            decoded += encoded[iAmp++];
        }
    }

    return decoded;
}

// Replace raw text with xml-encoded entities.
std::string XmlRpcUtil::xmlEncode(const std::string& raw)
{
    std::string encoded;
	bool bFirst = true;

    std::string::size_type rawPos1 = 0;
    std::string::size_type rawPos2 = std::string::npos;
    std::string::size_type rawSize = raw.size();
    while (rawPos1 < rawSize) {
        // search char to encode
        rawPos2 = raw.find_first_of(xmlCoding.rawEntity, rawPos1);
        if (std::string::npos == rawPos2) {
            if (0 == rawPos1) {
                return raw;
            }
            encoded.append(raw, rawPos1, rawSize - rawPos1);
            return encoded;
        }
        else {
			if (bFirst) {
				bFirst = false;
				encoded.reserve(2*rawSize);
			}
            encoded.append(raw, rawPos1, rawPos2 - rawPos1);
        }

        // encode raw char
        char rawChar = raw[rawPos2];
        if (0 != xmlCoding.rawToXml[(unsigned char)rawChar]) {
            encoded.append(AMP_STR);
            encoded.append(xmlCoding.rawToXml[(unsigned char)rawChar]);
        }
        else {
			//encoded.append(std::string(1,rawChar));
			encoded.append(raw, rawPos2, 1);
        }

        rawPos1 = rawPos2 + 1;
    } // while()

    return encoded;
}

// Create a response from results xml
void XmlRpcUtil::generateResponse(std::string& methodResponse, std::string const& resultXml)
{
    methodResponse = XML_TAG_VERSION;
    methodResponse += XML_TAG_RESPONSE;
    methodResponse += resultXml;
    methodResponse += XML_ENDTAG_RESPONSE;

    return;
}

void XmlRpcUtil::generateFaultResponse(std::string& methodResponse, std::string const& errorMsg, int errorCode)
{
    XmlRpcValue faultStruct;
    faultStruct[FAULTCODE] = errorCode;
    faultStruct[FAULTSTRING] = errorMsg;

    methodResponse = XML_TAG_VERSION;
    methodResponse += XML_TAG_FAULTRESPONSE;
    methodResponse += faultStruct.toXml();
    methodResponse += XML_ENDTAG_FAULTRESPONSE;

    return;
}

//========================================================================
} // namespace GInsXmlRpc
//========================================================================

