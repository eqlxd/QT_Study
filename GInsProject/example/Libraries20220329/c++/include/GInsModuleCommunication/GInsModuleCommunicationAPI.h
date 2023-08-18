/*
 ============================================================================================================================================
 Author      : Stefan Stocker
 Copyright   : Gantner Instruments GmbH
 Description : Module Communication Library API Header
 ============================================================================================================================================
 */

#ifndef GINSMODULECOMMUNICATIONAPI_H_
#define GINSMODULECOMMUNICATIONAPI_H_

#include <stdint.h>
#include <stddef.h>

#define LIMITCODE_MinModuleAddress									1
#define LIMITCODE_MaxModuleAddress									127
#define LIMITCODE_MinModuleVariableIndex							0
#define LIMITCODE_MaxModuleVariableIndex							63
#define LIMITCODE_MaxModuleCount									(LIMITCODE_MaxModuleAddress - LIMITCODE_MinModuleAddress + 1)
#define LIMITCODE_MaxModuleVariableCount							(LIMITCODE_MaxModuleVariableIndex - LIMITCODE_MinModuleVariableIndex + 1)
#define LIMITCODE_GetLiveListArrayItemsPerModuleCount_StructID0		5  // Address + ModuleType + Protocol + Baudrate + CharFormat
#define LIMITCODE_GetLiveListArrayItemsPerModuleCount_StructID1		8  // Address + ModuleType + SubModuleType + FunctionType + CasingType + Protocol + Baudrate + CharFormat
#define LIMITCODE_GetLiveListSNRArrayItemsPerModuleCount_StructID0	6  // SNR + Address + ModuleType + Protocol + Baudrate + CharFormat
#define LIMITCODE_GetLiveListSNRArrayItemsPerModuleCount_StructID1	9  // SNR + Address + ModuleType + SubModuleType + FunctionType + CasingType + Protocol + Baudrate + CharFormat

#define SETTING_ConfigurationBaudrate								115200
#define SETTING_ConfigurationCharFormat								CHARFORMATCODE_8e1
#define SETTING_ConfigurationProtocol								PROTOCOLCODE_Localbus

typedef void (*CALLBACK_HANDLER_PROGRESS)(double Value);

enum tag_GETLIVELISTPARAMBITSETCODE
{
	GETLIVELISTPARAMBITSETCODE_Empty = 0,
	GETLIVELISTPARAMBITSETCODE_ActivateSetBaudrate = 1
};
typedef enum tag_GETLIVELISTPARAMBITSETCODE GETLIVELISTPARAMBITSETCODE;

enum tag_GETLIVELISTSNRPARAMBITSETCODE
{
	GETLIVELISTSNRPARAMBITSETCODE_Empty = 0
};
typedef enum tag_GETLIVELISTSNRPARAMBITSETCODE GETLIVELISTSNRPARAMBITSETCODE;

enum tag_FLASHFILEINDEXCODE
{
	FLASHFILEINDEXCODE_NotDefined = -1,
	FLASHFILEINDEXCODE_OS = 0xFE,
	FLASHFILEINDEXCODE_APP = FLASHFILEINDEXCODE_OS - 1,
	FLASHFILEINDEXCODE_CAL = FLASHFILEINDEXCODE_APP - 1,
	FLASHFILEINDEXCODE_FPGA = FLASHFILEINDEXCODE_CAL - 1,
	FLASHFILEINDEXCODE_SUBCPU = FLASHFILEINDEXCODE_FPGA - 1,
	FLASHFILEINDEXCODE_I = 0,
	FLASHFILEINDEXCODE_CFirst = FLASHFILEINDEXCODE_I + 1,
	FLASHFILEINDEXCODE_CLast = FLASHFILEINDEXCODE_SUBCPU - 1
};
typedef enum tag_FLASHFILEINDEXCODE FLASHFILEINDEXCODE;

