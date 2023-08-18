/**
* BasicDataBuffer.hpp
*
*  Created on: Oct 7, 2013
*      Author: sls
*
*/
#pragma once

/**
* DataLogger:
*
* A DataLogger is able to read or save data from data buffers to a configurable data format.
*
* DataBuffer 		-> DataLogger 	-> FileArchive
* DataFile(UDBF) 	-> DataLogger 	-> DataFileCSV
* DataBuffer 		-> DataLogger 	-> JsonDocument
* DataBuffer 		-> DataLogger 	-> FFTSpectrum
*
*/

namespace GIns {
namespace Data {

	class IGInsDataStreamer;
	class IGInsDataSource;
	/**
	* @brief factory functions for internal use
	*/
	extern "C" GINSDATA_API IGInsDataStreamer* CALL CreateIGInsDataStreamer(IGInsDataSource* src);
	extern "C" GINSDATA_API IGInsDataStreamer* CALL CreateIGInsDataStreamer_HighSpeedPort(const char* IPAddress, uint16_t bufferIndex, double TimeoutSec, TDataBufferIndent bufferType);
	extern "C" GINSDATA_API IGInsDataStreamer* CALL CreateIGInsDataStreamer_PostProcessBuffer(const char* ID);
	extern "C" GINSDATA_API IGInsDataStreamer* CALL CreateIGInsDataStreamer_ProcessBuffer(uint32_t index);
	extern "C" GINSDATA_API IGInsDataStreamer* CALL CreateIGInsDataStreamer_FileArchive(const char* baseFilePath, const char* MeasurementID);
	extern "C" GINSDATA_API bool 			 CALL LoggerDataBase_AddDataFile_UDBF(const char* baseFilePath,
																				  const char* fullFileName,
																				  const char* deviceName,
																				  const char* deviceID,
																				  const char* deviceSNR,
																				  const char* sourceName,
																				  const char* sourceID,
																				  const char* measurementName,
																				  const char* measurementID);
	typedef std::shared_ptr<IGInsDataStreamer> GInsDataStreamerPtr;
	class IGInsDataStreamer
	{
	public:
		struct TDataLoggerMeasurement
		{
			std::string m_Name;
			std::string	m_Id;
			size_t		m_AvailableSamples;
			size_t		m_MaximumSamples;
			int64_t		m_StartEpochTime_Ms;
			int64_t		m_EndEpochTime_Ms;
			std::vector<GIns::Data::IGInsVariablePtr>	m_Variables;
		};
	public:
		static GInsDataStreamerPtr Create(GIns::Data::GInsDataSourcePtr src)
		{
			IGInsDataStreamer *rPtr = CreateIGInsDataStreamer(src.get());//This will copy the source instance
			if (rPtr)
			{
				return GInsDataStreamerPtr(rPtr, std::mem_fn(&IGInsDataStreamer::Release));
			}
			else
			{
				return GInsDataStreamerPtr();
			}
		}
		static  GInsDataStreamerPtr Create(const std::string &hostName, uint16_t bufferIndex, double TimeoutSec=5, TDataBufferIndent bufferType = DataBufferType_ProcessBuffer)
		{
			IGInsDataStreamer *rPtr = CreateIGInsDataStreamer_HighSpeedPort(hostName.c_str(), (uint32_t)bufferIndex, TimeoutSec, bufferType);
			if (rPtr)
			{
				return GInsDataStreamerPtr(rPtr, std::mem_fn(&IGInsDataStreamer::Release));
			}
			else
			{
				return GInsDataStreamerPtr();
			}
		}
		static  GInsDataStreamerPtr Create(const std::string &bufferID)
		{
			IGInsDataStreamer *rPtr = CreateIGInsDataStreamer_PostProcessBuffer(bufferID.c_str());
			if (rPtr)
			{
				return GInsDataStreamerPtr(rPtr, std::mem_fn(&IGInsDataStreamer::Release));
			}
			else
			{
				return GInsDataStreamerPtr();
			}
		}
		static  GInsDataStreamerPtr Create(uint32_t bufferIndex)
		{
			IGInsDataStreamer *rPtr = CreateIGInsDataStreamer_ProcessBuffer(bufferIndex);
			if (rPtr)
			{
				return GInsDataStreamerPtr(rPtr, std::mem_fn(&IGInsDataStreamer::Release));
			}
			else
			{
				return GInsDataStreamerPtr();
			}
		}
		static  GInsDataStreamerPtr CreateLogger_FileArchive(const std::string &baseFilePath, const std::string &MeasurementID)
		{
			IGInsDataStreamer *rPtr = CreateIGInsDataStreamer_FileArchive(baseFilePath.c_str(), MeasurementID.c_str());
			if (rPtr)
			{
				return GInsDataStreamerPtr(rPtr, std::mem_fn(&IGInsDataStreamer::Release));
			}
			else
			{
				return GInsDataStreamerPtr();
			}
		}
		bool GetDataLoggerMeasurement(const std::string& uuid, TDataLoggerMeasurement& measurement)
		{
			GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());
			char tempName[64] = { '\0' };
			if (GetMeasurement(uuid.c_str(),
				tempName,
				sizeof(tempName),
				measurement.m_AvailableSamples,
				measurement.m_MaximumSamples,
				measurement.m_StartEpochTime_Ms,
				measurement.m_EndEpochTime_Ms))
			{
				measurement.m_Id.assign(uuid);
				measurement.m_Name.assign(tempName);
				return true;
			}
			return false;
		}
		uint16_t GetDataLoggerMeasurements(std::vector<TDataLoggerMeasurement>& measurements)
		{
			GINS_LOCK_GUARD<GINS_MUTEX> lock(Mutex());
			uint16_t count = GetMeasurementCount();
			for (uint16_t i = 0; i < count; i++)
			{
				TDataLoggerMeasurement measurement;
				char tempName[64] = { '\0' };
				char tempUUID[40] = { '\0' };
				if (GetMeasurement(i,
					tempName,
					sizeof(tempName),
					tempUUID,
					sizeof(tempUUID),
					measurement.m_AvailableSamples,
					measurement.m_MaximumSamples,
					measurement.m_StartEpochTime_Ms,
					measurement.m_EndEpochTime_Ms))
				{
					measurement.m_Name.assign(tempName,strlen(tempName));
					measurement.m_Id.assign(tempUUID,strlen(tempUUID));
					measurements.push_back(measurement);
				}
			}
			return (uint16_t)measurements.size();
		}
		virtual const GIns::Data::IGInsDataHeader* CALL SourceHeaderInterface(const char* uuid) = 0;
		virtual const GIns::Data::IGInsDataSource* CALL DataSource(const char* uuid)=0;
		//Starts a background thread
		virtual bool CALL StartLogging(double BackTimeSec) = 0;
		virtual bool CALL StopLogging() = 0;
		virtual const char* CALL LogToJson(const char*		uuid,
											TMeasDataKind	DataKind,
											bool			ColumnBased,
											bool			TimeEquidistant,
											uint32_t		points,
											double			Interval_ms,
											double			StartEpochTime_ms,
											double			StopEpochTime_ms,
											const char*		variableIDs,
											const char*		variableIndices,
											size_t&			resultSize) = 0;

