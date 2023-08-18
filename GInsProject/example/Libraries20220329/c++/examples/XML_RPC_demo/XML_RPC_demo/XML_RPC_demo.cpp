// XmlRpc_Demo.cpp : Definiert den Einstiegspunkt fr die Konsolenanwendung.
//

/*
*
* These Examples show how to work with Gantner Instruments XML-RPC client, Types, Options...
*
*
*  Activate the examples by activating only 1 example of the "Examples" class.
*  Use your own "Device IP-Address" in the Examples!
*
*
*  A detailled description for XML-RPC APIs can be found in Gantner Instruments "Doku-Wiki"
*  Similar Examples are available in C#
*/


#include <iostream>

//the "Examples.h" file includes all API header files needed for the proviced Examples. Additional files might be included for other functions.
#include "Examples.h"



int main(int argc, char* argv[])
{

	Examples ex;
	//ex.Example_1_ReadProjectFromController();
	//ex.Example_2_WriteProjectToController();
	//ex.Example_3_ReadProjectFromFile();
	//ex.Example_4_ScanDevices();
	//ex.Example_5_RenameAllVariables();
	ex.Example_6_ReadVariableProperties();
	//ex.Example_7_ReadQstationSummary();
	//ex.Example_8_RenameAllVariables_2();



	std::cout << "press key to finish..." << std::endl;
	getchar();
	return 0;
}

