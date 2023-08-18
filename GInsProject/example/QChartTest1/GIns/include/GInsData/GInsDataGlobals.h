/*
 * GInsDataGlobals.h
 *
 *  Created on: Jan 22, 2014
 *      Author: sls
 */

#ifndef GINSDATAGLOBALS_H_
#define GINSDATAGLOBALS_H_

#ifdef _MSC_VER
	#ifdef GINS_DATA_EXPORTS
	#define GINSDATA_API __declspec(dllexport)
	#else
	#define GINSDATA_API __declspec(dllimport)
	#endif

	#define CALL		 __stdcall
#else
	#ifndef GINSDATA_API
		#define GINSDATA_API __attribute__((visibility("default")))
	#endif
	#define CALL
#endif

#include "ginstypes.h"

#define		MAX_DATA_TRANSFER_BUFFER	3072

enum TFileArchiveInfoId
{
	GInsFileArchiveInfoID_MeasurementCount				= 0,
	GInsFileArchiveInfoID_SourceCount					= 1,
	GInsFileArchiveInfoID_DeviceCount					= 2,
	GInsFileArchiveInfoID_Measurement_MeasurementUUID	= 3,
	GInsFileArchiveInfoID_Measurement_MeasurementName	= 4,
	GInsFileArchiveInfoID_Measurement_SourceUUID		= 5,
	GInsFileArchiveInfoID_Measurement_SourceName		= 6,
	GInsFileArchiveInfoID_Measurement_DeviceUUID		= 7,
	GInsFileArchiveInfoID_Measurement_DeviceName		= 8,
	GInsFileArchiveInfoID_Measurement_DeviceSerialNr	= 9,
	GInsFileArchiveInfoID_Measurement_StartTimeDC		= 10,
	GInsFileArchiveInfoID_Measurement_EndTimeDC			= 11,
	GInsFileArchiveInfoID_Measurement_Variables			= 20,	// Get variable count from measurement and store variable list internally
	GInsFileArchiveInfoID_Measurement_Files				= 25,	// Get data file count from measurement and store file list internally
	GInsFileArchiveInfoID_Measurement_FileFormat		= 31,
	GInsFileArchiveInfoID_Source_SourceUUID				= 12,
	GInsFileArchiveInfoID_Source_SourceName				= 13,
	GInsFileArchiveInfoID_Source_DeviceUUID				= 14,
	GInsFileArchiveInfoID_Source_DeviceName				= 15,
	GInsFileArchiveInfoID_Source_DeviceSerialNr			= 16,
	GInsFileArchiveInfoID_Source_Variables				= 21,	// Get variable count from source and store variable list internally
	GInsFileArchiveInfoID_Source_Files					= 26,	// Get data file count from source and store file list internally
	GInsFileArchiveInfoID_Device_DeviceUUID				= 17,
	GInsFileArchiveInfoID_Device_DeviceName				= 18,
	GInsFileArchiveInfoID_Device_DeviceSerialNr			= 19,
	GInsFileArchiveInfoID_Device_Variables				= 22,	// Get variable count from device and store variable list internally
	GInsFileArchiveInfoID_Device_Files					= 27,	// Get data file count from device and store file list internally
	GInsFileArchiveInfoID_ClearHandle					= 100,
	GInsFileArchiveInfoID_VariableName					= 23,
	GInsFileArchiveInfoID_VariableUUID					= 24,
	GInsFileArchiveInfoID_FilePath						= 28,
	GInsFileArchiveInfoID_FileStartTime					= 29,	// Get time as us since 01.01.2000
	GInsFileArchiveInfoID_FileEndTime					= 30,	// Get time as us since 01.01.2000
	GInsFileArchiveInfoID_MeasurementSel				= 101	// Select measurement internally

	//....
};

enum THSPDataSourceInfoId
{
	GInsHSPDataSourceInfoID_SourceCount,
	GInsHSPDataSourceInfoID_SourceUUID,
	GInsHSPDataSourceInfoID_SourceType,
	GInsHSPDataSourceInfoID_SourceIndex,
	GInsHSPDataSourceInfoID_SourceDataRate,
	GInsHSPDataSourceInfoID_SourceSize,
	GInsHSPDataSourceInfoID_SourceName
};

typedef enum
{
	DataConverterType_None,
	DataConverterType_ByteSwap,
	DataConverterType_DataType,
	DataConverterType_DataType_Scaling,
	DataConverterType_ByteSwap_DataType,
	DataConverterType_ByteSwap_DataType_Scaling,
	DataConverterType_NotDefined
}TDataConverterType;

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * @brief convert from and to any supported data type
 *
 * @param src		Source data pointer
 * @param srcType	Source data pointer data type
 * @param dest		Destination data pointer
 * @param destType	Destination data pointer type
 * @param precision	Precision of variable (needed for integer fix point conversion)
 *
 * Variable precision is automatically used for fix point integer precision\n
 *
 * ATTETION:\n
 * Be sure that data pointer and size of data area are valid for the requested data type\n
 * No pointer or size check will be done!\n
 * 
 *
 */
GINSDATA_API void  CALL ga_ConvertValue2Value(const void *src,
							 TTransferFormat srcType,
							 void *dest,
							 TTransferFormat destType,
							 uint16_t precision);

GINSDATA_API void  CALL ga_ConvertValue2Value_Scaling(const void *src,
							 TTransferFormat srcType,
							 void *dest,
							 TTransferFormat destType,
							 uint16_t precision,
							 double ScalingFactor,
							 double ScalingOffset);
