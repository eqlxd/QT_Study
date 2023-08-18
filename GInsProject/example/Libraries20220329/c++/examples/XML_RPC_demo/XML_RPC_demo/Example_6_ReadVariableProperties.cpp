
#include "Examples.h"
#include <iostream>

#ifdef _MSC_VER
#include <windows.h>
#endif
/*
* This example shows how to read Object (Variable) Properties of different types
* using Methods of GI.config API:
*      giconfig_ConfigAPI.GetConfigs and
*      giconfig_ConfigAPI.SetConfigs
*
*/

void Examples::Example_6_ReadVariableProperties()
{
	std::cout << "Example 6: Read Variable Properties" << std::endl;
	std::cout << std::endl;

	GInsXmlRpc::XmlRpcClientTransportHTTP 	XmlRpcTransport;
	GInsXmlRpc::XmlRpcClient				XmlRpcClient(XmlRpcTransport);

	char		HostName[1024] = "127.0.0.1"; //localhost
	int			PortXMLRpc = 8090; //GI.service -> needs to be running!

	std::vector<GInsXmlRpcStdAPI::CGIns_Base_ElementValue> VariableIDs;

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
		if (!Helper::GetIDsFromObjectType(XmlRpcClient, XmlRpcTransport, giconfig_ConfigAPI::COptions::CCommon::CObjectType::Variable(), VariableIDs))
		{
			std::cout << "Error in GetIDsFromObjectType... No Objects found?" << std::endl;
			break;
		}

		if (VariableIDs.empty())
		{
			std::cout << "No Objects found? " << std::endl;
			break;
		}

		std::cout << "Found " << VariableIDs.size() << " Variables in the Project." << std::endl;
		std::cout << std::endl;


		int32_t index = 0;
		for (std::vector<GInsXmlRpcStdAPI::CGIns_Base_ElementValue>::iterator varID = VariableIDs.begin(); varID != VariableIDs.end(); ++varID, index++)
		{
			std::cout << varID->Get_Description() << " (" << varID->Get_Value() << ") " << std::endl;
		}
		
		std::cout << std::endl;
		std::cout << "Read Variable Infos..." << std::endl;

		//-> read variable configs (from all variables here) and visualize some results...
		if (!GetConfigFromID_Variables(XmlRpcClient, XmlRpcTransport, VariableIDs))
		{
			std::cout << "Could not read variable types..." << std::endl;
			break;
		}

		//-> read a single property from 1 variable + avaiable options. 
		for (std::vector<GInsXmlRpcStdAPI::CGIns_Base_ElementValue>::iterator varID = VariableIDs.begin(); varID != VariableIDs.end(); ++varID, index++)
		{
			// read property "SensorActorName" + options from variable
			if (!GetConfig_Variable_SensorActorNames(XmlRpcClient, XmlRpcTransport, *varID))
			{
				std::cout << "Property not found for variable: " << varID->Get_Description() << std::endl;
				continue;
			}
		}

	} while (false);

	XmlRpcTransport.Disconnect();
}

