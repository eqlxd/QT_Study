/*
 * gins_data_globals.h
 *
 *  Created on: 8 Nov 2016
 *      Author: user1
 */

#ifndef GINSTYPES_H_
#define GINSTYPES_H_

#ifdef _MSC_VER
	#include <stdint.h>
	#include <BaseTsd.h>
	#include "stdbool.h"
	typedef SSIZE_T ssize_t;
#else
	#ifdef __KERNEL__
		#include <linux/types.h>
	#else
		#include <stdint.h>
		#include <stddef.h>
		#include "stdbool.h"
	#endif
#endif

#define		DCTimeOffsetFromEpochTimeDays							(10957)//(10957+1)//
#define		DCTimeOffsetFromEpochTimeSec							(DCTimeOffsetFromEpochTimeDays*86400)
#define		DCTimeOffsetFromOLETimeDays								(36526)//+1)
#define		EpochTimeOffsetFromOLETimeDays							(uint32_t)(25569)
#define  	EpochTimeOffsetFromOLETimeSec							(uint32_t)(EpochTimeOffsetFromOLETimeDays*86400)

typedef double		TOleTime;		//days since 01.01.1900
typedef uint32_t	TEpochTime;		//time since 01.01.1970 in seconds
typedef uint64_t	TLongTime;	    //time span in nano seconds
typedef TLongTime	TSystemTimeDC;  //nano seconds since 01.01.2000

typedef enum
{
	MODE_Init,						//While starting System
	MODE_Idle,						//System is doing nothing
	MODE_PreConfig,					//Config Mode is Starting
	MODE_Config,					//Manual Config Mode
	MODE_ConfigAuto,				//Automatic Config mode
	MODE_PreOperational,			//Measurement systems is starting
	MODE_Operational,				//All measurement systems working
	MODE_OperationalTerminated,		//Operational mode terminated due to error
	Mode_NotDefined
}TOperationMode;

typedef enum
{
	GIRT_CBUF_PROP_MODE_STREAM,	//The device will throw away data in case of an overrun and return only new data
	GIRT_CBUF_PROP_MODE_FILE,	//The device will return the complete available buffer in case of an overrun
	GIRT_CBUF_PROP_SECUREFRAMES,
	GIRT_CBUFPROP_HEADER_SIZE,
	GIRT_CBUFPROP_DATA_RATE,
	GIRT_CBUFPROP_BUFFER_COUNT
}GIRT_CBUF_PROP_TYPE;

typedef enum
{
	TransferFormatNo,
	TransferFormatBoolean,
	TransferFormatSInt8,TransferFormatUSInt8,TransferFormatBitSet8,
	TransferFormatSInt16,TransferFormatUSInt16,TransferFormatBitSet16,
	TransferFormatSInt32,TransferFormatUSInt32,TransferFormatBitSet32,
	TransferFormatSInt64,TransferFormatUSInt64,TransferFormatBitSet64,
	TransferFormatFloat,TransferFormatDouble,
	TransferFormatNotDefined
}TTransferFormat;

typedef enum
{
	VarKindEmpty,
	VarKindAnalogOutput,VarKindAnalogInput,
	VarKindDigitalOutput,VarKindDigitalInput,
	VarKindArithmetic,
	VarKindSetpoint,
	VarKindAlarm,
	VarKindPIDController,
	VarKindSignalConditioning,
	VarKindRemote,
	VarKindReference,
	VarKindUnknown,
	VarKindNotDefined
} TVarKindCasted;

typedef enum
{
	DataDirectionInput,
	DataDirectionOutput,
	DataDirectionInputOutput,
	DataDirectionEmpty,
	DataDirectionNotDefined
} TDataDirection;

typedef enum
{
	DataBufferType_ProcessBuffer,
	DataBufferType_PostProcessBuffer,
	DataBufferType_TestConLogger,
	DataBufferType_LoggingBuffer,
	DataBufferType_NotDefined
}TDataBufferIndent;

