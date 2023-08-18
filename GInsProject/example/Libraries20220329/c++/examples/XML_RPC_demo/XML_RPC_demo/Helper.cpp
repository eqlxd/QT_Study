#include "Helper.h"

#include <thread>
#include <chrono>

//GI.service Config API
#include "giservice_ConfigAPI_Types.h"

#include <iostream>

bool Helper::DecodeReturnState(const TGInsState &Returnstate)
{
	if (GINSSTATE_IsLevel_Error(Returnstate) || GINSSTATE_IsLevel_Warning(Returnstate))
	{
		std::cout << CGInsState::GetTypeText(GINSSTATE_GetType(Returnstate)).c_str()
			<< " - "
			<< CGInsState::GetLevelText(GINSSTATE_GetLevel(Returnstate))
			<< std::endl;

		return false;
	}

	return true;
}

bool Helper::DecodeReturnLists(const giconfig_ConfigAPI::CType_Info_ReturnLists &ReturnLists)
{
	int states = ReturnLists.GetSize_States();
	for (int i = 0; i < states; i++)
	{
		//std::cout << ReturnLists.Get_States(i).Get_ID().c_str() << std::endl;
		int listsize = ReturnLists.Get_States(i).GetSize_List();
		for (int j = 0; j < listsize; j++)
		{
			GInsXmlRpcStdAPI::CGIns_Info_State info;
			ReturnLists.Get_States(i).Get_List(j).Get_State(info);
			std::cout << "State " << i << "-" << j << ": " << info.Get_Description().c_str() << std::endl;
		}
		std::cout << std::endl;
	}

	return true;
}

bool Helper::HandleProject_ClearProjectClearAutostart(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport)
{
	//removes existing project from GI.bench
	//-> client connected to gi.service -> localhost/8090

	giservice_ConfigAPI::HandleProject::CParams Params;
	giservice_ConfigAPI::HandleProject::CResults Results;
	TGInsState Ret = GINSSTATE_BuildNone();

	GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList tmpSelectionList;

	GInsXmlRpcStdAPI::CGIns_Base_ElementValue action;
	action.Set_Value(giservice_ConfigAPI::COptions::CCommon::CHandleProjectType::ClearProjectClearAutostart());
	tmpSelectionList.Set_Value(action);

	//set Params
	Params.Set_Action(tmpSelectionList);
	Params.Set_ProjectName("");
	Params.Set_ProjectPath("");

	if (XmlRpcTransport.isConnected())
		Ret = client.execute(Results.MethodName(), Params, Results, 100000);
	else
	{
		std::cout << "Client not connected!" << std::endl;
		return false;
	}


	if (DecodeReturnState(Ret))
	{
		if (DecodeReturnState(Results.Get_ReturnState().Get_Value()))
		{
			return true;
		}
	}
	return false;
}

bool Helper::HandleProject_LoadProject(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::string& Path)
{

	giservice_ConfigAPI::HandleProject::CParams Params;
	giservice_ConfigAPI::HandleProject::CResults Results;
	TGInsState Ret = GINSSTATE_BuildNone();

	GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList tmpSelectionList;

	GInsXmlRpcStdAPI::CGIns_Base_ElementValue action;
	action.Set_Value(giservice_ConfigAPI::COptions::CCommon::CHandleProjectType::LoadProject());
	tmpSelectionList.Set_Value(action);

	//set Params
	Params.Set_Action(tmpSelectionList);
	Params.Set_ProjectName("");
	Params.Set_ProjectPath(Path);

	if (XmlRpcTransport.isConnected())
		Ret = client.execute(Results.MethodName(), Params, Results, 100000);
	else
	{
		std::cout << "Client not connected!" << std::endl;
		return false;
	}


	if (DecodeReturnState(Ret))
	{
		if (DecodeReturnState(Results.Get_ReturnState().Get_Value()))
		{
			return true;
		}
	}
	return false;
}

