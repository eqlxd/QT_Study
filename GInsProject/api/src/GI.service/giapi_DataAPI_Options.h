#pragma once

//================================================================================================================================================
// MakeInterfaceOptionFile V1.01 2017-06-17 - automatically generated file, do not edit !
//================================================================================================================================================

#include <string>

//================================================================================================================================================
namespace giapi_DataAPI {
//================================================================================================================================================
class COptions
{
    public: class CGetRawDataPackets
    {
        public: class CMode
        {
            public: static std::string const &RawPayloaHex(void){	static std::string Result("TyRaw");	return (Result);	}
            public: static std::string const &DecodedUDBData(void){	static std::string Result("TyUdd");	return (Result);	}
            public: static std::string const &DecodedUDBFHeader(void){	static std::string Result("TyUdh");	return (Result);	}
            public: static std::string const &TextString(void){	static std::string Result("TyTex");	return (Result);	}
            public: static std::string const &JsonStruct(void){	static std::string Result("TyJsn");	return (Result);	}
        }; // class CMode
    }; // class CGetRawDataPackets
}; // class COptions
//================================================================================================================================================
} // namespace giapi_DataAPI
//================================================================================================================================================
