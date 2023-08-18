#ifndef _GINSXMLRPCSERVERSYSTEMAPIHANDLER_H_
#define _GINSXMLRPCSERVERSYSTEMAPIHANDLER_H_

#include "../GInsXmlRpcStdAPI/GInsXmlRpcStdAPI_Types.h"

//========================================================================
namespace GInsXmlRpc {
//========================================================================

//========================================================================
// XmlRpcServerSystemAPIHandler
// Class to handle SystemAPI info exchange
//========================================================================
class XmlRpcServerSystemAPIHandler
{
public:
	XmlRpcServerSystemAPIHandler()	{};
	virtual ~XmlRpcServerSystemAPIHandler()  {};

    virtual void GetVersionInfo(GInsXmlRpcStdAPI::CGIns_Info_Version &Value, GInsXmlRpcStdAPI::CGIns_Info_State &ReturnState) = 0;

    virtual void GetLanguage(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList &Value, GInsXmlRpcStdAPI::CGIns_Info_State &ReturnState) = 0;
    virtual void SetLanguage(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList &Value, GInsXmlRpcStdAPI::CGIns_Info_State &ReturnState) = 0;

}; // class XmlRpcServerSystemAPIHandler

//========================================================================
} // namespace GInsXmlRpc
//========================================================================

#endif //_GINSXMLRPCSERVERSYSTEMAPIHANDLER_H_
