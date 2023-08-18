// GInsDataHighSpeedPortTest.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#ifdef LINUX
#include <unistd.h>
#endif
#ifdef WINDOWS
#include <windows.h>
#endif


#include "GInsDataInterface.hpp"

int main(int argc, char* argv[])
{
	std::string hostname = "192.168.5.82";
	uint32_t	BufferIndex = 0;

	if (argc>1)
	{
		hostname = argv[1];
	}

	//connect to circle buffer (index=0) on a device using GInsDataSourcePtr->CreateIGInsDatasourcePtr
	GIns::Data::GInsDataSourcePtr DataSource = GIns::Data::IGInsDataSource::CreateIGInsDataSourcePtr(hostname, BufferIndex);

	//check if the shared pointer is good
	if(DataSource)																											
	{
		if(DataSource->HeaderInterface()->GetSerialNumber() == NULL)
		{
			std::cout << "Null" << std::endl;
		}
		std::cout << "Source device Location: "        << DataSource->HeaderInterface()->GetLocation()           << std::endl;
		std::cout << "Source device SerialNumber: "    << DataSource->HeaderInterface()->GetSerialNumber()       << std::endl;
		std::cout << "Source device Firmware: "        << DataSource->HeaderInterface()->GetFirmwareVersion()    << std::endl;
		std::cout << "Source device DataRateHz: "      << DataSource->HeaderInterface()->GetDataRateHz()         << std::endl;
		std::cout << "Source device VarCount: "        << DataSource->HeaderInterface()->GetInputVariableCount() << std::endl;
		std::cout << "Source device TimestampType: "   << DataSource->HeaderInterface()->GetActTimestampType()   << std::endl;
		std::cout << "Source device CasingType: "      << DataSource->HeaderInterface()->GetCasingType()         << std::endl;
		std::cout << "Source device DataFrameLength: " << DataSource->HeaderInterface()->GetDataFrameLength()    << std::endl;

		std::cout << std::endl;
		std::cout << "Press key to continue... " << std::endl;
		std::cout << std::endl;
		std::getchar();

		//use the header interface to get the timestamp variable
		GIns::Data::IGInsVariablePtr TimestampVar = DataSource->HeaderInterface()->GetGInsTimestampVariable();				

		//if success, the shared pointer is good
		if (TimestampVar)																									
		{
			//it behaves exactly like any other variable, but it can be identified as timestamp
			if (TimestampVar->IsTimeChannel())																				
			{
				//it should be at offset 0 (beginning of the data frame)
				std::cout << "We found a timestamp variable at offset: " << TimestampVar->GetInputOffset() << std::endl;	
			}
		}

		//try to get the variable at index 0
		//if success, the shared pointer is good
		GIns::Data::IGInsVariablePtr IndexVar = DataSource->HeaderInterface()->FindGInsVariable(0);							
		if (IndexVar)																										
		{
			std::cout << "We found a variable at index 0 with name: " << IndexVar->GetName() << std::endl;					//we get the name as const char* (because std::string cannot be transported between shared library boundries without troubles)
			std::cout << std::endl;																							//be sure that IndexVar is not destructed as long as the char* is used!!
		}

		//try to find a variable with name "Variable 1"
		//if success, the shared pointer is good
		GIns::Data::IGInsVariablePtr NameVar = DataSource->HeaderInterface()->FindGInsVariable("Variable 1");				
		if (NameVar)																										
		{
			std::cout << "We found "  << NameVar->GetName() << std::endl;
		}


		//get all variables to a std::vector
		std::vector<GIns::Data::IGInsVariablePtr> VariableList;
		DataSource->HeaderInterface()->GetGInsVariables(VariableList);

		//for the data transfer, we will only use these variables!!
		std::cout << "We got " << VariableList.size() << " variables" << std::endl;											

		//iterate through all variables (Timestamp is not included!!)	
		std::vector<GIns::Data::IGInsVariablePtr>::iterator var;
		for (var = VariableList.begin(); var != VariableList.end(); ++var)									   
		{
			std::cout << "========== " << var->get()->GetName() << " - Ind: " << var->get()->GetTotalIndex() << " ==========" << std::endl;
			std::cout << "Input Index: "    << var->get()->GetInputIndex()  << std::endl;
			std::cout << "Output Index: "   << var->get()->GetOutputIndex() << std::endl;
			std::cout << "Data Direction: " << GIns::Data::IGInsVariable::DataDirectionToString(var->get()->GetDataDirection()) << std::endl;
			std::cout << "Data Type: "      << GIns::Data::IGInsVariable::DataTypeToString(var->get()->GetDataType())           << std::endl;
			std::cout << "Variable Kind: "  << GIns::Data::IGInsVariable::VariableKindToString(var->get()->GetVarKind()) << std::endl;
			std::cout << std::endl;
		}

		std::getchar();

		//create a frame buffer as iteratable interface to data source
		GIns::Data::FrameBuffer frame_buffer(DataSource->GetFrameWidth());		
		size_t dataSize=0;

		//empty the circular buffer on the device by setting back buffer to zero frames (back time=0)
		//we do this because we dont'want all the historic data on the device , only new data from now on
		DataSource->GetNextFrames_Limit(frame_buffer,dataSize, 0);															
			

		int varNumber = 1;
		GIns::Data::IGInsVariablePtr readVar = DataSource->HeaderInterface()->FindGInsVariable(varNumber);

		bool exit = false;
		while (exit == false)
		{
			size_t size = 0;

			//If we don't specify BackTime we get all frames since last call to "GetNextFrames"
			if (DataSource->GetNextFrames_All(frame_buffer, size))																
			{
				//std::cout << "We received " << frame_buffer.frame_count()  << " frames" << std::endl;

				//iterate through all the frames
				for (GIns::Data::Frame f = frame_buffer.begin(); f != frame_buffer.end(); ++f)								
				{					
					std::cout << readVar->ConvertFromInputFrameToDouble(*f) << std::endl;
				}
			}
			else
			{
				std::cout << "failed to get next frames, overruns: " << DataSource->GetOverruns() << std::endl;
			}
			



#ifdef LINUX
			usleep(100 * 1000)
#endif
#ifdef WINDOWS
			if (GetAsyncKeyState(VK_ESCAPE))
			{
				exit = true;
			}
			_sleep(100);
#endif
			
		}
	}
	std::getchar();

	return 0;
}
