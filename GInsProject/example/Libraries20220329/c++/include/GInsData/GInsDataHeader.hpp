/**
* @file	GInsDataHeader.hpp
* @author  sls <www.gantner-instruments.com>
* @version 1.0
*
* @section DESCRIPTION
*
* This class is an interface to all meta information of a GInsDataSource or a GInsDevice
*
*/
#pragma once

#include "GInsDataSource.hpp"

#include <mutex>
#include <memory>
#include <vector>

namespace GIns {
namespace Data {

class IGInsDataHeader;

typedef std::shared_ptr<GIns::Data::IGInsDataHeader> GInsDataHeaderPtr;

extern "C" GINSDATA_API IGInsDataHeader* CALL CreateDataHeader_Empty();
extern "C" GINSDATA_API IGInsDataHeader* CALL CreateDataHeader_Copy(const IGInsDataHeader* rhs,bool copyTimestampConfiguration, bool includeVariables);
extern "C" GINSDATA_API void			 CALL SetHeaderDataStructID(int AdditionalDataStructID, int VariableAdditionalDataStructID);
/**
 * Interface class
 */
class IGInsDataHeader
{
public:
	enum HeaderChecksumType
	{
		CheckSumType_FullPIRelevant=0,
		CheckSumType_MinimumPIRelevant=1,
		CheckSumType_FullBinaryHeader=2
	};
	/**
	 * Save header internally
	 *
	 * @return size of binary header data
	 */
	virtual size_t CALL 		Save() const=0;

	/**
	 * Binary header data
	 *
	 * @return pointer to binary header data
	 * 
	 * ATTENTION: Header must be saved before data is available!
	 */
	virtual const char* CALL 	Data() const = 0;

	/**
	 * Header length
	 *
	 * @return size of binary header data
	 */
	virtual size_t CALL 		Length() const = 0;
	virtual size_t CALL 		GetDataFrameLength() const = 0;
	virtual size_t CALL 		GetInputDataFrameLength() const = 0;
	virtual size_t CALL 		GetOutputDataFrameLength() const = 0;

	virtual double CALL 		GetDataRateHz() const = 0;
	virtual double CALL 		GetStartTimeToDayFactor() const = 0;
	virtual double CALL 		GetActTimeToSecondFactor() const = 0;
	virtual double CALL 		GetStartTime() const = 0;

	virtual uint16_t CALL 		GetVariableCount() const = 0;
	virtual uint16_t CALL 		GetInputVariableCount() const = 0;
	virtual uint16_t CALL 		GetOutputVariableCount() const = 0;
	virtual uint16_t CALL 		GetUDBFVersion() const = 0;
	virtual uint16_t CALL 		GetModuleAddDataLength() const = 0;
	virtual uint16_t CALL 		GetAddDataStructID() const = 0;
	virtual uint16_t CALL 		GetSlaveModuleCount() const = 0;

	virtual const char* CALL 	GetSlaveModuleLocation(uint16_t index) const = 0;
	virtual int16_t     CALL 	GetSlaveModuleAddress(uint16_t index) const = 0;
	virtual int16_t     CALL 	GetSlaveModuleUartIndex(uint16_t index) const = 0;
	virtual const char* CALL 	GetSlaveModuleMID(uint16_t index) const = 0;
	virtual const char* CALL 	GetSlaveModuleTypeCode(uint16_t index) const = 0;
	virtual uint16_t    CALL 	GetSlaveModuleVarCnt(uint16_t index) const = 0;

	virtual TTransferFormat CALL GetActTimeDataType() const = 0;
	virtual TTimestampType	CALL GetActTimestampType() const = 0;

	virtual bool CALL 			IsBigEndian() const = 0;
	virtual bool CALL 			WithCheckSum() const = 0;

	virtual const char* CALL 	GetVendor() const = 0;
	virtual const char* CALL	GetLocation() const = 0;