enum tag_MAINMODULETYPECODE
{
	MAINMODULETYPECODE_QBLOXXA101 = 10,
	MAINMODULETYPECODE_QBLOXXA102 = 11,
	MAINMODULETYPECODE_QBLOXXA103 = 12,
	MAINMODULETYPECODE_QBLOXXA104 = 13,
	MAINMODULETYPECODE_QBLOXXA105 = 14,
	MAINMODULETYPECODE_QBLOXXA106 = 15,
	MAINMODULETYPECODE_QBLOXXA107 = 16,
	MAINMODULETYPECODE_QBLOXXA108 = 23,
	MAINMODULETYPECODE_QBLOXXA109 = 17,
	MAINMODULETYPECODE_QBLOXXA111 = 7,
	MAINMODULETYPECODE_QBLOXXA113 = 24,
	MAINMODULETYPECODE_QBLOXXA114 = 25,
	MAINMODULETYPECODE_QBLOXXA116 = 31,
	MAINMODULETYPECODE_QBLOXXA117 = 37,
	MAINMODULETYPECODE_QBLOXXA118 = 32,
	MAINMODULETYPECODE_QBLOXXA119 = 26,
	MAINMODULETYPECODE_QBLOXXA121 = 8,
	MAINMODULETYPECODE_QBLOXXA122 = 35,
	MAINMODULETYPECODE_QBLOXXA123 = 27,
	MAINMODULETYPECODE_QBLOXXA124 = 28,
	MAINMODULETYPECODE_QBLOXXA127 = 30,
	MAINMODULETYPECODE_QBLOXXA128 = 29,
	MAINMODULETYPECODE_QBLOXXA141 = 39,
	MAINMODULETYPECODE_QBLOXXA142 = 38,
	MAINMODULETYPECODE_QBLOXXA146 = 40,
	MAINMODULETYPECODE_QBLOXXA156 = 47,
	MAINMODULETYPECODE_QBLOXXA166 = 48,
	MAINMODULETYPECODE_QBLOXXA192 = 44,
	MAINMODULETYPECODE_QBLOXXC101 = 9,
	MAINMODULETYPECODE_QBLOXXD101 = 18,
	MAINMODULETYPECODE_QBLOXXD102 = 19,
	MAINMODULETYPECODE_QBLOXXD103 = 20,
	MAINMODULETYPECODE_QBLOXXD104 = 21,
	MAINMODULETYPECODE_QBLOXXD105 = 22,
	MAINMODULETYPECODE_QBLOXXD107 = 33,
	MAINMODULETYPECODE_QBLOXXD114 = 36,
	MAINMODULETYPECODE_QBLOXXF108 = 43,
	MAINMODULETYPECODE_QBLOXXCAL101 = 41,
	MAINMODULETYPECODE_QBLOXXCAL102 = 42,
	MAINMODULETYPECODE_QBLOXXCAL103 = 45,
	MAINMODULETYPECODE_QBLOXXCAL104 = 46,
	// special naming
	MAINMODULETYPECODE_F1017 = 105,
	MAINMODULETYPECODE_Junctionbox_D3A2 = 6,

	MAINMODULETYPECODE_EBLOXXA1_1 = 200,
	MAINMODULETYPECODE_EBLOXXA2_1 = 203,
	MAINMODULETYPECODE_EBLOXXA3_1 = 205,
	MAINMODULETYPECODE_EBLOXXA4_1 = 207,
	MAINMODULETYPECODE_EBLOXXA4_1TC = 208,
	MAINMODULETYPECODE_EBLOXXA5_1 = 209,
	MAINMODULETYPECODE_EBLOXXA5_1CR = 202,
	MAINMODULETYPECODE_EBLOXXA6_1CF = 201,
	MAINMODULETYPECODE_EBLOXXA6_2CF = 210,
	MAINMODULETYPECODE_EBLOXXA6_2DC = 217,
	MAINMODULETYPECODE_EBLOXXA9_1 = 211,
	MAINMODULETYPECODE_EBLOXXD1_1 = 214,
	MAINMODULETYPECODE_EBLOXXD2_1 = 216,
	MAINMODULETYPECODE_EBLOXXD3_CAN = 204,
	MAINMODULETYPECODE_EBLOXXD3_COM = 212,
	MAINMODULETYPECODE_EBLOXXD3_SSI = 213,
	MAINMODULETYPECODE_EBLOXXD4_1 = 206,
	// special naming
	MAINMODULETYPECODE_ADL_MXE_1 = 231,
	MAINMODULETYPECODE_EREADEREX8_1 = 230,

	MAINMODULETYPECODE_NotDefined = -1
};
typedef enum tag_MAINMODULETYPECODE MAINMODULETYPECODE;

