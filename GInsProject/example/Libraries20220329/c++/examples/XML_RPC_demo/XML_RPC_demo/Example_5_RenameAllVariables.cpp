
#include "Examples.h"
#include <iostream>

#ifdef _MSC_VER
#include <windows.h>
#endif

/*
* This example shows how to read Object (Variable) Properties (here "General/Type") and how to change a single property (here "General/Discription")
* using Methods of GI.config API:
*      giconfig_ConfigAPI.GetConfigs and
*      giconfig_ConfigAPI.SetConfigs
*
*/

void Examples::Example_5_RenameAllVariables()
{
	std::cout << "Example 5: Rename All Variables" << std::endl;
	std::cout << std::endl;

	GInsXmlRpc::XmlRpcClientTransportHTTP 	XmlRpcTransport;
	GInsXmlRpc::XmlRpcClient				XmlRpcClient(XmlRpcTransport);

	char		HostName[1024] = "127.0.0.1"; //localhost
	int			PortXMLRpc = 8090; //GI.service -> needs to be running!

	std::string varName = "NewVarName";

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

		if (VariableIDs.size() == 0)
		{
			std::cout << "No Objects found?" << std::endl;
			break;
		}

		std::cout << "Found " << VariableIDs.size() << " Variables in the Project." << std::endl;
		std::cout << std::endl;


		//Read the type of the variables, to check if it is of Type "Reference" or not...
		//-> to set variable names not on reference-variables in this example
		std::cout << "Read Variable Types...   " << std::endl;

		std::vector<std::string> VariableType;

		if (!GetConfigFromID_Variables_Types(XmlRpcClient, XmlRpcTransport, VariableIDs, VariableType))
		{
			std::cout << "Could not read variable types..." << std::endl;
			break;
		}


		int32_t index = 0;
		for (std::vector<GInsXmlRpcStdAPI::CGIns_Base_ElementValue>::iterator varID = VariableIDs.begin(); varID != VariableIDs.end(); ++varID, index++)
		{
			if (VariableType.at(index).compare(giconfig_ConfigAPI::COptions::CCommon::CVariableType::Reference()) != 0)
			{
				//only display variables of Type != TyREF
				std::cout << varID->Get_Description() << " (" << varID->Get_Value() << ") -> Variable Type: " << VariableType.at(index) << std::endl;
			}
			
		}

		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "Rename Variables of Type != TyRef... " << std::endl;
		std::cout << std::endl;

		if (!SetConfig_WriteVarNames(XmlRpcClient, XmlRpcTransport, VariableIDs, varName, VariableType))
		{
			std::cout << "Could not set variable names..." << std::endl;
			break;
		}

		std::cout << std::endl;
		std::cout << " ----------> All VariableNames set successfully!" << std::endl;


		
	} while (false);

	XmlRpcTransport.Disconnect();
}

bool Examples::GetConfigFromID_Variables_Types(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::vector<GInsXmlRpcStdAPI::CGIns_Base_ElementValue>& IDs, std::vector<std::string>& VariableType)
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

	std::string PropertyName = giconfig_ConfigAPI::CType_Config_Variable::ItemName_General();
	PropertyName += "/";
	PropertyName += giconfig_ConfigAPI::CType_Config_Variable_General::ItemName_Type();


	//set parameters for "GetConfigs"-Method
	Params.Set_IDs(SetIDList);
	Params.Set_PropertyName(PropertyName);
	Params.Set_WithImages(false);
	Params.Set_WithOptions(false);


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
				if (result.Get_Config().getStructTypeID().compare(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList::StructTypeID()) == 0)
				{
					//if the struct ID of the result is valid, create a new variable of the type using the GInsXmlRpcValue of the result
					GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList vartype;
					result.Get_Config(vartype);

					//if necessary, check if type equals a specified value...
					if (vartype.Get_Value().Get_Value() != giconfig_ConfigAPI::COptions::CCommon::CVariableType::Reference())
					{
						VariableType.push_back(vartype.Get_Value().Get_Value());
					}
					else
					{
						VariableType.push_back(giconfig_ConfigAPI::COptions::CCommon::CVariableType::Reference());
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

bool Examples::SetConfig_WriteVarNames(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::vector<GInsXmlRpcStdAPI::CGIns_Base_ElementValue>& IDs, const std::string& varName, const std::vector<std::string> Type)
{
	giconfig_ConfigAPI::SetConfigs::CParams  Params;
	giconfig_ConfigAPI::SetConfigs::CResults Results;
	TGInsState Ret = GINSSTATE_BuildNone();

	std::string route = "GI.config/";

	std::string PropertyName = giconfig_ConfigAPI::CType_Config_Variable::ItemName_General();
	PropertyName += "/";
	PropertyName += giconfig_ConfigAPI::CType_Config_Variable_General::ItemName_Description();

	if (!XmlRpcTransport.isConnected())
	{
		std::cout << "Client not connected!" << std::endl;
		return false;
	}

	for (size_t i = 0; i < IDs.size(); i++)
	{
		//set only variables of type != reference
		if (Type.at(i).compare(giconfig_ConfigAPI::COptions::CCommon::CVariableType::Reference()) != 0)
		{
			GInsXmlRpcStdAPI::CGIns_Edit_StringValue StringValue;

			std::string newname = varName;
			newname += std::to_string(i);
			StringValue.Set_Value(newname);

			std::cout << "Set Property of Object <" << IDs.at(i).Get_Description() << ">: New Name: " << StringValue.Get_Value() << std::endl;

			//set actual ID as Value in list
			GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList SetIDList;
			SetIDList.Set_Value(0, IDs.at(i));

			//set parameters for "SetConfig"-Method
			Params.Set_IDs(SetIDList);
			Params.Set_Config(StringValue);
			Params.Set_PropertyName(PropertyName);
			Params.Set_DisableDRC(false);
			Params.Set_ReturnConfigChangesReasonBitset(0);

			Ret = client.execute(route + Params.MethodName(), Params, Results);

			if (Helper::DecodeReturnState(Ret))
			{
				if (!Helper::DecodeReturnState(Results.Get_ReturnState().Get_Value()))
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}
	}
	return true;
}

