/**
* GInsData_eGateHighSpeedPort_API example
*
* This example should demonstrate the usage of the C API of the GInsData Library
*  
* 3 different connection types can be selected by modifying the defines:
*
*	ONLINE_DATA_ON:	
*		
*		Online TCP/IP communication to the device.
*		This connection type can be used to read/write values, diagnostic data or files on a device
*		
*		It requires a connection to a Gantner Instruments controller like Q.Station, Q.gate, e.gate,...
*
*	BUFFERED_DATA_ON:
*
*		Online TCP/IP buffer stream from the device.
*		This connection can be used to read out time equidistant values from a device circular buffer.
*		
*		It requires a connection to a Gantner Instruments controller like Q.Station, Q.gate, e.gate,...
*
*	FILE_DATA_ON:
*
*		File transfer and decoding.
*		This connection lists, reads and deletes files from a device and provides access to the file data
*
*		It requires a connection to a Gantner Instruments controller like Q.Station, Q.gate, e.gate.
*		If no connection is available but a data file, the file transfer part can be scipped and the file name entered
*		to the file connection manually.
*/
#include <float.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <string>
#include <ctime>
#include <iostream>
#include <inttypes.h>
#ifdef LINUX
#include <unistd.h>
#endif
#ifdef WIN32
#include <windows.h>
#endif
#include "eGateHighSpeedPort.h"
using namespace std;

//set single defines to "_ON" to run examples

#define BUFFERED_DATA_OFF
#define BUFFERED_DATA_SINGLE_OFF
#define FILE_DATA_TRANSFER_OFF
#define FILE_DATA_DECODE_OFF
#define ONLINE_DATA_WRITE_OFF
#define ONLINE_DATA_OFF
#define ONLINE_DATA_AUTO_OFF

void swapto(char* src, char* dest, size_t len, bool swap);

