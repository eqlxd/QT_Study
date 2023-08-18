#pragma once

//================================================================================================================================================
// MakeInterfaceOptionFile V1.01 2017-06-17 - automatically generated file, do not edit !
//================================================================================================================================================

#include <string>

//================================================================================================================================================
namespace DataBufferAPI {
//================================================================================================================================================
class COptions
{
    public: class CTypeBufferVariableConfig
    {
        public: class CDataFormat
        {
            public: static std::string const &DataFormatNo(void){	static std::string Result("0");	return (Result);	}
            public: static std::string const &DataFormatBoolean(void){	static std::string Result("1");	return (Result);	}
            public: static std::string const &DataFormatSInt8(void){	static std::string Result("2");	return (Result);	}
            public: static std::string const &DataFormatUSInt8(void){	static std::string Result("3");	return (Result);	}
            public: static std::string const &DataFormatSInt16(void){	static std::string Result("4");	return (Result);	}
            public: static std::string const &DataFormatUSInt16(void){	static std::string Result("5");	return (Result);	}
            public: static std::string const &DataFormatSInt32(void){	static std::string Result("6");	return (Result);	}
            public: static std::string const &DataFormatUSInt32(void){	static std::string Result("7");	return (Result);	}
            public: static std::string const &DataFormatFloat(void){	static std::string Result("8");	return (Result);	}
            public: static std::string const &DataFormatBitSet8(void){	static std::string Result("9");	return (Result);	}
            public: static std::string const &DataFormatBitSet16(void){	static std::string Result("10");	return (Result);	}
            public: static std::string const &DataFormatBitSet32(void){	static std::string Result("11");	return (Result);	}
            public: static std::string const &DataFormatDouble(void){	static std::string Result("12");	return (Result);	}
            public: static std::string const &DataFormatSInt64(void){	static std::string Result("13");	return (Result);	}
            public: static std::string const &DataFormatUSInt64(void){	static std::string Result("14");	return (Result);	}
            public: static std::string const &DataFormatBitSet64(void){	static std::string Result("15");	return (Result);	}
        }; // class CDataFormat
    }; // class CTypeBufferVariableConfig
    public: class CTypeHSPBufferConfig
    {
        public: class CServerAccessTheme
        {
            public: static std::string const &HighSpeedPort_ProcessBuffer(void){	static std::string Result("4");	return (Result);	}
            public: static std::string const &HighSpeedPort_PostProcessBuffer(void){	static std::string Result("5");	return (Result);	}
            public: static std::string const &HighSpeedPort_TestConLogger(void){	static std::string Result("6");	return (Result);	}
        }; // class CServerAccessTheme
    }; // class CTypeHSPBufferConfig
}; // class COptions
//================================================================================================================================================
} // namespace DataBufferAPI
//================================================================================================================================================
