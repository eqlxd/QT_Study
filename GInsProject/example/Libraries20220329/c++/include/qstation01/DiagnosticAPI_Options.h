#pragma once

//================================================================================================================================================
// MakeInterfaceOptionFile V1.01 2017-06-17 - automatically generated file, do not edit !
//================================================================================================================================================

#include <string>

//================================================================================================================================================
namespace DiagnosticAPI {
//================================================================================================================================================
class COptions
{
    public: class CSetTraceChannel
    {
        public: class CChannel
        {
            public: static std::string const &TraceChannel_Console(void){	static std::string Result("console");	return (Result);	}
            public: static std::string const &TraceChannel_SerialPort(void){	static std::string Result("serial");	return (Result);	}
            public: static std::string const &TraceChannel_File(void){	static std::string Result("file");	return (Result);	}
            public: static std::string const &TraceChannel_Rpc(void){	static std::string Result("rpc");	return (Result);	}
        }; // class CChannel
    }; // class CSetTraceChannel
    public: class CSetTraceLevel
    {
        public: class CObjects
        {
            public: static std::string const &System(void){	static std::string Result("sys");	return (Result);	}
            public: static std::string const &DataLogger(void){	static std::string Result("log");	return (Result);	}
            public: static std::string const &Plugin(void){	static std::string Result("plug");	return (Result);	}
            public: static std::string const &Sync(void){	static std::string Result("sync");	return (Result);	}
            public: static std::string const &DataStorageHandler(void){	static std::string Result("stor");	return (Result);	}
            public: static std::string const &FFTProcessor(void){	static std::string Result("fft");	return (Result);	}
            public: static std::string const &ProcessBuffer(void){	static std::string Result("prbuf");	return (Result);	}
            public: static std::string const &ProcessImage(void){	static std::string Result("prim");	return (Result);	}
            public: static std::string const &CANInterface(void){	static std::string Result("can");	return (Result);	}
            public: static std::string const &ModbusMaster(void){	static std::string Result("mbm");	return (Result);	}
        }; // class CObjects
    }; // class CSetTraceLevel
}; // class COptions
//================================================================================================================================================
} // namespace DiagnosticAPI
//================================================================================================================================================
