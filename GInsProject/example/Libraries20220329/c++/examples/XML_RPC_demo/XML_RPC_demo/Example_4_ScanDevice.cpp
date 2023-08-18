
#include "Examples.h"
#include <iostream>


void Examples::Example_4_ScanDevices()
{
	std::cout << "Example 4: Scan Devices in Network" << std::endl;
	std::cout << std::endl;

	GInsXmlRpc::XmlRpcClientTransportHTTP 	XmlRpcTransport;
	GInsXmlRpc::XmlRpcClient				XmlRpcClient(XmlRpcTransport);

	char		HostName[1024] = "127.0.0.1"; //localhost
	int			PortXMLRpc = 8090; //GI.service -> needs to be running!

	int32_t Timeout = 20;
	std::vector<gicom_DeviceConfigAPI::CType_Info_DeviceScanResult> ScanInfo;

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
		if (!Helper::StartDeviceScan(XmlRpcClient, XmlRpcTransport))
		{
			std::cout << "Error starting Network Scan..." << std::endl;
			break;
		}

		std::cout << "Network Scan started..." << std::endl;

		bool ScanFinished = false;

		if (!Helper::GetDeviceScanResult(XmlRpcClient, XmlRpcTransport, Timeout, ScanInfo, ScanFinished))
		{
			std::cout << "Error in GetDeviceScanResult..." << std::endl;
			break;
		}

		if (ScanFinished)
		{
			std::cout << "Scan Finished..." << std::endl;
		}
		else
		{
			std::cout << "Scan not Finished..." << std::endl;
			break;
		}

		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "***** Scan Result *****" << std::endl;

		std::cout << "IPAddress: \t\tSerialNUmber: \t\tLocation:" << std::endl;

		for (std::vector<gicom_DeviceConfigAPI::CType_Info_DeviceScanResult>::iterator info = ScanInfo.begin(); info != ScanInfo.end(); ++info)
		{
			std::cout << info->Get_DeviceInfo().Get_Ethernet().Get_IPAddress_IPv4_Dynamic() << "\t\t" << 
				info->Get_DeviceInfo().Get_SerialNumber() << "\t\t" <<
				info->Get_DeviceInfo().Get_Location() << std::endl;
		}


	} while (false);

	XmlRpcTransport.Disconnect();
}