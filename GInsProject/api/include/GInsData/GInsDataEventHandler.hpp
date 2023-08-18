/**
* GInsDataEventHandler.hpp
*
*  Created on: Oct 7, 2013
*      Author: sls
*/
#pragma once

namespace GIns {
	namespace Data {
		class IGInsDataEventHandler
		{

			public:
				enum EventLevel
				{
					EventLevel_Debug = 10,
					EventLevel_Info = 20,
					EventLevel_Warning = 30,
					EventLevel_Error = 40,
					EventLevel_No = 100
				};
				virtual bool CALL Event(const char* Message, int ID, EventLevel Level)=0;
				virtual ~IGInsDataEventHandler() {};

		};
	} /* namespace Data */
} /* namespace GIns */
