

//Gantner Instruments common source code
#include "GInsXmlRpcClientTransportHTTP.h"

//GI.com DeviceConfig API  - incluce path: ..\..\..\GInsConfig\GI.com\src\XmlRpcAPI
#include "gicom_DeviceConfigAPI_Types.h"

//GI.config Config API  - incluce path: ..\..\..\GInsConfig\GI.config\src\XmlRpcAPI
#include "giconfig_ConfigAPI_Types.h"



//************************************************************************
//************************************************************************
#ifdef _WIN32
#include <codecvt>
//*********************
#define APPEND_UTF16_TO_STRING(Dest, Src) { \
	const std::wstring utf16Str(Src); \
	std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> conv; \
	Dest += conv.to_bytes(utf16Str); \
}
#define APPEND_UTF16CONST_TO_STRING(Dest, Src) { \
	APPEND_UTF16_TO_STRING(Dest, L##Src); /* MSVC++ cannot use \uxxxx format in needed way !!! */ \
}
//*********************
//*********************
#else
//*********************
#define APPEND_UTF16_TO_STRING(Dest, Src) { \
	Dest += Src; \
}
#define APPEND_UTF16CONST_TO_STRING(Dest, Src) { \
	APPEND_UTF16_TO_STRING(Dest, Src); \
}
//*********************
#endif




class Helper
{
	//provides some common used functions in the examples
public:
	static bool DecodeReturnState(const TGInsState &Returnstate);
	static bool DecodeReturnLists(const giconfig_ConfigAPI::CType_Info_ReturnLists &ReturnLists);
	static bool HandleProject_ClearProjectClearAutostart(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport);
	static bool HandleProject_LoadProject(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::string& Path);
	static bool HandleConfig_WriteAllUpdate(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::string &ConnectionToken);
	static bool ConnectToDevice(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::string& IP, std::string& ConnectionToken, std::string& Path);
	static bool DisconnectFromDevice(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::string& ConnectionToken);
	static bool GetConfigState_Stable(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::string& ConnectionToken, const int32_t Timeout_S, bool& Stable);
	static bool GetConfigState_MeasMode(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const int32_t Timeout_S, bool& MeasModeActive);
	static bool GetIDsFromObjectType(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::string &Type, std::vector<GInsXmlRpcStdAPI::CGIns_Base_ElementValue> &IDs);
	static bool StartDeviceScan(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport);
	static bool GetDeviceScanResult(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const int32_t TimeOut_s, std::vector<gicom_DeviceConfigAPI::CType_Info_DeviceScanResult>& ScanInfo, bool& Scanfinished);

	enum TEnumSpecialString
	{
		eSpecialString_ArrowRight,
		eSpecialString_Micro,
		eSpecialString_Degree,
		eSpecialString_Copyright,
		eSpecialString_Registered,
		eSpecialString_ae,
		eSpecialString_oe,
		eSpecialString_ue,
		eSpecialString_ss,
		eSpecialString_AE,
		eSpecialString_OE,
		eSpecialString_UE
	};

	static std::string GenerateSpecialString(const TEnumSpecialString &EnumSpecialString);


private:
	Helper();
};