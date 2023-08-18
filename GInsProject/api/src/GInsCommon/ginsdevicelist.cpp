#include "ginsdevicelist.h"

namespace GIns {

//******************************************************************************************************
CDeviceList::CDeviceList(const std::string& XmlFileName)
: m_IsXmlDoc(),
  m_ActualStructID(),
  m_VersionInfo()
{
	this->DoLoadWork(XmlFileName);
}

//******************************************************************************************************
CDeviceList::CDeviceList(const char* pXmlFileName)
: m_IsXmlDoc(),
  m_ActualStructID(),
  m_VersionInfo()
{
	this->DoLoadWork(std::string(pXmlFileName));
}

//******************************************************************************************************
CDeviceList::~CDeviceList(void)
{
}

//******************************************************************************************************
TGInsState CDeviceList::DoLoadWork(const std::string& XmlFileName)
{
	TGInsState Ret = TEnumGInsStateType::eGInsStateType__NONE;

	this->m_VersionInfo = "";
	this->m_ActualStructID = -1;

	if (Ret == TEnumGInsStateType::eGInsStateType__NONE)
	{
		this->m_IsXmlDoc = this->m_XmlDoc.Load(XmlFileName.c_str());
		if (!this->m_IsXmlDoc)
			Ret = TEnumGInsStateType::eGInsStateType__INTERNAL;
	}

	if (Ret == TEnumGInsStateType::eGInsStateType__NONE)
	{
		std::string Hstr = "";
		this->m_XmlDoc.ResetPos();
		if (this->m_XmlDoc.FindElem("//FileVersion"))
			Hstr = this->m_XmlDoc.GetData();
		if (Hstr.empty())
			Hstr = "???";
		this->m_VersionInfo += "V" + Hstr;

		Hstr = "";
		this->m_XmlDoc.ResetPos();
		if (this->m_XmlDoc.FindElem("//Date"))
			Hstr = this->m_XmlDoc.GetData();
		if (Hstr.empty())
			Hstr = "???";
		this->m_VersionInfo += " (" + Hstr + ")";

		Hstr = "";
		this->m_XmlDoc.ResetPos();
		if (this->m_XmlDoc.FindElem("//Author"))
			Hstr = this->m_XmlDoc.GetData();
		if (Hstr.empty())
			Hstr = "???";
		this->m_VersionInfo += " - " + Hstr;

		Hstr = "";
		this->m_XmlDoc.ResetPos();
		if (this->m_XmlDoc.FindElem("//StructureID"))
			Hstr = this->m_XmlDoc.GetData();
		if (!Hstr.empty())
			this->m_ActualStructID = strtol(Hstr.c_str(), NULL, 10);
		this->m_VersionInfo += " - ";
		if (this->CheckStructIDIsSupported())
		{
			this->m_VersionInfo += "StructOK (ActualID " + 
			                       this->t_to_string(this->m_ActualStructID) + 
								   " supported)";
		}
		else
		{
			this->m_VersionInfo += "StructFAIL (ActualID " + 
				                   this->t_to_string(this->m_ActualStructID) +
								   " / ShouldBeID from " +
								   this->t_to_string(this->GetSupportedStructIDMinimum()) + 
								   "-" +
								   this->t_to_string(this->GetSupportedStructIDMaximum()) + 
								   ")";
			Ret = TEnumGInsStateType::eGInsStateType__INTERNAL;
		}

	}

	if (this->IsValid())
		this->CreateIndex();

    return (Ret);
}


//******************************************************************************************************
bool CDeviceList::IsValid() const
{
	return (this->m_IsXmlDoc && this->CheckStructIDIsSupported());
}

//******************************************************************************************************
std::string CDeviceList::GetVersionInfo()
{
	return (this->m_VersionInfo);
}

//******************************************************************************************************
TGInsState CDeviceList::GetName(int32_t MainCode, std::string& Name)
{
    TGInsState iRet = TEnumGInsStateType::eGInsStateType__FNTNOTEXIST;

    Name.clear();

    do
    {
        if (!this->IsValid())
        {
            iRet = TEnumGInsStateType::eGInsStateType__INTERNAL;
            break;
        }

        std::string strPosName = this->t_to_string(MainCode);

        this->m_XmlDoc.ResetPos();
        if (this->m_XmlDoc.RestorePos(strPosName.c_str()))
        {
            Name = this->m_XmlDoc.GetAttrib("Name");
            iRet = TEnumGInsStateType::eGInsStateType__NONE;
        }
    }
    while (false);

    return iRet;
}

//******************************************************************************************************
TGInsState CDeviceList::GetName(int32_t MainCode, int32_t SubCode, std::string& Name)
{
    TGInsState iRet = TEnumGInsStateType::eGInsStateType__FNTNOTEXIST;

    Name.clear();

    do
    {
        if (!this->IsValid())
        {
            iRet = TEnumGInsStateType::eGInsStateType__INTERNAL;
            break;
        }

        std::string strPosName = this->t_to_string(MainCode);
        strPosName += ".";
        strPosName += this->t_to_string(SubCode);

        this->m_XmlDoc.ResetPos();
        if (this->m_XmlDoc.RestorePos(strPosName.c_str()))
        {
            Name = this->m_XmlDoc.GetAttrib("Name");
            iRet = TEnumGInsStateType::eGInsStateType__NONE;
        }
    }
    while (false);

    return iRet;
}

//******************************************************************************************************
TGInsState CDeviceList::GetName(int32_t MainCode, int32_t SubCode, int32_t FunctionCode, int32_t CasingCode, std::string& Name)
{
    TGInsState iRet = TEnumGInsStateType::eGInsStateType__FNTNOTEXIST;

    Name.clear();

    do
    {
        if (!this->IsValid())
        {
            iRet = TEnumGInsStateType::eGInsStateType__INTERNAL;
            break;
        }

        std::string strPosName = this->t_to_string(MainCode);
        strPosName += ".";
        strPosName += this->t_to_string(SubCode);
        strPosName += ".";
        strPosName += this->t_to_string(FunctionCode);
        strPosName += ".";
        strPosName += this->t_to_string(CasingCode);

        this->m_XmlDoc.ResetPos();
        if (this->m_XmlDoc.RestorePos(strPosName.c_str()))
        {
            Name = this->m_XmlDoc.GetAttrib("Name");
            iRet = TEnumGInsStateType::eGInsStateType__NONE;
        }
    }
    while (false);

    return iRet;
}

//******************************************************************************************************
TGInsState CDeviceList::GetMainSubCodeInfo(int32_t MainCode, int32_t SubCode, std::string& UniqueCode, std::string& DeviceSeries, std::string& DeviceType)
{
    TGInsState iRet = TEnumGInsStateType::eGInsStateType__FNTNOTEXIST;

    UniqueCode.clear();
    DeviceType.clear();
    DeviceSeries.clear();

    do
    {
        if (!this->IsValid())
        {
            iRet = TEnumGInsStateType::eGInsStateType__INTERNAL;
            break;
        }

        std::string strPosName = this->t_to_string(MainCode);
        strPosName += ".";
        strPosName += this->t_to_string(SubCode);

        this->m_XmlDoc.ResetPos();
        if (this->m_XmlDoc.RestorePos(strPosName.c_str()))
        {
        	UniqueCode = this->m_XmlDoc.GetAttrib("UniqueCode");
        	if (this->m_XmlDoc.OutOfElem())
        	{
        		DeviceType = this->m_XmlDoc.GetAttrib("DeviceType");
        		if (this->m_XmlDoc.OutOfElem())
        		{
        			DeviceSeries = this->m_XmlDoc.GetAttrib("Name");
        			iRet = TEnumGInsStateType::eGInsStateType__NONE;
        		}
        	}
        }
    }
    while (false);

    return iRet;
}

//******************************************************************************************************
TGInsState CDeviceList::GetDevices(TSelector Selector, std::vector<TDeviceInfo> &Devices)
{
    return (GetDevices(Selector, -1, -1, -1, -1, Devices));
}

//******************************************************************************************************
TGInsState CDeviceList::GetDevices(TSelector Selector, int32_t MainCode, std::vector<TDeviceInfo> &Devices)
{
    return (GetDevices(Selector, MainCode, -1, -1, -1, Devices));
}

//******************************************************************************************************
TGInsState CDeviceList::GetDevices(TSelector Selector, int32_t MainCode, int32_t SubCode, std::vector<TDeviceInfo> &Devices)
{
    return (GetDevices(Selector, MainCode, SubCode, -1, -1, Devices));
}

//******************************************************************************************************
TGInsState CDeviceList::GetDevices(TSelector Selector, int32_t MainCode, int32_t SubCode, int32_t FunctionCode, std::vector<TDeviceInfo> &Devices)
{
    return (GetDevices(Selector, MainCode, SubCode, FunctionCode, -1, Devices));
}

//******************************************************************************************************
TGInsState CDeviceList::GetDevices(TSelector Selector, int32_t MainCode, int32_t SubCode, int32_t FunctionCode, int32_t CasingCode, std::vector<TDeviceInfo> &Devices)
{
    TGInsState iRet = TEnumGInsStateType::eGInsStateType__FNTNOTEXIST;

    Devices.clear();

    do
    {
        if (!this->IsValid())
        {
            iRet = TEnumGInsStateType::eGInsStateType__INTERNAL;
            break;
        }

        this->m_XmlDoc.ResetPos();

        while (this->m_XmlDoc.FindElem("//DeviceSeries"))
        {
        	std::string strDeviceSeries = this->m_XmlDoc.GetAttrib("Name");	// ATTENTION: this parameter must NOT be translated, because checks are done for specified name !!!!
			if (strDeviceSeries.empty())
			{
				continue;
			}

			this->m_XmlDoc.IntoElem();
			while (this->m_XmlDoc.FindElem("Device"))
			{
				std::string strDeviceType = this->m_XmlDoc.GetAttrib("DeviceType");
				if (strDeviceType.empty())
				{
					continue;
				}
				std::string strMainCode = this->m_XmlDoc.GetAttrib("MainCode");
				if (strMainCode.empty())
				{
					continue;
				}
				std::string strMainName = this->m_XmlDoc.GetAttrib("Name");
				if (strMainName.empty())
					strMainName = "Name @MainCode=" + strMainCode + " ???";

				this->m_XmlDoc.IntoElem();
				while (this->m_XmlDoc.FindElem("SubType"))
				{
					std::string strSubCode = this->m_XmlDoc.GetAttrib("SubCode");
					if (strSubCode.empty())
					{
						continue;
					}
					std::string strUniqueCode = this->m_XmlDoc.GetAttrib("UniqueCode");
					if (strUniqueCode.empty())
					{
						continue;
					}

					this->m_XmlDoc.IntoElem();
					while (this->m_XmlDoc.FindElem("FunctionType"))
					{
						std::string strFunctionCode = this->m_XmlDoc.GetAttrib("FunctionCode");
						if (strFunctionCode.empty())
						{
							continue;
						}

						this->m_XmlDoc.IntoElem();
						while (this->m_XmlDoc.FindElem("CasingType"))
						{
							std::string strCasingCode = this->m_XmlDoc.GetAttrib("CasingCode");
							if (strCasingCode.empty())
							{
								continue;
							}
							std::string strName = this->m_XmlDoc.GetAttrib("Name");

							std::string strPartnumber = this->m_XmlDoc.GetAttrib("Partnumber");

							std::string strFeatures_SlaveUartCount,
										strFeatures_PacFunction_Implemented,
										strFeatures_PacFunction_UseSWLicense;
							this->m_XmlDoc.IntoElem();
							if (this->CheckStructIDIs3())
							{
								while (this->m_XmlDoc.FindElem("Features"))
								{
									strFeatures_SlaveUartCount = this->m_XmlDoc.GetAttrib("SlaveUartCount");
									this->m_XmlDoc.IntoElem();
									while (this->m_XmlDoc.FindElem("PacFunction"))
									{
										strFeatures_PacFunction_Implemented = this->m_XmlDoc.GetAttrib("Implemented");
										strFeatures_PacFunction_UseSWLicense = this->m_XmlDoc.GetAttrib("UseSWLicense");
									}
									this->m_XmlDoc.OutOfElem();
								} // while("Features")
							}
							if (this->CheckStructIDIs4())
							{
								while (this->m_XmlDoc.FindElem("Features"))
								{
									this->m_XmlDoc.IntoElem();
									while (this->m_XmlDoc.FindElem("SlaveUartCount"))
									{
										strFeatures_SlaveUartCount = this->m_XmlDoc.GetData();
									} // while("SlaveUartCount")
									while (this->m_XmlDoc.FindElem("PacFunction_Implemented"))
									{
										strFeatures_PacFunction_Implemented = this->m_XmlDoc.GetData();
									} // while("PacFunction_Implemented")
									while (this->m_XmlDoc.FindElem("PacFunction_UseSWLicense"))
									{
										strFeatures_PacFunction_UseSWLicense = this->m_XmlDoc.GetData();
									} // while("PacFunction_UseSWLicense")
									this->m_XmlDoc.OutOfElem();
								} // while("Features")
							}
							this->m_XmlDoc.OutOfElem();

							std::string help = strDeviceSeries;
							std::transform(help.begin(), help.end(), help.begin(), ::toupper);
							bool IsISMSeries = (help == "ISM-SERIES");
							bool IseSeries = (help == "E.SERIES");
							bool IsqSeries = (help == "Q.SERIES");
							bool IsOtherSeries = (help == "OTHER.SERIES");

							help = strDeviceType;
							std::transform(help.begin(), help.end(), help.begin(), ::toupper);
							bool IsEnvironment = (help == "ENVIRONMENT");
							bool IsController = (help == "CONTROLLER");
							bool IsSlave = (help == "SLAVE");

							help = strName;
							std::transform(help.begin(), help.end(), help.begin(), ::toupper);
							bool IsCustom = (help.find("CUSTOM") != std::string::npos);	// can be anywhere

							bool DoItSeries = false;
							if ((Selector.WithISMSeries && IsISMSeries) ||
								(Selector.WitheSeries && IseSeries) ||
								(Selector.WithqSeries && IsqSeries) ||
								(Selector.WithOtherSeries && IsOtherSeries))
								DoItSeries = true;

							bool DoItDevice = false;
							if ((Selector.WithEnvironment && IsEnvironment) ||
								(Selector.WithController && IsController) ||
								(Selector.WithSlave && IsSlave))
								DoItDevice = true;

							bool DoItCustom = true;
							if (!Selector.WithCustom && IsCustom)
								DoItCustom = false;

							int32_t IsMainCode = strtol(strMainCode.c_str(), NULL, 10);
							int32_t IsSubCode = strtol(strSubCode.c_str(), NULL, 10);
							int32_t IsFunctionCode = strtol(strFunctionCode.c_str(), NULL, 10);
							int32_t IsCasingCode = strtol(strCasingCode.c_str(), NULL, 10);

							// ----- because these parameters can also be absent => default it to a valid one, if empty or other conditions
							if (strPartnumber.empty())
								strPartnumber = "---";	

							int32_t IsFeatures_NumberOfSlaveUarts = 0;
							if (IsController && !strFeatures_SlaveUartCount.empty())
							{
								IsFeatures_NumberOfSlaveUarts = strtol(strFeatures_SlaveUartCount.c_str(), NULL, 10);
							}

							TState IsFeatures_PacFunction_Implemented = eState_NotSet;
							help = strFeatures_PacFunction_Implemented;
							if (IsController && !help.empty())
							{
								std::transform(help.begin(), help.end(), help.begin(), ::toupper);
								IsFeatures_PacFunction_Implemented = (help != "FALSE") ? eState_Set : eState_NotSet;
							}

							TState IsFeatures_PacFunction_UseSWLicense = eState_NotSet;
							help = strFeatures_PacFunction_UseSWLicense;
							if ((IsFeatures_PacFunction_Implemented == eState_Set) && IsController && !help.empty())
							{
								std::transform(help.begin(), help.end(), help.begin(), ::toupper);
								IsFeatures_PacFunction_UseSWLicense = (help != "FALSE") ? eState_Set : eState_NotSet;
							}
							// -----

							bool DoItMainCode = true;
							if ((MainCode >= 0) &&
								(MainCode != IsMainCode))
								DoItMainCode = false;

							bool DoItSubCode = true;
							if ((SubCode >= 0) &&
								(SubCode != IsSubCode))
								DoItSubCode = false;

							bool DoItFunctionCode = true;
							if ((FunctionCode >= 0) &&
								(FunctionCode != IsFunctionCode))
								DoItFunctionCode = false;

							bool DoItCasingCode = true;
							if ((CasingCode >= 0) &&
								(CasingCode != IsCasingCode))
								DoItCasingCode = false;

							if (DoItSeries &&
								DoItDevice &&
								DoItCustom &&
								DoItMainCode &&
								DoItSubCode &&
								DoItFunctionCode &&
								DoItCasingCode)
							{
								TDeviceInfo Device;
								Device.FullName = strName;
								Device.MainName = strMainName;
								Device.PartNumber = strPartnumber;
								Device.DeviceType.Text = strDeviceType;
								Device.DeviceType.IsEnvironment = IsEnvironment;
								Device.DeviceType.IsController = IsController;
								Device.DeviceType.IsSlave = IsSlave;
								Device.DeviceType.IsOther = !Device.DeviceType.IsEnvironment &&
															!Device.DeviceType.IsController &&
															!Device.DeviceType.IsSlave &&
															!Device.DeviceType.Text.empty();
								Device.MainCode = IsMainCode;
								Device.SubCode = IsSubCode;
								Device.FunctionCode = IsFunctionCode;
								Device.CasingCode = IsCasingCode;
								Device.UniqueCode = strtol(strUniqueCode.c_str(), NULL, 10);
								Device.NumberOfSlaveUarts = IsFeatures_NumberOfSlaveUarts;
								Device.PacFunction.Implemented = IsFeatures_PacFunction_Implemented;
								Device.PacFunction.UseSWLicense = IsFeatures_PacFunction_UseSWLicense;
								Devices.push_back(Device);
								iRet = TEnumGInsStateType::eGInsStateType__NONE;
							}

						} // while("CasingType")
						this->m_XmlDoc.OutOfElem();
					} // while("FunctionType")
					this->m_XmlDoc.OutOfElem();
				} // while("SubType")
				this->m_XmlDoc.OutOfElem();
			} // while("Device")
			this->m_XmlDoc.OutOfElem();
        } // while ("//DeviceSeries")

    }
    while (false);

    return iRet;
}

//******************************************************************************************************
TGInsState CDeviceList::GetMainCodeFromMainCodeNameSearchStr(std::string MainCodeNameSearchStr, int32_t &MainCode)
{
    TGInsState iRet = TEnumGInsStateType::eGInsStateType__FNTNOTEXIST;

    MainCode = -1;

    do
    {
    	if (MainCodeNameSearchStr.empty())
    	{
			break;
		}
        if (!this->IsValid())
        {
            iRet = TEnumGInsStateType::eGInsStateType__INTERNAL;
            break;
        }

        this->m_XmlDoc.ResetPos();
		while (this->m_XmlDoc.FindElem("//Device"))
		{
			std::string strMainCodeName = this->m_XmlDoc.GetAttrib("Name");
			if (strMainCodeName.empty())
			{
				continue;
			}
			std::string strMainCode = this->m_XmlDoc.GetAttrib("MainCode");
			if (strMainCode.empty())
			{
				continue;
			}

			if (strMainCodeName.find(MainCodeNameSearchStr) != std::string::npos)
			{
				MainCode = strtol(strMainCode.c_str(), NULL, 10);
				iRet = TEnumGInsStateType::eGInsStateType__NONE;
				break;
			}

        } // while (this->m_XmlDoc.FindElem("//Device"))

    }
    while (false);

    return iRet;
}

//******************************************************************************************************
TGInsState CDeviceList::CreateIndex(void)
{
    TGInsState iRet = TEnumGInsStateType::eGInsStateType__NONE;

    do
    {
        if (!this->IsValid())
        {
            iRet = TEnumGInsStateType::eGInsStateType__INTERNAL;
            break;
        }

        iRet = 0; // Anzahl der Positionen
        this->m_XmlDoc.ResetPos();
        while (this->m_XmlDoc.FindElem("//Device"))
        {
            std::string strMainCode = this->m_XmlDoc.GetAttrib("MainCode");
            if (strMainCode.empty())
            {
                continue;
            }

            // MainCodeIndex
            std::string strPosName(strMainCode);
            this->m_XmlDoc.SavePos(strPosName.c_str());
            ++iRet;

            this->m_XmlDoc.IntoElem();
            while (this->m_XmlDoc.FindElem("SubType"))
            {
                std::string strSubCode = this->m_XmlDoc.GetAttrib("SubCode");
                if (strSubCode.empty())
                {
                    continue;
                }

                // SubCodeIndex
                std::string strPosName(strMainCode);
                strPosName += ".";
                strPosName += strSubCode;
#if defined(_DEBUG)
                std::string Name("");
                if ("10.1" == strPosName)
                {
                    Name = this->m_XmlDoc.GetAttrib("Name");
                }
#endif
                this->m_XmlDoc.SavePos(strPosName.c_str());
                ++iRet;

                this->m_XmlDoc.IntoElem();
                while (this->m_XmlDoc.FindElem("FunctionType"))
                {
                    std::string strFunctionCode = this->m_XmlDoc.GetAttrib("FunctionCode");
                    if (strFunctionCode.empty())
                    {
                        continue;
                    }

                    // FunctionCodeIndex
					std::string strPosName(strMainCode);
					strPosName += ".";
					strPosName += strSubCode;
					strPosName += ".";
					strPosName += strFunctionCode;
#if defined(_DEBUG)
					std::string Description("");
					if ("173.0.6381921" == strPosName)
					{
						Description = this->m_XmlDoc.GetAttrib("Description");
					}
					if ("173.20.6381921" == strPosName)
					{
						Description = this->m_XmlDoc.GetAttrib("Description");
					}
#endif
					this->m_XmlDoc.SavePos(strPosName.c_str());
					++iRet;

                    this->m_XmlDoc.IntoElem();
                    while (this->m_XmlDoc.FindElem("CasingType"))
                    {
                        std::string strCasingCode = this->m_XmlDoc.GetAttrib("CasingCode");
                        if (strCasingCode.empty())
                        {
                            continue;
                        }

                        // CasingCodeIndex
                        std::string strPosName(strMainCode);
                        strPosName += ".";
                        strPosName += strSubCode;
                        strPosName += ".";
                        strPosName += strFunctionCode;
                        strPosName += ".";
                        strPosName += strCasingCode;
#if defined(_DEBUG)
                        std::string Name("");
                        if ("173.0.6381921.101" == strPosName)
                        {
                            Name = this->m_XmlDoc.GetAttrib("Name");
                        }
                        if ("173.20.6381921.101" == strPosName)
                        {
                            Name = this->m_XmlDoc.GetAttrib("Name");
                        }
#endif
                        this->m_XmlDoc.SavePos(strPosName.c_str());
                        ++iRet;
                    } // while("CasingType")
                    this->m_XmlDoc.OutOfElem();
                } // while("FunctionType")
                this->m_XmlDoc.OutOfElem();
            } // while("SubType")
            this->m_XmlDoc.OutOfElem();
        } // while("Device")
    }
    while (false);

    return iRet;
}

//******************************************************************************************************
int32_t CDeviceList::GetSupportedStructIDMinimum()
{
	return (3);
}

//******************************************************************************************************
int32_t CDeviceList::GetSupportedStructIDMaximum()
{
	return (4);
}

//******************************************************************************************************
bool CDeviceList::CheckStructIDIsSupported() const
{
	return ((this->m_ActualStructID >= GetSupportedStructIDMinimum()) && 
			(this->m_ActualStructID <= GetSupportedStructIDMaximum()));
}

//******************************************************************************************************
bool CDeviceList::CheckStructIDIs3() const
{
	return (this->m_ActualStructID == 3);
}

//******************************************************************************************************
bool CDeviceList::CheckStructIDIs4() const
{
	return (this->m_ActualStructID == 4);
}

//******************************************************************************************************

}; // namespace GIns
