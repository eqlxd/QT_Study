


//Gantner Instruments common source code
#include "ginsstate.h"
#include "GInsXmlRpc.h"
#include "GInsXmlRpcClient.h"
#include "GInsXmlRpcClientTransportHTTP.h"

//GI.service Config API
#include "giservice_ConfigAPI_Types.h"

//GI.config Config API  - incluce path: ..\..\..\GInsConfig\GI.config\src\XmlRpcAPI
#include "giconfig_ConfigAPI_Types.h"

//GI.com DeviceConfig API  - incluce path: ..\..\..\GInsConfig\GI.com\src\XmlRpcAPI
#include "gicom_DeviceConfigAPI_Types.h"

//Q.station XML-RPC API
#include "SummaryAPI_Types.h"

#include "Helper.h"
#include <sstream>

class Examples
{
public:
	
	void Example_1_ReadProjectFromController();
	void Example_2_WriteProjectToController();
	void Example_3_ReadProjectFromFile();
	void Example_4_ScanDevices();
	void Example_5_RenameAllVariables();
	void Example_6_ReadVariableProperties();
	void Example_7_ReadQstationSummary();
	void Example_8_RenameAllVariables_2();

private:
	//functions for specific examples

	//Example 1
	bool CreateObject_Project(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, std::string& ProjectID);
	bool HandleConfig_ReadAllUpdate(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::string& ConnectionToken);
	bool CreateObject_Controller(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::string& ProjectPath, const std::string& ProjectID);

	//Example 2
	bool SaveObject(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::string& Path, const std::string& ObjectID, const bool& IgnoreErrors);
	
	//Example 5
	bool GetConfigFromID_Variables_Types(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::vector<GInsXmlRpcStdAPI::CGIns_Base_ElementValue>& IDs, std::vector<std::string>& VariableType);
	bool SetConfig_WriteVarNames(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::vector<GInsXmlRpcStdAPI::CGIns_Base_ElementValue>& IDs, const std::string& varName, const std::vector<std::string> Type);

	//Example 6
	bool GetConfigFromID_Variables(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::vector<GInsXmlRpcStdAPI::CGIns_Base_ElementValue> IDs);
	bool GetConfig_Variable_SensorActorNames(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const GInsXmlRpcStdAPI::CGIns_Base_ElementValue Variable);

	//Example 7
	bool GetModulesOnQstation(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, std::vector<SummaryAPI::CTypeModuleInfo> &ModuleInfo);

	//Example 8
	bool GiConfig_RemoveAllObjects(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport);
	bool GiConfig_CreateController(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, GInsXmlRpcStdAPI::CGIns_Base_ElementValue &CreatedControllerID);
	bool GetConfigFromID_Modules_OwnedVariableIDs(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::vector<GInsXmlRpcStdAPI::CGIns_Base_ElementValue>& ModuleIDs, std::vector<GInsXmlRpcStdAPI::CGIns_Base_ElementValue>& ModuleVariablesIDs);
	bool SetConfig_Variable_Name(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const GInsXmlRpcStdAPI::CGIns_Base_ElementValue &VarID, const std::string &NewName, bool disableDRC);
};



//snippet to print utf-8 characters in console using std::cout
//found in https://stackoverflow.com/questions/45575863/how-to-print-utf-8-strings-to-stdcout-on-windows/45582184
//-> Example 5
class MBuf : public std::stringbuf
{
public:
	int sync(){
		fputs(str().c_str(), stdout);
		str("");
		return 0;
	}
};