int main(int argc, char* argv[])
{
	int32_t		HCONNECTION = -1,																	//integer value to remember a connection
				HCLIENT = -1;																		//integer value to remember a client (a connection can have multiple clients)

	uint32_t	ret=0,																				//some global variables
				ChannelCount=0,
				ModuleCount=0,
				ModuleIndex=-1;
	char		tempString[1024]={'\0'};
	double		info=0,outValue=0;

	const char* controllerIP = "192.168.1.18";														//the ip of a device for online communication


	/*
	测试网络寻找控制器
	*/


	int32_t ExtCommand = 0;
	int64_t ScanTime = 0.5;
	char AdapterInfo[1024] = {'\0'};
	char DeviceInfo[1024] = {'\0'};
	char ErrorString[1024] = {'\0'};
	if ((ret = _CDDLG_IdentifyDevices_First(ExtCommand, ScanTime, AdapterInfo, DeviceInfo, ErrorString)) != 1)//返回值为0，证明返回的字符串包含控制器信息，可解析
	{
		std::cout << "identifydevices run successfully,ret:" << ret << endl;
		std::cout << "AdapterInfo:" << AdapterInfo << endl;
		std::cout << "DeviceInfo:" << DeviceInfo << endl;
		std::cout << "ErrorString:" << ErrorString << endl;
		while ((ret = _CDDLG_IdentifyDevices_Next(AdapterInfo, DeviceInfo, ErrorString)) != 1)//返回值为0，解析字符串
		{
			std::cout << "AdapterInfo:" << AdapterInfo << endl;
			std::cout << "DeviceInfo:" << DeviceInfo << endl;
			std::cout << "ErrorString:" << ErrorString << endl;
		}
	}
	else {
		std::cout << "ret:" << ret << endl;
		std::cout << "finish" << endl;
	}
		
	
	

///test online data communication ////////////////////////////////////////////////////////////////////////////////
#ifdef ONLINE_DATA_ON

	
	/* init an online connection
	*
	*  The sample rate is used for connections that use internal threads for TCP/IP communication
	*/
	ret = _CD_eGateHighSpeedPort_Init(controllerIP, 5, HSP_ONLINE, 100, &HCLIENT, &HCONNECTION);
																									
	//Read device and variable information
	ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION,DEVICE_LOCATION,0,NULL,tempString);
	printf("Controller Location: %s\n",tempString);
	ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION,DEVICE_ADDRESS,0,NULL,tempString);
	printf("Controller Address: %s\n",tempString);
	ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION,DEVICE_TYPENAME,0,NULL,tempString);
	printf("Controller Type: %s\n",tempString);
	ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION,DEVICE_VERSION,0,NULL,tempString);
	printf("Controller Version: %s\n",tempString);
	ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION,DEVICE_TYPECODE,0,NULL,tempString);
	printf("Controller TypeCode: %s\n",tempString);
	ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION,DEVICE_SERIALNR,0,NULL,tempString);
	printf("Controller Serial Number: %s\n",tempString);
	ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION,DEVICE_SAMPLERATE,0,&info,NULL);
	printf("Controller Sample Rate: %lf\n",info);
	ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION,DEVICE_MODULECOUNT,0,&info,NULL);
	printf("Controller Module Count: %lf\n",info);
	ModuleCount=(int)info;

	for (uint32_t i = 0; i < ModuleCount; i++)
	{
		printf("=============== Module %d =============== \n", i);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, MODULE_Location,  i, &info, tempString);
		printf("\tLocation: %s\n", tempString);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, MODULE_TYPECODE, i, &info, tempString);
		printf("\tTypeCode: %s\n", tempString);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, MODULE_TYPECODE, i, &info, tempString);
		printf("\tAddress: %lf\n", info);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, MODULE_UARTINDEX, i, &info, tempString);
		printf("\tUartIndex: %lf\n", info);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, MODULE_VARCOUNT, i, &info, tempString);
		printf("\tVarCnt: %lf\n", info);
	}




	ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION,DEVICE_CHANNELCOUNT,0,&info,NULL);
	printf("Controller Channel Count: %lf\n",info);
	ChannelCount=(int)info;

	for(uint32_t i=0;i<ChannelCount;i++)
	{
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION,CHINFO_NAME,i,NULL,tempString);
		printf("=============== Channel %d - %s =============== \n",i,tempString);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION,CHINFO_UNIT,i,NULL,tempString);
		printf("Unit: %s\n",tempString);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION,CHINFO_DADI,i,NULL,tempString);
		printf("DataDirection: %s\n",tempString);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION,CHINFO_VART,i,NULL,tempString);
		printf("Variable Type: %s\n",tempString);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION,CHINFO_FORM,i,NULL,tempString);
		printf("Format: %s\n",tempString);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION,CHINFO_TYPE,i,NULL,tempString);
		printf("Type: %s\n",tempString);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION,CHINFO_DTYI,i,&info,NULL);
		printf("Datatype index: %lf\n",info);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION,CHINFO_INDI,i,&info,NULL);
		printf("Input index: %lf\n",info);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION,CHINFO_INDO,i,&info,NULL);
		printf("Output index: %lf\n",info);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION,CHINFO_INDX,i,&info,NULL);
		printf("Total index: %lf\n",info);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION,CHINFO_PREC,i,&info,NULL);
		printf("Precision: %lf\n",info);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION,CHINFO_FLEN,i,&info,NULL);
		printf("FieldLength: %lf\n",info);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION,CHINFO_RMIN,i,&info,NULL);
		printf("Range Min: %lf\n",info);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION,CHINFO_RMAX,i,&info,NULL);
		printf("Range Max: %lf\n",info);


		//read current value from variable
		_CD_eGateHighSpeedPort_ReadOnline_Single(HCONNECTION, i, &outValue);
		printf("Variable Online value: %lf\n",outValue);
	}


	printf("\nRead SlaveModule diagnostic: %lf\n", outValue);
	//Read some slave module diagnostic
	uint32_t CycleCount;
	uint32_t ErrorCount;
	for (int i = 0; i < 20;i++)	//do some diagnostic requests
	{
		//Load diagnostic info's (only DIAG_CONTROLLER reads diag info from controller)
		ret = _CD_eGateHighSpeedPort_Diagnostic(HCONNECTION, DIAG_CONTROLLER, 0, &CycleCount, &ErrorCount);		

		uint32_t transports=0;
		//Get the number of Transports
		ret = _CD_eGateHighSpeedPort_Diagnostic(HCONNECTION, DIAG_ITEMCOUNT, DIAG_TRANSPORT, &CycleCount, &transports);
	
		printf("Module Errors: ");
		for (uint32_t i = 0; i < transports; i++)
		{
			//Read cycle ane error count of every transport
			//If a slave module behind the controller is removed, the error count should increase
			ret = _CD_eGateHighSpeedPort_Diagnostic(HCONNECTION, DIAG_TRANSPORT,i, &CycleCount, &ErrorCount);
			printf("Module %d: %d/%d, ",i, CycleCount, ErrorCount);
		}
		printf("\n");
		_CD_eGateHighSpeedPort_SleepMS(1000); //Sleep for a while
	}
	_CD_eGateHighSpeedPort_Close(HCONNECTION,HCLIENT);
#endif

