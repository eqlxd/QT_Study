/**
 * BasicDataBuffer.hpp
 *
 *  Created on: Oct 7, 2013
 *      Author: sls
 */
#pragma once

namespace GIns {
namespace Data {

class IGInsDataBuffer;
typedef std::shared_ptr<IGInsDataBuffer> GInsDataBufferPtr;

extern "C" GINSDATA_API IGInsDataBuffer* CALL CreateIGInsDataBuffer(const char* BufferName, size_t BufferSize);
extern "C" GINSDATA_API IGInsDataBuffer* CALL CreateIGInsDataBuffer2(const char* BufferName, const char* id, size_t BufferSize, size_t SegmentSize);
extern "C" GINSDATA_API IGInsDataBuffer* CALL CreateIGInsDataBuffer_HighSpeedPort(const char* BufferName, const char* id, const char* HostName, uint16_t bufferIndex, double TimeoutSec, TDataBufferIndent bufferType, uint32_t dataTransferInterval_ms, double startBackTimeSec, size_t BufferSize, size_t SegmentSize);
extern "C" GINSDATA_API IGInsDataBuffer* CALL CreateIGInsDataBuffer_AutoBackend(const char* name,const char* SID,size_t bufferSize,size_t segmentSize,size_t retentionTimeSec, const char* dataTypeIdentifier);
extern "C" GINSDATA_API IGInsDataBuffer* CALL CreateIGInsDataBuffer_UDBFFiles(const char* fullFilePath, size_t maxLengthSeconds, uint16_t options);

extern "C" GINSDATA_API const char* 	 CALL GetBufferName_Index(uint16_t index);
extern "C" GINSDATA_API const char* 	 CALL GetBufferId_Index(uint16_t index);
extern "C" GINSDATA_API uint16_t		 CALL GetBufferCount();
extern "C" GINSDATA_API void 			 CALL DeleteBuffer(IGInsDataBuffer*);
extern "C" GINSDATA_API void 			 CALL DeleteBuffer_ID(const char* id);

extern "C" GINSDATA_API bool			 CALL IsCloudBufferBackendAvailable();
extern "C" GINSDATA_API bool 			 CALL GetTimeRange(const char* uuid, uint64_t* startTimeStampDC,uint64_t* endTimeStampDC);
extern "C" GINSDATA_API bool 			 CALL GetBufferSettings_ID(const char* uuid, uint16_t* index, char* name, size_t nameLen, size_t* bufferSize, size_t* segmentSize);

#define DATABUFFER_UDBF_OPT_UTCTIME (0x0001)

class IGInsDataBuffer
{
public:
	virtual bool CALL	 				InitializeFrame(GIns::Data::FrameBuffer &frameBuffer) = 0;
	virtual bool CALL	 				InitializeFrameSize(size_t width) = 0;

	/**
	 * @brief Append time series data frames from frame buffer
	 *
	 * @param frameBuffer
	 *
	 * @return success
	 */
	virtual bool CALL 					AppendDataFrames(GIns::Data::FrameBuffer &frameBuffer) = 0;

	/**
	 * @brief Append time series data frames from buffer
	 *
	 * @param buffer
	 * @param dataLength
	 *
	 * @return success
	 *
	 * @note InitializeFrame has to be called and header has to be set first!
	 */
	virtual bool CALL 					AppendDataBuffer(const char* buffer, size_t dataLength) = 0;

	/**
	 * @brief Allows appending of non time equidistant miscellaneous data
	 *
	 * @param TimestampDC	timestamp for data blob
	 * @param buffer		pointer to data blob
	 * @param dataLength	size of data blob
	 *
	 * @return	success
	 */
	virtual bool CALL 					AppendMiscData(uint64_t TimestampDC,const char* buffer, size_t dataLength)=0;

	/**
	 * @brief append a custom header
	 *
	 * @param header	binary header data
	 * @param length	size of header data
	 * @return			success
	 *
	 * This function tries to set and decode binary header data
	 *
	 */
	virtual bool CALL					SetHeader_BinaryData(const char *header, size_t length) = 0;

	/**
	 * @brief append a custom header
	 *
	 * @param header	shared pointer to header object
	 * @return			success
	 *
	 */
	virtual bool CALL					SetHeader_Object(GIns::Data::GInsDataHeaderPtr header) = 0;

	/**
	 * @brief Get reference to built in header
	 *
	 * @return reference to the header via interface class
	 *
	 * @details This reference may never be stored locally, it only provides direct access to the internal header!!!
	 */
	virtual const IGInsDataHeader* CALL	HeaderInterface() = 0;