bool Examples::GetConfigFromID_Variables(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::vector<GInsXmlRpcStdAPI::CGIns_Base_ElementValue> IDs)
{

	giconfig_ConfigAPI::GetConfigs::CParams Params;
	giconfig_ConfigAPI::GetConfigs::CResults Results;
	TGInsState Ret = GINSSTATE_BuildNone();

	std::string route = "GI.config/";

	// Parameters "IDs" is of type ElementListSelectionList -> multiple ElementValues can be added as value
	GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList SetIDList;

	// Object-IDs of all variable-objects using ConfigAPI->"GetIDsFromObjectType" filled into a vector
	for (std::vector<GInsXmlRpcStdAPI::CGIns_Base_ElementValue>::const_iterator IDindex = IDs.begin(); IDindex != IDs.end(); ++IDindex)
	{
		SetIDList.Set_Value(SetIDList.GetSize_Value(), *IDindex);
	}

	std::string PropertyName = ""; //if property type is set to "" -> all properties are read


	//set parameters for "GetConfigs"-Method
	Params.Set_IDs(SetIDList);
	Params.Set_PropertyName(PropertyName);
	Params.Set_WithImages(false);
	Params.Set_WithOptions(false); //you can use "true" to load all possibilities of each property


	if (XmlRpcTransport.isConnected())
		Ret = client.execute(route + Params.MethodName(), Params, Results); //execute the method
	else
		return false;



	if (Helper::DecodeReturnState(Ret))
	{
		if (Helper::DecodeReturnState(Results.Get_ReturnState().Get_Value()))
		{

			for (int32_t configIndex = 0; configIndex < Results.GetSize_Configs(); configIndex++)
			{
				giconfig_ConfigAPI::CType_Base_ConfigWithOwner result;
				Results.Get_Configs(configIndex, result); //results are GInsXmlRpcValue

				//identify XmlRpcValue Struct-Type -> ElementSelectionList
				if (result.Get_Config().getStructTypeID().compare(giconfig_ConfigAPI::CType_Config_Variable::StructTypeID()) == 0)
				{
					//if the struct ID of the result is valid, create a new variable of the type using the GInsXmlRpcValue of the result
					giconfig_ConfigAPI::CType_Config_Variable variable;
					result.Get_Config(variable);

					//print some variable information:
					if (variable.Get_General().Get_Type().Get_Value().Get_Value().compare(giconfig_ConfigAPI::COptions::CCommon::CVariableType::Reference()) != 0)
					{
						std::cout << "=========== " << variable.Get_General().Get_Description().Get_Value() << " =========== " << std::endl;
						std::cout << "DataDirection: " << variable.Get_General().Get_DataDirection().Get_Value().Get_Description() << std::endl;
						std::cout << "DataFormat: " << variable.Get_General().Get_DataFormat().Get_ActualCombinedValue().Get_Description() << std::endl;
						std::cout << "Precision: " << variable.Get_General().Get_Precision().Get_Value() << std::endl;
						std::cout << "FieldLength: " << variable.Get_General().Get_FieldLength().Get_Value() << std::endl;
						if (variable.Get_General().Get_ValueHandling().Get_Main().Get_Scaling().Get_Standard().valid())// != GInsXmlRpc::XmlRpcValue::Type::TypeInvalid)
							std::cout << "Offset: " << variable.Get_General().Get_ValueHandling().Get_Main().Get_Scaling().Get_Standard().Get_Offset().Get_Value() << std::endl;
						std::cout << "OwnerID: " << variable.Get_General().Get_OwnerID().Get_Value() << std::endl;
					}
					else
					{
						std::cout << "=========== " << variable.Get_General().Get_Description().Get_Value() << " =========== " << std::endl;
						std::cout << "\tReference Variable!" << std::endl;
						std::cout << "\tOwnerID: " << variable.Get_General().Get_OwnerID().Get_Value() << std::endl;
					}

					//check if a variable is of type "AnalogInput"
					if (variable.Get_General().Get_Type().Get_Value().Get_Value().compare(giconfig_ConfigAPI::COptions::CCommon::CVariableType::AnalogInput()) == 0)
					{
						std::cout << " -----------> Analog Input found! Type: " << variable.Get_AnalogInput().Get_Type().Get_ActualCombinedValue().Get_Description() << std::endl;
					}
					else if (variable.Get_Alarm() != GInsXmlRpc::XmlRpcValue())  //check if invalid
					{
						std::cout << "   -----> Alarm channel found! " << std::endl;
					}
					else if (variable.Get_AnalogOutput() != GInsXmlRpc::XmlRpcValue())  //check if invalid
					{
						std::cout << "   -----> Analog Output found! " << std::endl;
					}
					else if (variable.Get_Arithmetic() != GInsXmlRpc::XmlRpcValue())  //check if invalid
					{
						std::cout << "   -----> Arithmetic found! " << std::endl;
					}
					else if (variable.Get_DigitalInput() != GInsXmlRpc::XmlRpcValue())  //check if invalid
					{
						std::cout << "   -----> Digital Input found! " << std::endl;
					}
					else if (variable.Get_DigitalOutput() != GInsXmlRpc::XmlRpcValue())  //check if invalid
					{
						std::cout << "   -----> Digital Output found! " << std::endl;
					}
					else if (variable.Get_Remote() != GInsXmlRpc::XmlRpcValue())  //check if invalid
					{
						std::cout << "   -----> Remote Input found!  " << std::endl;
					}
					else if (variable.Get_SetPoint() != GInsXmlRpc::XmlRpcValue())  //check if invalid
					{
						std::cout << "   -----> Setpoint found!  " << std::endl;
					}

					std::cout << std::endl;

					
				}
				else
				{
					//invalid StructTypeID of result
					return false;
				}

			}
			return true;
		}
	}
	return false;

}