/**
 * @brief convert from any supported data type to dedicated pointer
 *
 * @param src		Source data pointer
 * @param srcType	Source data pointer data type
 * @param precision	Precision of variable (needed for integer fix point conversion)
 * @param dest		Destination variable pointer
 *
 * Variable precision is automatically used for fix point integer precision\n
 *
 * ATTETION:\n
 * Be sure that data pointer and size of data area are valid for the requested data type\n
 * No pointer or size check will be done!\n
 */
GINSDATA_API void CALL ga_ConvertToDouble(const void *src,
						TTransferFormat srcType,
						uint16_t precision,
						double *dest);

GINSDATA_API void CALL ga_ConvertToFloat(const void *src,
						TTransferFormat srcType,
						uint16_t precision,
						float *dest);

GINSDATA_API void CALL ga_ConvertToInt64(const void *src,
						TTransferFormat srcType,
						uint16_t precision,
						uint64_t *dest);

GINSDATA_API void CALL ga_ConvertToInt32(const void *src,
						TTransferFormat srcType,
						uint16_t precision,
						uint32_t *dest);

GINSDATA_API void CALL ga_ConvertToInt16(const void *src,
						TTransferFormat srcType,
						uint16_t precision,
						uint16_t *dest);

GINSDATA_API void CALL ga_ConvertToInt8(const void *src,
						TTransferFormat srcType,
						uint16_t precision,
						uint8_t *dest);

GINSDATA_API void CALL ga_ConvertFromDouble(void *dest,
						TTransferFormat destType,
						uint16_t precision,
						const double *src);

GINSDATA_API void CALL ga_ConvertFromFloat(void *dest,
						TTransferFormat destType,
						uint16_t precision,
						const float *src);

GINSDATA_API void CALL ga_ConvertFromInt64(void *dest,
						TTransferFormat destType,
						uint16_t precision,
						const uint64_t *src);

GINSDATA_API void CALL ga_ConvertFromInt32(void *dest,
						TTransferFormat destType,
						uint16_t precision,
						const uint32_t *src);

GINSDATA_API void CALL ga_ConvertFromInt16(void *dest,
						TTransferFormat destType,
						uint16_t precision,
						const uint16_t *src);

GINSDATA_API void CALL ga_ConvertFromInt8(void *dest,
						TTransferFormat destType,
						uint16_t precision,
						const uint8_t *src);
/**
 * @brief convert from and to any supported data type with scaling and non standard bit length
 *
 * @param Src			Source data pointer
 * @param SrcType		Source data pointer data type
 * @param SrcBitLen		Number of bit for source data type
 * @param Dest			Destination data pointer
 * @param DestType		Destination data pointer Type
 * @param DestBitLen	Number of bit for destination data type
 * @param scaleFactor	Scaling factor
 * @param scaleOffset	Scaling offset
 *
 *  This function also supports converting to e.g. 3 byte integer via custom bit length\n\n
 *
 *  Scaling is calculated like src * factor - offset
 *
 *  ATTETION:\n
 * 	Be sure that data pointer and size of data area are valid for the requested data type\n
 * 	No pointer or size check will be done!\n
 */

GINSDATA_API void CALL ga_ConvertValue2VarValue_Ext(const void *Src,
							 TTransferFormat SrcType,
							 int SrcBitLen,
							 void *Dest,
							 TTransferFormat DestType,
							 int DestBitLen,
							 double scaleFactor,
							 double scaleOffset);
/**
 * @brief convert from and to any supported data type with scaling and non standard bit length
 *
 * @param Src			Source data pointer
 * @param SrcType		Source data pointer data type
 * @param SrcBitLen		Number of bit for source data type
 * @param Dest			Destination data pointer
 * @param DestType		Destination data pointer Type
 * @param DestBitLen	Number of bit for destination data type
 * @param scaleFactor	Scaling factor
 * @param scaleOffset	Scaling offset
 *
 *  This function also supports converting to e.g. 3 byte integer via custom bit length\n\n
 *
 *  Scaling is calculated like (src - offset) / factor
 *
 *  ATTETION:\n
 * 	Be sure that data pointer and size of data area are valid for the requested data type\n
 * 	Not pointer or size check will be done!\n
 */

GINSDATA_API void CALL ga_ConvertVarValue2Value_Ext(const void *Src,
							 TTransferFormat SrcType,
							 int SrcBitLen,
							 void *Dest,
							 TTransferFormat DestType,
							 int DestBitLen,
							 double scaleFactor,
							 double scaleOffset);
/**
 * @brief get maximum range limit of given data format and precision
 *
 * @param fmt		data format
 * @param precision	fix point
 *
 * @return maximum range as double
 *
 * for integer data types, the result also contains fixpoint
 */
GINSDATA_API double CALL ga_TransferFormatToRangeMax(TTransferFormat fmt, uint16_t precision);
/**
 * @brief get minimum range limit of given data format and precision
 *
 * @param fmt		data format
 * @param precision	fix point
 *
 * @return minimum range as double
 *
 * for integer data types, the result also contains fixpoint
 */
GINSDATA_API double CALL ga_TransferFormatToRangeMin(TTransferFormat fmt, uint16_t precision);

#ifdef __cplusplus
}
#endif

#endif /* GINSDATAGLOBALS_H_ */