#ifdef ONLINE_DATA_AUTO_ON

	ret = _CD_eGateHighSpeedPort_Init(controllerIP, 5, HSP_ONLINE, 100, &HCLIENT, &HCONNECTION);

	double data[128];

	while (true)
	{
		_CD_eGateHighSpeedPort_ReadOnline_FrameToDoubleArray(HCONNECTION, data, sizeof(data) / sizeof(double), 0, 50);
		for (int i = 0; i < 4; i++)
		{
			printf("%f ", data[i]);
		}
		printf("\r\n");
		_CD_eGateHighSpeedPort_SleepMS(10);
	}
#endif

#ifdef ONLINE_DATA_WRITE_ON

	uint32_t OutputChannelCount = 0;
	int32_t iTempInfo = 0;
	uint32_t WriteIndex = 0;
	double WriteValue = 0;

	//Init online connection
	ret = _CD_eGateHighSpeedPort_Init(controllerIP, 7, HSP_ONLINE, 100, &HCLIENT, &HCONNECTION);

	if (ret != HSP_OK)
	{
		printf("Error - could not init connection!");
		getchar();
		return 1;
	}

	printf("Output Channels: \n\n");

	//get number of channels with datadirection "output"
	_CD_eGateHighSpeedPort_GetNumberOfChannels(HCONNECTION, DADI_OUTPT, &OutputChannelCount);

	for (int i = 0; i < OutputChannelCount; i++)
	{
		ret = _CD_eGateHighSpeedPort_GetChannelInfo_Int(HCONNECTION,  CHINFO_INDX, DADI_OUTPT, i, &iTempInfo);
		_CD_eGateHighSpeedPort_GetChannelInfo_String(HCONNECTION, CHINFO_NAME, DADI_OUTPT, i, tempString);
		printf("%d. Channel: %s, TotalIndex: %d \n", i+1 , tempString,iTempInfo);
	}

	
	printf("\nTotalIndex of Channel to write ('x' to exit):   ");

	std::string index;
	std::getline(std::cin, index);

	std::string value;

	//prepare double-array to "Write" using "WriteOnline_Window" function
	double values[3];
	values[0] = 1000;
	values[1] = 2000;
	values[2] = 3000;




	while (!index.compare("x")==0)
	{

		

		// ******************************************************
		//-> 2 options to write data: Function
		// - "WriteOnline_Window"
		// - "WriteOnline_Single_Immediate"

		/************************************************************************************************/
		//- WriteOnline_Window

		//ATTENTION: WriteOnline_Window will write a whole "window" of output variables, beginning from an output start-index
		// up to the defined number of output-channels! 
		// the parameter for "number" needs to be <= the size of the values array!
		/******************************************************/
		//Connectiontype 'ONLINE' necessary!!! (->HSP.CONNECTIONTYPE)

		int t = 
		ret = _CD_eGateHighSpeedPort_WriteOnline_Window(HCONNECTION, 0, 3, values);


		//- WriteOnline_Single_Immediate
		//this function will write the a single value immediately to the outputchannel 
		//(without influencing the other output channels)
		
		printf("\n Value to write: ");
		std::getline(std::cin, value);

		if (value.compare("x") == 0)
			break;
		try
		{
			WriteIndex = std::stoi(index);
			WriteValue = std::stod(value);
			ret = _CD_eGateHighSpeedPort_WriteOnline_Single_Immediate(HCONNECTION, WriteIndex, WriteValue);
		}
		catch (...)
		{
			printf("\n invalid values... ");
		}


		_CD_eGateHighSpeedPort_SleepMS(100); //Sleep for a while
	}
	printf("\n exit... ");
	_CD_eGateHighSpeedPort_Close(HCONNECTION, HCLIENT);				            	//close connection - if not done, the connection will be deleted at dll unload


	
#endif

	///test buffered data communication ////////////////////////////////////////////////////////////////////////////////