bool Examples::GetConfig_Variable_SensorActorNames(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const GInsXmlRpcStdAPI::CGIns_Base_ElementValue Variable)
{
	//"Variable" is of Type "GInsXmlRpcStdAPI::CGIns_Base_ElementValue", which is a struct of 2 strings (ID and VariableName) and 1 image (optional)

	giconfig_ConfigAPI::GetConfigs::CParams Params;
	giconfig_ConfigAPI::GetConfigs::CResults Results;
	TGInsState Ret = GINSSTATE_BuildNone();

	std::string route = "GI.config/";

	// Parameters "IDs" is of type ElementListSelectionList -> multiple ElementValues can be added as value
	GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList SetIDList;

	SetIDList.Set_Value(SetIDList.GetSize_Value(), Variable);

	std::string PropertyName = giconfig_ConfigAPI::CType_Config_Variable::ItemName_General();
	PropertyName += "/";
	PropertyName += giconfig_ConfigAPI::CType_Config_Variable_General::ItemName_ValueHandling();
	PropertyName += "/";
	PropertyName += giconfig_ConfigAPI::CType_Config_Variable_General_ValueHandling::ItemName_Main();
	PropertyName += "/";
	PropertyName += giconfig_ConfigAPI::CType_Config_Variable_General_ValueHandlingSG::ItemName_Linearisation();
	PropertyName += "/";
	PropertyName += giconfig_ConfigAPI::CType_Config_Variable_General_ValueHandlingSG_Linearisation::ItemName_SensorActorName();

	//set parameters for "GetConfigs"-Method
	Params.Set_IDs(SetIDList);
	Params.Set_PropertyName(PropertyName);
	Params.Set_WithImages(false);
	Params.Set_WithOptions(true); //use "true" to load all possibilities of each property


	if (XmlRpcTransport.isConnected())
		Ret = client.execute(route + Params.MethodName(), Params, Results); //execute the method
	else
		return false;

	if (Helper::DecodeReturnState(Ret))
	{
		if (Helper::DecodeReturnState(Results.Get_ReturnState().Get_Value()))
		{

			for (int32_t configIndex = 0; configIndex < Results.GetSize_Configs(); configIndex++)
			{
				giconfig_ConfigAPI::CType_Base_ConfigWithOwner result;
				Results.Get_Configs(configIndex, result); //results are GInsXmlRpcValue

				//identify XmlRpcValue Struct-Type, here -> ElementSelectionList
				if (result.Get_Config().getStructTypeID().compare(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList::StructTypeID()) == 0)
				{
					GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList varsensorlist;
					result.Get_Config(varsensorlist);

					GInsXmlRpcStdAPI::CGIns_Base_ElementValue varid;
					result.Get_ID(varid);

					std::cout << std::endl;
					std::cout << "   variable: " << varid.Get_Description() << " ID: " << varid.Get_Value() << std::endl;
					std::cout << "     list sensor options: " << std::endl;

					for (int index = 0; index < varsensorlist.GetSize_List(); index++)
					{
						GInsXmlRpcStdAPI::CGIns_Base_ElementValue sensor;
						varsensorlist.Get_List(index, sensor);
						std::cout << "          "  << sensor.Get_Description() << " (" << sensor.Get_Value() << ")" << std::endl;
						std::cout << std::endl;
					}

				}
				else
				{
					//invalid StructTypeID of result
					return false;
				}

			}
			return true;
		}
	}
	return false;

}