bool Helper::HandleConfig_WriteAllUpdate(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::string &ConnectionToken)
{
	gicom_DeviceConfigAPI::HandleConfig::CParams  Params;
	gicom_DeviceConfigAPI::HandleConfig::CResults Results;
	TGInsState Ret = GINSSTATE_BuildNone();

	Params.Set_Token(ConnectionToken);

	GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList tmpSelectionList;

	GInsXmlRpcStdAPI::CGIns_Base_ElementValue action;
	action.Set_Value(gicom_DeviceConfigAPI::COptions::CCommon::CActionType::WriteAllUpdate());
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

	if (DecodeReturnState(Ret))
	{
		if (DecodeReturnState(Results.Get_ReturnState().Get_Value()))
		{
			return true;
		}
	}

	return false;
}

bool Helper::ConnectToDevice(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::string& IP, std::string& ConnectionToken, std::string& Path)
{
	//Use the API Method GI.com->Connect() to change controller state to "Configuration Mode"
	//Depending on the location of connected GI.com (localhost or Q.station) parameters of the Method are a bit different!!

	gicom_DeviceConfigAPI::Connect::CParams  Params;
	gicom_DeviceConfigAPI::Connect::CResults Results;
	TGInsState Ret = GINSSTATE_BuildNone();

	std::string route = "GI.com/";

	Params.Set_ID("");
	Params.Set_IPAddress(IP);
	Params.Set_Password("");
	Params.Set_ProjectPath("");
	Params.Set_Username("");

	if (XmlRpcTransport.isConnected())
		Ret = client.execute(route + Params.MethodName(), Params, Results, 100000);
	else
	{
		std::cout << "Client not connected!" << std::endl;
		return false;
	}


	if (DecodeReturnState(Ret))
	{
		if (DecodeReturnState(Results.Get_ReturnState().Get_Value()))
		{
			Results.Get_Token(ConnectionToken);
			Results.Get_ProjectPath(Path);
			return true;
		}
	}

	return false;
}

bool Helper::DisconnectFromDevice(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::string& ConnectionToken)
{
	gicom_DeviceConfigAPI::Disconnect::CParams  Params;
	gicom_DeviceConfigAPI::Disconnect::CResults Results;
	TGInsState Ret = GINSSTATE_BuildNone();

	Params.Set_Token(ConnectionToken);

	std::string route = "GI.com/";

	if (XmlRpcTransport.isConnected())
		Ret = client.execute(route + Params.MethodName(), Params, Results, 100000);
	else
	{
		std::cout << "Client not connected!" << std::endl;
		return false;
	}
	if (DecodeReturnState(Ret))
	{
		if (DecodeReturnState(Results.Get_ReturnState().Get_Value()))
		{
			return true;
		}
	}

	return false;

}

bool Helper::GetConfigState_Stable(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::string& ConnectionToken, const int32_t Timeout_S, bool& Stable)
{
	/**
	Use the API Method GI.com -> GetConfigState() to check the actual configuration state
	As Result you get information of type "CType_Info_ConfigState" -> See GI.com documentation
	*/

	gicom_DeviceConfigAPI::GetConfigState::CParams Params;
	gicom_DeviceConfigAPI::GetConfigState::CResults Results;

	gicom_DeviceConfigAPI::CType_Info_ConfigState state; 
	TGInsState Ret = GINSSTATE_BuildNone();
	Stable = false;

	Params.Set_ClearEvents(true);
	Params.Set_Token(ConnectionToken);

	std::string route = "GI.com/";

	if (!XmlRpcTransport.isConnected())
		return false;

	clock_t before = clock();
	int msec = 0;

	while ((msec < Timeout_S * 1000) && !Stable && !GINSSTATE_IsLevel_Error(Ret))
	{
		std::cout << "Waiting for stable... " << std::endl;
		clock_t diff = clock() - before;
		msec = diff * 1000 / CLOCKS_PER_SEC;

		Ret = client.execute(route + Params.MethodName(), Params, Results, 100000);
		Results.Get_ConfigState(state);
		Stable = state.Get_Stable();

		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	}
	if (DecodeReturnState(Ret))
	{
		if (DecodeReturnState(Results.Get_ReturnState().Get_Value()))
		{
			return true;
		}
	}

	return false;
}

