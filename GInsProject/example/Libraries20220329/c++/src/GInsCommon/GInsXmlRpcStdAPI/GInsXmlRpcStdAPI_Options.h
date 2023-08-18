#pragma once

//================================================================================================================================================
// MakeInterfaceOptionFile V1.01 2017-06-17 - automatically generated file, do not edit !
//================================================================================================================================================

#include <string>

//================================================================================================================================================
namespace GInsXmlRpcStdAPI {
//================================================================================================================================================
class COptions
{
    public: class CCommon
    {
        public: class CPresentationType
        {
            public: static std::string const &Standard(void){	static std::string Result("TyStd");	return (Result);	}
            public: static std::string const &Password(void){	static std::string Result("TyPwd");	return (Result);	}
            public: static std::string const &Error(void){	static std::string Result("TyErr");	return (Result);	}
            public: static std::string const &Warning(void){	static std::string Result("TyWar");	return (Result);	}
            public: static std::string const &Info(void){	static std::string Result("TyInf");	return (Result);	}
            public: static std::string const &Octal(void){	static std::string Result("TyOct");	return (Result);	}
            public: static std::string const &Binary(void){	static std::string Result("TyBin");	return (Result);	}
            public: static std::string const &Hexadecimal(void){	static std::string Result("TyHex");	return (Result);	}
            public: static std::string const &DestinationManager(void){	static std::string Result("TyDestMan");	return (Result);	}
            public: static std::string const &TimeSpan(void){	static std::string Result("TyTimSpa");	return (Result);	}
            public: static std::string const &DateTimeEpochMs(void){	static std::string Result("TyDtEpMs");	return (Result);	}
            public: static std::string const &SizeMemoryBase10(void){	static std::string Result("TySizMemBa10");	return (Result);	}
            public: static std::string const &SizeMemoryBase2(void){	static std::string Result("TySizMemBa2");	return (Result);	}
            public: static std::string const &ExternalListProperty(void){	static std::string Result("TyExtLiProp");	return (Result);	}
        }; // class CPresentationType
        public: class CDeviceInfo_StdPorts
        {
            public: static std::string const &StdPort_SSH(void){	static std::string Result("TySSH");	return (Result);	}
            public: static std::string const &StdPort_FTP(void){	static std::string Result("TyFTP");	return (Result);	}
            public: static std::string const &StdPort_RPC(void){	static std::string Result("TyRPC");	return (Result);	}
            public: static std::string const &StdPort_HSP(void){	static std::string Result("TyHSP");	return (Result);	}
        }; // class CDeviceInfo_StdPorts
        public: class CNetworkScan_ConnectionType
        {
            public: static std::string const &LocalController(void){	static std::string Result("TyLoCntrl");	return (Result);	}
            public: static std::string const &RemoteController(void){	static std::string Result("TyRemCntrl");	return (Result);	}
            public: static std::string const &ManualController(void){	static std::string Result("TyManCntrl");	return (Result);	}
        }; // class CNetworkScan_ConnectionType
        public: class CArithmeticFormulaToken_PredefinedConstant
        {
            public: static std::string const &CircleNumber(void){	static std::string Result("π");	return (Result);	}
            public: static std::string const &EulerNumber(void){	static std::string Result("e");	return (Result);	}
            public: static std::string const &GravityConstant(void){	static std::string Result("g");	return (Result);	}
        }; // class CArithmeticFormulaToken_PredefinedConstant
        public: class CArithmeticFormulaToken_Spacer
        {
            public: static std::string const &BracketClose(void){	static std::string Result(")");	return (Result);	}
            public: static std::string const &BracketOpen(void){	static std::string Result("(");	return (Result);	}
            public: static std::string const &_End(void){	static std::string Result(" ");	return (Result);	}
            public: static std::string const &Quotes(void){	static std::string Result("\"");	return (Result);	}
            public: static std::string const &Semicolon(void){	static std::string Result(";");	return (Result);	}
        }; // class CArithmeticFormulaToken_Spacer
        public: class CArithmeticFormulaToken_SystemVariable
        {
            public: static std::string const &CycleCounter(void){	static std::string Result("CycleCounter");	return (Result);	}
            public: static std::string const &MicroSecondsSinceStart(void){	static std::string Result("MicroSecondsSinceStart");	return (Result);	}
            public: static std::string const &RangeError(void){	static std::string Result("RangeError");	return (Result);	}
            public: static std::string const &SecondsOfDay(void){	static std::string Result("SecondsOfDay");	return (Result);	}
            public: static std::string const &SecondsOfHour(void){	static std::string Result("SecondsOfHour");	return (Result);	}
            public: static std::string const &SpaceAvailableFLASH(void){	static std::string Result("SpaceAvailableFLASH");	return (Result);	}
            public: static std::string const &SpaceAvailableRAM(void){	static std::string Result("SpaceAvailableRAM");	return (Result);	}
            public: static std::string const &SystemError(void){	static std::string Result("SystemError");	return (Result);	}
            public: static std::string const &TimeDC(void){	static std::string Result("TimeDC");	return (Result);	}
            public: static std::string const &TimeInfoFieldbus(void){	static std::string Result("TimeInfoFieldbus");	return (Result);	}
            public: static std::string const &TimeOLE2(void){	static std::string Result("TimeOLE2");	return (Result);	}
            public: static std::string const &TimeSample(void){	static std::string Result("TimeSample");	return (Result);	}
            public: static std::string const &VariableError(void){	static std::string Result("VariableError");	return (Result);	}
        }; // class CArithmeticFormulaToken_SystemVariable
        public: class CArithmeticFormulaToken_Operator
        {
            public: static std::string const &Addition(void){	static std::string Result("+");	return (Result);	}
            public: static std::string const &Division(void){	static std::string Result("/");	return (Result);	}
            public: static std::string const &Modulo(void){	static std::string Result("%");	return (Result);	}
            public: static std::string const &Multiplication(void){	static std::string Result("*");	return (Result);	}
            public: static std::string const &Subtraction(void){	static std::string Result("-");	return (Result);	}
            public: static std::string const &_AND(void){	static std::string Result("AND");	return (Result);	}
            public: static std::string const &_OR(void){	static std::string Result("OR");	return (Result);	}
            public: static std::string const &_SHL(void){	static std::string Result("SHL");	return (Result);	}
            public: static std::string const &_SHR(void){	static std::string Result("SHR");	return (Result);	}
            public: static std::string const &_XOR(void){	static std::string Result("XOR");	return (Result);	}
        }; // class CArithmeticFormulaToken_Operator
        public: class CArithmeticFormulaToken_Function
        {
            public: static std::string const &AbsoluteValue(void){	static std::string Result("Abs");	return (Result);	}
            public: static std::string const &AveragingValue(void){	static std::string Result("Averaging");	return (Result);	}
            public: static std::string const &ClassifyValue(void){	static std::string Result("ClassifyValue");	return (Result);	}
            public: static std::string const &ConnectToFTPServer(void){	static std::string Result("ConnectToFTPServer");	return (Result);	}
            public: static std::string const &ControlFFTProcessor(void){	static std::string Result("ControlFFTProcessor");	return (Result);	}
            public: static std::string const &ControlFFTProcessorEvaluator(void){	static std::string Result("ControlFFTProcessorEvaluator");	return (Result);	}
            public: static std::string const &ControlInternalBuffer(void){	static std::string Result("ControlInternalBuffer");	return (Result);	}
            public: static std::string const &ControlInternalLogger(void){	static std::string Result("ControlInternalLogger");	return (Result);	}
            public: static std::string const &Controller(void){	static std::string Result("Controller");	return (Result);	}
            public: static std::string const &ControllerEvaluator(void){	static std::string Result("ControllerEvaluator");	return (Result);	}
            public: static std::string const &ConvertDateTimeToTimeDC(void){	static std::string Result("ConvertDateTimeToTimeDC");	return (Result);	}
            public: static std::string const &ConvertDateTimeToTimeOLE2(void){	static std::string Result("ConvertDateTimeToTimeOLE2");	return (Result);	}
            public: static std::string const &ConvertTimeDCToDateTime(void){	static std::string Result("ConvertTimeDCToDateTime");	return (Result);	}
            public: static std::string const &ConvertTimeOLE2ToDateTime(void){	static std::string Result("ConvertTimeOLE2ToDateTime");	return (Result);	}
            public: static std::string const &CosineValue(void){	static std::string Result("Cos");	return (Result);	}
            public: static std::string const &DataLoggerState(void){	static std::string Result("DataLoggerState");	return (Result);	}
            public: static std::string const &DeadBandValue(void){	static std::string Result("DeadBand");	return (Result);	}
            public: static std::string const &DerivativeValue(void){	static std::string Result("Derivative");	return (Result);	}
            public: static std::string const &DewPointValueDryTempWetTemp(void){	static std::string Result("DewPoint_DT_WT");	return (Result);	}
            public: static std::string const &DewPointValueTempRelHum(void){	static std::string Result("DewPoint_T_RH");	return (Result);	}
            public: static std::string const &DisconnectFromFTPServer(void){	static std::string Result("DisconnectFromFTPServer");	return (Result);	}
            public: static std::string const &EnvelopeNegative(void){	static std::string Result("EnvelopeNegative");	return (Result);	}
            public: static std::string const &EnvelopePositive(void){	static std::string Result("EnvelopePositive");	return (Result);	}
            public: static std::string const &Equal(void){	static std::string Result("Equal");	return (Result);	}
            public: static std::string const &ExponentialValue(void){	static std::string Result("Exp");	return (Result);	}
            public: static std::string const &ExternalSlaveUARTDiagnosticValue(void){	static std::string Result("ExtUartDiag");	return (Result);	}
            public: static std::string const &FFTProcessor(void){	static std::string Result("FFTProcessor");	return (Result);	}
            public: static std::string const &FFTProcessorEvaluator(void){	static std::string Result("FFTProcessorEvaluator");	return (Result);	}
            public: static std::string const &GenNextIndexedBufferFile(void){	static std::string Result("GenNextIndexedBufferFile");	return (Result);	}
            public: static std::string const &GetBufferSizePercent(void){	static std::string Result("GetBufferSizePercent");	return (Result);	}
            public: static std::string const &GetDigitalInput(void){	static std::string Result("GetDIn");	return (Result);	}
            public: static std::string const &GetDigitalOutput(void){	static std::string Result("GetDOut");	return (Result);	}
            public: static std::string const &GetPositioningData(void){	static std::string Result("GetPositioningData");	return (Result);	}
            public: static std::string const &GetRemainSizePercentOfDataDrive(void){	static std::string Result("GetRemainSizePercentOfDataDrive");	return (Result);	}
            public: static std::string const &GetSystemHealth(void){	static std::string Result("GetSystemHealth");	return (Result);	}
            public: static std::string const &HigherAs(void){	static std::string Result("Higher");	return (Result);	}
            public: static std::string const &HigherEqualAs(void){	static std::string Result("HigherEqual");	return (Result);	}
            public: static std::string const &HighestValue(void){	static std::string Result("High");	return (Result);	}
            public: static std::string const &HoldValue(void){	static std::string Result("Hold");	return (Result);	}
            public: static std::string const &IIRFilterValue(void){	static std::string Result("IIRFilter");	return (Result);	}
            public: static std::string const &IntegratorValue(void){	static std::string Result("Integrator");	return (Result);	}
            public: static std::string const &InverseCosineValue(void){	static std::string Result("ArcCos");	return (Result);	}
            public: static std::string const &InverseSineValue(void){	static std::string Result("ArcSin");	return (Result);	}
            public: static std::string const &InverseTangentValue(void){	static std::string Result("ArcTan");	return (Result);	}
            public: static std::string const &LnValue(void){	static std::string Result("Ln");	return (Result);	}
            public: static std::string const &LogValue(void){	static std::string Result("Log");	return (Result);	}
            public: static std::string const &LowerAs(void){	static std::string Result("Lower");	return (Result);	}
            public: static std::string const &LowerEqualAs(void){	static std::string Result("LowerEqual");	return (Result);	}
            public: static std::string const &LowestValue(void){	static std::string Result("Low");	return (Result);	}
            public: static std::string const &MaximumHoldValue(void){	static std::string Result("Max");	return (Result);	}
            public: static std::string const &MinimumHoldValue(void){	static std::string Result("Min");	return (Result);	}
            public: static std::string const &ModbusSlaveUARTRead(void){	static std::string Result("ModbusSlaveUARTRead");	return (Result);	}
            public: static std::string const &ModbusSlaveUARTWrite(void){	static std::string Result("ModbusSlaveUARTWrite");	return (Result);	}
            public: static std::string const &_Not(void){	static std::string Result("Not");	return (Result);	}
            public: static std::string const &PIDControllerIndexBased(void){	static std::string Result("PIDControllerIndexBased");	return (Result);	}
            public: static std::string const &PIDController(void){	static std::string Result("PIDController");	return (Result);	}
            public: static std::string const &PowerValue(void){	static std::string Result("Power");	return (Result);	}
            public: static std::string const &RandomValue(void){	static std::string Result("Random");	return (Result);	}
            public: static std::string const &RelativeHumidityValue(void){	static std::string Result("Humidity");	return (Result);	}
            public: static std::string const &RoundToValue(void){	static std::string Result("RoundToValue");	return (Result);	}
            public: static std::string const &SaveBufferToDataDrive(void){	static std::string Result("SaveBufferToDataDrive");	return (Result);	}
            public: static std::string const &Scaling(void){	static std::string Result("Scaling");	return (Result);	}
            public: static std::string const &SelectDetailValue(void){	static std::string Result("SelectDetail");	return (Result);	}
            public: static std::string const &SelectGrossValue(void){	static std::string Result("SelectGross");	return (Result);	}
            public: static std::string const &SelectMultiplexerValue(void){	static std::string Result("SelectMultiplexer");	return (Result);	}
            public: static std::string const &SelectMultiplierValue(void){	static std::string Result("SelectMultiplier");	return (Result);	}
            public: static std::string const &SelectNetValue(void){	static std::string Result("SelectNet");	return (Result);	}
            public: static std::string const &SelectRMSValue(void){	static std::string Result("SelectRMS");	return (Result);	}
            public: static std::string const &SelectPowerAnalyzerValue(void){	static std::string Result("SelectPowerAnalyzer");	return (Result);	}
            public: static std::string const &SelectSystemValue(void){	static std::string Result("SelectSystem");	return (Result);	}
            public: static std::string const &SelectUnbalancedValue(void){	static std::string Result("SelectUnbalanced");	return (Result);	}
            public: static std::string const &SelectValue(void){	static std::string Result("Select");	return (Result);	}
            public: static std::string const &SendBufferToFTPServer(void){	static std::string Result("SendBufferToFTPServer");	return (Result);	}
            public: static std::string const &SendMailToMailServer(void){	static std::string Result("SendMailToMailServer");	return (Result);	}
            public: static std::string const &SendStoredBufferToFTPServer(void){	static std::string Result("SendStoredBufferToFTPServer");	return (Result);	}
            public: static std::string const &SendVirtualBufferToFTPServer(void){	static std::string Result("SendVirtualBufferToFTPServer");	return (Result);	}
            public: static std::string const &SineValue(void){	static std::string Result("Sin");	return (Result);	}
            public: static std::string const &SpecialFunction0(void){	static std::string Result("Special0");	return (Result);	}
            public: static std::string const &SpecialFunction1(void){	static std::string Result("Special1");	return (Result);	}
            public: static std::string const &SpecialFunction2(void){	static std::string Result("Special2");	return (Result);	}
            public: static std::string const &SpecialFunction3(void){	static std::string Result("Special3");	return (Result);	}
            public: static std::string const &SpecialFunction4(void){	static std::string Result("Special4");	return (Result);	}
            public: static std::string const &SpecialFunction5(void){	static std::string Result("Special5");	return (Result);	}
            public: static std::string const &SpecialFunction6(void){	static std::string Result("Special6");	return (Result);	}
            public: static std::string const &SpecialFunction7(void){	static std::string Result("Special7");	return (Result);	}
            public: static std::string const &SpecialFunction8(void){	static std::string Result("Special8");	return (Result);	}
            public: static std::string const &SpecialFunction9(void){	static std::string Result("Special9");	return (Result);	}
            public: static std::string const &SquareRootValue(void){	static std::string Result("Sqrt");	return (Result);	}
            public: static std::string const &SquareValue(void){	static std::string Result("Sqr");	return (Result);	}
            public: static std::string const &StandardDeviationValue(void){	static std::string Result("StdDeviation");	return (Result);	}
            public: static std::string const &StateValue(void){	static std::string Result("State");	return (Result);	}
            public: static std::string const &StatisticsValue(void){	static std::string Result("Statistics");	return (Result);	}
            public: static std::string const &SystemControl(void){	static std::string Result("SystemControl");	return (Result);	}
            public: static std::string const &TangentValue(void){	static std::string Result("Tan");	return (Result);	}
            public: static std::string const &Thermocouple(void){	static std::string Result("ThCou");	return (Result);	}
            public: static std::string const &TrueRMSValue(void){	static std::string Result("TrueRMS");	return (Result);	}
            public: static std::string const &TruncateValue(void){	static std::string Result("Trunc");	return (Result);	}
            public: static std::string const &ValueChanged(void){	static std::string Result("ValueChanged");	return (Result);	}
            public: static std::string const &ValueEvaluation(void){	static std::string Result("ValueEvaluation");	return (Result);	}
            public: static std::string const &ValueEvaluationExt(void){	static std::string Result("ValueEvaluationExt");	return (Result);	}
            public: static std::string const &Variable(void){	static std::string Result("Var");	return (Result);	}
            public: static std::string const &VariableReadIndexBased(void){	static std::string Result("VariableReadIndexBased");	return (Result);	}
            public: static std::string const &VariableWriteIndexBased(void){	static std::string Result("VariableWriteIndexBased");	return (Result);	}
            public: static std::string const &VariableWrite(void){	static std::string Result("VariableWrite");	return (Result);	}
            public: static std::string const &VectorialWindDirection(void){	static std::string Result("WindDirection");	return (Result);	}
            public: static std::string const &VectorialWindSpeed(void){	static std::string Result("WindSpeed");	return (Result);	}
        }; // class CArithmeticFormulaToken_Function
    }; // class CCommon
}; // class COptions
//================================================================================================================================================
} // namespace GInsXmlRpcStdAPI
//================================================================================================================================================
