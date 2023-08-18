/*#########################################################################*/
/*
   WARNING: Do not add to, delete from, or otherwise modify the contents
            of this header file !!!!!!!!!!!!!!!!!!!!!!!!!

   COPYRIGHT    : (C) 2004 by Gantner instruments, all rights reserved !
*/
/*.........................................................................*/
/*
   PROJECT      : eGateUtility.dll interface
   FILE NAME    : eGateUtility.h
   
   COMPILER     : MSVStudio 2010 / gcc
   SYSTEM       : XP / Win7 /Win8 / Win10 / Linux / Android / x86 / amd64

   DATE         : 2004-01-21
   AUTHOR       : Stefan Stocker

*/
/*.........................................................................*/
/*
   COMMENT:
     C-Header-File to use with DLL.
*/
/*.........................................................................*/
/*
   ATTENTION: All strings need to have a terminating 0 at the end !!!!
*/
/*
   CHANGES:
             2004-01-21    Implementation;
             2005-02-01    Function "DeleteFile" added;
             2005-02-12    Function "GetProperty" and "SetProperty" added;
             2005-03-01    Function "GetPingTime" added;
             2005-08-23    Function "DecodeBufferFileEx" added;
             2008-01-08    Property @IDENT_ADD_RESPONSE_TIME_TYPE,
                            @IDENT_CONTROL_RESPONSE_TIMEOUT_S,
                            @IDENT_SCAN_TIME_FACTOR_PPP and
                            @IDENT_NO_ADD_DEVICES_FOUND_COUNT_TO_TERM_SCAN added;
                           Property @FTP_USE_PASSIVE_MODE and
                            @FTP_USE_PING_BEFORE_CONNECT;
                           HighspeedPortTCPIP-functions added;
             2008-10-06    Function "LZSSCompressUncompressLocalFile" and
                            "CalculateCRCOfLocalFile" added;
                           @Function "GetActualDirectory_First", filename can contain
                            searchmask with wildcards;
             2012-06-28    Property @IDENT_LOCAL_PORT_START_NUMBER added;

			 2016-XX-XX	   Ported to GInsDataAPI based implementation by keeping ABI stability
						   Added support for 64 bit
						   Added support for Linux/Android (libGinsData.so)
						   Now multiple instances of FTP client are supported
						   Added microsoft style stdcall exported functions (legacy undecorated stdcall functions still exist)


			2020-01-xx	  New implementation based on GInsDataAPI:
							SetProperty function:
							* property for FTP-PassiveMode added!
							* property for FTP - 'use ping before connect' added
							FTP functions: 
							* Open/Close connection, 
							* Read/Write Files, 
							* GetActualDirectory_First / GetActualDirectory_Next
							Data-Conversion:
							* DecodeBufferFile
							Network-Scan:
							* IdentifyDevices_First
							* IdentifyDevices_Next
							* IdentifyVisual
							* GetPingTime
							HighspeedPort Communication:
							* OpenHighspeedPortTCPIP
							* CloseHighspeedPortTCPIP
							* CommunicateHighspeedPortTCPIP

			2020-03-xx	  New implementation of NetworkScan:
							_CDDLG_NetworkScan_StartScan
							_CDDLG_NetworkScan_GetDeviceInfo
							_CDDLG_NetworkScan_EnableDHCP
							_CDDLG_NetworkScan_SetNetworkParameter
							_CDDLG_NetworkScan_Reboot
							_CDDLG_NetworkScan_Identify
*/
/*#########################################################################*/

