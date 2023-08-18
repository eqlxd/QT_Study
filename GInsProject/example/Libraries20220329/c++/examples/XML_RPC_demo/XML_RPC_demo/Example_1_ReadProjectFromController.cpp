
#include "Examples.h"
#include <iostream>

void Examples::Example_1_ReadProjectFromController()
{
	std::cout << "Example 1: Read Project from Controller " << std::endl;
	std::cout << std::endl;

	GInsXmlRpc::XmlRpcClientTransportHTTP 	XmlRpcTransport;
	GInsXmlRpc::XmlRpcClient				XmlRpcClient(XmlRpcTransport);

	char		HostName[1024] = "127.0.0.1"; //localhost
	int			PortXMLRpc = 8090; //GI.service -> needs to be running!

	std::string ProjectID = "";
	std::string DeviceIPAddress = "192.168.5.82";
	std::string ConnectionToken = "";
	std::string TempProjectPath = "";
	bool Connected = false;
	int32_t TimeOut = 30;
	bool Stable = false;
	bool MeasModeActive = false;

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
			std::cout << "Error at HandleProject_ClearProjectClearAutostart" << std::endl;
			break;
		}

		std::cout << "Successfully cleared project..." << std::endl;

		if (!CreateObject_Project(XmlRpcClient, XmlRpcTransport, ProjectID))
		{
			std::cout << "Error at CreateObjectProject" << std::endl;
			break;
		}

		std::cout << "Succefully new project created... ID: " << ProjectID << std::endl;

		if (!Helper::ConnectToDevice(XmlRpcClient, XmlRpcTransport, DeviceIPAddress, ConnectionToken, TempProjectPath))
		{
			std::cout << "Error at Connect to DeviceIP: " << DeviceIPAddress << std::endl;
			break;
		}

		std::cout << "Successfully connected to Device - " << DeviceIPAddress << std::endl;
		std::cout << "TempProject Path = " << TempProjectPath << std::endl;
		std::cout << std::endl;
		Connected = true;

		if (!HandleConfig_ReadAllUpdate(XmlRpcClient, XmlRpcTransport, ConnectionToken))
		{
			std::cout << "Error at HandleConfig" << std::endl;
			break;
		}
		
		std::cout << "Successfully read configuration from controller..." << std::endl;
		std::cout << std::endl;

		if (!Helper::GetConfigState_Stable(XmlRpcClient, XmlRpcTransport, ConnectionToken, TimeOut, Stable))
		{
			std::cout << "Error at GetConfigState_Stable" << std::endl;
			break;
		}

		if (Stable)
		{
			std::cout << "Device is stable... " << std::endl;
		}
		else
		{
			std::cout << "Device is NOT stable...." << std::endl;
		}

		if (!Helper::DisconnectFromDevice(XmlRpcClient, XmlRpcTransport, ConnectionToken))
		{
			std::cout << "Error at Disconnect" << std::endl;
			break;
		}

		Connected = false;
		std::cout << "Device disconnected...." << std::endl;
		std::cout << std::endl;

		if (!Helper::GetConfigState_MeasMode(XmlRpcClient, XmlRpcTransport, TimeOut, MeasModeActive))
		{
			std::cout << "Error at GetConfigStateMeasMode..." << std::endl;
			std::cout << std::endl;
			break;
		}

		if (MeasModeActive)
		{
			std::cout << "Device in MeasMode..." << std::endl;
		}
		else
		{
			std::cout << "Device NOT in MeasMode..." << std::endl;
		}

		if (!CreateObject_Controller(XmlRpcClient, XmlRpcTransport, TempProjectPath, ProjectID))
		{
			std::cout << "Error at CreateObject_Controller..." << std::endl;
			std::cout << std::endl;
			break;
		}

		std::cout << "Successfully created Controller object in project..." << std::endl;
		std::cout << std::endl;
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

