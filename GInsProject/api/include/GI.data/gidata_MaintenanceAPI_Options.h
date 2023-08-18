#pragma once

//================================================================================================================================================
// MakeInterfaceOptionFile V1.01 2017-06-17 - automatically generated file, do not edit !
//================================================================================================================================================

#include <string>

//================================================================================================================================================
namespace gidata_MaintenanceAPI {
//================================================================================================================================================
class COptions
{
    public: class CHandleProject
    {
        public: class CAction
        {
            public: static std::string const &ClearProject(void){	static std::string Result("clear");	return (Result);	}
            public: static std::string const &StartProject(void){	static std::string Result("start");	return (Result);	}
            public: static std::string const &SaveProject(void){	static std::string Result("save");	return (Result);	}
        }; // class CAction
    }; // class CHandleProject
}; // class COptions
//================================================================================================================================================
} // namespace gidata_MaintenanceAPI
//================================================================================================================================================
