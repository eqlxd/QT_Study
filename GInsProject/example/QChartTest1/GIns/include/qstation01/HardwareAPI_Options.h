#pragma once

//================================================================================================================================================
// MakeInterfaceOptionFile V1.01 2017-06-17 - automatically generated file, do not edit !
//================================================================================================================================================

#include <string>

//================================================================================================================================================
namespace HardwareAPI {
//================================================================================================================================================
class COptions
{
    public: class CCommon
    {
        public: class CDigitalInputConfig
        {
            public: static std::string const &DigIOSwitchingThreshold_PNP_HTL(void){	static std::string Result("0");	return (Result);	}
            public: static std::string const &DigIOSwitchingThreshold_PNP_TTL(void){	static std::string Result("1");	return (Result);	}
            public: static std::string const &DigIOSwitchingThreshold_NPN_HTL(void){	static std::string Result("2");	return (Result);	}
            public: static std::string const &DigIOSwitchingThreshold_NPN_TTL(void){	static std::string Result("3");	return (Result);	}
            public: static std::string const &DigIOSwitchingThreshold_NotDefined(void){	static std::string Result("=-1");	return (Result);	}
        }; // class CDigitalInputConfig
        public: class CDigitalOutputConfig
        {
            public: static std::string const &DOutCfg_None(void){	static std::string Result("0");	return (Result);	}
            public: static std::string const &DOutCfg_TTL(void){	static std::string Result("1");	return (Result);	}
            public: static std::string const &DOutCfg_PNP(void){	static std::string Result("2");	return (Result);	}
            public: static std::string const &DOutCfg_NPN(void){	static std::string Result("3");	return (Result);	}
            public: static std::string const &DOutCfg_PushPull(void){	static std::string Result("4");	return (Result);	}
            public: static std::string const &DOutCfg_NotDefined(void){	static std::string Result("-1");	return (Result);	}
        }; // class CDigitalOutputConfig
    }; // class CCommon
}; // class COptions
//================================================================================================================================================
} // namespace HardwareAPI
//================================================================================================================================================
