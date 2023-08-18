// GInsData_PostProcessBuffer.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//


#include <float.h>
#include "GInsDataInterface.hpp"

#include <chrono>
#include <thread>

int main(int argc, char* argv[])
{

	// this example shows how to connect to a postprocess buffer on your localhost (GI.bench)


	//get local buffercount (GI.bench running + 1 controller connected)
	uint16_t buffercnt = GIns::Data::GetBufferCount();
	std::string ID;
	std::string Name;

	if (buffercnt > 0)
	{
		//get local postprocess buffes
		std::vector<std::pair<std::string, std::string>>  buffers;

		GIns::Data::IGInsDataBuffer::GetBuffers(buffers);

		for (std::vector<std::pair<std::string, std::string>>::iterator buffer = buffers.begin(); buffer != buffers.end(); ++buffer)
		{
			ID = buffer->first;
			Name = buffer->second;
				std::cout << "Found Buffer - Name: "<< Name << "  ID: " << ID << std::endl;
		}

	}

	GIns::Data::GInsDataSourcePtr DataSource = GIns::Data::IGInsDataSource::CreateIGInsDataSourcePtr(ID, GIRT_CBUF_PROP_MODE_STREAM);

	if (DataSource)
	{
		std::cout << "Source device Location: " << DataSource->HeaderInterface()->GetLocation() << std::endl;
		std::cout << "Source device SerialNumber: " << DataSource->HeaderInterface()->GetSerialNumber() << std::endl;
		std::cout << "Source device Firmware: " << DataSource->HeaderInterface()->GetFirmwareVersion() << std::endl;
		std::cout << "Source device DataRateHz: " << DataSource->HeaderInterface()->GetDataRateHz() << std::endl;
		std::cout << "Source device VarCount: " << DataSource->HeaderInterface()->GetInputVariableCount() << std::endl;
		std::cout << "Source device TimestampType: " << DataSource->HeaderInterface()->GetActTimestampType() << std::endl;
		std::cout << "Source device CasingType: " << DataSource->HeaderInterface()->GetCasingType() << std::endl;
		std::cout << "Source device DataFrameLength: " << DataSource->HeaderInterface()->GetDataFrameLength() << std::endl;



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
				<< GIns::Data::IGInsVariable::DataDirectionToString(NameVar->GetDataDirection()) << std::endl;		//the same for data direction
			std::cout << "Variable Kind: "
				<< GIns::Data::IGInsVariable::VariableKindToString(NameVar->GetVarKind()) << std::endl;				//and variable kind
		}
		std::vector<GIns::Data::IGInsVariablePtr> VariableList;
		DataSource->HeaderInterface()->GetGInsVariables(VariableList);														//get all variables to a std::vector
		std::cout << "We got " << VariableList.size() << "input variables" << std::endl;		     						//for the data transfer, we will only use these variables 

		GIns::Data::FrameBuffer frame_buffer(DataSource->GetFrameWidth());													//create a frame buffer as iteratable interface to data source

		size_t dataSize = 0;

		if (TimestampVar)
		{
			uint64_t startTimeDC = 0;
			uint64_t endTimeDC = 0;

			//reading data from a postprocessbuffer is the same as we do in example "HighspeedPort_Buffer"
			//this example shows how to read a time range of a buffer (GetTimeRange) and jump to a certain timestamp
			//using "Seek_Timestamp"
			//these functions can be used for example to synchronize buffer streams in the program (check if timestamps of buffers are within
			//startTimeDC/endTimeDC, use a common TimeStamp to set the read position with Seek_Timestamp

			while (true)
			{
				if (!DataSource->Seek(1, true))
				{
					std::cout << "First Seek failed!" << std::endl;
				}
				std::cout << "BufferSize: " << DataSource->GetBufferSize() << "\t";// std::endl;

				DataSource->GetTimeRange(startTimeDC, endTimeDC);
				std::cout << "TimeRange - Start: " << startTimeDC << " End: " << endTimeDC << "\t";//  std::endl;
					
				if (startTimeDC > 0 && endTimeDC > startTimeDC)
				{
					if (DataSource->GetActFrame(frame_buffer, dataSize))
					{
						uint64_t actTimeStamp = TimestampVar->ConvertFromInputFrameToDCSystemTime(*frame_buffer.begin());
						std::cout << "ActTimestamp before:\t" << actTimeStamp << "\t";// << std::endl;
					}
					else
					{
						std::cout << "GetActFrame failed!" << std::endl;
					}
					uint64_t targetTimestamp = endTimeDC;
					if (DataSource->Seek_TimeStamp(targetTimestamp))	//Seek to the middle of data
					{
						if (DataSource->GetActFrame(frame_buffer, dataSize))
						{
							uint64_t actTimeStamp = TimestampVar->ConvertFromInputFrameToDCSystemTime(*frame_buffer.begin());
							std::cout << "ActTimestamp after:\t" << actTimeStamp << "  ";// std::endl;
						}
						if (DataSource->GetNextFrames_All(frame_buffer, dataSize))
						{
							uint64_t actTimeStamp = TimestampVar->ConvertFromInputFrameToDCSystemTime(*frame_buffer.begin());
							std::cout << targetTimestamp << " / " << actTimeStamp << std::endl;
						}
					}
					else
					{
						std::cout << "Seek failed" << std::endl;
					}
				}
			}
		}
	}





	std::getchar();
	return 0;
}