	/**
	* Read unique id of the owner of the object that generated this header
	*
	* @return uuid string
	*/
	//virtual const char* CALL	GetOwnerID() const = 0;
	virtual const char* CALL 	GetSerialNumber() const = 0;
	virtual const char* CALL 	GetFirmwareVersion() const = 0;
	virtual const char* CALL 	GetModuleTypeCode() const = 0;
	virtual const char* CALL 	GetModuleTypeName() const = 0;
	virtual const char* CALL 	GetMID() const = 0;
	/**
	 * Checksum over binary header
	 *
	 * @return checksum string
	 *
	 * This checksum is only available for headers that were decoded from binary data!!
	 * Otherwise use GetConfigurationHash
	 */
	virtual const char* CALL	GetCfgCheckSum() const = 0;
	virtual uint32_t CALL		GetMainModuleType()const = 0;
	virtual uint32_t CALL		GetSubModuleType()const = 0;
	virtual uint32_t CALL		GetFunctionType() const = 0;
	virtual uint32_t CALL		GetCasingType() const = 0;

	virtual uint32_t CALL		GetProcessBufferCount() const = 0;
	virtual uint32_t CALL		GetPostProcessBufferCount() const = 0;
	virtual uint32_t CALL		GetDataLoggerCount() const = 0;

	/**
	 * Decode Complete Header or part of an UDBF Header
	 *
	 * @return success if header was valid until reaching length
	 *
	 */
	virtual bool CALL  DecodeUDBFHeader(const char* data, size_t length, size_t &pos) = 0;

	virtual ~IGInsDataHeader();
	virtual void CALL Release() = 0;

	/**
	 * Create empty header
	 *
	 * @return shared pointer to the header interface
	 */
	static GInsDataHeaderPtr Create()
	{
		IGInsDataHeader *rPtr = CreateDataHeader_Empty();
		if (rPtr){ return GInsDataHeaderPtr(rPtr, std::mem_fn(&IGInsDataHeader::Release)); }
		else{ return GInsDataHeaderPtr();}
	}

	/**
	 * Create header based on existing interface
	 *
	 * @param device		source interface
	 * @param AddTimeStamp	if timestamp should be configured
	 * @param vars			list of variables
	 *
	 * @return shared pointer to the header interface
	 */
	static GInsDataHeaderPtr Create(GIns::Data::GInsDataSourcePtr& device,bool AddTimeStamp,std::vector<GIns::Data::IGInsVariablePtr> &vars)
	{
		IGInsDataHeader *rPtr = CreateDataHeader_Empty();
		if (rPtr){
			GInsDataHeaderPtr ptr(rPtr, std::mem_fn(&IGInsDataHeader::Release));
			if(AddTimeStamp){
				ptr->SetTimestampConfiguration(device->HeaderInterface()->GetStartTime(),
											   device->HeaderInterface()->GetStartTimeToDayFactor(),
											   device->HeaderInterface()->GetActTimeToSecondFactor(),
											   device->HeaderInterface()->GetActTimeDataType());
			}
			ptr->SetDataRate(device->HeaderInterface()->GetDataRateHz());
			for(std::vector<GIns::Data::IGInsVariablePtr>::iterator var = vars.begin();var!=vars.end();++var)
			{
				ptr->AddVariable_Copy(var->get());
			}
			return ptr;
		}
		else{ return GInsDataHeaderPtr();}
	}

	/**
	* Create header based on existing header
	*
	* @param headerInteface		source header
	*
	* @return shared pointer to the header interface
	*/
	static GInsDataHeaderPtr Create(const GIns::Data::IGInsDataHeader* headerInteface)
	{
		IGInsDataHeader *rPtr = CreateDataHeader_Copy(headerInteface, true, true);
		if (rPtr){
			GInsDataHeaderPtr ptr(rPtr, std::mem_fn(&IGInsDataHeader::Release));
			return ptr;
		}
		else{ return GInsDataHeaderPtr(); }
	}

