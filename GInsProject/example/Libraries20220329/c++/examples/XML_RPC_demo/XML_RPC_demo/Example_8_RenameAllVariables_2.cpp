
#include "Examples.h"
#include <iostream>
#include <thread>
#include <chrono>

void Examples::Example_8_RenameAllVariables_2()
{

	std::cout << "Example 8: Read + rename all Variables from Modules on Q.station" << std::endl;
	std::cout << std::endl;

	GInsXmlRpc::XmlRpcClientTransportHTTP 	XmlRpcTransport;
	GInsXmlRpc::XmlRpcClient				XmlRpcClient(XmlRpcTransport);

	char		HostName[1024] = "192.168.5.82"; //Device IP
	int			PortXMLRpc = 1200;

	std::vector<SummaryAPI::CTypeModuleInfo> ModuleInfo;
	std::string newname = "xName_";
	int32_t TimeOut = 30;
	bool Connected = false;
	bool Stable = false;
	bool MeasModeActive = false;
	std::string ConnectionToken = "";

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
		std::cout << "Error at client.connection to Device... - " << std::endl;

		Helper::DecodeReturnState(Ret);
		return;
	}

	do
	{
		std::cout << "Remove all existing objects from GI.config" << std::endl;
		if (!GiConfig_RemoveAllObjects(XmlRpcClient, XmlRpcTransport)) //remove all existing objects
		{
			std::cout << "Error Removing Objects!" << std::endl;
			break;
		}

		std::cout << "Create Object 'Controller' in GI.config on Q.station..." << std::endl;
		//depending on the size of the system, this step might take some seconds... maybe timeout needs to be increased on big systems.

		GInsXmlRpcStdAPI::CGIns_Base_ElementValue CreatedObjectID;
		if (!GiConfig_CreateController(XmlRpcClient, XmlRpcTransport, CreatedObjectID))
		{
			std::cout << "Error Creating Objects!" << std::endl;
			break;
		}
		std::cout << "Created Object in GI.config: " << CreatedObjectID.Get_Description() << " (" << CreatedObjectID.Get_Value() << ")" << std::endl;

		std::vector<GInsXmlRpcStdAPI::CGIns_Base_ElementValue> ModuleIDs;
		if (!Helper::GetIDsFromObjectType(XmlRpcClient, XmlRpcTransport, giconfig_ConfigAPI::COptions::CCommon::CObjectType::Module(), ModuleIDs))// get IDs from all modules as vector of "CGIns_Base_ElementValues" -> needed for "GetConfigs"
		{
			std::cout << "Error getting Module IDs" << std::endl;
			break;
		}

		for (std::vector<GInsXmlRpcStdAPI::CGIns_Base_ElementValue>::iterator IDindex = ModuleIDs.begin(); IDindex != ModuleIDs.end(); ++IDindex)
		{
			std::cout << "Found Module: " << IDindex->Get_Description().c_str() << " (" << IDindex->Get_Value().c_str() << ")" << std::endl;
		}

		//Get Variable IDs of Module-Variables (no virtual variables...)
		std::vector<GInsXmlRpcStdAPI::CGIns_Base_ElementValue> ModuleVariablesIDs;
		if (!GetConfigFromID_Modules_OwnedVariableIDs(XmlRpcClient, XmlRpcTransport, ModuleIDs, ModuleVariablesIDs))
		{
			std::cout << "error reading Configs from IDs" << std::endl;
			break;
		}


		//***********************************************************************************************************************************************
		// Set Variable Names

		std::cout << std::endl;
		std::cout << "Rename all Variables... \n" << std::endl;

		for (size_t i = 0; i < ModuleVariablesIDs.size(); i++)
		{
			std::string setName = newname;
			setName += std::to_string(i);

			//only activate DRC (Design Rule Check) at last variable -> not necessary to check all rules for each change
			if ((i < (ModuleVariablesIDs.size() - 1)) && (ModuleVariablesIDs.size() > 1))
			{
				if (SetConfig_Variable_Name(XmlRpcClient, XmlRpcTransport, ModuleVariablesIDs[i], setName, true))
					std::cout << "Successfully set Name to " << setName << std::endl;
				else
					std::cout << "\nFailed to set Name!" << std::endl;
			}
			else
			{
				std::cout << "\n -> last change -> activate DRC! (this step can take some more seconds)" << std::endl;
				clock_t begin = clock();
				if (SetConfig_Variable_Name(XmlRpcClient, XmlRpcTransport, ModuleVariablesIDs[i], setName, false))
				{
					clock_t end = clock();
					double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
					std::cout << "Successfully set Name to " << setName << " - elapsed time[s]: " << elapsed_secs << std::endl;
				}
				else
				{
					clock_t end = clock();
					double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
					std::cout << "\nFailed to set Name!" << " - elapsed time[s]: " << elapsed_secs << std::endl;
				}
			}
		}


		//***********************************************************************************************************************************************
		// Save and write project -> similar procedure as in Example_2_WriteProjectToController (difference is: we are connected to GI.config ON the controller, not on host)

		std::this_thread::sleep_for(std::chrono::milliseconds(5000));
		if (!SaveObject(XmlRpcClient,XmlRpcTransport, "", CreatedObjectID.Get_Value(), true))// GiConfigSaveObjects(Route, CreatedObjectID))
		{
			std::cout << "Error on SaveObjects.." << std::endl;
			break;
		}
		//Sleep(5000);


		std::cout << "Set Q.station into Configuration-Mode using 'Connect'..." << std::endl;

		
		std::string tempPath = "";

		//use "connect" on Q.station, to set Q.station into configuration mode
		// - parameter for "IP-address" is an empty string, because you are already connected with the xml-rpc server on Q.station
		// - connection token is needed for "disconnect"
		// - path returns an empty string -> not needed if connected with Q.station

		if (!Helper::ConnectToDevice(XmlRpcClient, XmlRpcTransport, "", ConnectionToken, tempPath))
		{
			std::cout << "Error at connect" << std::endl;
			break;
		}

		std::cout << "Successfully connected!\n" << std::endl;
		Connected = true;

		if (!Helper::GetConfigState_Stable(XmlRpcClient, XmlRpcTransport, ConnectionToken, TimeOut, Stable))
		{
			std::cout << "Error at GetConfigState_Stable" << std::endl;
			break;
		}

		if (!Stable)
		{
			std::cout << "Config not Stable after open connection !" << std::endl;
			break;
		}

		std::cout << "Device Config stable!\n" << std::endl;

		std::cout << "Write Configuration...\n" << std::endl;

		if (!Helper::HandleConfig_WriteAllUpdate(XmlRpcClient, XmlRpcTransport, ConnectionToken))
		{
			std::cout << "Error at HandleConfig WriteAllUpdate!" << std::endl;
			break;
		}

		if (!Helper::GetConfigState_Stable(XmlRpcClient, XmlRpcTransport, ConnectionToken, TimeOut, Stable))
		{
			std::cout << "Error at GetConfigState_Stable" << std::endl;
			break;
		}

		if (!Stable)
		{
			std::cout << "Config not Stable after write configuration!" << std::endl;
			break;
		}

		std::cout << "\nDevice Config stable after configuration -> close connection and wait for measurement mode = active!\n" << std::endl;

		if (!Helper::DisconnectFromDevice(XmlRpcClient, XmlRpcTransport, ConnectionToken))
		{
			std::cout << "Error at Disconnect!" << std::endl;
			break;
		}

		Connected = false;

		if (!Helper::GetConfigState_MeasMode(XmlRpcClient, XmlRpcTransport, TimeOut, MeasModeActive))
		{
			std::cout << "\nError at GetConfigState_MeasMode!" << std::endl;
			break;
		}

		if (MeasModeActive)
		{
			std::cout << "\nDevice in Measurement Mode again!" << std::endl;
		}
		else
		{
			std::cout << "\nDevice NOT in Measurement Mode!" << std::endl;
		}


		std::cout << "\n\nDone!" << std::endl;

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

bool Examples::GiConfig_RemoveAllObjects(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport)
{
	giconfig_ConfigAPI::RemoveObjects::CParams Params;
	giconfig_ConfigAPI::RemoveObjects::CResults Results;

	TGInsState Ret = GINSSTATE_BuildNone();

	std::string route = "GI.config/";

	GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList tmpSelectionList;
	GInsXmlRpcStdAPI::CGIns_Base_ElementValue tempElementValue;

	tempElementValue.Set_Value("*");//all objects
	tmpSelectionList.Set_Value(0, tempElementValue);

	Params.Set_IDs(tmpSelectionList);


	if (XmlRpcTransport.isConnected())
		Ret = client.execute(route + Params.MethodName(), Params, Results); //execute the method
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

bool Examples::GiConfig_CreateController(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, GInsXmlRpcStdAPI::CGIns_Base_ElementValue &CreatedControllerID)
{
	giconfig_ConfigAPI::CreateObject::CParams Params;
	giconfig_ConfigAPI::CreateObject::CResults Results;
	TGInsState Ret = GINSSTATE_BuildNone();

	std::string route = "GI.config/";

	GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList tempElementSelectionList;
	GInsXmlRpcStdAPI::CGIns_Base_ElementValue tempElementValue;

	tempElementValue.Set_Value(giconfig_ConfigAPI::COptions::CCommon::CExistsBehaviour::GenerateError());
	tempElementSelectionList.Set_Value(tempElementValue);
	Params.Set_BehaviourOnOwnerIndexExisting(tempElementSelectionList);

	tempElementValue.Set_Value(giconfig_ConfigAPI::COptions::CCommon::CObjectType::Controller()); 
	tempElementSelectionList.Set_Value(tempElementValue);
	Params.Set_Type(tempElementSelectionList);

	Params.Set_DisableDRC(false);
	Params.Set_OwnerID("*"); //if a object of type "Controller" is created in GI.config ON a controller -> there is no owning object like on a Host-GI.bench (project) 
	Params.Set_OwnerIndex(0);
	Params.Set_ReturnConfigChangesReasonBitset(0);
	Params.Set_FileName("");

	if (XmlRpcTransport.isConnected())
	{
		Ret = client.execute(route + Params.MethodName(), Params, Results, 200000); //execute the method
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
			Results.Get_ID(CreatedControllerID);
			return true;
		}
	}
	return false;

}

bool Examples::GetConfigFromID_Modules_OwnedVariableIDs(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::vector<GInsXmlRpcStdAPI::CGIns_Base_ElementValue>& ModuleIDs, std::vector<GInsXmlRpcStdAPI::CGIns_Base_ElementValue>& ModuleVariablesIDs)
{
	giconfig_ConfigAPI::GetConfigs::CParams Params;
	giconfig_ConfigAPI::GetConfigs::CResults Results;

	std::string route = "GI.config/";

	GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList SetIDList;

	// Object-IDs of all variable-objects using ConfigAPI->"GetIDsFromObjectType" filled into a vector
	for (std::vector<GInsXmlRpcStdAPI::CGIns_Base_ElementValue>::const_iterator IDindex = ModuleIDs.begin(); IDindex != ModuleIDs.end(); ++IDindex)
	{
		SetIDList.Set_Value(SetIDList.GetSize_Value(), *IDindex);
	}

	std::string PropertyName = giconfig_ConfigAPI::CType_Config_Variable::ItemName_General();
	PropertyName += "/";
	PropertyName += giconfig_ConfigAPI::CType_Config_Module_General::ItemName_OwnedIDsVariable();

	//set parameters for "GetConfigs"-Method
	Params.Set_IDs(SetIDList);
	Params.Set_PropertyName(PropertyName);
	Params.Set_WithImages(false);
	Params.Set_WithOptions(false);

	TGInsState Ret = GINSSTATE_BuildNone();

	if (XmlRpcTransport.isConnected())
		Ret = client.execute(route + Params.MethodName(), Params, Results); //execute the method
	else
	{
		std::cout << "not connected" << std::endl;
		return false;
	}
		

	if (Helper::DecodeReturnState(Ret))
	{
		if (Helper::DecodeReturnState(Results.Get_ReturnState().Get_Value()))
		{

			int cnt = Results.GetSize_Configs(); // depends on number of selected objects

			if (cnt == 0)
			{
				std::cout << "No result..." << std::endl;
				return false;
			}

			for (int configIndex = 0; configIndex < cnt; configIndex++) //get config of each selected object seperately
			{
				giconfig_ConfigAPI::CType_Base_ConfigWithOwner result;  // "Configs" is of type "array of CType_Base_ConfigWithOwner".
				if (Results.Get_Configs(configIndex, result)) //results are GInsXmlRpcValue -> Type not yet known!
				{
					std::cout << "----- Module Name: " << result.Get_ID().Get_Description() << " (" << result.Get_ID().Get_Value() << ")" << std::endl;

					//element "Config" of result is now an unspecified "XmlRpcValue"
					//-> use StructTypeID to check 
					//because of the requested information, the struct of the response is known 
					try
					{
						GInsXmlRpc::XmlRpcValue config;
						result.Get_Config(config);

						//-> in this case, the "Config" of the result is also an array (Type "CType_Base_ObjectRef").
						//The requested property was "General/OwnedIDsVariable" from a Module, which gives you an array for all variables
						// so check type:
						if (config.getType() == GInsXmlRpc::XmlRpcValue::TypeArray)
						{
							for (int i = 0; i < config.size(); i++)
							{
								//read single array-element in the config array
								GInsXmlRpc::XmlRpcValue InnerConfig = config[i];

								//check for correct StructTypeID()
								if (InnerConfig.getStructTypeID() == giconfig_ConfigAPI::CType_Base_ObjectRef::StructTypeID())
								{
									GInsXmlRpcStdAPI::CGIns_Base_ElementValue VariableID;
									giconfig_ConfigAPI::CType_Base_ObjectRef ObjectRef(InnerConfig);
									std::cout << "     Variable " << i << ": " << ObjectRef.Get_Name() << " (" << ObjectRef.Get_ID() << ")" << std::endl;
									VariableID.Set_Description(ObjectRef.Get_Name());
									VariableID.Set_Value(ObjectRef.Get_ID());
									ModuleVariablesIDs.push_back(VariableID);
								}

							}
							std::cout << std::endl;
						}
					}
					catch (...){}
				}
			}

			return true;
		}
	}
	return false;

}

bool Examples::SetConfig_Variable_Name(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const GInsXmlRpcStdAPI::CGIns_Base_ElementValue &VarID, const std::string &NewName, bool disableDRC)
{
	giconfig_ConfigAPI::SetConfigs::CParams  Params;
	giconfig_ConfigAPI::SetConfigs::CResults Results;
	TGInsState Ret = GINSSTATE_BuildNone();

	std::string route = "GI.config/";

	GInsXmlRpcStdAPI::CGIns_Edit_StringValue VarDescription;
	VarDescription.Set_Value(NewName);

	GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList SetIDList;
	SetIDList.Set_Value(SetIDList.GetSize_Value(), VarID);

	std::string PropertyName = giconfig_ConfigAPI::CType_Config_Variable::ItemName_General();
	PropertyName += "/";
	PropertyName += giconfig_ConfigAPI::CType_Config_Variable_General::ItemName_Description();

	//set parameters for "SetConfig"-Method
	Params.Set_IDs(SetIDList);
	Params.Set_Config(VarDescription);
	Params.Set_PropertyName(PropertyName);
	Params.Set_DisableDRC(disableDRC);


	if (XmlRpcTransport.isConnected())
		Ret = client.execute(route + Params.MethodName(), Params, Results, 200000); //execute the method
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