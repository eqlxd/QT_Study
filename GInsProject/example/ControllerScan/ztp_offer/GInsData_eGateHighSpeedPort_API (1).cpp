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