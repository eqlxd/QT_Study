


#include "Examples.h"
#include <iostream>


void Examples::Example_3_ReadProjectFromFile()
{
	std::cout << "Example 3: Read Project from File" << std::endl;
	std::cout << std::endl;

	GInsXmlRpc::XmlRpcClientTransportHTTP 	XmlRpcTransport;
	GInsXmlRpc::XmlRpcClient				XmlRpcClient(XmlRpcTransport);

	char		HostName[1024] = "127.0.0.1"; //localhost
	int			PortXMLRpc = 8090; //GI.service -> needs to be running!

	std::string ProjectFilePath = "C:\\temp\\TestProject\\TestProject.gibpj";

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
		std::cout << "Successfully connected to GI.service - " << HostName << " / Port: " << PortXMLRpc << std::endl;
		std::cout << std::endl;
	}
	else
	{
		std::cout << "Error at client.connection to GI.service... - " << std::endl;

		Helper::DecodeReturnState(Ret);
		return;
	}

	do
	{
		if (!Helper::HandleProject_ClearProjectClearAutostart(XmlRpcClient, XmlRpcTransport))
		{
			std::cout << "Error at HandleProject_ClearProjectClearAutostart..." << std::endl;
			break;
		}

		std::cout << "Successfully cleared project..." << std::endl;
		std::cout << std::endl;

		if (!Helper::HandleProject_LoadProject(XmlRpcClient, XmlRpcTransport, ProjectFilePath))
		{
			std::cout << "Error at HandleProject_LoadProject..." << std::endl;
			break;
		}

		std::cout << "Project loaded successfully!" << std::endl;
		std::cout << std::endl;


	} while (false);

	XmlRpcTransport.Disconnect();

}