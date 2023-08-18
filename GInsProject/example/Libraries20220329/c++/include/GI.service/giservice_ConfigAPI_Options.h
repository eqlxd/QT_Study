#pragma once

//================================================================================================================================================
// MakeInterfaceOptionFile V1.01 2017-06-17 - automatically generated file, do not edit !
//================================================================================================================================================

#include <string>

//================================================================================================================================================
namespace giservice_ConfigAPI {
//================================================================================================================================================
class COptions
{
    public: class CCommon
    {
        public: class CHandleProjectType
        {
            public: static std::string const &SaveProjectSetAutostart(void){	static std::string Result("SvPrjSeAs");	return (Result);	}
            public: static std::string const &SaveProjectClearAutostart(void){	static std::string Result("SvPrjClAs");	return (Result);	}
            public: static std::string const &SaveProjectOmitAutostart(void){	static std::string Result("SvPrjOmAs");	return (Result);	}
            public: static std::string const &LoadProject(void){	static std::string Result("LdPrj");	return (Result);	}
            public: static std::string const &ClearAutostart(void){	static std::string Result("ClAs");	return (Result);	}
            public: static std::string const &GetInfo(void){	static std::string Result("Info");	return (Result);	}
            public: static std::string const &ClearProjectOmitAutostart(void){	static std::string Result("ClPrjOmAs");	return (Result);	}
            public: static std::string const &ClearProjectClearAutostart(void){	static std::string Result("ClPrjClAs");	return (Result);	}
            public: static std::string const &StartProject(void){	static std::string Result("StPrj");	return (Result);	}
            public: static std::string const &StopProject(void){	static std::string Result("StpPrj");	return (Result);	}
            public: static std::string const &UnloadProject(void){	static std::string Result("UnLdPrj");	return (Result);	}
            public: static std::string const &ExportProjectAsZIP(void){	static std::string Result("ExpPrj");	return (Result);	}
        }; // class CHandleProjectType
        public: class CConnectionType
        {
            public: static std::string const &SerialNumber(void){	static std::string Result("SNR");	return (Result);	}
        }; // class CConnectionType
        public: class CConnectionKind
        {
            public: static std::string const &Cloud(void){	static std::string Result("Cloud");	return (Result);	}
            public: static std::string const &Local(void){	static std::string Result("Local");	return (Result);	}
        }; // class CConnectionKind
        public: class CLicenseType
        {
            public: static std::string const &FullLicense(void){	static std::string Result("FullLic");	return (Result);	}
            public: static std::string const &ConfigurationLicense(void){	static std::string Result("ConfigLic");	return (Result);	}
            public: static std::string const &ConfigurationLicenseExpired(void){	static std::string Result("ConfigLicExp");	return (Result);	}
        }; // class CLicenseType
        public: class CDeviceStateClearType
        {
            public: static std::string const &Reboot(void){	static std::string Result("DevStClTyReboot");	return (Result);	}
            public: static std::string const &Traffic(void){	static std::string Result("DevStClTyTraffic");	return (Result);	}
            public: static std::string const &UARTCounter(void){	static std::string Result("DevStClTyUART");	return (Result);	}
            public: static std::string const &ErrorStates(void){	static std::string Result("DevStClTyErrors");	return (Result);	}
        }; // class CDeviceStateClearType
        public: class CTimezoneRepresentationType
        {
            public: static std::string const &Posix(void){	static std::string Result("TzRepPosix");	return (Result);	}
            public: static std::string const &UTCOffset(void){	static std::string Result("TzRepUTC");	return (Result);	}
        }; // class CTimezoneRepresentationType
    }; // class CCommon
    public: class CAdditionalProcesses
    {
        public: class CAdditionalProcessName
        {
            public: static std::string const &needLicenseChecked(void){	static std::string Result("nLC");	return (Result);	}
        }; // class CAdditionalProcessName
    }; // class CAdditionalProcesses
}; // class COptions
//================================================================================================================================================
} // namespace giservice_ConfigAPI
//================================================================================================================================================
