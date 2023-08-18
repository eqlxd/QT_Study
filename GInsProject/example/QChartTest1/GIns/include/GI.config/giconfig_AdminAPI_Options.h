#pragma once

//================================================================================================================================================
// MakeInterfaceOptionFile V1.01 2017-06-17 - automatically generated file, do not edit !
//================================================================================================================================================

#include <string>

//================================================================================================================================================
namespace giconfig_AdminAPI {
//================================================================================================================================================
class COptions
{
    public: class CCommon
    {
        public: class CAccessLockCommand
        {
            public: static std::string const &CheckLock(void){	static std::string Result("TyCheck");	return (Result);	}
            public: static std::string const &GetWriteLock(void){	static std::string Result("TyGetWLock");	return (Result);	}
            public: static std::string const &GetReadWriteLock(void){	static std::string Result("TyGetRWLock");	return (Result);	}
            public: static std::string const &ReleaseLock(void){	static std::string Result("TyRelease");	return (Result);	}
        }; // class CAccessLockCommand
        public: class CUserExperienceType
        {
            public: static std::string const &Standard(void){	static std::string Result("TyStd");	return (Result);	}
            public: static std::string const &Basic(void){	static std::string Result("TyBas");	return (Result);	}
            public: static std::string const &Expert(void){	static std::string Result("TyExpt");	return (Result);	}
            public: static std::string const &Beta(void){	static std::string Result("TyBeta");	return (Result);	}
            public: static std::string const &NoLimits(void){	static std::string Result("TyNoLim");	return (Result);	}
        }; // class CUserExperienceType
    }; // class CCommon
}; // class COptions
//================================================================================================================================================
} // namespace giconfig_AdminAPI
//================================================================================================================================================
