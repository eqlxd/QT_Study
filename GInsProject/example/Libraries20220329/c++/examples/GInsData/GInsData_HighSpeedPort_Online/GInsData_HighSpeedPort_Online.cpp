// GInsDataHighSpeedPortTest.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <float.h>
#include "GInsDataInterface.hpp"

//Activate the examples by using the defines (only one separately) 
//the examles require user input in the console window
#define ONLINE_READSINGLE_OFF
#define ONLINE_READFRAME_ON
#define ONLINE_WRITE_OFF


int main(int argc, char* argv[])
{
	std::string hostname = "192.168.5.82";
	if (argc > 1)
	{
		hostname = argv[1];
	}


	//connect to a process-image on a device using GInsDevicePtr->CreateIGInsDevicePtr
	GIns::Data::GInsDevicePtr device = GIns::Data::IGInsDevice::CreateIGInsDevicePtr(hostname, 10);

	//check if the shared pointer is good	
	if (device)
	{
		std::cout << "Source device Location: " << device->HeaderInterface()->GetLocation() << std::endl;
		std::cout << "Source device SerialNumber: " << device->HeaderInterface()->GetSerialNumber() << std::endl;
		std::cout << "Source device Firmware: " << device->HeaderInterface()->GetFirmwareVersion() << std::endl;
		std::cout << "Source device VarCount: " << device->HeaderInterface()->GetInputVariableCount() << std::endl;
		std::cout << "Source device DataRateHz: " << device->HeaderInterface()->GetDataRateHz() << std::endl;

		std::cout << std::endl;
		std::cout << "Press key to continue... " << std::endl;
		std::cout << std::endl;
		std::getchar();

		//get the timestamp variable
		GIns::Data::IGInsVariablePtr TimestampVar = device->HeaderInterface()->GetGInsTimestampVariable();

		//if success, the shared pointer is good
		if (TimestampVar)
		{
			//it behaves exactly like any other variable, but it can be identified as timestamp
			if (TimestampVar->IsTimeChannel())
			{
				//it should be at offset 0 (beginning of the data frame)
				std::cout << "We found a timestamp variable at offset: " << TimestampVar->GetInputOffset() << std::endl;
				std::cout << "Datatype: " << GIns::Data::IGInsVariable::DataTypeToString(TimestampVar->GetDataType()) << std::endl;
			}
		}


		//get all variables to a std::vector
		std::vector<GIns::Data::IGInsVariablePtr> VariableList;
		device->HeaderInterface()->GetGInsVariables(VariableList);

		//for the data transfer, we will only use these variables!!
		std::cout << "We got " << VariableList.size() << " variables" << std::endl;

		//iterate through all variables (including Timestamp!!)	
		std::vector<GIns::Data::IGInsVariablePtr>::iterator var;
		for (var = VariableList.begin(); var != VariableList.end(); ++var)
		{
			std::cout << "========== " << var->get()->GetName() << " - Ind: " << var->get()->GetTotalIndex() << " ==========" << std::endl;
			std::cout << "Input Index: " << var->get()->GetInputIndex() << std::endl;
			std::cout << "Output Index: " << var->get()->GetOutputIndex() << std::endl;
			std::cout << "Data Direction: " << GIns::Data::IGInsVariable::DataDirectionToString(var->get()->GetDataDirection()) << std::endl;
			std::cout << "Data Type: " << GIns::Data::IGInsVariable::DataTypeToString(var->get()->GetDataType()) << std::endl;
			std::cout << "Variable Kind: " << GIns::Data::IGInsVariable::VariableKindToString(var->get()->GetVarKind()) << std::endl;
			std::cout << std::endl;
		}

		std::cout << std::endl;

		//find certain variable by name

		GIns::Data::IGInsVariablePtr NameVar;
		device->HeaderInterface()->FindGInsVariable("Variable 1", NameVar);
		if (NameVar)
		{
			std::cout << "We found " << NameVar->GetName() << std::endl;
		}


#ifdef ONLINE_READSINGLE_ON

		std::cout << "Type Index of Variable to Read:  ";

		std::string test;
		std::getline(std::cin, test);

		int readIndex;
		try
		{
			readIndex = std::stoi(test);
		}
		catch (...)
		{
			std::cout << "Index '" << test << "' not found! Index set to 0! Press key to continue..." << std::endl;
			readIndex = 0;
			std::getchar();
		}

		if (readIndex >= VariableList.size())
		{
			std::cout << "Index '" << readIndex << "' not found! Index set to 0!  Press key to continue..." << std::endl;
			readIndex = 0;
			std::getchar();
		}

		double value;

		while (true)
		{
			//read single value	 -> check if variable is readable		
			if (VariableList.at(readIndex)->IsReadable())
			{
				device->GetInputVariableValue_Double(*VariableList.at(readIndex), value);
				std::cout << VariableList.at(readIndex)->GetName() << ": " << value << std::endl;
			}

		}

#endif
#ifdef ONLINE_READFRAME_ON

		std::cout << "Frame of all Variables will be read: " << std::endl;

		std::getchar();

		char *frame = new char[device->HeaderInterface()->GetDataFrameLength()];

		bool exit = false;
		while (exit == false)
		{
			//read the whole process image frame -> 1 sample of each channel with same timestamp!
			if (device->GetFrame_Full(frame, device->HeaderInterface()->GetDataFrameLength(), false))
			{
				//read all variables from frame
				for (std::vector<GIns::Data::IGInsVariablePtr>::iterator var = VariableList.begin(); var != VariableList.end(); ++var)
				{
					if (var->get()->IsReadable())
					{
						std::cout << TimestampVar->ConvertFromInputFrameToDCSystemTime(frame) << " - " << var->get()->GetName() << ": " << var->get()->ConvertFromInputFrameToDouble(frame) << std::endl;
					}

				}
				std::cout << std::endl;
				std::cout << "Press key to read new frame... " << std::endl;
				std::getchar();
			}
			else
			{
				std::string msg = "";
				device->GetLastError(msg);
				std::cout << "Error: " << msg << std::endl;
				exit = true;
			}
		}
		delete[] frame;
#endif

#ifdef ONLINE_WRITE_ON

		int writeIndex;

		bool outputIndexFound = false;
		do
		{
			std::cout << "Type Index of Variable to WRITE:  ";

			std::string outputVarIndex;
			std::getline(std::cin, outputVarIndex);

			try
			{
				writeIndex = std::stoi(outputVarIndex);
			}
			catch (...)
			{
				std::cout << "Index '" << outputVarIndex << "' not found! " << std::endl;
				continue;
			}

			//check if variable exists an has an OUTPUT part
			if (writeIndex >= VariableList.size())
			{
				std::cout << "Index '" << writeIndex << "' not found!" << std::endl;
				std::getchar();
			}
			else
			{
				//if variable has no output-part, the outputindex == -1
				if (VariableList.at(writeIndex)->GetOutputIndex() >= 0)
				{
					outputIndexFound = true;
				}
				else
				{
					std::cout << "Index '" << writeIndex << "' is no output variable! " << std::endl;
				}
			}
		} while (!outputIndexFound);


		while (true)
		{
			std::cout << "Write Value:  ";

			//read value from console input
			std::string getValueFromConsole;
			std::getline(std::cin, getValueFromConsole);

			double value;
			try
			{
				value = std::stod(getValueFromConsole);
			}
			catch (...)
			{
				std::cout << "Value '" << getValueFromConsole << "' not valid! " << std::endl;
				continue;
			}

			if (VariableList.at(writeIndex)->IsWritable())
			{
				device->SetOutputVariableValue_Double(*VariableList.at(writeIndex), value);
			}
		}

#endif
	}

	
	std::getchar();

	return 0;
}
