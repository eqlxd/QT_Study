#pragma once

//================================================================================================================================================
// MakeInterfaceOptionFile V1.01 2017-06-17 - automatically generated file, do not edit !
//================================================================================================================================================

#include <string>

//================================================================================================================================================
namespace giservice_AdminAPI {
//================================================================================================================================================
class COptions
{
    public: class CCommon
    {
        public: class CBuildType
        {
            public: static std::string const &Trunk(void){	static std::string Result("TyTr");	return (Result);	}
            public: static std::string const &Release(void){	static std::string Result("TyRe");	return (Result);	}
        }; // class CBuildType
        public: class CArchitectureType
        {
            public: static std::string const &x86(void){	static std::string Result("Tyx86");	return (Result);	}
            public: static std::string const &x64(void){	static std::string Result("Tyx64");	return (Result);	}
        }; // class CArchitectureType
    }; // class CCommon
}; // class COptions
//================================================================================================================================================
} // namespace giservice_AdminAPI
//================================================================================================================================================