		virtual const char* CALL LogToCSV(const char* uuid,
									double Interval_ms,
									double StartEpochTime_ms,
									double StopEpochTime_ms,
									const char* CSVStorageSettings,
									const char*	variableIDs,
									size_t& resultSize) = 0;

		virtual bool CALL LogToUDBF_File(uint64_t framecount,
									const char*	variableIDs,
									const std::string& fullFileName) = 0;

		virtual const char* CALL LogToUDBF(const char* uuid,
										double Interval_ms,
										double StartEpochTime_ms,
										double StopEpochTime_ms,
										const char*	variableIDs,
										size_t& resultSize) = 0;

		virtual const char* CALL LogToJson_Ext(const char* uuid,
											TMeasDataKind	DataKind,
											bool			ColumnBased,
											bool			TimeEquidistant,
											uint32_t		points,
											double			Interval_ms,
											double			StartEpochTime_ms,
											double			StopEpochTime_ms,
											const char*		variableIDs,
											const char*		variableIndices,
											size_t&			resultSize,
											const char* ExtendedSettings) = 0;

		virtual const char* CALL LogToCSV_Ext(const char* uuid,
										double Interval_ms,
										double StartEpochTime_ms,
										double StopEpochTime_ms,
										const char* CSVStorageSettings,
										const char*	variableIDs,
										size_t& resultSize,
										const char* ExtendedSettings) = 0;

		virtual const char* CALL LogToUDBF_Ext(const char* uuid,
										double Interval_ms,
										double StartEpochTime_ms,
										double StopEpochTime_ms,
										const char*	variableIDs,
										size_t& resultSize,
										const char* ExtendedSettings) = 0;

		/**
		 * @brief Universal function with logging features specified by ExtendedSettings only
		 */
		virtual const char* CALL Log_Ext(const char* uuid,const char* ExtendedSettings,size_t& resultSize) = 0;

		/**
		* @brief returns the start timestamp of the last logging cycle
		*/
		virtual uint64_t GetLastLogStartTimeDC() = 0;

		virtual void CALL Release() = 0;
		virtual 		~IGInsDataStreamer();
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
		static GINS_MUTEX& 		Mutex(){ static GINS_MUTEX mtx; return mtx; }
		virtual uint16_t CALL GetMeasurementCount() = 0;
		virtual bool CALL GetMeasurement(uint16_t index,   char* name, size_t sizeName, char* uuid, size_t sizeUUID, size_t& availableSamples, size_t& maximumSamples, int64_t& startEpochTime_Ms, int64_t& endEpochTime_Ms) = 0;
		virtual bool CALL GetMeasurement(const char* uuid, char* name, size_t sizeName,								 size_t& availableSamples, size_t& maximumSamples, int64_t& startEpochTime_Ms, int64_t& endEpochTime_Ms) = 0;
	};





} /* namespace Data */
} /* namespace GIns */