enum tag_GENRETCODE
{
	GENRETCODE_NotDefined = -1,
	GENRETCODE_Success = 0,
	GENRETCODE_PortNotInit = 1,
	GENRETCODE_NoAnswer = 2,
	GENRETCODE_InvalidAnswer = 3,
	GENRETCODE_NotAvailable = 4,
	GENRETCODE_WrongType = 5,
	GENRETCODE_ChecksumError = 6,
	GENRETCODE_NoIntelHex = 7,
	GENRETCODE_LocalModemNotInit = 8,
	GENRETCODE_LocalModemNotResponding = 9,
	GENRETCODE_RemoteModemNotResponding = 10,
	GENRETCODE_AccessDenied = 11,
	GENRETCODE_ServiceNotSupported = 12,
	GENRETCODE_BufferTooSmall = 13,
	GENRETCODE_InvalidAdapterHandle = 14,
	GENRETCODE_Cancelled = 20,
	GENRETCODE_DirectModuleError_Offset = 100,
		GENRETCODE_DirectModuleError_IllegalCMD = GENRETCODE_DirectModuleError_Offset + 1,
		GENRETCODE_DirectModuleError_IllegalSubCMD = GENRETCODE_DirectModuleError_Offset + 2,
		GENRETCODE_DirectModuleError_FileNotOpen = GENRETCODE_DirectModuleError_Offset + 3,
		GENRETCODE_DirectModuleError_WriteToFlashError = GENRETCODE_DirectModuleError_Offset + 4,
		GENRETCODE_DirectModuleError_WriteToVarError = GENRETCODE_DirectModuleError_Offset + 5,
		GENRETCODE_DirectModuleError_IllegalFileNr = GENRETCODE_DirectModuleError_Offset + 6,
		GENRETCODE_DirectModuleError_IllegalVarNr = GENRETCODE_DirectModuleError_Offset + 7,
		GENRETCODE_DirectModuleError_IllegalSubVarNr = GENRETCODE_DirectModuleError_Offset + 8,
		GENRETCODE_DirectModuleError_SubProcTimeout = GENRETCODE_DirectModuleError_Offset + 9,
		GENRETCODE_DirectModuleError_Busy = GENRETCODE_DirectModuleError_Offset + 10,
};
typedef enum tag_GENRETCODE GENRETCODE;

enum tag_PROTOCOLCODE
{
	PROTOCOLCODE_NotDefined = -1,
	PROTOCOLCODE_Profibus = 0,
	PROTOCOLCODE_Modbus = 1,
	PROTOCOLCODE_ProfibusDP = 2,
	PROTOCOLCODE_Localbus = 3
};
typedef enum tag_PROTOCOLCODE PROTOCOLCODE;

enum tag_CHARFORMATCODE
{
	CHARFORMATCODE_NotDefined = -1,
	CHARFORMATCODE_8n1 = 0,
	CHARFORMATCODE_8e1 = 1,
	CHARFORMATCODE_8o1 = 2,
	CHARFORMATCODE_8n2 = 4,
	CHARFORMATCODE_8e2 = 5,
	CHARFORMATCODE_8o2 = 6
};
typedef enum tag_CHARFORMATCODE CHARFORMATCODE;

enum tag_SELECTIONCODE
{
	// UNBALANCEDVALUE + ZEROVALUE => GROSSVALUE + TAREVALUE => NETVALUE
	SELECTIONCODE_NotDefined = -1,
	SELECTIONCODE_NetValue = 0,
	SELECTIONCODE_TareValue = 1,
	SELECTIONCODE_GrossValue = 2,
	SELECTIONCODE_ZeroValue = 3,
	SELECTIONCODE_UnbalancedValue = 4,
	SELECTIONCODE_SpecialValue = 100
};
typedef enum tag_SELECTIONCODE SELECTIONCODE;

enum tag_DATATYPECODE
{
	DATATYPECODE_NotDefined = -1,
	DATATYPECODE_No = 0,
	DATATYPECODE_Boolean = 1,
	DATATYPECODE_SInt8 = 2,
	DATATYPECODE_USInt8 = 3,
	DATATYPECODE_SInt16 = 4,
	DATATYPECODE_USInt16 = 5,
	DATATYPECODE_SInt32 = 6,
	DATATYPECODE_USInt32 = 7,
	DATATYPECODE_Float = 8,
	DATATYPECODE_BitSet8 = 9,
	DATATYPECODE_BitSet16 = 10,
	DATATYPECODE_BitSet32 = 11,
	DATATYPECODE_Double = 12,
	DATATYPECODE_SInt64 = 13,
	DATATYPECODE_USInt64 = 14,
	DATATYPECODE_BitSet64 = 15
};
typedef enum tag_DATATYPECODE DATATYPECODE;

