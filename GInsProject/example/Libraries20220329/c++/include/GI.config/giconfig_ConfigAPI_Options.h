#pragma once

//================================================================================================================================================
// MakeInterfaceOptionFile V1.01 2017-06-17 - automatically generated file, do not edit !
//================================================================================================================================================

#include <string>

//================================================================================================================================================
namespace giconfig_ConfigAPI {
//================================================================================================================================================
class COptions
{
    public: class CCommon
    {
        public: class CGlobalDefinitions
        {
            public: static std::string const &MaximumStorageDestinationCount(void){	static std::string Result("10");	return (Result);	}
        }; // class CGlobalDefinitions
        public: class CUIReplacementToken
        {
            public: static std::string const &StreamProcessor_DataBuffer_Process_Name_Singular(void){	static std::string Result("[StreamProcessor_DataBuffer_Process_Name_Singular_UIREPLACEMENT]");	return (Result);	}
            public: static std::string const &StreamProcessor_DataBuffer_Process_Name_Plural(void){	static std::string Result("[StreamProcessor_DataBuffer_Process_Name_Plural_UIREPLACEMENT]");	return (Result);	}
            public: static std::string const &Controller_BaseCycleFrequencyDivider_Name_Singular(void){	static std::string Result("[Controller_BaseCycleFrequencyDivider_Name_Singular_UIREPLACEMENT]");	return (Result);	}
            public: static std::string const &Controller_BaseCycleFrequencyDivider_Name_Plural(void){	static std::string Result("[Controller_BaseCycleFrequencyDivider_Name_Plural_UIREPLACEMENT]");	return (Result);	}
            public: static std::string const &Controller_SystemCycleFrequencyDivider_Name_Singular(void){	static std::string Result("[Controller_SystemCycleFrequencyDivider_Name_Singular_UIREPLACEMENT]");	return (Result);	}
            public: static std::string const &Controller_SystemCycleFrequencyDivider_Name_Plural(void){	static std::string Result("[Controller_SystemCycleFrequencyDivider_Name_Plural_UIREPLACEMENT]");	return (Result);	}
        }; // class CUIReplacementToken
        public: class CDeviceTypeCombiner
        {
            public: static std::string Build(
                    const std::string &MainCodeStr,
                    const std::string &SubCodeStr,
                    const std::string &FunctionCodeStr,
                    const std::string &CasingCodeStr
                    )
            {
                return (
                        MainCodeStr + "/" +
                        SubCodeStr + "/" +
                        FunctionCodeStr + "/" +
                        CasingCodeStr
                        );
            }
        }; // class CDeviceTypeCombiner
        public: class CObjectType
        {
            public: static std::string const &Adapter(void){	static std::string Result("TyAda");	return (Result);	}
            public: static std::string const &Controller(void){	static std::string Result("TyCtr");	return (Result);	}
            public: static std::string const &Feature(void){	static std::string Result("TyFeat");	return (Result);	}
            public: static std::string const &InternalModule(void){	static std::string Result("TyIntMod");	return (Result);	}
            public: static std::string const &Module(void){	static std::string Result("TyMod");	return (Result);	}
            public: static std::string const &Project(void){	static std::string Result("TyPrj");	return (Result);	}
            public: static std::string const &StreamProcessor(void){	static std::string Result("TyStrPro");	return (Result);	}
            public: static std::string const &Variable(void){	static std::string Result("TyVar");	return (Result);	}
        }; // class CObjectType
        public: class CReferenceNotificationReasonType
        {
            public: static std::string const &Added(void){	static std::string Result("TyAdd");	return (Result);	}
            public: static std::string const &Changed(void){	static std::string Result("TyCha");	return (Result);	}
            public: static std::string const &Removed(void){	static std::string Result("TyRem");	return (Result);	}
            public: static std::string const &Defaulted(void){	static std::string Result("TyDef");	return (Result);	}
        }; // class CReferenceNotificationReasonType
        public: class CReferenceNotificationReasonDetail
        {
            public: static std::string const &Added(void){	static std::string Result("[@Add]");	return (Result);	}
            public: static std::string const &Changed(void){	static std::string Result("[@Cha]");	return (Result);	}
            public: static std::string const &Removed(void){	static std::string Result("[@Rem]");	return (Result);	}
            public: static std::string const &Defaulted(void){	static std::string Result("[@Def]");	return (Result);	}
            public: static std::string const &ValueChanged(void){	static std::string Result("[@ValCha]");	return (Result);	}
            public: static std::string const &PropertiesChanged(void){	static std::string Result("[@PropCha]");	return (Result);	}
            public: static std::string const &AccessStateChanged(void){	static std::string Result("[@AccStaCha]");	return (Result);	}
            public: static std::string const &AccessStateChangedEnabled(void){	static std::string Result("[@AccStaChaEn]");	return (Result);	}
            public: static std::string const &AccessStateChangedDisabled(void){	static std::string Result("[@AccStaChaDis]");	return (Result);	}
            public: static std::string const &NoRepresentationInStorage(void){	static std::string Result("[@NoRepInStor]");	return (Result);	}
            public: static std::string const &ProcessImageRelevant(void){	static std::string Result("[@PIRel]");	return (Result);	}
            public: static std::string const &MultipleUsed(void){	static std::string Result("[@MulUs]");	return (Result);	}
        }; // class CReferenceNotificationReasonDetail
        public: class CAssistantType
        {
            public: static std::string const &TuneSubObjects(void){	static std::string Result("TyTuSuOb");	return (Result);	}
            public: static std::string const &RunFullDRC(void){	static std::string Result("TyRuFuDRC");	return (Result);	}
            public: static std::string const &CreateMultipleObjects(void){	static std::string Result("TyCrMuOb");	return (Result);	}
            public: static std::string const &GetInfo(void){	static std::string Result("TyGeIn");	return (Result);	}
            public: static std::string const &CleanupObjects(void){	static std::string Result("TyClOb");	return (Result);	}
        }; // class CAssistantType
        public: class CAssistantTypeParameter_CreateMultipleObjects_Ctrl
        {
            public: static std::string const &StoreNewIDTemporary(void){	static std::string Result("CtrlStorNewIDTemp");	return (Result);	}
            public: static std::string const &TakeEssentialPropertiesFromFirstReferencedObject(void){	static std::string Result("CtrlTakeEssPropFrom1stRefObj");	return (Result);	}
        }; // class CAssistantTypeParameter_CreateMultipleObjects_Ctrl
        public: class CAssistantTypeParameter_RunFullDRC_Ctrl
        {
            public: static std::string const &AllObjects(void){	static std::string Result("CtrlAllObj");	return (Result);	}
            public: static std::string const &AllObjectsMinimumChecks(void){	static std::string Result("CtrlAllObjMinChk");	return (Result);	}
            public: static std::string const &AllObjectsPathLimitedToModifiedHighestPhysicalDevices(void){	static std::string Result("CtrlAllObjPathLimToModHighPhysDev");	return (Result);	}
            public: static std::string const &ModifiedObjects(void){	static std::string Result("CtrlModObj");	return (Result);	}
            public: static std::string const &ModifiedObjectsOwners(void){	static std::string Result("CtrlModObjOwn");	return (Result);	}
        }; // class CAssistantTypeParameter_RunFullDRC_Ctrl
        public: class CAssistantTypeParameter_GetInfo_Ctrl
        {
            public: static std::string const &AvailableTimeZones(void){	static std::string Result("CtrlAvTiZoStd");	return (Result);	}
        }; // class CAssistantTypeParameter_GetInfo_Ctrl
        public: class CAssistantTypeParameter_GetInfo_Pa0
        {
            public: static std::string const &Standard(void){	static std::string Result("Pa0Std");	return (Result);	}
            public: static std::string const &POSIXInfoIncluded(void){	static std::string Result("Pa0POInIn");	return (Result);	}
        }; // class CAssistantTypeParameter_GetInfo_Pa0
        public: class CAssistantTypeParameter_CleanupObjects_Ctrl
        {
            public: static std::string const &ReferenceVariablesForLinkageOnly(void){	static std::string Result("CtrlRefVarLinOnl");	return (Result);	}
            public: static std::string const &ReferenceVariablesWithLostLinks(void){	static std::string Result("CtrlRefVarWitLosLin");	return (Result);	}
        }; // class CAssistantTypeParameter_CleanupObjects_Ctrl
        public: class CAssistantTypeParameter_CleanupObjects_Pa0
        {
            public: static std::string const &OnlyThis(void){	static std::string Result("Pa0OnlThi");	return (Result);	}
            public: static std::string const &UptoTop(void){	static std::string Result("Pa0UptTop");	return (Result);	}
        }; // class CAssistantTypeParameter_CleanupObjects_Pa0
        public: class CAssistantTypeParameterCombiner
        {
            public: static std::string Build(
                    const std::string &Ctrl,
                    const std::string &Pa0,
                    const std::string &Pa1,
                    const std::string &Pa2,
                    const std::string &Pa3,
                    const std::string &Pa4,
                    const std::string &Pa5
                    )
            {
                return (
                        Ctrl + "/" +
                        Pa0 + "/" +
                        Pa1 + "/" +
                        Pa2 + "/" +
                        Pa3 + "/" +
                        Pa4 + "/" +
                        Pa5
                        );
            }
        }; // class CAssistantTypeParameterCombiner
        public: class CCalculatorType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &StrainGauge(void){	static std::string Result("TyStrGau");	return (Result);	}
            public: static std::string const &TwoPoint(void){	static std::string Result("TyTwoPoi");	return (Result);	}
            public: static std::string const &TwoPointOneByOne(void){	static std::string Result("TyTwoPoiOneByOne");	return (Result);	}
            public: static std::string const &FrequencyResponse(void){	static std::string Result("TyFreRes");	return (Result);	}
        }; // class CCalculatorType
        public: class CCalculatorFrequencyResponseCommandType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &ClearResult(void){	static std::string Result("TyClr");	return (Result);	}
            public: static std::string const &CalculateAmplitudeLinear(void){	static std::string Result("TyCaAmpLin");	return (Result);	}
            public: static std::string const &CalculateAmplitudeLogarithmic(void){	static std::string Result("TyCaAmpLog");	return (Result);	}
            public: static std::string const &CalculatePhase(void){	static std::string Result("TyCaPha");	return (Result);	}
            public: static std::string const &CalculateGroupDelay(void){	static std::string Result("TyCaGrDel");	return (Result);	}
        }; // class CCalculatorFrequencyResponseCommandType
        public: class CCalculatorStrainGaugeCommandType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &SetTypeOnly(void){	static std::string Result("TySeTyOn");	return (Result);	}
            public: static std::string const &Calculate(void){	static std::string Result("TyCa");	return (Result);	}
        }; // class CCalculatorStrainGaugeCommandType
        public: class CCalculatorTwoPointCommandType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &SetTypeOnly(void){	static std::string Result("TySeTyOn");	return (Result);	}
            public: static std::string const &Calculate(void){	static std::string Result("TyCa");	return (Result);	}
        }; // class CCalculatorTwoPointCommandType
        public: class CCalculatorTwoPointOneByOneCommandType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &SetTypeOnly(void){	static std::string Result("TySeTyOn");	return (Result);	}
            public: static std::string const &Calculate(void){	static std::string Result("TyCa");	return (Result);	}
        }; // class CCalculatorTwoPointOneByOneCommandType
        public: class CDebugTraceOutputDestination
        {
            public: static std::string const &Console(void){	static std::string Result("TyCo");	return (Result);	}
            public: static std::string const &ConsoleAndFile(void){	static std::string Result("TyCoFi");	return (Result);	}
            public: static std::string const &Off(void){	static std::string Result("TyOff");	return (Result);	}
        }; // class CDebugTraceOutputDestination
        public: class CRunState
        {
            public: static std::string const &Init(void){	static std::string Result("TyIni");	return (Result);	}
            public: static std::string const &Prepare(void){	static std::string Result("TyPrep");	return (Result);	}
            public: static std::string const &Started(void){	static std::string Result("TyStart");	return (Result);	}
            public: static std::string const &Stopped(void){	static std::string Result("TyStop");	return (Result);	}
            public: static std::string const &Finished(void){	static std::string Result("TyFin");	return (Result);	}
        }; // class CRunState
        public: class CExistsBehaviour
        {
            public: static std::string const &DoInsert(void){	static std::string Result("TyIns");	return (Result);	}
            public: static std::string const &DoOverwrite(void){	static std::string Result("TyOvwr");	return (Result);	}
            public: static std::string const &GenerateError(void){	static std::string Result("TyErr");	return (Result);	}
        }; // class CExistsBehaviour
        public: class CFileFormat
        {
            public: static std::string const &Configuration(void){	static std::string Result("TyCfg");	return (Result);	}
            public: static std::string const &Templates(void){	static std::string Result("TyTpl");	return (Result);	}
            public: static std::string const &DeviceTunings(void){	static std::string Result("TyDevTune");	return (Result);	}
            public: static std::string const &GIbenchProject(void){	static std::string Result("TyGIbPrj");	return (Result);	}
            public: static std::string const &SensorsActors(void){	static std::string Result("TySenAct");	return (Result);	}
            public: static std::string const &TestCommander1Project(void){	static std::string Result("TyTCom1Prj");	return (Result);	}
        }; // class CFileFormat
        public: class CHandleCommand
        {
            public: static std::string const &ClearStates_ChangedAll(void){	static std::string Result("TyClSt_ChaAll");	return (Result);	}
            public: static std::string const &ClearStates_ChangedWithRespectToStorage(void){	static std::string Result("TyClSt_ChaWRTStor");	return (Result);	}
            public: static std::string const &ClearStates_ChangedWithRespectToDevice(void){	static std::string Result("TyClSt_ChaWRTDev");	return (Result);	}
            public: static std::string const &ClearStates_Defaulted(void){	static std::string Result("TyClSt_Def");	return (Result);	}
            public: static std::string const &ClearStates_All(void){	static std::string Result("TyClSt_All");	return (Result);	}
            public: static std::string const &ChangeID(void){	static std::string Result("TyChID");	return (Result);	}
        }; // class CHandleCommand
        public: class CResultType
        {
            public: static std::string const &SourceObject_ContentPath_ReturnFlatList(void){	static std::string Result("TyObPaFlLi");	return (Result);	}
            public: static std::string const &SourceObject_ContentPath_ReturnNestedStructure(void){	static std::string Result("TyObPaNeSt");	return (Result);	}
            public: static std::string const &SourceObject_ContentValue_ReturnFlatList(void){	static std::string Result("TyObVaFlLi");	return (Result);	}
            public: static std::string const &SourceObject_ContentValue_ReturnNestedStructure(void){	static std::string Result("TyObVaNeSt");	return (Result);	}
            public: static std::string const &SourceGlobal_ContentPath_ReturnFlatList(void){	static std::string Result("TyGlPaFlLi");	return (Result);	}
            public: static std::string const &SourceGlobal_ContentPath_ReturnNestedStructure(void){	static std::string Result("TyGlPaNeSt");	return (Result);	}
            public: static std::string const &SourceGlobal_ContentValue_ReturnFlatList(void){	static std::string Result("TyGlVaFlLi");	return (Result);	}
            public: static std::string const &SourceGlobal_ContentValue_ReturnNestedStructure(void){	static std::string Result("TyGlVaNeSt");	return (Result);	}
        }; // class CResultType
        public: class CListAccessCommand
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &Read(void){	static std::string Result("TyRea");	return (Result);	}
            public: static std::string const &ReadAll(void){	static std::string Result("TyReaAll");	return (Result);	}
            public: static std::string const &ReadUsed(void){	static std::string Result("TyReaUse");	return (Result);	}
            public: static std::string const &Assign(void){	static std::string Result("TyAss");	return (Result);	}
            public: static std::string const &_Delete(void){	static std::string Result("TyDel");	return (Result);	}
            public: static std::string const &Insert(void){	static std::string Result("TyIns");	return (Result);	}
            public: static std::string const &Overwrite(void){	static std::string Result("TyOvWri");	return (Result);	}
            public: static std::string const &AppendDefault(void){	static std::string Result("TyAppDef");	return (Result);	}
        }; // class CListAccessCommand
        public: class CNameFilterSeries
        {
            public: static std::string const &DSNET(void){	static std::string Result("SeriesQBloDSNET");	return (Result);	}
            public: static std::string const &OtherModule(void){	static std::string Result("SeriesOtheMod");	return (Result);	}
            public: static std::string const &OtherControllerVirtualWithHardwareAdapters(void){	static std::string Result("SeriesOtheConVirWiHWAda");	return (Result);	}
            public: static std::string const &OtherControllerVirtualNoHardware(void){	static std::string Result("SeriesOtheConVirNoHW");	return (Result);	}
            public: static std::string const &OtherProject(void){	static std::string Result("SeriesOthePro");	return (Result);	}
            public: static std::string const &Qbloxx(void){	static std::string Result("SeriesQBlo");	return (Result);	}
            public: static std::string const &QbloxxEC(void){	static std::string Result("SeriesQBloEC");	return (Result);	}
            public: static std::string const &QbloxxECOMN(void){	static std::string Result("SeriesQBloECOMN");	return (Result);	}
            public: static std::string const &QbloxxECS(void){	static std::string Result("SeriesQBloECS");	return (Result);	}
            public: static std::string const &Qbrixx(void){	static std::string Result("SeriesQBloBri");	return (Result);	}
            public: static std::string const &QbrixxEC(void){	static std::string Result("SeriesQBloBriEC");	return (Result);	}
            public: static std::string const &QbrixxECLA(void){	static std::string Result("SeriesQBloBriECLA");	return (Result);	}
            public: static std::string const &Qcontroller(void){	static std::string Result("SeriesQCon");	return (Result);	}
            public: static std::string const &QcontrollerBrixx(void){	static std::string Result("SeriesQConBri");	return (Result);	}
            public: static std::string const &QcontrollerRaxx(void){	static std::string Result("SeriesQConRax");	return (Result);	}
            public: static std::string const &QcontrollerRaxxAR(void){	static std::string Result("SeriesQConRaxAR");	return (Result);	}
            public: static std::string const &QcontrollerSeries(void){	static std::string Result("SeriesQConSer");	return (Result);	}
            public: static std::string const &QcontrollerSeriesX(void){	static std::string Result("SeriesQConSerX");	return (Result);	}
            public: static std::string const &QcontrollerSeriesXK(void){	static std::string Result("SeriesQConSerXK");	return (Result);	}
            public: static std::string const &Qraxx(void){	static std::string Result("SeriesQBloRax");	return (Result);	}
            public: static std::string const &QraxxEC(void){	static std::string Result("SeriesQBloRaxEC");	return (Result);	}
            public: static std::string const &QraxxECGeMCoS(void){	static std::string Result("SeriesQBloRaxECGeMCoS");	return (Result);	}
            public: static std::string const &QraxxECSlimline(void){	static std::string Result("SeriesQBloRaxEC1RU");	return (Result);	}
            public: static std::string const &QraxxSlimline(void){	static std::string Result("SeriesQBloRax1RU");	return (Result);	}
            public: static std::string const &Qseries(void){	static std::string Result("SeriesQSer");	return (Result);	}
            public: static std::string const &QseriesX(void){	static std::string Result("SeriesQSerX");	return (Result);	}
            public: static std::string const &QseriesXK(void){	static std::string Result("SeriesQSerXK");	return (Result);	}
            public: static std::string const &Qstaxx(void){	static std::string Result("SeriesQBloSta");	return (Result);	}
            public: static std::string const &QmappersBoost(void){	static std::string Result("SeriesQMapBoo");	return (Result);	}
            public: static std::string const &Qmappers(void){	static std::string Result("SeriesQMap");	return (Result);	}
        }; // class CNameFilterSeries
        public: class CProtocol
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &ASCII(void){	static std::string Result("TyAsc");	return (Result);	}
            public: static std::string const &Localbus(void){	static std::string Result("TyLb");	return (Result);	}
            public: static std::string const &Modbus(void){	static std::string Result("TyMb");	return (Result);	}
            public: static std::string const &ModbusWordSwapped(void){	static std::string Result("TyMbWs");	return (Result);	}
            public: static std::string const &NMEA0183(void){	static std::string Result("TyNm0183");	return (Result);	}
            public: static std::string const &Profibus(void){	static std::string Result("TyPb");	return (Result);	}
            public: static std::string const &ProfibusDP(void){	static std::string Result("TyPbDp");	return (Result);	}
            public: static std::string const &Standard(void){	static std::string Result("TyStd");	return (Result);	}
            public: static std::string const &Terminal(void){	static std::string Result("TyTer");	return (Result);	}
            public: static std::string const &Ethercat(void){	static std::string Result("TyEcat");	return (Result);	}
        }; // class CProtocol
        public: class CBaudrate
        {
            public: static std::string const &_2k4(void){	static std::string Result("Ty2k4");	return (Result);	}
            public: static std::string const &_4k8(void){	static std::string Result("Ty4k8");	return (Result);	}
            public: static std::string const &_9k6(void){	static std::string Result("Ty9k6");	return (Result);	}
            public: static std::string const &_10k(void){	static std::string Result("Ty10k");	return (Result);	}
            public: static std::string const &_19k2(void){	static std::string Result("Ty19k2");	return (Result);	}
            public: static std::string const &_20k(void){	static std::string Result("Ty20k");	return (Result);	}
            public: static std::string const &_38k4(void){	static std::string Result("Ty38k4");	return (Result);	}
            public: static std::string const &_50k(void){	static std::string Result("Ty50k");	return (Result);	}
            public: static std::string const &_57k6(void){	static std::string Result("Ty57k6");	return (Result);	}
            public: static std::string const &_93k75(void){	static std::string Result("Ty93k75");	return (Result);	}
            public: static std::string const &_100k(void){	static std::string Result("Ty100k");	return (Result);	}
            public: static std::string const &_115k2(void){	static std::string Result("Ty115k2");	return (Result);	}
            public: static std::string const &_125k(void){	static std::string Result("Ty125k");	return (Result);	}
            public: static std::string const &_187k5(void){	static std::string Result("Ty187k5");	return (Result);	}
            public: static std::string const &_230k4(void){	static std::string Result("Ty230k4");	return (Result);	}
            public: static std::string const &_250k(void){	static std::string Result("Ty250k");	return (Result);	}
            public: static std::string const &_500k(void){	static std::string Result("Ty500k");	return (Result);	}
            public: static std::string const &_800k(void){	static std::string Result("Ty800k");	return (Result);	}
            public: static std::string const &_1M(void){	static std::string Result("Ty1M");	return (Result);	}
            public: static std::string const &_1M5(void){	static std::string Result("Ty1M5");	return (Result);	}
            public: static std::string const &_2M(void){	static std::string Result("Ty2M");	return (Result);	}
            public: static std::string const &_3M(void){	static std::string Result("Ty3M");	return (Result);	}
            public: static std::string const &_4M(void){	static std::string Result("Ty4M");	return (Result);	}
            public: static std::string const &_6M(void){	static std::string Result("Ty6M");	return (Result);	}
            public: static std::string const &_8M(void){	static std::string Result("Ty8M");	return (Result);	}
            public: static std::string const &_10M(void){	static std::string Result("Ty10M");	return (Result);	}
            public: static std::string const &_12M(void){	static std::string Result("Ty12M");	return (Result);	}
            public: static std::string const &_24M(void){	static std::string Result("Ty24M");	return (Result);	}
            public: static std::string const &_48M(void){	static std::string Result("Ty48M");	return (Result);	}
        }; // class CBaudrate
        public: class CCharFormat
        {
            public: static std::string const &_8n1(void){	static std::string Result("Ty8n1");	return (Result);	}
            public: static std::string const &_8e1(void){	static std::string Result("Ty8e1");	return (Result);	}
            public: static std::string const &_8o1(void){	static std::string Result("Ty8o1");	return (Result);	}
            public: static std::string const &_8n2(void){	static std::string Result("Ty8n2");	return (Result);	}
            public: static std::string const &_8e2(void){	static std::string Result("Ty8e2");	return (Result);	}
            public: static std::string const &_8o2(void){	static std::string Result("Ty8o2");	return (Result);	}
        }; // class CCharFormat
        public: class CDigitalInputSwitchingLevelType
        {
            public: static std::string const &PNP_HTL(void){	static std::string Result("TyPNPHTL");	return (Result);	}
            public: static std::string const &PNP_TTL(void){	static std::string Result("TyPNPTTL");	return (Result);	}
            public: static std::string const &NPN_HTL(void){	static std::string Result("TyNPNHTL");	return (Result);	}
            public: static std::string const &NPN_TTL(void){	static std::string Result("TyNPNTTL");	return (Result);	}
        }; // class CDigitalInputSwitchingLevelType
        public: class CPacKernelMode
        {
            public: static std::string const &Activated(void){	static std::string Result("TyAct");	return (Result);	}
            public: static std::string const &Deactivated(void){	static std::string Result("TyDeAct");	return (Result);	}
            public: static std::string const &Stopped(void){	static std::string Result("TyStop");	return (Result);	}
        }; // class CPacKernelMode
        public: class CPluginsMode
        {
            public: static std::string const &Activated(void){	static std::string Result("TyAct");	return (Result);	}
            public: static std::string const &Deactivated(void){	static std::string Result("TyDeAct");	return (Result);	}
            public: static std::string const &Debug(void){	static std::string Result("TyDeb");	return (Result);	}
        }; // class CPluginsMode
        public: class CLifeSignalType
        {
            public: static std::string const &_Dynamic(void){	static std::string Result("TyDyn");	return (Result);	}
            public: static std::string const &_Static(void){	static std::string Result("TyStat");	return (Result);	}
        }; // class CLifeSignalType
        public: class CDataFormat_Grp
        {
            public: static std::string const &None(void){	static std::string Result("GrpNo");	return (Result);	}
            public: static std::string const &Boolean(void){	static std::string Result("GrpBool");	return (Result);	}
            public: static std::string const &SignedInteger8Bits(void){	static std::string Result("GrpSIn8");	return (Result);	}
            public: static std::string const &SignedInteger16Bits(void){	static std::string Result("GrpSIn16");	return (Result);	}
            public: static std::string const &SignedInteger32Bits(void){	static std::string Result("GrpSIn32");	return (Result);	}
            public: static std::string const &SignedInteger64Bits(void){	static std::string Result("GrpSIn64");	return (Result);	}
            public: static std::string const &UnsignedInteger8Bits(void){	static std::string Result("GrpUSIn8");	return (Result);	}
            public: static std::string const &UnsignedInteger16Bits(void){	static std::string Result("GrpUSIn16");	return (Result);	}
            public: static std::string const &UnsignedInteger32Bits(void){	static std::string Result("GrpUSIn32");	return (Result);	}
            public: static std::string const &UnsignedInteger64Bits(void){	static std::string Result("GrpUSIn64");	return (Result);	}
            public: static std::string const &FloatingPoint32Bits(void){	static std::string Result("GrpFl32");	return (Result);	}
            public: static std::string const &FloatingPoint64Bits(void){	static std::string Result("GrpFl64");	return (Result);	}
            public: static std::string const &Set8Bits(void){	static std::string Result("GrpBCn8");	return (Result);	}
            public: static std::string const &Set16Bits(void){	static std::string Result("GrpBCn16");	return (Result);	}
            public: static std::string const &Set32Bits(void){	static std::string Result("GrpBCn32");	return (Result);	}
            public: static std::string const &Set64Bits(void){	static std::string Result("GrpBCn64");	return (Result);	}
        }; // class CDataFormat_Grp
        public: class CDataFormat_Pa0
        {
            public: static std::string const &None(void){	static std::string Result("Pa0No");	return (Result);	}
            public: static std::string const &ByteSwap(void){	static std::string Result("Pa0BySwp");	return (Result);	}
            public: static std::string const &WordSwap(void){	static std::string Result("Pa0WoSwp");	return (Result);	}
            public: static std::string const &WordByteSwap(void){	static std::string Result("Pa0WoBySwp");	return (Result);	}
        }; // class CDataFormat_Pa0
        public: class CDataFormatCombiner
        {
            public: static std::string Build(
                    const std::string &Grp,
                    const std::string &Pa0
                    )
            {
                return (
                        Grp + "/" +
                        Pa0
                        );
            }
        }; // class CDataFormatCombiner
        public: class CDataDirection
        {
            public: static std::string const &Input(void){	static std::string Result("TyI");	return (Result);	}
            public: static std::string const &Output(void){	static std::string Result("TyO");	return (Result);	}
            public: static std::string const &InputOutput(void){	static std::string Result("TyIO");	return (Result);	}
            public: static std::string const &Empty(void){	static std::string Result("TyE");	return (Result);	}
        }; // class CDataDirection
        public: class CEntryType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &Constant(void){	static std::string Result("TyCon");	return (Result);	}
            public: static std::string const &Variable(void){	static std::string Result("TyVar");	return (Result);	}
        }; // class CEntryType
        public: class CDataByteOrder
        {
            public: static std::string const &BigEndian(void){	static std::string Result("TyBiEn");	return (Result);	}
            public: static std::string const &LittleEndian(void){	static std::string Result("TyLiEn");	return (Result);	}
        }; // class CDataByteOrder
        public: class CStartTerminal
        {
            public: static std::string const &AInTerminalWithVariationPlaceHolder(void){	static std::string Result("TyAI[n]");	return (Result);	}
            public: static std::string const &AInTerminal1(void){	static std::string Result("TyAI1");	return (Result);	}
            public: static std::string const &AInTerminal2(void){	static std::string Result("TyAI2");	return (Result);	}
            public: static std::string const &AInTerminal3(void){	static std::string Result("TyAI3");	return (Result);	}
            public: static std::string const &AInTerminal4(void){	static std::string Result("TyAI4");	return (Result);	}
            public: static std::string const &AInTerminal5(void){	static std::string Result("TyAI5");	return (Result);	}
            public: static std::string const &AInTerminal6(void){	static std::string Result("TyAI6");	return (Result);	}
            public: static std::string const &AInTerminal7(void){	static std::string Result("TyAI7");	return (Result);	}
            public: static std::string const &AInTerminal8(void){	static std::string Result("TyAI8");	return (Result);	}
            public: static std::string const &AInTerminal9(void){	static std::string Result("TyAI9");	return (Result);	}
            public: static std::string const &AInTerminal10(void){	static std::string Result("TyAI10");	return (Result);	}
            public: static std::string const &AInTerminal11(void){	static std::string Result("TyAI11");	return (Result);	}
            public: static std::string const &AInTerminal12(void){	static std::string Result("TyAI12");	return (Result);	}
            public: static std::string const &AInTerminal13(void){	static std::string Result("TyAI13");	return (Result);	}
            public: static std::string const &AInTerminal14(void){	static std::string Result("TyAI14");	return (Result);	}
            public: static std::string const &AInTerminal15(void){	static std::string Result("TyAI15");	return (Result);	}
            public: static std::string const &AInTerminal16(void){	static std::string Result("TyAI16");	return (Result);	}
            public: static std::string const &AInTerminal17(void){	static std::string Result("TyAI17");	return (Result);	}
            public: static std::string const &AInTerminal18(void){	static std::string Result("TyAI18");	return (Result);	}
            public: static std::string const &AInTerminal19(void){	static std::string Result("TyAI19");	return (Result);	}
            public: static std::string const &AInTerminal20(void){	static std::string Result("TyAI20");	return (Result);	}
            public: static std::string const &AInTerminal21(void){	static std::string Result("TyAI21");	return (Result);	}
            public: static std::string const &AInTerminal22(void){	static std::string Result("TyAI22");	return (Result);	}
            public: static std::string const &AInTerminal23(void){	static std::string Result("TyAI23");	return (Result);	}
            public: static std::string const &AInTerminal24(void){	static std::string Result("TyAI24");	return (Result);	}
            public: static std::string const &AInTerminal25(void){	static std::string Result("TyAI25");	return (Result);	}
            public: static std::string const &AInTerminal26(void){	static std::string Result("TyAI26");	return (Result);	}
            public: static std::string const &AInTerminal27(void){	static std::string Result("TyAI27");	return (Result);	}
            public: static std::string const &AInTerminal28(void){	static std::string Result("TyAI28");	return (Result);	}
            public: static std::string const &AInTerminal29(void){	static std::string Result("TyAI29");	return (Result);	}
            public: static std::string const &AInTerminal30(void){	static std::string Result("TyAI30");	return (Result);	}
            public: static std::string const &AInTerminal31(void){	static std::string Result("TyAI31");	return (Result);	}
            public: static std::string const &AInTerminal32(void){	static std::string Result("TyAI32");	return (Result);	}
            public: static std::string const &AInTerminal33(void){	static std::string Result("TyAI33");	return (Result);	}
            public: static std::string const &AInTerminal34(void){	static std::string Result("TyAI34");	return (Result);	}
            public: static std::string const &AInTerminal35(void){	static std::string Result("TyAI35");	return (Result);	}
            public: static std::string const &AInTerminal36(void){	static std::string Result("TyAI36");	return (Result);	}
            public: static std::string const &AInTerminal37(void){	static std::string Result("TyAI37");	return (Result);	}
            public: static std::string const &AInTerminal38(void){	static std::string Result("TyAI38");	return (Result);	}
            public: static std::string const &AInTerminal39(void){	static std::string Result("TyAI39");	return (Result);	}
            public: static std::string const &AInTerminal40(void){	static std::string Result("TyAI40");	return (Result);	}
            public: static std::string const &AInTerminal41(void){	static std::string Result("TyAI41");	return (Result);	}
            public: static std::string const &AInTerminal42(void){	static std::string Result("TyAI42");	return (Result);	}
            public: static std::string const &AInTerminal43(void){	static std::string Result("TyAI43");	return (Result);	}
            public: static std::string const &AInTerminal44(void){	static std::string Result("TyAI44");	return (Result);	}
            public: static std::string const &AInTerminal45(void){	static std::string Result("TyAI45");	return (Result);	}
            public: static std::string const &AInTerminal46(void){	static std::string Result("TyAI46");	return (Result);	}
            public: static std::string const &AInTerminal47(void){	static std::string Result("TyAI47");	return (Result);	}
            public: static std::string const &AInTerminal48(void){	static std::string Result("TyAI48");	return (Result);	}
            public: static std::string const &AInTerminal49(void){	static std::string Result("TyAI49");	return (Result);	}
            public: static std::string const &AInTerminal50(void){	static std::string Result("TyAI50");	return (Result);	}
            public: static std::string const &AInTerminal51(void){	static std::string Result("TyAI51");	return (Result);	}
            public: static std::string const &AInTerminal52(void){	static std::string Result("TyAI52");	return (Result);	}
            public: static std::string const &AInTerminal53(void){	static std::string Result("TyAI53");	return (Result);	}
            public: static std::string const &AInTerminal54(void){	static std::string Result("TyAI54");	return (Result);	}
            public: static std::string const &AInTerminal55(void){	static std::string Result("TyAI55");	return (Result);	}
            public: static std::string const &AInTerminal56(void){	static std::string Result("TyAI56");	return (Result);	}
            public: static std::string const &AInTerminal57(void){	static std::string Result("TyAI57");	return (Result);	}
            public: static std::string const &AInTerminal58(void){	static std::string Result("TyAI58");	return (Result);	}
            public: static std::string const &AInTerminal59(void){	static std::string Result("TyAI59");	return (Result);	}
            public: static std::string const &AInTerminal60(void){	static std::string Result("TyAI60");	return (Result);	}
            public: static std::string const &AInTerminal61(void){	static std::string Result("TyAI61");	return (Result);	}
            public: static std::string const &AInTerminal62(void){	static std::string Result("TyAI62");	return (Result);	}
            public: static std::string const &AInTerminal63(void){	static std::string Result("TyAI63");	return (Result);	}
            public: static std::string const &AInTerminal64(void){	static std::string Result("TyAI64");	return (Result);	}
            public: static std::string const &AInTerminal65(void){	static std::string Result("TyAI65");	return (Result);	}
            public: static std::string const &AInTerminal66(void){	static std::string Result("TyAI66");	return (Result);	}
            public: static std::string const &AInTerminal67(void){	static std::string Result("TyAI67");	return (Result);	}
            public: static std::string const &AInTerminal68(void){	static std::string Result("TyAI68");	return (Result);	}
            public: static std::string const &AInTerminal69(void){	static std::string Result("TyAI69");	return (Result);	}
            public: static std::string const &AInTerminal70(void){	static std::string Result("TyAI70");	return (Result);	}
            public: static std::string const &AInTerminal71(void){	static std::string Result("TyAI71");	return (Result);	}
            public: static std::string const &AInTerminal72(void){	static std::string Result("TyAI72");	return (Result);	}
            public: static std::string const &AInTerminal73(void){	static std::string Result("TyAI73");	return (Result);	}
            public: static std::string const &AInTerminal74(void){	static std::string Result("TyAI74");	return (Result);	}
            public: static std::string const &AInTerminal75(void){	static std::string Result("TyAI75");	return (Result);	}
            public: static std::string const &AInTerminal76(void){	static std::string Result("TyAI76");	return (Result);	}
            public: static std::string const &AInTerminal77(void){	static std::string Result("TyAI77");	return (Result);	}
            public: static std::string const &AInTerminal78(void){	static std::string Result("TyAI78");	return (Result);	}
            public: static std::string const &AInTerminal79(void){	static std::string Result("TyAI79");	return (Result);	}
            public: static std::string const &AInTerminal80(void){	static std::string Result("TyAI80");	return (Result);	}
            public: static std::string const &AInTerminal81(void){	static std::string Result("TyAI81");	return (Result);	}
            public: static std::string const &AInTerminal82(void){	static std::string Result("TyAI82");	return (Result);	}
            public: static std::string const &AInTerminal83(void){	static std::string Result("TyAI83");	return (Result);	}
            public: static std::string const &AInTerminal84(void){	static std::string Result("TyAI84");	return (Result);	}
            public: static std::string const &AInTerminal85(void){	static std::string Result("TyAI85");	return (Result);	}
            public: static std::string const &AInTerminal86(void){	static std::string Result("TyAI86");	return (Result);	}
            public: static std::string const &AInTerminal87(void){	static std::string Result("TyAI87");	return (Result);	}
            public: static std::string const &AInTerminal88(void){	static std::string Result("TyAI88");	return (Result);	}
            public: static std::string const &AInTerminal89(void){	static std::string Result("TyAI89");	return (Result);	}
            public: static std::string const &AInTerminal90(void){	static std::string Result("TyAI90");	return (Result);	}
            public: static std::string const &AInTerminal91(void){	static std::string Result("TyAI91");	return (Result);	}
            public: static std::string const &AInTerminal92(void){	static std::string Result("TyAI92");	return (Result);	}
            public: static std::string const &AInTerminal93(void){	static std::string Result("TyAI93");	return (Result);	}
            public: static std::string const &AInTerminal94(void){	static std::string Result("TyAI94");	return (Result);	}
            public: static std::string const &AInTerminal95(void){	static std::string Result("TyAI95");	return (Result);	}
            public: static std::string const &AInTerminal96(void){	static std::string Result("TyAI96");	return (Result);	}
            public: static std::string const &AInTerminal97(void){	static std::string Result("TyAI97");	return (Result);	}
            public: static std::string const &AInTerminal98(void){	static std::string Result("TyAI98");	return (Result);	}
            public: static std::string const &AInTerminal99(void){	static std::string Result("TyAI99");	return (Result);	}
            public: static std::string const &AInTerminal100(void){	static std::string Result("TyAI100");	return (Result);	}
            public: static std::string const &AInTerminal101(void){	static std::string Result("TyAI101");	return (Result);	}
            public: static std::string const &AInTerminal102(void){	static std::string Result("TyAI102");	return (Result);	}
            public: static std::string const &AInTerminal103(void){	static std::string Result("TyAI103");	return (Result);	}
            public: static std::string const &AInTerminal104(void){	static std::string Result("TyAI104");	return (Result);	}
            public: static std::string const &AInTerminal105(void){	static std::string Result("TyAI105");	return (Result);	}
            public: static std::string const &AInTerminal106(void){	static std::string Result("TyAI106");	return (Result);	}
            public: static std::string const &AInTerminal107(void){	static std::string Result("TyAI107");	return (Result);	}
            public: static std::string const &AInTerminal108(void){	static std::string Result("TyAI108");	return (Result);	}
            public: static std::string const &AInTerminal109(void){	static std::string Result("TyAI109");	return (Result);	}
            public: static std::string const &AInTerminal110(void){	static std::string Result("TyAI110");	return (Result);	}
            public: static std::string const &AInTerminal111(void){	static std::string Result("TyAI111");	return (Result);	}
            public: static std::string const &AInTerminal112(void){	static std::string Result("TyAI112");	return (Result);	}
            public: static std::string const &AInTerminal113(void){	static std::string Result("TyAI113");	return (Result);	}
            public: static std::string const &AInTerminal114(void){	static std::string Result("TyAI114");	return (Result);	}
            public: static std::string const &AInTerminal115(void){	static std::string Result("TyAI115");	return (Result);	}
            public: static std::string const &AInTerminal116(void){	static std::string Result("TyAI116");	return (Result);	}
            public: static std::string const &AInTerminal117(void){	static std::string Result("TyAI117");	return (Result);	}
            public: static std::string const &AInTerminal118(void){	static std::string Result("TyAI118");	return (Result);	}
            public: static std::string const &AInTerminal119(void){	static std::string Result("TyAI119");	return (Result);	}
            public: static std::string const &AInTerminal120(void){	static std::string Result("TyAI120");	return (Result);	}
            public: static std::string const &AInTerminal121(void){	static std::string Result("TyAI121");	return (Result);	}
            public: static std::string const &AInTerminal122(void){	static std::string Result("TyAI122");	return (Result);	}
            public: static std::string const &AInTerminal123(void){	static std::string Result("TyAI123");	return (Result);	}
            public: static std::string const &AInTerminal124(void){	static std::string Result("TyAI124");	return (Result);	}
            public: static std::string const &AInTerminal125(void){	static std::string Result("TyAI125");	return (Result);	}
            public: static std::string const &AInTerminal126(void){	static std::string Result("TyAI126");	return (Result);	}
            public: static std::string const &AInTerminal127(void){	static std::string Result("TyAI127");	return (Result);	}
            public: static std::string const &AInTerminal128(void){	static std::string Result("TyAI128");	return (Result);	}
            public: static std::string const &AInTerminal129(void){	static std::string Result("TyAI129");	return (Result);	}
            public: static std::string const &AInTerminal130(void){	static std::string Result("TyAI130");	return (Result);	}
            public: static std::string const &AInTerminal131(void){	static std::string Result("TyAI131");	return (Result);	}
            public: static std::string const &AInTerminal132(void){	static std::string Result("TyAI132");	return (Result);	}
            public: static std::string const &AInTerminal133(void){	static std::string Result("TyAI133");	return (Result);	}
            public: static std::string const &AInTerminal134(void){	static std::string Result("TyAI134");	return (Result);	}
            public: static std::string const &AInTerminal135(void){	static std::string Result("TyAI135");	return (Result);	}
            public: static std::string const &AInTerminal136(void){	static std::string Result("TyAI136");	return (Result);	}
            public: static std::string const &AInTerminal137(void){	static std::string Result("TyAI137");	return (Result);	}
            public: static std::string const &AInTerminal138(void){	static std::string Result("TyAI138");	return (Result);	}
            public: static std::string const &AInTerminal139(void){	static std::string Result("TyAI139");	return (Result);	}
            public: static std::string const &AInTerminal140(void){	static std::string Result("TyAI140");	return (Result);	}
            public: static std::string const &AInTerminal141(void){	static std::string Result("TyAI141");	return (Result);	}
            public: static std::string const &AInTerminal142(void){	static std::string Result("TyAI142");	return (Result);	}
            public: static std::string const &AInTerminal143(void){	static std::string Result("TyAI143");	return (Result);	}
            public: static std::string const &AInTerminal144(void){	static std::string Result("TyAI144");	return (Result);	}
            public: static std::string const &AInTerminal145(void){	static std::string Result("TyAI145");	return (Result);	}
            public: static std::string const &AInTerminal146(void){	static std::string Result("TyAI146");	return (Result);	}
            public: static std::string const &AInTerminal147(void){	static std::string Result("TyAI147");	return (Result);	}
            public: static std::string const &AInTerminal148(void){	static std::string Result("TyAI148");	return (Result);	}
            public: static std::string const &AInTerminal149(void){	static std::string Result("TyAI149");	return (Result);	}
            public: static std::string const &AInTerminal150(void){	static std::string Result("TyAI150");	return (Result);	}
            public: static std::string const &AInTerminal151(void){	static std::string Result("TyAI151");	return (Result);	}
            public: static std::string const &AInTerminal152(void){	static std::string Result("TyAI152");	return (Result);	}
            public: static std::string const &AInTerminal153(void){	static std::string Result("TyAI153");	return (Result);	}
            public: static std::string const &AInTerminal154(void){	static std::string Result("TyAI154");	return (Result);	}
            public: static std::string const &AInTerminal155(void){	static std::string Result("TyAI155");	return (Result);	}
            public: static std::string const &AInTerminal156(void){	static std::string Result("TyAI156");	return (Result);	}
            public: static std::string const &AInTerminal157(void){	static std::string Result("TyAI157");	return (Result);	}
            public: static std::string const &AInTerminal158(void){	static std::string Result("TyAI158");	return (Result);	}
            public: static std::string const &AInTerminal159(void){	static std::string Result("TyAI159");	return (Result);	}
            public: static std::string const &AInTerminal160(void){	static std::string Result("TyAI160");	return (Result);	}
            public: static std::string const &OtherTerminalNone(void){	static std::string Result("TyOtNo");	return (Result);	}
            public: static std::string const &AOutTerminalPWithVariationPlaceHolder(void){	static std::string Result("TyAO[n]+");	return (Result);	}
            public: static std::string const &AOutTerminal1P(void){	static std::string Result("TyAO1+");	return (Result);	}
            public: static std::string const &AOutTerminal2P(void){	static std::string Result("TyAO2+");	return (Result);	}
            public: static std::string const &AOutTerminal3P(void){	static std::string Result("TyAO3+");	return (Result);	}
            public: static std::string const &AOutTerminal4P(void){	static std::string Result("TyAO4+");	return (Result);	}
            public: static std::string const &AOutTerminalMWithVariationPlaceHolder(void){	static std::string Result("TyAO[n]-");	return (Result);	}
            public: static std::string const &AOutTerminal1M(void){	static std::string Result("TyAO1-");	return (Result);	}
            public: static std::string const &AOutTerminal2M(void){	static std::string Result("TyAO2-");	return (Result);	}
            public: static std::string const &AOutTerminal3M(void){	static std::string Result("TyAO3-");	return (Result);	}
            public: static std::string const &AOutTerminal4M(void){	static std::string Result("TyAO4-");	return (Result);	}
            public: static std::string const &DInOutTerminalWithVariationPlaceHolder(void){	static std::string Result("TyDIO[n]");	return (Result);	}
            public: static std::string const &DInOutTerminal1(void){	static std::string Result("TyDIO1");	return (Result);	}
            public: static std::string const &DInOutTerminal2(void){	static std::string Result("TyDIO2");	return (Result);	}
            public: static std::string const &DInOutTerminal3(void){	static std::string Result("TyDIO3");	return (Result);	}
            public: static std::string const &DInOutTerminal4(void){	static std::string Result("TyDIO4");	return (Result);	}
            public: static std::string const &DInOutTerminal5(void){	static std::string Result("TyDIO5");	return (Result);	}
            public: static std::string const &DInOutTerminal6(void){	static std::string Result("TyDIO6");	return (Result);	}
            public: static std::string const &DInOutTerminal7(void){	static std::string Result("TyDIO7");	return (Result);	}
            public: static std::string const &DInOutTerminal8(void){	static std::string Result("TyDIO8");	return (Result);	}
            public: static std::string const &DInOutTerminal9(void){	static std::string Result("TyDIO9");	return (Result);	}
            public: static std::string const &DInOutTerminal10(void){	static std::string Result("TyDIO10");	return (Result);	}
            public: static std::string const &DInOutTerminal11(void){	static std::string Result("TyDIO11");	return (Result);	}
            public: static std::string const &DInOutTerminal12(void){	static std::string Result("TyDIO12");	return (Result);	}
            public: static std::string const &DInOutTerminal13(void){	static std::string Result("TyDIO13");	return (Result);	}
            public: static std::string const &DInOutTerminal14(void){	static std::string Result("TyDIO14");	return (Result);	}
            public: static std::string const &DInOutTerminal15(void){	static std::string Result("TyDIO15");	return (Result);	}
            public: static std::string const &DInOutTerminal16(void){	static std::string Result("TyDIO16");	return (Result);	}
            public: static std::string const &DInOutTerminal17(void){	static std::string Result("TyDIO17");	return (Result);	}
            public: static std::string const &DInOutTerminal18(void){	static std::string Result("TyDIO18");	return (Result);	}
            public: static std::string const &DInOutTerminal19(void){	static std::string Result("TyDIO19");	return (Result);	}
            public: static std::string const &DInOutTerminal20(void){	static std::string Result("TyDIO20");	return (Result);	}
            public: static std::string const &DInOutTerminal21(void){	static std::string Result("TyDIO21");	return (Result);	}
            public: static std::string const &DInOutTerminal22(void){	static std::string Result("TyDIO22");	return (Result);	}
            public: static std::string const &DInOutTerminal23(void){	static std::string Result("TyDIO23");	return (Result);	}
            public: static std::string const &DInOutTerminal24(void){	static std::string Result("TyDIO24");	return (Result);	}
            public: static std::string const &DInOutTerminal25(void){	static std::string Result("TyDIO25");	return (Result);	}
            public: static std::string const &DInOutTerminal26(void){	static std::string Result("TyDIO26");	return (Result);	}
            public: static std::string const &DInOutTerminal27(void){	static std::string Result("TyDIO27");	return (Result);	}
            public: static std::string const &DInOutTerminal28(void){	static std::string Result("TyDIO28");	return (Result);	}
            public: static std::string const &DInOutTerminal29(void){	static std::string Result("TyDIO29");	return (Result);	}
            public: static std::string const &DInOutTerminal30(void){	static std::string Result("TyDIO30");	return (Result);	}
            public: static std::string const &DInOutTerminal31(void){	static std::string Result("TyDIO31");	return (Result);	}
            public: static std::string const &DInOutTerminal32(void){	static std::string Result("TyDIO32");	return (Result);	}
            public: static std::string const &DInTerminalWithVariationPlaceHolder(void){	static std::string Result("TyDI[n]");	return (Result);	}
            public: static std::string const &DInTerminal1(void){	static std::string Result("TyDI1");	return (Result);	}
            public: static std::string const &DInTerminal2(void){	static std::string Result("TyDI2");	return (Result);	}
            public: static std::string const &DInTerminal3(void){	static std::string Result("TyDI3");	return (Result);	}
            public: static std::string const &DInTerminal4(void){	static std::string Result("TyDI4");	return (Result);	}
            public: static std::string const &DInTerminal5(void){	static std::string Result("TyDI5");	return (Result);	}
            public: static std::string const &DInTerminal6(void){	static std::string Result("TyDI6");	return (Result);	}
            public: static std::string const &DInTerminal7(void){	static std::string Result("TyDI7");	return (Result);	}
            public: static std::string const &DInTerminal8(void){	static std::string Result("TyDI8");	return (Result);	}
            public: static std::string const &DInTerminal9(void){	static std::string Result("TyDI9");	return (Result);	}
            public: static std::string const &DInTerminal10(void){	static std::string Result("TyDI10");	return (Result);	}
            public: static std::string const &DInTerminal11(void){	static std::string Result("TyDI11");	return (Result);	}
            public: static std::string const &DInTerminal12(void){	static std::string Result("TyDI12");	return (Result);	}
            public: static std::string const &DInTerminal13(void){	static std::string Result("TyDI13");	return (Result);	}
            public: static std::string const &DInTerminal14(void){	static std::string Result("TyDI14");	return (Result);	}
            public: static std::string const &DInTerminal15(void){	static std::string Result("TyDI15");	return (Result);	}
            public: static std::string const &DInTerminal16(void){	static std::string Result("TyDI16");	return (Result);	}
            public: static std::string const &DInTerminal17(void){	static std::string Result("TyDI17");	return (Result);	}
            public: static std::string const &DInTerminal18(void){	static std::string Result("TyDI18");	return (Result);	}
            public: static std::string const &DInTerminal19(void){	static std::string Result("TyDI19");	return (Result);	}
            public: static std::string const &DInTerminal20(void){	static std::string Result("TyDI20");	return (Result);	}
            public: static std::string const &DInTerminal21(void){	static std::string Result("TyDI21");	return (Result);	}
            public: static std::string const &DInTerminal22(void){	static std::string Result("TyDI22");	return (Result);	}
            public: static std::string const &DInTerminal23(void){	static std::string Result("TyDI23");	return (Result);	}
            public: static std::string const &DInTerminal24(void){	static std::string Result("TyDI24");	return (Result);	}
            public: static std::string const &DInTerminal25(void){	static std::string Result("TyDI25");	return (Result);	}
            public: static std::string const &DInTerminal26(void){	static std::string Result("TyDI26");	return (Result);	}
            public: static std::string const &DInTerminal27(void){	static std::string Result("TyDI27");	return (Result);	}
            public: static std::string const &DInTerminal28(void){	static std::string Result("TyDI28");	return (Result);	}
            public: static std::string const &DInTerminal29(void){	static std::string Result("TyDI29");	return (Result);	}
            public: static std::string const &DInTerminal30(void){	static std::string Result("TyDI30");	return (Result);	}
            public: static std::string const &DInTerminal31(void){	static std::string Result("TyDI31");	return (Result);	}
            public: static std::string const &DInTerminal32(void){	static std::string Result("TyDI32");	return (Result);	}
            public: static std::string const &DOutTerminalWithVariationPlaceHolder(void){	static std::string Result("TyDO[n]");	return (Result);	}
            public: static std::string const &DOutTerminal1(void){	static std::string Result("TyDO1");	return (Result);	}
            public: static std::string const &DOutTerminal2(void){	static std::string Result("TyDO2");	return (Result);	}
            public: static std::string const &DOutTerminal3(void){	static std::string Result("TyDO3");	return (Result);	}
            public: static std::string const &DOutTerminal4(void){	static std::string Result("TyDO4");	return (Result);	}
            public: static std::string const &DOutTerminal5(void){	static std::string Result("TyDO5");	return (Result);	}
            public: static std::string const &DOutTerminal6(void){	static std::string Result("TyDO6");	return (Result);	}
            public: static std::string const &DOutTerminal7(void){	static std::string Result("TyDO7");	return (Result);	}
            public: static std::string const &DOutTerminal8(void){	static std::string Result("TyDO8");	return (Result);	}
            public: static std::string const &DOutTerminal9(void){	static std::string Result("TyDO9");	return (Result);	}
            public: static std::string const &DOutTerminal10(void){	static std::string Result("TyDO10");	return (Result);	}
            public: static std::string const &DOutTerminal11(void){	static std::string Result("TyDO11");	return (Result);	}
            public: static std::string const &DOutTerminal12(void){	static std::string Result("TyDO12");	return (Result);	}
            public: static std::string const &DOutTerminal13(void){	static std::string Result("TyDO13");	return (Result);	}
            public: static std::string const &DOutTerminal14(void){	static std::string Result("TyDO14");	return (Result);	}
            public: static std::string const &DOutTerminal15(void){	static std::string Result("TyDO15");	return (Result);	}
            public: static std::string const &DOutTerminal16(void){	static std::string Result("TyDO16");	return (Result);	}
            public: static std::string const &DOutTerminal17(void){	static std::string Result("TyDO17");	return (Result);	}
            public: static std::string const &DOutTerminal18(void){	static std::string Result("TyDO18");	return (Result);	}
            public: static std::string const &DOutTerminal19(void){	static std::string Result("TyDO19");	return (Result);	}
            public: static std::string const &DOutTerminal20(void){	static std::string Result("TyDO20");	return (Result);	}
            public: static std::string const &DOutTerminal21(void){	static std::string Result("TyDO21");	return (Result);	}
            public: static std::string const &DOutTerminal22(void){	static std::string Result("TyDO22");	return (Result);	}
            public: static std::string const &DOutTerminal23(void){	static std::string Result("TyDO23");	return (Result);	}
            public: static std::string const &DOutTerminal24(void){	static std::string Result("TyDO24");	return (Result);	}
            public: static std::string const &DOutTerminal25(void){	static std::string Result("TyDO25");	return (Result);	}
            public: static std::string const &DOutTerminal26(void){	static std::string Result("TyDO26");	return (Result);	}
            public: static std::string const &DOutTerminal27(void){	static std::string Result("TyDO27");	return (Result);	}
            public: static std::string const &DOutTerminal28(void){	static std::string Result("TyDO28");	return (Result);	}
            public: static std::string const &DOutTerminal29(void){	static std::string Result("TyDO29");	return (Result);	}
            public: static std::string const &DOutTerminal30(void){	static std::string Result("TyDO30");	return (Result);	}
            public: static std::string const &DOutTerminal31(void){	static std::string Result("TyDO31");	return (Result);	}
            public: static std::string const &DOutTerminal32(void){	static std::string Result("TyDO32");	return (Result);	}
            public: static std::string const &RemTerminalWithVariationPlaceHolder(void){	static std::string Result("TyREM[n]");	return (Result);	}
            public: static std::string const &RemTerminal1(void){	static std::string Result("TyREM1");	return (Result);	}
            public: static std::string const &RemTerminal2(void){	static std::string Result("TyREM2");	return (Result);	}
            public: static std::string const &RemTerminal3(void){	static std::string Result("TyREM3");	return (Result);	}
            public: static std::string const &RemTerminal4(void){	static std::string Result("TyREM4");	return (Result);	}
            public: static std::string const &RemTerminal5(void){	static std::string Result("TyREM5");	return (Result);	}
            public: static std::string const &RemTerminal6(void){	static std::string Result("TyREM6");	return (Result);	}
            public: static std::string const &RemTerminal7(void){	static std::string Result("TyREM7");	return (Result);	}
            public: static std::string const &RemTerminal8(void){	static std::string Result("TyREM8");	return (Result);	}
            public: static std::string const &RemTerminal9(void){	static std::string Result("TyREM9");	return (Result);	}
            public: static std::string const &RemTerminal10(void){	static std::string Result("TyREM10");	return (Result);	}
        }; // class CStartTerminal
        public: class CTerminalVariationType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &BNC(void){	static std::string Result("TyBNC");	return (Result);	}
            public: static std::string const &SecurityBanana(void){	static std::string Result("TySecBan");	return (Result);	}
        }; // class CTerminalVariationType
        public: class CSourceType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &Constant(void){	static std::string Result("TyCon");	return (Result);	}
            public: static std::string const &External(void){	static std::string Result("TyExt");	return (Result);	}
            public: static std::string const &_Internal(void){	static std::string Result("TyInt");	return (Result);	}
            public: static std::string const &User(void){	static std::string Result("TyUs");	return (Result);	}
            public: static std::string const &SensorActor(void){	static std::string Result("TySenAct");	return (Result);	}
            public: static std::string const &Polynomial(void){	static std::string Result("TyPoly");	return (Result);	}
            public: static std::string const &PolynomialAnalogInputBridgeSupplyVoltageConsidered(void){	static std::string Result("TyPolyAIBrSuVoCo");	return (Result);	}
        }; // class CSourceType
        public: class CStrainGaugePolarityType
        {
            public: static std::string const &CompressiveStrainIsPositive(void){	static std::string Result("TyCompressiveStrainIsPositive");	return (Result);	}
            public: static std::string const &TensileStrainIsPositive(void){	static std::string Result("TyTensileStrainIsPositive");	return (Result);	}
        }; // class CStrainGaugePolarityType
        public: class CThresholdType
        {
            public: static std::string const &HysHighHighPoint(void){	static std::string Result("TyHyHiHiPo");	return (Result);	}
            public: static std::string const &HysHighLowPoint(void){	static std::string Result("TyHyHiLoPo");	return (Result);	}
            public: static std::string const &HysLowHighPoint(void){	static std::string Result("TyHyLoHiPo");	return (Result);	}
            public: static std::string const &HysLowLowPoint(void){	static std::string Result("TyHyLoLoPo");	return (Result);	}
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &OffOn(void){	static std::string Result("TyOffOn");	return (Result);	}
            public: static std::string const &OffOnOff(void){	static std::string Result("TyOffOnOff");	return (Result);	}
            public: static std::string const &OnOff(void){	static std::string Result("TyOnOff");	return (Result);	}
            public: static std::string const &OnOffOn(void){	static std::string Result("TyOnOffOn");	return (Result);	}
        }; // class CThresholdType
        public: class CThresholdValueType
        {
            public: static std::string const &IsConstant(void){	static std::string Result("TyIsCon");	return (Result);	}
            public: static std::string const &IsVariable(void){	static std::string Result("TyIsVar");	return (Result);	}
        }; // class CThresholdValueType
        public: class CErrorHandlingType
        {
            public: static std::string const &FillCorrespondingLimit(void){	static std::string Result("TyFiCoLi");	return (Result);	}
            public: static std::string const &FillDefaultValue(void){	static std::string Result("TyFiDeVa");	return (Result);	}
            public: static std::string const &StayAtLastValue(void){	static std::string Result("TyStAtLaVa");	return (Result);	}
        }; // class CErrorHandlingType
        public: class CWatchdogHandlingType
        {
            public: static std::string const &FillFallbackValue(void){	static std::string Result("TyFiFaVa");	return (Result);	}
            public: static std::string const &LeaveIndependent(void){	static std::string Result("TyLeIn");	return (Result);	}
        }; // class CWatchdogHandlingType
        public: class CSignalTimeoutType
        {
            public: static std::string const &DeclineValueUntilOFFAfterDuration(void){	static std::string Result("TyDecValUntilOff");	return (Result);	}
            public: static std::string const &RemainAtLastValueThenAfterDurationOFF(void){	static std::string Result("TyRemAtLastValThenOff");	return (Result);	}
            public: static std::string const &ValueImmediatelyOFF(void){	static std::string Result("TyValImmOff");	return (Result);	}
        }; // class CSignalTimeoutType
        public: class COversamplingType
        {
            public: static std::string const &AsyncBuffered(void){	static std::string Result("TyAsBu");	return (Result);	}
            public: static std::string const &Off(void){	static std::string Result("TyOff");	return (Result);	}
            public: static std::string const &On(void){	static std::string Result("TyOn");	return (Result);	}
        }; // class COversamplingType
        public: class CStreamProcessorAccessType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &Local(void){	static std::string Result("TyLoc");	return (Result);	}
            public: static std::string const &HighSpeedPort(void){	static std::string Result("TyHSPort");	return (Result);	}
            public: static std::string const &HighSpeedPortDataBuffer(void){	static std::string Result("TyHSPortDatBuf");	return (Result);	}
            public: static std::string const &HighSpeedPortDataLogger(void){	static std::string Result("TyHSPortDatLog");	return (Result);	}
            public: static std::string const &ProcessImage(void){	static std::string Result("TyPI");	return (Result);	}
            public: static std::string const &Microphone(void){	static std::string Result("TyMic");	return (Result);	}
            public: static std::string const &Boost(void){	static std::string Result("TyBoo");	return (Result);	}
        }; // class CStreamProcessorAccessType
        public: class CStreamProcessorInitStateType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &Disabled(void){	static std::string Result("TyDis");	return (Result);	}
            public: static std::string const &Enabled(void){	static std::string Result("TyEn");	return (Result);	}
            public: static std::string const &SingleShotDisabled(void){	static std::string Result("TySiShDis");	return (Result);	}
            public: static std::string const &SingleShotEnabled(void){	static std::string Result("TySiShEn");	return (Result);	}
        }; // class CStreamProcessorInitStateType
        public: class CStreamProcessorDataBufferPostProcessAdditionalType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &PowerAnalyzer(void){	static std::string Result("TyPowAnl");	return (Result);	}
        }; // class CStreamProcessorDataBufferPostProcessAdditionalType
        public: class CServerAccessThemeType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &ProcessBuffer(void){	static std::string Result("TyProBuf");	return (Result);	}
            public: static std::string const &PostProcessBuffer(void){	static std::string Result("TyPosProBuf");	return (Result);	}
            public: static std::string const &TestConLogger(void){	static std::string Result("TyTesConLog");	return (Result);	}
        }; // class CServerAccessThemeType
        public: class CSSIDecodingType
        {
            public: static std::string const &Binary(void){	static std::string Result("TyBin");	return (Result);	}
            public: static std::string const &GrayCode(void){	static std::string Result("TyGrCo");	return (Result);	}
        }; // class CSSIDecodingType
        public: class CSSIBusClock
        {
            public: static std::string const &_100k(void){	static std::string Result("Ty100k");	return (Result);	}
            public: static std::string const &_200k(void){	static std::string Result("Ty200k");	return (Result);	}
            public: static std::string const &_250k(void){	static std::string Result("Ty250k");	return (Result);	}
            public: static std::string const &_400k(void){	static std::string Result("Ty400k");	return (Result);	}
            public: static std::string const &_500k(void){	static std::string Result("Ty500k");	return (Result);	}
            public: static std::string const &_800k(void){	static std::string Result("Ty800k");	return (Result);	}
            public: static std::string const &_1M(void){	static std::string Result("Ty1M");	return (Result);	}
            public: static std::string const &_2M(void){	static std::string Result("Ty2M");	return (Result);	}
        }; // class CSSIBusClock
        public: class CModbusCommand
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &ReadCoils(void){	static std::string Result("TyReCo");	return (Result);	}
            public: static std::string const &ReadDiscreteInputs(void){	static std::string Result("TyReDiIn");	return (Result);	}
            public: static std::string const &ReadHoldingRegister(void){	static std::string Result("TyReHoRe");	return (Result);	}
            public: static std::string const &ReadInputRegister(void){	static std::string Result("TyReInRe");	return (Result);	}
            public: static std::string const &ReadExceptionStatus(void){	static std::string Result("TyReExSt");	return (Result);	}
            public: static std::string const &Diagnostic(void){	static std::string Result("TyDiag");	return (Result);	}
            public: static std::string const &GetComEventCounter(void){	static std::string Result("TyGeCoEvCo");	return (Result);	}
            public: static std::string const &GetComEventLog(void){	static std::string Result("TyGeCoEvLo");	return (Result);	}
            public: static std::string const &ReportSlaveIdentification(void){	static std::string Result("TyReSlId");	return (Result);	}
            public: static std::string const &ReadFileRecord(void){	static std::string Result("TyReFiRe");	return (Result);	}
            public: static std::string const &ReadFIFOQueue(void){	static std::string Result("TyReFiFoQu");	return (Result);	}
            public: static std::string const &ReadDeviceIdentification(void){	static std::string Result("TyReDeId");	return (Result);	}
            public: static std::string const &WriteSingleCoil(void){	static std::string Result("TyWrSiCo");	return (Result);	}
            public: static std::string const &WriteSingleRegister(void){	static std::string Result("TyWrSiRe");	return (Result);	}
            public: static std::string const &WriteMultipleCoils(void){	static std::string Result("TyWrMuCo");	return (Result);	}
            public: static std::string const &WriteMultipleRegisters(void){	static std::string Result("TyWrMuRe");	return (Result);	}
            public: static std::string const &WriteFileRecord(void){	static std::string Result("TyWrFiRe");	return (Result);	}
            public: static std::string const &MaskWriteRegister(void){	static std::string Result("TyMaWrRe");	return (Result);	}
            public: static std::string const &ReadWriteMultipleRegisters(void){	static std::string Result("TyReWrMuRe");	return (Result);	}
        }; // class CModbusCommand
        public: class CModbusRequestCombineMode
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &Enabled(void){	static std::string Result("TyEn");	return (Result);	}
            public: static std::string const &StartRequest(void){	static std::string Result("TyStRe");	return (Result);	}
        }; // class CModbusRequestCombineMode
        public: class CSDI12Command
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &M(void){	static std::string Result("TyM");	return (Result);	}
            public: static std::string const &M1(void){	static std::string Result("TyM1");	return (Result);	}
            public: static std::string const &M2(void){	static std::string Result("TyM2");	return (Result);	}
            public: static std::string const &M3(void){	static std::string Result("TyM3");	return (Result);	}
            public: static std::string const &M4(void){	static std::string Result("TyM4");	return (Result);	}
            public: static std::string const &M5(void){	static std::string Result("TyM5");	return (Result);	}
            public: static std::string const &M6(void){	static std::string Result("TyM6");	return (Result);	}
            public: static std::string const &M7(void){	static std::string Result("TyM7");	return (Result);	}
            public: static std::string const &M8(void){	static std::string Result("TyM8");	return (Result);	}
            public: static std::string const &M9(void){	static std::string Result("TyM9");	return (Result);	}
        }; // class CSDI12Command
        public: class CLoggerDataCollectionType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &Continuous(void){	static std::string Result("TyCon");	return (Result);	}
            public: static std::string const &Triggered(void){	static std::string Result("TyTri");	return (Result);	}
            public: static std::string const &EventBased(void){	static std::string Result("TyEveBas");	return (Result);	}
        }; // class CLoggerDataCollectionType
        public: class CRemoteStreamProcessorValueType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &State(void){	static std::string Result("TySta");	return (Result);	}
            public: static std::string const &Variable(void){	static std::string Result("TyVar");	return (Result);	}
        }; // class CRemoteStreamProcessorValueType
        public: class CRemoteStreamProcessorValueStateType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &ErrorStates(void){	static std::string Result("TyErrSta");	return (Result);	}
            public: static std::string const &IsEnabled(void){	static std::string Result("TyIsEn");	return (Result);	}
            public: static std::string const &IsLogging(void){	static std::string Result("TyIsLog");	return (Result);	}
            public: static std::string const &IsStartTriggerActive(void){	static std::string Result("TyIsStaTriAct");	return (Result);	}
            public: static std::string const &IsStopTriggerActive(void){	static std::string Result("TyIsStoTriAct");	return (Result);	}
            public: static std::string const &FilesStoredCount(void){	static std::string Result("TyFilStorCnt");	return (Result);	}
            public: static std::string const &FileProgress(void){	static std::string Result("TyFilProg");	return (Result);	}
            public: static std::string const &TriggerProgress(void){	static std::string Result("TyTriProg");	return (Result);	}
            public: static std::string const &MailSent(void){	static std::string Result("TyMaSent");	return (Result);	}
            public: static std::string const &FTPSent(void){	static std::string Result("TyFTPSent");	return (Result);	}
            public: static std::string const &DestinationIndex(void){	static std::string Result("TyDestInd");	return (Result);	}
            public: static std::string const &DestinationSize(void){	static std::string Result("TyDestSiz");	return (Result);	}
            public: static std::string const &DestinationRemaining(void){	static std::string Result("TyDestRem");	return (Result);	}
            public: static std::string const &DestinationLoad(void){	static std::string Result("TyDestLo");	return (Result);	}
            public: static std::string const &DataSourceOverrunCount(void){	static std::string Result("TyDaSrcOvrCnt");	return (Result);	}
            public: static std::string const &DataSourceActualSize(void){	static std::string Result("TyDaSrcActSiz");	return (Result);	}
            public: static std::string const &DataSourceCapacity(void){	static std::string Result("TyDaSrcCap");	return (Result);	}
            public: static std::string const &DataSourceMaximumSize(void){	static std::string Result("TyDaSrcMaxSiz");	return (Result);	}
        }; // class CRemoteStreamProcessorValueStateType
        public: class CBufferPreInitType
        {
            public: static std::string const &Off(void){	static std::string Result("TyOff");	return (Result);	}
            public: static std::string const &FastFill(void){	static std::string Result("TyFaFill");	return (Result);	}
            public: static std::string const &SlowFill(void){	static std::string Result("TySlFill");	return (Result);	}
        }; // class CBufferPreInitType
        public: class CWatchdogType
        {
            public: static std::string const &Off(void){	static std::string Result("TyOff");	return (Result);	}
            public: static std::string const &ResetOnReTriggerTimeout(void){	static std::string Result("ResOnReTrTimo");	return (Result);	}
        }; // class CWatchdogType
        public: class CFTPClientMode
        {
            public: static std::string const &Off(void){	static std::string Result("TyOff");	return (Result);	}
            public: static std::string const &ManualSend(void){	static std::string Result("TyManSend");	return (Result);	}
            public: static std::string const &AutomaticSend(void){	static std::string Result("TyAutoSend");	return (Result);	}
        }; // class CFTPClientMode
        public: class CFTPClientType
        {
            public: static std::string const &Unknown(void){	static std::string Result("TyUnkn");	return (Result);	}
            public: static std::string const &Unix(void){	static std::string Result("TyUnix");	return (Result);	}
            public: static std::string const &MSDOS(void){	static std::string Result("TyMSDOS");	return (Result);	}
            public: static std::string const &SFTP(void){	static std::string Result("TySFTP");	return (Result);	}
        }; // class CFTPClientType
        public: class CFFTProcessorWindowType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &Blackman(void){	static std::string Result("TyBla");	return (Result);	}
            public: static std::string const &BlackmanNuttal(void){	static std::string Result("TyBlaNut");	return (Result);	}
            public: static std::string const &BlackmanHarris(void){	static std::string Result("TyBlaHar");	return (Result);	}
            public: static std::string const &BartlettHanning(void){	static std::string Result("TyBarHan");	return (Result);	}
            public: static std::string const &ExponentialOrPoisson(void){	static std::string Result("TyExpOrPoi");	return (Result);	}
            public: static std::string const &FlatTop(void){	static std::string Result("TyFlaTop");	return (Result);	}
            public: static std::string const &Gaussian(void){	static std::string Result("TyGau");	return (Result);	}
            public: static std::string const &Hamming(void){	static std::string Result("TyHam");	return (Result);	}
            public: static std::string const &Hanning(void){	static std::string Result("TyHan");	return (Result);	}
            public: static std::string const &Kaiser(void){	static std::string Result("TyKai");	return (Result);	}
            public: static std::string const &Lanczos(void){	static std::string Result("TyLan");	return (Result);	}
            public: static std::string const &Nuttal(void){	static std::string Result("TyNut");	return (Result);	}
            public: static std::string const &PowerOfCosine(void){	static std::string Result("TyPowOfCos");	return (Result);	}
            public: static std::string const &TriangularOrBartlett(void){	static std::string Result("TyTriOrBar");	return (Result);	}
            public: static std::string const &Welch(void){	static std::string Result("TyWel");	return (Result);	}
        }; // class CFFTProcessorWindowType
        public: class CFFTProcessorWindowParameterType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &Tau(void){	static std::string Result("TyTau");	return (Result);	}
            public: static std::string const &Decay(void){	static std::string Result("TyDec");	return (Result);	}
            public: static std::string const &Sigma(void){	static std::string Result("TySig");	return (Result);	}
            public: static std::string const &Alpha(void){	static std::string Result("TyAlp");	return (Result);	}
            public: static std::string const &Beta(void){	static std::string Result("TyBet");	return (Result);	}
            public: static std::string const &Power(void){	static std::string Result("TyPow");	return (Result);	}
        }; // class CFFTProcessorWindowParameterType
        public: class CFFTProcessorSignalCalculationType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &Peak(void){	static std::string Result("TyPea");	return (Result);	}
            public: static std::string const &PeakPeak(void){	static std::string Result("TyPeaPea");	return (Result);	}
        }; // class CFFTProcessorSignalCalculationType
        public: class CFFTProcessorEvaluatorType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &FFTErrorStates(void){	static std::string Result("TyFFTErrSta");	return (Result);	}
            public: static std::string const &Minimum(void){	static std::string Result("TyMin");	return (Result);	}
            public: static std::string const &Maximum(void){	static std::string Result("TyMax");	return (Result);	}
            public: static std::string const &_Value(void){	static std::string Result("TyVal");	return (Result);	}
            public: static std::string const &Integral(void){	static std::string Result("TyInteg");	return (Result);	}
            public: static std::string const &RMS(void){	static std::string Result("TyRMS");	return (Result);	}
            public: static std::string const &SINAD(void){	static std::string Result("TySINAD");	return (Result);	}
            public: static std::string const &ENOB(void){	static std::string Result("TyENOB");	return (Result);	}
            public: static std::string const &SNR(void){	static std::string Result("TySNR");	return (Result);	}
            public: static std::string const &THD(void){	static std::string Result("TyTHD");	return (Result);	}
            public: static std::string const &SFDR(void){	static std::string Result("TySFDR");	return (Result);	}
            public: static std::string const &EVV(void){	static std::string Result("TyEVV");	return (Result);	}
            public: static std::string const &EVD(void){	static std::string Result("TyEVD");	return (Result);	}
            public: static std::string const &TimeDomainBufferLosslessAndOverlappingHealth(void){	static std::string Result("TyTiDoBufLoAndOvHea");	return (Result);	}
        }; // class CFFTProcessorEvaluatorType
        public: class CNTPClientMode
        {
            public: static std::string const &Off(void){	static std::string Result("TyOff");	return (Result);	}
            public: static std::string const &NTP(void){	static std::string Result("TyNTP");	return (Result);	}
            public: static std::string const &SNTP(void){	static std::string Result("TySNTP");	return (Result);	}
        }; // class CNTPClientMode
        public: class CInterfaceDeviceType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &CANNode(void){	static std::string Result("TyCANNo");	return (Result);	}
            public: static std::string const &CANFDNode(void){	static std::string Result("TyCANFDNo");	return (Result);	}
            public: static std::string const &GarminUSBGPSReceiver(void){	static std::string Result("TyGaUSBGPSRecei");	return (Result);	}
            public: static std::string const &IoTPacControlledMQTTClient(void){	static std::string Result("TyIoTPacConMQTTCl");	return (Result);	}
            public: static std::string const &IoTPacControlledWatsonClientDevice(void){	static std::string Result("TyIoTPacConWatClDe");	return (Result);	}
            public: static std::string const &IoTPacControlledWatsonClientApplication(void){	static std::string Result("TyIoTPacConWatClAp");	return (Result);	}
            public: static std::string const &IoTPacControlledThingsboardClient(void){	static std::string Result("TyIoTPacConThiCl");	return (Result);	}
            public: static std::string const &ModbusMaster(void){	static std::string Result("TyMbMa");	return (Result);	}
            public: static std::string const &ModbusSlave(void){	static std::string Result("TyMbSl");	return (Result);	}
            public: static std::string const &ModbusSlaveWordSwapped(void){	static std::string Result("TyMbSlWS");	return (Result);	}
            public: static std::string const &NMEA0183Receiver(void){	static std::string Result("TyNMEA0183Recei");	return (Result);	}
            public: static std::string const &SDI12Master(void){	static std::string Result("TySDI12Ma");	return (Result);	}
        }; // class CInterfaceDeviceType
        public: class CIoTQualityOfService
        {
            public: static std::string const &AtMostOnce(void){	static std::string Result("TyAtMoOn");	return (Result);	}
            public: static std::string const &AtLeastOnce(void){	static std::string Result("TyAtLeOn");	return (Result);	}
            public: static std::string const &ExactlyOnce(void){	static std::string Result("TyExOn");	return (Result);	}
        }; // class CIoTQualityOfService
        public: class CAuthenticationMethod
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &Standard(void){	static std::string Result("TyStd");	return (Result);	}
            public: static std::string const &SSL(void){	static std::string Result("TySSL");	return (Result);	}
            public: static std::string const &TLS(void){	static std::string Result("TyTLS");	return (Result);	}
            public: static std::string const &SSLTLS(void){	static std::string Result("TySSLTLS");	return (Result);	}
            public: static std::string const &StartTLS(void){	static std::string Result("TyStartTLS");	return (Result);	}
        }; // class CAuthenticationMethod
        public: class CActionControlType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &Fast(void){	static std::string Result("TyFa");	return (Result);	}
            public: static std::string const &Cyclic(void){	static std::string Result("TyCyc");	return (Result);	}
            public: static std::string const &OnChange(void){	static std::string Result("TyCha");	return (Result);	}
            public: static std::string const &OnHost(void){	static std::string Result("TyHos");	return (Result);	}
            public: static std::string const &OnVariableCondition(void){	static std::string Result("TyVarCon");	return (Result);	}
        }; // class CActionControlType
        public: class CSignalPartDescriptionType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &High(void){	static std::string Result("TyHi");	return (Result);	}
            public: static std::string const &Low(void){	static std::string Result("TyLo");	return (Result);	}
            public: static std::string const &FallingEdge(void){	static std::string Result("TyFEd");	return (Result);	}
            public: static std::string const &RisingEdge(void){	static std::string Result("TyREd");	return (Result);	}
            public: static std::string const &BothEdges(void){	static std::string Result("TyBEd");	return (Result);	}
        }; // class CSignalPartDescriptionType
        public: class CAverageCalculationType
        {
            public: static std::string const &Standard(void){	static std::string Result("TyStd");	return (Result);	}
            public: static std::string const &Advanced(void){	static std::string Result("TyAdv");	return (Result);	}
        }; // class CAverageCalculationType
        public: class CAverageType_Grp
        {
            public: static std::string const &None(void){	static std::string Result("GrpNo");	return (Result);	}
            public: static std::string const &ArithmeticMean(void){	static std::string Result("GrpArMe");	return (Result);	}
            public: static std::string const &Bandpass(void){	static std::string Result("GrpBp");	return (Result);	}
            public: static std::string const &BandpassAndArithmeticMean(void){	static std::string Result("GrpBpArMe");	return (Result);	}
            public: static std::string const &BandpassAndSliding(void){	static std::string Result("GrpBpSl");	return (Result);	}
            public: static std::string const &Bandstop(void){	static std::string Result("GrpBs");	return (Result);	}
            public: static std::string const &BandstopAndArithmeticMean(void){	static std::string Result("GrpBsArMe");	return (Result);	}
            public: static std::string const &BandstopAndSliding(void){	static std::string Result("GrpBsSl");	return (Result);	}
            public: static std::string const &Highpass(void){	static std::string Result("GrpHp");	return (Result);	}
            public: static std::string const &HighpassAndArithmeticMean(void){	static std::string Result("GrpHpArMe");	return (Result);	}
            public: static std::string const &HighpassAndSliding(void){	static std::string Result("GrpHpSl");	return (Result);	}
            public: static std::string const &Jitter(void){	static std::string Result("GrpJi");	return (Result);	}
            public: static std::string const &Lowpass(void){	static std::string Result("GrpLp");	return (Result);	}
            public: static std::string const &LowpassAndArithmeticMean(void){	static std::string Result("GrpLpArMe");	return (Result);	}
            public: static std::string const &LowpassAndSliding(void){	static std::string Result("GrpLpSl");	return (Result);	}
            public: static std::string const &RMS(void){	static std::string Result("GrpRMS");	return (Result);	}
            public: static std::string const &Rank(void){	static std::string Result("GrpRa");	return (Result);	}
            public: static std::string const &RankAndJitter(void){	static std::string Result("GrpRaJi");	return (Result);	}
            public: static std::string const &Sliding(void){	static std::string Result("GrpSl");	return (Result);	}
        }; // class CAverageType_Grp
        public: class CAverageType_Pa0
        {
            public: static std::string const &None(void){	static std::string Result("Pa0No");	return (Result);	}
            public: static std::string const &AlgorithmBessel(void){	static std::string Result("Pa0AlBess");	return (Result);	}
            public: static std::string const &AlgorithmButterworth(void){	static std::string Result("Pa0AlButt");	return (Result);	}
            public: static std::string const &AlgorithmChebyshev(void){	static std::string Result("Pa0AlCheb");	return (Result);	}
        }; // class CAverageType_Pa0
        public: class CAverageType_Pa1
        {
            public: static std::string const &None(void){	static std::string Result("Pa1No");	return (Result);	}
            public: static std::string const &Order1(void){	static std::string Result("Pa1Or1");	return (Result);	}
            public: static std::string const &Order2(void){	static std::string Result("Pa1Or2");	return (Result);	}
            public: static std::string const &Order3(void){	static std::string Result("Pa1Or3");	return (Result);	}
            public: static std::string const &Order4(void){	static std::string Result("Pa1Or4");	return (Result);	}
            public: static std::string const &Order5(void){	static std::string Result("Pa1Or5");	return (Result);	}
            public: static std::string const &Order6(void){	static std::string Result("Pa1Or6");	return (Result);	}
            public: static std::string const &Order7(void){	static std::string Result("Pa1Or7");	return (Result);	}
            public: static std::string const &Order8(void){	static std::string Result("Pa1Or8");	return (Result);	}
            public: static std::string const &Order9(void){	static std::string Result("Pa1Or9");	return (Result);	}
            public: static std::string const &Order10(void){	static std::string Result("Pa1Or10");	return (Result);	}
            public: static std::string const &Order11(void){	static std::string Result("Pa1Or11");	return (Result);	}
            public: static std::string const &Order12(void){	static std::string Result("Pa1Or12");	return (Result);	}
            public: static std::string const &Order13(void){	static std::string Result("Pa1Or13");	return (Result);	}
            public: static std::string const &Order14(void){	static std::string Result("Pa1Or14");	return (Result);	}
            public: static std::string const &Order15(void){	static std::string Result("Pa1Or15");	return (Result);	}
            public: static std::string const &Order16(void){	static std::string Result("Pa1Or16");	return (Result);	}
        }; // class CAverageType_Pa1
        public: class CAverageTypeCombiner
        {
            public: static std::string Build(
                    const std::string &Grp,
                    const std::string &Pa0,
                    const std::string &Pa1
                    )
            {
                return (
                        Grp + "/" +
                        Pa0 + "/" +
                        Pa1
                        );
            }
        }; // class CAverageTypeCombiner
        public: class CAnalogInputType_Grp
        {
            public: static std::string const &None(void){	static std::string Result("GrpNo");	return (Result);	}
            public: static std::string const &Bridge(void){	static std::string Result("GrpBr");	return (Result);	}
            public: static std::string const &Charge(void){	static std::string Result("GrpCh");	return (Result);	}
            public: static std::string const &Current(void){	static std::string Result("GrpCu");	return (Result);	}
            public: static std::string const &Potentiometric(void){	static std::string Result("GrpPo");	return (Result);	}
            public: static std::string const &Resistance(void){	static std::string Result("GrpRe");	return (Result);	}
            public: static std::string const &Thermocouple(void){	static std::string Result("GrpTC");	return (Result);	}
            public: static std::string const &Voltage(void){	static std::string Result("GrpVo");	return (Result);	}
            public: static std::string const &OpticalInterface(void){	static std::string Result("GrpOpIf");	return (Result);	}
        }; // class CAnalogInputType_Grp
        public: class CAnalogInputType_Pa0
        {
            public: static std::string const &None(void){	static std::string Result("Pa0No");	return (Result);	}
            public: static std::string const &_2Wire(void){	static std::string Result("Pa02Wi");	return (Result);	}
            public: static std::string const &_3Wire(void){	static std::string Result("Pa03Wi");	return (Result);	}
            public: static std::string const &_4Wire(void){	static std::string Result("Pa04Wi");	return (Result);	}
            public: static std::string const &CompensatedExternal(void){	static std::string Result("Pa0CoExt");	return (Result);	}
            public: static std::string const &CompensatedInternal(void){	static std::string Result("Pa0CoInt");	return (Result);	}
            public: static std::string const &Differential(void){	static std::string Result("Pa0Diff");	return (Result);	}
            public: static std::string const &IEPE(void){	static std::string Result("Pa0IEPE");	return (Result);	}
            public: static std::string const &InductiveFull4Wire(void){	static std::string Result("Pa0IndFu4Wi");	return (Result);	}
            public: static std::string const &InductiveFull6Wire(void){	static std::string Result("Pa0IndFu6Wi");	return (Result);	}
            public: static std::string const &InductiveHalf3Wire(void){	static std::string Result("Pa0IndHa3Wi");	return (Result);	}
            public: static std::string const &InductiveHalf5Wire(void){	static std::string Result("Pa0IndHa5Wi");	return (Result);	}
            public: static std::string const &LVDT4Wire(void){	static std::string Result("Pa0LV4Wi");	return (Result);	}
            public: static std::string const &LVDT6Wire(void){	static std::string Result("Pa0LV6Wi");	return (Result);	}
            public: static std::string const &ResistiveFull4Wire(void){	static std::string Result("Pa0Fu4Wi");	return (Result);	}
            public: static std::string const &ResistiveFull6Wire(void){	static std::string Result("Pa0Fu6Wi");	return (Result);	}
            public: static std::string const &ResistiveHalf3Wire(void){	static std::string Result("Pa0Ha3Wi");	return (Result);	}
            public: static std::string const &ResistiveHalf5Wire(void){	static std::string Result("Pa0Ha5Wi");	return (Result);	}
            public: static std::string const &ResistiveQuarter3Wire120Ohm(void){	static std::string Result("Pa0Qu3Wi120R");	return (Result);	}
            public: static std::string const &ResistiveQuarter3Wire200Ohm(void){	static std::string Result("Pa0Qu3Wi200R");	return (Result);	}
            public: static std::string const &ResistiveQuarter3Wire350Ohm(void){	static std::string Result("Pa0Qu3Wi350R");	return (Result);	}
            public: static std::string const &SingleEnded(void){	static std::string Result("Pa0SiEn");	return (Result);	}
            public: static std::string const &TimeConstant(void){	static std::string Result("Pa0TiCo");	return (Result);	}
            public: static std::string const &StandardValue(void){	static std::string Result("Pa0StVa");	return (Result);	}
        }; // class CAnalogInputType_Pa0
        public: class CAnalogInputType_Pa1
        {
            public: static std::string const &None(void){	static std::string Result("Pa1No");	return (Result);	}
            public: static std::string const &SensorSupplyAlwaysOFF(void){	static std::string Result("Pa1UExOff");	return (Result);	}
            public: static std::string const &SensorSupplyAlwaysON(void){	static std::string Result("Pa1UExOn");	return (Result);	}
            public: static std::string const &SensorSupplyTimed(void){	static std::string Result("Pa1UExTim");	return (Result);	}
            public: static std::string const &Supply1V(void){	static std::string Result("Pa1Su1V");	return (Result);	}
            public: static std::string const &Supply2V(void){	static std::string Result("Pa1Su2V");	return (Result);	}
            public: static std::string const &Supply2V5(void){	static std::string Result("Pa1Su2V5");	return (Result);	}
            public: static std::string const &Supply4V(void){	static std::string Result("Pa1Su4V");	return (Result);	}
            public: static std::string const &Supply5V(void){	static std::string Result("Pa1Su5V");	return (Result);	}
            public: static std::string const &Supply10V(void){	static std::string Result("Pa1Su10V");	return (Result);	}
            public: static std::string const &SupplyWithParameter(void){	static std::string Result("Pa1SuWiPar");	return (Result);	}
            public: static std::string const &SyncMaster(void){	static std::string Result("Pa1SyMa");	return (Result);	}
            public: static std::string const &SyncSlave(void){	static std::string Result("Pa1SySl");	return (Result);	}
        }; // class CAnalogInputType_Pa1
        public: class CAnalogInputType_Pa2
        {
            public: static std::string const &None(void){	static std::string Result("Pa2No");	return (Result);	}
            public: static std::string const &Frequency0Hz(void){	static std::string Result("Pa2Fr0Hz");	return (Result);	}
            public: static std::string const &Frequency4800Hz(void){	static std::string Result("Pa2Fr4800Hz");	return (Result);	}
            public: static std::string const &Frequency600Hz(void){	static std::string Result("Pa2Fr600Hz");	return (Result);	}
        }; // class CAnalogInputType_Pa2
        public: class CAnalogInputType_Pa3
        {
            public: static std::string const &None(void){	static std::string Result("Pa3No");	return (Result);	}
            public: static std::string const &SyncMaster(void){	static std::string Result("Pa3SyMa");	return (Result);	}
            public: static std::string const &SyncNone(void){	static std::string Result("Pa3SyNo");	return (Result);	}
            public: static std::string const &SyncSlave(void){	static std::string Result("Pa3SySl");	return (Result);	}
        }; // class CAnalogInputType_Pa3
        public: class CAnalogInputTypeCombiner
        {
            public: static std::string Build(
                    const std::string &Grp,
                    const std::string &Pa0,
                    const std::string &Pa1,
                    const std::string &Pa2,
                    const std::string &Pa3
                    )
            {
                return (
                        Grp + "/" +
                        Pa0 + "/" +
                        Pa1 + "/" +
                        Pa2 + "/" +
                        Pa3
                        );
            }
        }; // class CAnalogInputTypeCombiner
        public: class CAnalogOutputType_Grp
        {
            public: static std::string const &None(void){	static std::string Result("GrpNo");	return (Result);	}
            public: static std::string const &Current(void){	static std::string Result("GrpCu");	return (Result);	}
            public: static std::string const &Voltage(void){	static std::string Result("GrpVo");	return (Result);	}
            public: static std::string const &Supply(void){	static std::string Result("GrpSu");	return (Result);	}
            public: static std::string const &Potentiometric(void){	static std::string Result("GrpPo");	return (Result);	}
            public: static std::string const &Resistance(void){	static std::string Result("GrpRe");	return (Result);	}
        }; // class CAnalogOutputType_Grp
        public: class CAnalogOutputType_Pa0
        {
            public: static std::string const &None(void){	static std::string Result("Pa0No");	return (Result);	}
            public: static std::string const &Bridge(void){	static std::string Result("Pa0Br");	return (Result);	}
            public: static std::string const &IEPE(void){	static std::string Result("Pa0IEPE");	return (Result);	}
            public: static std::string const &Resistance(void){	static std::string Result("Pa0Re");	return (Result);	}
            public: static std::string const &Selector(void){	static std::string Result("Pa0Sel");	return (Result);	}
        }; // class CAnalogOutputType_Pa0
        public: class CAnalogOutputType_Pa1
        {
            public: static std::string const &None(void){	static std::string Result("Pa1No");	return (Result);	}
        }; // class CAnalogOutputType_Pa1
        public: class CAnalogOutputTypeCombiner
        {
            public: static std::string Build(
                    const std::string &Grp,
                    const std::string &Pa0,
                    const std::string &Pa1
                    )
            {
                return (
                        Grp + "/" +
                        Pa0 + "/" +
                        Pa1
                        );
            }
        }; // class CAnalogOutputTypeCombiner
        public: class CDigitalInputType_Grp
        {
            public: static std::string const &None(void){	static std::string Result("GrpNo");	return (Result);	}
            public: static std::string const &Counter(void){	static std::string Result("GrpCo");	return (Result);	}
            public: static std::string const &Frequency(void){	static std::string Result("GrpFr");	return (Result);	}
            public: static std::string const &_Set(void){	static std::string Result("GrpSet");	return (Result);	}
            public: static std::string const &State(void){	static std::string Result("GrpSta");	return (Result);	}
            public: static std::string const &Time(void){	static std::string Result("GrpTi");	return (Result);	}
        }; // class CDigitalInputType_Grp
        public: class CDigitalInputType_Pa0
        {
            public: static std::string const &None(void){	static std::string Result("Pa0No");	return (Result);	}
            public: static std::string const &Dutycycle(void){	static std::string Result("Pa0DuCy");	return (Result);	}
            public: static std::string const &Full(void){	static std::string Result("Pa0Fu");	return (Result);	}
            public: static std::string const &Higher(void){	static std::string Result("Pa0Hi");	return (Result);	}
            public: static std::string const &Interval(void){	static std::string Result("Pa0Intv");	return (Result);	}
            public: static std::string const &Lower(void){	static std::string Result("Pa0Lo");	return (Result);	}
            public: static std::string const &Quadrature(void){	static std::string Result("Pa0Qu");	return (Result);	}
            public: static std::string const &UpDown(void){	static std::string Result("Pa0UpDo");	return (Result);	}
        }; // class CDigitalInputType_Pa0
        public: class CDigitalInputType_Pa1
        {
            public: static std::string const &None(void){	static std::string Result("Pa1No");	return (Result);	}
            public: static std::string const &_2Wire(void){	static std::string Result("Pa12Wi");	return (Result);	}
            public: static std::string const &_3Wire(void){	static std::string Result("Pa13Wi");	return (Result);	}
            public: static std::string const &_4Wire(void){	static std::string Result("Pa14Wi");	return (Result);	}
            public: static std::string const &_Event(void){	static std::string Result("Pa1Evt");	return (Result);	}
        }; // class CDigitalInputType_Pa1
        public: class CDigitalInputType_Pa2
        {
            public: static std::string const &None(void){	static std::string Result("Pa2No");	return (Result);	}
            public: static std::string const &BothEdges(void){	static std::string Result("Pa2BEd");	return (Result);	}
            public: static std::string const &FallingEdge(void){	static std::string Result("Pa2FEd");	return (Result);	}
            public: static std::string const &RisingEdge(void){	static std::string Result("Pa2REd");	return (Result);	}
        }; // class CDigitalInputType_Pa2
        public: class CDigitalInputType_Pa3
        {
            public: static std::string const &None(void){	static std::string Result("Pa3No");	return (Result);	}
            public: static std::string const &Differential(void){	static std::string Result("Pa3Diff");	return (Result);	}
            public: static std::string const &SingleEnded(void){	static std::string Result("Pa3SiEn");	return (Result);	}
        }; // class CDigitalInputType_Pa3
        public: class CDigitalInputTypeCombiner
        {
            public: static std::string Build(
                    const std::string &Grp,
                    const std::string &Pa0,
                    const std::string &Pa1,
                    const std::string &Pa2,
                    const std::string &Pa3
                    )
            {
                return (
                        Grp + "/" +
                        Pa0 + "/" +
                        Pa1 + "/" +
                        Pa2 + "/" +
                        Pa3
                        );
            }
        }; // class CDigitalInputTypeCombiner
        public: class CDigitalOutputType_Grp
        {
            public: static std::string const &None(void){	static std::string Result("GrpNo");	return (Result);	}
            public: static std::string const &Frequency(void){	static std::string Result("GrpFr");	return (Result);	}
            public: static std::string const &Logic(void){	static std::string Result("GrpLo");	return (Result);	}
            public: static std::string const &PWM(void){	static std::string Result("GrpPw");	return (Result);	}
            public: static std::string const &PWMFrequency(void){	static std::string Result("GrpPwFr");	return (Result);	}
            public: static std::string const &ProcessSet(void){	static std::string Result("GrpPrSet");	return (Result);	}
            public: static std::string const &ProcessState(void){	static std::string Result("GrpPrSta");	return (Result);	}
            public: static std::string const &_Set(void){	static std::string Result("GrpSet");	return (Result);	}
            public: static std::string const &State(void){	static std::string Result("GrpSta");	return (Result);	}
        }; // class CDigitalOutputType_Grp
        public: class CDigitalOutputType_Pa0
        {
            public: static std::string const &None(void){	static std::string Result("Pa0No");	return (Result);	}
            public: static std::string const &FrequencyBack(void){	static std::string Result("Pa0FrBa");	return (Result);	}
            public: static std::string const &Full(void){	static std::string Result("Pa0Fu");	return (Result);	}
            public: static std::string const &Higher(void){	static std::string Result("Pa0Hi");	return (Result);	}
            public: static std::string const &Lower(void){	static std::string Result("Pa0Lo");	return (Result);	}
            public: static std::string const &PWMBack(void){	static std::string Result("Pa0PwBa");	return (Result);	}
        }; // class CDigitalOutputType_Pa0
        public: class CDigitalOutputType_Pa1
        {
            public: static std::string const &None(void){	static std::string Result("Pa1No");	return (Result);	}
            public: static std::string const &PNP(void){	static std::string Result("Pa1Pnp");	return (Result);	}
            public: static std::string const &NPN(void){	static std::string Result("Pa1Npn");	return (Result);	}
            public: static std::string const &TTL(void){	static std::string Result("Pa1Ttl");	return (Result);	}
            public: static std::string const &PushPull(void){	static std::string Result("Pa1PuPu");	return (Result);	}
        }; // class CDigitalOutputType_Pa1
        public: class CDigitalOutputTypeCombiner
        {
            public: static std::string Build(
                    const std::string &Grp,
                    const std::string &Pa0,
                    const std::string &Pa1
                    )
            {
                return (
                        Grp + "/" +
                        Pa0 + "/" +
                        Pa1
                        );
            }
        }; // class CDigitalOutputTypeCombiner
        public: class CRemoteType_Grp
        {
            public: static std::string const &None(void){	static std::string Result("GrpNo");	return (Result);	}
            public: static std::string const &SSI(void){	static std::string Result("GrpSsi");	return (Result);	}
            public: static std::string const &Modbus(void){	static std::string Result("GrpMb");	return (Result);	}
            public: static std::string const &CAN(void){	static std::string Result("GrpCan");	return (Result);	}
            public: static std::string const &SDI12(void){	static std::string Result("GrpSDI12");	return (Result);	}
            public: static std::string const &StreamProcessor(void){	static std::string Result("GrpStPr");	return (Result);	}
        }; // class CRemoteType_Grp
        public: class CRemoteType_Pa0
        {
            public: static std::string const &None(void){	static std::string Result("Pa0No");	return (Result);	}
            public: static std::string const &_Base(void){	static std::string Result("Pa0Ba");	return (Result);	}
            public: static std::string const &Extended(void){	static std::string Result("Pa0Ex");	return (Result);	}
        }; // class CRemoteType_Pa0
        public: class CRemoteTypeCombiner
        {
            public: static std::string Build(
                    const std::string &Grp,
                    const std::string &Pa0
                    )
            {
                return (
                        Grp + "/" +
                        Pa0
                        );
            }
        }; // class CRemoteTypeCombiner
        public: class CSetPointType_Grp
        {
            public: static std::string const &None(void){	static std::string Result("GrpNo");	return (Result);	}
        }; // class CSetPointType_Grp
        public: class CSetPointType_Pa0
        {
            public: static std::string const &None(void){	static std::string Result("Pa0No");	return (Result);	}
        }; // class CSetPointType_Pa0
        public: class CSetPointTypeCombiner
        {
            public: static std::string Build(
                    const std::string &Grp,
                    const std::string &Pa0
                    )
            {
                return (
                        Grp + "/" +
                        Pa0
                        );
            }
        }; // class CSetPointTypeCombiner
        public: class CAlarmType_Grp
        {
            public: static std::string const &None(void){	static std::string Result("GrpNo");	return (Result);	}
        }; // class CAlarmType_Grp
        public: class CAlarmType_Pa0
        {
            public: static std::string const &None(void){	static std::string Result("Pa0No");	return (Result);	}
        }; // class CAlarmType_Pa0
        public: class CAlarmTypeCombiner
        {
            public: static std::string Build(
                    const std::string &Grp,
                    const std::string &Pa0
                    )
            {
                return (
                        Grp + "/" +
                        Pa0
                        );
            }
        }; // class CAlarmTypeCombiner
        public: class CArithmeticType_Grp
        {
            public: static std::string const &None(void){	static std::string Result("GrpNo");	return (Result);	}
            public: static std::string const &SignalConditioning(void){	static std::string Result("GrpSiCo");	return (Result);	}
            public: static std::string const &Selector(void){	static std::string Result("GrpSe");	return (Result);	}
        }; // class CArithmeticType_Grp
        public: class CArithmeticType_Pa0
        {
            public: static std::string const &None(void){	static std::string Result("Pa0No");	return (Result);	}
        }; // class CArithmeticType_Pa0
        public: class CArithmeticTypeCombiner
        {
            public: static std::string Build(
                    const std::string &Grp,
                    const std::string &Pa0
                    )
            {
                return (
                        Grp + "/" +
                        Pa0
                        );
            }
        }; // class CArithmeticTypeCombiner
        public: class CReferenceType_Grp
        {
            public: static std::string const &None(void){	static std::string Result("GrpNo");	return (Result);	}
        }; // class CReferenceType_Grp
        public: class CReferenceType_Pa0
        {
            public: static std::string const &None(void){	static std::string Result("Pa0No");	return (Result);	}
        }; // class CReferenceType_Pa0
        public: class CReferenceTypeCombiner
        {
            public: static std::string Build(
                    const std::string &Grp,
                    const std::string &Pa0
                    )
            {
                return (
                        Grp + "/" +
                        Pa0
                        );
            }
        }; // class CReferenceTypeCombiner
        public: class CAdapterType_Grp
        {
            public: static std::string const &None(void){	static std::string Result("GrpNo");	return (Result);	}
            public: static std::string const &Slave(void){	static std::string Result("GrpSla");	return (Result);	}
        }; // class CAdapterType_Grp
        public: class CAdapterType_Pa0
        {
            public: static std::string const &None(void){	static std::string Result("Pa0No");	return (Result);	}
            public: static std::string const &Realtime(void){	static std::string Result("Pa0Rt");	return (Result);	}
            public: static std::string const &_File(void){	static std::string Result("Pa0Fi");	return (Result);	}
        }; // class CAdapterType_Pa0
        public: class CAdapterType_Pa1
        {
            public: static std::string const &None(void){	static std::string Result("Pa1No");	return (Result);	}
            public: static std::string const &RS485(void){	static std::string Result("Pa1Rs485");	return (Result);	}
            public: static std::string const &CAN(void){	static std::string Result("Pa1Can");	return (Result);	}
        }; // class CAdapterType_Pa1
        public: class CAdapterTypeCombiner
        {
            public: static std::string Build(
                    const std::string &Grp,
                    const std::string &Pa0,
                    const std::string &Pa1
                    )
            {
                return (
                        Grp + "/" +
                        Pa0 + "/" +
                        Pa1
                        );
            }
        }; // class CAdapterTypeCombiner
        public: class CFeatureType_Grp
        {
            public: static std::string const &None(void){	static std::string Result("GrpNo");	return (Result);	}
            public: static std::string const &StreamProcessor(void){	static std::string Result("GrpStPr");	return (Result);	}
        }; // class CFeatureType_Grp
        public: class CFeatureType_Pa0
        {
            public: static std::string const &None(void){	static std::string Result("Pa0No");	return (Result);	}
            public: static std::string const &DataBuffer(void){	static std::string Result("Pa0DaBuf");	return (Result);	}
            public: static std::string const &DataLogger(void){	static std::string Result("Pa0DaLog");	return (Result);	}
        }; // class CFeatureType_Pa0
        public: class CFeatureType_Pa1
        {
            public: static std::string const &None(void){	static std::string Result("Pa1No");	return (Result);	}
            public: static std::string const &Process(void){	static std::string Result("Pa1Pr");	return (Result);	}
            public: static std::string const &System(void){	static std::string Result("Pa1Sys");	return (Result);	}
            public: static std::string const &Miscellaneous(void){	static std::string Result("Pa1Misc");	return (Result);	}
            public: static std::string const &Merger(void){	static std::string Result("Pa1Mer");	return (Result);	}
            public: static std::string const &PostProcess(void){	static std::string Result("Pa1PoPr");	return (Result);	}
            public: static std::string const &Values(void){	static std::string Result("Pa1Va");	return (Result);	}
        }; // class CFeatureType_Pa1
        public: class CFeatureTypeCombiner
        {
            public: static std::string Build(
                    const std::string &Grp,
                    const std::string &Pa0,
                    const std::string &Pa1
                    )
            {
                return (
                        Grp + "/" +
                        Pa0 + "/" +
                        Pa1
                        );
            }
        }; // class CFeatureTypeCombiner
        public: class CInternalModuleType
        {
            public: static std::string const &Physical(void){	static std::string Result("TyPhy");	return (Result);	}
            public: static std::string const &System(void){	static std::string Result("TySys");	return (Result);	}
            public: static std::string const &_Virtual(void){	static std::string Result("TyVir");	return (Result);	}
        }; // class CInternalModuleType
        public: class CVariableType
        {
            public: static std::string const &None(void){	static std::string Result("TyNO");	return (Result);	}
            public: static std::string const &Alarm(void){	static std::string Result("TyAL");	return (Result);	}
            public: static std::string const &AnalogInput(void){	static std::string Result("TyAI");	return (Result);	}
            public: static std::string const &AnalogOutput(void){	static std::string Result("TyAO");	return (Result);	}
            public: static std::string const &Arithmetic(void){	static std::string Result("TyAR");	return (Result);	}
            public: static std::string const &DigitalInput(void){	static std::string Result("TyDI");	return (Result);	}
            public: static std::string const &DigitalOutput(void){	static std::string Result("TyDO");	return (Result);	}
            public: static std::string const &PIDController(void){	static std::string Result("TyPIDC");	return (Result);	}
            public: static std::string const &Reference(void){	static std::string Result("TyREF");	return (Result);	}
            public: static std::string const &Remote(void){	static std::string Result("TyREM");	return (Result);	}
            public: static std::string const &Setpoint(void){	static std::string Result("TySP");	return (Result);	}
        }; // class CVariableType
        public: class CSynchronizationType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &AFNOR_NFS87500_OverRS485_StandardTiming(void){	static std::string Result("TyAFNORNFS87500RS485Std");	return (Result);	}
            public: static std::string const &AFNOR_NFS87500_OverIOs_StandardTiming(void){	static std::string Result("TyAFNORNFS87500IOStd");	return (Result);	}
            public: static std::string const &AFNOR_NFS87500_OverRS485_FastTiming(void){	static std::string Result("TyAFNORNFS87500RS485Fa");	return (Result);	}
            public: static std::string const &AFNOR_NFS87500_OverIOs_FastTiming(void){	static std::string Result("TyAFNORNFS87500IOFa");	return (Result);	}
            public: static std::string const &IRIG_B005_OverRS485_StandardTiming(void){	static std::string Result("TyIRIGB005RS485Std");	return (Result);	}
            public: static std::string const &IRIG_B005_OverIOs_StandardTiming(void){	static std::string Result("TyIRIGB005IOStd");	return (Result);	}
            public: static std::string const &IRIG_B005_OverRS485_FastTiming(void){	static std::string Result("TyIRIGB005RS485Fa");	return (Result);	}
            public: static std::string const &IRIG_B005_OverIOs_FastTiming(void){	static std::string Result("TyIRIGB005IOFa");	return (Result);	}
            public: static std::string const &IRIG_B003_OverRS485_StandardTiming(void){	static std::string Result("TyIRIGB003RS485Std");	return (Result);	}
            public: static std::string const &IRIG_B003_OverIOs_StandardTiming(void){	static std::string Result("TyIRIGB003IOStd");	return (Result);	}
            public: static std::string const &IRIG_B003_OverRS485_FastTiming(void){	static std::string Result("TyIRIGB003RS485Fa");	return (Result);	}
            public: static std::string const &IRIG_B003_OverIOs_FastTiming(void){	static std::string Result("TyIRIGB003IOFa");	return (Result);	}
            public: static std::string const &EtherCAT_DCTime(void){	static std::string Result("TyECATDC");	return (Result);	}
            public: static std::string const &FreeRunning(void){	static std::string Result("TyFrRu");	return (Result);	}
            public: static std::string const &TrimFrequencyOverIOs(void){	static std::string Result("TyTrFrIO");	return (Result);	}
            public: static std::string const &SyncPulseOverIOs(void){	static std::string Result("TySyPuIO");	return (Result);	}
            public: static std::string const &TrimFrequencyOverPTP(void){	static std::string Result("TyTrFrPTP");	return (Result);	}
        }; // class CSynchronizationType
        public: class CPTPDelayMechanismType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &_Auto(void){	static std::string Result("TyAuto");	return (Result);	}
            public: static std::string const &EndToEnd(void){	static std::string Result("TyE2E");	return (Result);	}
            public: static std::string const &PeerToPeer(void){	static std::string Result("TyP2P");	return (Result);	}
        }; // class CPTPDelayMechanismType
        public: class CPTPTransportType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &Ethernet(void){	static std::string Result("TyEth");	return (Result);	}
            public: static std::string const &UDPv4(void){	static std::string Result("TyUDPv4");	return (Result);	}
            public: static std::string const &UDPv6(void){	static std::string Result("TyUDPv6");	return (Result);	}
        }; // class CPTPTransportType
        public: class CStorageMode
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &Legacy(void){	static std::string Result("TyLeg");	return (Result);	}
            public: static std::string const &ProtectedMove(void){	static std::string Result("TyProtMov");	return (Result);	}
            public: static std::string const &UnProtectedMove(void){	static std::string Result("TyUnProtMov");	return (Result);	}
            public: static std::string const &ProtectedCopy(void){	static std::string Result("TyProtCop");	return (Result);	}
            public: static std::string const &UnProtectedCopy(void){	static std::string Result("TyUnProtCop");	return (Result);	}
            public: static std::string const &ProtectedCopyOnlyNewData(void){	static std::string Result("TyProtCopOnlNewDat");	return (Result);	}
            public: static std::string const &UnProtectedCopyOnlyNewData(void){	static std::string Result("TyUnProtCopOnlNewDat");	return (Result);	}
            public: static std::string const &StoreToNewConnectedDrive(void){	static std::string Result("TyStoToNewConDri");	return (Result);	}
            public: static std::string const &AutoDriveSelection(void){	static std::string Result("TyAutDriSel");	return (Result);	}
        }; // class CStorageMode
        public: class CStorageFileFormat
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &UDBF(void){	static std::string Result("TyUDBF");	return (Result);	}
            public: static std::string const &CSV(void){	static std::string Result("TyCSV");	return (Result);	}
            public: static std::string const &MDF(void){	static std::string Result("TyMDF");	return (Result);	}
            public: static std::string const &FAMOS(void){	static std::string Result("TyFAMOS");	return (Result);	}
            public: static std::string const &MATLAB(void){	static std::string Result("TyMATLAB");	return (Result);	}
        }; // class CStorageFileFormat
        public: class CStorageFileSaveMode
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &Buffered(void){	static std::string Result("TyBuf");	return (Result);	}
            public: static std::string const &OSyncFSync(void){	static std::string Result("TyOSynFSyn");	return (Result);	}
            public: static std::string const &ODirectOSyncFSync(void){	static std::string Result("TyODirOSynFSyn");	return (Result);	}
            public: static std::string const &Sync(void){	static std::string Result("TySyn");	return (Result);	}
            public: static std::string const &FSync(void){	static std::string Result("TyFSyn");	return (Result);	}
            public: static std::string const &OSync(void){	static std::string Result("TyOSyn");	return (Result);	}
            public: static std::string const &ODirect(void){	static std::string Result("TyODir");	return (Result);	}
            public: static std::string const &ODirectFSync(void){	static std::string Result("TyODirFSyn");	return (Result);	}
            public: static std::string const &ODirectOSync(void){	static std::string Result("TyODirOSyn");	return (Result);	}
        }; // class CStorageFileSaveMode
        public: class CTriggerConditionType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &LowerThan(void){	static std::string Result("TyLowTha");	return (Result);	}
            public: static std::string const &GreaterThan(void){	static std::string Result("TyGreTha");	return (Result);	}
            public: static std::string const &LowerOrEqualThan(void){	static std::string Result("TyLowOrEquTha");	return (Result);	}
            public: static std::string const &GreaterOrEqualThan(void){	static std::string Result("TyGreOrEquTha");	return (Result);	}
            public: static std::string const &EqualTo(void){	static std::string Result("TyEquTo");	return (Result);	}
            public: static std::string const &NotEqualTo(void){	static std::string Result("TyNotEquTo");	return (Result);	}
        }; // class CTriggerConditionType
        public: class CSampleRateMode
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &Single(void){	static std::string Result("TySi");	return (Result);	}
            public: static std::string const &MultiNarrow(void){	static std::string Result("TyMuNa");	return (Result);	}
            public: static std::string const &MultiWide(void){	static std::string Result("TyMuWi");	return (Result);	}
        }; // class CSampleRateMode
        public: class CSampleRate
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &Time3600s(void){	static std::string Result("TyTi3600s");	return (Result);	}
            public: static std::string const &Time1800s(void){	static std::string Result("TyTi1800s");	return (Result);	}
            public: static std::string const &Time600s(void){	static std::string Result("TyTi600s");	return (Result);	}
            public: static std::string const &Time120s(void){	static std::string Result("TyTi120s");	return (Result);	}
            public: static std::string const &Time90s(void){	static std::string Result("TyTi90s");	return (Result);	}
            public: static std::string const &Time60s(void){	static std::string Result("TyTi60s");	return (Result);	}
            public: static std::string const &Time40s(void){	static std::string Result("TyTi40s");	return (Result);	}
            public: static std::string const &Time10s(void){	static std::string Result("TyTi10s");	return (Result);	}
            public: static std::string const &Frequency1Hz(void){	static std::string Result("TyFr1Hz");	return (Result);	}
            public: static std::string const &Frequency8Hz(void){	static std::string Result("TyFr8Hz");	return (Result);	}
            public: static std::string const &Frequency50Hz(void){	static std::string Result("TyFr50Hz");	return (Result);	}
            public: static std::string const &Frequency60Hz(void){	static std::string Result("TyFr60Hz");	return (Result);	}
            public: static std::string const &Frequency1kHz(void){	static std::string Result("TyFr1kHz");	return (Result);	}
            public: static std::string const &Frequency5kHz(void){	static std::string Result("TyFr5kHz");	return (Result);	}
            public: static std::string const &Frequency10kHz(void){	static std::string Result("TyFr10kHz");	return (Result);	}
            public: static std::string const &Frequency20kHz(void){	static std::string Result("TyFr20kHz");	return (Result);	}
        }; // class CSampleRate
        public: class CSampleRateTimestampType
        {
            public: static std::string const &None(void){	static std::string Result("TyNo");	return (Result);	}
            public: static std::string const &SystemVariableDefined(void){	static std::string Result("TySyVaDe");	return (Result);	}
            public: static std::string const &ActualSampleSpeedDomainSyncCounter(void){	static std::string Result("TyAcSSDSyCn");	return (Result);	}
            public: static std::string const &SystemTimeDC(void){	static std::string Result("TySyTiDC");	return (Result);	}
        }; // class CSampleRateTimestampType
        public: class CValueHandlingType_Grp
        {
            public: static std::string const &None(void){	static std::string Result("GrpNo");	return (Result);	}
            public: static std::string const &Sensor(void){	static std::string Result("GrpSen");	return (Result);	}
            public: static std::string const &Actor(void){	static std::string Result("GrpAct");	return (Result);	}
        }; // class CValueHandlingType_Grp
        public: class CValueHandlingType_Pa0
        {
            public: static std::string const &None(void){	static std::string Result("Pa0No");	return (Result);	}
            public: static std::string const &Frequency(void){	static std::string Result("Pa0Fr");	return (Result);	}
            public: static std::string const &PWM(void){	static std::string Result("Pa0Pw");	return (Result);	}
        }; // class CValueHandlingType_Pa0
        public: class CValueHandlingTypeCombiner
        {
            public: static std::string Build(
                    const std::string &Grp,
                    const std::string &Pa0
                    )
            {
                return (
                        Grp + "/" +
                        Pa0
                        );
            }
        }; // class CValueHandlingTypeCombiner
    }; // class CCommon
}; // class COptions
//================================================================================================================================================
} // namespace giconfig_ConfigAPI
//================================================================================================================================================
