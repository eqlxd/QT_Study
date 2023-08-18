/*
 ============================================================================================================================================
 $Id         : GInsModuleCommunicationAPIDemo.c 236 2012-12-12 14:43:59Z stockers $
 Author      : Peter Hübel
 Copyright   : Gantner Instruments GmbH
 Description : ANSI C Module Communication Library Demo
 ============================================================================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "GInsModuleCommunicationAPI.h"

//#define DO_WRITE_TEST
//#define DO_TAKE_SNR_INSTEAD_OF_ADDRESS_FOR_COMMUNICATION

#define DEFAULTSTRINGSIZE		128

//******************************************************************************************************************************************************

void CallbackHandler_Progress(double Value)
{
	printf("Progress = %lf %%\n", Value);
}

//******************************************************************************************************************************************************

int main(int argc, char** argv)
{
	HADAPTER hAdapter;

#ifdef WIN32
	const char* DeviceName = "COM4";
#else
	const char* DeviceName = "/dev/ttyS0";	 //  ttyUSB0 / ttyS0
#endif
	char Description[DEFAULTSTRINGSIZE];
	char Version[DEFAULTSTRINGSIZE];
	char FileName[2*DEFAULTSTRINGSIZE];
	char Hstr[2*DEFAULTSTRINGSIZE];
	GENRETCODE GenRet = GENRETCODE_Success;
	int32_t StructureID = 1;
	int32_t ModuleCount = 0;
	int32_t ModuleItemList[LIMITCODE_GetLiveListArrayItemsPerModuleCount_StructID1*LIMITCODE_MaxModuleCount];
#ifdef DO_TAKE_SNR_INSTEAD_OF_ADDRESS_FOR_COMMUNICATION
	int32_t ModuleItemListSNR[LIMITCODE_GetLiveListSNRArrayItemsPerModuleCount_StructID1*LIMITCODE_MaxModuleCount];
#endif
	int32_t i;
	union
	{
		uint8_t d_uint8;
		int8_t d_int8;
		uint16_t d_uint16;
		int16_t d_int16;
		uint32_t d_uint32;
		int32_t d_int32;
		uint64_t d_uint64;
		int64_t d_int64;
		float d_float;
		double d_double;
	} DataBuffer;
	double DataValue;
	double DataValueArray[LIMITCODE_MaxModuleVariableCount];
	DATATYPECODE DataTypeCodeArray[LIMITCODE_MaxModuleVariableCount];
	struct
	{
		int32_t m_Snr;
		int32_t m_Address;
		int32_t m_AddressOrSnr;
		MAINMODULETYPECODE m_MainModuleType;
		int32_t m_SubModuleType;
		int32_t m_FunctionModuleType;
		int32_t m_CasingModuleType;
		PROTOCOLCODE m_Protocol;
		int32_t m_Baudrate;
		CHARFORMATCODE m_CharFormat;
		char m_Location[DEFAULTSTRINGSIZE];
		char m_SerialNo[DEFAULTSTRINGSIZE];
		char m_VendorName[DEFAULTSTRINGSIZE];
		char m_ControllerType[DEFAULTSTRINGSIZE];
		char m_HWRelease[DEFAULTSTRINGSIZE];
		char m_SWRelease[DEFAULTSTRINGSIZE];
		int32_t m_VariablesCount;
		struct
		{
			int32_t m_Index;
			VARIABLETYPECODE m_VariableType;
			char m_Description[DEFAULTSTRINGSIZE];
			DATATYPECODE m_DataType;
			int32_t m_Fieldlength;
			int32_t m_Precision;
			char m_Unit[DEFAULTSTRINGSIZE];
			int32_t m_Mode;
		} m_Variables[LIMITCODE_MaxModuleVariableCount];
	} Module;

	if (argc > 1)
		DeviceName = argv[1];

	//GlobalRedirectTraceOutputToFile(1);	// general setting

	hAdapter = CreateAdapter(PRINTDIAGNOSTICSCODE_Base);

	Identify(Description, sizeof(Description), Version, sizeof(Version));
	printf("%s %s\n", Description, Version);

	if (GenRet == GENRETCODE_Success)
	{
		char *pStr = "TestTestTestTestTestTestTest";
		void *PntArray[10] = {0};
		PntArray[0] = (void *)pStr;
		GenRet = ServiceFunction(
					hAdapter,
					60000,
					PntArray,
					sizeof(PntArray)/sizeof(PntArray[0]));
		if (GenRet != GENRETCODE_Success)
		{
			GetText_GENRETCODE(GenRet,Hstr,sizeof(Hstr));
			printf("   ERROR <%s> @GetLiveListComPort. Application terminated !!!!\n", Hstr);
		}
	}

	if (GenRet == GENRETCODE_Success)
	{
		GenRet = GetLiveListComPort(
					hAdapter,
					DeviceName,
					GETLIVELISTPARAMBITSETCODE_Empty,
					&StructureID,
					&ModuleCount,
					ModuleItemList,
					sizeof(ModuleItemList)/sizeof(ModuleItemList[0]));
		if (GenRet != GENRETCODE_Success)
		{
			GetText_GENRETCODE(GenRet,Hstr,sizeof(Hstr));
			printf("   ERROR <%s> @GetLiveListComPort. Application terminated !!!!\n", Hstr);
		}
	}

#ifdef DO_TAKE_SNR_INSTEAD_OF_ADDRESS_FOR_COMMUNICATION

	if (GenRet == GENRETCODE_Success)
	{
		// after GetLiveListComPort with NOT param GETLIVELISTPARAMBITSETCODE_ActivateSetBaudrate set, all modules remain @ configuration bus parameters
		GenRet = OpenComPort(
					hAdapter,
					DeviceName,
					SETTING_ConfigurationBaudrate,
					SETTING_ConfigurationCharFormat,
					SETTING_ConfigurationProtocol);
		if (GenRet != GENRETCODE_Success)
		{
			GetText_GENRETCODE(GenRet,Hstr,sizeof(Hstr));
			printf("   ERROR <%s> @OpenComPort. Application terminated !!!!\n", Hstr);
		}
	}

	if (GenRet == GENRETCODE_Success)
	{
		GenRet = GetLiveListSNRComPort(
					hAdapter,
					-1,
					10,
					GETLIVELISTSNRPARAMBITSETCODE_Empty,
					&StructureID,
					&ModuleCount,
					ModuleItemListSNR,
					sizeof(ModuleItemListSNR)/sizeof(ModuleItemListSNR[0]));
		if (GenRet != GENRETCODE_Success)
		{
			GetText_GENRETCODE(GenRet,Hstr,sizeof(Hstr));
			printf("   ERROR <%s> @GetLiveListSNRComPort. Application terminated !!!!\n", Hstr);
		}
	}

	if ((GenRet == GENRETCODE_Success) &&
		(ModuleCount <= 0))
	{
		GenRet = GENRETCODE_NotAvailable;
		if (GenRet != GENRETCODE_Success)
		{
			GetText_GENRETCODE(GenRet,Hstr,sizeof(Hstr));
			printf("   ERROR <%s>. No modules found. Application terminated !!!!\n", Hstr);
		}
	}

	if (GenRet == GENRETCODE_Success)
	{
		// take 1st module in list
		int32_t Index = 0;
		Module.m_Snr = ModuleItemListSNR[Index++];
		Module.m_Address = ModuleItemListSNR[Index++];
		Module.m_AddressOrSnr = Module.m_Snr;
		Module.m_MainModuleType = (MAINMODULETYPECODE)ModuleItemListSNR[Index++];
		Module.m_SubModuleType = ModuleItemListSNR[Index++];
		Module.m_FunctionModuleType = ModuleItemListSNR[Index++];
		Module.m_CasingModuleType = ModuleItemListSNR[Index++];
		Module.m_Protocol = (PROTOCOLCODE)ModuleItemListSNR[Index++];
		Module.m_Baudrate = ModuleItemListSNR[Index++];
		Module.m_CharFormat = (CHARFORMATCODE)ModuleItemListSNR[Index++];

		GenRet = SetModuleType(
					hAdapter,
					Module.m_MainModuleType);
		if (GenRet != GENRETCODE_Success)
		{
			GetText_GENRETCODE(GenRet,Hstr,sizeof(Hstr));
			printf("   ERROR <%s> @SetModuleType. Application terminated !!!!\n", Hstr);
		}
	}

#else

	if ((GenRet == GENRETCODE_Success) &&
		(ModuleCount <= 0))
	{
		GenRet = GENRETCODE_NotAvailable;
		if (GenRet != GENRETCODE_Success)
		{
			GetText_GENRETCODE(GenRet,Hstr,sizeof(Hstr));
			printf("   ERROR <%s>. No modules found. Application terminated !!!!\n", Hstr);
		}
	}

	if (GenRet == GENRETCODE_Success)
	{
		// take 1st module in list
		int32_t Index = 0;
		Module.m_Address = ModuleItemList[Index++];
		Module.m_AddressOrSnr = Module.m_Address;
		Module.m_MainModuleType = (MAINMODULETYPECODE)ModuleItemList[Index++];
		Module.m_SubModuleType = ModuleItemList[Index++];
		Module.m_FunctionModuleType = ModuleItemList[Index++];
		Module.m_CasingModuleType = ModuleItemList[Index++];
		Module.m_Protocol = (PROTOCOLCODE)ModuleItemList[Index++];
		Module.m_Baudrate = ModuleItemList[Index++];
		Module.m_CharFormat = (CHARFORMATCODE)ModuleItemList[Index++];

		GenRet = SetModuleType(
					hAdapter,
					Module.m_MainModuleType);
		if (GenRet != GENRETCODE_Success)
		{
			GetText_GENRETCODE(GenRet,Hstr,sizeof(Hstr));
			printf("   ERROR <%s> @SetModuleType. Application terminated !!!!\n", Hstr);
		}
	}

	if (GenRet == GENRETCODE_Success)
	{
		// after GetLiveListComPort with NOT param GETLIVELISTPARAMBITSETCODE_ActivateSetBaudrate set, all modules remain @ configuration bus parameters
		GenRet = OpenComPort(
					hAdapter,
					DeviceName,
					SETTING_ConfigurationBaudrate,
					SETTING_ConfigurationCharFormat,
					SETTING_ConfigurationProtocol);
		if (GenRet != GENRETCODE_Success)
		{
			GetText_GENRETCODE(GenRet,Hstr,sizeof(Hstr));
			printf("   ERROR <%s> @OpenComPort. Application terminated !!!!\n", Hstr);
		}
	}

#endif

	if (GenRet == GENRETCODE_Success)
		GenRet = Register_CallbackHandler_Progress(
					hAdapter,
					CallbackHandler_Progress);

	if (GenRet == GENRETCODE_Success)
	{
#ifdef WIN32
		strcpy(FileName,"c:\\abc_c.gcf");
#else
		strcpy(FileName,"/home/user1/abc_c.gcf");
#endif
		GenRet = GetParameterFile(
					hAdapter,
					Module.m_AddressOrSnr,
					FileName, sizeof(FileName),
					FLASHFILEINDEXCODE_CFirst);
		if (GenRet != GENRETCODE_Success)
		{
			GetText_GENRETCODE(GenRet,Hstr,sizeof(Hstr));
			printf("   ERROR <%s> @GetParameterFile. Application terminated !!!!\n", Hstr);
		}
		else
			printf("   INFO @GetParameterFile: Successfully done. Really used filename is <%s> !!!!\n", FileName);
	}

	if (GenRet == GENRETCODE_Success)
	{
#ifdef WIN32
		strcpy(FileName,"c:\\abc.gcf");
#else
		strcpy(FileName,"/home/user1/abc.gcf");
#endif
		GenRet = GetParameterFile(
					hAdapter,
					Module.m_AddressOrSnr,
					FileName, sizeof(FileName),
					FLASHFILEINDEXCODE_I);
		if (GenRet != GENRETCODE_Success)
		{
			GetText_GENRETCODE(GenRet,Hstr,sizeof(Hstr));
			printf("   ERROR <%s> @GetParameterFile. Application terminated !!!!\n", Hstr);
		}
		else
			printf("   INFO @GetParameterFile: Successfully done. Really used filename is <%s> !!!!\n", FileName);
	}

	if (GenRet == GENRETCODE_Success)
	{
#ifdef WIN32
		strcpy(FileName,"c:\\abc_c.gcf");
#else
		strcpy(FileName,"/home/user1/abc_c.gcf");
#endif
		GenRet = GetParameterFile(
					hAdapter,
					Module.m_AddressOrSnr,
					FileName, sizeof(FileName),
					FLASHFILEINDEXCODE_CAL);
		if (GenRet != GENRETCODE_Success)
		{
			GetText_GENRETCODE(GenRet,Hstr,sizeof(Hstr));
			printf("   ERROR <%s> @GetParameterFile. Application terminated !!!!\n", Hstr);
		}
		else
			printf("   INFO @GetParameterFile: Successfully done. Really used filename is <%s> !!!!\n", FileName);
	}

	Register_CallbackHandler_Progress(
			hAdapter,
			0);

	if (GenRet == GENRETCODE_Success)
	{
		GenRet = GetModuleInfo(
					hAdapter,
					Module.m_AddressOrSnr,
					Module.m_Location, sizeof(Module.m_Location),
					Module.m_SerialNo, sizeof(Module.m_SerialNo),
					Module.m_VendorName, sizeof(Module.m_VendorName),
					Module.m_ControllerType, sizeof(Module.m_ControllerType),
					Module.m_HWRelease, sizeof(Module.m_HWRelease),
					Module.m_SWRelease, sizeof(Module.m_SWRelease),
					&Module.m_VariablesCount);
		if (GenRet != GENRETCODE_Success)
		{
			GetText_GENRETCODE(GenRet,Hstr,sizeof(Hstr));
			printf("   ERROR <%s> @GetModuleInfo. Application terminated !!!!\n", Hstr);
		}
		else
		{
			printf("   INFO from GetModuleInfo:\n");
			printf("      SNR=%d\n",Module.m_Snr);
			printf("      Address=%d\n",Module.m_Address);
			printf("      Location=%s\n",Module.m_Location);
			printf("      SerialNo=%s\n",Module.m_SerialNo);
			printf("      VendorName=%s\n",Module.m_VendorName);
			printf("      ControllerType=%s\n",Module.m_ControllerType);
			printf("      HWRelease=%s\n",Module.m_HWRelease);
			printf("      SWRelease=%s\n",Module.m_SWRelease);
			printf("      VariablesCount=%d\n",Module.m_VariablesCount);
		}
	}

	if ((GenRet == GENRETCODE_Success) &&
		(Module.m_VariablesCount <= 0))
	{
		GenRet = GENRETCODE_NotAvailable;
		if (GenRet != GENRETCODE_Success)
		{
			GetText_GENRETCODE(GenRet,Hstr,sizeof(Hstr));
			printf("   ERROR <%s>. No variables configured. Application terminated !!!!\n", Hstr);
		}
	}

	i = 0;
	while ((GenRet == GENRETCODE_Success) &&
		   (i < Module.m_VariablesCount))
	{
		GenRet = GetModuleVariableInfo(
					hAdapter,
					Module.m_AddressOrSnr,
					i,
					&Module.m_Variables[i].m_VariableType,
					Module.m_Variables[i].m_Description, sizeof(Module.m_Variables[i].m_Description),
					&Module.m_Variables[i].m_DataType,
					&Module.m_Variables[i].m_Fieldlength,
					&Module.m_Variables[i].m_Precision,
					Module.m_Variables[i].m_Unit, sizeof(Module.m_Variables[i].m_Unit),
					&Module.m_Variables[i].m_Mode);
		if (GenRet != GENRETCODE_Success)
		{
			GetText_GENRETCODE(GenRet,Hstr,sizeof(Hstr));
			printf("   ERROR <%s> @GetModuleVariableInfo. Application terminated !!!!\n", Hstr);
		}
		else
		{
			printf("   INFO from GetModuleVariableInfo VarIndex%d\n",i);
			printf("      VariableType=%d\n",Module.m_Variables[i].m_VariableType);
			printf("      Description=%s\n",Module.m_Variables[i].m_Description);
			printf("      DataType=%d\n",Module.m_Variables[i].m_DataType);
			printf("      Fieldlength=%d\n",Module.m_Variables[i].m_Fieldlength);
			printf("      Precision=%d\n",Module.m_Variables[i].m_Precision);
			printf("      Unit=%s\n",Module.m_Variables[i].m_Unit);
			printf("      Mode=%d\n",Module.m_Variables[i].m_Mode);
		}

		i++;
	}

	// read values
	i = 0;
	while ((GenRet == GENRETCODE_Success) &&
		   (i < Module.m_VariablesCount))
	{
		GenRet = GetVariable(
					hAdapter,
					Module.m_AddressOrSnr,
					i,
					SELECTIONCODE_NotDefined,
					Module.m_Variables[i].m_DataType,
					&DataBuffer.d_uint8);
		if (GenRet != GENRETCODE_Success)
		{
			GetText_GENRETCODE(GenRet,Hstr,sizeof(Hstr));
			printf("   ERROR <%s> @GetVariable. Application terminated !!!!\n", Hstr);
		}
		else
		{
			printf("      VALUE of VarIndex%d: ", i);
			switch (Module.m_Variables[i].m_DataType)
			{
				case DATATYPECODE_Boolean:		DataValue = (DataBuffer.d_uint8 != 0) ? 1.0 : 0.0;														break;

				case DATATYPECODE_SInt8:		DataValue = DataBuffer.d_int8;				DataValue /= pow(10.0,Module.m_Variables[i].m_Precision);	break;
				case DATATYPECODE_USInt8:		DataValue = DataBuffer.d_uint8;				DataValue /= pow(10.0,Module.m_Variables[i].m_Precision);	break;
				case DATATYPECODE_BitSet8:		DataValue = DataBuffer.d_uint8;																			break;

				case DATATYPECODE_SInt16:		DataValue = DataBuffer.d_int16;				DataValue /= pow(10.0,Module.m_Variables[i].m_Precision);	break;
				case DATATYPECODE_USInt16:		DataValue = DataBuffer.d_uint16;			DataValue /= pow(10.0,Module.m_Variables[i].m_Precision);	break;
				case DATATYPECODE_BitSet16:		DataValue = DataBuffer.d_uint16;																		break;

				case DATATYPECODE_SInt32:		DataValue = DataBuffer.d_int32;				DataValue /= pow(10.0,Module.m_Variables[i].m_Precision);	break;
				case DATATYPECODE_USInt32:		DataValue = DataBuffer.d_uint32;			DataValue /= pow(10.0,Module.m_Variables[i].m_Precision);	break;
				case DATATYPECODE_BitSet32:		DataValue = DataBuffer.d_uint32;																		break;
				case DATATYPECODE_Float:		DataValue = DataBuffer.d_float;																			break;

				case DATATYPECODE_SInt64:		DataValue = (double)DataBuffer.d_int64;		DataValue /= pow(10.0,Module.m_Variables[i].m_Precision);	break;
				case DATATYPECODE_USInt64:		DataValue = (double)DataBuffer.d_uint64;	DataValue /= pow(10.0,Module.m_Variables[i].m_Precision);	break;
				case DATATYPECODE_BitSet64:		DataValue = (double)DataBuffer.d_uint64;																break;
				case DATATYPECODE_Double:		DataValue = DataBuffer.d_double;																		break;

				default:						GenRet = GENRETCODE_NotAvailable;																		break;
			}
			if (GenRet != GENRETCODE_Success)
				printf("????????\n");
			else
				printf("%lf\n", DataValue);
		}

		i++;
	}

	// read values @ once
	if (GenRet == GENRETCODE_Success)
	{
		// prepare TypeArray
		for (i=0;i<Module.m_VariablesCount;i++)
			DataTypeCodeArray[i] = Module.m_Variables[i].m_DataType;
		// communicate...
		GenRet = GetVariablesAll(
					hAdapter,
					Module.m_AddressOrSnr,
					Module.m_VariablesCount,
					DataTypeCodeArray,
					DataValueArray);
		// output infos
		if (GenRet != GENRETCODE_Success)
		{
			GetText_GENRETCODE(GenRet,Hstr,sizeof(Hstr));
			printf("   ERROR <%s> @GetVariablesAll. Application terminated !!!!\n", Hstr);
		}
		else
		{
			for (i=0;i<Module.m_VariablesCount;i++)
			{
				printf("      VALUE of VarIndex%d: ", i);
				DataValue = DataValueArray[i];
				switch (Module.m_Variables[i].m_DataType)
				{
					case DATATYPECODE_Boolean:		DataValue = (DataValue != 0.0) ? 1.0 : 0.0;					break;

					case DATATYPECODE_SInt8:
					case DATATYPECODE_USInt8:
					case DATATYPECODE_SInt16:
					case DATATYPECODE_USInt16:
					case DATATYPECODE_SInt32:
					case DATATYPECODE_USInt32:
					case DATATYPECODE_SInt64:
					case DATATYPECODE_USInt64:		DataValue /= pow(10.0,Module.m_Variables[i].m_Precision);	break;

					case DATATYPECODE_BitSet8:
					case DATATYPECODE_BitSet16:
					case DATATYPECODE_BitSet32:
					case DATATYPECODE_BitSet64:
					case DATATYPECODE_Float:
					case DATATYPECODE_Double:																	break;

					default:						GenRet = GENRETCODE_NotAvailable;							break;
				}
				if (GenRet != GENRETCODE_Success)
					printf("????????\n");
				else
					printf("%lf\n", DataValue);
			}
		}

		i++;
	}


#ifdef DO_WRITE_TEST
//	#define FILE_NAME "abc_c.gcf"
//	#define FILE_INDEX FLASHFILEINDEXCODE_CFirst
	#define FILE_NAME "abc.gcf"
	#define FILE_INDEX FLASHFILEINDEXCODE_I

	if (GenRet == GENRETCODE_Success)
		GenRet = Register_CallbackHandler_Progress(
					hAdapter,
					CallbackHandler_Progress);

	if (GenRet == GENRETCODE_Success)
	{
#ifdef WIN32
		strcpy(FileName,"c:\\" FILE_NAME);
#else
		strcpy(FileName,"/home/user1/" FILE_NAME);
#endif
		GenRet = SendParameterFile(
					hAdapter,
					Module.m_AddressOrSnr,
					FileName, sizeof(FileName),
					FILE_INDEX);
		if (GenRet != GENRETCODE_Success)
		{
			GetText_GENRETCODE(GenRet,Hstr,sizeof(Hstr));
			printf("   ERROR <%s> @SendParameterFile. Application terminated !!!!\n", Hstr);
		}
		else
			printf("   INFO @SendParameterFile: Successfully done. Really used filename is <%s> !!!!\n", FileName);
	}

	Register_CallbackHandler_Progress(
			hAdapter,
			0);

#endif

	CloseAllPorts(hAdapter);

	DestroyAllAdapters();

	return 0;
}

//******************************************************************************************************************************************************
