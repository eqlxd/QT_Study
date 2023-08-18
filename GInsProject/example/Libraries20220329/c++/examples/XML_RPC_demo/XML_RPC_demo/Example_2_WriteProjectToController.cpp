


#include "Examples.h"
#include <iostream>


void Examples::Example_2_WriteProjectToController()
{
	std::cout << "Example 2: Write Project to Controller " << std::endl;
	std::cout << std::endl;

	GInsXmlRpc::XmlRpcClientTransportHTTP 	XmlRpcTransport;
	GInsXmlRpc::XmlRpcClient				XmlRpcClient(XmlRpcTransport);

	char		HostName[1024] = "127.0.0.1"; //localhost
	int			PortXMLRpc = 8090; //GI.service -> needs to be running!

	std::string DeviceIPAddress = "192.168.5.82";
	std::string ConnectionToken = "";
	std::string TempProjectPath = "";
	bool Connected = false;
	int32_t TimeOut = 30;
	bool Stable = false;
	bool MeasModeActive = false;

	std::vector<GInsXmlRpcStdAPI::CGIns_Base_ElementValue> ObjectIDs;

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
		if (!Helper::ConnectToDevice(XmlRpcClient, XmlRpcTransport, DeviceIPAddress, ConnectionToken, TempProjectPath))
		{
			std::cout << "Error at Connect" << std::endl;
			break;
		}

		std::cout << "Successfully connected to Device - " << DeviceIPAddress << std::endl;
		std::cout << "TempProject Path = " << TempProjectPath << std::endl;
		std::cout << std::endl;
		Connected = true;

		if (!Helper::GetIDsFromObjectType(XmlRpcClient, XmlRpcTransport, giconfig_ConfigAPI::COptions::CCommon::CObjectType::Controller(), ObjectIDs))
		{
			std::cout << "Error at GetIDsFromObjectType" << std::endl;
			std::cout << std::endl;
			break;
		}

		//assume there is only 1 controller in the project!
		std::cout << "Got ID from Controller - ID: " << ObjectIDs.at(0).Get_Value() << std::endl;


		if (!SaveObject(XmlRpcClient, XmlRpcTransport, TempProjectPath, ObjectIDs.at(0).Get_Value(), false))
		{
			std::cout << "Error at SaveObject!" << std::endl;
			break;
		}

		std::cout << "Successfully saved files to -> " << TempProjectPath << std::endl;
		std::cout << std::endl;

		if (!Helper::HandleConfig_WriteAllUpdate(XmlRpcClient, XmlRpcTransport, ConnectionToken))
		{
			std::cout << "Error at HandleConfig" << std::endl;
			break;
		}

		std::cout << "Success at HandleConfig - Write all update!" << std::endl;
		std::cout << std::endl;

		if (!Helper::GetConfigState_Stable(XmlRpcClient, XmlRpcTransport, ConnectionToken, TimeOut, Stable))
		{
			std::cout << "Error at GetConfigState_Stable" << std::endl;
			break;
		}

		if (Stable)
		{
			std::cout << "Device is Stable..." << std::endl;
		}
		else
		{
			std::cout << "Device is NOT Stable..." << std::endl;
		}

		if (!Helper::DisconnectFromDevice(XmlRpcClient, XmlRpcTransport, ConnectionToken))
		{
			std::cout << "Error at Disconnect" << std::endl;
			break;
		}

		std::cout << "Device disconnected" << std::endl;
		Connected = false;

		if (!Helper::GetConfigState_MeasMode(XmlRpcClient, XmlRpcTransport, TimeOut, MeasModeActive))
		{
			std::cout << "Error at GetConfigStateMeasMode" << std::endl;
			break;
		}

		if (MeasModeActive)
		{
			std::cout << "Device in Measurement Mode!" << std::endl;
		}
		else
		{
			std::cout << "Device NOT in Measurement Mode!" << std::endl;
		}

		std::cout << "Done!" << std::endl;

	} while (false);

	if (Connected)
	{
		//if connection is still open -> close
		if (!Helper::DisconnectFromDevice(XmlRpcClient, XmlRpcTransport, ConnectionToken))
		{
			std::cout << "Error at Disconnect" << std::endl;
		}
		else
		{
			std::cout << std::endl;
			std::cout << "Device disconnected..." << std::endl;
		}
	}



	XmlRpcTransport.Disconnect();
}


bool Examples::SaveObject(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::string& Path, const std::string& ObjectID, const bool& IgnoreErrors)
{
	giconfig_ConfigAPI::SaveObject::CParams  Params;
	giconfig_ConfigAPI::SaveObject::CResults Results;
	TGInsState Ret = GINSSTATE_BuildNone();

	GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList tmpSelectionList;


	GInsXmlRpcStdAPI::CGIns_Base_ElementValue BehaviourOnExisting;
	BehaviourOnExisting.Set_Value(giconfig_ConfigAPI::COptions::CCommon::CExistsBehaviour::GenerateError());

	tmpSelectionList.Set_Value(BehaviourOnExisting);

	//set parameters for "SaveObject"-Method
	Params.Set_BehaviourOnExisting(tmpSelectionList);

	GInsXmlRpcStdAPI::CGIns_Base_ElementValue valID;
	valID.Set_Value(ObjectID);

	tmpSelectionList.Set_Value(valID);
	Params.Set_ID(tmpSelectionList);

	Params.Set_DirectoryName(Path);
	Params.Set_HostingDirectoryName("");
	Params.Set_IgnoreErrors(IgnoreErrors);

	if (XmlRpcTransport.isConnected())
		Ret = client.execute("GI.config/" + Params.MethodName(), Params, Results, 100000);
	else
	{
		std::cout << "Client not connected!" << std::endl;
		return false;
	}

	if (Helper::DecodeReturnState(Ret))
	{
		if (Helper::DecodeReturnState(Results.Get_ReturnState().Get_Value()))
		{
			Helper::DecodeReturnLists(Results.Get_ReturnLists());
			return true;
		}
	}

	return false;
}

