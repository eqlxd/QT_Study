
//////////////////////////////////////////////////////////////////////////////////////////
/*																						*/
/*   WARNING: Do not add to, delete from, or otherwise modify the contents				*/
/*            of this header file !!!!!!!!!!!!!!!!!!!!!!!!!								*/
/*																						*/
/*   COPYRIGHT    : (C) 2019 by Gantner instruments, all rights reserved !				*/
/*																						*/
/*------------------ INFO --------------------------------------------------------------*/
/*																						*/
/*	PROJECT      : GInsRpcUtility Library												*/
/*	FILE NAME    : GInsRpcUtilityLib.h													*/
/*																						*/
/*	DATE         : 2019-08-09															*/
/*																						*/
/*																						*/
/*------------------ GENERAL INSTRUCTIONS ----------------------------------------------*/
/*																						*/
/*	C-Header-File to use with DLL.														*/
/*																						*/
/*	DLL DESCRIPTION:																	*/
/*																						*/
/*																						*/
/*	ATTENTION:	All strings need to have a terminating 0 at the end !!!!				*/
/*																						*/
/*------------------ CHANGES -----------------------------------------------------------*/
/*																						*/
/*  V1.0.0.0   First Implementation;													*/
//////////////////////////////////////////////////////////////////////////////////////////
/*--------------------------------------------------------------------------------------*/

#pragma once

