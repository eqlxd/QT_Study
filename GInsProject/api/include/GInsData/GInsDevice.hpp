/**
 * @file	GInsDevice.hpp
 * @author  sls <www.gantner-instruments.com>
 * @version 1.0
 *
 * @section DESCRIPTION
 *
 * IGInsDevice is the interfaces to access a Gantner Instruments controller except streamed data.
 * Either directly on the controller or via network.
 */
#pragma once

namespace GIns {
namespace Data {

class IGInsDevice;
typedef std::shared_ptr<IGInsDevice> GInsDevicePtr;

/**
 * @brief Factory function
 */
extern "C" GINSDATA_API IGInsDevice* CALL CreateIGInsDevice_HighSpeedPort(const char* IPAddress, double TimeoutSec);
extern "C" GINSDATA_API IGInsDevice* CALL CreateIGInsDevice_HighSpeedPort_NoAutoReconnect(const char* IPAddress, double TimeoutSec);
extern "C" GINSDATA_API IGInsDevice* CALL CreateIGInsDevice_ProcessImage(void);
/**
 * the maximum number of bytes to be copied to any output circle buffer at once
 */
const size_t OutputCircleBuffer_MaxTransferBuffer=MAX_DATA_TRANSFER_BUFFER;
/**
 * @section DESCRIPTION
 *
 * The device class provides read and write access to the online process image.
 * Also it provides system and diagnostic information.
 *
 */
class  IGInsDevice
{
public:
	//! system state machine states
	enum SMState
	{
		GInsSMStateInit,
		GInsSMStateIdle,
		GInsSMStatePreConfig,
		GInsSMStateConfig,
		GInsSMStateConfigAuto,
		GInsSMStatePreOperational,
		GInsSMStateOperational,
		GInsSMStateTerminate
	};
	typedef struct
	{
		std::string m_Name;
		std::string m_FileIdent;
		size_t		m_Size;
		uint32_t	m_Attr;
	}TFileInfo;
	typedef struct
	{
		uint32_t    m_CycleCount;
		uint32_t	m_ErrorCount;
	}TDiagnosticInfo;
	/**
	 * @brief Create IGInsDevice instance for HighSpeedPort communication in a shared pointer
	 *
	 * @param IPAddress
	 *
	 * @return	shared pointer to IGInsDevice instance
	 *
	 * @details A new instance of a IGInsDevice is allocated with the "c" style function CreateIGInsDevice_HighSpeedPort.\n
	 *          If the returned pointer is not NULL, the construction succeeded and the raw pointer is packed to a std::shared_ptr.\n
	 *          To be able to use the IGInsDevice interface class through shared libraries (.dll or .so), a custom deleter function has to be provided for the shared pointer.\n
	 */
	static GInsDevicePtr CreateIGInsDevicePtr(const std::string &IPAddress, double TimeoutSec=5)
	{
	    IGInsDevice *rPtr = CreateIGInsDevice_HighSpeedPort(IPAddress.c_str(),TimeoutSec);
	    if(rPtr)
	    {
		    return GInsDevicePtr(rPtr, std::mem_fn(&IGInsDevice::Release));
	    }
	    else
	    {
		    return GInsDevicePtr();
	    }
	}
	static GInsDevicePtr CreateIGInsDevicePtr_HighSpeedPort_NoAutoReconnect(const std::string &IPAddress, double TimeoutSec=5)
	{
	    IGInsDevice *rPtr = CreateIGInsDevice_HighSpeedPort_NoAutoReconnect(IPAddress.c_str(),TimeoutSec);
	    if(rPtr)
	    {
		    return GInsDevicePtr(rPtr, std::mem_fn(&IGInsDevice::Release));
	    }
	    else
	    {
		    return GInsDevicePtr();
	    }
	}
	/**
	 * @brief Create IGInsDevice instance for local process image communication in a shared pointer
	 *
	 * @return	shared pointer to IGInsDevice instance
	 *
	 * @details A new instance of a IGInsDevice is allocated with the "c" style function CreateIGInsDevice_ProcessImage.\n
	 *          If the returned pointer is not NULL, the construction succeeded and the raw pointer is packed to a std::shared_ptr.\n
	 *          To be able to use the IGInsDevice interface class through shared libraries (.dll or .so), a custom deleter function has to be provided for the shared pointer.\n
	 */
	static GInsDevicePtr CreateIGInsDevicePtr(void)
	{
		IGInsDevice *rPtr = CreateIGInsDevice_ProcessImage();
		if (rPtr)
		{
			return GInsDevicePtr(rPtr, std::mem_fn(&IGInsDevice::Release));
		}
		else
		{
			return GInsDevicePtr();
		}
	}
    /**
     * Check if the System is operational
     *
     * @return	success
     *
     * Calls reload automatically if operational state is detected but internal states not initialized yet!
     */
	virtual bool CALL IsOperational() = 0;
    /**
     * Get the system state machine state. (not working via network)
     *
     * @return	state machine state
     */
	virtual SMState CALL GetSMState() = 0;
	/**
	 * List files on device
	 *
	 * @param DriveIdent	subpath where to search for files
	 * @param FileList		list of all files
	 * @return	success
	 *
	 * This method is only supported when connected via network
	 *
	 * ATTENTION: not thread save!!
	 */
	bool ReadDirectory(const std::string &DriveIdent,std::vector<IGInsDevice::TFileInfo>& FileList)
	{
		GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());
		uint16_t fileCount=this->ReadDirectoryInfo_Call(DriveIdent.c_str());
		for (uint16_t i = 0; i<fileCount; i++)
		{
			IGInsDevice::TFileInfo info;
			if(!ReadDirectoryInfo_FileSize(i,info.m_Size,info.m_Attr))
				continue;
			
			const char* ptr = ReadDirectoryInfo_FileName(i);
			if(ptr)
				info.m_Name.assign(ptr);

			ptr = ReadDirectoryInfo_FileIdent(i);
			if(ptr)
				info.m_FileIdent.assign(ptr);

			FileList.push_back(info);
		}
		return FileList.size() == fileCount;
	}
	/**
	 * Read file data to local file
	 *
	 * @param FileIdent			file identification string as returned by "ReadDirectory"
	 * @param DestinationPath	local destination path
	 * @return success
	 *
	 * This method is only supported when connected via network
	 */
	virtual bool CALL ReadFileData(const char *FileIdent, const char *DestinationPath) = 0;
	/**
	 * Delete file on device
	 *
	 * @param FileIdent	file identification string as returned by "ReadDirectory"
	 * @return success
	 *
	 * This method is only supported when connected via network
	 */
	virtual bool CALL DeleteDeviceFile(const char *FileIdent) = 0;
	/**
	 * Read size of file on the device
	 *
	 * @param FileIdent	file identification string as returned by "ReadDirectory"
	 * @param FileSize  size of the remote file
	 * @return success
	 *
	 * This method is only supported when connected via network
	 */
	virtual bool CALL ReadFileSize(const char *FileIdent, size_t &FileSize) = 0;
	/**
	 * Get device system states
	 *
	 * @param GeneralStates	general device states
	 * @param RunStates		bitset over running services on the device
	 * @param ErrorStates	bitset over error states on the device
	 *
	 * @return success
	 */
	virtual bool CALL ReadStates(uint32_t &GeneralStates, uint32_t &RunStates, uint32_t &ErrorStates) = 0;
	/**
	 * @brief Read the real time clock of this device
	 *
	 * @param Year
	 * @param Month
	 * @param Day
	 * @param Hour
	 * @param Minute
	 * @param Second
	 * @param MilliSecond
	 *
	 * @return success
	 */
	virtual bool CALL ReadRTC(uint16_t &Year, uint8_t &Month, uint8_t &Day, uint8_t &Hour, uint8_t &Minute, uint8_t &Second, uint16_t &MilliSecond) = 0;
	/**
	 * @brief Set the real time clock of this device
	 *
	 * @param Year
	 * @param Month
	 * @param Day
	 * @param Hour
	 * @param Minute
	 * @param Second
	 * @param MilliSecond
	 *
	 * @return success
	 */
	virtual bool CALL WriteRTC(uint16_t Year, uint8_t Month, uint8_t Day, uint8_t Hour, uint8_t Minute, uint8_t Second, uint16_t MilliSecond) = 0;
	/**
	 * @brief read module and interface communication diagnostic (cycle - and error count)
	 *
	 * @param interfaces	diagnostic info for slave interfaces
	 * @param modules    	diagnostic info for slave modules
	 *
	 * @return success
	 */
    bool ReadDiagnostic(std::vector<TDiagnosticInfo> &interfaces, std::vector<TDiagnosticInfo> &modules)
	{
		GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());
		uint16_t ifCount=0,trCount=0;
		interfaces.clear();
		modules.clear();
		if(ReadDiagnostic_Call(ifCount,trCount)){
			for (uint16_t i = 0; i<ifCount; i++){
				TDiagnosticInfo info;
				if(ReadDiagnostic_Interface(i,info.m_CycleCount,info.m_ErrorCount)){
					interfaces.push_back(info);
				}
			}
			for (uint16_t i = 0; i<trCount; i++){
				TDiagnosticInfo info;
				if(ReadDiagnostic_Module(i,info.m_CycleCount,info.m_ErrorCount)){
					modules.push_back(info);
				}
			}
			return true;
		}
		return false;
	}
    /**
     * @brief Reload controller information
     *
     * @return	success
     *
     * Has to be done after system state machine change because controller configuration could be changed.
     * If on controller, init is called automatically if not already done
     */
	virtual bool CALL Reload() = 0;
	/**
	 * @brief Creates a new or reuses an existing output circle buffer
	 *
	 * @param ByteOffset			offset in the output process image
	 * @param ByteCount				number of byte in the output process image
	 * @param UseAbsTimeStamp		if an absolute timestamp should be used to define the time when the value should be written
	 * @param SyncFirstTimeStamp	if writing should start immeadiate without waiting for the first timestamp time
	 * @param BufferedFrames		capacity of the OutputCircleBuffer as frame count
	 *
	 * @return success
	 *
	 * Only available on Q.Station\n
	 * Use AbsTime if the output data frames are not time equidistant or if the resolution doesn't correclate to the "SystemCycleFrequency" of the system!\n
	 *
	 * If "UseAbsTimeStamp" is set, every data frame must contain an uint64_t Timestamp counting nano seconds in front of the output values.\n
	 */
	virtual bool CALL InitOutputCircleBuffer(size_t ByteOffset, size_t ByteCount, bool UseAbsTimeStamp, bool SyncFirstTimeStamp, size_t BufferedFrames) = 0;
	/**
	 * @brief Frees a previously initialized output circle buffer
	 *
	 * @return success
	 */
	virtual bool CALL DeleteOutputCircleBuffer() = 0;
	/**
	 * @brief Reads the actual number of data frames in the output buffer
	 *
	 * @param bufferSize	number of frames in the output buffer
	 *
	 * @return success
	 */
	virtual bool CALL GetSizeOutputCircleBuffer(size_t &bufferSize) = 0;
	/**
	 * @brief Appends a block of data to the output circle buffer
	 *
	 * @param data				pointer to a data block
	 * @param dataSize			size of the data block in byte
	 * @param bufferSize_before	number of frames in the output buffer before appending
	 * @param bufferSize_after	number of frames in the output buffer after appending
	 *
	 * @return success
	 */
	virtual bool CALL AppendDataOutputCircleBuffer(const char *data, size_t dataSize, size_t &bufferSize_before, size_t &bufferSize_after) = 0;
	/**
	 * @brief Get the last event from this instance.
	 *
	 * @param errorCode the error code as integer or 0 if no error
	 *
	 * @return a std::string either containing a error message or empty
	 */
	 int32_t GetLastError(std::string &message)
	 {
		GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());
		int errorCode=0;
		const char* msg = GetLastErrorStr(errorCode);
		if (msg && errorCode != 0){
			message.assign(msg);
		}
		return errorCode;
	 }
	/**
	 * Provides the data header for this interface
	 *
	 * @return a const reference to the data header
	 */
	virtual const GIns::Data::IGInsDataHeader* CALL HeaderInterface() = 0;
    /**
     * reads the whole process image to dataPtr
     *
     * @param [out]	dataPtr		data buffer where data will be written to
     *
     * @param [in] dataPtrSize 	allocated size of dataPtr (max limit)
     * @param [in] sync 		if call should block until next system cycle before reading values
     *
     * @return	success
     */
	virtual bool CALL GetFrame_Full(char *dataPtr, size_t dataPtrSize, bool sync) = 0;
    /**
     * reads part of the process image to the same dataPtr offset
     *
     * @param [out]	dataPtr		local copy of process image
     *
     * @param [in] dataPtrSize 	allocated size of dataPtr (max limit)
     * @param [in] offset 		start position where to read from process image and write to dataPtr
     * @param [in] length 		length of data o be read / written
     * @param [in] sync 		if call should block until next system cycle before reading values
     *
     * @return	success
     *
     * This function works like synchronizing the process image (or parts) to a local process image copy (dataPtr).
     */
	virtual bool CALL GetFrame_Part(char *dataPtr, size_t dataPtrSize, size_t offset, size_t length, bool sync) = 0;
    /**
     * Read part of the actual process image to dataPtr
     *
     * @param [out]	dataPtr 	data buffer with actual input values
     *
     * @param [in] dataPtrSize 	allocated size of dataPtr (max limit)
     * @param [in] srcOffset 	start position where to read from process image
     * @param [in] destOffset 	start position where to write to dataPtr
     * @param [in] length 		length of data o be read from process image and written to dataPtr
     * @param [in] sync 		if call should block until next system cycle before reading values
     *
     * @return	success
     *
     */
	virtual bool CALL GetFrame_PartToBuffer(char *dataPtr, size_t dataPtrSize, size_t srcOffset, size_t destOffset, size_t length, bool sync) = 0;
    /**
     * Read part of the actual output process image to dataPtr
     *
     * @param [out]	dataPtr 	data buffer with actual output values
     *
     * @param [in] dataPtrSize 	allocated size of dataPtr (max limit)
     * @param [in] srcOffset 	start position where to read from process image
     * @param [in] destOffset 	start position where to write to dataPtr
     * @param [in] length 		length of data o be read from process image and written to dataPtr
     * @param [in] sync 		if call should block until next system cycle before reading values
     *
     * @return	success
     *
     */
	virtual bool CALL GetOutputFrame_PartToBuffer(char *dataPtr, size_t dataPtrSize, size_t srcOffset, size_t destOffset, size_t length, bool sync) = 0;
    /**
     * write the whole frame from dataPtr to the output process image
     *
     * @param [in] dataPtr 		data buffer with actual values to be written
     * @param [in] dataPtrSize 	allocated size of dataPtr (max limit)
     * @param [in] sync 		if call should block until next system cycle before writing values
     *
     * @return	success
     */
	virtual bool CALL SetFrame_Full(const char *dataPtr, size_t dataPtrSize, bool sync) = 0;
    /**
     * write parts of the data frame from dataPtr to the same offset in the output process image
     *
     * @param [in] dataPtr 		data buffer with output values to be written
     * @param [in] dataPtrSize 	allocated size of dataPtr (max limit)
     * @param [in] offset 		start position to read from dataPtr and write to process image
     * @param [in] length 		length of data o be read /written
     * @param [in] sync 		if call should block until next system cycle before writing values
     *
     * This function works like synchronizing a local process image copy (or parts) to the process image
     *
     * @return	success
     */
	virtual bool CALL SetFrame_Part(const char *dataPtr, size_t dataPtrSize, size_t offset, size_t length, bool sync) = 0;
    /**
     * Write part of the data frame from dataPtr to the specified offset in the output process image
     *
     * @param [in] dataPtr 		data buffer with output values to be written
     * @param [in] dataPtrSize 	allocated size of dataPtr (max limit)
     * @param [in] srcOffset 	start position to read from dataPtr
     * @param [in] destOffset 	start position to write to process image
     * @param [in] length 		length of data o be read /written
     * @param [in] sync 		if call should block until next system cycle before writing values
     *
     * @return	success
     */
	virtual bool CALL SetFrame_PartFromBuffer(const char *dataPtr, size_t dataPtrSize, size_t srcOffset, size_t destOffset, size_t length, bool sync) = 0;
    /**
     * Write part of the data frame from dataPtr to the specified offset in the input process image
     *
     * @param [in] dataPtr 		data buffer with input values to be written
     * @param [in] dataPtrSize 	allocated size of dataPtr (max limit)
     * @param [in] srcOffset 	start position to read from dataPtr
     * @param [in] destOffset 	start position to write to input process image
     * @param [in] length 		length of data o be read /written
     *
     * @return	success
     *
     * This function is only available on local devices and not implemented on highspeed port devices!
     */
	virtual bool CALL SetInputFrame_PartFromBuffer(const char *dataPtr, size_t dataPtrSize, size_t srcOffset, size_t destOffset, size_t length) = 0;
    /**
     * @brief read input variable to double value
     *
     * @param [in] variable reference to a GIns::DataVariable
     * @param [out] value 	the double output variable
     *
     * @return	success
     *
     * @details e.g. to get the value of a sensor input value
     */
	virtual bool CALL GetInputVariableValue_Double(const GIns::Data::IGInsVariable &variable, double &value) = 0;
    /**
     * @brief read input variable to double value by index
     *
     * @param [in]  index	total variable index
     * @param [out] value 	the double output variable
     *
     * @return	success
     *
     * @details e.g. to get the value of a sensor input value
     */
	virtual bool CALL GetInputVariableValue_Double_Index(uint16_t index, double &value) = 0;
    /**
     * @brief read input variable to buffer
     *
     * @param [in] 	variable 		reference to a GIns::DataVariable
     * @param [out] dest 			buffer where value will be written to
     *
     * @return	success
     *
     * @details e.g. to get the value of a sensor input value
     * @details size of dest must be at least 8 byte
     */
	virtual bool CALL GetInputVariableValue_Raw(const GIns::Data::IGInsVariable &variable, char *dest) = 0;
    /**
     * @brief read output variable to double value.
     *
     * @param [in] 	variable 		reference to a GIns::DataVariable
     * @param [out] value 			the double output variable
     * @param [out] onHostEvent 	true if host access since last reading
     *
     * @return	success
     *
     * @details e.g. to get the value that was written to a setpoint by any interface.
     */
	virtual bool CALL GetOutputVariableValue_Double(GIns::Data::IGInsVariable &variable, double &value, bool &onHostEvent) = 0;
    /**
     * @brief read output variable to double value by index
     *
     * @param [in] 	index			total variable index
     * @param [out] value 			the double output variable
     * @param [out] onHostEvent 	true if host access since last reading
     *
     * @return	success
     *
     * @details e.g. to get the value that was written to a setpoint by any interface.
     */
	virtual bool CALL GetOutputVariableValue_Double_Index(uint16_t index, double &value, bool &onHostEvent) = 0;
    /**
     * @brief read output variable to buffer.
     *
     * @param [in] variable 		reference to a GIns::DataVariable
     * @param [out] dest 			buffer where value will be written to
     * @param [out] onHostEvent 	true if host access since last reading
     *
     * @return	success
     *
     * @details e.g. to get the value that was written to a setpoint by any interface.
     * @details size of dest must be at least 8 byte
     *
     */
	virtual bool CALL GetOutputVariableValue_Raw(GIns::Data::IGInsVariable &variable, char *dest, bool &onHostEvent) = 0;
    /**
     * @brief write double value to output variable
     *
     * @param [in] variable reference to a GIns::DataVariable
     * @param [in] value 	the double value to be written
     *
     * @return	success
     */
	virtual bool CALL SetOutputVariableValue_Double(const GIns::Data::IGInsVariable &variable, double value) = 0;
    /**
     * @brief write double value to output variable by index
     *
     * @param [in] index	total index of variable
     * @param [in] value 	the double value to be written
     *
     * @return	success
     */
	virtual bool CALL SetOutputVariableValue_Double_Index(uint16_t index, double value) = 0;
    /**
     * @brief write value to output variable
     *
     * @param [in] variable reference to a GIns::DataVariable
     * @param [in] src 		buffer with raw value
     *
     * @details This function will either copy the raw value from src.
     * @details If a converter is configured for this variable, a type conversion will be performed from the specified type
     *
     * @return	success
     */
	virtual bool CALL SetOutputVariableValue_Raw(const GIns::Data::IGInsVariable &variable, const char *src) = 0;
    /**
     * @brief write double value to input variable
     *
     * @param [in] variable reference to a GIns::DataVariable
     * @param [in] value 	the double value to be written
     *
     * @return	success
     */
	virtual bool CALL SetInputVariableValue_Double(const GIns::Data::IGInsVariable &variable, double value) = 0;
    /**
     * @brief write double value to input variable by index
     *
     * @param [in] index	total index of variable
     * @param [in] value 	the double value to be written
     *
     * @return	success
     */
	virtual bool CALL SetInputVariableValue_Double_Index(uint16_t index, double value) = 0;
    /**
     * @brief write value to input variable
     *
     * @param [in] variable reference to a GIns::DataVariable
     * @param [in] src 		buffer with raw value
     *
     * @return	success
     *
     * @details This function will either copy the raw value from src.
     * @details If a converter is configured for this variable, a type conversion will be performed from the specified type.
     */
	virtual bool CALL SetInputVariableValue_Raw(const GIns::Data::IGInsVariable &variable, const char *src) = 0;
	/**
	* @brief read/write raw data within single request
	*
	* @param [in] OffsetWrite	binary destination offset in the processimage
	* @param [in] LengthWrite 	length of data to be written
	* @param [in] DataWrite 	binary data to be written
	* @param [in] OffsetRead 	binary source offset in the process image
	* @param [in] LengthRead 	length of data to be read
	*
	* @param [out] DataRead 	destination buffer for data read
	*
	* @return	success
	*/
	virtual bool CALL ReadWriteRawValues(size_t OffsetWrite, size_t LengthWrite, const char* DataWrite, size_t OffsetRead, size_t LengthRead, char *DataRead) = 0;
	/**
	 * @brief request synchronous mode for data transfer
	 *
	 * @param [in] SyncDivider	sync interval reduction to get data slower than the internal RT rate
	 *
	 * @return	success
	 *
	 * @details Only a few sync channels are available on the system.
	 * @details Data access functions with postfix "sync" have to be used, all other functions are not affected.
	 * @details The call to "sync" functions is blocked until new synchronized data is available.
	 * @details Closing the project image connection makes a sync channel available for other connections.
	 */
	virtual bool CALL RequestSynchronousDataTransfer(uint32_t SyncDivider) = 0;
	/**
	 * @brief release function
	 *
	 * @details needed to destruct the device when constructed through shared library boundaries
	 */
	virtual void CALL Release() = 0;
	virtual ~IGInsDevice();
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
	virtual const char* CALL GetLastErrorStr(int &errorCode) = 0;
	virtual uint16_t	CALL ReadDirectoryInfo_Call(const char *driveIdent) = 0;
	virtual bool		CALL ReadDirectoryInfo_FileSize(uint16_t FileIndex, size_t &FileSize, uint32_t &FileAttr) = 0;
	virtual const char*	CALL ReadDirectoryInfo_FileName(uint16_t FileIndex) = 0;
	virtual const char* CALL ReadDirectoryInfo_FileIdent(uint16_t FileIndex) = 0;
	virtual bool 		CALL ReadDiagnostic_Call(uint16_t &InterfaceCount, uint16_t &ModuleCount) = 0;
	virtual bool 		CALL ReadDiagnostic_Module(uint16_t ModuleIndex, uint32_t &CycleCount, uint32_t &ErrorCount) = 0;
	virtual bool 		CALL ReadDiagnostic_Interface(uint16_t ModuleIndex, uint32_t &CycleCount, uint32_t &ErrorCount) = 0;
private:
	static GINS_MUTEX& 	Mutex(){static GINS_MUTEX mtx; return mtx;}
};

typedef IGInsDevice BasicDevice;

} // namespace Data
} // namespace GIns