	/**
	 * @brief Get binary header as std::string (thread save overload)
	 *
	 * @return binary header data
	 *
	 * @details Stores the actual state of the header to std::string\n
	 * 			This string may not be accessed using .c_str() because header contains \0 characters!\n
	 */
	std::string ToString() const
	{
		GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());
		size_t size = this->Save();
		if(size>0){return std::string(this->Data(),size);}
		return std::string();
	}
	GIns::Data::IGInsVariablePtr FindGInsVariable(const std::string &name) const
	{
		IGInsVariable* rPtr = this->FindCreateIGInsVariable_Name(name.c_str());
		if (rPtr)
		{
			return IGInsVariablePtr(rPtr, std::mem_fn(&IGInsVariable::Release));
		}
		return IGInsVariablePtr();
	}
	bool FindGInsVariable(const std::string &name,GIns::Data::IGInsVariablePtr &var) const
	{
		IGInsVariable* rPtr = this->FindCreateIGInsVariable_Name(name.c_str());
		if (rPtr)
		{
			var = IGInsVariablePtr(rPtr, std::mem_fn(&IGInsVariable::Release));
			return true;
		}
		return false;
	}
	/**
	 * @brief Find variable by ID
	 *
	 * @param id	Variable ID to be searched for
	 * @param var	Reference to destination variable shared pointer
	 *
	 * @return true if variable was found
	 */
	bool FindGInsVariableByID(const std::string &id, GIns::Data::IGInsVariablePtr &var) const
	{
		IGInsVariable* rPtr = this->FindCreateIGInsVariable_ID(id.c_str());
		if (rPtr)
		{
			var = IGInsVariablePtr(rPtr, std::mem_fn(&IGInsVariable::Release));
			return true;
		}
		return false;
	}
	GIns::Data::IGInsVariablePtr FindGInsVariable(uint16_t index) const
	{
		IGInsVariable* rPtr = this->FindCreateIGInsVariable_Index(index);
		if (rPtr)
		{
			return IGInsVariablePtr(rPtr, std::mem_fn(&IGInsVariable::Release));
		}
		return IGInsVariablePtr();
	}
	GIns::Data::IGInsVariablePtr FindGInsVariable_Input(uint16_t index) const
	{
		IGInsVariable* rPtr = this->FindCreateIGInsVariable_InputIndex(index);
		if (rPtr)
		{
			return IGInsVariablePtr(rPtr, std::mem_fn(&IGInsVariable::Release));
		}
		return IGInsVariablePtr();
	}
	GIns::Data::IGInsVariablePtr FindGInsVariable_Output(uint16_t index) const
	{
		IGInsVariable* rPtr = this->FindCreateIGInsVariable_OutputIndex(index);
		if (rPtr)
		{
			return IGInsVariablePtr(rPtr, std::mem_fn(&IGInsVariable::Release));
		}
		return IGInsVariablePtr();
	}


	/**
	 * @brief Get list of variables
	 *
	 * @param vars		vector to be filled with variables in this header
	 *
	 * @return number of variables
	 *
	 * @details Appends all variables not including timestamp to the reference vector
	 *			The result vector is not cleared be default - this has to be done before calling this function
	 */
	uint16_t GetGInsVariables(std::vector<GIns::Data::IGInsVariablePtr> &vars) const
	{
		GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());
		uint16_t i=0;
		IGInsVariable* rPtr = NULL;
		while ((rPtr = this->FindCreateIGInsVariable_Index(i)) != NULL)
		{
			IGInsVariablePtr ptr(rPtr, std::mem_fn(&IGInsVariable::Release));
			vars.push_back(ptr);
			i++;
		}
		return i;
	}

	/**
	 * @brief Create interface to timestamp variable
	 *
	 * @param var 	shared pointer for variable interface
	 *
	 * @return		success
	 */
	bool GetGInsTimestampVariable(GIns::Data::IGInsVariablePtr &var) const
	{
		IGInsVariable* rPtr = GetCreateIGInsTimestampVariable();
		if (rPtr)
		{
			var = IGInsVariablePtr(rPtr, std::mem_fn(&IGInsVariable::Release));
			return true;
		}
		return false;
	}