bool Helper::GetConfigState_MeasMode(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const int32_t Timeout_S, bool& MeasModeActive)
{
	/**
	Use the API Method GI.com -> GetConfigState() to check the actual configuration state
	As Result you get information of type "CType_Info_ConfigState" -> See GI.com documentation
	*/

	gicom_DeviceConfigAPI::GetConfigState::CParams Params;
	gicom_DeviceConfigAPI::GetConfigState::CResults Results;

	gicom_DeviceConfigAPI::CType_Info_ConfigState state;
	TGInsState Ret = GINSSTATE_BuildNone();

	Params.Set_ClearEvents(true);
	Params.Set_Token("");

	std::string route = "GI.com/";

	if (!XmlRpcTransport.isConnected())
		return false;

	clock_t before = clock();
	int msec = 0;

	while ((msec < Timeout_S * 1000) && !MeasModeActive && !GINSSTATE_IsLevel_Error(Ret))
	{
		std::cout << "Waiting for 'Measurement Mode' == active... " << std::endl;
		clock_t diff = clock() - before;
		msec = diff * 1000 / CLOCKS_PER_SEC;

		Ret = client.execute(route + Params.MethodName(), Params, Results, 100000);
		Results.Get_ConfigState(state);
		MeasModeActive = state.Get_MeasModeActive();

		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	}

	if (msec > Timeout_S * 1000)
	{
		std::cout << "Timeout!" << std::endl;
	}
	if (!MeasModeActive)
	{
		std::cout << "Measurement Mode not active! " << std::endl;
	}
	

	if (DecodeReturnState(Ret))
	{
		if (DecodeReturnState(Results.Get_ReturnState().Get_Value()))
		{
			if (MeasModeActive)
				return true;
			else
				return false;
		}
	}

	return false;
}

bool Helper::GetIDsFromObjectType(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const std::string &Type, std::vector<GInsXmlRpcStdAPI::CGIns_Base_ElementValue> &IDs)
{
	// "GetIDsFromObjectType" deliveres all Object IDs from selected Object type
	// "Type" is defined in Use Type: ''COptions::CCommon::CObjectType::...''

	giconfig_ConfigAPI::GetIDsFromObjectType::CParams Params;
	giconfig_ConfigAPI::GetIDsFromObjectType::CResults Results;
	TGInsState Ret = GINSSTATE_BuildNone();

	std::string route = "GI.config/";

	//std::cout << "Execute XML-RPC Method: <" << Route + Results.MethodName() << "> from Type: <" << Type << ">\n " << std::endl;

	GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList SetObjectType;
	GInsXmlRpcStdAPI::CGIns_Base_ElementValue ObjectType;
	ObjectType.Set_Value(Type);
	SetObjectType.Set_Value(ObjectType);
	Params.Set_Type(SetObjectType);

	if (!XmlRpcTransport.isConnected())
		return false;
	

	Ret = client.execute(route + Results.MethodName(), Params, Results); //execute the method


	if (DecodeReturnState(Ret))
	{
		if (DecodeReturnState(Results.Get_ReturnState().Get_Value()))
		{
			GInsXmlRpcStdAPI::CGIns_Info_ElementList IDlist;
			if (Results.Get_IDs(IDlist))
			{
				int count = IDlist.GetSize_List(); //get the size of the array
				for (int i = 0; i < count; i++)
				{
					GInsXmlRpcStdAPI::CGIns_Base_ElementValue ID;
					IDlist.Get_List(i, ID);
					IDs.push_back(ID);
				}
				if (count == 0)
				{
					return false;
				}
				return true;

			}
		}
	}
	return false;

}

bool Helper::StartDeviceScan(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport)
{
	gicom_DeviceConfigAPI::StartDeviceScan::CParams Params;
	gicom_DeviceConfigAPI::StartDeviceScan::CResults Results;

	TGInsState Ret = GINSSTATE_BuildNone();

	std::string route = "GI.com/";

	GInsXmlRpcStdAPI::CGIns_Base_ElementValue valNC;
	GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList listNC;

	valNC.Set_Value(gicom_DeviceConfigAPI::COptions::CCommon::CDeviceScanType::NetworkController());
	listNC.Set_Value(valNC);

	Params.Set_Interface(listNC);

	if (!XmlRpcTransport.isConnected())
		return false;


	Ret = client.execute(route + Results.MethodName(), Params, Results); //execute the method

	if (DecodeReturnState(Ret))
	{
		if (DecodeReturnState(Results.Get_ReturnState().Get_Value()))
		{
			return true;			
		}
	}
	return false;
}

