#pragma once

//================================================================================================================================================
// MakeInterfaceOptionFile V1.01 2017-06-17 - automatically generated file, do not edit !
//================================================================================================================================================

#include <string>

//================================================================================================================================================
namespace gicom_ConfigAPI {
//================================================================================================================================================
class COptions
{
    public: class CCommon
    {
        public: class CTraceOutputType
        {
            public: static std::string const &Console(void){	static std::string Result("TyCo");	return (Result);	}
            public: static std::string const &ConsoleAndFile(void){	static std::string Result("TyCoFi");	return (Result);	}
            public: static std::string const &Off(void){	static std::string Result("TyOff");	return (Result);	}
        }; // class CTraceOutputType
    }; // class CCommon
}; // class COptions
//================================================================================================================================================
} // namespace gicom_ConfigAPI
//================================================================================================================================================