	/**
	 * @brief Create interface to timestamp variable
	 *
	 * @return		shared pointer for variable interface
	 */
	GIns::Data::IGInsVariablePtr GetGInsTimestampVariable() const
	{
		IGInsVariable* rPtr = this->GetCreateIGInsTimestampVariable();
		if (rPtr)
		{
			return IGInsVariablePtr(rPtr, std::mem_fn(&IGInsVariable::Release));
		}
		return GIns::Data::IGInsVariablePtr();
	}
	virtual bool CALL SetDataRate(double DataRate) = 0;
	virtual bool CALL SetTimestampConfiguration(double StartOLE2Time, double StartTimeToDayFactor, double ActTimeToSecondFactor, TTransferFormat ActTimeDataType) = 0;

	/**
	 * Add a variable by create a new one with basic confiuration
	 *
	 * @param Name			variable name
	 * @param Unit			unit
	 * @param Type			transfer data format
	 * @param Precision		number of digits behind comma
	 * @param FieldLength		field length
	 *
	 * @return success
	 *
	 * Thie function exisits only for compatibility reasons because it lacks some important config parameters like VID.
	 * It is recommended to use AddVariable_Advanced instead.
	 */

	virtual bool CALL AddVariable_New(const char *Name, const char *Unit, TTransferFormat Type, uint16_t Precision, uint16_t FieldLength) = 0;

	/**
	* Add a variable by create a new one with advanced parameter
	*
	* @param Name			variable name as 0 - terminated cstring
	* @param VId			uuid as 0 - terminated cstring
	* @param Unit			unit as 0 - terminated cstring
	* @param Direction		data direction enumeration
	* @param Type			transfer data format enumeration
	* @param VarKind		variable kind enumeration
	* @param Precision		number of digits behind comma
	* @param FieldLength	field length
	* @param RangeMin		minimum value range limit as double
	* @param RangeMax		maximum value range limit as double
	*
	* @return success
	*
	*/
	virtual bool CALL AddVariable_Advanced(const char *Name, const char* VId, const char *Unit, TDataDirection Direction, TTransferFormat Type, TVarKindCasted VarKind, uint16_t Precision, uint16_t FieldLength, double RangeMin, double RangeMax) = 0;

	/**
	* Add a new variable by copying an existing one
	*
	* @param var			Variable pointer
	*
	* @return success
	*/
	virtual bool CALL AddVariable_Copy(const GIns::Data::IGInsVariable *var) = 0;

	/**
	 * Get Device UUID
	 *
	 * @return UUID string
	 *
	 * @details This is a unique identification string (uuid) that identifies the device  which created this data stream.\n
	 * 			This UUID is bound to the configuration of a device and not to a specific HW (serial number).\n
	 */
	virtual const char* CALL GetDeviceUUID() const = 0;

	/**
	 * Get Source UUID
	 *
	 * @return UUID string
	 *
	 * @details This is a unique identification string (uuid) that identifies the configured device data source which created this data stream.\n
	 *          One device can support multiple data sources.\n
	 */
	virtual const char* CALL GetDataSourceUUID() const = 0;

	/**
	 * Get Source Name
	 *
	 * @return name string
	 *
	 * @details This is a human readable name that identifies the configured device data source which created this data stream.\n
	 *          One device can support multiple data sources.\n
	 */
	virtual const char* CALL GetDataSourceName() const = 0;

	/**
	 * Get Measurement UUID
	 *
	 * @return UUID string
	 *
	 * @details This is a unique identification string (uuid) that identifies the current continuous data stream (called measurement).\n
	 */
	virtual const char* CALL GetMeasurementUUID() const = 0;

	/**
	 * Get Measurement Name
	 *
	 * @return name string
	 *
	 * @details This is a human readable name that identifies the current continuous data stream (called measurement).\n
	 */
	virtual const char* CALL GetMeasurementName() const = 0;

	/**
	 * Get Device Info's
	 *
	 * @param uuid			UUID string
	 * @param name			human readable name
	 * @param varsion		firmware/software version of the device
	 * @param serialNumber	serial number of the device
	 *
	 * @details	See "GetDeviceUUID"
	 * 			Only Set this parameters when creating a new header object, not while decoding.\n
	 * 			If this info's are added to the Header, the header struct type will be increased to be >= 3\n
	 */
	virtual void CALL SetDeviceInfo(const char* uuid,const char* name, const char* version,const char* serialNumber) = 0;

