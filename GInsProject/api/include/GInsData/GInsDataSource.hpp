/**
 * @file	GInsDataSource.hpp
 * @author  sls <www.gantner-instruments.com>
 * @version 1.0
 *
 * @section DESCRIPTION
 *
 * BasicDataSource is the interfaces to access buffered/streamed data of a Gantner Instruments controller.
 * Either directly on the controller via network or to files or databases.
 */
#pragma once

#include <mutex>
#include <memory>
#include <map>

#include "ginstypes.h"

namespace GIns {
namespace Data {

class IGInsDataSource;
class IGInsVariable;
class IGInsDataEventHandler;

/**
 * @brief factory functions for internal use only
 */
extern "C" GINSDATA_API IGInsDataSource* CALL CreateIGInsDataSource_ProcessBuffer(uint16_t bufferIndex);
extern "C" GINSDATA_API IGInsDataSource* CALL CreateIGInsDataSource_HighSpeedPortBuffer(const char* HostName, uint16_t bufferIndex, double TimeoutSec, TDataBufferIndent bufferType);
extern "C" GINSDATA_API IGInsDataSource* CALL CreateIGInsDataSource_HighSpeedPortBufferDirect(const char* HostName, uint16_t bufferIndex, size_t tempBufferSize, double TimeoutSec, TDataBufferIndent bufferType);
extern "C" GINSDATA_API IGInsDataSource* CALL CreateIGInsDataSource_HighSpeedPortBufferAuto(const char* HostName, uint16_t bufferIndex, double TimeoutSec, TDataBufferIndent bufferType,uint32_t dataTransferInterval_ms,double startBackTimeSec);
extern "C" GINSDATA_API IGInsDataSource* CALL CreateIGInsDataSource_PostProcessBuffer(const char* sourceID, GIRT_CBUF_PROP_TYPE handlingMode);
extern "C" GINSDATA_API IGInsDataSource* CALL CreateIGInsDataSource_UDBFDataFile(const char* fullFileName);
extern "C" GINSDATA_API IGInsDataSource* CALL CreateIGInsDataSource_UDBFHeaderAndDataFile(const char* headerFullFileName, const char* dataFullFileName);
extern "C" GINSDATA_API IGInsDataSource* CALL CreateIGInsDataSource_FileArchive(const char* baseFilePath, const char* DataSourceID);
extern "C" GINSDATA_API IGInsDataSource* CALL CreateIGInsDataSource_AutoBackend(const char* sourceID,const char* measurementID);
extern "C" GINSDATA_API IGInsDataSource* CALL CreateIGInsDataSource_AutoBackend_StartTime(const char* sourceID,int64_t StartEpochTimeMs);
extern "C" GINSDATA_API IGInsDataSource* CALL CreateIGInsDataSource(uint16_t typeCode, const char* name0, const char* name1, uint16_t index, double TimeoutSec);

/*
extern "C" GINSDATA_API bool    		 CALL IGInsDataSource_FileArchive_GetInfo(const char* baseFilePath,
																				  TFileArchiveInfoId infoType,
																				  uint32_t selIndex,
																				  const char* selString,
																				  double* numericInfo,
																				  char* stringInfo,
																				  size_t sizeStringInfo);
																			   */

extern "C" GINSDATA_API bool    		 CALL IGInsDataSource_HighSpeedPort_GetInfo(const char* HostName,
																					double TimeoutSec,
																					THSPDataSourceInfoId infoType,
																				  	uint32_t selIndex,
																					const char* selString,
																					double* numericInfo,
																					char* stringInfo,
																					size_t sizeStringInfo);
extern "C" GINSDATA_API bool			 CALL IsCloudBackendAvailable();
extern "C" GINSDATA_API const char*		 CALL IGInsDataSource_AutoBackend_GetInfo(const char* sid,const char* mid,uint64_t minTs, uint64_t maxTs, int32_t measCountLimit, bool sortDescending);
extern "C" GINSDATA_API bool			 CALL IGInsDataSource_Kafka_GetSourceInfo(const char* sid,const char* mid,uint64_t* minTs, uint64_t* maxTs, double* sampleRate);
extern "C" GINSDATA_API bool			 CALL IGInsDataSource_Kafka_DeleteSID(const char* gicloudAPI, const char* sid);
extern "C" GINSDATA_API const char*		 CALL IGInsDataSource_GetGQLVariableMapping(const char* sid);

typedef std::shared_ptr<IGInsDataSource> GInsDataSourcePtr;
/**
 * @section DESCRIPTION
 *
 * The BasicDataSource class provides read access to different types of buffered data.
 * A specific data source is selected by using the correct factory (Create) method.
 *
 */
class IGInsDataSource
{
public:
	enum TErrorType
	{
		ErrorType_Unknown, 			//Any error
		ErrorType_BufferOverrun,	//Buffer overrun by writer (data could be inconsistent)
		ErrorType_UnknownBuffer,	//Could not be constructed correctly
		ErrorType_BufferEnd,		//Buffer is stopped
		ErrorTypeNotDefined
	};
	enum TDataSourceType
	{
		DataSourceType_ProcessBuffer,
		DataSourceType_PostProcessBuffer,
		DataSourceType_TempMeasurement,
		DataSourceType_CircleBuffer,
		DataSourceType_HighSpeedPortBuffer,
		DataSourceType_UDBFFile,
		DataSourceType_LoggerFileArchive,
		DataSourceType_KafkaStream,
	};
	struct TDataSourceHSPBufferInfo
	{
		std::string 		m_UUID;
		std::string 		m_Name;
		uint32_t 			m_Index;
		TDataBufferIndent 	m_Type;
		size_t 				m_Size;
		double				m_DataRate;
	};
	virtual const GIns::Data::IGInsDataHeader* CALL HeaderInterface() = 0;
	/**
	 * Get the size (byte) of a single frame including Timestamp (if available) and all variables
	 *
	 * @return frame width
	 */
	virtual size_t CALL  GetFrameWidth() = 0;
	/**
	 * Get the sample rate of this data source
	 *
	 * @return sample rate
	 */
	virtual double CALL  GetSampleRate() = 0;
	/**
	 * Get the number of byte, successfully copied by the last frame - request
	 *
	 * @return last data size
	 *
	 * This value should always be << m_Capacity.\n
	 * If this value is growing after sequential data request calls, the system / connection could have performance problems.\n
	 */
	virtual size_t CALL	GetActDataSize() = 0;
	/**
	 * The max value (byte) over all data request since start or since last buffer overrun
	 *
	 * @return maximum data size
	 *
	 * This value should always be << m_Capacity.\n
	 * It saves the "worst case" data size value over sequential data request calls.\n
	 */
	virtual size_t CALL	GetMaxDataSize() = 0;
	/**
	 * The capacity (byte) of the data source buffer
	 *
	 * @return buffer capacity
	 *
	 * This value in relation to ActDataSize or MaxDataSize indicates the workload of the source data buffer.
	 */
	virtual size_t CALL GetCapacity() = 0;
	/**
	 * Get the block size of the data source
	 *
	 * @return block size
	 *
	 * Some data source types are always filled with blocks containing a fixed number of frames.\n
	 * The total allocated size (Capacity) is always aligned to a multiple of this block size * frame size.\n
	 * This is important to calculate possible size values for data sources.\n
	 *
	 */
	virtual size_t CALL GetBlockSize() = 0;
	/**
	 * @brief Get the number of data source overruns from this instance.
	 *
	 * @return number of buffer overruns
	 */
	virtual size_t CALL	GetOverruns() = 0;
	/**
	 * @brief Check data source status
	 *
	 * @param type	Type selector
	 *
	 * @return true if specified error is active
	 */
	virtual bool CALL	HasErrorType(TErrorType type) const = 0;
	/**
	 * @brief Get pointer to the actual frame
	 *
	 * @param fb			Frame buffer
	 * @param dataLength	Available continuous block of data
	 *
	 * @return success
	 *
	 * Calling this function will not push the read position.
	 * This function can be used in combination with "Seek" and "Rewind" to read dedicated frames from the complete available data buffer.
	 */
	virtual bool CALL	GetActFrame(FrameBuffer& fb, size_t &dataLength) = 0;								//no exception
	/**
	 * @brief Get all new data frames
	 *
	 * @param fb			Frame buffer
	 * @param dataLength	Available continuous block of data in byte
	 *
	 * @return success
	 *
	 * Loads the frame buffer with the next complete available data block in the buffer.
	 * It depends on the data source kind how/if the whole underlying buffer is segmented.
	 * This means that this it could happen that multiple calls to this function are needed to get all available data!
	 * This function always pushes the read position past the last available data block.
	 */
	virtual bool CALL	GetNextFrames_All(FrameBuffer& fb, size_t &dataLength) = 0;							//no exception

