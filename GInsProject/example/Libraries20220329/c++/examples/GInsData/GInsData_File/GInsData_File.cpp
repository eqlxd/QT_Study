// GInsDataHighSpeedPortTest.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//


#include <float.h>
#include "GInsDataInterface.hpp"

int main(int argc, char* argv[])
{
//	std::string fileName = "c:\\temp\\fives___0_2017-11-10_08-24-48_136000.dat"; //use your own dat-file
	std::string fileName = "F:/Logger__0_2022-05-27_23-03-49_145000.dat";
	//if there is a command line argument, we take it as file name
	if (argc > 1)
	{
		fileName = argv[1];
	}
	//Create a file interface
	GIns::Data::GInsDataSourcePtr DataSource = GIns::Data::IGInsDataSource::CreateIGInsDataSourcePtr(fileName);				//try to "connect" to a file with the name specified
	if (DataSource)																											//check if the shared pointer is good
	{
		std::cout << "Source device Name: " << DataSource->HeaderInterface()->GetLocation() << std::endl;					//Read some global information
		std::cout << "Source device Serial Number: " << DataSource->HeaderInterface()->GetSerialNumber() << std::endl;		//..
		std::cout << "Source device Firmware Version: " << DataSource->HeaderInterface()->GetFirmwareVersion() << std::endl; //..
		std::cout << "Source device Type Code: " << DataSource->HeaderInterface()->GetMID() << std::endl;					//..

		GIns::Data::IGInsVariablePtr TimestampVar = DataSource->HeaderInterface()->GetGInsTimestampVariable();				//use the header interface to get the timestamp variable
		if (TimestampVar)																									//if success, the shared pointer is good
		{
			if (TimestampVar->IsTimeChannel())																				//it behaves exactly like any other variable, but it can be identified as timestamp
			{
				std::cout << "We found a timestamp variable at offset: " << TimestampVar->GetInputOffset() << std::endl;	//it should be at offset 0 (beginning of the data frame)
			}
		}
		GIns::Data::IGInsVariablePtr IndexVar = DataSource->HeaderInterface()->FindGInsVariable(0);							//try to get the variable at index 0
		if (IndexVar)																										//if success, the shared pointer is good
		{
			std::cout << "We found a variable at index 0 with name: " << IndexVar->GetName() << std::endl;					//we get the name as const char* (because std::string cannot be transported between shared library boundries without troubles)
			//be sure that IndexVar is not destructed as long as the char* is used!!
		}
		GIns::Data::IGInsVariablePtr NameVar = DataSource->HeaderInterface()->FindGInsVariable("Variable 1");				//try to find a variable with name "Variable 1"
		if (NameVar)																										//if success, the shared pointer is good
		{
			std::cout << "We found " << NameVar->GetName() << std::endl;
			std::cout << "Unit: " << NameVar->GetUnit() << std::endl;														//Get the unit as configured (could be empty)
			std::cout << "DataType: " << GIns::Data::IGInsVariable::DataTypeToString(NameVar->GetDataType()) << std::endl;	//there is a static converter method to get the data type as text
			std::cout << "Direction: "
				<< GIns::Data::IGInsVariable::DataDirectionToString(NameVar->GetDataDirection()) << std::endl;				//the same for data direction
			std::cout << "Variable Kind: "
				<< GIns::Data::IGInsVariable::VariableKindToString(NameVar->GetVarKind()) << std::endl;						//and variable kind
		}
		std::vector<GIns::Data::IGInsVariablePtr> VariableList;
		DataSource->HeaderInterface()->GetGInsVariables(VariableList);														//get all variables to a std::vector
		std::cout << "We got " << VariableList.size() << " variables" << std::endl;											//for the data transfer, we will only use these variables 

		GIns::Data::FrameBuffer frame_buffer(DataSource->GetFrameWidth());													//create a frame buffer as iteratable interface to the data source
		std::cout << "Number of Frames in File: " << DataSource->GetBufferSize() / DataSource->GetFrameWidth() << std::endl;
		size_t size = 0;																								
		while (DataSource->GetNextFrames_All(frame_buffer, size))															//If we don't specify BackTime we get all frames since last call to "GetNextFrames"
		{
			std::cout << "We received " << frame_buffer.frame_count()  << " frames" << std::endl;
			for (GIns::Data::Frame f = frame_buffer.begin(); f != frame_buffer.end(); ++f)									//iterate through all the frames
			{
				std::vector<GIns::Data::IGInsVariablePtr>::iterator var;
				for (var = VariableList.begin(); var != VariableList.end(); ++var)											//iterate through all variables (Timestamp is not included!!)	
				{
					std::cout << var->get()->GetName()																		//printing name and value can be quite slow
						<< " : " 
						<< var->get()->ConvertFromInputFrameToDouble(*f) 
						<< ", ";
				}
				std::cout << std::endl;
			}
		}
	}
	std::getchar();
	return 0;
}
