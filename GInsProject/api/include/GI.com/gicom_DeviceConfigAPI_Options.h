#pragma once

//================================================================================================================================================
// MakeInterfaceOptionFile V1.01 2017-06-17 - automatically generated file, do not edit !
//================================================================================================================================================

#include <string>

//================================================================================================================================================
namespace gicom_DeviceConfigAPI {
//================================================================================================================================================
class COptions
{
    public: class CCommon
    {
        public: class CActionType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &ReadAllUpdate(void){	static std::string Result("TyRdAllUpd");	return (Result);	}
            public: static std::string const &ReadAllOverwriteIncompatible(void){	static std::string Result("TyRdAllOvwInc");	return (Result);	}
            public: static std::string const &ReadDeviceUpdate(void){	static std::string Result("TyRdDevUpd");	return (Result);	}
            public: static std::string const &ReadFileUpdate(void){	static std::string Result("TyRdFileUpd");	return (Result);	}
            public: static std::string const &WriteAllUpdate(void){	static std::string Result("TyWrAllUpd");	return (Result);	}
            public: static std::string const &WriteAllPreconfigure(void){	static std::string Result("TyWrAllPreCon");	return (Result);	}
            public: static std::string const &WriteDeviceUpdate(void){	static std::string Result("TyWrDevUpd");	return (Result);	}
            public: static std::string const &WriteFileUpdate(void){	static std::string Result("TyWrFileUpd");	return (Result);	}
            public: static std::string const &CleanupModuleFiles(void){	static std::string Result("TyClMoFi");	return (Result);	}
            public: static std::string const &FactoryReset(void){	static std::string Result("TyFacRst");	return (Result);	}
            public: static std::string const &ConfigReset(void){	static std::string Result("TyCfgRst");	return (Result);	}
        }; // class CActionType
        public: class CConnectionType
        {
            public: static std::string const &ID(void){	static std::string Result("ID");	return (Result);	}
            public: static std::string const &IP(void){	static std::string Result("IP");	return (Result);	}
            public: static std::string const &SNo(void){	static std::string Result("SNo");	return (Result);	}
        }; // class CConnectionType
        public: class CDeviceScanType
        {
            public: static std::string const &NetworkController(void){	static std::string Result("TyNwCntrl");	return (Result);	}
            public: static std::string const &NetworkController_IPv6(void){	static std::string Result("TyNwCntrl_IPv6");	return (Result);	}
            public: static std::string const &NetworkController_All(void){	static std::string Result("TyNwCntrl_All");	return (Result);	}
            public: static std::string const &LocalRPC(void){	static std::string Result("TyLoRpc");	return (Result);	}
            public: static std::string const &LocalbusUART(void){	static std::string Result("TyLbUART");	return (Result);	}
            public: static std::string const &LocalbusTransparentPort(void){	static std::string Result("TyLbTransPort");	return (Result);	}
            public: static std::string const &RemoteController(void){	static std::string Result("TyRemCntrl");	return (Result);	}
            public: static std::string const &NetworkController_IPv4_Multicast(void){	static std::string Result("TyNwCntrl_IPv4_Multi");	return (Result);	}
        }; // class CDeviceScanType
        public: class CScanConnectionType
        {
            public: static std::string const &LocalController(void){	static std::string Result("TyLoCntrl");	return (Result);	}
            public: static std::string const &RemoteController(void){	static std::string Result("TyRemCntrl");	return (Result);	}
            public: static std::string const &ManualController(void){	static std::string Result("TyManCntrl");	return (Result);	}
        }; // class CScanConnectionType
    }; // class CCommon
}; // class COptions
//================================================================================================================================================
} // namespace gicom_DeviceConfigAPI
//================================================================================================================================================