	/**
	 * @brief Get last data frames
	 *
	 * @param fb			Frame buffer
	 * @param dataLength	Available continuous block of data in byte
	 * @param backSamples	Number of history samples to be read (if <0 -> read all or from actual position)
	 *
	 * @return success
	 *
	 * Loads the frame buffer with the next complete available data block in the buffer, starting from "backSamples" historical samples.\n
	 * It depends on the data source kind how/if the whole underlying buffer is segmented.\n
	 * This means that this it could happen that multiple calls to this function are needed to get all available data!\n
	 * This function always pushes the read position past the last available data block.\n
	 *
	 * If more historical samples are requested than available, the read position is set some security frames past the buffer start.\n
	 * The security frames are needed for all kinds of data sources which are implemented as circular buffer to prevent them against immediate overrun.\n
	 * So it is very very important to proceed with reading the data as fast as possible!!!!
	 */
	virtual bool CALL	GetNextFrames_Limit(FrameBuffer& fb, size_t &dataLength, int32_t backSamples) = 0;	//no exception

	/**
	 * @brief Get Frames between start and end time
	 *
	 * @param startTimeDC	Start time to read from (Absolute time in nano seconds since 1.1.2000)
	 * 						(if 0xFFFFFFFFFFFFFFFF, reads from actual read position)
	 * @param endTimeDC		End time stamp to read to (Absolute time in nano seconds since 1.1.2000)
	 * 						(if 0xFFFFFFFFFFFFFFFF, it doesn't stop at end time
	 * @param fb 			Frame buffer
	 * @param dataLength	Available continuous block of data in byte
	 * @param endReached	True if end time stamp is reached
	 *
	 * @return success
	 *
	 * Loads the frame buffer with the next complete available data block in the buffer.\n
	 * It depends on the data source kind how/if the whole underlying buffer is segmented.\n
	 * This means that this it could happen that multiple calls to this function are needed to get all available data!\n
	 * This function always pushes the read position past the last available data block.\n
	 * If StartTimeDC is set, it seeks automatically to the specified time stamp.\n
	 * If EndTimeDC is reached, it sets the new read position to the next frame after the specified frame and returns data length accordingly and sets endReached flag.\n
	 *
	 * On some data backends, this function is much more efficient than GetNextFrames_All because it doesn't read more than it really needs (HighSpeedPort, File, FileArchive etc..).\n
	 * On HighSpeedPort backend -  the firmware of the target device needs to support the high speed port command "6" - Buffer data single seek time stamp.\n
	 * On backends that can use direct pointer access like PostProcessBuffer or ProcessBuffer it, doesn't have performance advantages but at least convenience.\n
	 *
	 */
	virtual bool CALL	GetFrames_TimeRange(uint64_t startTimeDC, uint64_t endTimeDC,FrameBuffer& fb, size_t &dataLength,bool& endReached) = 0;	//no exception
	/**
	 * @brief Get size of available data
	 *
	 * @return length of data in byte
	 *
	 * This function returns the actual available number of bytes between the current read position and the last available frame.\n
	 *
	 */
	virtual size_t CALL GetBufferSize() = 0;
	virtual bool CALL 	HeaderChanged() const = 0;
	/**
	* @brief Rewind act read position
	* 
	* @param rewind_frame_count	the number of frames to be rewinded
	*
	* @return	success
	*
	* If less that rewind_frame_count frames are available in the data source, the operation will step to the first available frame.\n
	* For circular buffer based sources, the operation will guarantee some security samples in front of the write position to avoid immediate overrun.\n
	*/
	virtual bool CALL	Rewind(uint32_t rewind_frame_count) = 0;											//no exception
	/**
	* @brief Push act read position
	* 
	* @param seek_frame_count	number of frames to be jumped further
	* @param fromBeginning		if operation should start at the beginning of the current stream
    *
	* This operation pushes the actual read position either to the next "seek_frame_count" frames or as offset from begin.\n
	* This function will not fail if seeking past the last available data,but the next call to NextFrames will fail.\n
	* To avoiding seeking past the end of the source stream, GetBufferSize has to be called manually to retrive the remaining available stream size!\n
	*/
	virtual bool CALL	Seek(uint32_t seek_frame_count,bool fromBegin) = 0;										//no exception
	/**
	* @brief Get data source updated state
	*
	* @return bool if data source was updated with new data
	*
	* This information indicates if the data source was potentially updated.\\
	* This could be true even if there is no new data, but the underlying data stream is still active
	*/
	virtual bool CALL	IsUpdating() = 0;		//no exception
	/**
	* @brief Is circular buffer
	*
	* @return bool if data source implementation is circular buffer
	*
	* This information indicates if the underlying data source is implemented as circular buffer.\\
	*/
	virtual bool CALL	IsCircularBuffer() = 0;		//no exception
	/**
	* @brief Get data source ID
	*
	* @return numeric identification string
	*
	* A more or less unique id string (depending on data source type)
	*/
	virtual const char* CALL GetID() = 0;
	/**
	* @brief Get the available time range of the whole data stream
	*
	* @param startTimeDC	start time in ns since 01.01.2000
	* @param endTimeDC		end time in ns since 01.01.2000
	*
	* Since some data source types are implemented as circular buffers, this time range is only valid in the moment of this function call.
	*/
	virtual bool CALL GetTimeRange(uint64_t& startTimeDC, uint64_t& endTimeDC) = 0;
	/**
	* @brief Seek to specified timestamp
	*
	* @param timeStampDC	timestamp in ns since 01.01.2000
	*
	* Since some data source types are implemented as circular buffers, this time range is only valid in the moment of this function call.
	*/
	virtual bool CALL Seek_TimeStamp(uint64_t timeStampDC) = 0;
	/**
	* @brief Seek to specified future timestamp
	*
	* @param timeStampDC	timestamp in ns since 01.01.2000
	* @param timeoutMs		max timeout to wait for reaching timestamp
	* 
	* @return Success
	*
	* Since some data source types are implemented as circular buffers, this time range is only valid in the moment of this function call.
	*/
	virtual bool CALL SeekWait_TimeStamp(uint64_t timeStampDC,uint64_t timeoutMs) = 0;
	/**
	* @brief Get timestamp of actual frame
	* 
	* @return timestamp in ns since 01.01.2000
	*
	* If timestamp is 0, no valid time available or function call failed
	*/
	virtual uint64_t CALL GetActTimeStamp() = 0;

