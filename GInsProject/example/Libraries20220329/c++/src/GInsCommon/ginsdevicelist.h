#if !defined(_DEVICELIST_H)
#define _DEVICELIST_H

#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "CMarkup/MarkupSTL.h"
#include <sstream>
#include <vector>
#include <algorithm>

#include "ginsstate.h"

#define	 SupportedDeviceListStructID	3

namespace GIns
{
class CDeviceList
{
	enum TState
	{
		eState_Set,
		eState_NotSet,
		eState_NotDefined
	};
public:
	class TDeviceInfo
	{
	public:
		

		TDeviceInfo()
		: FullName(),
		  MainName(),
		  PartNumber(),
		  DeviceType(),
		  MainCode(),
		  SubCode(),
		  FunctionCode(),
		  CasingCode(),
		  UniqueCode(),
		  NumberOfSlaveUarts(),
		  PacFunction()
		{
			this->Invalidate();
        }
		std::string FullName;
		std::string MainName;
		std::string PartNumber;
		struct TDeviceType
		{
			TDeviceType()
			: Text(),
			  IsEnvironment(),
			  IsController(),
			  IsSlave(),
			  IsOther()
			{
				this->Invalidate();
			}
			std::string Text;
			bool IsEnvironment;
			bool IsController;
			bool IsSlave;
			bool IsOther;
			void Invalidate(void)
			{
				this->Text = "";
				this->IsEnvironment = false;
				this->IsController = false;
				this->IsSlave = false;
				this->IsOther = false;
			}
			bool IsValid(void) const
			{
				return ((this->Text != "") &&
						 (this->IsEnvironment ||
						  this->IsController ||
						  this->IsSlave ||
						  this->IsOther));
			}
			bool operator == (TDeviceType const& rhs) const
			{
				return ((this->Text == rhs.Text) &&
						 (this->IsEnvironment == rhs.IsEnvironment) &&
						 (this->IsController == rhs.IsController) &&
						 (this->IsSlave == rhs.IsSlave) &&
						 (this->IsOther == rhs.IsOther));
            }
			bool operator != (TDeviceType const& rhs) const
			{
				return (!(*this == rhs));
            }
			TDeviceType &operator = (TDeviceType const& rhs)
			{
				if (this != &rhs)
				{
					this->Invalidate();
					this->Text = rhs.Text;
					this->IsEnvironment = rhs.IsEnvironment;
					this->IsController = rhs.IsController;
					this->IsSlave = rhs.IsSlave;
					this->IsOther = rhs.IsOther;
				}
				return (*this);
            }
		} DeviceType;
		int32_t MainCode;
		int32_t SubCode;
		int32_t FunctionCode;
		int32_t CasingCode;
		int32_t UniqueCode;
		int32_t NumberOfSlaveUarts;
		struct TPacFunction
		{
			TPacFunction()
			: Implemented(),
			  UseSWLicense()
			{
				this->Invalidate();
			}
			TState Implemented;
			TState UseSWLicense;
			void Invalidate(void)
			{
				this->Implemented = eState_NotDefined;
				this->UseSWLicense = eState_NotDefined;
			}
			bool IsValid(void) const
			{
				return ((this->Implemented != eState_NotDefined) &&
						(this->UseSWLicense != eState_NotDefined));
			}
			bool operator == (TPacFunction const& rhs) const
			{
				return ((this->Implemented == rhs.Implemented) &&
						 (this->UseSWLicense == rhs.UseSWLicense));
            }
			bool operator != (TPacFunction const& rhs) const
			{
				return (!(*this == rhs));
            }
			TPacFunction &operator = (TPacFunction const& rhs)
			{
				if (this != &rhs)
				{
					this->Invalidate();
					this->Implemented = rhs.Implemented;
					this->UseSWLicense = rhs.UseSWLicense;
				}
				return (*this);
            }
		} PacFunction;

		void Invalidate(void)
		{
			this->FullName = "";
			this->MainName = "";
			this->PartNumber = "";
			this->DeviceType.Invalidate();
			this->MainCode = -1;
			this->SubCode = -1;
			this->FunctionCode = -1;
			this->CasingCode = -1;
			this->UniqueCode = -1;
			this->NumberOfSlaveUarts = -1;
			this->PacFunction.Invalidate();
        }
		bool IsValid(void) const
		{
			return ((this->FullName != "") &&
					(this->MainName != "") &&
					(this->PartNumber != "") &&
					this->DeviceType.IsValid() &&
					(this->MainCode >= 0) &&
					(this->SubCode >= 0) &&
					(this->FunctionCode >= 0) &&
					(this->CasingCode >= 0) &&
					(this->UniqueCode >= 0) &&
					(this->NumberOfSlaveUarts >= 0) &&
					this->PacFunction.IsValid());
        }

