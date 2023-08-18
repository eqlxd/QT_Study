#pragma once

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

//================================================================================================================================================
// MakeStateFile V1.70 2021-04-09 - automatically generated file, do not edit!
// ATTENTION: Assigning a eGInsStateType__* directly is generating a State-value with Level=ERROR automatically.
//            So for building an ERROR, we don't need to call a function from this file, but assigning the enum directly.
// Description of used terms:
//     * State:         consisting of Level and Type parts
//         * Level:         level e.g. error, warning, ... defined as eGInsStateLevel__* items, in this file
//         * Type:          type, defined as eGInsStateType__* items, in this file
// Global access to converter functions:
//     GINSSTATE_ ...
//================================================================================================================================================


#if defined(__cplusplus)
extern "C"
{
#endif

typedef int64_t TGInsState;

typedef enum
{
//================================================================================================================================================
// Group: root
//================================================================================================================================================
    eGInsStateLevel__ERROR = 0,
    eGInsStateLevel__WARNING = 1,
    eGInsStateLevel__INFO = 2,

//================================================================================================================================================
//================================================================================================================================================
    eGInsStateLevel__NotDefined
} TEnumGInsStateLevel;


typedef enum
{
//================================================================================================================================================
// Group: root
//================================================================================================================================================
    eGInsStateType__NONE = 0,
    eGInsStateType__MEMORY = -1,
    eGInsStateType__VERSION = -2,
    eGInsStateType__INVALIDOPERATION = -3,
    eGInsStateType__FNTNOTEXIST = -4,
    eGInsStateType__INTERNAL = -5,
    eGInsStateType__INVALIDPARAMETER = -6,
    eGInsStateType__BUFFERTOOSMALL = -7,
    eGInsStateType__INVALID32VALUE = -8,
    eGInsStateType__INVALIDPTR = -9,
    eGInsStateType__FWNOTCHECKED = -10,
    eGInsStateType__BREAK = -11,
    eGInsStateType__BUSY = -12,
    eGInsStateType__KEYCODE = -13,
    eGInsStateType__PASSWORD = -14,
    eGInsStateType__TRYAGAIN = -15,
    eGInsStateType__TIMEOUT = -16,
    eGInsStateType__INVALIDLOCALIZATION = -17,
    eGInsStateType__COMMON = -99,

//================================================================================================================================================
// Group: FILE
//================================================================================================================================================
    eGInsStateType__FILE = -100,
    eGInsStateType__FILE_OPEN = eGInsStateType__FILE - 0,
    eGInsStateType__FILE_FORMAT = eGInsStateType__FILE - 1,
    eGInsStateType__FILE_VERSION = eGInsStateType__FILE - 2,
    eGInsStateType__FILE_OPENWRITE = eGInsStateType__FILE - 3,
    eGInsStateType__FILE_CREATE = eGInsStateType__FILE - 4,
    eGInsStateType__FILE_NOTEXIST = eGInsStateType__FILE - 5,
    eGInsStateType__FILE_WRITE = eGInsStateType__FILE - 6,
    eGInsStateType__FILE_READ = eGInsStateType__FILE - 7,
    eGInsStateType__FILE_REMOVE = eGInsStateType__FILE - 8,
    eGInsStateType__FILE_PACK = eGInsStateType__FILE - 9,
    eGInsStateType__FILE_UNPACK = eGInsStateType__FILE - 10,

//================================================================================================================================================
// Group: NET
//================================================================================================================================================
    eGInsStateType__NET = -3400,
    eGInsStateType__NET_SUCCESS = eGInsStateType__NET - 0,
    eGInsStateType__NET_PROGRESS = eGInsStateType__NET - 1,
    eGInsStateType__NET_NO_FREE_ENTRY = eGInsStateType__NET - 2,
    eGInsStateType__NET_BAD_LOCALNAME = eGInsStateType__NET - 3,
    eGInsStateType__NET_OUT_OF_MEMORY = eGInsStateType__NET - 4,
    eGInsStateType__NET_TIMEOUT = eGInsStateType__NET - 5,
    eGInsStateType__NET_MORE_DATA = eGInsStateType__NET - 6,
    eGInsStateType__NET_NOT_SUPPORTED = eGInsStateType__NET - 7,
    eGInsStateType__NET_BAD_NETNAME = eGInsStateType__NET - 8,
    eGInsStateType__NET_OPEN_WINDOW = eGInsStateType__NET - 9,
    eGInsStateType__NET_INIT_WINSOCK = eGInsStateType__NET - 10,
    eGInsStateType__NET_DATAGRAM_FRAGMENTED = eGInsStateType__NET - 11,
    eGInsStateType__NET_INVALID_SERVICE = eGInsStateType__NET - 12,
    eGInsStateType__NET_MAX_SOCKETS = eGInsStateType__NET - 13,
    eGInsStateType__NET_PROTOCOL_NOT_AVAILABLE = eGInsStateType__NET - 14,
    eGInsStateType__NET_CONNECTION_CLOSED = eGInsStateType__NET - 15,
    eGInsStateType__NET_EXECUTE_BUSY = eGInsStateType__NET - 16,
    eGInsStateType__NET_UNKNOWN_COMMAND = eGInsStateType__NET - 17,
    eGInsStateType__NET_UNKNOWN_STATE = eGInsStateType__NET - 18,
    eGInsStateType__NET_INVALID_IPADDR = eGInsStateType__NET - 19,
    eGInsStateType__NET_INVALID_ADAPTER_NUMBER = eGInsStateType__NET - 20,
    eGInsStateType__NET_FILE_ACCESS = eGInsStateType__NET - 21,
    eGInsStateType__NET_NO_VERSION = eGInsStateType__NET - 22,
    eGInsStateType__NET_VERIFY = eGInsStateType__NET - 23,
    eGInsStateType__NET_BAD_SUBMASK = eGInsStateType__NET - 24,
    eGInsStateType__NET_INVALID_PARAMETER = eGInsStateType__NET - 25,
    eGInsStateType__NET_CFG = eGInsStateType__NET - 26,
    eGInsStateType__NET_PERMISSION_DENIED = eGInsStateType__NET - 27,
    eGInsStateType__NET_CALLTIMEOUT = eGInsStateType__NET - 28,
    eGInsStateType__NET_INVALID_HOSTIP = eGInsStateType__NET - 29,
    eGInsStateType__NET_INVALID_SUBHOSTIP = eGInsStateType__NET - 30,
    eGInsStateType__NET_WINSOCK2_NOT_AVAILABLE = eGInsStateType__NET - 31,
    eGInsStateType__NET_ENCRYPTALGORITHEM = eGInsStateType__NET - 32,
    eGInsStateType__NET_INVALID_PASSWORD = eGInsStateType__NET - 33,
    eGInsStateType__NET_PASSWORD_REQUIRED = eGInsStateType__NET - 34,
    eGInsStateType__NET_MONCTRL_INTERNAL_DEV_NOT_FOUND = eGInsStateType__NET - 35,
    eGInsStateType__NET_INVALID_NETWORKCLASS_SUBNET = eGInsStateType__NET - 36,
    eGInsStateType__NET_WSAERR_START = eGInsStateType__NET - 100,
    eGInsStateType__NET_EINTR = eGInsStateType__NET - 104,
    eGInsStateType__NET_EBADF = eGInsStateType__NET - 109,
    eGInsStateType__NET_EACCES = eGInsStateType__NET - 113,
    eGInsStateType__NET_EFAULT = eGInsStateType__NET - 114,
    eGInsStateType__NET_EINVAL = eGInsStateType__NET - 122,
    eGInsStateType__NET_EMFILE = eGInsStateType__NET - 124,
    eGInsStateType__NET_EWOULDBLOCK = eGInsStateType__NET - 135,
    eGInsStateType__NET_EINPROGRESS = eGInsStateType__NET - 136,
    eGInsStateType__NET_EALREADY = eGInsStateType__NET - 137,
    eGInsStateType__NET_ENOTSOCK = eGInsStateType__NET - 138,
    eGInsStateType__NET_EDESTADDRREQ = eGInsStateType__NET - 139,
    eGInsStateType__NET_EMSGSIZE = eGInsStateType__NET - 140,
    eGInsStateType__NET_EPROTOTYPE = eGInsStateType__NET - 141,
    eGInsStateType__NET_ENOPROTOOPT = eGInsStateType__NET - 142,
    eGInsStateType__NET_EPROTONOSUPPORT = eGInsStateType__NET - 143,
    eGInsStateType__NET_ESOCKTNOSUPPORT = eGInsStateType__NET - 144,
    eGInsStateType__NET_EOPNOTSUPP = eGInsStateType__NET - 145,
    eGInsStateType__NET_EPFNOSUPPORT = eGInsStateType__NET - 146,
    eGInsStateType__NET_EAFNOSUPPORT = eGInsStateType__NET - 147,
    eGInsStateType__NET_EADDRINUSE = eGInsStateType__NET - 148,
    eGInsStateType__NET_EADDRNOTAVAIL = eGInsStateType__NET - 149,
    eGInsStateType__NET_ENETDOWN = eGInsStateType__NET - 150,
    eGInsStateType__NET_ENETUNREACH = eGInsStateType__NET - 151,
    eGInsStateType__NET_ENETRESET = eGInsStateType__NET - 152,
    eGInsStateType__NET_ECONNABORTED = eGInsStateType__NET - 153,
    eGInsStateType__NET_ECONNRESET = eGInsStateType__NET - 154,
    eGInsStateType__NET_ENOBUFS = eGInsStateType__NET - 155,
    eGInsStateType__NET_EISCONN = eGInsStateType__NET - 156,
    eGInsStateType__NET_ENOTCONN = eGInsStateType__NET - 157,
    eGInsStateType__NET_ESHUTDOWN = eGInsStateType__NET - 158,
    eGInsStateType__NET_ETOOMANYREFS = eGInsStateType__NET - 159,
    eGInsStateType__NET_ETIMEDOUT = eGInsStateType__NET - 160,
    eGInsStateType__NET_ECONNREFUSED = eGInsStateType__NET - 161,
    eGInsStateType__NET_ELOOP = eGInsStateType__NET - 162,
    eGInsStateType__NET_ENAMETOOLONG = eGInsStateType__NET - 163,
    eGInsStateType__NET_EHOSTDOWN = eGInsStateType__NET - 164,
    eGInsStateType__NET_EHOSTUNREACH = eGInsStateType__NET - 165,
    eGInsStateType__NET_ENOTEMPTY = eGInsStateType__NET - 166,
    eGInsStateType__NET_EPROCLIM = eGInsStateType__NET - 167,
    eGInsStateType__NET_EUSERS = eGInsStateType__NET - 168,
    eGInsStateType__NET_EDQUOT = eGInsStateType__NET - 169,
    eGInsStateType__NET_ESTALE = eGInsStateType__NET - 170,
    eGInsStateType__NET_EREMOTE = eGInsStateType__NET - 171,
    eGInsStateType__NET_SYSNOTREADY = eGInsStateType__NET - 191,
    eGInsStateType__NET_VERNOTSUPPORTED = eGInsStateType__NET - 192,
    eGInsStateType__NET_NOTINITIALISED = eGInsStateType__NET - 193,
    eGInsStateType__NET_EDISCON = eGInsStateType__NET - 201,

//================================================================================================================================================
// Group: XMLRPC
//================================================================================================================================================
    eGInsStateType__XMLRPC = -4300,
    eGInsStateType__XMLRPC_UNSPECIFIED = eGInsStateType__XMLRPC - 0,
    eGInsStateType__XMLRPC_INTERNAL = eGInsStateType__XMLRPC - 1,
    eGInsStateType__XMLRPC_UNEXPECTEDEXEPTION = eGInsStateType__XMLRPC - 2,
    eGInsStateType__XMLRPC_VALUETYPEERROR = eGInsStateType__XMLRPC - 3,
    eGInsStateType__XMLRPC_VALUEEXPECTEDARRAY = eGInsStateType__XMLRPC - 4,
    eGInsStateType__XMLRPC_VALUEARRAYINDEX = eGInsStateType__XMLRPC - 5,
    eGInsStateType__XMLRPC_VALUEEXPECTEDSTRUCT = eGInsStateType__XMLRPC - 6,
    eGInsStateType__XMLRPC_INVALIDARGUMENT = eGInsStateType__XMLRPC - 7,
    eGInsStateType__XMLRPC_INVALIDARGUMENTTYPE = eGInsStateType__XMLRPC - 8,
    eGInsStateType__XMLRPC_LOGINREQUIRED = eGInsStateType__XMLRPC - 9,
    eGInsStateType__XMLRPC_PERMISSIONDENIEDMETHOD = eGInsStateType__XMLRPC - 10,
    eGInsStateType__XMLRPC_PERMISSIONDENIEDROUTE = eGInsStateType__XMLRPC - 11,
    eGInsStateType__XMLRPC_UNKNOWNMETHOD = eGInsStateType__XMLRPC - 12,
    eGInsStateType__XMLRPC_UNKNOWNROUTE = eGInsStateType__XMLRPC - 13,
    eGInsStateType__XMLRPC_EXECUTEMETHOD = eGInsStateType__XMLRPC - 14,
    eGInsStateType__XMLRPC_GENERATERESPONSE = eGInsStateType__XMLRPC - 15,
    eGInsStateType__XMLRPC_FORMATREQUEST = eGInsStateType__XMLRPC - 16,
    eGInsStateType__XMLRPC_FORMATRESPONSE = eGInsStateType__XMLRPC - 17,
    eGInsStateType__XMLRPC_TRANSPORTINVALIDCFG = eGInsStateType__XMLRPC - 18,
    eGInsStateType__XMLRPC_TRANSPORTCONNECTIONPREPARE = eGInsStateType__XMLRPC - 19,
    eGInsStateType__XMLRPC_TRANSPORTCONNECTIONESTABLISH = eGInsStateType__XMLRPC - 20,
    eGInsStateType__XMLRPC_TRANSPORTPROGRESS = eGInsStateType__XMLRPC - 21,
    eGInsStateType__XMLRPC_TRANSPORTINVALIDSTATE = eGInsStateType__XMLRPC - 22,
    eGInsStateType__XMLRPC_TRANSPORTSEND = eGInsStateType__XMLRPC - 23,
    eGInsStateType__XMLRPC_TRANSPORTRECEIVE = eGInsStateType__XMLRPC - 24,
    eGInsStateType__XMLRPC_VALUEEXPECTEDBINARYDATA = eGInsStateType__XMLRPC - 25,
    eGInsStateType__XMLRPC_VALUEINDEX = eGInsStateType__XMLRPC - 26,
    eGInsStateType__XMLRPC_METHODCALLSIZE = eGInsStateType__XMLRPC - 27,
    eGInsStateType__XMLRPC_METHODRESPONSESIZE = eGInsStateType__XMLRPC - 28,
    eGInsStateType__XMLRPC_INVALIDVARIABLENAME = eGInsStateType__XMLRPC - 29,
    eGInsStateType__XMLRPC_CONNECTIONCLOSED = eGInsStateType__XMLRPC - 30,
    eGInsStateType__XMLRPC_SOCKETCLOSED = eGInsStateType__XMLRPC - 31,
    eGInsStateType__XMLRPC_SERVERSHUTDOWN = eGInsStateType__XMLRPC - 32,
    eGInsStateType__XMLRPC_VALUEREADONLY = eGInsStateType__XMLRPC - 33,
    eGInsStateType__XMLRPC_ACCESSLOCKTOKEN = eGInsStateType__XMLRPC - 34,
    eGInsStateType__XMLRPC_ACCESSLOCKCREATE = eGInsStateType__XMLRPC - 35,
    eGInsStateType__XMLRPC_ACCESSLOCKINPROGRESS = eGInsStateType__XMLRPC - 36,
    eGInsStateType__XMLRPC_ACCESSLOCKREADACTIVE = eGInsStateType__XMLRPC - 37,
    eGInsStateType__XMLRPC_ACCESSLOCKWRITEACTIVE = eGInsStateType__XMLRPC - 38,
    eGInsStateType__XMLRPC_ACCESSLOCKREADWRITEACTIVE = eGInsStateType__XMLRPC - 39,
    eGInsStateType__XMLRPC_APICOMPATIBILITY = eGInsStateType__XMLRPC - 40,

//================================================================================================================================================
// Group: DataLogger
//================================================================================================================================================
    eGInsStateType__DataLogger = -4400,
    eGInsStateType__DataLogger_Runtime_ConfigError = eGInsStateType__DataLogger - 0,
    eGInsStateType__DataLogger_Runtime_BufferOverrun = eGInsStateType__DataLogger - 1,
    eGInsStateType__DataLogger_Runtime_DataLimitReached = eGInsStateType__DataLogger - 2,
    eGInsStateType__DataLogger_Runtime_RenameFileFailed = eGInsStateType__DataLogger - 3,
    eGInsStateType__DataLogger_Runtime_OpenFileFailed = eGInsStateType__DataLogger - 4,
    eGInsStateType__DataLogger_Runtime_RequestFreeSpace = eGInsStateType__DataLogger - 5,
    eGInsStateType__DataLogger_Runtime_NoStorageDestination = eGInsStateType__DataLogger - 6,
    eGInsStateType__DataLogger_Runtime_DataInterfaceAccess = eGInsStateType__DataLogger - 7,
    eGInsStateType__DataLogger_Runtime_SendMail = eGInsStateType__DataLogger - 8,
    eGInsStateType__DataLogger_Runtime_SendFTP = eGInsStateType__DataLogger - 9,
    eGInsStateType__DataLogger_Runtime_DeleteFileFailed = eGInsStateType__DataLogger - 10,
    eGInsStateType__DataLogger_Runtime_ConvertFileFailed = eGInsStateType__DataLogger - 11,
    eGInsStateType__DataLogger_Runtime_NotSpecified = eGInsStateType__DataLogger - 63,
    eGInsStateType__DataLogger_Config_ParamsError = eGInsStateType__DataLogger - 64,
    eGInsStateType__DataLogger_Config_NotLoaded = eGInsStateType__DataLogger - 65,
    eGInsStateType__DataLogger_Config_VariableNotFound = eGInsStateType__DataLogger - 66,
    eGInsStateType__DataLogger_Config_InvalidSourceBuffer = eGInsStateType__DataLogger - 67,
    eGInsStateType__DataLogger_Config_PostProcessor_ParamsError = eGInsStateType__DataLogger - 74,
    eGInsStateType__DataLogger_Config_PostProcessor_VariableNotFound = eGInsStateType__DataLogger - 75,
    eGInsStateType__DataLogger_Config_PostProcessor_ConstructVariable = eGInsStateType__DataLogger - 76,
    eGInsStateType__DataLogger_Config_PostProcessor_InvalidSourceBuffer = eGInsStateType__DataLogger - 77,

//================================================================================================================================================
// Group: DataStream
//================================================================================================================================================
    eGInsStateType__DataStream = -4500,
    eGInsStateType__DataStream_Runtime_ConfigError = eGInsStateType__DataStream - 0,
    eGInsStateType__DataStream_Runtime_BufferOverrun = eGInsStateType__DataStream - 1,
    eGInsStateType__DataStream_Runtime_HighSpeedPort = eGInsStateType__DataStream - 2,
    eGInsStateType__DataStream_Runtime_SourceStream = eGInsStateType__DataStream - 3,
    eGInsStateType__DataStream_Runtime_StreamMemory = eGInsStateType__DataStream - 4,
    eGInsStateType__DataStream_Runtime_TimeoutOccured = eGInsStateType__DataStream - 5,
    eGInsStateType__DataStream_Runtime_ConfigChanged = eGInsStateType__DataStream - 6,
    eGInsStateType__DataStream_Runtime_Interrupted = eGInsStateType__DataStream - 7,
    eGInsStateType__DataStream_Runtime_InvalidPointer = eGInsStateType__DataStream - 8,
    eGInsStateType__DataStream_Runtime_InvalidDataSource = eGInsStateType__DataStream - 9,
    eGInsStateType__DataStream_Runtime_DataGapDetected = eGInsStateType__DataStream - 10,
    eGInsStateType__DataStream_Runtime_SourceNotOperational = eGInsStateType__DataStream - 11,
    eGInsStateType__DataStream_Runtime_SourceOffline = eGInsStateType__DataStream - 12,
    eGInsStateType__DataStream_Runtime_NotSpecified = eGInsStateType__DataStream - 63,
    eGInsStateType__DataStream_Config_ParamsError = eGInsStateType__DataStream - 64,
    eGInsStateType__DataStream_Config_NotLoaded = eGInsStateType__DataStream - 65,
    eGInsStateType__DataStream_Config_VariableNotFound = eGInsStateType__DataStream - 66,
    eGInsStateType__DataStream_Config_InvalidSourceStream = eGInsStateType__DataStream - 67,

//================================================================================================================================================
// Group: MailClient
//================================================================================================================================================
    eGInsStateType__MailClient = -4655,
    eGInsStateType__MailClient_Runtime_ConfigError = eGInsStateType__MailClient - 0,
    eGInsStateType__MailClient_Runtime_InvalidSendDestinationAddress = eGInsStateType__MailClient - 1,
    eGInsStateType__MailClient_Runtime_InvalidSendSubject = eGInsStateType__MailClient - 2,
    eGInsStateType__MailClient_Runtime_InvalidSendBody = eGInsStateType__MailClient - 3,
    eGInsStateType__MailClient_Runtime_SendMailFailed = eGInsStateType__MailClient - 4,
    eGInsStateType__MailClient_Runtime_MinimumSendInterval = eGInsStateType__MailClient - 5,
    eGInsStateType__MailClient_Config_ParamsError = eGInsStateType__MailClient - 64,
    eGInsStateType__MailClient_Config_NotLoaded = eGInsStateType__MailClient - 65,

//================================================================================================================================================
// Group: NMEAClient
//================================================================================================================================================
    eGInsStateType__NMEAClient = -4755,
    eGInsStateType__NMEAClient_Runtime_ConfigError = eGInsStateType__NMEAClient - 0,
    eGInsStateType__NMEAClient_Runtime_InvalidPort = eGInsStateType__NMEAClient - 1,
    eGInsStateType__NMEAClient_Runtime_InvalidPortConfig = eGInsStateType__NMEAClient - 2,
    eGInsStateType__NMEAClient_Runtime_InvalidSentenceFormat = eGInsStateType__NMEAClient - 3,
    eGInsStateType__NMEAClient_Config_InvalidCharFormat = eGInsStateType__NMEAClient - 64,
    eGInsStateType__NMEAClient_Config_InvalidBaudRate = eGInsStateType__NMEAClient - 65,

//================================================================================================================================================
// Group: GarminGPSClient
//================================================================================================================================================
    eGInsStateType__GarminGPSClient = -4855,
    eGInsStateType__GarminGPSClient_Runtime_ConfigError = eGInsStateType__GarminGPSClient - 0,
    eGInsStateType__GarminGPSClient_Runtime_InvalidPort = eGInsStateType__GarminGPSClient - 1,
    eGInsStateType__GarminGPSClient_Runtime_InvalidPortConfig = eGInsStateType__GarminGPSClient - 2,
    eGInsStateType__GarminGPSClient_Runtime_InvalidDataFormat = eGInsStateType__GarminGPSClient - 3,
    eGInsStateType__GarminGPSClient_Config_ParamsError = eGInsStateType__GarminGPSClient - 64,
    eGInsStateType__GarminGPSClient_Config_NotLoaded = eGInsStateType__GarminGPSClient - 65,

//================================================================================================================================================
// Group: DataStorageHandler
//================================================================================================================================================
    eGInsStateType__DataStorageHandler = -4955,
    eGInsStateType__DataStorageHandler_Runtime_ConfigError = eGInsStateType__DataStorageHandler - 0,
    eGInsStateType__DataStorageHandler_Runtime_CopyDataFiles = eGInsStateType__DataStorageHandler - 1,
    eGInsStateType__DataStorageHandler_Runtime_MountNetworkDrive = eGInsStateType__DataStorageHandler - 2,
    eGInsStateType__DataStorageHandler_Runtime_HandleDataFile = eGInsStateType__DataStorageHandler - 3,
    eGInsStateType__DataStorageHandler_Runtime_DriveNotExisting = eGInsStateType__DataStorageHandler - 4,
    eGInsStateType__DataStorageHandler_Config_ParamsError = eGInsStateType__DataStorageHandler - 64,
    eGInsStateType__DataStorageHandler_Config_NotLoaded = eGInsStateType__DataStorageHandler - 65,

//================================================================================================================================================
// Group: System
//================================================================================================================================================
    eGInsStateType__System = -5055,
    eGInsStateType__System_Config = eGInsStateType__System - 0,
    eGInsStateType__System_Variable = eGInsStateType__System - 1,
    eGInsStateType__System_VariableAccessInstable = eGInsStateType__System - 2,
    eGInsStateType__System_RealtimeTaskOverload = eGInsStateType__System - 3,
    eGInsStateType__System_PacKernelOperationDenied = eGInsStateType__System - 4,
    eGInsStateType__System_FieldbusConfiguration = eGInsStateType__System - 5,
    eGInsStateType__System_DistributorPortCombined = eGInsStateType__System - 6,
    eGInsStateType__System_SocketOverloaded = eGInsStateType__System - 7,
    eGInsStateType__System_ExtensionBoardError = eGInsStateType__System - 8,
    eGInsStateType__System_ClientConnection = eGInsStateType__System - 9,
    eGInsStateType__System_ExtWorkerNotSynched = eGInsStateType__System - 10,
    eGInsStateType__System_FileSystem = eGInsStateType__System - 11,
    eGInsStateType__System_DataLoggerCombined = eGInsStateType__System - 12,
    eGInsStateType__System_FtpClientUnitCombined = eGInsStateType__System - 13,
    eGInsStateType__System_MailClientUnitCombined = eGInsStateType__System - 14,
    eGInsStateType__System_MailServerUnitCombined = eGInsStateType__System - 15,
    eGInsStateType__System_USBHostUnitCombined = eGInsStateType__System - 16,
    eGInsStateType__System_ExternalClockSignalMissing = eGInsStateType__System - 17,
    eGInsStateType__System_RealtimeTaskSequenceLost = eGInsStateType__System - 18,
    eGInsStateType__System_AutoConfigureUnitCombined = eGInsStateType__System - 19,
    eGInsStateType__System_InterfaceCombined = eGInsStateType__System - 20,
    eGInsStateType__System_BoardInit = eGInsStateType__System - 21,
    eGInsStateType__System_PCIEInterfaceData = eGInsStateType__System - 22,
    eGInsStateType__System_DataBufferOverrun = eGInsStateType__System - 23,
    eGInsStateType__System_FieldbusInterfaceAccess = eGInsStateType__System - 24,
    eGInsStateType__System_WrongSubSystemVersion = eGInsStateType__System - 25,
    eGInsStateType__System_PluginCombined = eGInsStateType__System - 26,
    eGInsStateType__System_CANInterfaceCombined = eGInsStateType__System - 27,
    eGInsStateType__System_ModbusMasterCombined = eGInsStateType__System - 28,
    eGInsStateType__System_ModbusSlaveCombined = eGInsStateType__System - 29,
    eGInsStateType__System_FFTProcessorCombined = eGInsStateType__System - 30,
    eGInsStateType__System_GIComOperation = eGInsStateType__System - 31,
    eGInsStateType__System_WebSocketConnectivity = eGInsStateType__System - 32,
    eGInsStateType__System_NotDefined = eGInsStateType__System - 63,
    eGInsStateType__System_Config_ParamsError = eGInsStateType__System - 64,
    eGInsStateType__System_Config_NotLoaded = eGInsStateType__System - 65,
    eGInsStateType__System_Config_None = eGInsStateType__System - 499,
    eGInsStateType__System_Config_SlaveFileOK = eGInsStateType__System - 66,
    eGInsStateType__System_Config_Invalid = eGInsStateType__System - 67,
    eGInsStateType__System_Config_IndexTableOverrun = eGInsStateType__System - 68,
    eGInsStateType__System_Config_RecordBufferOverrun = eGInsStateType__System - 69,
    eGInsStateType__System_Config_CircleBufferSettings = eGInsStateType__System - 70,
    eGInsStateType__System_Config_DataInterfaceSize = eGInsStateType__System - 71,
    eGInsStateType__System_Config_VariableCount = eGInsStateType__System - 72,
    eGInsStateType__System_Config_DeviceCount = eGInsStateType__System - 73,
    eGInsStateType__System_Config_TransportCount = eGInsStateType__System - 74,
    eGInsStateType__System_Config_CommunicationSlotsExceeded = eGInsStateType__System - 75,
    eGInsStateType__System_Config_InvalidCycleCounter = eGInsStateType__System - 76,
    eGInsStateType__System_Config_InvalidArithmeticChConfig = eGInsStateType__System - 77,
    eGInsStateType__System_Config_ArithmeticStack = eGInsStateType__System - 78,

//================================================================================================================================================
// Group: SyncController
//================================================================================================================================================
    eGInsStateType__SyncController = -5555,
    eGInsStateType__SyncController_Runtime_ConfigError = eGInsStateType__SyncController - 0,
    eGInsStateType__SyncController_Runtime_SyncSignalMissing = eGInsStateType__SyncController - 1,
    eGInsStateType__SyncController_Runtime_EtherCATSyncSignalMissing = eGInsStateType__SyncController - 2,
    eGInsStateType__SyncController_Runtime_HWSyncSignalMissing = eGInsStateType__SyncController - 3,
    eGInsStateType__SyncController_Runtime_AppSignalMissing = eGInsStateType__SyncController - 4,
    eGInsStateType__SyncController_Runtime_NotSpecified = eGInsStateType__SyncController - 63,
    eGInsStateType__SyncController_Config_ParamsError = eGInsStateType__SyncController - 64,
    eGInsStateType__SyncController_Config_NotLoaded = eGInsStateType__SyncController - 65,

//================================================================================================================================================
// Group: HighSpeedPort
//================================================================================================================================================
    eGInsStateType__HighSpeedPort = -5655,
    eGInsStateType__HighSpeedPort_Runtime_ConfigError = eGInsStateType__HighSpeedPort - 0,
    eGInsStateType__HighSpeedPort_Runtime_ConnectionFailed = eGInsStateType__HighSpeedPort - 1,
    eGInsStateType__HighSpeedPort_Runtime_TimeoutOccured = eGInsStateType__HighSpeedPort - 2,
    eGInsStateType__HighSpeedPort_Runtime_ReadDirectory = eGInsStateType__HighSpeedPort - 3,
    eGInsStateType__HighSpeedPort_Runtime_DeleteFile = eGInsStateType__HighSpeedPort - 4,
    eGInsStateType__HighSpeedPort_Runtime_ReadFileData = eGInsStateType__HighSpeedPort - 5,
    eGInsStateType__HighSpeedPort_Runtime_ReadFileSize = eGInsStateType__HighSpeedPort - 6,
    eGInsStateType__HighSpeedPort_Runtime_ReadBufferStates = eGInsStateType__HighSpeedPort - 7,
    eGInsStateType__HighSpeedPort_Runtime_ReadBufferHeader = eGInsStateType__HighSpeedPort - 8,
    eGInsStateType__HighSpeedPort_Runtime_ReadRTC = eGInsStateType__HighSpeedPort - 9,
    eGInsStateType__HighSpeedPort_Runtime_WriteRTC = eGInsStateType__HighSpeedPort - 10,
    eGInsStateType__HighSpeedPort_Runtime_ReadDiagnostics = eGInsStateType__HighSpeedPort - 11,
    eGInsStateType__HighSpeedPort_Runtime_ReadStates = eGInsStateType__HighSpeedPort - 12,
    eGInsStateType__HighSpeedPort_Runtime_ReadwriteVariables = eGInsStateType__HighSpeedPort - 13,
    eGInsStateType__HighSpeedPort_Runtime_ReadBufferData = eGInsStateType__HighSpeedPort - 14,
    eGInsStateType__HighSpeedPort_Runtime_NotSpecified = eGInsStateType__HighSpeedPort - 63,
    eGInsStateType__HighSpeedPort_Config_ParamsError = eGInsStateType__HighSpeedPort - 64,

//================================================================================================================================================
// Group: DataPort
//================================================================================================================================================
    eGInsStateType__DataPort = -5755,

//================================================================================================================================================
// Group: FTPServer
//================================================================================================================================================
    eGInsStateType__FTPServer = -5855,

//================================================================================================================================================
// Group: FTPClient
//================================================================================================================================================
    eGInsStateType__FTPClient = -5955,

//================================================================================================================================================
// Group: Plugin
//================================================================================================================================================
    eGInsStateType__Plugin = -6055,
    eGInsStateType__Plugin_Runtime_Config = eGInsStateType__Plugin - 0,
    eGInsStateType__Plugin_Runtime_InterfaceNotAvailable = eGInsStateType__Plugin - 1,
    eGInsStateType__Plugin_Runtime_Custom0 = eGInsStateType__Plugin - 40,
    eGInsStateType__Plugin_Runtime_Custom1 = eGInsStateType__Plugin - 41,
    eGInsStateType__Plugin_Runtime_Custom2 = eGInsStateType__Plugin - 42,
    eGInsStateType__Plugin_Runtime_Custom3 = eGInsStateType__Plugin - 43,
    eGInsStateType__Plugin_Runtime_Custom4 = eGInsStateType__Plugin - 44,
    eGInsStateType__Plugin_Runtime_Custom5 = eGInsStateType__Plugin - 45,
    eGInsStateType__Plugin_Runtime_Custom6 = eGInsStateType__Plugin - 46,
    eGInsStateType__Plugin_Runtime_Custom7 = eGInsStateType__Plugin - 47,
    eGInsStateType__Plugin_Runtime_Custom8 = eGInsStateType__Plugin - 48,
    eGInsStateType__Plugin_Runtime_Custom9 = eGInsStateType__Plugin - 49,
    eGInsStateType__Plugin_Runtime_Custom10 = eGInsStateType__Plugin - 50,
    eGInsStateType__Plugin_Runtime_Custom11 = eGInsStateType__Plugin - 51,
    eGInsStateType__Plugin_Runtime_Custom12 = eGInsStateType__Plugin - 52,
    eGInsStateType__Plugin_Runtime_Custom13 = eGInsStateType__Plugin - 53,
    eGInsStateType__Plugin_Runtime_Custom14 = eGInsStateType__Plugin - 54,
    eGInsStateType__Plugin_Runtime_Custom15 = eGInsStateType__Plugin - 55,
    eGInsStateType__Plugin_Runtime_Custom16 = eGInsStateType__Plugin - 56,
    eGInsStateType__Plugin_Runtime_Custom17 = eGInsStateType__Plugin - 57,
    eGInsStateType__Plugin_Runtime_Custom18 = eGInsStateType__Plugin - 58,
    eGInsStateType__Plugin_Runtime_Custom19 = eGInsStateType__Plugin - 59,
    eGInsStateType__Plugin_Runtime_Custom20 = eGInsStateType__Plugin - 60,
    eGInsStateType__Plugin_Runtime_NotSpecified = eGInsStateType__Plugin - 63,
    eGInsStateType__Plugin_Config_NotLoaded = eGInsStateType__Plugin - 64,
    eGInsStateType__Plugin_Config_VariableNotFound = eGInsStateType__Plugin - 65,
    eGInsStateType__Plugin_Config_InterfaceNotAvailable = eGInsStateType__Plugin - 66,
    eGInsStateType__Plugin_Config_NotSpecified = eGInsStateType__Plugin - 255,

//================================================================================================================================================
// Group: EtherCAT
//================================================================================================================================================
    eGInsStateType__EtherCAT = -6311,
    eGInsStateType__EtherCAT_Runtime_ConfigError = eGInsStateType__EtherCAT - 0,
    eGInsStateType__EtherCAT_Runtime_InvalidConfiguration = eGInsStateType__EtherCAT - 1,
    eGInsStateType__EtherCAT_Runtime_NotInitialized = eGInsStateType__EtherCAT - 2,
    eGInsStateType__EtherCAT_Runtime_SyncSignalMissing = eGInsStateType__EtherCAT - 3,
    eGInsStateType__EtherCAT_Runtime_InterfaceAccess = eGInsStateType__EtherCAT - 4,
    eGInsStateType__EtherCAT_Runtime_HWNotAvailable = eGInsStateType__EtherCAT - 5,

//================================================================================================================================================
// Group: Network
//================================================================================================================================================
    eGInsStateType__Network = -6411,

//================================================================================================================================================
// Group: NTP
//================================================================================================================================================
    eGInsStateType__NTP = -6511,
    eGInsStateType__NTP_Runtime_ConfigError = eGInsStateType__NTP - 0,
    eGInsStateType__NTP_Runtime_SocketError = eGInsStateType__NTP - 1,
    eGInsStateType__NTP_Runtime_SetupReceive = eGInsStateType__NTP - 2,
    eGInsStateType__NTP_Runtime_SetupTransmit = eGInsStateType__NTP - 3,
    eGInsStateType__NTP_Runtime_SelectError = eGInsStateType__NTP - 4,
    eGInsStateType__NTP_Runtime_Receive = eGInsStateType__NTP - 5,
    eGInsStateType__NTP_Runtime_PacketLength = eGInsStateType__NTP - 6,
    eGInsStateType__NTP_Runtime_InvalidHostname = eGInsStateType__NTP - 7,
    eGInsStateType__NTP_Runtime_BindToPort = eGInsStateType__NTP - 8,
    eGInsStateType__NTP_Runtime_Connect = eGInsStateType__NTP - 9,
    eGInsStateType__NTP_Runtime_NotStarted = eGInsStateType__NTP - 10,
    eGInsStateType__NTP_Runtime_PacketRejected = eGInsStateType__NTP - 11,
    eGInsStateType__NTP_Config_ParamsError = eGInsStateType__NTP - 64,
    eGInsStateType__NTP_Config_NotLoaded = eGInsStateType__NTP - 65,

//================================================================================================================================================
// Group: Ethernet
//================================================================================================================================================
    eGInsStateType__Ethernet = -6611,

//================================================================================================================================================
// Group: Hardware
//================================================================================================================================================
    eGInsStateType__Hardware = -6711,
    eGInsStateType__Hardware_FPGANotLoaded = eGInsStateType__Hardware - 0,
    eGInsStateType__Hardware_FPGAWrongVersion = eGInsStateType__Hardware - 1,
    eGInsStateType__Hardware_I2CNotAvailable = eGInsStateType__Hardware - 2,
    eGInsStateType__Hardware_BoardConfigurationAccess = eGInsStateType__Hardware - 3,
    eGInsStateType__Hardware_ApplicationTypeInvalid = eGInsStateType__Hardware - 4,
    eGInsStateType__Hardware_SerialNumberInvalid = eGInsStateType__Hardware - 5,
    eGInsStateType__Hardware_BIOSAccess = eGInsStateType__Hardware - 6,
    eGInsStateType__Hardware_GPIOAccess = eGInsStateType__Hardware - 7,

//================================================================================================================================================
// Group: SubSystem
//================================================================================================================================================
    eGInsStateType__SubSystem = -6811,
    eGInsStateType__SubSystem_InvalidDriverVersion = eGInsStateType__SubSystem - 0,
    eGInsStateType__SubSystem_AccessFailed = eGInsStateType__SubSystem - 1,
    eGInsStateType__SubSystem_BoardResetNeeded = eGInsStateType__SubSystem - 2,

//================================================================================================================================================
// Group: DATAAPI
//================================================================================================================================================
    eGInsStateType__DATAAPI = -6911,
    eGInsStateType__DATAAPI_InvalidDataSource = eGInsStateType__DATAAPI - 0,
    eGInsStateType__DATAAPI_InvalidPointer = eGInsStateType__DATAAPI - 1,
    eGInsStateType__DATAAPI_InvalidAccess = eGInsStateType__DATAAPI - 2,
    eGInsStateType__DATAAPI_VariableNotFound = eGInsStateType__DATAAPI - 3,
    eGInsStateType__DATAAPI_NotSpecified = eGInsStateType__DATAAPI - 255,
    eGInsStateType__DATAAPI_TimeoutOccured = eGInsStateType__DATAAPI - 4,
    eGInsStateType__DATAAPI_BufferOverrun = eGInsStateType__DATAAPI - 5,
    eGInsStateType__DATAAPI_InvalidParameter = eGInsStateType__DATAAPI - 6,
    eGInsStateType__DATAAPI_NotImplemented = eGInsStateType__DATAAPI - 7,

//================================================================================================================================================
// Group: CAN
//================================================================================================================================================
    eGInsStateType__CAN = -7167,
    eGInsStateType__CAN_Runtime_ConfigError = eGInsStateType__CAN - 0,
    eGInsStateType__CAN_Runtime_OpenPort = eGInsStateType__CAN - 1,
    eGInsStateType__CAN_Runtime_TXBufferFull = eGInsStateType__CAN - 2,
    eGInsStateType__CAN_Runtime_RXBufferOverrun = eGInsStateType__CAN - 3,
    eGInsStateType__CAN_Runtime_BusLight = eGInsStateType__CAN - 4,
    eGInsStateType__CAN_Runtime_BusHeavy = eGInsStateType__CAN - 5,
    eGInsStateType__CAN_Runtime_BusOFF = eGInsStateType__CAN - 6,
    eGInsStateType__CAN_Runtime_RXQueOverrun = eGInsStateType__CAN - 7,
    eGInsStateType__CAN_Runtime_TXQueFull = eGInsStateType__CAN - 8,
    eGInsStateType__CAN_Runtime_RegTestFailed = eGInsStateType__CAN - 9,
    eGInsStateType__CAN_Runtime_CreateResource = eGInsStateType__CAN - 10,
    eGInsStateType__CAN_Runtime_IllegalParam = eGInsStateType__CAN - 11,
    eGInsStateType__CAN_Runtime_IllegalParamValue = eGInsStateType__CAN - 12,
    eGInsStateType__CAN_Runtime_IllegalHandle = eGInsStateType__CAN - 13,
    eGInsStateType__CAN_Runtime_NotSpecified = eGInsStateType__CAN - 63,
    eGInsStateType__CAN_Config_ParamsError = eGInsStateType__CAN - 64,
    eGInsStateType__CAN_Config_InvalidPort = eGInsStateType__CAN - 65,

//================================================================================================================================================
// Group: ModbusMaster
//================================================================================================================================================
    eGInsStateType__ModbusMaster = -7267,
    eGInsStateType__ModbusMaster_Runtime_ConfigError = eGInsStateType__ModbusMaster - 0,
    eGInsStateType__ModbusMaster_Runtime_OpenPort = eGInsStateType__ModbusMaster - 1,
    eGInsStateType__ModbusMaster_Runtime_Read = eGInsStateType__ModbusMaster - 2,
    eGInsStateType__ModbusMaster_Runtime_Write = eGInsStateType__ModbusMaster - 3,
    eGInsStateType__ModbusMaster_Runtime_Connect = eGInsStateType__ModbusMaster - 4,
    eGInsStateType__ModbusMaster_Runtime_NotSpecified = eGInsStateType__ModbusMaster - 63,
    eGInsStateType__ModbusMaster_Config_ParamsError = eGInsStateType__ModbusMaster - 64,

//================================================================================================================================================
// Group: ModbusSlave
//================================================================================================================================================
    eGInsStateType__ModbusSlave = -7367,
    eGInsStateType__ModbusSlave_Runtime_ConfigError = eGInsStateType__ModbusSlave - 0,
    eGInsStateType__ModbusSlave_Runtime_OpenPort = eGInsStateType__ModbusSlave - 1,
    eGInsStateType__ModbusSlave_Runtime_NotSpecified = eGInsStateType__ModbusSlave - 63,
    eGInsStateType__ModbusSlave_Config_ParamsError = eGInsStateType__ModbusSlave - 64,

//================================================================================================================================================
// Group: FFTProcessor
//================================================================================================================================================
    eGInsStateType__FFTProcessor = -7467,
    eGInsStateType__FFTProcessor_Runtime_InputGVIError = eGInsStateType__FFTProcessor - 0,
    eGInsStateType__FFTProcessor_Runtime_SizeError = eGInsStateType__FFTProcessor - 1,
    eGInsStateType__FFTProcessor_Runtime_WindowTypeError = eGInsStateType__FFTProcessor - 2,
    eGInsStateType__FFTProcessor_Runtime_WindowSubTypeError = eGInsStateType__FFTProcessor - 3,
    eGInsStateType__FFTProcessor_Runtime_WindowParameterError = eGInsStateType__FFTProcessor - 4,
    eGInsStateType__FFTProcessor_Runtime_EnableGeneratingFilesError = eGInsStateType__FFTProcessor - 5,
    eGInsStateType__FFTProcessor_Runtime_BufferSizeError = eGInsStateType__FFTProcessor - 6,
    eGInsStateType__FFTProcessor_Runtime_ModeError = eGInsStateType__FFTProcessor - 7,
    eGInsStateType__FFTProcessor_Runtime_TimeDomainBufferOverlappingPercentageError = eGInsStateType__FFTProcessor - 8,
    eGInsStateType__FFTProcessor_Runtime_PerformanceSavingTakeLastValuesModeActivatedError = eGInsStateType__FFTProcessor - 9,
    eGInsStateType__FFTProcessor_Runtime_EvaluatorFunctionTypeError = eGInsStateType__FFTProcessor - 20,
    eGInsStateType__FFTProcessor_Runtime_EvaluatorStartFrequencyError = eGInsStateType__FFTProcessor - 21,
    eGInsStateType__FFTProcessor_Runtime_EvaluatorStopFrequencyError = eGInsStateType__FFTProcessor - 22,
    eGInsStateType__FFTProcessor_Runtime_EvaluatorResult1GVIError = eGInsStateType__FFTProcessor - 23,
    eGInsStateType__FFTProcessor_Runtime_EvaluatorResult2GVIError = eGInsStateType__FFTProcessor - 24,
    eGInsStateType__FFTProcessor_Runtime_NotSpecified = eGInsStateType__FFTProcessor - 63,
    eGInsStateType__FFTProcessor_Config_ParamsError = eGInsStateType__FFTProcessor - 80,
    eGInsStateType__FFTProcessor_Config_EvaluatorParamsError = eGInsStateType__FFTProcessor - 81,

//================================================================================================================================================
// Group: DistributorPort
//================================================================================================================================================
    eGInsStateType__DistributorPort = -7723,
    eGInsStateType__DistributorPort_Runtime_ConfigError = eGInsStateType__DistributorPort - 0,
    eGInsStateType__DistributorPort_Runtime_TransferDataTheme = eGInsStateType__DistributorPort - 1,
    eGInsStateType__DistributorPort_Runtime_OffsetRecvFrom = eGInsStateType__DistributorPort - 2,
    eGInsStateType__DistributorPort_Runtime_LengthRecvFrom = eGInsStateType__DistributorPort - 3,
    eGInsStateType__DistributorPort_Runtime_OffsetSendTo = eGInsStateType__DistributorPort - 4,
    eGInsStateType__DistributorPort_Runtime_LengthSendTo = eGInsStateType__DistributorPort - 5,
    eGInsStateType__DistributorPort_Runtime_FrequencySendTo = eGInsStateType__DistributorPort - 6,
    eGInsStateType__DistributorPort_Runtime_RetriggerTimeS = eGInsStateType__DistributorPort - 7,
    eGInsStateType__DistributorPort_Runtime_IPAddressSendTo = eGInsStateType__DistributorPort - 8,
    eGInsStateType__DistributorPort_Runtime_IPPortSendTo = eGInsStateType__DistributorPort - 9,
    eGInsStateType__DistributorPort_Runtime_IPPortRecvFrom = eGInsStateType__DistributorPort - 10,
    eGInsStateType__DistributorPort_Runtime_UseTransferCounters = eGInsStateType__DistributorPort - 11,
    eGInsStateType__DistributorPort_Runtime_SetAllUsedOutputVariablesToDefault = eGInsStateType__DistributorPort - 12,
    eGInsStateType__DistributorPort_Runtime_SetAllPropertiesToDefault = eGInsStateType__DistributorPort - 13,
    eGInsStateType__DistributorPort_Runtime_SendCollectorCount = eGInsStateType__DistributorPort - 14,
    eGInsStateType__DistributorPort_Runtime_DataInterfaceAccess = eGInsStateType__DistributorPort - 15,
    eGInsStateType__DistributorPort_Runtime_ReceiveDataSizeInvalid = eGInsStateType__DistributorPort - 16,
    eGInsStateType__DistributorPort_Runtime_SendDataSizeInvalid = eGInsStateType__DistributorPort - 17,
    eGInsStateType__DistributorPort_Runtime_BindFailed = eGInsStateType__DistributorPort - 18,
    eGInsStateType__DistributorPort_Runtime_NotSpecified = eGInsStateType__DistributorPort - 63,
    eGInsStateType__DistributorPort_Config_ParamsError = eGInsStateType__DistributorPort - 64,

//================================================================================================================================================
// Group: DataPlayer
//================================================================================================================================================
    eGInsStateType__DataPlayer = -7823,
    eGInsStateType__DataPlayer_Runtime_ConfigError = eGInsStateType__DataPlayer - 0,
    eGInsStateType__DataPlayer_Runtime_NotSpecified = eGInsStateType__DataPlayer - 63,
    eGInsStateType__DataPlayer_Config_VariableNotFound = eGInsStateType__DataPlayer - 64,
    eGInsStateType__DataPlayer_Config_DataSourceNotAvailable = eGInsStateType__DataPlayer - 65,
    eGInsStateType__DataPlayer_Config_InterfaceNotAvailable = eGInsStateType__DataPlayer - 66,
    eGInsStateType__DataPlayer_Config_BufferInitFailed = eGInsStateType__DataPlayer - 67,

//================================================================================================================================================
// Group: GIconfig
//================================================================================================================================================
    eGInsStateType__GIconfig = -7923,
    eGInsStateType__GIconfig_InvalidID = eGInsStateType__GIconfig - 0,
    eGInsStateType__GIconfig_InvalidType = eGInsStateType__GIconfig - 1,
    eGInsStateType__GIconfig_InvalidObject = eGInsStateType__GIconfig - 2,
    eGInsStateType__GIconfig_CreateObject = eGInsStateType__GIconfig - 3,
    eGInsStateType__GIconfig_AddToOwner = eGInsStateType__GIconfig - 4,
    eGInsStateType__GIconfig_SetOwnedObject = eGInsStateType__GIconfig - 5,
    eGInsStateType__GIconfig_InvalidPath = eGInsStateType__GIconfig - 6,
    eGInsStateType__GIconfig_InvalidName = eGInsStateType__GIconfig - 7,
    eGInsStateType__GIconfig_NotAvailableObject = eGInsStateType__GIconfig - 8,
    eGInsStateType__GIconfig_FileSaveError = eGInsStateType__GIconfig - 9,
    eGInsStateType__GIconfig_FileLoadError = eGInsStateType__GIconfig - 10,
    eGInsStateType__GIconfig_Exists = eGInsStateType__GIconfig - 11,
    eGInsStateType__GIconfig_NotExists = eGInsStateType__GIconfig - 12,
    eGInsStateType__GIconfig_ErrorsPresent = eGInsStateType__GIconfig - 13,
    eGInsStateType__GIconfig_WarningsPresent = eGInsStateType__GIconfig - 14,
    eGInsStateType__GIconfig_InfosPresent = eGInsStateType__GIconfig - 15,
    eGInsStateType__GIconfig_ChangesPresent = eGInsStateType__GIconfig - 16,
    eGInsStateType__GIconfig_AlreadyUsedID = eGInsStateType__GIconfig - 17,
    eGInsStateType__GIconfig_ModifyingAccessDenied = eGInsStateType__GIconfig - 18,
    eGInsStateType__GIconfig_InvalidCommand = eGInsStateType__GIconfig - 19,
    eGInsStateType__GIconfig_MultipleSelectionNotPossible = eGInsStateType__GIconfig - 20,
    eGInsStateType__GIconfig_RemoveObject = eGInsStateType__GIconfig - 21,
    eGInsStateType__GIconfig_CopyObject = eGInsStateType__GIconfig - 22,
    eGInsStateType__GIconfig_ModifyObject = eGInsStateType__GIconfig - 23,
    eGInsStateType__GIconfig_RemoveDirectory = eGInsStateType__GIconfig - 24,
    eGInsStateType__GIconfig_RemoveFile = eGInsStateType__GIconfig - 25,

//================================================================================================================================================
// Group: GIservice
//================================================================================================================================================
    eGInsStateType__GIservice = -8179,
    eGInsStateType__GIservice_DeviceAlreadyAdded = eGInsStateType__GIservice - 0,
    eGInsStateType__GIservice_Route_CouldNotCreate = eGInsStateType__GIservice - 10,
    eGInsStateType__GIservice_Route_CouldNotDelete = eGInsStateType__GIservice - 11,
    eGInsStateType__GIservice_Route_NotAvailable = eGInsStateType__GIservice - 12,
    eGInsStateType__GIservice_Route_NoCommunication = eGInsStateType__GIservice - 13,
    eGInsStateType__GIservice_Route_XmlRpcMethodExecution = eGInsStateType__GIservice - 14,
    eGInsStateType__GIservice_Plugin_NotAvailable = eGInsStateType__GIservice - 20,
    eGInsStateType__GIservice_Plugin_XmlRpcMethodExecution = eGInsStateType__GIservice - 21,
    eGInsStateType__GIservice_HandleProject = eGInsStateType__GIservice - 22,
    eGInsStateType__GIservice_HandleStorageDestinations = eGInsStateType__GIservice - 23,
    eGInsStateType__GIservice_Process_StartFailed = eGInsStateType__GIservice - 24,
    eGInsStateType__GIservice_Process_Stoptailed = eGInsStateType__GIservice - 25,
    eGInsStateType__GIservice_Process_Stopped = eGInsStateType__GIservice - 26,

//================================================================================================================================================
// Group: SDI12Master
//================================================================================================================================================
    eGInsStateType__SDI12Master = -8279,
    eGInsStateType__SDI12Master_Runtime_ConfigError = eGInsStateType__SDI12Master - 0,
    eGInsStateType__SDI12Master_Runtime_OpenPort = eGInsStateType__SDI12Master - 1,
    eGInsStateType__SDI12Master_Runtime_Read = eGInsStateType__SDI12Master - 2,
    eGInsStateType__SDI12Master_Runtime_NotSpecified = eGInsStateType__SDI12Master - 63,
    eGInsStateType__SDI12Master_Config_ParamsError = eGInsStateType__SDI12Master - 64,

//================================================================================================================================================
// Group: MQTTClient
//================================================================================================================================================
    eGInsStateType__MQTTClient = -8379,
    eGInsStateType__MQTTClient_Runtime_ConfigError = eGInsStateType__MQTTClient - 0,
    eGInsStateType__MQTTClient_Runtime_OpenPort = eGInsStateType__MQTTClient - 1,
    eGInsStateType__MQTTClient_Runtime_Read = eGInsStateType__MQTTClient - 2,
    eGInsStateType__MQTTClient_Runtime_NotSpecified = eGInsStateType__MQTTClient - 63,
    eGInsStateType__MQTTClient_Config_ParamsError = eGInsStateType__MQTTClient - 64,

//================================================================================================================================================
// Group: HttpAPI
//================================================================================================================================================
    eGInsStateType__HttpAPI = -8479,
    eGInsStateType__HttpAPI_Runtime_ConfigError = eGInsStateType__HttpAPI - 0,
    eGInsStateType__HttpAPI_Runtime_EndpointNotAvailable = eGInsStateType__HttpAPI - 1,
    eGInsStateType__HttpAPI_Runtime_InvalidParams = eGInsStateType__HttpAPI - 2,
    eGInsStateType__HttpAPI_Runtime_ObjectNotAvailable = eGInsStateType__HttpAPI - 3,
    eGInsStateType__HttpAPI_Runtime_HandlingTimeout = eGInsStateType__HttpAPI - 4,
    eGInsStateType__HttpAPI_Runtime_NotSpecified = eGInsStateType__HttpAPI - 63,
    eGInsStateType__HttpAPI_Config_ParamsError = eGInsStateType__HttpAPI - 64,

//================================================================================================================================================
// Group: MetaData
//================================================================================================================================================
    eGInsStateType__MetaData = -8579,
    eGInsStateType__MetaData_Runtime_ConfigError = eGInsStateType__MetaData - 0,
    eGInsStateType__MetaData_Runtime_DataBaseNotFound = eGInsStateType__MetaData - 1,
    eGInsStateType__MetaData_Runtime_DataBaseNotLoaded = eGInsStateType__MetaData - 2,
    eGInsStateType__MetaData_Runtime_ProjectHandlingFailed = eGInsStateType__MetaData - 3,
    eGInsStateType__MetaData_Runtime_FailedToSetValue = eGInsStateType__MetaData - 4,
    eGInsStateType__MetaData_Runtime_NotSpecified = eGInsStateType__MetaData - 63,
    eGInsStateType__MetaData_Config_ParamsError = eGInsStateType__MetaData - 64,

//================================================================================================================================================
// Group: GIcom
//================================================================================================================================================
    eGInsStateType__GIcom = -8679,
    eGInsStateType__GIcom_WebSocketConnectivity = eGInsStateType__GIcom - 0,

//================================================================================================================================================
//================================================================================================================================================
    eGInsStateType__NotDefined
} TEnumGInsStateType;

//================================================================================================================================================
//================================================================================================================================================

//================================================================================================================================================
// Functions
//================================================================================================================================================
// Coding: ...SSSSTTTTTTTT
//      S: Level
//      T: Type
TGInsState GINSSTATE_GetTypeMask();
TGInsState GINSSTATE_GetTypeOffset();
TGInsState GINSSTATE_GetLevelMask();
TGInsState GINSSTATE_GetLevelOffset();

TEnumGInsStateType GINSSTATE_GetType(TGInsState State);
TEnumGInsStateLevel GINSSTATE_GetLevel(TGInsState State);

void GINSSTATE_ReplaceType(TEnumGInsStateType Enum, TGInsState *State);
void GINSSTATE_ReplaceLevel(TEnumGInsStateLevel Enum, TGInsState *State);
void GINSSTATE_Replace(TEnumGInsStateLevel EnumLevel, TEnumGInsStateType EnumType, TGInsState *State);

TGInsState GINSSTATE_Build(TEnumGInsStateLevel EnumLevel, TEnumGInsStateType EnumType);
TGInsState GINSSTATE_BuildNone(void);
TGInsState GINSSTATE_BuildLevel_Error(TEnumGInsStateType Enum);
TGInsState GINSSTATE_BuildLevel_Warning(TEnumGInsStateType Enum);
TGInsState GINSSTATE_BuildLevel_Info(TEnumGInsStateType Enum);

/*
    For info : Don't use "!GINSSTATE_IsNone" to detect error states, because these are ALL states except None.
               To savely detect an error states, "GINSSTATE_IsLevel_Error" must be used instead !!!
*/
bool GINSSTATE_IsNone(TGInsState State);
bool GINSSTATE_IsOther(TGInsState State);
bool GINSSTATE_IsType(TEnumGInsStateType Enum, TGInsState State);
bool GINSSTATE_IsLevel(TEnumGInsStateLevel Enum, TGInsState State);
bool GINSSTATE_IsLevel_Error(TGInsState State);
bool GINSSTATE_IsLevel_Warning(TGInsState State);
bool GINSSTATE_IsLevel_Info(TGInsState State);

/*
    For info: Don't store values from this function. It is only used to make actual comparisons
              between severities and can change it's absolute value, if a further level is introduced !!!
    Value <0 ... none or invalid
    0        ... lowest priority
*/
int GINSSTATE_GetPriority(TGInsState State);

char *GINSSTATE_GetLevelText(TEnumGInsStateLevel Enum, char *Result, size_t ResultMaxSize);
char *GINSSTATE_GetTypeText(TEnumGInsStateType Enum, char *Result, size_t ResultMaxSize);
char *GINSSTATE_GetText(TGInsState State, const char *Separator, char *Result, size_t ResultMaxSize);

#if defined(__cplusplus)
}
#endif


#if defined(__cplusplus)
#include <string>

class CGInsState
{
public:
    static std::string GetLevelText(TEnumGInsStateLevel Enum)
    {
        char Result[128];
        return (GINSSTATE_GetLevelText(Enum, Result, sizeof(Result)));
    }

public:
    static std::string GetTypeText(TEnumGInsStateType Enum)
    {
        char Result[128];
        return (GINSSTATE_GetTypeText(Enum, Result, sizeof(Result)));
    }

public:
    static std::string GetText(TGInsState State, const std::string &Separator = ": ")
    {
        char Result[256];
        return (GINSSTATE_GetText(State, Separator.c_str(), Result, sizeof(Result)));
    }
};


#endif

//================================================================================================================================================
//================================================================================================================================================