	/**
	 * Get amount of remaining data
	 *
	 * @return Remaining data length in byte
	 *
	 * Data source types that doesn't support remaining data handling will always return 0
	 */
	virtual uint64_t CALL GetNextDataLength() = 0;

	/**
	 * @brief Get the last event from this instance.
	 *
	 * @param errorCode the error code as integer or 0 if no error
	 *
	 * @return a std::string either containing a error message or empty
     *
	 */
	int32_t GetLastError(std::string &message)
	{
		GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());
		int errorCode = 0;
		const char* msg = this->GetLastErrorStr(errorCode);
		if (msg && errorCode != 0){
			message.assign(msg);
		}
		return errorCode;
	}
	/**
	 * Factory method to create a data source instance to a process buffer directly on the controller
	 *
	 * @param	bufferIndex the index of the process buffer
	 *
	 * @return shared pointer to the created object
	 *
	 * Throws an exception in error case.\n
	 * This type is only available on controller.\n
	 */
	static GInsDataSourcePtr 	CreateIGInsDataSourcePtr(uint16_t bufferIndex)
	{
		IGInsDataSource *rPtr = CreateIGInsDataSource_ProcessBuffer(bufferIndex);
		if (rPtr){ return GInsDataSourcePtr(rPtr, std::mem_fn(&IGInsDataSource::Release)); }
		else{ return GInsDataSourcePtr();}
	}
	/**
	 * Factory method to create a data source instance to a process or post-process buffer on a remote device.\n
	 *
	 * @param IPAddress		IP address of the device (optional with additional port when appended as ":8001")
	 * @param bufferIndex	Buffer index on the remote device
	 * @param timeoutSec	network communication timeout
	 * @param bufferType    buffer type selector
	 *
	 * @return				shared pointer to the created object
	 *
	 * Throws an exception in error case.\n
	 * The deta source instance uses HighSpeedPort (default port 8001 TCP) for data transmission.\n
	 *
	 * Due to missing port definition in the first version of this interface but the need for API compatibility,
	 * the TCP port was added as optional extension to the IPAddress string separated with ":" eg: 192.168.1.28:8001
	 */
	static GInsDataSourcePtr 	CreateIGInsDataSourcePtr(const std::string &IPAddress, uint16_t bufferIndex, double TimeoutSec=5,TDataBufferIndent bufferType=DataBufferType_ProcessBuffer)
	{
		IGInsDataSource *rPtr = CreateIGInsDataSource_HighSpeedPortBuffer(IPAddress.c_str(),bufferIndex,TimeoutSec,bufferType);
		if (rPtr){ return GInsDataSourcePtr(rPtr, std::mem_fn(&IGInsDataSource::Release)); }
		else{return GInsDataSourcePtr();}
	}
	/**
	* Factory method to create a data source instance to a process or post-process buffer on a remote device where local temporary buffer can be specified.\n
	*
	* @param IPAddress					IP address of the device
	* @param bufferIndex				Buffer index on the remote device
	* @param tempBufferSize				Maximum size of temporary buffer
	* @param timeoutSec					network communication timeout
	* @param bufferType                 buffer type selector
	*
	* @return							shared pointer to the created object
	*
	* Throws an exception in error case.\n
	* The deta source instance uses HighSpeedPort (port 8001 TCP) for data transmission.\n
	* A temporary internal buffer is used to store data until everything is read from the connection. The size of this buffer can be specified with tempBufferSize.\n
	*/
	static GInsDataSourcePtr 	CreateIGInsDataSourcePtr_HighSpeedPortBufferDirect(const std::string& IPAddress, uint16_t bufferIndex, size_t tempBufferSize, double TimeoutSec = 5, TDataBufferIndent bufferType = DataBufferType_ProcessBuffer)
	{
		IGInsDataSource* rPtr = CreateIGInsDataSource_HighSpeedPortBufferDirect(IPAddress.c_str(), bufferIndex, tempBufferSize, TimeoutSec, bufferType);
		if (rPtr) { return GInsDataSourcePtr(rPtr, std::mem_fn(&IGInsDataSource::Release)); }
		else { return GInsDataSourcePtr(); }
	}
	/**
	 * Factory method to create a data source instance to a post process buffer by automatically selecting the correct data backend
	 *
	 * @param sourceID		The unique ID of this source stream (UUID)
	 * @param measurementID	(optional) The ID of a certain measurement inside this data stream
	 *
	 * @return				shared pointer to the created object
	 *
	 * Several libraries and tools can be used on a local environment or on a Gantner Instruments cloud system
	 * This function allows automatic data backend selection by providing the identical interface
	 *
	 * ** Selecting a certain measurement only works for cloud data backend for the moment
	 */
	static GInsDataSourcePtr CreateIGInsDataSourcePtr_AutoBackend(const std::string& sourceID,const std::string& measurementID)
	{
		IGInsDataSource *rPtr = CreateIGInsDataSource_AutoBackend(sourceID.c_str(),measurementID.c_str());
		if (rPtr){ return GInsDataSourcePtr(rPtr, std::mem_fn(&IGInsDataSource::Release)); }
		else{return GInsDataSourcePtr();}
	}
	/**
	 * Factory method to create a data source instance to a post process buffer by automatically selecting the correct data backend
	 *
	 * @param sourceID		The unique ID of this source stream (UUID)
	 * @param StartTimeEpochMs	(optional = 0 ) The start time where to initialize the stream
	 *
	 * @return				shared pointer to the created object
	 *
	 * Several libraries and tools can be used on a local environment or on a Gantner Instruments cloud system
	 * This function allows automatic data backend selection by providing the identical interface
	 *
	 * ** Selecting a certain timestamp only works for cloud data backend for the moment
	 */
	static GInsDataSourcePtr CreateIGInsDataSourcePtr_AutoBackend_StartTime(const std::string& sourceID,int64_t StartTimeEpochMs)
	{
		IGInsDataSource *rPtr = CreateIGInsDataSource_AutoBackend_StartTime(sourceID.c_str(),StartTimeEpochMs);
		if (rPtr){ return GInsDataSourcePtr(rPtr, std::mem_fn(&IGInsDataSource::Release)); }
		else{return GInsDataSourcePtr();}
	}
	/**
	* Factory method to create a auto loading data source instance to a process or post-process buffer on a remote device.\n
	*
	* @param IPAddress					IP address of the device
	* @param bufferIndex				Buffer index on the remote device
	* @param dataTransferInterval_ms	data/network communication interval in milli seconds
	* @param backTime_sec				seconds of historical data to be loaded at thread start
	* @param timeoutSec					network communication timeout
	* @param bufferType                 buffer type selector
	*
	* @return							shared pointer to the created object
	*
	* Throws an exception in error case.\n
	* The deta source instance uses HighSpeedPort (port 8001 TCP) for data transmission.\n
	* An thread cyclically loads data via HighSpeedPort to an internal buffer
	*/
	static GInsDataSourcePtr 	CreateIGInsDataSourcePtr(const std::string &IPAddress, uint16_t bufferIndex,uint32_t dataTransferInterval_ms,double backTime_sec, double timeoutSec = 5, TDataBufferIndent bufferType = DataBufferType_ProcessBuffer)
	{
		IGInsDataSource *rPtr = CreateIGInsDataSource_HighSpeedPortBufferAuto(IPAddress.c_str(), bufferIndex, timeoutSec, bufferType, dataTransferInterval_ms, backTime_sec);
		if (rPtr){ return GInsDataSourcePtr(rPtr, std::mem_fn(&IGInsDataSource::Release)); }
		else{ return GInsDataSourcePtr(); }
	}
	/**
	 * Factory method to create a data source instance to a post process buffer
	 *
	 * @param	sourceID			the unique ID of this source stream (UUID)
	 * @param	handlingMode		please use stream
	 *
	 * @return shared pointer to the created object
	 *
	 * Throws an exception in error case.\n
	 * This type is platform independent and connects to any "GInsDataBuffer"
	 */
	static GInsDataSourcePtr 	CreateIGInsDataSourcePtr(const std::string &sourceID, GIRT_CBUF_PROP_TYPE handlingMode)
	{
		IGInsDataSource *rPtr = CreateIGInsDataSource_PostProcessBuffer(sourceID.c_str(), handlingMode);
		if (rPtr){ return GInsDataSourcePtr(rPtr, std::mem_fn(&IGInsDataSource::Release)); }
		else{ return GInsDataSourcePtr();}
	}
	/**
	 * Factory method to create a data source instance to a UDBF data file with header and data merged together.\n
	 *
	 * @param fullFileName	full path of the data file
	 *
	 * @return shared pointer to the created object
	 *
	 * Throws an exception in error case.\n
	 */
	static GInsDataSourcePtr 	CreateIGInsDataSourcePtr(const std::string &fullFileName)
	{
		IGInsDataSource *rPtr = CreateIGInsDataSource_UDBFDataFile(fullFileName.c_str());
		if (rPtr){ return GInsDataSourcePtr(rPtr, std::mem_fn(&IGInsDataSource::Release)); }
		else{ return GInsDataSourcePtr();}
	}
	/**
	 * Factory method to create a data source instance to a UDBF data with header and data as single file.\n
	 *
	 * @param headerFullFileName	full path to the UDBF header file
	 * @param dataFullFileName		full path to the UDBF data file
	 *
	 * @return shared pointer to the created object
	 *
	 * Throws an exception in error case.\n
	 */
	static GInsDataSourcePtr 	CreateIGInsDataSourcePtr(const std::string &headerFullFileName, const std::string &dataFullFileName)
	{
		IGInsDataSource *rPtr = CreateIGInsDataSource_UDBFHeaderAndDataFile(headerFullFileName.c_str(), dataFullFileName.c_str());
		if (rPtr){ return GInsDataSourcePtr(rPtr, std::mem_fn(&IGInsDataSource::Release)); }
		else{ return GInsDataSourcePtr();}
	}
	static GInsDataSourcePtr 	CreateIGInsDataSourcePtr(uint16_t typeCode,const std::string &name0,const std::string &name1,uint16_t srcIndex,double TimeoutSec)
	{
		IGInsDataSource *rPtr = CreateIGInsDataSource(typeCode,name0.c_str(),name1.c_str(),srcIndex,TimeoutSec);
		if (rPtr){ return GInsDataSourcePtr(rPtr, std::mem_fn(&IGInsDataSource::Release)); }
		else{ return GInsDataSourcePtr();}
	}
	static GInsDataSourcePtr 	CreateIGInsDataSourcePtr_FileArchive(const std::string &baseFilePath,const std::string &measurementID)
	{
		IGInsDataSource *rPtr = CreateIGInsDataSource_FileArchive(baseFilePath.c_str(),measurementID.c_str());
		if (rPtr){ return GInsDataSourcePtr(rPtr, std::mem_fn(&IGInsDataSource::Release)); }
		else{ return GInsDataSourcePtr();}
	}
	/*
	static bool GInsDataSource_FileArchive_GetMeasurements(const std::string& basePath,std::vector<TFileArchiveMeasurementInfo>& measList,uint32_t limit=10000)
	{
		GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());
		double measCnt=0;
		if(!IGInsDataSource_FileArchive_GetInfo(basePath.c_str(),TFileArchiveInfoId::GInsFileArchiveInfoID_MeasurementCount,0,NULL,&measCnt,NULL,0))
		{
			return false;
		}
		uint32_t startIndex = 0;
		if ((uint32_t)measCnt > limit)
		{
			startIndex = (uint32_t)measCnt - limit;
		}
		for(uint32_t i=startIndex;i<measCnt;i++)
		{
			char temp[128]={0};
			double tempNum=0;
			if(IGInsDataSource_FileArchive_GetInfo(basePath.c_str(),TFileArchiveInfoId::GInsFileArchiveInfoID_MeasurementSel,i,NULL,NULL,NULL,0))
			{
				TFileArchiveMeasurementInfo meas;

				if (IGInsDataSource_FileArchive_GetInfo(basePath.c_str(), TFileArchiveInfoId::GInsFileArchiveInfoID_Measurement_StartTimeDC, i, NULL, &tempNum, NULL, 0))
					meas.m_StartTime_DCSystemTime = (uint64_t)tempNum;
				if (IGInsDataSource_FileArchive_GetInfo(basePath.c_str(), TFileArchiveInfoId::GInsFileArchiveInfoID_Measurement_EndTimeDC, i, NULL, &tempNum, NULL, 0))
					meas.m_EndTime_DCSystemTime = (uint64_t)tempNum;

				//Sanity Check
				if (meas.m_StartTime_DCSystemTime >= meas.m_EndTime_DCSystemTime)
					continue;

				if(IGInsDataSource_FileArchive_GetInfo(basePath.c_str(),TFileArchiveInfoId::GInsFileArchiveInfoID_Measurement_MeasurementUUID,i,NULL,NULL,temp,sizeof(temp)))
					meas.m_MeasurementUUID.assign(temp);
				if (IGInsDataSource_FileArchive_GetInfo(basePath.c_str(), TFileArchiveInfoId::GInsFileArchiveInfoID_Measurement_MeasurementName, i, NULL, NULL, temp, sizeof(temp)))
					meas.m_MeasurementName.assign(temp);
				if (IGInsDataSource_FileArchive_GetInfo(basePath.c_str(), TFileArchiveInfoId::GInsFileArchiveInfoID_Measurement_FileFormat, i, NULL, NULL, temp, sizeof(temp)))
					meas.m_FileFormat.assign(temp);
				if (IGInsDataSource_FileArchive_GetInfo(basePath.c_str(), TFileArchiveInfoId::GInsFileArchiveInfoID_Measurement_SourceUUID, i, NULL, NULL, temp, sizeof(temp)))
					meas.m_SourceUUID.assign(temp);
				if (IGInsDataSource_FileArchive_GetInfo(basePath.c_str(), TFileArchiveInfoId::GInsFileArchiveInfoID_Measurement_SourceName, i, NULL, NULL, temp, sizeof(temp)))
					meas.m_SourceName.assign(temp);
				if (IGInsDataSource_FileArchive_GetInfo(basePath.c_str(), TFileArchiveInfoId::GInsFileArchiveInfoID_Measurement_DeviceUUID, i, NULL, NULL, temp, sizeof(temp)))
					meas.m_DeviceUUID.assign(temp);
				if (IGInsDataSource_FileArchive_GetInfo(basePath.c_str(), TFileArchiveInfoId::GInsFileArchiveInfoID_Measurement_DeviceName, i, NULL, NULL, temp, sizeof(temp)))
					meas.m_DeviceName.assign(temp);
				if (IGInsDataSource_FileArchive_GetInfo(basePath.c_str(), TFileArchiveInfoId::GInsFileArchiveInfoID_Measurement_DeviceSerialNr, i, NULL, NULL, temp, sizeof(temp)))
					meas.m_DeviceSerialNumber.assign(temp);

				measList.push_back(meas);
			}
		}
		return true;
	}
	static bool GInsDataSource_FileArchive_GetVariables(const std::string& basePath, const TFileArchiveFilter& filter, std::vector<TFileArchiveVariableInfo>& variables)
	{
		GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());
		double varCount = 0;
		if (filter.m_DeviceUUID.size() > 0)
		{
			if (!IGInsDataSource_FileArchive_GetInfo(basePath.c_str(), TFileArchiveInfoId::GInsFileArchiveInfoID_Device_Variables, 0, filter.m_DeviceUUID.c_str(), &varCount, NULL, 0))
				return false;
		}
		else if (filter.m_SourceUUID.size() > 0)
		{
			if (!IGInsDataSource_FileArchive_GetInfo(basePath.c_str(), TFileArchiveInfoId::GInsFileArchiveInfoID_Source_Variables, 0, filter.m_SourceUUID.c_str(), &varCount, NULL, 0))
				return false;
		}
		else if (filter.m_MeasurementUUID.size() > 0)
		{
			if (!IGInsDataSource_FileArchive_GetInfo(basePath.c_str(), TFileArchiveInfoId::GInsFileArchiveInfoID_Measurement_Variables, 0, filter.m_MeasurementUUID.c_str(), &varCount, NULL, 0))
				return false;
		}
		for (uint32_t i = 0; i<varCount; i++)
		{
			char temp[128] = { 0 };
			TFileArchiveVariableInfo var;
			if (IGInsDataSource_FileArchive_GetInfo(basePath.c_str(), TFileArchiveInfoId::GInsFileArchiveInfoID_VariableUUID, i, NULL, NULL, temp, sizeof(temp)))
				var.m_UUID.assign(temp);
			if (IGInsDataSource_FileArchive_GetInfo(basePath.c_str(), TFileArchiveInfoId::GInsFileArchiveInfoID_VariableName, i, NULL, NULL, temp, sizeof(temp)))
				var.m_Name.assign(temp);
				
			variables.push_back(var);
		}
		return true;
	}
	static bool GInsDataSource_FileArchive_GetFiles(const std::string& basePath, const TFileArchiveFilter& filter, std::vector<TFileArchiveFileInfo>& files)
	{
		GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());
		double fileCount = 0;
		if (filter.m_DeviceUUID.size() > 0)
		{
			if (!IGInsDataSource_FileArchive_GetInfo(basePath.c_str(), TFileArchiveInfoId::GInsFileArchiveInfoID_Device_Files, 0, filter.m_DeviceUUID.c_str(), &fileCount, NULL, 0))
				return false;
		}
		else if (filter.m_SourceUUID.size() > 0)
		{
			if (!IGInsDataSource_FileArchive_GetInfo(basePath.c_str(), TFileArchiveInfoId::GInsFileArchiveInfoID_Source_Files, 0, filter.m_SourceUUID.c_str(), &fileCount, NULL, 0))
				return false;
		}
		else if (filter.m_MeasurementUUID.size() > 0)
		{
			if (!IGInsDataSource_FileArchive_GetInfo(basePath.c_str(), TFileArchiveInfoId::GInsFileArchiveInfoID_Measurement_Files, 0, filter.m_MeasurementUUID.c_str(), &fileCount, NULL, 0))
				return false;
		}
		for (uint32_t i = 0; i<fileCount; i++)
		{
			char 	temp[128] = { 0 };
			double  time=0;
			TFileArchiveFileInfo file;
			if (IGInsDataSource_FileArchive_GetInfo(basePath.c_str(), TFileArchiveInfoId::GInsFileArchiveInfoID_FilePath, i, NULL, NULL, temp, sizeof(temp)))
				file.m_FullFilePath.assign(temp);
			if (IGInsDataSource_FileArchive_GetInfo(basePath.c_str(), TFileArchiveInfoId::GInsFileArchiveInfoID_FileStartTime, i, NULL, &time, NULL,0))
				file.m_StartTimeDC = (uint64_t)time * 1000;
			if (IGInsDataSource_FileArchive_GetInfo(basePath.c_str(), TFileArchiveInfoId::GInsFileArchiveInfoID_FileEndTime, i, NULL, &time, NULL,0))
				file.m_EndTimeDC = (uint64_t)time * 1000;

			files.push_back(file);
		}
		return true;
	}
	*/
	static bool GInsDataSource_HighSpeedPort_GetBuffers(const std::string& hostName, double TimeoutSec, std::vector<TDataSourceHSPBufferInfo>& buffers)
	{
		GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());
		double bufCount = 0;
		if (!IGInsDataSource_HighSpeedPort_GetInfo(hostName.c_str(), TimeoutSec, THSPDataSourceInfoId::GInsHSPDataSourceInfoID_SourceCount, 0, NULL, &bufCount, NULL, 0))
			return false;

