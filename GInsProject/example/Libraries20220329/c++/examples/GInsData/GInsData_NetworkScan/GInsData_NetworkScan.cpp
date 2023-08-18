// GInsData_NetworkScan.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//



#include <float.h>
#include <windows.h>
#include "GInsDataInterface.hpp"
#include <chrono>
#include <thread>
#include "GInsNetworkScan.hpp"

int main(int argc, char* argv[])
{

	// this example shows how run a Network Scan

	GIns::NetworkScan::NetworkScanPtr NetworkScanner = GIns::NetworkScan::IGInsNetworkScan::Create();

	//select a scantype:
	// - ScanType_IPv4_Broadcast
	// - ScanType_IPv4_Multicast -> Q.gate/pac (not Q.station) need to have FW version newer than 03.2020
	// - ScanType_IPv6_Multicast -> be sure to have activated IPv6 on your network adapter (only working for Q.stations)
	// - ScanType_All

	NetworkScanner->StartScan(TNetworkScan_ScanType::ScanType_IPv6_Multicast);

	//Wait for scan finished
	while (NetworkScanner->ScanRunning())
	{
		Sleep(10);
	}

	std::vector<GInsXmlRpcStdAPI::CGIns_NetworkScan_ResultInfo> devices = NetworkScanner->GetDevices();
	size_t ind = 0;
	for (auto it = devices.begin(); it != devices.end(); ++it)
	{
		GInsXmlRpcStdAPI::CGIns_NetworkScan_DeviceInfo info;
		it->Get_DeviceInfo(info);
		std::cout << ind << ": " << info.Get_Ethernet().Get_IPAddress_IPv4_Dynamic() << " - " << info.Get_Location() << " - " << info.Get_TypeName() << " - " << info.Get_SerialNumber() << std::endl;
		ind++;
	}

	printf("\nSelect Item index:  ");

	std::string index;
	std::getline(std::cin, index);
	uint16_t DeviceIndex = std::stoi(index);

	GInsXmlRpcStdAPI::CGIns_NetworkScan_DeviceInfo info;
	devices.at(DeviceIndex).Get_DeviceInfo(info);
	std::string deviceID = devices.at(DeviceIndex).Get_ID();
	bool isOperational = devices.at(DeviceIndex).Get_IsOperational(); //Q.station/Q.monixx - can be configured in GI.bench (false with IPv6 scans)
	bool isMaintainable = devices.at(DeviceIndex).Get_IsMaintainable(); //dhcp request, reboot, setNWparams,... can be executed on that device

	GInsXmlRpcStdAPI::CGIns_NetworkScan_NetworkInfo networkinfo;
	info.Get_Ethernet(networkinfo);
	
	GInsXmlRpcStdAPI::CGIns_Info_DeviceType typeinfo;
	info.Get_TypeInfo(typeinfo);

	GInsXmlRpcStdAPI::CGIns_NetworkScan_UART_Info uartinfo;
	info.Get_UART(uartinfo);
	
	std::cout << "Device ID: " << deviceID << std::endl;
	std::cout << "Is operational: " << (isOperational ? "true" : "false") << std::endl;
	std::cout << "Is maintainable: " << (isMaintainable ? "true" : "false") << std::endl;
	std::cout << "DHCP enabled: " << (networkinfo.Get_DHCP_Enabled() ? "true" : "false") << std::endl;
	std::cout << "Gateway Address: " << networkinfo.Get_GatewayAddress() << std::endl;
	std::cout << "IPv4 Dynamic: " << networkinfo.Get_IPAddress_IPv4_Dynamic() << std::endl;
	std::cout << "IPv4 Static: " << networkinfo.Get_IPAddress_IPv4_Static() << std::endl;
	std::cout << "IPv6 Dynamic: " << networkinfo.Get_IPAddress_IPv6_Dynamic() << std::endl;
	std::cout << "MAC Address: " << networkinfo.Get_MACAddress() << std::endl;
	std::cout << "Subnet Mask: " << networkinfo.Get_SubnetMask() << std::endl;
	std::cout << "Firmware: " << info.Get_Firmware() << std::endl;
	std::cout << "Location: " << info.Get_Location() << std::endl;
	std::cout << "SerialNumber: " << info.Get_SerialNumber() << std::endl;
	std::cout << "TypeName: " << info.Get_TypeName() << std::endl;
	std::cout << "Casing: " << typeinfo.Get_Casing() << std::endl;
	std::cout << "Function: " << typeinfo.Get_Function() << std::endl;
	std::cout << "Main: " << typeinfo.Get_Main() << std::endl;
	std::cout << "MID: " << typeinfo.Get_MID() << std::endl;
	std::cout << "SeriesName: " << typeinfo.Get_SeriesName() << std::endl;
	std::cout << "Sub: " << typeinfo.Get_Sub() << std::endl;
	std::cout << "UniqueType: " << typeinfo.Get_UniqueType() << std::endl;
	std::cout << "VendorName: " << typeinfo.Get_VendorName() << std::endl;
	//std::cout << uartinfo.Get_Address() << std::endl;
	//std::cout << uartinfo.Get_PortIndex() << std::endl;


	std::cout << std::endl;

	printf("\Set DHCP active? (1 = yes)  ");

	std::string dhcpactivestr;
	std::getline(std::cin, dhcpactivestr);

	if (dhcpactivestr.compare("1") == 0)
	{
		std::cout << "activate dhcp on controller..." << std::endl;
		if (NetworkScanner->DHCPRequestController(TNetworkScan_ScanType::ScanType_IPv6_Multicast, networkinfo.Get_MACAddress().c_str(), true))
		{
			std::cout << "success.." << std::endl;
		}
		else
		{
			std::cout << "failed." << std::endl;
		}
	}
	else
	{
		std::cout << "deactivate dhcp on controller..." << std::endl;
		if (NetworkScanner->DHCPRequestController(TNetworkScan_ScanType::ScanType_IPv6_Multicast, networkinfo.Get_MACAddress().c_str(), false))
		{
			std::cout << "successfully deactivated dhcp.." << std::endl;
			std::cout << "set network parameters (be careful to set valid values!!! they are written directly to the device!):" << std::endl;

			std::cout << "IP address (old: " << networkinfo.Get_IPAddress_IPv4_Dynamic() << "): ";
			std::string ipaddress;
			std::getline(std::cin, ipaddress);

			std::cout << "Subnet Mask (old: " << networkinfo.Get_SubnetMask() << "): ";
			std::string subnet;
			std::getline(std::cin, subnet);

			std::cout << "Default Gateway (old: " << networkinfo.Get_GatewayAddress() << "): ";
			std::string gateway;
			std::getline(std::cin, gateway);

			std::cout << "DNS server (optional): " ;
			std::string dns;
			std::getline(std::cin, dns);


			if (NetworkScanner->SetNetworkParameter(TNetworkScan_ScanType::ScanType_IPv6_Multicast, networkinfo.Get_MACAddress().c_str(), ipaddress.c_str(), subnet.c_str(), gateway.c_str(), dns.c_str()))
			{
				std::cout << "success.." << std::endl;
			}
			else
			{
				std::cout << "failed." << std::endl;
			}


		}
		else
		{
			std::cout << "failed." << std::endl;
		}
	}


	printf("\Reboot Controller? (1 = yes)  ");

	std::string rebootstr;
	std::getline(std::cin, rebootstr);

	if (rebootstr.compare("1") == 0)
	{
		std::cout << "rebooting..." << std::endl;

		//only in combination with ScanType_IPv4_Multicast (q.gate/pac) or ScanType_IPv6_Multicast (Q.station) (previous scan needed))
		if (NetworkScanner->RebootController(TNetworkScan_ScanType::ScanType_IPv6_Multicast, networkinfo.Get_MACAddress().c_str()))
		{
			std::cout << "success.." << std::endl;
		}
		else
		{
			std::cout << "failed." << std::endl;
		}
	}
	else
	{
		std::cout << "not rebooting...." << std::endl;
	}


	std::getchar();
	return 0;
}
