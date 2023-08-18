// GInsData_CreateBuffer.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//



/*******************************
 
 this example shows how to create a streambuffer

 - the buffer in this example is filled with 2 variables with random values
 - there are 2 different approaches to append data to the buffer, which can be switched using the "#define Method_1" (see below) 
 - if the example runs, you can access the buffer data using
    -  Sample example for "PostProcessBuffer"
	-  open GI.bench (same bit-Version as the compiled platform of this example), navigate to tab "Data Acquisition" -> "Graphics". In the 
	    Dashboard-Designer you can see the Buffer "TestBuffer" available in "Online" section. Create a YT-Chart and drag-and-drop a channel 
		into the chart.

*********************************/



#include <windows.h>

#include <float.h>
#include "GInsDataInterface.hpp"
#include "GInsTime.h"

//use define "Method_1" for different implementation (see below)
#define Method_1


int main(int argc, char* argv[])
{

	GIns::Data::GInsDataBufferPtr 				StreamBuffer;
	GIns::Data::GInsDataHeaderPtr				StreamBufferHeader;

	GIns::Data::FrameBuffer 					FrameBuffer(1);
	std::vector<GIns::Data::IGInsVariablePtr> 	BufVars; //vecotor of buffer-variables
	char*										buf; // pointer to frame buffer


	//samplerate of the stream buffer must be set
	double StreamSampleRate = 100;  
	
	std::string BufferName = "CreateBufferTest";
	std::string ID = "";

	size_t buffersize = 50000000;
	size_t segmentsize = 50000000;



	/**************************
	*      create buffer
	*
	* @param BufferName		Human readable name for this buffer
	* @param id				The unique id for this buffer (empty for auto generate)
	* @param size			Maximum total buffer size in Byte
	* @param segmentSize	Size of a single buffer segment
	*
	* @details This factory method creates a big shared data buffer.\n
	*		   Since data buffers need consistent memory blocks, there could be problems with very big buffers (usually it is not possible to allocate all available memory at once).
	*          To avoid this problem, data buffers can be segmented by specifying a smaller segment size and the buffer will be initialized with size/segmentSize segments.
	*/
	StreamBuffer = GIns::Data::IGInsDataBuffer::Create(BufferName, ID, buffersize, segmentsize);
	ID = StreamBuffer.get()->GetID();

	if (!StreamBuffer)
	{
		std::cout << "Error creating Buffer!" << std::endl;
		std::getchar();
		GIns::Data::IGInsDataBuffer::Delete(StreamBuffer);
		return 1;
	}

	//create new databuffer header
	StreamBufferHeader = GIns::Data::IGInsDataHeader::Create();

	/*******************************
	*     set timestamp info
	*  since we use TimeDC in this example, which is nanoseconds from 01-01-2000, we need to set the corresponding timestamp information,
	*  which is necessary for correct decoding of the buffer data (Gantner UDBF-format)
	*  Parameters: 
	*   - StartOLE2Time = offset from OLE automation time (01.01.1900) to timestamp starttime (here 01-01-2000) in days: 36526
	*   - StartTimeToDayFactor = if StartOLE2Time parameter is in days: 1
	*   - ActTimeToSecondFactor = timestamp in this example is in nanoseconds (TimeDC) -> factor to seconds is: 0.000000001
	*   - ActTimeDataType = TimeDC is "uint64" format
	********************* */
	StreamBufferHeader->SetTimestampConfiguration(36526, 1, 0.000000001, TTransferFormat::TransferFormatUSInt64);

	//set buffer samplerate
	StreamBufferHeader->SetDataRate(StreamSampleRate);

	//Create Source Info's
	StreamBufferHeader->SetDataSourceInfo(ID.c_str(), BufferName.c_str());

	//Create Measurement Info's
	std::string measID = "123456789";
	//Poco::UUIDGenerator gen;
	//measID = gen.createRandom().toString();

	time_t rawtime;
	struct tm * timeinfo;
	char buffer[80];
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, sizeof(buffer), "%d-%m-%Y_%H:%M:%S", timeinfo);
	std::string str(buffer);

	std::string measName = str;
	StreamBufferHeader->SetMeasurementInfo(measID.c_str(), measName.c_str());

	//set header to streambuffer
	StreamBuffer->SetHeader_Object(StreamBufferHeader);
	std::cout << "wait add variable..." << std::endl;
	system("pause");

	//add channels to header
	//loop here to add multiple channels
	size_t NumberOfChannels = 2;
	for (size_t i = 1; i <= NumberOfChannels; i++)
	{
		std::string ChannelName("Testsignal_" + std::to_string(i));
		StreamBufferHeader->AddVariable_New(ChannelName.c_str(), "V", TransferFormatDouble, 3, 8);
	}
	

	//set header to streambuffer
	StreamBuffer->SetHeader_Object(StreamBufferHeader);

	//get variables into a vector
	StreamBuffer->HeaderInterface()->GetGInsVariables(BufVars);
	std::cout << "BufVars.size()="  << BufVars.size() << std::endl;

	//get timestamp variable
	GIns::Data::IGInsVariablePtr Timestamp = StreamBuffer->HeaderInterface()->GetGInsTimestampVariable();

	//init framebuffer
	FrameBuffer.SetFrameWidth(StreamBuffer->HeaderInterface()->GetDataFrameLength());
	if (!StreamBuffer->InitializeFrame(FrameBuffer))
	{
		std::cout << "Error init frame!" << std::endl;
		std::getchar();
		GIns::Data::IGInsDataBuffer::Delete(StreamBuffer);
		return 1;
	}