		for (uint32_t i = 0; i<bufCount; i++)
		{
			char 	temp[128] = { 0 };
			double  num=0;
			TDataSourceHSPBufferInfo info;
			if (IGInsDataSource_HighSpeedPort_GetInfo(NULL, TimeoutSec,THSPDataSourceInfoId::GInsHSPDataSourceInfoID_SourceIndex, i, NULL, &num, NULL, 0))
				info.m_Index = (uint32_t)num;
			if (IGInsDataSource_HighSpeedPort_GetInfo(NULL, TimeoutSec, THSPDataSourceInfoId::GInsHSPDataSourceInfoID_SourceUUID, i, NULL, NULL, temp, sizeof(temp)))
				info.m_UUID.assign(temp);
			if (IGInsDataSource_HighSpeedPort_GetInfo(NULL, TimeoutSec, THSPDataSourceInfoId::GInsHSPDataSourceInfoID_SourceName, i, NULL, NULL, temp, sizeof(temp)))
				info.m_Name.assign(temp);
			if (IGInsDataSource_HighSpeedPort_GetInfo(NULL, TimeoutSec, THSPDataSourceInfoId::GInsHSPDataSourceInfoID_SourceType, i, NULL, &num, NULL, 0))
				info.m_Type = (TDataBufferIndent)(int)num;
			if (IGInsDataSource_HighSpeedPort_GetInfo(NULL, TimeoutSec, THSPDataSourceInfoId::GInsHSPDataSourceInfoID_SourceSize, i, NULL, &num, NULL, 0))
				info.m_Size = (size_t)num;
			if (IGInsDataSource_HighSpeedPort_GetInfo(NULL, TimeoutSec, THSPDataSourceInfoId::GInsHSPDataSourceInfoID_SourceDataRate, i, NULL, &num, NULL, 0))
				info.m_DataRate = num;

			buffers.push_back(info);
		}
		return true;
	}
#ifdef	_GINSXMLRPCSTDAPI_TYPES_H
	/**
	 * Get stream source infos
	 *
	 * @param sid				Source ID filter
	 * @param mid				Measurement ID filter
	 * @param minTs				Start time filter
	 * @param maxTs				End time Filter
	 * @param measCountLimit	Limit number of measurements (>0: measurement limit, <0: all, 0: result is source info)
	 * @param sortDescending	Order descending or ascending
	 * @param streamInfo		Result info as json value
	 *
	 * @return success
	 */
	static bool GInsDataSource_AutoBackend_GetInfo(const std::string& sid, const std::string& mid, uint64_t minTs, uint64_t maxTs, int32_t measCountLimit, bool sortDescending,GInsXmlRpcStdAPI::CGIns_StreamInfo &streamInfo)
	{
		GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());

