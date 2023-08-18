/**
* GInsDataPostProcessor.hpp
*
*  Created on: Oct 7, 2013
*      Author: sls
*/
#pragma once

namespace GIns {
namespace Data {

	class IGInsDataPostProcessor;
	/**
	* @brief factory functions for internal use
	*/
	extern "C" GINSDATA_API IGInsDataPostProcessor* CALL CreateIGInsDataPostProcessor_FileConfig(const char* ConfigurationFile,uint16_t index);

	typedef std::shared_ptr<IGInsDataPostProcessor> GInsDataPostProcessorPtr;
	class IGInsDataPostProcessor
	{
	public:
		/**
		 * @brief Create IGInsDataPostProcessor from a gcf (gantner configuration file)
		 *
		 * @param ConfigurationFile
		 * @param index
		 *
		 * @return	shared pointer to IGInsDataPostProcessor instance
		 *
		 * @details A new instance of a IGInsDevice is allocated with the "c" style function CreateIGInsDataPostProcessor_FileConfig.\n
		 *          If the returned pointer is not NULL, the construction succeeded and the raw pointer is packed to a std::shared_ptr.\n
		 *          To be able to use the IGInsDataPostProcessor interface class through shared libraries (.dll or .so), a custom deleter function has to be provided for the shared pointer.\n
		 */
		static GInsDataPostProcessorPtr CreateIGInsDataPostProcessorPtr_GCF(const std::string &ConfigFilePaths, uint16_t index)
		{
			IGInsDataPostProcessor *rPtr = CreateIGInsDataPostProcessor_FileConfig(ConfigFilePaths.c_str(),index);
			if(rPtr)
			{
				return GInsDataPostProcessorPtr(rPtr, std::mem_fn(&IGInsDataPostProcessor::Release));
			}
			else
			{
				return GInsDataPostProcessorPtr();
			}
		}
		virtual bool 	CALL Configure_PostProcessToProcessVariable(const char* refName,GIns::Data::IGInsVariable& var) =  0;
		virtual bool    CALL Configure_ProcessVariable(int ValueType,GIns::Data::IGInsVariable &Variable) = 0;
		virtual bool    CALL Configure_ProcessVariableWithSelector(GIns::Data::IGInsVariable &Value,GIns::Data::IGInsVariable &Selector) = 0;
		virtual bool	CALL Start(double BackTimeSec, bool AutoRestart)=0;
		virtual void    CALL Stop()=0;
		virtual bool    CALL Process(int32_t backSamples, size_t& dataProcessed) = 0;
		virtual void 	CALL Release() = 0;
		virtual const GIns::Data::IGInsDataHeader* CALL HeaderInterface() = 0;
		virtual 		~IGInsDataPostProcessor();
	};
} /* namespace Data */
} /* namespace GIns */