enum tag_VARIABLETYPECODE
{
	VARIABLETYPECODE_NotDefined = -1,
	VARIABLETYPECODE_Empty = 0,
	VARIABLETYPECODE_AnalogInput = 1,
	VARIABLETYPECODE_Arithmetic = 2,
	VARIABLETYPECODE_DigitalOutput = 3,
	VARIABLETYPECODE_DigitalInput = 4,
	VARIABLETYPECODE_Setpoint = 5,
	VARIABLETYPECODE_Alarm = 6,
	VARIABLETYPECODE_BitsetOutput = 7,
	VARIABLETYPECODE_BitsetInput = 8,
	VARIABLETYPECODE_PIDController = 9,
	VARIABLETYPECODE_AnalogOutput = 10,
	VARIABLETYPECODE_SignalConditioning = 11,
	VARIABLETYPECODE_Remote = 12
};
typedef enum tag_VARIABLETYPECODE VARIABLETYPECODE;

enum tag_DATADIRECTIONCODE
{
	DATADIRECTIONCODE_NotDefined = -1,
	DATADIRECTIONCODE_Input = 0,
	DATADIRECTIONCODE_Output = 1,
	DATADIRECTIONCODE_InputOutput = 2,
	DATADIRECTIONCODE_Empty = 3
};
typedef enum tag_DATADIRECTIONCODE DATADIRECTIONCODE;

enum tag_PRINTDIAGNOSTICSCODE
{
	PRINTDIAGNOSTICSCODE_NotDefined = -1,
	PRINTDIAGNOSTICSCODE_Off = 0,
	PRINTDIAGNOSTICSCODE_Base = 1,
	PRINTDIAGNOSTICSCODE_Detailed = 2
};
typedef enum tag_PRINTDIAGNOSTICSCODE PRINTDIAGNOSTICSCODE;

/**********************************************************************************************************************
	Handle for ADAPTER objects
**********************************************************************************************************************/
typedef unsigned int HADAPTER;