		const char *info = IGInsDataSource_AutoBackend_GetInfo(sid.c_str(),mid.c_str(),minTs,maxTs,measCountLimit,sortDescending);
		if (info)
		{
			try
			{
				size_t offset = 0;
				streamInfo.fromXml(info, &offset);
			}
			catch (...)
			{
				return false;
			}

			return true;
		}

		return false;
	}
#endif
	/**
	 * Delete source from data backend
	 *
	 * @param gicloudAPI	deprecated optional parameter to override endpoint URL (empty string for auto URL)
	 * @param sid			Source UUID
	 */
	static bool GInsDataSource_Kafka_DeleteSID(const std::string& gicloudAPI, const std::string &sid)
	{
		GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());
		return IGInsDataSource_Kafka_DeleteSID(gicloudAPI.c_str(), sid.c_str());
	}
	/**
	 * Get mapping of variable ID to GQL ID
	 *
	 * @param sid	Source UUID
	 * @param map	Result mapping filled with key=<variable uuid>, value=<gql id>
	 *
	 * @return success
	 *
	 * The GQL API uses different id's for variable identifications (shorter and more efficient to store in data base)
	 * This function can be used to resolve variable UUID's to GQL id's
	 */
	static bool GInsDataSource_GetGQLVariableMapping(const std::string& sid,std::map<std::string,std::string>& map)
	{
		GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());
		std::string tempUUID="";
		std::string tempGQLID="";
		uint32_t 	found=0;
		const char*	pos = IGInsDataSource_GetGQLVariableMapping(sid.c_str());
		if(pos != NULL)
		{
			while(pos!=NULL)
			{
				pos=strstr(pos,"[\"");
				if(pos!=NULL)
				{
					pos+=2;
					const char* pos1 = strstr(pos,"\",\"");
					if(pos1!=NULL)
					{
						tempUUID.assign(pos,pos1-pos);
						pos1+=3;
						pos = strstr(pos1,"\"]");
						if(pos!=NULL)
						{
							tempGQLID.assign(pos1,pos-pos1);
							pos+=2;
							if(tempGQLID.size()>0 && tempUUID.size()>0)
							{
								map[tempUUID]=tempGQLID;
								found++;
							}
						}
					}
				}
			}
		}
		return found>0;
	}
	/**
	* Duplicate data source.\n
	*
	* @return new data source client instance
	*
	* Internal variables will be copied tepending on implementation
	*/
	GInsDataSourcePtr CopyDataSourcePtr()
	{
		GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());
		IGInsDataSource *rPtr = this->Copy();
		if (rPtr){ return GInsDataSourcePtr(rPtr, std::mem_fn(&IGInsDataSource::Release)); }
		else{ return GInsDataSourcePtr(); }
	}
	static GInsDataSourcePtr CopyDataSourcePtr(IGInsDataSource *src)
	{
		IGInsDataSource *rPtr = src->Copy();
		if (rPtr){ return GInsDataSourcePtr(rPtr, std::mem_fn(&IGInsDataSource::Release)); }
		else{ return GInsDataSourcePtr(); }
	}
	/**
	* Set Event handler.\n
	*
	* @param	handlerPtr	Pointer to event handler object instance
	*
	* @return success
	*
	* Set an event observation object.\n
	*/
	virtual bool CALL RegisterEventHandler(IGInsDataEventHandler* handlerPtr) = 0;

	virtual size_t 		GetHeaderDataSize() = 0;
	virtual const char* GetHeaderData() = 0;

	virtual TDataSourceType GetType() = 0;

	/**
	* Initialization function to ensure that static variables are created
	* This ensures that static mutex can be instantiated before multiple threads could do it in an unsafe way
	*/
	static void InitInterface()
	{
		std::lock_guard<GINS_MUTEX> lock(Mutex());
		std::cout << "IGInsDataSource: intialize interface" << std::endl;
	}

	virtual ~IGInsDataSource();
protected:
	virtual void CALL Release() = 0;
#ifdef GINS_INTERNAL
public:
	//for internal use only
	//don't use them, because they cannot be called savely through dll boundries
	virtual const DataHeader& CALL 	Header() = 0;
	//virtual const std::string& CALL	GetHeaderData() = 0;
#endif
private:
	//Never returns NULL, but not thread save!
	virtual const char* CALL GetLastErrorStr(int &errorCode) = 0;
	virtual IGInsDataSource* CALL	 Copy() = 0;
private:
	static GINS_MUTEX& 			Mutex(){static GINS_MUTEX mtx; return mtx;}
};

} // namespace Data
} // namespace GIns