#ifdef __cplusplus
extern  "C" {
#endif

/*#########################################################################*/
/* Definitions                                                             */
/*#########################################################################*/

#ifdef _WIN32
	#ifdef EGATEUTILITY_EXPORTS
		#define PRE_DECL __declspec(dllexport)
	#else
		#define PRE_DECL __declspec(dllimport)
	#endif
	#define ALL_DECL __cdecl
    #define SC_DECL __stdcall   
#else
	#ifndef PRE_DECL
		#define PRE_DECL __attribute__((visibility("default")))
	#endif
	#define ALL_DECL
	#define SC_DECL
#endif

// CONSTANTS ******************************************************************
#define  eGUt_DLL_Name							L"eGateUtility.dll"

//  General Returncodes:
#define  eGUt_GENRET_OK                         0
#define  eGUt_GENRET_FAIL                       1

/*----------------- NetworkScan DeviceInfo ID's -----------------------------*/
#define DEVICE_ID								1
#define DEVICE_IsOperational					2
#define DEVICE_IsMaintainable					3
#define DEVICE_Location							4
#define DEVICE_SerialNumber						5
#define DEVICE_Firmware							6
#define DEVICE_TypeName							7
/*----------------- NetworkScan DeviceTypeInfo ID's -------------------------*/
#define DEVICE_Main								8
#define DEVICE_Sub								9
#define DEVICE_Function							10
#define DEVICE_Casing							11
#define DEVICE_MID								12
#define DEVICE_UniqueType						13
#define DEVICE_VendorName						14
#define DEVICE_SeriesName						15
/*----------------- NetworkScan Networkinfo ID's ----------------------------*/
#define NETWORK_IPAddress_IPv4_Dynamic			16
#define NETWORK_IPAddress_IPv6_Dynamic			17
#define NETWORK_IPAddress_IPv4_Static			18
#define NETWORK_DHCP_Enabled					19
#define NETWORK_MACAddress						20
#define NETWORK_SubnetMask						21
#define NETWORK_GatewayAddress					22
/*----------------- NetworkScan ScanTypes  ----------------------------------*/
#define ScanType_IPv4_Broadcast		0
#define ScanType_IPv4_Multicast		1
#define ScanType_IPv6_Multicast		2
#define ScanType_All				3


/*#########################################################################*/
/* Function prototypes                                                     */
/*#########################################################################*/


/******************************************************************************/
/*
  Outputs DLL-Identification.
  OUT:
	DLLDescription  : DLLDescription          (reserve >100 bytes);
	DLLVersion      : DLLVersion              (reserve >100 bytes);
  RETURN:
	General Returncodes
*/

PRE_DECL int32_t ALL_DECL _CDDLG_IdentDLL(
						char *DLLDescription,
						char *DLLVersion);

PRE_DECL int32_t SC_DECL _SCDLG_IdentDLL(
						char *DLLDescription,
						char *DLLVersion);

/******************************************************************************/
/*
  For internal use only.
  
  Not implemented!
  
*/

PRE_DECL int32_t ALL_DECL _CDDLG_ToggleDebugMode(
						int32_t State);

PRE_DECL int32_t SC_DECL _SCDLG_ToggleDebugMode(
						int32_t State);

/******************************************************************************/
/*
  Enables setting of different properties.
  IN:
    Name             : Property name
    ValueStr         : Value string according given name
                        (decimal separator is fixed '.')
  OUT:
    ErrorStr         : error text or empty if no error (reserve >1024 bytes);
  RETURN:
    General Returncodes

  Available property names:
    ----- Section - @FTP ---------------------------------------------------------------------------
      REMARK: Only available if connection is opened and always set to default,
                if "OpenConnection" is called !!!
      '@FTP_TRANSFERTIMEOUT_S' ...
          timeout for read/write - in [s]
          default: timeout, set with "OpenConnection"
      '@FTP_READFILE_LIST_MAX_POLL_TIME_S' ...
          max. poll time at "ReadFile" for reading list and checking if file is existing before reading file - in [s]
          default: 1.0, set with "OpenConnection"
      '@FTP_READFILE_GET_MAX_POLL_TIME_S' ...
          max. poll time at "ReadFile" for reading file - in [s]
          default: timeout, set with "OpenConnection"
      '@FTP_USE_PASSIVE_MODE' ...
          0 ... OFF (ACTIVE MODE): Client opens random data port and tells number with PORT-command to server.
          1 ... ON (PASSIVE MODE): Client sends PASV command, server opens data port and sends number back to client => often needed for servers behind NAT or FIREWALLS
          default: 0
      '@FTP_USE_PING_BEFORE_CONNECT' ...
          0 ... OFF: No ping is done before connect.
          1 ... ON:  A successful ping is needed before it tries to connect to server.
          default: 1
    ----- Section - @IDENT -------------------------------------------------------------------------
      '@IDENT_ADD_RESPONSE_TIME_TYPE' ...
          DeviceInfo at IdentifyDevices_xxx contains also "RTI:<ResponseTime [s]>[TAB]" at beginning of each item;
          0 ... Off
          1 ... Request response time
          2 ... Full time
          default: 0
      '@IDENT_CONTROL_RESPONSE_TIMEOUT_S' ...
          Timeout, waiting for response for ident controlling commands - in [s]
          default: 0.1
      '@IDENT_SCAN_TIME_FACTOR_PPP' ...
          Scan time multiply factor in case of PPP adapter is detected
          default: 3.0
      '@IDENT_NO_ADD_DEVICES_FOUND_COUNT_TO_TERM_SCAN' ...
          Count of "no add. devices found" to terminat scan loop
          default: 1
      '@IDENT_LOCAL_PORT_START_NUMBER' ...
          Starting port number for local bound port (<=0 ... each connecting increments local port number by 1).
          Each used adapter has next local port number.
          default: 0
		  
		  
	 Not completely implemented!
	  - only property available: '@FTP_USE_PASSIVE_MODE'
*/

PRE_DECL int32_t ALL_DECL _CDDLG_SetProperty(
						const char   *Name,
						const char   *ValueStr,
						char   *ErrorStr);

PRE_DECL int32_t SC_DECL _SCDLG_SetProperty(
						const char   *Name,
						const char   *ValueStr,
						char   *ErrorStr);

/******************************************************************************/
/*
  Enables getting of different properties.
  IN:
    Name             : Identification name
  OUT:
    ValueStr         : Value string according given name (reserve > 100 bytes)
                        (decimal separator is fixed '.')
    ErrorStr         : error text or empty if no error (reserve >1024 bytes);
  RETURN:
    General Returncodes

  Refer to function "SetProperty" for available property names !!!

	Not implemented!
*/

PRE_DECL int32_t ALL_DECL _CDDLG_GetProperty(
						const char   *Name,
						char   *ValueStr,
						char   *ErrorStr);

PRE_DECL int32_t SC_DECL _SCDLG_GetProperty(
						const char   *Name,
						char   *ValueStr,
						char   *ErrorStr);

/******************************************************************************/
/*
  If a 'NIL' will be set and for default, a default routine will be called.
  Attention: Procedure must be compiled as 'FAR' and '_cdecl'.
	Defined procedure have to be in memory when called from DLL.
  Defines Procedure-Pointer to be called to monitor progress.
  A Double-Number will be transfered (0-100%) as argument.
  RETURN:
	General Returncodes
	
	Not implemented!
*/

PRE_DECL int32_t ALL_DECL _CDDLG_SetProgressProc(
						void *Pnt);

PRE_DECL int32_t SC_DECL _SCDLG_SetProgressProc(
						void *Pnt);

/******************************************************************************/
/*
  Opens connection to a defined server.
  IN:
	ServerName       : server name or TCP/IP address
	Username         : username
	Password         : password
	Timeout          : timeout [s]
  OUT:
	ErrorStr         : error text or empty if no error (reserve >1024 bytes);
  RETURN:
	General Returncodes
*/

PRE_DECL int32_t ALL_DECL _CDDLG_OpenConnection(
						const char   *ServerName,
						const char   *Username,
						const char   *Password,
						double Timeout,
						char   *ErrorStr);

PRE_DECL int32_t SC_DECL _SCDLG_OpenConnection(
						const char   *ServerName,
						const char   *Username,
						const char   *Password,
						double Timeout,
						char   *ErrorStr);

/******************************************************************************/
/*
  Closes connection when opened.
  ATTENTION: Be sure that this function is called before application is terminated,
			 so that proper closing of connection can happen !!!
  OUT:
	ErrorStr         : error text or empty if no error (reserve >1024 bytes);
  RETURN:
	General Returncodes
*/

PRE_DECL int32_t ALL_DECL _CDDLG_CloseConnection(
						char   *ErrorStr);

PRE_DECL int32_t SC_DECL _SCDLG_CloseConnection(
						char   *ErrorStr);

/******************************************************************************/
/*
  Initiates directory listing iteration. Iteration runs up to return code is not OK.
  IN:
	FileName         : search filemask, containing wildcards;
  OUT:
	FileName         : filename (reserve >100 bytes);
	FileSize         : filesize in bytes
	ErrorStr         : error text or empty if no error (reserve >1024 bytes);
  RETURN:
	General Returncodes
	
	FileSize not implemented!
*/

PRE_DECL int32_t ALL_DECL _CDDLG_GetActualDirectory_First(
						char		*FileName,
						int32_t			*FileSize,
						char			*ErrorStr);

PRE_DECL int32_t SC_DECL _SCDLG_GetActualDirectory_First(
						char		*FileName,
						int32_t			*FileSize,
						char			*ErrorStr);

/******************************************************************************/
/*
  Follows "first" command to get remaining listing items. Iteration runs up to return code is not OK.
  OUT:
	FileName         : filename (reserve >100 bytes);
	FileSize         : filesize in bytes
	ErrorStr         : error text or empty if no error (reserve >1024 bytes);
  RETURN:
	General Returncodes
*/

PRE_DECL int32_t ALL_DECL _CDDLG_GetActualDirectory_Next(
						char		*FileName,
						int32_t		*FileSize,
						char		*ErrorStr);

PRE_DECL int32_t SC_DECL _SCDLG_GetActualDirectory_Next(
						char		*FileName,
						int32_t		*FileSize,
						char		*ErrorStr);

/******************************************************************************/
/*
  Reads one specified file to destination.
  Supports progress function !!!
  IN:
	SourceFileName                   : source filename;
	DestinationFullFileName          : destination filename with path;
	AppendToExistingDestinationFile  : if <> 0 than appending to an existing destination file;
  OUT:
	ErrorStr                         : error text or empty if no error (reserve >1024 bytes);
  RETURN:
	General Returncodes
*/

PRE_DECL int32_t ALL_DECL _CDDLG_ReadFile(
						const char  *SourceFileName,
						const char  *DestinationFullFileName,
						int32_t		AppendToExistingDestinationFile,
						char		*ErrorStr);

PRE_DECL int32_t SC_DECL _SCDLG_ReadFile(
						const char  *SourceFileName,
						const char  *DestinationFullFileName,
						int32_t		AppendToExistingDestinationFile,
						char		*ErrorStr);

/******************************************************************************/
/*
  Writes one specified file to destination.
  Supports progress function !!!
  IN:
	SourceFullFileName         : source filename with path;
	DestinationFileName        : destination filename;
  OUT:
	ErrorStr                   : error text or empty if no error (reserve >1024 bytes);
  RETURN:
	General Returncodes
*/

PRE_DECL int32_t ALL_DECL _CDDLG_WriteFile(
						const char	*SourceFullFileName,
						const char	*DestinationFileName,
						char		*ErrorStr);

PRE_DECL int32_t SC_DECL _SCDLG_WriteFile(
						const char	*SourceFullFileName,
						const char	*DestinationFileName,
						char		*ErrorStr);

/******************************************************************************/
/*
  Deletes one specified file at destination.
  IN:
	FileName                   : filename;
  OUT:
	ErrorStr                   : error text or empty if no error (reserve >1024 bytes);
  RETURN:
	General Returncodes
	
	
	Not implemented!
*/

PRE_DECL int32_t ALL_DECL _CDDLG_DeleteFile(
						const char	*FileName,
						char		*ErrorStr);

PRE_DECL int32_t SC_DECL _SCDLG_DeleteFile(
						const char	*FileName,
						char		 *ErrorStr);

/******************************************************************************/
/*
  Decodes a binary buffer file to a destination ASCII file. If header- and data-file
  is merged together, use only one of "SourcexxxxxxFullFilename" arguments and leave
  the other empty.
  IN:
	SourceHeaderFullFilename   : source filename of header with path;
	SourceDataFullFilename     : source filename of data with path;
	DestinationFullFilename    : destination filename with path;
  OUT:
	ErrorStr                   : error text or empty if no error (reserve >1024 bytes);
  RETURN:
	General Returncodes
*/

PRE_DECL int32_t ALL_DECL _CDDLG_DecodeBufferFile(
						const char   *SourceHeaderFullFilename,
						const char   *SourceDataFullFilename,
						const char   *DestinationFullFilename,
						char   *ErrorStr);

PRE_DECL int32_t SC_DECL _SCDLG_DecodeBufferFile(
						const char   *SourceHeaderFullFilename,
						const char   *SourceDataFullFilename,
						const char   *DestinationFullFilename,
						char   *ErrorStr);

/******************************************************************************/
/*
  Like DecodeBufferFile but with possibility to define decoding.
  IN:
    SourceHeaderFullFilename   : source filename of header with path;
    SourceDataFullFilename     : source filename of data with path;
    DestinationFullFilename    : destination filename with path;
    DecodeKind                 : defines decoding
                                 0 .. Time info of each frame is calculated as:
                                       dActTime*dActTimeToSecondFactor (like DecodeBufferFile does)
                                 1 .. Time info of each frame is calculated as:
                                       no modifications; like stored in buffer file
                                 2 .. Time info of each frame is calculated as:
                                       StartTime*StartTimeToDayFactor + dActTime*dActTimeToSecondFactor/86400 (OLE2)
                                 3 .. Time info of each frame is calculated as:
                                       StartTime*StartTimeToDayFactor + dActTime*dActTimeToSecondFactor/86400 (DATETIMESTRING)
    AddArgument                : Additional argument, to control behaviour
                                 0 .. nothing
  OUT:
    ErrorStr                   : error text or empty if no error (reserve >1024 bytes);
  RETURN:
    General Returncodes
	
	
	Not implemented!
*/

PRE_DECL int32_t ALL_DECL _CDDLG_DecodeBufferFileEx(
						const char   *SourceHeaderFullFilename,
						const char   *SourceDataFullFilename,
						const char   *DestinationFullFilename,
						int32_t	DecodeKind,
						int32_t	AddArgument,
						char   *ErrorStr);

PRE_DECL int32_t SC_DECL _SCDLG_DecodeBufferFileEx(
						const char   *SourceHeaderFullFilename,
						const char   *SourceDataFullFilename,
						const char   *DestinationFullFilename,
						int32_t	DecodeKind,
						int32_t	AddArgument,
						char   *ErrorStr);

/******************************************************************************/
/*
  Convert buffer file to different file formats.
  If header- and data-file is merged together, use only one of "SourcexxxxxxFullFilename" arguments and leave the other empty.
  IN:
    SourceHeaderFullFilename   : source filename of header with path;
    SourceDataFullFilename     : source filename of data with path;
    DestinationFullFilename    : destination filename with path;
    ConversionKind             : Destination data format
                                 0 .. CSV
                                 1 .. FAMOS
								 2 .. MDF
								 3 .. Matlab
    ConversionSettings           : Optional additional argument to provide conversion settings if needed.
    							   Typically provided as Json document to allow structured conversion options

  OUT:
    ErrorStr                   : error text or empty if no error (reserve >1024 bytes);
  RETURN:
    General Returncodes

*/
PRE_DECL int32_t ALL_DECL _CDDLG_ConvertBufferFile(
						const char  *SourceHeaderFullFilename,
						const char  *SourceDataFullFilename,
						const char  *DestinationFullFilename,
						int32_t		ConversionKind,
						const char*	ConversionSettings,
						char   		*ErrorStr);

PRE_DECL int32_t SC_DECL _SCDLG_ConvertBufferFile(
						const char  *SourceHeaderFullFilename,
						const char  *SourceDataFullFilename,
						const char  *DestinationFullFilename,
						int32_t		ConversionKind,
						const char*	ConversionSettings,
						char   		*ErrorStr);

/******************************************************************************/
/*
  Initiates info retrieving of connected devices iteration.
  Iteration runs up to return code is not OK.
  Supports progress function !!!
  IN:
    UseExtCommand              : if <> 0 than extended command is used
    ScanTime                   : duration of scan time for one network adapter [s]
  OUT:
    AdapterInfo                : info about used adapter; consists of: <AdapterType>[TAB]<AdapterName>
                                  (reserve >1024 bytes);
    DeviceInfo                 : complete info string as described in "e.bloxx System Guide" -
                                  section "Broadcastport ASCII/UDP" (reserve >1024 bytes)
    ErrorStr                   : error text or empty if no error (reserve >1024 bytes);
  RETURN:
    General Returncodes
*/

PRE_DECL int32_t ALL_DECL _CDDLG_IdentifyDevices_First(
						int32_t   UseExtCommand,
						double ScanTime,
						char   *AdapterInfo,
						char   *DeviceInfo,
						char   *ErrorStr);

PRE_DECL int32_t SC_DECL _SCDLG_IdentifyDevices_First(
						int32_t   UseExtCommand,
						double ScanTime,
						char   *AdapterInfo,
						char   *DeviceInfo,
						char   *ErrorStr);

/******************************************************************************/
/*
  Follows "first" command to get remaining device info items.
  Iteration runs up to return code is not OK.
  OUT:
    AdapterInfo                : info about used adapter; consists of: <AdapterType>[TAB]<AdapterName>
                                  (reserve >1024 bytes);
    DeviceInfo                 : complete info string as described in "e.bloxx System Guide" -
                                  section "Broadcastport ASCII/UDP" (reserve >1024 bytes)
    ErrorStr                   : error text or empty if no error (reserve >1024 bytes);
  RETURN:
    General Returncodes
*/

PRE_DECL int32_t ALL_DECL _CDDLG_IdentifyDevices_Next(
						char   *AdapterInfo,
						char   *DeviceInfo,
						char   *ErrorStr);

PRE_DECL int32_t SC_DECL _SCDLG_IdentifyDevices_Next(
						char   *AdapterInfo,
						char   *DeviceInfo,
						char   *ErrorStr);

/******************************************************************************/
/*
  Forces device to visually identify itself.
  IN:
    MACAddress                 : valid MAC Address;
    Timeout                    : duration of max. waiting for answer of device [s];
  OUT:
    ErrorStr                   : error text or empty if no error (reserve >1024 bytes);
  RETURN:
    General Returncodes
*/

PRE_DECL int32_t ALL_DECL _CDDLG_IdentifyVisual(
						const char *MACAddress,
						double Timeout,
						char   *ErrorStr);

PRE_DECL int32_t SC_DECL _SCDLG_IdentifyVisual(
						const char *MACAddress,
						double Timeout,
						char   *ErrorStr);

/******************************************************************************/
/*
  Used to build up and send a broadcast command, as described in "e.bloxx System Guide" -
  section "Broadcastport ASCII/UDP".
  Control character (CR,LF and TAB) can be inputted like '\r', '\n' and '\t'.
  IN:
    MACAddress                 : valid MAC Address or EMPTY for real broadcast;
    BaseCommand                : the command body with NO control characters;
    AdditionalData             : to extent command if needed.
    TimeoutOrWaittime          : duration of waiting for answer of device or in case of
                                  real broadcast the waittime [s];
  OUT:
    ResponseStr                : response data of device(s). In average, such a command
                                  responds with at about 30-40 bytes per device, so maybe
                                  a good approach is to reserve 50*DeviceCount bytes to start with;
    ErrorStr                   : error text or empty if no error (reserve >1024 bytes);
  RETURN:
    General Returncodes


	Not implemented!

*/

PRE_DECL int32_t ALL_DECL _CDDLG_BroadcastCommand(
						const char   *MACAddress,
						const char   *BaseCommand,
						const char   *AdditionalData,
						double TimeoutOrWaittime,
						char   *ResponseStr,
						char   *ErrorStr);

PRE_DECL int32_t SC_DECL _SCDLG_BroadcastCommand(
						const char   *MACAddress,
						const char   *BaseCommand,
						const char   *AdditionalData,
						double TimeoutOrWaittime,
						char   *ResponseStr,
						char   *ErrorStr);

/******************************************************************************/
/*
  Used to ping a server.
  IN:
    ServerName                 : server name or TCP/IP address;
    Timeout                    : Waittime [s];
  OUT:
    ResponseTime               : response time [s];
    ErrorStr                   : error text or empty if no error (reserve >1024 bytes);
  RETURN:
    General Returncodes
*/

PRE_DECL int32_t ALL_DECL _CDDLG_GetPingTime(
						const char   *ServerName,
						double Timeout,
						double *ResponseTime,
						char   *ErrorStr);

PRE_DECL int32_t SC_DECL _SCDLG_GetPingTime(
						const char   *ServerName,
						double Timeout,
						double *ResponseTime,
						char   *ErrorStr);

/******************************************************************************/
/*
  Opens HighspeedPortTCPIP-socket to a server.
  IN:
    ServerName                 : server name or TCP/IP address;
    Timeout                    : Waittime [s];
  OUT:
    ErrorStr                   : error text or empty if no error (reserve >1024 bytes);
  RETURN:
    General Returncodes
*/

PRE_DECL int32_t ALL_DECL _CDDLG_OpenHighspeedPortTCPIP(
						const char   *IPAddress,
						double Timeout,
						char   *ErrorStr);

PRE_DECL int32_t SC_DECL _SCDLG_OpenHighspeedPortTCPIP(
						const char   *IPAddress,
						double Timeout,
						char   *ErrorStr);

/******************************************************************************/
/*
  Closes HighspeedPortTCPIP-socket to a server.
  OUT:
    ErrorStr                   : error text or empty if no error (reserve >1024 bytes);
  RETURN:
    General Returncodes
*/

PRE_DECL int32_t ALL_DECL _CDDLG_CloseHighspeedPortTCPIP(
						char   *ErrorStr);

PRE_DECL int32_t SC_DECL _SCDLG_CloseHighspeedPortTCPIP(
						char   *ErrorStr);

/******************************************************************************/
/*
  Performs HighspeedPortTCPIP communication to a server.
  IN:
    Command                    : command according Highspeedport protocol;
    WriteData                  : data to write according Highspeedport protocol;
    WriteLength                : amount of data to write;
    WriteOffset                : offset to write to according Highspeedport protocol;
    Timeout                    : Waittime [s];
    UseDynamicLength           : if <> 0, ReadLength has not to be set at calling the function;
    ReadLength                 : if UseDynamicLength = 0, this amount of data are waited for;
  OUT:
    ReadData                   : received data;
    ReadLength                 : contains amount of received data;
    ErrorStr                   : error text or empty if no error (reserve >1024 bytes);
  RETURN:
    General Returncodes
*/
PRE_DECL int32_t ALL_DECL _CDDLG_CommunicateHighspeedPortTCPIP(
						int32_t   Command,
						const char   *WriteData,
						int32_t   WriteLength,
						int32_t   WriteOffset,
						char   *ReadData,
						int32_t   *ReadLength,
						double Timeout,
						int32_t   UseDynamicLength,
						char   *ErrorStr);

PRE_DECL int32_t SC_DECL _SCDLG_CommunicateHighspeedPortTCPIP(
						int32_t   Command,
						const char   *WriteData,
						int32_t   WriteLength,
						int32_t   WriteOffset,
						char   *ReadData,
						int32_t   *ReadLength,
						double Timeout,
						int32_t   UseDynamicLength,
						char   *ErrorStr);

/******************************************************************************/
/*
  Calculates CRC of a file.
  IN:
    FullFilename               : filename of data with path;
    BitWidth                   : Depth of CRC; supported: 16 / 32
  OUT:
    CRC                        : calculated value;
    ErrorStr                   : error text or empty if no error (reserve >1024 bytes);
  RETURN:
    General Returncodes

	Not implemented!

*/
PRE_DECL int32_t ALL_DECL _CDDLG_CalculateCRCOfLocalFile(
						const char	*FullFilename,
						int32_t	BitWidth,
						int32_t	*CRC,
						char	*ErrorStr);

PRE_DECL int32_t SC_DECL _SCDLG_CalculateCRCOfLocalFile(
						const char	*FullFilename,
						int32_t	BitWidth,
						int32_t	*CRC,
						char	*ErrorStr);

/******************************************************************************/
/*
  (Un)Compresses file according LZSS algorithm.
  IN:
    SourceFullFilename            : filename of source with path;
    DestinationFullFilename       : filename of destination with path;
    IsCompress                    : if <> 0 => compress;
  OUT:
    DestinationToSourceSizeRatio  : ratio of sizes: DestinationFileSize/SourceFileSize;
    ErrorStr                      : error text or empty if no error (reserve >1024 bytes);
  RETURN:
    General Returncodes


	Not implemented!
*/
PRE_DECL int32_t ALL_DECL _CDDLG_LZSSCompressUncompressLocalFile(
						const char	*SourceFullFilename,
						const char	*DestinationFullFilename,
						int32_t	IsCompress,
						double	*DestinationToSourceSizeRatio,
						char	*ErrorStr);

PRE_DECL int32_t SC_DECL _SCDLG_LZSSCompressUncompressLocalFile(
						const char	*SourceFullFilename,
						const char	*DestinationFullFilename,
						int32_t	IsCompress,
						double	*DestinationToSourceSizeRatio,
						char	*ErrorStr);

/******************************************************************************/
/*
  (Un)Compresses file according gzip algorithm.
  IN:
    SourceFullFilename            : filename of source with path;
    DestinationFullFilename       : filename of destination with path;
    IsCompress                    : if <> 0 => compress;
  OUT:
    ErrorStr                      : error text or empty if no error (reserve >1024 bytes);
  RETURN:
    General Returncodes


	Not implemented!
*/
PRE_DECL int32_t ALL_DECL _CDDLG_GZIPCompressUncompressLocalFile(
						const char	*SourceFullFilename,
						const char	*DestinationFullFilename,
						int32_t	IsCompress,
						char	*ErrorStr);

PRE_DECL int32_t SC_DECL _SCDLG_GZIPCompressUncompressLocalFile(
						const char	*SourceFullFilename,
						const char	*DestinationFullFilename,
						int32_t	IsCompress,
						char	*ErrorStr);

/******************************************************************************/
/******************************************************************************/
/*
	New implementation of the Networkscan. Different Types of Networkscan can be performed.
	IN:
		ScanType			    : Type of networkscan: IPv4_Broadcast, IPv4_Multicast, IPv6_Multicast or all combined
	OUT:
		NumberOfScannedDevices  : Number of scanned devices. Use to iterate with "GetDeviceInfo"
	RETURN:
		General Returncodes
*/

PRE_DECL int32_t ALL_DECL _CDDLG_NetworkScan_StartScan(
	int32_t		ScanType, 
	int32_t		*NumberOfScannedDevices);

PRE_DECL int32_t SC_DECL _SCDLG_NetworkScan_StartScan(
	int32_t		ScanType,
	int32_t		*NumberOfScannedDevices);

/******************************************************************************/
/******************************************************************************/
/*
	Read Info from scanned devices. Use "NetworkScan_StartScan" first to get the number of available devices.
	IN:
		index					: iterator index
		typeID					: Info ID 
	OUT:
		info					: requested info
	RETURN:
		General Returncodes
*/
PRE_DECL int32_t ALL_DECL _CDDLG_NetworkScan_GetDeviceInfo(
	int32_t		index,
	int32_t		typeID,
	char		*info);

PRE_DECL int32_t SC_DECL _SCDLG_NetworkScan_GetDeviceInfo(
	int32_t		index,
	int32_t		typeID,
	char		*info);

/******************************************************************************/
/******************************************************************************/
/*
	Enables or disabled DHCP on a controller

	IN:
		scanType					: Type of scan protocol to use (ScanType_IPv4_Multicast or ScanType_IPv6_Multicast (previous scan needed))
		macAddress					: MAC address of the controller
		enable						: True to enable DHCP, false to disable
	RETURN:
		General Returncodes
*/
PRE_DECL int32_t ALL_DECL _CDDLG_NetworkScan_EnableDHCP(
	int32_t			ScanType,
	const char*		MacAddress,
	bool			enable);

PRE_DECL int32_t SC_DECL _SCDLG_NetworkScan_EnableDHCP(
	int32_t			ScanType,
	const char*		MacAddress,
	bool			enable);

/******************************************************************************/
/******************************************************************************/
/*
	Sets the network parameters of a controller

	IN:
		scanType					: Type of scan protocol to use (ScanType_IPv4_Multicast or ScanType_IPv6_Multicast (previous scan needed))
		macAddress					: MAC address of the controller
		ipAddress					: New IP address of the controller
		subnetMask					: New subnet mask of the controller
		defaultGateway				: New default gateway of the controller
		dnsServer					: New DNS server of the controller (optional)
	RETURN:
		General Returncodes
*/
PRE_DECL int32_t ALL_DECL _CDDLG_NetworkScan_SetNetworkParameter(
	int32_t			ScanType,
	const char*		MacAddress,
	const char*		IpAddress,
	const char*		SubnetMask,
	const char*		DefaultGateway,
	const char*		DnsServer);

PRE_DECL int32_t SC_DECL _SCDLG_NetworkScan_SetNetworkParameter(
	int32_t			ScanType,
	const char*		MacAddress,
	const char*		IpAddress,
	const char*		SubnetMask,
	const char*		DefaultGateway,
	const char*		DnsServer);


/******************************************************************************/
/******************************************************************************/
/*
	Reboots a controller

	IN:
		scanType					: Type of scan protocol to use (ScanType_IPv4_Multicast or ScanType_IPv6_Multicast (previous scan needed))
		macAddress					: MAC address of the controller
	RETURN:
		General Returncodes
*/
PRE_DECL int32_t ALL_DECL _CDDLG_NetworkScan_Reboot(
	int32_t			ScanType,
	const char*		MacAddress);

PRE_DECL int32_t SC_DECL _SCDLG_NetworkScan_Reboot(
	int32_t			ScanType,
	const char*		MacAddress);


/******************************************************************************/
/******************************************************************************/
/*
	Identifies a controler (blinking)

	IN:
		scanType					: Type of scan protocol to use (ScanType_IPv4_Multicast or ScanType_IPv4_Broadcast)
		macAddress					: MAC address of the controller
	RETURN:
		General Returncodes
*/
PRE_DECL int32_t ALL_DECL _CDDLG_NetworkScan_Identify(
	int32_t			ScanType,
	const char*		MacAddress);

PRE_DECL int32_t SC_DECL _SCDLG_NetworkScan_Identify(
	int32_t			ScanType,
	const char*		MacAddress);







/*#########################################################################*/
/* End header                                                              */
/*#########################################################################*/

#ifdef __cplusplus
}
#endif