/* Ensure "C" linkage for all functions declared in this header */
#ifdef __cplusplus
extern "C" {
#endif

/**********************************************************************************************************************
	Redirects globally console trace outputs to a file for this app. It is placed in system temporary directory with sub path "\GInsModuleCommunication_Trace\".
	Attention: this sub path remains and has to be removed manually if not longer needed.
	INPUT
		DoActivate         	:	"!= 0" enables / "== 0" disables redirection
	OUTPUT
		---
	RETURN
		---
**********************************************************************************************************************/
void GlobalRedirectTraceOutputToFile(
	int32_t DoActivate
);

/**********************************************************************************************************************
	Delivers description and version infos.
	INPUT
		DescriptionLength	:	size of DescriptionBuffer
		VersionLength		:	size of VersionBuffer
	OUTPUT
	    DescriptionBuffer	:	description text
	    VersionBuffer		:	version text
	RETURN
		GENRETCODE_Success when no error
		GENRETCODE_BufferTooSmall when one of the provided buffers is too small
**********************************************************************************************************************/
GENRETCODE Identify(
	char* DescriptionBuffer, size_t DescriptionLength,
	char* VersionBuffer, size_t VersionLength
);

/**********************************************************************************************************************
	Converts GENRETCODE to text
	INPUT
		Code				:	GENRETCODE
		BufLen				:	size of provided Buffer
	OUTPUT
		Buffer				:	Text for the given Code
	RETURN
		GENRETCODE_Success when no error
		GENRETCODE_BufferTooSmall when one of the provided buffers is too small
**********************************************************************************************************************/
GENRETCODE GetText_GENRETCODE(GENRETCODE Code, char* Buffer, size_t BufLen);

/**********************************************************************************************************************
	Converts MAINMODULETYPECODE to text
	INPUT
		Code				:	MAINMODULETYPECODE
		BufLen				:	size of provided Buffer
	OUTPUT
		Buffer				:	Text for the given Code
	RETURN
		GENRETCODE_Success when no error
		GENRETCODE_BufferTooSmall when one of the provided buffers is too small
**********************************************************************************************************************/
GENRETCODE GetText_MAINMODULETYPECODE(MAINMODULETYPECODE Code, char* Buffer, size_t BufLen);

/**********************************************************************************************************************
	Create an instance of a Module Adapter
	INPUT
		PrintDiagnostics    :   according PRINTDIAGNOSTICSCODE, messages will be sent to STDOUT
	OUTPUT
		---
	RETURN
		ReturnValue			:	Handle to Adapter
**********************************************************************************************************************/
HADAPTER CreateAdapter(PRINTDIAGNOSTICSCODE PrintDiagnostics);

/**********************************************************************************************************************
	Destroys an instance of a Module Adapter
	INPUT
		hAdapter    		:   handle to Adapter
	OUTPUT
		---
	RETURN
		GENRETCODE_Success when no error
		GENRETCODE_InvalidAdapterHandle
**********************************************************************************************************************/
GENRETCODE DestroyAdapter(HADAPTER hAdapter);

/**********************************************************************************************************************
	Destroys all instances
	INPUT
		---
	OUTPUT
		---
	RETURN
		GENRETCODE_Success
**********************************************************************************************************************/
GENRETCODE DestroyAllAdapters(void);

/**********************************************************************************************************************
	Opens interface if it isn't open already. If another interface is open, it will be closed first.
	INPUT
		hAdapter			:	Adapter Handle
		DeviceName			:	Name of interface COMPort e.g. "/dev/ttyS0"
		Baudrate			:	Baudrate to use
		CharFormat			:	CHARFORMATCODE
		Protocol			:	PROTOCOLCODE
	OUTPUT
		---
	RETURN
		ReturnValue			:	GENRETCODE
**********************************************************************************************************************/
GENRETCODE OpenComPort(
	HADAPTER hAdapter,
	const char* DeviceName,
	int32_t BaudRate,
	CHARFORMATCODE CharFormat,
	PROTOCOLCODE Protocol
);

/**********************************************************************************************************************
	Opens UDP or TCP/IP port if it isn't open already. If another interface is open, it will be closed first.
	INPUT
		hAdapter			:	Adapter Handle
		IPAddress			:	IP Address (starting with 'U:' selects UDP)
		IPPort				:	Portnumber
		Protocol			:	PROTOCOLCODE
		OpenTimeoutS		:	in [s]
		CommTimeoutS		:	in [s]
	OUTPUT
		---
	RETURN
		ReturnValue			:	GENRETCODE
**********************************************************************************************************************/
GENRETCODE OpenIPPort(
	HADAPTER hAdapter,
	const char* IPAddress,
	int32_t IPPort,
	PROTOCOLCODE Protocol,
	double OpenTimeoutS,
	double CommTimeoutS
);

/**********************************************************************************************************************
	Closes all opened interfaces for the given adapter.
	INPUT
		hAdapter			:   Adapter Handle
	OUTPUT
		---
	RETURN
		ReturnValue			:	GENRETCODE
**********************************************************************************************************************/
GENRETCODE CloseAllPorts(HADAPTER hAdapter);

/**********************************************************************************************************************
	Delivers actual list of connected modules. With this function also ComPort initialisation is made automatically.
	After performing this function all settings are restored, as they were before calling. If a different ComPort is
	open, an error ACCESS_DENIED is returned. StructureID need to be set before calling, to select between different
	structures.
	INPUT
		hAdapter			:   Adapter Handle
		DeviceName			:	Name of interface COMPort e.g. "/dev/ttyS0"
		Parameter			:	see GETLIVELISTPARAMBITSETCODE
		StructureID			:	StructureID to set output array fill structure
		ModuleItemListCount	:	Number of items allocated for ModuleItemList-array (needed: LIMITCODE::GetLiveListArrayItemsPerModuleCount_StructIDX*LIMITCODE::MaxModuleCount)
	OUTPUT
		StructureID		    :	StructureID set, to decode data
		ModuleCount			:	Number of modules found (n = 0..LIMITCODE_MaxModuleCount-1)
		ModuleItemList		:	Array with integer items, built up as follows:
			with StructureID = 0:
				Value at pos 0+n*5		... Address Device n
				Value at pos 1+n*5		... ModuleType Device n
				Value at pos 2+n*5		... Protocol Device n
				Value at pos 3+n*5		... Baudrate Device n
				Value at pos 4+n*5		... CharFormat Device n
			with StructureID = 1:
				Value at pos 0+n*8		... Address Device n
				Value at pos 1+n*8		... ModuleType Device n
				Value at pos 2+n*8		... SubModuleType Device n
				Value at pos 3+n*8		... FunctionType Device n
				Value at pos 4+n*8		... CasingType Device n
				Value at pos 5+n*8		... Protocol Device n
				Value at pos 6+n*8		... Baudrate Device n
				Value at pos 7+n*8		... CharFormat Device n
			...
			MainModuleType			... see MAINMODULETYPECODE...
			SubModuleType			... depending on modules
			FunctionModuleType		... depending on modules
			CasingModuleType		... depending on modules
			Protocol				... see PROTOCOLCODE...
			Baudrate				... Baudrate
			CharFormat				... see CHARFORMATCODE...
	RETURN
		ReturnValue  :	GENRETCODE
**********************************************************************************************************************/
GENRETCODE GetLiveListComPort(
	HADAPTER hAdapter,
	const char* DeviceName,
	GETLIVELISTPARAMBITSETCODE Parameter,
	int32_t *StructureID,
	int32_t *ModuleCount,
	int32_t ModuleItemList[],
	int32_t ModuleItemListCount
);

/**********************************************************************************************************************
	Delivers actual list of connected modules with SNR's. It need to have ComPort opened before.
	If ScanBaudrate is set to -1 it takes parameters of this opened port to calculate timings. 
	In case of socket communication and ScanBaudrate is set to -1, 115200 bauds are taken as default timing base.
	StructureID need to be set before calling, to select between different structures.
	INPUT
		hAdapter			:   Adapter Handle
		ScanBaudrate		:	Straight number of bits/s to calculate timing (-1 for opened port settings)
		MaxScanCount		:	Max. number of scans (>=1)
		Parameter			:	see GETLIVELISTSNRPARAMBITSETCODE
		StructureID			:	StructureID to set output array fill structure
		ModuleItemListCount	:	Number of items allocated for ModuleItemList-array (needed: LIMITCODE::GetLiveListSNRArrayItemsPerModuleCount_StructIDX*LIMITCODE::MaxModuleCount)
	OUTPUT
		StructureID		    :	StructureID set, to decode data
		ModuleCount			:	Number of modules found (n = 0..LIMITCODE_MaxModuleCount-1)
		ModuleItemList		:	Array with integer items, built up as follows:
			with StructureID = 0:
				Value at pos 0+n*6		... SNR Device n
				Value at pos 1+n*6		... Address Device n
				Value at pos 2+n*6		... ModuleType Device n
				Value at pos 3+n*6		... Protocol Device n
				Value at pos 4+n*6		... Baudrate Device n
				Value at pos 5+n*6		... CharFormat Device n
			with StructureID = 1:
				Value at pos 0+n*9		... SNR Device n
				Value at pos 1+n*9		... Address Device n
				Value at pos 2+n*9		... ModuleType Device n
				Value at pos 3+n*9		... SubModuleType Device n
				Value at pos 4+n*9		... FunctionType Device n
				Value at pos 5+n*9		... CasingType Device n
				Value at pos 6+n*9		... Protocol Device n
				Value at pos 7+n*9		... Baudrate Device n
				Value at pos 8+n*9		... CharFormat Device n
			...
			MainModuleType			... see MAINMODULETYPECODE...
			SubModuleType			... depending on modules
			FunctionModuleType		... depending on modules
			CasingModuleType		... depending on modules
			Protocol				... see PROTOCOLCODE...
			Baudrate				... Baudrate
			CharFormat				... see CHARFORMATCODE...
	RETURN
		ReturnValue  :	GENRETCODE
**********************************************************************************************************************/
GENRETCODE GetLiveListSNRComPort(
	HADAPTER hAdapter,
	int32_t ScanBaudrate,
	int32_t MaxScanCount,
	GETLIVELISTSNRPARAMBITSETCODE Parameter,
	int32_t *StructureID,
	int32_t *ModuleCount,
	int32_t ModuleItemList[],
	int32_t ModuleItemListCount
);

/**********************************************************************************************************************
	Enables setting of actual moduletype.
	ATTENTION: Has to be set before all functions except "InitPort" and "ClosePort" !!!
	INPUT:
		hAdapter			:	Adapter Handle
		MainModuleType		:	see MAINMODULETYPECODE...
	OUTPUT
		---
	RETURN
		ReturnValue			:	GENRETCODE
**********************************************************************************************************************/
GENRETCODE SetModuleType(
	HADAPTER hAdapter,
	MAINMODULETYPECODE MainModuleType
);

/**********************************************************************************************************************
	Addressed communication base function.
	INPUT
		hAdapter				:	Adapter Handle
		Address					:	Address
		Command					:	Command
		Data					:	to write data
		DataBufferLength		:	size of DataBuffer
		TimeoutS				:	in [s]
		MaxRetries				:	maximum number of retries
	OUTPUT
		Data					:	read data
	RETURN
		ReturnValue				:	GENRETCODE
**********************************************************************************************************************/
GENRETCODE AddressedBaseCommunication(
	HADAPTER hAdapter,
	int32_t Address,
	int32_t Command,
	char* Data, size_t DataBufferLength,
	double TimeoutS,
	int32_t MaxRetries
);

/**********************************************************************************************************************
ATTENTION: File naming conventions
			FileIndex is dominant for generating the correct FileName used finally.
			FileName need to have format ..._[APP].GCF
				[APP] is dependent on FLASHFILEINDEXCODE
					FLASHFILEINDEXCODE_OS:			"OS"
					FLASHFILEINDEXCODE_APP:			"APP"
					FLASHFILEINDEXCODE_CAL:			"CAL"
					FLASHFILEINDEXCODE_FPGA:		"FPGA"
					FLASHFILEINDEXCODE_SUBCPU:		"SUBCPU"
					FLASHFILEINDEXCODE_I:			"I"
					FLASHFILEINDEXCODE_CFirst:		"C"
					FLASHFILEINDEXCODE_CFirst+1
						...
					FLASHFILEINDEXCODE_CLast:		"C1" ... "C249"
			So, if name set doesn't match, it will be corrected automatically inside this function and therefore
			it can be, that the file isn't found accordingly. So pay attention to the correct naming.
**********************************************************************************************************************/

/**********************************************************************************************************************
	Send a configuration file to the module at the given address.
	INPUT
		hAdapter				:	Adapter Handle
		Address					:	Address
		ParameterFileName		:	FileName
		FileNameBufferLength	:	size of FileNameBuffer
		FileIndex				:	File index (see constants FLASHFILEINDEXCODE...)
	OUTPUT
		ParameterFileName		:	finally used FileName
	RETURN
		ReturnValue				:	GENRETCODE
**********************************************************************************************************************/
GENRETCODE SendParameterFile(
	HADAPTER hAdapter,
	int32_t Address,
	char* ParameterFileName, size_t FileNameBufferLength,
	FLASHFILEINDEXCODE FileIndex
);

/**********************************************************************************************************************
	Reads the configuration file from the module at the given address.
	INPUT
		hAdapter				:	Adapter Handle
		Address					:	Address
		ParameterFileName		:	FileName
		FileNameBufferLength	:	size of FileNameBuffer
		FileIndex				:	File index (see constants FLASHFILEINDEXCODE...)
	OUTPUT
		ParameterFileName		:	finally used FileName
	RETURN
		ReturnValue				:	GENRETCODE
**********************************************************************************************************************/
GENRETCODE GetParameterFile(
	HADAPTER hAdapter,
	int32_t Address,
	char* ParameterFileName, size_t FileNameBufferLength,
	FLASHFILEINDEXCODE FileIndex
);

/**********************************************************************************************************************
	Enables writing to variable and selected feature
	INPUT
		hAdapter			:	Adapter Handle
		Address             :	Address
		VariableIndex		:	Variable index 0-based (look for constants LIMITCODE...)
		SelCode             :	Selection code (see constants SELECTIONCODE...)
		DataTypeCode        :	Data type code (see constants DATATYPECODE...)
		Value               :	Pointer to data according DataTypeCode
	OUTPUT
		---
	RETURN
		ReturnValue			:	GENRETCODE
**********************************************************************************************************************/
GENRETCODE SendVariable(
	HADAPTER      hAdapter,
	int32_t       Address,
	int32_t       VariableIndex,
	SELECTIONCODE SelCode,
	DATATYPECODE  DataTypeCode,
	uint8_t       Value[]
);

/**********************************************************************************************************************
	Enables reading of variable with selected feature
	INPUT
		hAdapter			:	Adapter Handle
		Address             :	Address
		VariableIndex		:	Variable index 0-based (look for constants LIMITCODE...)
		SelCode             :	Selection code (see constants SELECTIONCODE...)
		DataTypeCode        :	Data type code (see constants DATATYPECODE...)
	OUTPUT
		Value               :	Pointer to data according DataTypeCode
	RETURN
		ReturnValue         :	GENRETCODE
**********************************************************************************************************************/
GENRETCODE GetVariable(
	HADAPTER      hAdapter,
	int32_t       Address,
	int32_t       VariableIndex,
	SELECTIONCODE SelCode,
	DATATYPECODE  DataTypeCode,
	uint8_t       Value[]
);

/**********************************************************************************************************************
	Enables reading of all variables;
	INPUT
		hAdapter				:	Adapter Handle
		Address					:	Address
		VariablesCount			:	Number of variables to read
		DataTypeCodeArray		:	Data type code array, each variable need to have a representation here (look for constants DATATYPECODE...)
	OUTPUT
		ValuesArray				:	Values array, each variable need to have a representation here
	RETURN
		ReturnValue				:	GENRETCODE
**********************************************************************************************************************/
GENRETCODE GetVariablesAll(
	HADAPTER      hAdapter,
	int32_t       Address,
	int32_t       VariablesCount,
	DATATYPECODE  DataTypeCodeArray[],
	double        ValuesArray[]
);

/**********************************************************************************************************************
	Reads info from module
	INPUT
		hAdapter					:	Adapter Handle
		Address						:	Address
	OUTPUT
		Location					:	Location
		LocationBufferLength		:	size of LocationBuffer
		SerialNo					:	Serial Number
		SerialNoBufferLength		:	size of SerialNoBuffer
		VendorName					:	VendorName
		VendorNameBufferLength		:	size of VendorNameBuffer
		ControllerType				:	ControllerType
		ControllerTypeBufferLength	:	size of ControllerTypeBuffer
		HWRelease					:	HardwareRelease
		HWReleaseBufferLength		:	size of HWReleaseBuffer
		SWRelease					:	SoftwareRelease
		SWReleaseBufferLength		:	size of SWReleaseBuffer
		VariablesCount				:	Number of configured variables
	RETURN
		ReturnValue					:	GENRETCODE
**********************************************************************************************************************/
GENRETCODE GetModuleInfo(
	HADAPTER hAdapter,
	int32_t Address,
	char* Location, size_t LocationBufferLength,
	char* SerialNo, size_t SerialNoBufferLength,
	char* VendorName, size_t VendorNameBufferLength,
	char* ControllerType, size_t ControllerTypeBufferLength,
	char* HWRelease, size_t HWReleaseBufferLength,
	char* SWRelease, size_t SWReleaseBufferLength,
	int32_t* VariablesCount);

/**********************************************************************************************************************
	Reads variable info from module
	INPUT
		hAdapter					:	Adapter Handle
		Address						:	Address
		VariableIndex				:	Variable index 0-based (look for constants LIMITCODE...)
	OUTPUT
		VariableType				:	Variable type code (look for constants VARIABLETYPECODE...)
		Description					:	Description
		DescriptionBufferLength		:	size of DescriptionBuffer
		DataType					:	Data type code (look for constants DATATYPECODE...)
		Fieldlength					:	Fieldlength
		Precision 				    :	Precision
		Unit						:	Unit
		UnitBufferLength			:	size of UnitBuffer
		Mode						:	Mode		Bit 0    => Write:  1.. Enabled / 0.. Disabled
													Bit 1    => Logged: 1.. Enabled / 0.. Disabled
													Bit 2    => Zero:   1.. Enabled / 0.. Disabled
													Bit 3    => Tare:   1.. Enabled / 0.. Disabled
													Bit 4..6 => n.a.
													Bit 7    => Read:   1.. Disable / 0.. Enable
	RETURN
		ReturnValue					:	GENRETCODE
**********************************************************************************************************************/
GENRETCODE GetModuleVariableInfo(
		HADAPTER hAdapter,
		int32_t Address,
		int32_t VariableIndex,
		VARIABLETYPECODE* VariableType,
		char* Description, size_t DescriptionBufferLength,
		DATATYPECODE* DataType,
		int32_t* Fieldlength,
		int32_t* Precision,
		char* Unit, size_t UnitBufferLength,
		int32_t* Mode);

/**********************************************************************************************************************
	Registers callback function to monitor progress.
	A Double-Number (0-100%) will be transfered as argument.
	INPUT
		hAdapter					:	Adapter Handle
		FunctionAddress				:	Address of callback function
	OUTPUT
		---
	RETURN
		ReturnValue					:	GENRETCODE
**********************************************************************************************************************/
GENRETCODE Register_CallbackHandler_Progress(
		HADAPTER hAdapter,
		CALLBACK_HANDLER_PROGRESS Handler);

/**********************************************************************************************************************
	For internal use only.
	INPUT
		hAdapter			:	Adapter Handle
		Index               :	function selector index
		PointerArray        :	Array with pointers depending on set function selector index
		PointerArrayCount   :	Number of items in pointer-array
	OUTPUT
		---
	RETURN
		ReturnValue         :	GENRETCODE
**********************************************************************************************************************/
GENRETCODE ServiceFunction(
	HADAPTER hAdapter,
	int32_t  Index,
	void*    PointerArray[],
	int32_t  PointerArrayCount
);


#ifdef __cplusplus
} // extern "C"
#endif

#endif /* GINSMODULECOMMUNICATIONAPI_H_ */

