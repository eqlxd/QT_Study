/*
 * OleTime.h
 *
 *  Created on: Nov 28, 2016
 *      Author: user1
 */

#ifndef IMPL_TIME_GINSTIME_H_
#define IMPL_TIME_GINSTIME_H_

#include <string.h>
#include <stdbool.h>
#include <time.h>
#include "ginstypes.h"
#include "GInsDataGlobals.h"

#ifdef __cplusplus
extern "C"
{
#endif

#include "ginstypes.h"

// ----------- OleTime functions
GINSDATA_API	TDCTime		CALL ga_GetDCTimeFromOLETime(TOleTime *OLETime, bool FullSeconds);
GINSDATA_API	TLongTime	CALL ga_GetDCTimeNSFromEpochTimeMs(uint64_t *EpochTimeMs, bool FullSeconds);
GINSDATA_API	TLongTime	CALL ga_GetDCTimeNSFromOLETime(TOleTime *OLETime);
GINSDATA_API	TOleTime	CALL ga_GetOleTimeFromDCTime(TDCTime *DCTime);
GINSDATA_API	TOleTime	CALL ga_GetOleTimeFromDCTime_NS(TLongTime *AbsTime);
GINSDATA_API	uint64_t	CALL ga_GetEpochTimeMsFromDCTime_NS(TLongTime *AbsTime);
GINSDATA_API	bool		CALL ga_DateTimeToOleTime(TDateTime DateTime, TOleTime *OleTime);
GINSDATA_API	bool		CALL ga_OleTimeToDateTime(TOleTime OleTime, TDateTime *DateTime);
GINSDATA_API	TOleTime	CALL ga_TimeStruct2OLETime(const struct tm *TimeStruct);
GINSDATA_API	bool		CALL ga_OLETime2TimeStruct(double OLETime, struct tm* TimeStruct, double *uSeconds);
GINSDATA_API	bool		CALL ga_OLETime2TimeStructExt(double OLETime,bool toLocalTime,struct tm* TimeStruct, double* uSeconds);
GINSDATA_API	void		CALL ga_ReplaceTimeOleTime(TOleTime *OleTime, TOleTime NewTime);
GINSDATA_API	void		CALL ga_ReplaceDateOleTime(TOleTime *OleTime, TOleTime NewDate);
GINSDATA_API	bool		CALL ga_DateTimeToStr(TDateTime DateTime, char *String, bool WithMS);
GINSDATA_API	bool		CALL ga_OleTimeToStr(TOleTime OleTime, char *String, bool WithMS, bool WithUS);
GINSDATA_API	int32_t		CALL ga_OleTimeToWeekDay(TOleTime OleTime);
GINSDATA_API	bool		CALL ga_StrToDateTime(char *String, TDateTime *DateTime, bool withMS, bool withUS);
GINSDATA_API	bool		CALL ga_StrToOleTime(char *String, TOleTime *OleTime, bool withMS, bool withUS);
GINSDATA_API	TOleTime	CALL ga_GetOleTime_RTC(void);
GINSDATA_API 	TLongTime 	CALL ga_EpochTimeMs_RTC(void);
GINSDATA_API 	TLongTime 	CALL ga_DCTimeNS_RTC(void);
GINSDATA_API	bool		CALL ga_SetOleTime_RTC(TOleTime OleTime);
GINSDATA_API	TOleTime	CALL ga_RoundOleTimeToCompare(TOleTime OleTime);
//GINSDATA_API	TOleTime	CALL ga_GetOleTime_Buffered_RTC(void);
GINSDATA_API	void		CALL ga_SecondToStrTime(double Second, bool WithMS, bool WithUS, char *Result);
GINSDATA_API	TDateTime	CALL ga_TimeStruct2DateTime(const struct tm* TimeStruct);
GINSDATA_API	bool		CALL ga_DateTime2TimeStruct(TDateTime DateTime, struct tm* TimeStruct);
GINSDATA_API	double		CALL ga_GetOLETimeFromFileName(const char* fileNameCStr);
/**
* @brief Format dc timestamp to readable string
*
* @param timeStampDC	timestamp value
* @param formatStr		format string (strftime() + %%ms, %%us, %%ns for sub second parts)
* @param dest			destination c-string buffer
* @param destMaxSize	max size of destination
*
* @return minimum range as double
*
* for integer data types, the result also contains fixpoint
*
* Format String:
*
* 	A string containing format specifiers which will be replaced by the correct values according to the input timeStampDC.
* 	Valid format specifiers are:
*
*   - Standard format specifiers according strftime() (http://www.cplusplus.com/reference/ctime/strftime/)
*   - Special format specifiers for sub second parts: %%ms = milli seconds, %%us = micro seconds, %%ns = nano seconds
*   - %%d = Distributed clock time in nano seconds since 01.01.2000
*   - %%o = OLE2Time - decimal value containing days singe 01.01.1900
*   - %%e = EpochTime in milli seconds (since 01.01.1970
*
*/
GINSDATA_API	void 		CALL ga_ConvertDCSystemTimeToFormatString(uint64_t timeStampDC, const char* formatStr, char* dest, size_t destMaxSize);
GINSDATA_API	void 		CALL ga_ConvertDCSystemTimeToFormatString_PrecDec(uint64_t timeStampDC, const char* formatStr, char* dest, size_t destMaxSize, uint8_t precision, char decimalSeparator);
GINSDATA_API	void 		CALL ga_ConvertDCSystemTimeToFormatString_PrecDecLoc(uint64_t timeStampDC,bool useLocalTime,const char* formatStr, char* dest, size_t destMaxSize, uint8_t precision, char decimalSeparator);
GINSDATA_API	void 		CALL ga_ConvertDCSystemTimeToFileFormatTime(uint64_t timeStampDC,char* dest, size_t destMaxSize);

#ifdef __cplusplus
}
#endif

#endif /* IMPL_TIME_GINSTIME_H_ */