#ifdef BUFFERED_DATA_ON

	HCONNECTION=-1;
	HCLIENT=-1;
	double* 		 values = NULL;
	double			 channelData = 0;
	uint32_t 		 NumberOfChannels = 0,
	NumberOfFrames = 5000,  //1 sample of all channels is 1 frame;
							//needed to dynamically allocate the value-array (-> adjust depending on samplerate);
	ReceivedFrames = 0,
	Complete = 0,

	bufferindex=0;

	//Init buffer connection
	ret = _CD_eGateHighSpeedPort_Init(controllerIP, 7, HSP_BUFFER, 100, &HCLIENT, &HCONNECTION);

	if (ret == 0)
	{   
		//init buffer (this is mainly to select a certain buffer by index)
		ret = _CD_eGateHighSpeedPort_InitBuffer(HCONNECTION, bufferindex, 0);
	}
	ret = _CD_eGateHighSpeedPort_SetBackTime(HCONNECTION, 0);	//empty the device circular buffer to get only actual data

	//Read device and variable information
	ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, DEVICE_LOCATION, 0, NULL, tempString);
	printf("Controller Location: %s\n", tempString);
	ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, DEVICE_ADDRESS, 0, NULL, tempString);
	printf("Controller Address: %s\n", tempString);
	ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, DEVICE_TYPENAME, 0, NULL, tempString);
	printf("Controller Type: %s\n", tempString);
	ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, DEVICE_VERSION, 0, NULL, tempString);
	printf("Controller Version: %s\n", tempString);
	ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, DEVICE_TYPECODE, 0, NULL, tempString);
	printf("Controller TypeCode: %s\n", tempString);
	ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, DEVICE_SERIALNR, 0, NULL, tempString);
	printf("Controller Serial Number: %s\n", tempString);
	ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, DEVICE_SAMPLERATE, 0, &info, NULL);
	printf("Controller Sample Rate: %lf\n", info);
	ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, DEVICE_BUFFERCOUNT, 0, &info, NULL);
	printf("Circle Buffer Count: %lf\n", info);
	ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, DEVICE_LOGGERCOUNT, 0, &info, NULL);
	printf("Data Logger Count: %lf\n", info);
	ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, DEVICE_TSTYPE, 0, &info, NULL);
	printf("Timestamp Type: %d\n", (uint16_t)info);
	ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, DEVICE_MODULECOUNT, 0, &info, NULL);
	printf("Controller Module Count: %lf\n", info);
	ModuleCount = (int)info;
	ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, DEVICE_CHANNELCOUNT, 0, &info, NULL);
	printf("Controller Channel Count: %lf\n", info);
	ChannelCount = (int)info;

	ret = _CD_eGateHighSpeedPort_GetNumberOfChannels(HCONNECTION, DADI_INPUT, &NumberOfChannels);
	printf("Controller Input Channel Count: : %i\n", NumberOfChannels);

	for (uint32_t i = 0; i < ChannelCount; i++)
	{
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, CHINFO_NAME, i, NULL, tempString);
		printf("=============== Channel %d - %s =============== \n", i, tempString);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, CHINFO_UNIT, i, NULL, tempString);
		printf("Unit: %s\n", tempString);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, CHINFO_DADI, i, NULL, tempString);
		printf("DataDirection: %s\n", tempString);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, CHINFO_VART, i, NULL, tempString);
		printf("Variable Type: %s\n", tempString);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, CHINFO_FORM, i, NULL, tempString);
		printf("Format: %s\n", tempString);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, CHINFO_TYPE, i, NULL, tempString);
		printf("Type: %s\n", tempString);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, CHINFO_DTYI, i, &info, NULL);
		printf("Datatype index: %lf\n", info);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, CHINFO_INDI, i, &info, NULL);
		printf("Input index: %lf\n", info);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, CHINFO_INDO, i, &info, NULL);
		printf("Output index: %lf\n", info);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, CHINFO_INDX, i, &info, NULL);
		printf("Total index: %lf\n", info);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, CHINFO_PREC, i, &info, NULL);
		printf("Precision: %lf\n", info);
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION, CHINFO_FLEN, i, &info, NULL);
		printf("FieldLength: %lf\n", info);
	}


	values = new double[NumberOfChannels * NumberOfFrames];					//allocate an array with space for a defined number of frames		

	int varNumber = 1; //0 = timestamp
	while (ret == 0)
	{
		/* function ..._ReadBufferToDoubleArray():
		* if 'fillArray' is 1, the function will block until "arrayLenght" frames are received (output 'Complete' not interesting)
		* if BackTime (..._SetBackTime) is >0, the complete controller-buffer will be filled in blocks in size of "arrayLenght"
		*
		* if 'fillArray' is 0, the function will read the buffer and fill the array with all available bufferdata
		* (not waiting until array is full). if controller-buffer is read completely, output 'complete' will return 1.
		* again, if BackTime is >0, complete buffer will be read
		*
		*/

		//Read and automatically decode data to the double array
		ret = _CD_eGateHighSpeedPort_ReadBufferToDoubleArray(HCONNECTION, values, NumberOfChannels * NumberOfFrames, 0, &ReceivedFrames, &ChannelCount, &Complete);


		if (ret != HSP_OK)
		{
			printf("Error! Ret.Code: %i \n", ret);
			break;
		}
		else
		{
			for (uint32_t i = 0; i < ReceivedFrames;i++)					//iterate through the frames in buffer
			{
				channelData = values[i * NumberOfChannels + varNumber];		//select the double value containing the timestamp (first channel/index = 0) 
				printf("Timestamp: %8.8lf \n", channelData);				//print it
			}
		}

#ifdef WIN32
		if (GetAsyncKeyState(VK_ESCAPE))
		{
			std::cout << "Exit Loop...";
			break;
		}
#endif
		_CD_eGateHighSpeedPort_SleepMS(10); //Sleep for a while

	}
	printf("Communication stopped!!");

	delete[](values);														//don't forget to delete
	_CD_eGateHighSpeedPort_Close(HCONNECTION, HCLIENT);						//close connection - if not done, the connection will be deleted at dll unload