typedef enum
{
	DataBufferType_System,
	DataBufferType_Misc,
	DataBufferType_AdvancedProcessor,
	DataBufferType_Merger,
	DataBufferType_Undefined
}TDataBufferType;

typedef enum
{
	FTPTypeUnknown,
	FTPTypeUnix,
	FTPTypeMSDOS,
	FTPTypeSFTP,
	FTPTypeNotDefined
}TFTPType;

typedef enum
{
	FileFormatUDBF,
	FileFormatCSV,
	FileFormatNone,
	FileFormatMDF,
	FileFormatFamos,
	FileFormatMatlab,
	FileFormatJSON,
	FileFormatXML,
	FileFormatNotDefined
}TLoggerDataFileFormat;

typedef enum
{
	MeasDataKind_TimeSeries,
	MeasDataKind_DataFrame,
	MeasDataKind_DataTable,
	MeasDataKind_Matrix,
	MeasDataKind_ArbitraryText,
	MeasDataKind_ArbitraryData
}TMeasDataKind;

typedef enum
{
	DownSamplingMethod_No,
	DownSamplingMethod_Simple,
	DownSamplingMethod_LTTB
}TDownSamplingMethod;

typedef enum
{
	TimestampType_No,
	TimestampType_Counter,
	TimestampType_TimeOLE2,
	TimestampType_DCSystemTime
}TTimestampType;

typedef enum	// ATTENTION: Function SM_MeasCircleBufferToStr need to be corresponding !!!
{
	SM_MeasCircleBuffer_BaseGroupBegin,
	SM_MeasCircleBuffer_BaseNotRunning,
	SM_MeasCircleBuffer_BaseInitialized,
	SM_MeasCircleBuffer_BaseGroupEnd,

	SM_MeasCircleBuffer_StandardGroupBegin,
	SM_MeasCircleBuffer_StandardEraseBeforeRun,
	SM_MeasCircleBuffer_StandardRun,
	SM_MeasCircleBuffer_StandardStop,
	SM_MeasCircleBuffer_StandardGroupEnd,

	SM_MeasCircleBuffer_SingleShotGroupBegin,
	SM_MeasCircleBuffer_SingleShotStart,
	SM_MeasCircleBuffer_SingleShotRun,
	SM_MeasCircleBuffer_SingleShotStop,
	SM_MeasCircleBuffer_SingleShotGroupEnd,

	SM_MeasCircleBuffer_ExternallyControlled,			//This SM State indicates that controlling the CircleBuffer is done by an external worke or plugin

	SM_MeasCircleBuffer_NotDefined
} TSM_MeasCircleBuffer; //TStateMachine_MeasCircleBuffer

typedef enum
{
	ScanType_IPv4_Broadcast,
	ScanType_IPv4_Multicast,
	ScanType_IPv6_Multicast,
	ScanType_All
} TNetworkScan_ScanType;

typedef enum
{
	ControllerType_LocalController,
	ControllerType_RemoteController
} TNetworkScan_ControllerType;

typedef enum
{
	ConnectionType_ID,
	ConnectionType_IP,
	ConnectionType_SNo
} TNetworkScan_ConnectionType;

typedef enum
{
	MessageType_None														= 0,
	MessageType_Info														= 100000,
	MessageType_Warning														= 200000,
	MessageType_Error														= 300000,
	MessageType_ErrorWithSlaveTransferLockAsResult							= 400000,
	MessageTypeNotDefined
}TMessageType;

#pragma pack(8)
typedef struct
{
	uint32_t	low;
	uint32_t 	high;
}TDCTime;												//used when type unsigned long long is not supported

typedef struct
{
	int32_t	Year;
	int32_t	Month;
	int32_t	Day;
	int32_t	Hour;
	int32_t	Minute;
	int32_t	Second;
	int32_t	MSecond;
	int32_t	USecond;
} TDateTime;

typedef struct
{
	uint32_t		UnknownCode;
	TVarKindCasted	Casted;
} TVarKind;
#pragma pack()


#endif /* GINSTYPES_H_ */