	/**
	 * @brief Delete the instance manually
	 *
	 * @details This is needed to delete resources allocated through shared library boundaries
	 */
	virtual uint16_t CALL				GetAbsoluteIndex() = 0;
	virtual const char* CALL			GetName() = 0;
	virtual const char* CALL			GetTypeName() = 0;
	virtual const char* CALL			GetID() = 0;
	virtual size_t CALL					GetCapacity() = 0;
	virtual size_t CALL					GetAvailableData() = 0;
	virtual void CALL					Release() = 0;
	virtual uint64_t CALL				GetLastInsertedFrameTimeDC() = 0;
	virtual double CALL					GetHandledDataMb() = 0;
	virtual double CALL					GetActualDataRateMBps() = 0;
	virtual double CALL					GetLastClientAccessOle2Time() = 0;
	virtual void CALL					SetDataSourceInfo(const char* SID, const char* Name) = 0;
	virtual void CALL					SetMeasurementInfo(const char* MID, const char* Name) = 0;
	/**
	 * @brief Write all cached data to data backend
	 *
	 * This will write data immediately without taking care of time alignments...
	 */
	virtual void CALL					FlushData() = 0;

	/**
	 * Set an absolute end time when the underlying data segment should be rolled over
	 *
	 * @param endTimeNs	absolute time in nano seconds since 1.1.2000
	 *
	 * Only supported with following data backends:
	 * 		PostPorcess buffer on cloud level with kafka data backend enabled
	 */
	virtual void CALL					SetDataSegmentEndTime(uint64_t endTimeNs) = 0;
	/**
	 * Return the size of a single data segment
	 *
	 * return: size in bytes
	 */
	virtual size_t CALL					GetSegmentSize() = 0;
	virtual 							~IGInsDataBuffer();

	/**
	* @brief Create a simple bata buffer
	*
	* @param BufferName		Human readable name for this buffer
	* @param size			Maximum total buffer size in Byte
	*
	* @return				Shared pointer to buffer, empty if creation failed
	*
	* @details This factory method creates a simple shared data buffer with an auto generated UUID and only one buffer segment with given size
	*/
	static  GInsDataBufferPtr 			Create(const std::string &BufferName,size_t size)
	{
		IGInsDataBuffer *rPtr = CreateIGInsDataBuffer(BufferName.c_str(),size);
		if (rPtr)
		{
			return GInsDataBufferPtr(rPtr, std::mem_fn(&IGInsDataBuffer::Release));
		}
		else
		{
			return GInsDataBufferPtr();
		}
	}
	/**
	* @brief Create a bigger data buffer
	*
	* @param BufferName		Human readable name for this buffer
	* @param id				The unique id for this buffer (empty for auto generate)
	* @param size			Maximum total buffer size in Byte
	* @param segmentSize	Size of a single buffer segment
	*
	* @return				Shared pointer to buffer, empty if creation failed
	*
	* @details This factory method creates a big shared data buffer.\n
	*		   Since data buffers need consistent memory blocks, there could be problems with very big buffers (usually it is not possible to allocate all available memory at once).
	*          To avoid this problem, data buffers can be segmented by specifying a smaller segment size and the buffer will be initialized with size/segmentSize segments.
	*/
	static  GInsDataBufferPtr 			Create(const std::string &BufferName,const std::string& id, size_t size,size_t segmentSize)
	{
		IGInsDataBuffer *rPtr = CreateIGInsDataBuffer2(BufferName.c_str(),id.c_str(), size,segmentSize);
		if (rPtr)
		{
			return GInsDataBufferPtr(rPtr, std::mem_fn(&IGInsDataBuffer::Release));
		}
		else
		{
			return GInsDataBufferPtr();
		}
	}
	/**
	* @brief Create a bigger data buffer with auto load functionality
	*
	* @param BufferName					Human readable name for this buffer
	* @param id							The unique id for this buffer (empty for auto generate)
	* @param hostName					IP address or dns address of the target
	* @param bufferIdex					Index of the buffer/source on the target
	* @param timeoutSec					Communication timeout
	* @param bufferType					Buffer type on target
	* @param dataTransferInterval_ms	Interval for calling data from target
	* @param startBackTimeSec			Included historic time at first call
	* @param size						Maximum total buffer size in Byte
	* @param segmentSize				Size of a single buffer segment
	*
	* @return							Shared pointer to buffer, empty if creation failed
	*
	* @details This factory method creates a big shared data buffer.\n
	*		   Since data buffers need consistent memory blocks, there could be problems with very big buffers (usually it is not possible to allocate all available memory at once).
	*          To avoid this problem, data buffers can be segmented by specifying a smaller segment size and the buffer will be initialized with size/segmentSize segments.
	*/
	static  GInsDataBufferPtr			Create(const std::string &BufferName, const std::string& id, const std::string& hostName, uint16_t bufferIndex, double timeoutSec, TDataBufferIndent bufferType, uint32_t dataTransferInterval_ms, double startBackTimeSec, size_t size, size_t segmentSize)
	{
		IGInsDataBuffer *rPtr = CreateIGInsDataBuffer_HighSpeedPort(BufferName.c_str(), id.c_str(), hostName.c_str(), bufferIndex, timeoutSec, bufferType, dataTransferInterval_ms, startBackTimeSec, size, segmentSize);
		if (rPtr)
		{
			return GInsDataBufferPtr(rPtr, std::mem_fn(&IGInsDataBuffer::Release));
		}
		else
		{
			return GInsDataBufferPtr();
		}
	}
	/**
	 * @brief Creates a data stream with automatic back-end selection
	 *
	 * @param name						Human readable name for this buffer
	 * @param SID						The unique id for this buffer (empty for auto generate)
	 * @param bufferSize				Maximum total buffer size in Byte (set to <= 0 to use retentionTime as only limit)
	 * @param segmentSize				Size of a single buffer segment
	 * @param retentionTimeSec			Time until data will be deleted (overrules bufferSize on some back-ends, ignored if <=0)
	 * @param dataTypeIdentifier		Secret long hole
	 *
	 * @return							Shared pointer to buffer, empty if creation failed
	 *
	 * @details Automatically selects GI.cloud data back-end if proper system environment variables are set.
	 *			Otherwise selects shared memory based back-end.
	 *
	 * ATTENTION:
	 * Do not use shared memory based back-end on docker swarm nodes due to limited shared ram availability!
	 */
	static GInsDataBufferPtr 			Create_AutoBackend(const std::string& name0,const std::string& SID,size_t bufferSize,size_t segmentSize,size_t retentionTimeSec,const std::string& dataTypeIdentifier="raw")
	{
		IGInsDataBuffer *rPtr = CreateIGInsDataBuffer_AutoBackend(name0.c_str(),SID.c_str(),bufferSize,segmentSize,retentionTimeSec,dataTypeIdentifier.c_str());
		if (rPtr)
		{
			return GInsDataBufferPtr(rPtr, std::mem_fn(&IGInsDataBuffer::Release));
		}
		else
		{
			return GInsDataBufferPtr();
		}
	}
	/**
	* @brief Creates a data stream to UDBF file(s)
	*
	* @param fullFilePath				File path or directory path where UDBF file(s) should be stored
	* @param maxLengthSeconds			Maximum length for a single file in seconds
	* @param options					BitSet for future options (not used yet)
	*
	* @return							Shared pointer to buffer, empty if creation failed
	*
	* @details	Essential UDBF header information is set by SetHeader_Object or SetHeader_BinaryData.
	*			FullFilePath is checked if a file name is set or if it is a directory.
	*			If it is a directory, the file name will be the source name from the header.
	*			It it is a file name, date time information will be appended.
	*			In both cases, the full path will be created if not existing.
	*			FlushData can be used to force starting a new file
	*/
	static GInsDataBufferPtr Create_UDBFFile(const std::string& fullFilePath, size_t maxLengthSeconds, uint16_t options)
	{
		IGInsDataBuffer *rPtr = CreateIGInsDataBuffer_UDBFFiles(fullFilePath.c_str(),maxLengthSeconds,options);
		if (rPtr)
		{
			return GInsDataBufferPtr(rPtr, std::mem_fn(&IGInsDataBuffer::Release));
		}
		else
		{
			return GInsDataBufferPtr();
		}
	}

