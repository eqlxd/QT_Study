#pragma once

//================================================================================================================================================
// MakeInterfaceOptionFile V1.01 2017-06-17 - automatically generated file, do not edit !
//================================================================================================================================================

#include <string>

//================================================================================================================================================
namespace FirmwareUpdateAPI {
//================================================================================================================================================
class COptions
{
    public: class CCommon
    {
        public: class CBootMode
        {
            public: static std::string const &Undef(void){	static std::string Result("TyUn");	return (Result);	}
            public: static std::string const &System(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &Service(void){	static std::string Result("TySv");	return (Result);	}
            public: static std::string const &ServiceExternal(void){	static std::string Result("TySe");	return (Result);	}
            public: static std::string const &External(void){	static std::string Result("TyEx");	return (Result);	}
        }; // class CBootMode
    }; // class CCommon
    public: class CHandleUpdateTask
    {
        public: class CAction
        {
            public: static std::string const &BootServiceImage(void){	static std::string Result("Tybui");	return (Result);	}
            public: static std::string const &BootSystemImage(void){	static std::string Result("Tybsi");	return (Result);	}
            public: static std::string const &BootExternalImage(void){	static std::string Result("Tybei");	return (Result);	}
            public: static std::string const &WriteServiceImage(void){	static std::string Result("Tywui");	return (Result);	}
            public: static std::string const &WriteSystemImage(void){	static std::string Result("Tywsi");	return (Result);	}
            public: static std::string const &Reboot(void){	static std::string Result("Tyreb");	return (Result);	}
            public: static std::string const &InstallSystemDisk(void){	static std::string Result("Tyisd");	return (Result);	}
            public: static std::string const &FactoryResetConfig(void){	static std::string Result("Tyres");	return (Result);	}
            public: static std::string const &FinalizeUpdate(void){	static std::string Result("Tyfup");	return (Result);	}
        }; // class CAction
    }; // class CHandleUpdateTask
}; // class COptions
//================================================================================================================================================
} // namespace FirmwareUpdateAPI
//================================================================================================================================================
