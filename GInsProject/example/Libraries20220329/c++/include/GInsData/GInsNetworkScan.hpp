/*
* GInsNetworkScan.hpp
*
*  Created on: Feb 13, 2020
*      Author: jennym
*/

#pragma once

#include "ginstypes.h"
#include "GInsXmlRpcStdAPI/GInsXmlRpcStdAPI_Types.h"

namespace GIns {
	namespace NetworkScan
	{
		class IGInsNetworkScan;
		typedef std::shared_ptr<IGInsNetworkScan> NetworkScanPtr;
		
		extern "C" GINSDATA_API IGInsNetworkScan* CALL CreateIGInsNetworkScan(void);

		class IGInsNetworkScan
		{
		public:
			static NetworkScanPtr Create()
			{
				IGInsNetworkScan *rPtr = CreateIGInsNetworkScan();
				if (rPtr)
				{
					return NetworkScanPtr(rPtr, std::mem_fn(&IGInsNetworkScan::Release));
				}
				else
				{
					return NetworkScanPtr();
				}
			}

			/**
			 * Starts the scan
			 * 
			 * @param scanType Type of scan
			 */
			virtual void CALL StartScan(TNetworkScan_ScanType scanType) = 0;	
			
			/**
			 * Checks if a scan is currently running
			 * 
			 * @return True if scan is running, false otherwise
			 */
			virtual bool CALL ScanRunning() = 0;
			
			/**
			 * Identifies a controler (blinking)
			 * 
			 * @param scanType Type of scan protocol to use (ScanType_IPv4_Multicast or ScanType_IPv4_Broadcast)
			 * @param macAddress MAC address of the controller
			 * @return True if success, false otherwise
			 */
			virtual bool CALL IdentController(TNetworkScan_ScanType scanType, const char *macAddress) = 0;

			/**
			 * Reboots a controller
			 * 
			 * @param scanType Type of scan protocol to use (ScanType_IPv4_Multicast or ScanType_IPv6_Multicast (previous scan needed))
			 * @param macAddress MAC address of the controller
			 * @return True if success, false otherwise
			 */
			virtual bool CALL RebootController(TNetworkScan_ScanType scanType, const char *macAddress) = 0;

			/**
			 * Enables or disabled DHCP on a controller
			 * 
			 * @param scanType Type of scan protocol to use (ScanType_IPv4_Multicast or ScanType_IPv6_Multicast (previous scan needed))
			 * @param macAddress MAC address of the controller
			 * @param enable True to enable DHCP, false to disable
			 * @return True if success, false otherwise
			 */
			virtual bool CALL DHCPRequestController(TNetworkScan_ScanType scanType, const char *macAddress, bool enable) = 0;

			/**
			 * Sets the network parameters of a controller
			 * 
			 * @param scanType Type of scan protocol to use (ScanType_IPv4_Multicast or ScanType_IPv6_Multicast (previous scan needed))
			 * @param macAddress MAC address of the controller
			 * @param ipAddress New IP address of the controller
			 * @aram subnetMask New subnet mask of the controller
			 * @aram defaultGateway New default gateway of the controller
			 * @param dnsServer New DNS server of the controller
			 * @return True if success, false otherwise 
			 */
			virtual bool CALL SetNetworkParameter(TNetworkScan_ScanType scanType, const char *macAddress, const char *ipAddress, const char *subnetMask, const char *defaultGateway, const char *dnsServer) = 0;

			/**
			 * Resolves an connections string to some basic information (performs a scan if the device is not yet found in the network)
			 * 
			 * @param connectionString IP address or ID of the device
			 * @param connectionType Type of connection string
			 * @param ipAddress IP address of the device
			 * @param ipAddressLen Lenght of IP address
			 * @param adapterAddress Adapter address on which the device if found
			 * @param adapterAddrLen Length of adapter address
			 * @param serialnumber Serialnumber of the device
			 * @param serialnumberLen Length of serialnumber
			 * @param isIDAmbiguous Indicates if a device with the same ID is found in the network
			 * @param isSerialNumberAmbiguous Indicates if a device with the same serial number is found in the network
			 * @param isIPv4DynamicAddressAmbiguous Indicates if a device with the same IPv4 dynamic address is found in the network
			 * @param errorMsg Error message if an error occured
			 * @param errorMsgLen Length of error message
			 * @return true, if the device was found, false otherwise or if an error occured
			 */
			virtual bool CALL GetDevice_C(const char *connectionString, TNetworkScan_ConnectionType connectionType, 
				char *ipAddress, size_t *ipAddressLen,
				char *adapterAddress, size_t *adapterAddrLen,
				char *serialnumber, size_t *serialnumberLen,
				bool &isIDAmbiguous, bool &isSerialNumberAmbiguous, bool &isIPv4DynamicAddressAmbiguous,
				char *errorMsg, size_t *errorMsgLen) = 0;
			