#if 0
	{
		std::cout << "swap test11" << std::endl;
		system("pause");

		std::cout << "11 StreamBufferHeader.use_count()=" << StreamBufferHeader.use_count() << std::endl;
		// 测试
		GIns::Data::GInsDataHeaderPtr test_header = GIns::Data::IGInsDataHeader::Create();

		test_header->AddVariable_New("swap_var", "V", TransferFormatDouble, 6, 8);

		StreamBufferHeader.swap(test_header);
		StreamBuffer->SetHeader_Object(StreamBufferHeader);
		std::cout << "22 StreamBufferHeader.use_count()=" << StreamBufferHeader.use_count() << "  test_header.use_count()=" << test_header.use_count() << std::endl;
	}
	std::cout << "33 StreamBufferHeader.use_count()=" << StreamBufferHeader.use_count() << std::endl;

	std::cout << "swap test22" << std::endl;
	system("pause");
#endif

	//buffer size is here 1 frame 
	//-> could also be framelength * n to fill n frames into the buffer and append a block of frames to the streambuffer
	buf = new char[StreamBuffer->HeaderInterface()->GetDataFrameLength()];
	FrameBuffer.SetDataSourcePointer(buf, StreamBuffer->HeaderInterface()->GetDataFrameLength());

	std::cout << "wait write..." << std::endl;
	system("pause");

	//get start time in DCTimeFormat
	TOleTime oleTime = ga_GetOleTime_RTC();
	uint64_t timestamp = ga_GetDCTimeNSFromOLETime(&oleTime);
	uint64_t nsPerSample = 1000000000 / StreamSampleRate;
	uint64_t msPerSample = 1000 / StreamSampleRate;


	//-> here we have 2 variables to be filled into the StreamBuffer
	//value is a random number
	double value = 0;

	std::cout << "Start Loop - press ESC to exit..." << std::endl;

	size_t pos;
	bool exit = false;
	do
	{

		//take care that timestamps are equidistant!! 
		//this example is really simple and just adds therefore a constant timestep in each cycle
	

#ifdef Method_1
		
		Timestamp->CopyDataToInputFrame((char*)&timestamp, buf);
		timestamp += nsPerSample;

		//iterate over all available variables and write the data
		for (std::vector<GIns::Data::IGInsVariablePtr>::iterator it = BufVars.begin(); it != BufVars.end(); ++it)
		{
			value = rand() % 100;
			it->get()->ConvertFromDoubleToInputFrame(value, buf);
		}

		if (!StreamBuffer->AppendDataFrames(FrameBuffer))
		{
			std::cout << "error appending data frames" << std::endl;
			exit = true;
		}
		
#else   //Method_2		
		
			
		pos = 0;
		memcpy(buf + pos, &timestamp, sizeof(uint64_t));
		timestamp += nsPerSample;
		pos += sizeof(uint64_t);

		for (std::vector<GIns::Data::IGInsVariablePtr>::iterator it = BufVars.begin(); it != BufVars.end(); ++it)
		{
			value = rand() % 100;
			memcpy(buf + pos, &value, it->get()->GetDataSize());
			pos += it->get()->GetDataSize();
		}

		if (!StreamBuffer->AppendDataBuffer(buf, pos))
		{
			std::cout << "error appending data buffer" << std::endl;
			exit = true;
		}
		
#endif

		//interrupt loop with ESC-key
		if (GetAsyncKeyState(VK_ESCAPE))
		{
			exit = true;
		}
		
		Sleep(msPerSample);

	} while (!exit);






	GIns::Data::IGInsDataBuffer::Delete(StreamBuffer);
	std::cout << "Streambuffer deleted..." << std::endl;
	std::getchar();
	return 0;
}