#endif

#ifdef BUFFERED_DATA_SINGLE_ON

	HCONNECTION = -1;
	HCLIENT = -1;
	uint32_t 		bufferindex = 0;


	//Init buffer connection
	ret = _CD_eGateHighSpeedPort_Init(controllerIP, 7, HSP_BUFFER, 100, &HCLIENT, &HCONNECTION);

	if (ret == 0)
	{  
		//init buffer (this is mainly to select a certain buffer by index)
		ret = _CD_eGateHighSpeedPort_InitBuffer(HCONNECTION, bufferindex, 0);
	}

	ret = _CD_eGateHighSpeedPort_SetBackTime(HCONNECTION, 0);	//empty the device circular buffer to get only actual data


	double value = 0; 
	int varIndex = 0;  // 0 = timestamp

	while (true)
	{
		//Get Next Buffer-Frame and read single values (one Frame includes a timestamp at index = 0, and 1 sample of each channel at index 1-n)		
		if (_CD_eGateHighSpeedPort_ReadBuffer_NextFrame(HCONNECTION, HCLIENT) != 1)
		{
			//use channel index to read a value from the actual frame (or iterate through multiple channel-values of the same frame)
			ret = _CD_eGateHighSpeedPort_ReadBuffer_Single(HCONNECTION, HCLIENT, varIndex, &value); 
			
		}
	
		printf("Value1: %8.8lf  \n", value);				//print it

#ifdef WIN32
		if (GetAsyncKeyState(VK_ESCAPE))
		{
			std::cout << "Exit Loop...";
			break;
		}
#endif
	}

	_CD_eGateHighSpeedPort_Close(HCONNECTION, HCLIENT);						//close connection - if not done, the connection will be deleted at dll unload



#endif

///test file I/O //////////////////////////////////////////////////////////////////////////////////////////
#ifdef FILE_DATA_TRANSFER_ON

	const char* fileIdent    = "/usb0";										// file identification string 
																			// ("-1" = all files, e.g. "hd0/test12" to read all files from a specific directory on the device 
	HCONNECTION			     = -1;											// integer value to remember a connection
	HCLIENT				     = -1;											// integer value to remember a client (a connection can have multiple clients)
	uint32_t deviceFileCount = 0;
	do
	{
		//Init a connection that is able to read files from a device
		if (_CD_eGateHighSpeedPort_Init(controllerIP, 5, HSP_FILES, 100, &HCLIENT, &HCONNECTION) != HSP_OK){
			printf("error at connect!"); break;
		}

		//
		//Read number of files
		if (_CD_eGateHighSpeedPort_GetFileCount(HCONNECTION,FILE_IDENTIFY_BY_PATH, fileIdent, &deviceFileCount) != HSP_OK){
			printf("error at list directory!"); break;
		}
		for (uint32_t i = 0; i < deviceFileCount; i++)// handle all files
		{
			char actFileIdent[1024];
			char actFileName[1024];
			uint32_t size;
			double oleTime;//not supported yet
			double sampleRate = 0;

			//get some information about the file
			if (_CD_eGateHighSpeedPort_GetFileInfo(HCONNECTION, 
												   i, 
												   actFileName,
												   sizeof(actFileName),
												   actFileIdent, 
												   sizeof(actFileIdent), 
												   &size, 
												   &oleTime)==HSP_OK)
			{
				printf("FileName: %s, FileIdent: %s, Size: %llu\n", actFileName, actFileIdent,(unsigned long long)size);

				//touch only files with ".dat" extension
				if (strstr(actFileName,".dat"))											
				{
					//copy the file from device
					if (_CD_eGateHighSpeedPort_CopyFile(HCONNECTION, actFileIdent, actFileName)==HSP_OK)
					{
						printf("Successfully copied!");

						//if successful, delete the file from device
						_CD_eGateHighSpeedPort_DeleteFile(HCONNECTION, actFileIdent);

					}
				}
			}
		}
		_CD_eGateHighSpeedPort_Close(HCONNECTION, HCLIENT);
	} 
	while (false);