	static uint16_t	GetCount()
	{
		return GetBufferCount();
	}
	/*
	 * @brief Get buffer list
	 *
	 * @param buffers	list of UUID + Name pairs
	 *
	 * @return	number of buffers
	 */
	static size_t GetBuffers(std::vector<std::pair<std::string,std::string>>& buffers)
	{
		return GetBuffers(Mutex(), buffers);
	}
	static size_t GetBuffers(GINS_MUTEX& userMtx,std::vector<std::pair<std::string, std::string>>& buffers)
	{
		GINS_LOCK_GUARD<GINS_MUTEX> lock(userMtx);
		uint16_t bufferCount = GetBufferCount();
		buffers.clear();
		for (uint16_t i = 0; i<bufferCount; i++)
		{
			std::pair<std::string, std::string> buffer;
			const char* ptr = GetBufferName_Index(i);
			if (ptr)
				buffer.second.assign(ptr);

			ptr = GetBufferId_Index(i);
			if (ptr)
				buffer.first.assign(ptr);

			buffers.push_back(buffer);
		}
		return (uint16_t)buffers.size();
	}
	static void Delete(GInsDataBufferPtr ptr){
		if(ptr){
			DeleteBuffer(ptr.get());
			ptr.reset();
		}
	}
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
	std::string GetLastError()
	{
		GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());
		int errorCode = 0;
		return std::string(this->GetLastErrorStr(errorCode));
	}
	/**
	* Initialization function to ensure that static variables are created
	* This ensures that static mutex can be instantiated before multiple threads could do it in an unsafe way
	*/
	static void InitInterface()
	{
		std::lock_guard<GINS_MUTEX> lock(Mutex());
		std::cout << "IGInsDataSource: intialize interface" << std::endl;
	}
private:
	//Never returns NULL, but not thread save!
	virtual const char* CALL GetLastErrorStr(int &errorCode) = 0;
private:
	static GINS_MUTEX& Mutex(){static GINS_MUTEX mtx; return mtx;}
};

} /* namespace Data */
} /* namespace GIns */

