/*******************************
 
 This example shows how to create UDBF files

 - Creating UDBF files work like producing a stream, just needs a different construction method.
 - The buffer in this example is filled with 2 variables with random values

*********************************/

#ifdef WIN32
#include <windows.h>
#endif
#include <iostream>
#include <float.h>
#include "GInsDataInterface.hpp"
#include "GInsTime.h"

int main(int argc, char* argv[])
{
	GIns::Data::GInsDataBufferPtr 				StreamBuffer;
	GIns::Data::GInsDataHeaderPtr				StreamBufferHeader;

	GIns::Data::FrameBuffer 					FrameBuffer(1);
	std::vector<GIns::Data::IGInsVariablePtr> 	BufVars;											//Vecotor for variables to be created

	double StreamSampleRate = 100;																	//UDBF files can have either a fixed sample rate, or if <=0, relies on an absolute timestamp 
	
	const std::string& StreamName = "MyTestDataStream";
	const std::string& StreamID	  = "197678c6-2cc7-11eb-adc1-0242ac120002";							//We use a fixed UUID (UUID is needed to identificate the stream e.g. in a GI.cloud environment)												
	const std::string& FilePath	  = "Z:\\\\MyTestDataStream\\";										//The path where to store UDBF files

	size_t MaxFileLength = 3600;																	//Max file length in seconds for automatic file wrap. If 0, no automatic file wrapping will be done 

	StreamBuffer = GIns::Data::IGInsDataBuffer::Create_UDBFFile(FilePath, MaxFileLength, 0);			//Create only the stream, other stream meta data is set with the header
	if (!StreamBuffer)
	{
		std::cout << "Error creating stream!" << std::endl;
		std::getchar();
		return 1;
	}

	StreamBufferHeader = GIns::Data::IGInsDataHeader::Create();										//Create header that defines stream meta data

	/*******************************
	*  Set timestamp info
	*
	*  Since we use TimeDC in this example, which is nanoseconds from 01-01-2000, we need to set the corresponding timestamp information,
	*  which is necessary for correct decoding of the buffer data (Gantner UDBF-format)
	*  Parameters: 
	*   - StartOLE2Time = offset from OLE automation time (01.01.1900) to timestamp starttime (here 01-01-2000) in days: 36526
	*   - StartTimeToDayFactor = if StartOLE2Time parameter is in days: 1
	*   - ActTimeToSecondFactor = timestamp in this example is in nanoseconds (TimeDC) -> factor to seconds is: 0.000000001
	*   - ActTimeDataType = TimeDC is "uint64" format
	********************* */
	StreamBufferHeader->SetTimestampConfiguration(36526, 
												  1, 
												  0.000000001, 
												  TTransferFormat::TransferFormatUSInt64);

	StreamBufferHeader->SetDataRate(StreamSampleRate);												//Set the sample rate								
	StreamBufferHeader->SetDataSourceInfo(StreamID.c_str(), StreamName.c_str());					//Set data stream id and human readable name

#if 0
	StreamBufferHeader->AddVariable_Advanced("Variable1",											//Human readable name (Latin1, max 20 chars!)
											"2796e18c-2cc9-11eb-adc1-0242ac120002",					//UUID for further identification
											"V",													//Unit string (Latin1, max 20 chars!)
											TDataDirection::DataDirectionInput,						//Data direction in streams is always input
											TTransferFormat::TransferFormatFloat,					//Default data format for most variables
											TVarKindCasted::VarKindAnalogInput,						//We do as it was an analog input
											3,8,0,0);												//Other parameter like precision, min max range

	StreamBufferHeader->AddVariable_Advanced("Variable2",											//Create a second variable
											"617e1794-2cc9-11eb-adc1-0242ac120002",					//Use a different UUID
											"V",
											TDataDirection::DataDirectionInput,
											TTransferFormat::TransferFormatFloat,
											TVarKindCasted::VarKindAnalogInput,
											3, 8, 0, 0);
#else
	StreamBufferHeader->AddVariable_New("Variable1", "V", TransferFormatDouble, 3, 8);
	StreamBufferHeader->AddVariable_New("Variable2", "V", TransferFormatDouble, 3, 8);
#endif


	StreamBuffer->SetHeader_Object(StreamBufferHeader);												//Set the header to the stream buffer

	StreamBuffer->HeaderInterface()->GetGInsVariables(BufVars);										//Now we get pointers to the variables we just created 		

																									//Also one for the timestamp as configured
	GIns::Data::IGInsVariablePtr Timestamp = StreamBuffer->HeaderInterface()->GetGInsTimestampVariable(); 

	size_t frameLength = StreamBuffer->HeaderInterface()->GetDataFrameLength();						//We need the frame size very often 

	if (!StreamBuffer->InitializeFrameSize(frameLength))
	{
		std::cout << "Error init frame!" << std::endl;
		std::getchar();
		GIns::Data::IGInsDataBuffer::Delete(StreamBuffer);
		return 1;
	}

	size_t frameCountBlock = 1000;
	size_t tempBufferLength = frameLength*frameCountBlock;
	char* buf = new char[tempBufferLength];															//We create a temporary buffer for 1000 frames
	FrameBuffer.SetDataSourcePointer(buf, StreamBuffer->HeaderInterface()->GetDataFrameLength());

	//get start time in DCTimeFormat
	uint64_t timestamp = ga_DCTimeNS_RTC();															//Create a starttime and add nano seconds at every sample
	uint64_t nsPerSample = 1000000000 / (uint64_t)StreamSampleRate;											//Calculate the number of nano seconds we have to add to the time stamp for every frame

	//-> here we have 2 variables to be filled into the StreamBuffer
	//value is a random number
	std::cout << "Start Loop - press ESC to exit..." << std::endl;

	bool exit = false;
	do
	{	
		for (size_t i = 0; i < frameCountBlock; i++)
		{
			char* startOfFrame = buf + (i*frameLength);												//Calculate the start of every frame
			memcpy(startOfFrame, &timestamp, sizeof(uint64_t));										//Copy the timestamp to the frame start
			timestamp += nsPerSample;																//Add nano seconds per frame

			for (auto vItr = BufVars.begin(); vItr != BufVars.end(); ++vItr)
			{
				double value = rand() % 100;
				vItr->get()->ConvertFromDoubleToInputFrame(value, startOfFrame);
			}
		}
		if (!StreamBuffer->AppendDataBuffer(buf, tempBufferLength))
		{
			std::cout << "error appending data buffer" << std::endl;
			exit = true;
		}
		//interrupt loop with ESC-key
#ifdef WIN32
		if (GetAsyncKeyState(VK_ESCAPE))
		{
			exit = true;
		}
		Sleep(10);
#endif
	} while (!exit);

	if (buf)
	{
		delete[] buf;
	}
	return 0;
}