#endif

#ifdef FILE_DATA_DECODE_ON

	do
	{
		int32_t HCONNECTION_FILE = -1;				//we need instances also for the file connection
		int32_t HCLIENT_FILE = -1;					//and client

		uint32_t size;
		double oleTime;//not supported yet
		double sampleRate = 0;

		const char* actFileName = "D:\\data\\qstation\\Datalogger_#1__0_2017-03-28_08-42-33_861000.dat";

		//Init a connection to the local file - this opens a connection similar to "_CD_eGateHighSpeedPort_Init" - but to a file
		ret = _CD_eGateHighSpeedPort_DecodeFile_Select(&HCLIENT_FILE, &HCONNECTION_FILE, actFileName);

		if (ret == HSP_OK)
		{
			//Read information
			ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION_FILE, DEVICE_LOCATION, 0, NULL, tempString);
			printf("Controller Location: %s\n", tempString);
			ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION_FILE, DEVICE_VERSION, 0, NULL, tempString);
			printf("Controller Version: %s\n", tempString);
			ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION_FILE, DEVICE_SERIALNR, 0, NULL, tempString);
			printf("Controller Serial Number: %s\n", tempString);
			ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION_FILE, DEVICE_SAMPLERATE, 0, &sampleRate, NULL);
			printf("Controller Sample Rate: %lf\n", sampleRate);
			ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION_FILE, DEVICE_CHANNELCOUNT, 0, &info, NULL);
			printf("Controller Channel Count: %lf\n", info);
			ChannelCount = (int)info;
		}
		else
		{
			printf("Error - could not load file!");
			break;
		}

		for (uint32_t i = 0; i < ChannelCount; i++)
		{
			ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION_FILE, CHINFO_NAME, i, NULL, tempString);
			printf("=============== Channel %d - %s =============== \n", i, tempString);
			ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION_FILE, CHINFO_UNIT, i, NULL, tempString);
			printf("Unit: %s\n", tempString);
			ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION_FILE, CHINFO_DADI, i, NULL, tempString);
			printf("DataDirection: %s\n", tempString);
			ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION_FILE, CHINFO_VART, i, NULL, tempString);
			printf("Variable Type: %s\n", tempString);
			ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION_FILE, CHINFO_FORM, i, NULL, tempString);
			printf("Format: %s\n", tempString);
			ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION_FILE, CHINFO_TYPE, i, NULL, tempString);
			printf("Type: %s\n", tempString);
			ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION_FILE, CHINFO_DTYI, i, &info, NULL);
			printf("Datatype index: %lf\n", info);
			ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION_FILE, CHINFO_INDI, i, &info, NULL);
			printf("Input index: %lf\n", info);
			ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION_FILE, CHINFO_INDO, i, &info, NULL);
			printf("Output index: %lf\n", info);
			ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION_FILE, CHINFO_INDX, i, &info, NULL);
			printf("Total index: %lf\n", info);
			ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION_FILE, CHINFO_PREC, i, &info, NULL);
			printf("Precision: %lf\n", info);
			ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION_FILE, CHINFO_FLEN, i, &info, NULL);
			printf("FieldLength: %lf\n", info);
		}

		int64_t availableframes = _CD_eGateHighSpeedPort_GetBufferFrames_All(HCONNECTION_FILE, HCLIENT_FILE);
		printf("\nAvailable Frames in file: %i\n", availableframes);

		printf("\nPress key to start decoding\n");
		getchar();

		//*************************************************************************************************************************************
		//********** Method 1: use ReadBufferToDoubleArray ************************************************************************************
		
		/*
		double* 		 values = NULL;
		double			 channelData = 0;
		uint32_t 		 NumberOfChannels = 0,
			NumberOfFrames = 5000,  //1 sample of all channels is 1 frame;
			//needed to dynamically allocate the value-array (-> adjust depending on samplerate);
			ReceivedFrames = 0,
			Complete = 0;

		int varNumber = 0;
		if (ret == 0)
		{
			//Get the number of input channels
			ret = _CD_eGateHighSpeedPort_GetNumberOfChannels(HCONNECTION_FILE, DADI_INPUT, &NumberOfChannels);
		}
		values = new double[NumberOfChannels * NumberOfFrames];					//allocate an array with space for a defined number of frames	
		while (ret == HSP_OK)
		{
			ret = _CD_eGateHighSpeedPort_ReadBufferToDoubleArray(HCONNECTION_FILE, values, NumberOfChannels * NumberOfFrames, 0, &ReceivedFrames, &ChannelCount, &Complete);
			if (ret == HSP_OK)
			{
				for (uint32_t i = 0; i < ReceivedFrames; i++)					//iterate through the frames in buffer
				{
					channelData = values[i * NumberOfChannels + varNumber];		//select the double value containing the timestamp (first channel/index = 0) 
					printf("Timestamp: %8.8lf \n", channelData);				//print it
				}
			}
		}
		*/

		//*************************************************************************************************************************************
		//*************************************************************************************************************************************



		//*************************************************************************************************************************************
		//********** Method 2: iterate over each frame and only decode single channels ********************************************************
		//
		/*
		//In this example, we check if the difference between all timestamps in the file are constant
		double max_time_diff_limit = 1 / (sampleRate * 2) / 86400;	//max time limit is halve of the measurement cycle time (in seconds)
		double time_step = 1 / (sampleRate) / 86400;			//expected cycle time in seconds
		//both values have to be translated from TimeOLE2 (days) to seconds

		uint32_t frames;			//to store the number of frames read from the file 
		double oldValue = -1;		//to store the value from last frame
		time_t start, end;
		time(&start);				//store the start time to measure decoding time
		uint64_t frameCount = 0;

		while (_CD_eGateHighSpeedPort_LoadBufferData(HCONNECTION_FILE, &frames) == HSP_OK)				//load next chunk of binary data (We don't load the complete raw data to RAM) 
		{
			double value;

			for (uint32_t frame_index = 0; frame_index < frames; frame_index++)
			{
				//read the timestamp as double
				_CD_eGateHighSpeedPort_ReadBuffer_Single(HCONNECTION_FILE, HCLIENT_FILE, 0, &value);
				if (oldValue>0)
				{
					double diff = value - oldValue;
					if (diff > (time_step + max_time_diff_limit) || diff < (time_step - max_time_diff_limit))
					{
						printf("\n######################### Error: timestamp not consistent !!!! ####################################\n");
						printf("Time diff: %lf sec\n", diff * 86400);
					}
				}
				oldValue = value;

				//read all variables in this frame
				for (uint32_t channel_index = 1; channel_index < ChannelCount; channel_index++)
				{
					double precision = -1;
					_CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION_FILE, CHINFO_PREC, channel_index, &precision, NULL);

					if (precision>0) //convert to double with correct precision automatically
					{
						double value = 0;
						_CD_eGateHighSpeedPort_ReadBuffer_Single(HCONNECTION_FILE, HCLIENT_FILE, channel_index, &value);
						printf("%lf\t", value);
					}
					else //read raw type
					{
						info = DATY_NO;
						_CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION_FILE, CHINFO_DTYI, channel_index, &info, NULL);
						//should be stored because this call is not so fast
						int typeID = (int)info;
						switch (typeID)
						{
						case DATY_BOOL:
						{
											bool value = 0;
											_CD_eGateHighSpeedPort_ReadBuffer_Single_RawType(HCONNECTION_FILE, HCLIENT_FILE, channel_index, (char*)&value, sizeof(value));
											printf("%s\t", value ? "true" : "false");
											break;
						}
						case DATY_SINT16:
						{
											int16_t value = 0;
											_CD_eGateHighSpeedPort_ReadBuffer_Single_RawType(HCONNECTION_FILE, HCLIENT_FILE, channel_index, (char*)&value, sizeof(value));
											printf("%d\t", value);
											break;
						}
						case DAYT_USINT16:
						{
												uint16_t value = 0;
												_CD_eGateHighSpeedPort_ReadBuffer_Single_RawType(HCONNECTION_FILE, HCLIENT_FILE, channel_index, (char*)&value, sizeof(value));
												printf("%u\t", value);
												break;
						}
						case DATY_SINT32:
						{
											int32_t value = 0;
											_CD_eGateHighSpeedPort_ReadBuffer_Single_RawType(HCONNECTION_FILE, HCLIENT_FILE, channel_index, (char*)&value, sizeof(value));
											printf("%ld\t", value);
											break;
						}
						case DATY_USINT32:
						{
												uint32_t value = 0;
												_CD_eGateHighSpeedPort_ReadBuffer_Single_RawType(HCONNECTION_FILE, HCLIENT_FILE, channel_index, (char*)&value, sizeof(value));
												printf("%ud\t", value);
												break;
						}
						case DATY_USINT64:
						{
												uint64_t value = 0;
												_CD_eGateHighSpeedPort_ReadBuffer_Single_RawType(HCONNECTION_FILE, HCLIENT_FILE, channel_index, (char*)&value, sizeof(value));
												printf("%llu\t", value);
												break;
						}
						case DATY_FLOAT:
						{
											float value = 0;
											_CD_eGateHighSpeedPort_ReadBuffer_Single_RawType(HCONNECTION_FILE, HCLIENT_FILE, channel_index, (char*)&value, sizeof(value));
											printf("%f\t", value);
											break;
						}
						case DATY_DOUBLE:
						{
											double value = 0;
											_CD_eGateHighSpeedPort_ReadBuffer_Single_RawType(HCONNECTION_FILE, HCLIENT_FILE, channel_index, (char*)&value, sizeof(value));
											printf("%lf\t", value);
											break;
						}
						default:
						{
									printf("invalid type\t");
									break;
						}
						}
					}
				}
				//step to the next frame
				if (_CD_eGateHighSpeedPort_ReadBuffer_NextFrame(HCONNECTION_FILE, HCLIENT_FILE) != HSP_OK)
				{
					break;
				}
				frameCount++;
				printf("\r\n");
			}
			printf("\r\nRead and decoded %d frames\r\n", frames);
		}
		time(&end);
		printf("\nDecoding of %llu frames took %llu seconds\n", (unsigned long long) frameCount+1, (unsigned long long)end - start);
		*/

		//*************************************************************************************************************************************
		//*************************************************************************************************************************************



		//*************************************************************************************************************************************
		//********** Method 3: use ReadBufferToByteArray  *************************************************************************************
		//* 
		// * use this method to directly receive raw buffered data! 
		// * read channel info first (input offset, data type..) to decode the data in a frame correctly after receive

		// in this example we only decode the timestamp (first input offset = 0) and we assume it has data type uint64_t !!
		
		size_t buffersize = 30000;
		char* bytearray = new char[buffersize];
		uint32_t ReceivedFrames = 0;
		uint32_t Complete = 0;
		uint32_t totalframes = 0;
		double framesize = 0;
		uint64_t value = 0;
		
		bool first = true;

		//some variables to check the correct timestamp 
		uint64_t oldtimestamp = 0, diff = 0;
		double timestep_ns = (1 / sampleRate) * 1e9;
		uint32_t maxtimediff = timestep_ns * 0.1;

		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION_FILE, DEVICE_DATAFRAMEWIDTH, 0, &framesize, NULL);
		printf("File FrameSize: %lf\n", framesize);

		//read a byte offset of a certain channel (here index 0)
		double inputbyteoffset = 0;
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION_FILE, CHINFO_INOFFSET, 0, &inputbyteoffset, NULL);
		printf("Input Byte Offset: %lf\n", inputbyteoffset);

		//read a datatype of a certain channel (here index 0)
		double datatype = 0;
		ret = _CD_eGateHighSpeedPort_GetDeviceInfo(HCONNECTION_FILE, CHINFO_DTYI, 0, &datatype, NULL);
		printf("DataType Index: %lf\n", datatype);


		while (ret == HSP_OK)
		{
			ret = _CD_eGateHighSpeedPort_ReadBufferToByteArray(HCONNECTION_FILE, bytearray, buffersize, 1, &ReceivedFrames, &ChannelCount, &Complete);
			totalframes += ReceivedFrames;
			printf("Receivedframes: %d, Total: %d\n", ReceivedFrames, totalframes);

			if (ret == HSP_OK)
			{
				for (uint32_t i = 0; i < ReceivedFrames; i++)					//iterate through the frames in buffer
				{
					swapto(bytearray + i*(int)framesize, (char*)&value, sizeof(value), false);

					printf("%" PRIu64 "\n", value);				//print it
					if (first)
					{
						oldtimestamp = value;
						first = false;
					}
					else
					{
						diff = value - oldtimestamp;
						if ((diff) > timestep_ns + maxtimediff || (diff) < timestep_ns - maxtimediff)
						{
							printf("error in timestamp - diff: %" PRIu64 "\n", diff);				//print it
						}
						oldtimestamp = value;
					}
				}
			}
		}

		//*************************************************************************************************************************************
		//*************************************************************************************************************************************
	} while (false);
#endif

	getchar();
	return 0;
}

void swapto(char* src, char* dest, size_t len, bool swap)
{
	if (swap)
	{
		for (unsigned int i = 0; i < len; i++)
		{
			dest[i] = src[len - 1 - i];
		}
	}
	else
	{
		memcpy(dest, src, len);
	}
}