	/**
	 * Set Source Info's
	 *
	 * @param uuid			UUID string
	 * @param name			human readable name
	 *
	 * @details	See "GetDataSourceUUID"
	 * 			Only Set this parameters when creating a new header object, not while decoding.\n
	 * 			If this info's are added to the Header, the header struct type will be increased to be >= 3\n
	 */
	virtual void CALL SetDataSourceInfo(const char* uuid,const char* name) = 0;

	/**
	 * Set Measurement Info's
	 *
	 * @param uuid			UUID string
	 * @param name			human readable name
	 *
	 * @details	See "GetMeasurementUUID"
	 * 			Only Set this parameter when creating a new header object, not while decoding.\n
	 * 			If this info's are added to the Header, the header struct type will be increased to be >= 3\n
	 */
	virtual void CALL SetMeasurementInfo(const char* uuid,const char* name) = 0;

	/**
	 * Get ConfigurationHash
	 *
	 * @param type 			Type of hash (0 = all PI relevant elements, 1 = all PI relevant changes without meta data)
	 *
	 * @return	MD5 based hash according type
	 */
	virtual const char* CALL GetConfigurationHash(HeaderChecksumType type) const = 0;

	/**
	 * Get CRC32 based checksum
	 *
	 * @param type 			Type of hash, only config relevant parts included yet
	 *
	 * @return Checksum that vas generated from all Configuration relevant parts.
	 *
	 * Not including MID, timestamp or device serial number.
	 */
	virtual uint32_t CALL GetConfigurationCRC32CheckSum(HeaderChecksumType type) const = 0;

	/**
	 * Get variable additional data struct id
	 *
	 * @return	struct ID as integer
	 */
	virtual uint16_t CALL GetVariableAddDataStructID() const = 0;

	/**
	 * 	 Init header to meta data system
	 *
	 * 	 @param MetaDataObjectType	Type string of object providing this header (leave empty if no parent object available)
	 *
	 * 	 @return	Data base ID of Object
	 *
	 * 	 Meta data system doesn't exist on all platform types!
	 */
	virtual int64_t CALL InitMetaData(const char* MetaDataObjectType) const = 0;
	/**
	* Create a #summary.sta from this header
	*
	* @return	struct ID as integer
	*/
	std::string CreateSummaryFile() const
	{
		GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());
		const char* ptr = this->CreateSummaryFileString();
		if (ptr)
		{
			return std::string(ptr);
		}
		return "";
	}
	/**
	* Create a #actual.sta from this header
	*
	* @return	TODO: implement correct actual file
	*/
	std::string CreateActualFile() const
	{
		GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());
		const char* ptr = this->CreateActualFileString();
		if (ptr)
		{
			return std::string(ptr);
		}
		return "";
	}
	/**
	 * Set addtional params
	 */
	virtual void CALL SetGlobalHeaderParameter(bool isBigEndian,bool withCheckSum,const char* vendor) = 0;
	virtual bool CALL SupportsReadBufferSingleWithStateResponse() const = 0;
	virtual bool CALL SupportsReadBufferSingleSeekTimeStamp() const = 0;
private:
	virtual GIns::Data::IGInsVariable* CALL FindCreateIGInsVariable_Name(const char* name) const = 0;
	virtual GIns::Data::IGInsVariable* CALL FindCreateIGInsVariable_ID(const char* id) const = 0;
	virtual GIns::Data::IGInsVariable* CALL FindCreateIGInsVariable_Index(uint16_t index) const = 0;
	virtual GIns::Data::IGInsVariable* CALL FindCreateIGInsVariable_InputIndex(uint16_t index) const = 0;
	virtual GIns::Data::IGInsVariable* CALL FindCreateIGInsVariable_OutputIndex(uint16_t index) const = 0;
	virtual GIns::Data::IGInsVariable* CALL GetCreateIGInsTimestampVariable() const = 0;
	virtual const char*		   CALL CreateSummaryFileString() const = 0;
	virtual const char*		   CALL CreateActualFileString() const = 0;
private:
	static GINS_MUTEX& Mutex(){static GINS_MUTEX mtx; return mtx;}
};

} /* namespace BufferedData */
} /* namespace GIns */