bool Helper::GetDeviceScanResult(GInsXmlRpc::XmlRpcClient &client, const GInsXmlRpc::XmlRpcClientTransportHTTP &XmlRpcTransport, const int32_t TimeOut_s, std::vector<gicom_DeviceConfigAPI::CType_Info_DeviceScanResult>& ScanInfo, bool& Scanfinished)
{
	gicom_DeviceConfigAPI::GetDeviceScanResult::CResults Results;

	TGInsState Ret = GINSSTATE_BuildNone();

	std::string route = "GI.com/";

	Scanfinished = false;

	if (!XmlRpcTransport.isConnected())
		return false;

	clock_t before = clock();
	int msec = 0;

	while ((msec < TimeOut_s * 1000) && !Scanfinished && !GINSSTATE_IsLevel_Error(Ret))
	{
		std::cout << "Waiting for ScanFinish... " << std::endl;
		clock_t diff = clock() - before;
		msec = diff * 1000 / CLOCKS_PER_SEC;

		Ret = client.execute(route + Results.MethodName(), GInsXmlRpc::XmlRpcValue(), Results);

		Scanfinished = Results.Get_ScanFinished();

		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	}

	if (msec > TimeOut_s * 1000)
	{
		std::cout << "Timeout!" << std::endl;
	}
	if (!Scanfinished)
	{
		std::cout << "Scan not finished! " << std::endl;
	}


	if (DecodeReturnState(Ret))
	{
		if (DecodeReturnState(Results.Get_ReturnState().Get_Value()))
		{
			if (Results.GetSize_ScanResult() == 0)
			{
				return false;
			}
			for (int i = 0; i < Results.GetSize_ScanResult(); i++)
			{
				ScanInfo.push_back(Results.Get_ScanResult(i));
			}
			return true;
		}
	}
	return false;
}




//****************************************************************************************************************************
//****************************************************************************************************************************
std::string Helper::GenerateSpecialString(
	const TEnumSpecialString &EnumSpecialString)
{
	std::string Result;
	switch (EnumSpecialString)
	{
	case eSpecialString_ArrowRight:{        APPEND_UTF16CONST_TO_STRING(Result, "\u25BA");        break; }
	case eSpecialString_Micro:{             APPEND_UTF16CONST_TO_STRING(Result, "\u00B5");        break; }
	case eSpecialString_Degree:{            APPEND_UTF16CONST_TO_STRING(Result, "\u00B0");        break; }
	case eSpecialString_Copyright:{         APPEND_UTF16CONST_TO_STRING(Result, "\u00A9");        break; }
	case eSpecialString_Registered:{        APPEND_UTF16CONST_TO_STRING(Result, "\u00AE");        break; }

	case eSpecialString_ae:{                APPEND_UTF16CONST_TO_STRING(Result, "\u00E4");        break; }      // ä
	case eSpecialString_oe:{                APPEND_UTF16CONST_TO_STRING(Result, "\u00F6");        break; }      // ö
	case eSpecialString_ue:{                APPEND_UTF16CONST_TO_STRING(Result, "\u00FC");        break; }      // ü

	case eSpecialString_ss:{                APPEND_UTF16CONST_TO_STRING(Result, "\u00DF");        break; }      // ß

	case eSpecialString_AE:{                APPEND_UTF16CONST_TO_STRING(Result, "\u00C4");        break; }      // Ä
	case eSpecialString_OE:{                APPEND_UTF16CONST_TO_STRING(Result, "\u00D6");        break; }      // Ö
	case eSpecialString_UE:{                APPEND_UTF16CONST_TO_STRING(Result, "\u00DC");        break; }      // Ü

	default: {                                     Result = "???";                   break;       }
	}
	return (Result);
}

//****************************************************************************************************************************