#ifdef __cplusplus
extern  "C" {
#endif

#ifdef _WIN32
#ifdef GINS_RPC_UTILITY_EXPORTS
#define GINS_RPC_UTILITY_API __declspec(dllexport)
#else
#define GINS_RPC_UTILITY_API __declspec(dllimport)
#endif

#define CALLINGCONVENTION_CD __cdecl
#define CALLINGCONVENTION_SC __stdcall

#ifndef CALLBACK
#define CALLBACK __stdcall
#endif
#else
#define GINS_RPC_UTILITY_API __attribute__((visibility("default")))
#define CALLINGCONVENTION_CD
#define CALLINGCONVENTION_SC
#endif

#include "stddef.h"
#include "stdint.h"

#define RPC_VALUE	int32_t
#define RPC_CONN	int32_t

#define GIRPC_OK		0
#define GIRPC_ERROR		-1

enum GInsRpcValueType
{
	RPC_TypeInvalid,
	RPC_TypeBoolean,
	RPC_TypeInt,
	RPC_TypeFloat,
	RPC_TypeDouble,
	RPC_TypeString,
	RPC_TypeDateTime,
	RPC_TypeBase64,
	RPC_TypeArray,
	RPC_TypeStruct,
	RPC_TypeInt64
};

#define RPC_XML_TAG_SET1			0
#define RPC_XML_TAG_SET2			1
#define RPC_JSON_TAG_SET1			2
#define RPC_JSON_TAG_SET1_PRETTY	3

/**
 * @brief	Connect to an RPC server
 *
 * @param 		  	url					URL of the server.
 * @param 		  	port				TCP port.
 * @param 		  	timeout				Timeout in milli seconds.
 * @param [out]		connectionHandle	The result connection handle.
 * @param [in,out]	errMsg				If non-null, message describing the error.
 * @param 		  	errMsgLen			Length of the error message.
 *
 * @returns	success.
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_Connect(const char* url, uint32_t port, uint32_t timeout, RPC_CONN* connectionHandle, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_Connect(const char* url, uint32_t port, uint32_t timeout, RPC_CONN* connectionHandle, char* errMsg, size_t errMsgLen);

/**
 * @brief	Check if login is required on connection
 *
 * @param 		  	connectionHandle	Handle of the connection.
 * @param 		  	timeout				The timeout.
 * @param [in,out]	loginRequired   	If non-null, true if login required.
 * @param [in,out]	errMsg				If non-null, message describing the error.
 * @param 		  	errMsgLen			Length of the error message.
 *
 * @returns	success
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_CheckIsLoginRequired(RPC_CONN connectionHandle, uint32_t timeout, int32_t* loginRequired, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_CheckIsLoginRequired(RPC_CONN connectionHandle, uint32_t timeout, int32_t* loginRequired, char* errMsg, size_t errMsgLen);
/**
 * @brief	Login on the connection
 *
 * @param 		  	connectionHandle	The connection.
 * @param 		  	instance			The instance.
 * @param 		  	username			The username.
 * @param 		  	password			The password.
 * @param 		  	timeout				The timeout.
 * @param [in,out]	errMsg				If non-null, message describing the error.
 * @param 		  	errMsgLen			Length of the error message.
 *
 * @returns	success.
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_Login(RPC_CONN connectionHandle, const char* instance, const char* username, const char* password, uint32_t timeout, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_Login(RPC_CONN connectionHandle, const char* instance, const char* username, const char* password, uint32_t timeout, char* errMsg, size_t errMsgLen);

/**
* @brief	Read stored login token
*
* @param 		  	connectionHandle	The connection.
* @param[in, out]	AccessToken			If non - null, Stored access token
* @param 		  	AccessTokenLen		Length of stored access token
* @param[in, out] 	RefreshToken		If non - null, Stored refresh token
* @param 		  	RefreshTokenLen		Length of stored refresh token
* @param[in, out]	errMsg				If non - null, message describing the error.
* @param 		  	errMsgLen			Length of the error message.
*
* @returns	success.
*/
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_GetLoginToken(RPC_CONN connectionHandle, char* AccessToken, size_t AccessTokenLen, char* RefreshToken, size_t RefreshTokenLen, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_GetLoginToken(RPC_CONN connectionHandle, char* AccessToken, size_t AccessTokenLen, char* RefreshToken, size_t RefreshTokenLen, char* errMsg, size_t errMsgLen);

/**
 * @brief	Close connection to a RPC server
 *
 * @param	connection	The connection handle.
 *
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_Disconnect(RPC_CONN connectionHandle);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_Disconnect(RPC_CONN connectionHandle);

/**
 * @brief	Create a new invalid RPC value
 *
 * @param [out]		valueHandle	Result value handle.
 * @param [in,out]	errMsg	   	If non-null, message describing the error.
 * @param 		  	errMsgLen  	Length of the error message.
 *
 * @returns	success
 */

GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_NewRpcValue(RPC_VALUE* valueHandle, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_NewRpcValue(RPC_VALUE* valueHandle, char* errMsg, size_t errMsgLen);

/**
 * @brief	Delete an RPC value
 *
 * @param	value	The value.
 *
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_CloseRpcValue(RPC_VALUE value);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_CloseRpcValue(RPC_VALUE value);

/**
 * @brief	Load a RPC value from file
 *
 * @param 		  	fullFilePath	Full pathname of the RPC file.
 * @param [out]		valueHandle 	Result value handle.
 * @param [in,out]	errMsg			If non-null, message describing the error.
 * @param 		  	errMsgLen   	Length of the error message.
 *
 * @returns	success
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_LoadRpcValue(const char* fullFilePath, RPC_VALUE* valueHandle, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_LoadRpcValue(const char* fullFilePath, RPC_VALUE* valueHandle, char* errMsg, size_t errMsgLen);

/**
 * @brief	Save a RPC value to file
 *
 * @param 		  	value			The value.
 * @param 		  	fullFilePath	Full pathname of the file.
 * @param 		  	tagSet			The tag-set for serialisation
 * @param [in,out]	errMsg			If non-null, message describing the error.
 * @param 		  	errMsgLen   	Length of the error message.
 *
 * @returns	success
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_SaveRpcValue(RPC_VALUE value, const char* fullFilePath, uint32_t tagSet, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_SaveRpcValue(RPC_VALUE value, const char* fullFilePath, uint32_t tagSet, char* errMsg, size_t errMsgLen);

/**
 * @brief	Execute a RPC method on an RPC server
 *
 * @param 		  	connection			The connection handle.
 * @param 		  	methodName			Name of the method.
 * @param 		  	timeoutMs			The timeout in milliseconds.
 * @param 		  	params				RPC value handle to a params value or -1 if not needed.
 * @param 		  	results				RPC value handle to an existing value if >=0 or to a new one if <0
 * @param 		  	checkReturnState	True to check return state (otherwise return state is part of result value)
 * @param [in,out]	errMsg				If non-null, message describing the error.
 * @param 		  	errMsgLen			Length of the error message.
 *
 * @returns	success
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_ExecuteRpcMethod(RPC_CONN connection, const char* methodName, uint32_t timeoutMs, RPC_VALUE* params, RPC_VALUE* results, int32_t checkReturnState, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_ExecuteRpcMethod(RPC_CONN connection, const char* methodName, uint32_t timeoutMs, RPC_VALUE* params, RPC_VALUE* results, int32_t checkReturnState, char* errMsg, size_t errMsgLen);

/**
 * @brief	Get properties for a RPC method
 *
 * @param 		  	connection	The connection handle.
 * @param 		  	methodName	Name of the method.
 * @param 		  	timeoutMs 	The timeout in milliseconds.
 * @param 		  	params	  	RPC value handle to an existing value if >=0 or to a new one if <0
 * @param [in,out]	errMsg	  	If non-null, message describing the error.
 * @param 		  	errMsgLen 	Length of the error message.
 *
 * @returns	success
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_GetRpcMethodParams(RPC_CONN connection, const char* methodName, uint32_t timeoutMs, RPC_VALUE* params, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_GetRpcMethodParams(RPC_CONN connection, const char* methodName, uint32_t timeoutMs, RPC_VALUE* params, char* errMsg, size_t errMsgLen);

/**
 * @brief	Get the type of an rpc value
 *
 * @param 		  	value	 	The value to read from
 * @param 		  	member   	The member or member path to read (ignored if NULL)
 * @param 		  	index	 	Zero-based index of an array value (if array type)
 * @param [out]		type	 	The type result.
 * @param [in,out]	errMsg   	If non-null, message describing the error.
 * @param 		  	errMsgLen	Length of the error message.
 *
 * @returns success
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_RpcValue_GetType(RPC_VALUE value, const char* member, int32_t index, GInsRpcValueType* type, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_RpcValue_GetType(RPC_VALUE value, const char* member, int32_t index, GInsRpcValueType* type, char* errMsg, size_t errMsgLen);

/**
 * @brief	Get the size of a RPC value
 *
 * @param 		  	value	 	The value to read from
 * @param 		  	member   	The member or member path to read (ignored if NULL)
 * @param 		  	index	 	Zero-based index of an array value (if array type)
 * @param [out]		size	 	The size result.
 * @param [in,out]	errMsg   	If non-null, message describing the error.
 * @param 		  	errMsgLen	Length of the error message.
 *
 * @returns	success
 * 			
 * Depending on the type of the value, different kinds of size are returned.
 * A string or binary value will return the number of characters, 
 * the size of an array time is the number of array elements 
 * and the size of a struct type is the number of struct members.
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_RpcValue_GetSize(RPC_VALUE value, const char* member, int32_t index, uint64_t* size, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_RpcValue_GetSize(RPC_VALUE value, const char* member, int32_t index, uint64_t* size, char* errMsg, size_t errMsgLen);

/**
 * @brief	List members as a new RPC value
 *
 * @param [in]	  	value	 	The value to read from
 * @param [in]	  	member   	The member or member path to read (ignored if NULL)
 * @param [in]	  	index	 	Zero-based index of an array value (if array type)
 * @param [in,out]	result   	RPC value handle to an existing value if >=0 or to a new one if <0
 * @param [in,out]	errMsg   	If non-null, message describing the error.
 * @param 		  	errMsgLen	Length of the error message.
 *
 * @returns	success.
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_RpcValue_GetMembers(RPC_VALUE value, const char* member, int32_t index, RPC_VALUE* result, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_RpcValue_GetMembers(RPC_VALUE value, const char* member, int32_t index, RPC_VALUE* result, char* errMsg, size_t errMsgLen);

/**
 * @brief	Get RPC value to a new RPC value
 *
 * @param [in]	  	value	 	The value to read from
 * @param [in]	  	member   	The member or member path to read (ignored if NULL)
 * @param [in]	  	index	 	Zero-based index of an array value (if array type)
 * @param [in,out]	result   	RPC value handle to an existing value if >=0 or to a new one if <0
 * @param [out]		errMsg   	If non-null, message describing the error.
 * @param [in]	  	errMsgLen	Length of the error message.
 *
 * @returns	success.
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_RpcValue_GetRpcValue(RPC_VALUE value, const char* member, int32_t index, RPC_VALUE* result, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_RpcValue_GetRpcValue(RPC_VALUE value, const char* member, int32_t index, RPC_VALUE* result, char* errMsg, size_t errMsgLen);

/**
 * @brief	Calculate the size of the serialized value
 *
 * @param 		  	value	 	The value to read from.
 * @param 		  	member   	The member or member path to read (ignored if NULL).
 * @param 		  	index	 	Zero-based index of an array value (if array type).
 * @param [in,out]	size	 	If non-null, the size.
 * @param 		  	tagSet   	The tag-set for the serialisation.
 * @param [in,out]	errMsg   	If non-null, message describing the error.
 * @param 		  	errMsgLen	Length of the error message.
 *
 * @returns	success
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_RpcValue_GetRpcValue_Size(RPC_VALUE value, const char* member, int32_t index, size_t* size, uint32_t tagSet, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_RpcValue_GetRpcValue_Size(RPC_VALUE value, const char* member, int32_t index, size_t* size, uint32_t tagSet, char* errMsg, size_t errMsgLen);

/**
 * @brief	Serialize the RPC value to string
 *
 * @param 		  	value	 	The value to read from.
 * @param 		  	member   	The member or member path to read (ignored if NULL).
 * @param 		  	index	 	Zero-based index of an array value (if array type).
 * @param [out]	  	result   	The result buffer where the serialized value is copied to.
 * @param 		  	resultLen	The capacity of the result buffer.
 * @param 		  	tagSet   	The tag-set for the serialisation.
 * @param [in,out]	errMsg   	If non-null, message describing the error.
 * @param 		  	errMsgLen	Length of the error message.
 *
 * @returns	A CALLINGCONVENTION_CD.
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_RpcValue_GetRpcValue_String(RPC_VALUE value, const char* member, int32_t index, char* result, size_t resultLen, uint32_t tagSet, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_RpcValue_GetRpcValue_String(RPC_VALUE value, const char* member, int32_t index, char* result, size_t resultLen, uint32_t tagSet, char* errMsg, size_t errMsgLen);

/**
 * @brief	Get string value out of a RPC value
 *
 * @param 		  	value	 	The value to read from.
 * @param 		  	member   	The member or member path to read (ignored if NULL).
 * @param 		  	index	 	Zero-based index of an array value (if array type).
 * @param [out]	  	result   	The result buffer.
 * @param 		  	resultLen	The Capacity of the result buffer.
 * @param [in,out]	errMsg   	If non-null, message describing the error.
 * @param 		  	errMsgLen	Length of the error message.
 *
 * @returns	success
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_RpcValue_GetString(RPC_VALUE value, const char* member, int32_t index, char* result, size_t resultLen, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_RpcValue_GetString(RPC_VALUE value, const char* member, int32_t index, char* result, size_t resultLen, char* errMsg, size_t errMsgLen);

/**
 * @brief	Get binary data out of a RPC value
 *
 * @param 		  	value	 	The value to read from.
 * @param 		  	member   	The member or member path to read (ignored if NULL).
 * @param 		  	index	 	Zero-based index of an array value (if array type).
 * @param [out]	  	result   	The result buffer.
 * @param 		  	resultLen	The Capacity of the result buffer.
 * @param [in,out]	errMsg   	If non-null, message describing the error.
 * @param 		  	errMsgLen	Length of the error message.
 *
 * @returns	success
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_RpcValue_GetBinaryData(RPC_VALUE value, const char* member, int32_t index, char* result, size_t resultLen, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_RpcValue_GetBinaryData(RPC_VALUE value, const char* member, int32_t index, char* result, size_t resultLen, char* errMsg, size_t errMsgLen);

/**
 * @brief	Get boolean value out of a RPC value
 *
 * @param 		  	value	 	The value to read from.
 * @param 		  	member   	The member or member path to read (ignored if NULL).
 * @param 		  	index	 	Zero-based index of an array value (if array type).
 * @param [out]	  	result   	The result value
 * @param [in,out]	errMsg   	If non-null, message describing the error.
 * @param 		  	errMsgLen	Length of the error message.
 *
 * @returns	success
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_RpcValue_GetBoolean(RPC_VALUE value, const char* member, int32_t index, bool* result, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_RpcValue_GetBoolean(RPC_VALUE value, const char* member, int32_t index, bool* result, char* errMsg, size_t errMsgLen);

/**
 * @brief	Get integer value out of a RPC value
 *
 * @param 		  	value	 	The value to read from.
 * @param 		  	member   	The member or member path to read (ignored if NULL).
 * @param 		  	index	 	Zero-based index of an array value (if array type).
 * @param [out]	  	result   	The result value
 * @param [in,out]	errMsg   	If non-null, message describing the error.
 * @param 		  	errMsgLen	Length of the error message.
 *
 * @returns	success
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_RpcValue_GetInt32(RPC_VALUE value, const char* member, int32_t index, int32_t* result, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_RpcValue_GetInt32(RPC_VALUE value, const char* member, int32_t index, int32_t* result, char* errMsg, size_t errMsgLen);

/**
 * @brief	Get large integer value out of a RPC value
 *
 * @param 		  	value	 	The value to read from.
 * @param 		  	member   	The member or member path to read (ignored if NULL).
 * @param 		  	index	 	Zero-based index of an array value (if array type).
 * @param [out]	  	result   	The result value
 * @param [in,out]	errMsg   	If non-null, message describing the error.
 * @param 		  	errMsgLen	Length of the error message.
 *
 * @returns	success
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_RpcValue_GetInt64(RPC_VALUE value, const char* member, int32_t index, int64_t* result, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_RpcValue_GetInt64(RPC_VALUE value, const char* member, int32_t index, int64_t* result, char* errMsg, size_t errMsgLen);

/**
 * @brief	Get float value out of a RPC value
 *
 * @param 		  	value	 	The value to read from.
 * @param 		  	member   	The member or member path to read (ignored if NULL).
 * @param 		  	index	 	Zero-based index of an array value (if array type).
 * @param [out]	  	result   	The result value
 * @param [in,out]	errMsg   	If non-null, message describing the error.
 * @param 		  	errMsgLen	Length of the error message.
 *
 * @returns	success
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_RpcValue_GetFloat(RPC_VALUE value, const char* member, int32_t index, float* result, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_RpcValue_GetFloat(RPC_VALUE value, const char* member, int32_t index, float* result, char* errMsg, size_t errMsgLen);

/**
 * @brief	Get double value out of a RPC value
 *
 * @param 		  	value	 	The value to read from.
 * @param 		  	member   	The member or member path to read (ignored if NULL).
 * @param 		  	index	 	Zero-based index of an array value (if array type).
 * @param [out]	  	result   	The result value
 * @param [in,out]	errMsg   	If non-null, message describing the error.
 * @param 		  	errMsgLen	Length of the error message.
 *
 * @returns	success
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_RpcValue_GetDouble(RPC_VALUE value, const char* member, int32_t index, double* result, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_RpcValue_GetDouble(RPC_VALUE value, const char* member, int32_t index, double* result, char* errMsg, size_t errMsgLen);

/**
 * @brief	Write RPC value to a RPC value
 *
 * @param 			dest		The value to write to.
 * @param 			member		The member or member path to write (ignored if NULL).
 * @param 			index		Zero-based index of an array value (if array type).
 * @param 			value		The value to be written.
 * @param [in,out]	errMsg   	If non-null, message describing the error.
 * @param 		  	errMsgLen	Length of the error message.
 *
 * @returns	success
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_RpcValue_SetRpcValue(RPC_VALUE dest, const char* member, int32_t index, RPC_VALUE value, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_RpcValue_SetRpcValue(RPC_VALUE dest, const char* member, int32_t index, RPC_VALUE value, char* errMsg, size_t errMsgLen);

/**
 * @brief	Write RPC value string to a RPC value
 *
 * @param 			dest		The value to write to.
 * @param 			member		The member or member path to write (ignored if NULL).
 * @param 			index		Zero-based index of an array value (if array type).
 * @param 			value		0 terminated XML or Json string.
 * @param [in,out]	errMsg   	If non-null, message describing the error.
 * @param 		  	errMsgLen	Length of the error message.
 *
 * @returns	success
 *
 * The value must be a valid XML or Json string!
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_RpcValue_SetRpcValue_String(RPC_VALUE dest, const char* member, int32_t index, const char* value, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_RpcValue_SetRpcValue_String(RPC_VALUE dest, const char* member, int32_t index, const char* value, char* errMsg, size_t errMsgLen);

/**
 * @brief	Write a string to a RPC value
 *
 * @param 			dest		The value to write to.
 * @param 			member		The member or member path to write (ignored if NULL).
 * @param 			index		Zero-based index of an array value (if array type).
 * @param 			value		0 terminated string to be written.
 * @param [in,out]	errMsg   	If non-null, message describing the error.
 * @param 		  	errMsgLen	Length of the error message.
 *
 * @returns	success
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_RpcValue_SetString(RPC_VALUE dest, const char* member, int32_t index,const char* value, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_RpcValue_SetString(RPC_VALUE dest, const char* member, int32_t index,const char* value, char* errMsg, size_t errMsgLen);

/**
 * @brief	Write binary data to a RPC value.
 *
 * @param 			dest		The value to write to.
 * @param 			member		The member or member path to write (ignored if NULL).
 * @param 			index		Zero-based index of an array value (if array type).
 * @param 			value		Pointer to binary data to be written.
 * @param 			valueSize	Length of data to be written.
 * @param [in,out]	errMsg   	If non-null, message describing the error.
 * @param 		  	errMsgLen	Length of the error message.
 * @return
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_RpcValue_SetBinaryData(RPC_VALUE dest, const char* member, int32_t index,const char* value,size_t valueSize, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_RpcValue_SetBinaryData(RPC_VALUE dest, const char* member, int32_t index, const char* value, size_t valueSize, char* errMsg, size_t errMsgLen);

/**
 * @brief	Write boolean value to a RPC value.
 *
 * @param 			dest		The value to write to.
 * @param 			member		The member or member path to write (ignored if NULL).
 * @param 			index		Zero-based index of an array value (if array type).
 * @param 			value		Value to be written.
 * @param [in,out]	errMsg   	If non-null, message describing the error.
 * @param 		  	errMsgLen	Length of the error message.
 *
 * @returns	success
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_RpcValue_SetBoolean(RPC_VALUE dest, const char* member, int32_t index, bool value, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_RpcValue_SetBoolean(RPC_VALUE dest, const char* member, int32_t index, bool value, char* errMsg, size_t errMsgLen);

/**
 * @brief	Write integer value to a RPC value.
 *
 * @param 			dest		The value to write to.
 * @param 			member		The member or member path to write (ignored if NULL).
 * @param 			index		Zero-based index of an array value (if array type).
 * @param 			value		Value to be written.
 * @param [in,out]	errMsg   	If non-null, message describing the error.
 * @param 		  	errMsgLen	Length of the error message.
 *
 * @returns	success
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_RpcValue_SetInt32(RPC_VALUE dest, const char* member, int32_t index, int32_t value, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_RpcValue_SetInt32(RPC_VALUE dest, const char* member, int32_t index, int32_t value, char* errMsg, size_t errMsgLen);

/**
 * @brief	Write long integer value to a RPC value.
 *
 * @param 			dest		The value to write to.
 * @param 			member		The member or member path to write (ignored if NULL).
 * @param 			index		Zero-based index of an array value (if array type).
 * @param 			value		Value to be written.
 * @param [in,out]	errMsg   	If non-null, message describing the error.
 * @param 		  	errMsgLen	Length of the error message.
 *
 * @returns	success
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_RpcValue_SetInt64(RPC_VALUE dest, const char* member, int32_t index, int64_t value, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_RpcValue_SetInt64(RPC_VALUE dest, const char* member, int32_t index, int64_t valuet, char* errMsg, size_t errMsgLen);

/**
 * @brief	Write float value to a RPC value.
 *
 * @param 			dest		The value to write to.
 * @param 			member		The member or member path to write (ignored if NULL).
 * @param 			index		Zero-based index of an array value (if array type).
 * @param 			value		Value to be written.
 * @param [in,out]	errMsg   	If non-null, message describing the error.
 * @param 		  	errMsgLen	Length of the error message.
 *
 * @return
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_RpcValue_SetFloat(RPC_VALUE dest, const char* member, int32_t index, float value, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_RpcValue_SetFloat(RPC_VALUE dest, const char* member, int32_t index, float value, char* errMsg, size_t errMsgLen);

/**
 * @brief	Write double value to a RPC value.
 *
 * @param 			dest		The value to write to.
 * @param 			member		The member or member path to write (ignored if NULL).
 * @param 			index		Zero-based index of an array value (if array type).
 * @param 			value		Value to be written.
 * @param [in,out]	errMsg   	If non-null, message describing the error.
 * @param 		  	errMsgLen	Length of the error message.
 *
 * @returns	success
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_RpcValue_SetDouble(RPC_VALUE dest, const char* member, int32_t index, double value, char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_RpcValue_SetDouble(RPC_VALUE dest, const char* member, int32_t index, double value, char* errMsg, size_t errMsgLen);

/**
 * @brief	Clear all RPC Connections
 *
 * @param [in,out]	errMsg   	If non-null, message describing the error.
 * @param 		  	errMsgLen	Length of the error message.
 *
 * @returns	success
 *
 * In addition to close a connection directly, this function can be used to close all connections opened by this library instance.
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_ClearConnections(char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_ClearConnections(char* errMsg, size_t errMsgLen);

/**
 * @brief	Clear all RPC Values
 *
 * @param [in,out]	errMsg   	If non-null, message describing the error.
 * @param 		  	errMsgLen	Length of the error message.
 *
 * @returns	success
 *
 * In addition to delete a RPC value directly, this function can be used to delete all allocated RPC values by this library instance.
 */
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_CD _CD_GInsRpcUtil_ClearValues(char* errMsg, size_t errMsgLen);
GINS_RPC_UTILITY_API int32_t CALLINGCONVENTION_SC _SC_GInsRpcUtil_ClearValues(char* errMsg, size_t errMsgLen);

#ifdef __cplusplus
}
#endif