bool Examples::CreateObject_Project(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, std::string& ProjectID)
{
	giconfig_ConfigAPI::CreateObject::CParams Params;
	giconfig_ConfigAPI::CreateObject::CResults Results;
	TGInsState Ret = GINSSTATE_BuildNone();

	GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList tempElementSelectionList;
	GInsXmlRpcStdAPI::CGIns_Base_ElementValue tempElementValue;

	tempElementValue.Set_Value(giconfig_ConfigAPI::COptions::CCommon::CExistsBehaviour::GenerateError());
	tempElementSelectionList.Set_Value(tempElementValue);
	Params.Set_BehaviourOnOwnerIndexExisting(tempElementSelectionList);

	tempElementValue.Set_Value(giconfig_ConfigAPI::COptions::CCommon::CObjectType::Project());  //giconfig_ConfigAPI::COptions::CCommon::CObjectType::Controller();
	tempElementSelectionList.Set_Value(tempElementValue);
	Params.Set_Type(tempElementSelectionList);

	Params.Set_DisableDRC(false);
	Params.Set_OwnerID("*");
	Params.Set_OwnerIndex(0);
	Params.Set_ReturnConfigChangesReasonBitset(16);
	Params.Set_FileName("");

	if (XmlRpcTransport.isConnected())
	{
		Ret = client.execute("GI.config/" + Params.MethodName(), Params, Results, 30000); //execute the method
	}
	else
	{
		std::cout << "Client not connected!" << std::endl;
		return false;
	}

	if (Helper::DecodeReturnState(Ret))
	{
		if (Helper::DecodeReturnState(Results.Get_ReturnState().Get_Value()))
		{
			ProjectID = Results.Get_ID().Get_Value();
			return true;
		}
	}

	return false;

}

bool Examples::HandleConfig_ReadAllUpdate(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::string& ConnectionToken)
{
	//client connected to GI.service

	gicom_DeviceConfigAPI::HandleConfig::CParams  Params;
	gicom_DeviceConfigAPI::HandleConfig::CResults Results;
	TGInsState Ret = GINSSTATE_BuildNone();

	Params.Set_Token(ConnectionToken);

	GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList tmpSelectionList;

	GInsXmlRpcStdAPI::CGIns_Base_ElementValue action;
	action.Set_Value(gicom_DeviceConfigAPI::COptions::CCommon::CActionType::ReadAllUpdate());
	tmpSelectionList.Set_Value(action);

	//set Params
	Params.Set_Action(tmpSelectionList);
	Params.Set_Token(ConnectionToken);

	std::string route = "GI.com/";

	if (XmlRpcTransport.isConnected())
		Ret = client.execute(route + Params.MethodName(), Params, Results, 100000);
	else
	{
		std::cout << "Client not connected!" << std::endl;
		return false;
	}
	if (Helper::DecodeReturnState(Ret))
	{
		if (Helper::DecodeReturnState(Results.Get_ReturnState().Get_Value()))
		{
			return true;
		}
	}

	return false;
}

bool Examples::CreateObject_Controller(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::string& ProjectPath, const std::string& ProjectID)
{

	//this function creates a controller object in an existing Project on GI.bench (localhost)

	giconfig_ConfigAPI::CreateObject::CParams Params;
	giconfig_ConfigAPI::CreateObject::CResults Results;
	TGInsState Ret = GINSSTATE_BuildNone();

	GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList tempElementSelectionList;
	GInsXmlRpcStdAPI::CGIns_Base_ElementValue tempElementValue;

	tempElementValue.Set_Value(giconfig_ConfigAPI::COptions::CCommon::CExistsBehaviour::GenerateError());
	tempElementSelectionList.Set_Value(tempElementValue);
	Params.Set_BehaviourOnOwnerIndexExisting(tempElementSelectionList);

	tempElementValue.Set_Value(giconfig_ConfigAPI::COptions::CCommon::CObjectType::Controller()); //type of object to create
	tempElementSelectionList.Set_Value(tempElementValue);
	Params.Set_Type(tempElementSelectionList);

	Params.Set_DisableDRC(false);
	Params.Set_OwnerID(ProjectID); //set OwnerID - in this case it is the Project ID
	Params.Set_OwnerIndex(0);
	Params.Set_ReturnConfigChangesReasonBitset(16);
	Params.Set_FileName(ProjectPath);

	if (XmlRpcTransport.isConnected())
	{
		Ret = client.execute("GI.config/" + Params.MethodName(), Params, Results, 30000); //execute the method
	}
	else
	{
		std::cout << "Client not connected!" << std::endl;
		return false;
	}

	if (Helper::DecodeReturnState(Ret))
	{
		if (Helper::DecodeReturnState(Results.Get_ReturnState().Get_Value()))
		{
			return true;
		}
	}

	return false;

}