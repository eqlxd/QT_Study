#include <float.h>
#include "GInsDataInterface.hpp"
#include "eGateHighSpeedPort.h"

int main(int argc, char* argv[])
{
	std::string hostname = "192.168.5.24";
	if (argc>1)
	{
		hostname = argv[1];
	}
	GIns::Data::GInsDevicePtr device = GIns::Data::IGInsDevice::CreateIGInsDevicePtr(hostname, 10);				//create a device
	if(device)
	{
		std::vector<GIns::Data::IGInsDevice::TDiagnosticInfo> uart_diag;										//vector where all UART info's will be copied to
		std::vector<GIns::Data::IGInsDevice::TDiagnosticInfo> module_diag;										//vector where all MOdule info's will be copied to
		int i=0;
		while(device->ReadDiagnostic(uart_diag, module_diag))													//read diagnostic info's
		{
			std::vector<GIns::Data::IGInsDevice::TDiagnosticInfo>::iterator itr;
			int i = 0;
			for (itr = uart_diag.begin(); itr != uart_diag.end(); ++itr)										//iterate through all the UARTS
			{
				std::cout << "UART " << i << ": " 
						    << itr->m_CycleCount << " cycles / " 
							<< itr->m_ErrorCount << " errors" << std::endl;
				i++;
			}
			i = 0;
			for (itr = module_diag.begin(); itr != module_diag.end(); ++itr)									//iterate through all the modules
			{
				std::cout << "Module " << i << ": " 
						    << itr->m_CycleCount << " cycles / " 
							<< itr->m_ErrorCount << " errors" << std::endl;
				i++;
			}
			SC_eGateHighSpeedPort_SleepMS(1000);																//portable sleep
		}
		std::string msg;
		while (device->GetLastError(msg) != 0)																	//get code and text of the last errors
		{
			std::cout << "Error: " << msg << std::endl;
		}
	}
	getchar();
	return 0;
}