			/**
			 * Adds a device to list of previously scanned devices (can be used to speed up some functions)
			 * 
			 * @param deviceData Device to add (Type: GInsXmlRpcStdAPI::CGIns_NetworkScan_ResultInfo().toXml().c_str())			 
			 */
			virtual void CALL AddDevice_C(const char* deviceData) = 0;

			/**
			 * Returns all devices from a previous scan
			 * 
			 * @return Vector with all found devices (Type: GInsXmlRpc::XmlRpcValue with array of GInsXmlRpcStdAPI::CGIns_NetworkScan_ResultInfo)
			 */
			virtual const char* CALL GetDevices_C() = 0;

			virtual void CALL Release() = 0;
			virtual ~IGInsNetworkScan();
			
			/**
			 * Resolves an connections string to some basic information (performs a scan if the device is not yet found in the network)
			 * 
			 * @param connectionString IP address, ID or SerialNumber of the device
			 * @param connectionType Type of connection string
			 * @param errorMsg Error message if an error occured
			 * @param ipAddress IP address of the device
			 * @param adapterAddress Adapter address on which the device if found
			 * @param serialnumber Serialnumber of the device
			 * @param isAmbiguous Indicates if a device with the same ID is found in the network
			 * @return true, if the device was found, false otherwise or if an error occured
			 */
			bool GetDevice(const std::string &connectionString, TNetworkScan_ConnectionType connectionType, std::string &errorMsg, std::string &ipAddress, std::string &adapterAddress, std::string &serialnumber, 
				bool &isIDAmbiguous, bool &isSerialNumberAmbiguous, bool &isIPv4DynamicAddressAmbiguous)
			{
				GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());

				char errorMsgStr[1024];
				size_t errorMsgLen = 0;

				char ipAddressStr[256];
				size_t ipAddressLen = 0;

				char adapterAddressStr[256];
				size_t adapterAddressLen = 0;

				char serialnumberStr[64];
				size_t serialnumberLen = 0;

				bool result = GetDevice_C(connectionString.c_str(), connectionType, ipAddressStr, &ipAddressLen, adapterAddressStr, &adapterAddressLen, serialnumberStr, &serialnumberLen, 
					isIDAmbiguous, isSerialNumberAmbiguous, isIPv4DynamicAddressAmbiguous, errorMsgStr, &errorMsgLen);

				errorMsg = std::string(errorMsgStr, errorMsgLen);
				ipAddress = std::string(ipAddressStr, ipAddressLen);
				adapterAddress = std::string(adapterAddressStr, adapterAddressLen);
				serialnumber = std::string(serialnumberStr, serialnumberLen);

				return result;
			}

			/**
			 * Returns all devices from a previous scan
			 * 
			 * @return Vector with all found devices
			 */
			std::vector<GInsXmlRpcStdAPI::CGIns_NetworkScan_ResultInfo> GetDevices()
			{
				GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());

				std::vector<GInsXmlRpcStdAPI::CGIns_NetworkScan_ResultInfo> result;

				const char *resultStr = GetDevices_C();

				if (resultStr)
				{
					try
					{
						GInsXmlRpc::XmlRpcValue resultXmlRpc;
						size_t offset = 0;

						resultXmlRpc.fromXml(resultStr, &offset);

						for (int i = 0; i < resultXmlRpc.size(); i++)
						{
							GInsXmlRpcStdAPI::CGIns_NetworkScan_ResultInfo resultElem;
							resultElem = resultXmlRpc[i];

							result.push_back(resultElem);
						}
					}
					catch (...)
					{
					}
				}

				return result;
			}

			/**
			 * Adds a device to list of previously scanned devices (can be used to speed up some functions)
			 * 
			 * @param device Device to add
			 */
			void AddDevice(GInsXmlRpcStdAPI::CGIns_NetworkScan_ResultInfo device)
			{
				GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());

				AddDevice_C(device.toXml().c_str());
			}
			/**
			* Initialization function to ensure that static variables are created
			* This ensures that static mutex can be instantiated before multiple threads could do it in an unsafe way
			*/
			static void InitInterface()
			{
				std::lock_guard<GINS_MUTEX> lock(Mutex());
				std::cout << "IGInsDataSource: intialize interface" << std::endl;
			}
		private:
			static GINS_MUTEX& Mutex(){ static GINS_MUTEX mtx; return mtx; }
		};

	} /* namespace Data */
} /* namespace NetworkScan */
