
#include "Examples.h"
#include <iostream>

void Examples::Example_7_ReadQstationSummary()
{
	std::cout << "Example 7: Read Q.station summary" << std::endl;
	std::cout << std::endl;

	GInsXmlRpc::XmlRpcClientTransportHTTP 	XmlRpcTransport;
	GInsXmlRpc::XmlRpcClient				XmlRpcClient(XmlRpcTransport);

	char		HostName[1024] = "192.168.5.82"; //Device IP
	int			PortXMLRpc = 1200;

	std::vector<SummaryAPI::CTypeModuleInfo> ModuleInfo;

	//Configure HTTP Transport
	GInsXmlRpc::XmlRpcValue	XmlRpcTransportCfg;
	XmlRpcTransportCfg[GInsXmlRpc::XmlRpcClientTransportHTTP::CfgParam_ServerIP] = std::string(HostName);
	XmlRpcTransportCfg[GInsXmlRpc::XmlRpcClientTransportHTTP::CfgParam_ServerPort] = (int)PortXMLRpc;

	XmlRpcTransport.SetCfg(XmlRpcTransportCfg);
	XmlRpcTransport.SetTimeout(50000);

	TGInsState  Ret = GINSSTATE_BuildNone();
	Ret = XmlRpcTransport.Connect();

	if (!GINSSTATE_IsLevel_Error(Ret) && !GINSSTATE_IsLevel_Warning(Ret))
	{
		std::cout << "Successfully connected to Device - " << HostName << " / Port: " << PortXMLRpc << std::endl;
		std::cout << std::endl;
	}
	else
	{
		std::cout << "Error at client.connection to Device... - " << HostName << std::endl;

		Helper::DecodeReturnState(Ret);
		return;
	}

	do
	{
		if (!GetModulesOnQstation(XmlRpcClient, XmlRpcTransport, ModuleInfo))
		{
			std::cout << "Error Reading Module Info from Controller " << HostName << std::endl;
			break;
		}

		if (ModuleInfo.size() > 0)
		{
			std::cout << "Connected Modules: " << std::endl;

			for (std::vector<SummaryAPI::CTypeModuleInfo>::iterator module = ModuleInfo.begin(); module != ModuleInfo.end(); ++module)
			{
				std::cout << module->Get_DeviceType() << std::endl;
			}

		}

	} while (false);

	XmlRpcTransport.Disconnect();
}

bool Examples::GetModulesOnQstation(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, std::vector<SummaryAPI::CTypeModuleInfo> &ModuleInfo)
{

	SummaryAPI::GetModules::CParams Params;
	SummaryAPI::GetModules::CResults Results;

	Params.Set_ModuleIndex(-1); //the Index of the Module we want to read. -1 -> all modules

	TGInsState Ret = client.execute(Results.MethodName(), Params, Results); //execute the method

	if (Helper::DecodeReturnState(Ret))
	{
		if (Helper::DecodeReturnState(Results.Get_ReturnState().Get_Value()))
		{
			int count = Results.GetSize_ModuleList(); //get the size of the array
			for (int i = 0; i < count; i++)
			{
				SummaryAPI::CTypeModuleInfo Info;
				Results.Get_ModuleList(i, Info);
				ModuleInfo.push_back(Info);
			}
			return true;
		}
	}
	return false;

}