		bool operator == (TDeviceInfo const& rhs) const
		{
			return ((this->FullName == rhs.FullName) &&
					(this->MainName == rhs.MainName) &&
					(this->PartNumber == rhs.PartNumber) &&
					(this->DeviceType == rhs.DeviceType) &&
					(this->MainCode == rhs.MainCode) &&
					(this->SubCode == rhs.SubCode) &&
					(this->FunctionCode == rhs.FunctionCode) &&
					(this->CasingCode == rhs.CasingCode) &&
					(this->UniqueCode == rhs.UniqueCode) &&
					(this->NumberOfSlaveUarts == rhs.NumberOfSlaveUarts) &&
					(this->PacFunction == rhs.PacFunction));
        }
		bool operator != (TDeviceInfo const& rhs) const
		{
			return (!(*this == rhs));
        }
		TDeviceInfo &operator = (TDeviceInfo const& rhs)
		{
			if (this != &rhs)
			{
				this->Invalidate();
				this->FullName = rhs.FullName;
				this->MainName = rhs.MainName;
				this->PartNumber = rhs.PartNumber;
				this->DeviceType = rhs.DeviceType;
				this->MainCode = rhs.MainCode;
				this->SubCode = rhs.SubCode;
				this->FunctionCode = rhs.FunctionCode;
				this->CasingCode = rhs.CasingCode;
				this->UniqueCode = rhs.UniqueCode;
				this->NumberOfSlaveUarts = rhs.NumberOfSlaveUarts;
				this->PacFunction = rhs.PacFunction;
			}
			return (*this);
        }
	};
	struct TSelector
	{
		bool WithISMSeries;
		bool WitheSeries;
		bool WithqSeries;
		bool WithOtherSeries;
		bool WithEnvironment;
		bool WithController;
		bool WithSlave;
		bool WithCustom;
	};
    CDeviceList(const std::string& XmlFileName);
	CDeviceList(const char* pXmlFileName);
    virtual ~CDeviceList(void);

private:
    CDeviceList(void); // Standard-CTOR nicht definiert
    CDeviceList(const CDeviceList&); // Copy-CTOR nicht definiert
    CDeviceList& operator = (const CDeviceList&); // Zuweisungsoperator nicht definiert

public:
    TGInsState DoLoadWork(const std::string& XmlFileName);
    bool IsValid() const;
    std::string GetVersionInfo();
    TGInsState GetName(int32_t MainCode, std::string& FullName);
    TGInsState GetName(int32_t MainCode, int32_t SubCode, std::string& FullName);
    //not existing, because no "Name"-item at this position     TGInsState GetName(int32_t MainCode, int32_t SubCode, int32_t FunctionCode, std::string& Name);
    TGInsState GetName(int32_t MainCode, int32_t SubCode, int32_t FunctionCode, int32_t CasingCode, std::string& Name);
    TGInsState GetMainSubCodeInfo(int32_t MainCode, int32_t SubCode, std::string& UniqueCode, std::string& DeviceSeries, std::string& DeviceType);
    TGInsState GetDevices(TSelector Selector, std::vector<TDeviceInfo> &Devices);
    TGInsState GetDevices(TSelector Selector, int32_t MainCode, std::vector<TDeviceInfo> &Devices);
    TGInsState GetDevices(TSelector Selector, int32_t MainCode, int32_t SubCode, std::vector<TDeviceInfo> &Devices);
    TGInsState GetDevices(TSelector Selector, int32_t MainCode, int32_t SubCode, int32_t FunctionCode, std::vector<TDeviceInfo> &Devices);
    TGInsState GetDevices(TSelector Selector, int32_t MainCode, int32_t SubCode, int32_t FunctionCode, int32_t CasingCode, std::vector<TDeviceInfo> &Devices);
    TGInsState GetMainCodeFromMainCodeNameSearchStr(std::string MainCodeNameSearchStr, int32_t &MainCode);

protected:
    TGInsState CreateIndex(void);

protected:
    template<class T>
    std::string t_to_string(T i)
    {
        std::stringstream ss;
        ss << i;

        std::string s;
        s = ss.str();
        return s;
    }

protected:
    static int32_t GetSupportedStructIDMinimum();
	static int32_t GetSupportedStructIDMaximum();
    bool CheckStructIDIsSupported() const;
	bool CheckStructIDIs3() const;
	bool CheckStructIDIs4() const;

	CMarkupSTL		m_XmlDoc;
    bool			m_IsXmlDoc;
    int32_t			m_ActualStructID;
    std::string		m_VersionInfo;

}; // class CDeviceList

}  // namespace GIns

#endif // #if !defined(_DEVICELIST_H)
