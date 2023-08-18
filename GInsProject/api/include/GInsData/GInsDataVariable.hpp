/**
 * @file	GInsDataVariable
 * @author  sls <www.gantner-instruments.com>
 * @version 1.0
 *
 * @section DESCRIPTION
 *
 * Contains classes that represent variables in a Gantner Instruments system
 */
#pragma once

namespace GIns {
namespace Data { 

//ATTENTION: not thread save
/**
 * Get data type description
 */
extern "C" GINSDATA_API const char* CALL DataTypeToCString(TTransferFormat type);
/**
 * Get length of data type
 */
extern "C" GINSDATA_API size_t CALL DataTypeToByteLength(TTransferFormat type);
extern "C" GINSDATA_API const char* CALL DataDirectionToCString(TDataDirection direction);
extern "C" GINSDATA_API const char* CALL VariableKindToCString(TVarKindCasted kind);

extern "C" GINSDATA_API TTransferFormat CALL CStringToDataType(const char* str);
extern "C" GINSDATA_API TDataDirection CALL CStringToDataDirection(const char* str);
extern "C" GINSDATA_API TVarKindCasted CALL CStringToVariableKind(const char* str);

class IGInsVariable;
class IGInsDataHeader;
class IGInsDataSource;
/**
 * @section DESCRIPTION
 *
 * The IGInsVariable class represents a variable on a device or data source\n
 * It provides all required information to decode, encode or transfer variable data\n\n
 *
 * Use GIns::Data::IGInsDataHeader from a connected GIns::Data::IGInsDataSource or GIns::Data::IGInsDevice to get valid variable objects for this interface\n
 * Create new variables using one of the overloaded constructors and add them to a new GIns::Data::DataHeader to create own interface descriptions\n
 */
class IGInsVariable
{
public:
	/**
	 * Converts TransferFormat enumeration to a human readable string
	 *
	 * @param 	type	TransferFormat enumeration
	 * @return	data	format as std::string
	 */
	static std::string 		DataTypeToString(TTransferFormat type){
		GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());
		return DataTypeToCString(type);
	}
	/**
	 * Converts a DataDirection enumeration to a human readable string
	 * @param 	direction	DataDirection enumeration
	 * @return 	data		direction as string
	 */
	static std::string 		DataDirectionToString(TDataDirection direction){
		GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());
		return DataDirectionToCString(direction);
	}
	/**
	 * Converts a VariableKind enumeration to a human readable string
	 * @param 	kind		variable kind enumeration
	 * @return 	data		variable kind as string
	 */
	static std::string 		VariableKindToString(TVarKindCasted kind){
		GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());
		return VariableKindToCString(kind);
	}
	/**
	 * @brief Returns the input offset
	 *
	 * @return input byte offset
	 */
	virtual size_t CALL GetInputOffset() const = 0;
	/**
	 * @brief Returns the output offset
	 *
	 * @return output byte offset
	 */
	virtual size_t CALL GetOutputOffset() const = 0;
    /**
     * @brief Size of the variable data type in byte
     * @return size of value
     */
	virtual size_t CALL GetDataSize() const = 0;
    /**
     * @brief Returns the number of digits behind the comma
     * @return precision
     *
     * Important for fixed point calculation at integer data types
     */
	virtual uint16_t CALL GetPrecision() const = 0;
    /**
     * @brief Returns the number of digits to display
     * @return field length
     */
	virtual uint16_t CALL GetFieldLen() const = 0;
    /**
     * @brief Returns the variable name
     * @return variable name as const char*
     */
	virtual const char* CALL GetName() const = 0;
	/**
	* @brief Returns the unique variable id
	* @return variable id as const char*
	*
	* The id format depends on the available variable information provided by the device firmware.\n
	* If possible, the ID is a uuid to identify the variable across programs or interfaces.\n
	* If uuid is not available, the ID could be any other string but maybe it is not unique across interfaces then!
	*/
	virtual const char* CALL GetID() const = 0;
    /**
     * @brief Returns the variable unit
     * @return unit as const char*
     */
	virtual const char* CALL GetUnit() const = 0;
    /**
     * @brief Checks if the variable is readable
     * @return true if variable is readable
     */
	virtual bool CALL IsReadable() const = 0;
    /**
     * @brief Checks if the variable is writable
     * @return true if variable is writable
     */
	virtual bool CALL IsWritable() const = 0;
    /**
     * @brief Returns the total index
     * @return total index
     */
	virtual uint16_t CALL GetTotalIndex() const = 0;
    /**
     * @brief Returns the index in the input process image or -1 if not readable
     * @return input index
     */
	virtual int16_t	CALL GetInputIndex() const = 0;
    /**
     * @brief Returns the index in the output process image or -1 if not writable
     * @return output index
     */
	virtual int16_t	CALL GetOutputIndex() const = 0;
    /**
     * @brief Returns the data type enumeration
     * @return data type
     */
	virtual TTransferFormat CALL GetDataType() const = 0;
    /**
     * @brief Returns the data direction enumeration
     * @return data direction
     */
	virtual TDataDirection CALL  GetDataDirection() const = 0;
    /**
     * @brief Checks if this variable is a timestamp variable
     * @return true if timestamp variable
     */
	virtual bool  CALL IsTimeChannel() const = 0;
    /**
     * @brief Copy raw/binary data to the the input frame position of this variable
     *
     * @param src				pointer to source buffer
     * @param dest_frame_base	pointer to the data frame
     *
     * Be sure that both pointer are valid, this function will write without check
     */
	virtual void  CALL			CopyDataToInputFrame(const char* src, char *dest_frame_base) const = 0;
    /**
     * @brief Copy raw/binary data to the the input frame position of this variable by performing a byte swap
     *
     * @param src				pointer to source buffer
     * @param dest_frame_base	pointer to the data frame
     */
	virtual void CALL 			SwapDataToInputFrame(const char* src, char *dest_frame_base) const = 0;
	virtual void CALL 			sCopyDataToInputFrame(const char* src, char *dest_frame_base, size_t len) const = 0;
	virtual void CALL			sSwapDataToInputFrame(const char* src, char *dest_frame_base, size_t len) const = 0;

	virtual void CALL 			CopyDataToOutputFrame(const char* src, char *dest_frame_base, size_t frame_start_offset) const = 0;
	virtual void CALL 			SwapDataToOutputFrame(const char* src, char *dest_frame_base, size_t frame_start_offset) const = 0;
	virtual void CALL 			sCopyDataToOutputFrame(const char* src, char *dest_frame_base, size_t len, size_t frame_start_offset) const = 0;
	virtual void CALL 			sSwapDataToOutputFrame(const char* src, char *dest_frame_base, size_t len, size_t frame_start_offset) const = 0;

	virtual void CALL 			CopyDataFromInputFrame(char *dest, const char *src_frame_base) const = 0;
	virtual void CALL 			SwapDataFromInputFrame(char* dest, const char *src_frame_base) const = 0;

	virtual double CALL 		ConvertFromInputFrameToDouble(const char* frame_base) const = 0;
	virtual double CALL 		ConvertFromInputFrameToDouble_Swap(const char* frame_base, bool byteSwap) const = 0;
	virtual void CALL 			ConvertFromInputFrameToDouble_Ref(const char* frame_base, double &dest) const = 0;
	virtual void CALL 			ConvertFromInputFrameToDouble_Ref_Swap(const char* frame_base, double &dest, bool byteSwap) const = 0;

	virtual size_t CALL 		ConvertFromInputFrameToText(const char* frame_base, char *buffer, size_t bufLen, const char* nullStr) const = 0;
	virtual size_t CALL 		ConvertFromInputFrameToText_Prec(const char* frame_base, char *buffer, size_t bufLen, const char* nullStr, uint8_t precision) const = 0;
	virtual size_t CALL 		ConvertFromInputFrameToText_PrecDec(const char* frame_base, char *buffer, size_t bufLen, const char* nullStr, uint8_t precision,char decimalSeparator) const = 0;
	virtual size_t CALL 		ConvertFromInputFrameToText_PrecDecZero(const char* frame_base, char *buffer, size_t bufLen, const char* nullStr, uint8_t precision,char decimalSeparator,bool trailingZero) const = 0;

	virtual void CALL 			ConvertFromDoubleToInputFrame(const double &src, char *frame_base) const = 0;
	virtual void CALL 			ConvertFromDoubleToInputFrame_Swap(const double &src, char *frame_base, bool byteSwap) const = 0;
	virtual void CALL 			ConvertFromDoubleToOutputFrame(const double &src, char *frame_base, size_t frame_start_offset) const = 0;
	virtual void CALL 			ConvertFromDoubleToOutputFrame_Swap(const double &src, char *frame_base, bool byteSwap, size_t frame_start_offset) const = 0;

	virtual double CALL 		ConvertFromBufferToDouble(const char* buffer) const = 0;
	virtual double CALL 		ConvertFromBufferToDouble_Swap(const char* buffer, bool byteSwap) const = 0;
	virtual void CALL 			ConvertFromBufferToDouble_Ref(const char* buffer, double &dest) const = 0;
	virtual void CALL 			ConvertFromBufferToDouble_Ref_Swap(const char* buffer, double &dest, bool byteSwap) const = 0;

	virtual size_t CALL 		ConvertFromBufferToText(const char* frame_base, char *buffer, size_t bufLen, const char* nullStr) const = 0;
	virtual size_t CALL 		ConvertFromBufferToText_Prec(const char* frame_base, char *buffer, size_t bufLen, const char* nullStr, uint8_t precision) const = 0;
	virtual size_t CALL 		ConvertFromBufferToText_PrecDec(const char* frame_base, char *buffer, size_t bufLen, const char* nullStr, uint8_t precision, char decimalSeparator) const = 0;
	virtual size_t CALL 		ConvertFromBufferToText_PrecDecZero(const char* frame_base, char *buffer, size_t bufLen, const char* nullStr, uint8_t precision, char decimalSeparator,bool trailingZero) const = 0;

	virtual void CALL 			ConvertFromDoubleToBuffer(const double &src, char *buffer) const = 0;
	virtual void CALL 			ConvertFromDoubleToBuffer_Swap(const double &src, char *buffer, bool byteSwap) const = 0;

	virtual bool CALL 			SetConverterType(TTransferFormat ConvertFormat, bool byteSwap) = 0;
	virtual bool CALL			SetConverterType_Scaling(TTransferFormat ConvertFormat, bool byteSwap, double scalingFactor, double ScalingOffset) = 0;
	virtual void CALL 			ConvertFromRawData(const char* rawVariableValue, char *dest) const = 0;
    /**
     * Converts a variable value from buffer using a custom destination format
     *
     * @param rawVariableValue	pointer to the source variable value
     * @param dest				the destination buffer
     * @param destType			the data type for converting the value to the destination buffer
     * @param byteSwap			defines if data from buffer need to be swapped before converting (optional)
     */
	virtual void CALL 			ConvertFromRawData_Custom(const char* rawVariableValue, char *dest, TTransferFormat destType, bool byteSwap) const = 0;

	virtual void CALL 			ConvertToRawData(const char* src, char *rawVariableValue) const = 0;
	virtual void CALL 			ConvertToRawData_Custom(const char* src, char *rawVariableValue, TTransferFormat srcType, bool byteSwap) const = 0;
    /**
     * @brief convert timestamp value to TimeOLE2
     *
     * @param frame_base	pointer to the beginning of a data frame
     * @param dest			reference to the double result variable
     *
     * @details This function takes time conversion information from the data header suitable for the timestamp channel in the corresponding data stream.
     * 			If the IGInsVariable is no timestamp variable, the result may be invalid!
     */
	virtual double CALL 		ConvertFromInputFrameToTimeOLE2(const char* frame_base) const = 0;
	virtual void CALL 			ConvertFromInputFrameToTimeOLE2_Ref(const char* frame_base, double &dest) const = 0;

	virtual uint64_t CALL 		ConvertFromInputFrameToDCSystemTime(const char* frame_base) const = 0;
	virtual void CALL 			ConvertFromInputFrameToDCSystemTime_Ref(const char* frame_base, uint64_t &dest) const = 0;

	virtual void CALL 			ConvertFromInputFrameToFormattedTimeString(const char* frame_base,const char* formatStr, char* dest, size_t destMaxSize) const = 0;
	virtual void CALL 			ConvertFromInputFrameToFormattedTimeString_PrecDec(const char* frame_base, const char* formatStr, char* dest, size_t destMaxSize, uint8_t precision, char decimalSeparator) const = 0;
	virtual void CALL			ConvertFromInputFrameToFormattedTimeString_PrecDecLoc(const char* frame_base, const char* formatStr, char* dest, size_t destMaxSize, uint8_t precision, char decimalSeparator, bool localTime) const = 0;
    /**
     * @brief convert TimeOLE2 value to timestamp variable
     *
     * @param dest			reference to the double result variable
     * @param frame_base	pointer to the beginning of a data frame
     *
     * @details This function takes time conversion information from the data header suitable for the timestamp channel in the corresponding data stream.
     * 			If the IGInsVariable is no timestamp variable, the result may be invalid!
     */
	virtual void CALL 			ConvertFromTimeOLE2ToInputFrame(const double &src, char *frame_base) const = 0;

	virtual double CALL 		ConvertFromBufferToTimeOLE2(const char* buffer) const = 0;
	virtual void CALL 			ConvertFromBufferToTimeOLE2_Ref(const char* buffer, double &dest) const = 0;

	virtual void CALL 			ConvertFromTimeOLE2ToBuffer(const double &src, char *buffer) const = 0;

	virtual bool CALL			HostEvent(uint32_t evtCtr) = 0;

	virtual double CALL			GetRangeMin() const = 0;
	virtual double CALL			GetRangeMax()const = 0;
	virtual TVarKindCasted CALL GetVarKind() const = 0;
	virtual const char* CALL 	GetFormatString() const  = 0;

	//Needed if variable is a timestamp type
	virtual double CALL 		GetActTimeToSecondFactor() const = 0;
	virtual double CALL 		GetStartOLETime() const = 0;

	/**
	* @brief Is byte swap needed
	*
	* @return	true if byteswap is needed
	*
	* @details If data is copied between systems with different data endianess (big vs little endian)
	*          Every numeric value has to be byte swapped.
	*		   Most data conversion functions does byte swapping automatically, but if raw data is handled directly, the byte swap has to be done manually!
	*/
	virtual bool CALL			IsByteSwapNeeded() const = 0;

	virtual 					~IGInsVariable();

	virtual void CALL 			Release() = 0;
private:
	static GINS_MUTEX& 			Mutex(){static GINS_MUTEX mtx; return mtx;}
};
typedef std::shared_ptr<GIns::Data::IGInsVariable> IGInsVariablePtr;

} /* namespace Data */
} /* namespace GIns */
