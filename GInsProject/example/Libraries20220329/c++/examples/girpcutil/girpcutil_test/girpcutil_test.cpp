// GInsRpcUtilityLib_Test.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//
#include <iostream>

#include "GInsRpcUtilityLib.h"

using namespace std;

// In this Example we want to Work with offline projects in GI.bench
// GI.bench helps us by automatically creating a new project if no one exists.
// So we have to start and open GI.bench first, until we see a new empty default project in the configuration window.
// Then we will add a new controller to this GI.bench project 

int main(int argc, char **argv)
{
	char ErrorMsg[1024] = {0};

	//We connect to a GI.bench on this PC
	const std::string& url = "127.0.0.1";
	int32_t port = 8090;

	//The connection handle as reference to the connection.
	RPC_CONN hConnection = -1;

	//Connect to the RPC Server of GI.bench - the connection handle will be 0 now -> first connection in the list. (up to 999 parallel connections are theoretically possible)
	if (_CD_GInsRpcUtil_Connect(url.c_str(), port, 10000, &hConnection, ErrorMsg, sizeof(ErrorMsg)) != GIRPC_OK)
	{
		std::cout << ErrorMsg << std::endl;
		return -1;
	}

	// We assume that GI.bench automatically created a new Project after startup (default behaviour).
	// First thing to do is to get the ID of this project object we want to work with.
	// We read the params rpc value for the GI.config CreateObject method because we don't want to provide the params value on our own.
	// We know that GI.config provides a quite good default params value where most of the default values are already ok.
	RPC_VALUE hParams = -1;
	if (_CD_GInsRpcUtil_GetRpcMethodParams(hConnection, "GI.config/ConfigAPI.GetIDsFromObjectType", 10000, &hParams, ErrorMsg, sizeof(ErrorMsg)) != GIRPC_OK)
	{
		std::cout << ErrorMsg << std::endl;
		return -1;
	}
	// Somethimes there are many default values in the default params value we read before, but we can ignore most of them.
	// Even if there are new options available in the params of this method we can leave them default because we tested with GI.monitor that they are good for this usecase. 
	// We just set the Type of object we want to create to "TyPrj" -> this means project. 
	// (There is a header file available with all option strings (Like TyPrj) of GI.config - but we simply hard code it here to keep dependencies small. 
	// We identified the correct value via GI.monitor instead) 
	if (_CD_GInsRpcUtil_RpcValue_SetString(hParams, "Type/Value/Value", -1, "TyPrj", ErrorMsg, sizeof(ErrorMsg)) != GIRPC_OK)
	{
		std::cout << ErrorMsg << std::endl;
		return -1;
	}
	//Now we call the Methods
	RPC_VALUE hResults = -1;
	if (_CD_GInsRpcUtil_ExecuteRpcMethod(hConnection, "GI.config/ConfigAPI.GetIDsFromObjectType", 10000, &hParams, &hResults, true, ErrorMsg, sizeof(ErrorMsg)) != GIRPC_OK)
	{
		std::cout << ErrorMsg << std::endl;
		return -1;
	}
	//And read the ID from the first object in the list (we assume that we always have only 1 bject/project)
	char ProjectID[128];
	if (_CD_GInsRpcUtil_RpcValue_GetString(hResults, "IDs/List/%0/Value", -1, ProjectID,sizeof(ProjectID), ErrorMsg, sizeof(ErrorMsg)) != GIRPC_OK)
	{
		std::cout << ErrorMsg << std::endl;
		return -1;
	}
	//Now we should have the UUID for the Project


	// Next step is to create a new Controller on our project
	// We read also the params for the CreateObject method
	// We overwrite the hParams instance here by leaving the positive handle value as it is!! We do this because we don't need the old params value for reading the ID's any more!
	// In this case, the params value will simply be overwritten.
	if (_CD_GInsRpcUtil_GetRpcMethodParams(hConnection, "GI.config/ConfigAPI.CreateObject", 10000, &hParams, ErrorMsg, sizeof(ErrorMsg)) != GIRPC_OK)
	{
		std::cout << ErrorMsg << std::endl;
		return -1;
	}
	// We want to create a controller
	if (_CD_GInsRpcUtil_RpcValue_SetString(hParams, "Type/Value/Value", -1, "TyCtr", ErrorMsg, sizeof(ErrorMsg)) != GIRPC_OK)
	{
		std::cout << ErrorMsg << std::endl;
		return -1;
	}
	// We set the owner id to our project id (all objects in GI.config have to be linked together via ID's..) 
	if (_CD_GInsRpcUtil_RpcValue_SetString(hParams, "OwnerID", -1,ProjectID, ErrorMsg, sizeof(ErrorMsg)) != GIRPC_OK)
	{
		std::cout << ErrorMsg << std::endl;
		return -1;
	}
	// We create the new controller
	if (_CD_GInsRpcUtil_ExecuteRpcMethod(hConnection, "GI.config/ConfigAPI.CreateObject", 10000, &hParams, &hResults, true, ErrorMsg, sizeof(ErrorMsg)) != GIRPC_OK)
	{
		std::cout << ErrorMsg << std::endl;
		return -1;
	}
	//We also store the ID of the new controller. We could also read it later on like we did with the project ID
	char ControllerID[128];
	if (_CD_GInsRpcUtil_RpcValue_GetString(hResults, "ID/Value", -1, ControllerID, sizeof(ProjectID), ErrorMsg, sizeof(ErrorMsg)) != GIRPC_OK)
	{
		std::cout << ErrorMsg << std::endl;
		return -1;
	}

	// We are not ready yet....
	// Controllers are quite complex and depending on the type of controller, some additional sub objects have to be created.
	// If we don't do that, the controller object is created but GI.config reports a lot of errors because it is not ready.
	// That's why there is an assistant call which can be done on the top object and automatically creates all missing mandatory sub objects in the whole project tree.
	// We could also create multiple controllers first and then execute this call later which would complete all controllers within one step
	// We read the params to a new params value here (hParams1=-1) because maybe we want to use the params value for object creation later on.
	RPC_VALUE hParams1 = -1;
	if (_CD_GInsRpcUtil_GetRpcMethodParams(hConnection, "GI.config/ConfigAPI.CallAssistant", 10000, &hParams1, ErrorMsg, sizeof(ErrorMsg)) != GIRPC_OK)
	{
		std::cout << ErrorMsg << std::endl;
		return -1;
	}
	// We set the ID of the top object (which is our project)
	if (_CD_GInsRpcUtil_RpcValue_SetString(hParams1, "ID/Value/Value", -1, ProjectID, ErrorMsg, sizeof(ErrorMsg)) != GIRPC_OK)
	{
		std::cout << ErrorMsg << std::endl;
		return -1;
	}
	if (_CD_GInsRpcUtil_ExecuteRpcMethod(hConnection, "GI.config/ConfigAPI.CallAssistant", 10000, &hParams1, &hResults, true, ErrorMsg, sizeof(ErrorMsg)) != GIRPC_OK)
	{
		std::cout << ErrorMsg << std::endl;
		return -1;
	}

	// Now if we go to GI.bench again, we can select the Project and press Strg + R (means re-read) and then we should see our new controller in the project
	// Our example configuration tool operates at the same time on the same project like GI.bench.
	// If something is too difficult here, we can do some configuration steps with GI.bench and do only certain steps here.
	// E.g.: Doing big structural changes with GI.bench and just change some variable configuration options (scaling, filter, ...) from here.


	//We can now play around with other library functions.

//We can read the Config of the controller object to a rpc value
	if (_CD_GInsRpcUtil_GetRpcMethodParams(hConnection, "GI.config/ConfigAPI.GetConfigs", 10000, &hParams1, ErrorMsg, sizeof(ErrorMsg)) != GIRPC_OK)
	{
		std::cout << ErrorMsg << std::endl;
		return -1;
	}
	// We set the ID of the controller
	// This structure is a little bit different becase we can read the configs of multiple objects at once 
	if (_CD_GInsRpcUtil_RpcValue_SetString(hParams1, "IDs/Value/%0/Value", -1, ControllerID, ErrorMsg, sizeof(ErrorMsg)) != GIRPC_OK)
	{
		std::cout << ErrorMsg << std::endl;
		return -1;
	}
	//We always store it to the same results rpc value
	if (_CD_GInsRpcUtil_ExecuteRpcMethod(hConnection, "GI.config/ConfigAPI.GetConfigs", 10000, &hParams1, &hResults, true, ErrorMsg, sizeof(ErrorMsg)) != GIRPC_OK)
	{
		std::cout << ErrorMsg << std::endl;
		return -1;
	}

//We can serialize and print the config rpc value
    //Since this document can be big we have to calculate the size first to be able to allocate anough memory..
	size_t json_size = 0;
	if (_CD_GInsRpcUtil_RpcValue_GetRpcValue_Size(hResults, "Configs/%0/Config", -1, &json_size, RPC_JSON_TAG_SET1_PRETTY, ErrorMsg, sizeof(ErrorMsg)) != GIRPC_OK)
	{
		std::cout << ErrorMsg << std::endl;
		return -1;
	}
	if (json_size > 0)
	{
		char* raw_json = new char[json_size];

		if (_CD_GInsRpcUtil_RpcValue_GetRpcValue_String(hResults, "Configs/%0/Config", -1, raw_json, json_size, RPC_JSON_TAG_SET1_PRETTY, ErrorMsg, sizeof(ErrorMsg)) == GIRPC_OK)
		{
			std::cout << raw_json << std::endl;
		}
		if (raw_json)
		{
			delete[] raw_json;
		}
	}
	// In the console we see a really big json now.
	// It is not always necessary to read and serialize the complete configuration parameter set of an object!!
	// This configuration object includes pictures and all the paramerter lists are filled with all available additional configuration possibilities the project actually provides
	// This can be un-selected with parameters of the GetConfigs method.

	// It is also not neccessary to read the full configuration of an object.
	// Since this configs can become realy really really big, it is possible to read only a small part the configuration of an object.
	// This is done with the parameter PropertyName where all configuration options can be selected via a path like syntax
	// (can be tested with GI.monitor first)


//We can read a part of this RPC Result value also to an additional RPC value
    // We read only the sychronisation settings
	RPC_VALUE newValue=-1;
	if (_CD_GInsRpcUtil_RpcValue_GetRpcValue(hResults, "Configs/%0/Config/Synchronization", -1, &newValue, ErrorMsg, sizeof(ErrorMsg)) != GIRPC_OK)
	{
		std::cout << ErrorMsg << std::endl;
		return -1;
	}
	// We got a new RPC value in newValue copied from the sum member of the source value

	_CD_GInsRpcUtil_Disconnect(hConnection);
	_CD_GInsRpcUtil_ClearValues(NULL,0);

	return 0;
}
