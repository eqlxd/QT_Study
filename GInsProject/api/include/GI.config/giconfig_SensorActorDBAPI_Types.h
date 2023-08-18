//========================================================================
// GInsXmlRpcIFGenEng V2.41 (2021-04-26)
// This file was produced by means of an automated generator tool.
// Please modify content between labeled "{{...}}" positions ONLY!
//========================================================================
#if !defined(_GICONFIG_SENSORACTORDBAPI_TYPES_H)
#define _GICONFIG_SENSORACTORDBAPI_TYPES_H
//========================================================================
// Implemented methods
#define IMPLEMENT_GICONFIG_SENSORACTORDBAPI_CREATE
#define IMPLEMENT_GICONFIG_SENSORACTORDBAPI_REMOVE
#define IMPLEMENT_GICONFIG_SENSORACTORDBAPI_COPY
#define IMPLEMENT_GICONFIG_SENSORACTORDBAPI_GET
#define IMPLEMENT_GICONFIG_SENSORACTORDBAPI_SET
#define IMPLEMENT_GICONFIG_SENSORACTORDBAPI_GETINFO
#define IMPLEMENT_GICONFIG_SENSORACTORDBAPI_LOAD
#define IMPLEMENT_GICONFIG_SENSORACTORDBAPI_SAVE


#include <string>
#include <vector>
#include <map>


// GInsXmlRpc
#include "GInsXmlRpcValue.h"
#include "ginsdefs.h"
#include "giconfig_SensorActorDBAPI_Options.h"


/*{{Add_Own_Includes_Or_Declarations*/
/*}}Add_Own_Includes_Or_Declarations*/


//========================================================================
namespace giconfig_SensorActorDBAPI {
//========================================================================
//------------------------------------------------------------------------
// giconfig_SensorActorDBAPI::CAPIInfo
//------------------------------------------------------------------------
class CAPIInfo
{
public:
    static std::string const& Name(void)
    {
        static std::string str("SensorActorDBAPI");
        return str;
    }
    static std::string const& Revision(void)
    {
        static std::string str("0.1");
        return str;
    }
    static std::string const& GeneratorInfo(void)
    {
        static std::string str("GInsXmlRpcIFGenEng V2.41 (2021-04-26)");
        return str;
    }
}; // class CAPIInfo


//------------------------------------------------------------------------
// giconfig_SensorActorDBAPI::CTypeItemParameter
//------------------------------------------------------------------------
class CTypeItemParameter : public GInsXmlRpc::XmlRpcValue
{
    public:
        static std::string const& ItemName_ID(void)
        {
            static std::string str("ID");
            return str;
        }
    public:
        static std::string const& ItemName_Name(void)
        {
            static std::string str("Name");
            return str;
        }
    public:
        static std::string const& ItemName_IsStandard(void)
        {
            static std::string str("IsStandard");
            return str;
        }
    public:
        static std::string const& ItemName_IsTemporary(void)
        {
            static std::string str("IsTemporary");
            return str;
        }
    public:
        static std::string const& ItemName_ChangeDateTime(void)
        {
            static std::string str("ChangeDateTime");
            return str;
        }
    public:
        static std::string const& ItemName_ChangeName(void)
        {
            static std::string str("ChangeName");
            return str;
        }
    public:
        static std::string const& ItemName_UsedInActualConfigurationIDs(void)
        {
            static std::string str("UsedInActualConfigurationIDs");
            return str;
        }
    public:
        static std::string const& ItemName_TypeFilterORed0(void)
        {
            static std::string str("TypeFilterORed0");
            return str;
        }
    public:
        static std::string const& ItemName_TypeFilterORed1(void)
        {
            static std::string str("TypeFilterORed1");
            return str;
        }
    public:
        static std::string const& ItemName_TypeFilterORed2(void)
        {
            static std::string str("TypeFilterORed2");
            return str;
        }
    public:
        static std::string const& ItemName_TypeFilterORed3(void)
        {
            static std::string str("TypeFilterORed3");
            return str;
        }
    public:
        static std::string const& ItemName_TypeFilterORed4(void)
        {
            static std::string str("TypeFilterORed4");
            return str;
        }
    public:
        static std::string const& ItemName_PointsPhysical2Intermediate(void)
        {
            static std::string str("PointsPhysical2Intermediate");
            return str;
        }
    public:
        static std::string const& ItemName_Error(void)
        {
            static std::string str("Error");
            return str;
        }
    public:
        static std::string const& ItemName_Description_de(void)
        {
            static std::string str("Description_de");
            return str;
        }
    public:
        static std::string const& ItemName_IntermediateStandardBaseUnitName_de(void)
        {
            static std::string str("IntermediateStandardBaseUnitName_de");
            return str;
        }
    public:
        static std::string const& ItemName_Description_en(void)
        {
            static std::string str("Description_en");
            return str;
        }
    public:
        static std::string const& ItemName_IntermediateStandardBaseUnitName_en(void)
        {
            static std::string str("IntermediateStandardBaseUnitName_en");
            return str;
        }
    public:
        static std::string const& ItemName_Description_es(void)
        {
            static std::string str("Description_es");
            return str;
        }
    public:
        static std::string const& ItemName_IntermediateStandardBaseUnitName_es(void)
        {
            static std::string str("IntermediateStandardBaseUnitName_es");
            return str;
        }
    public:
        static std::string const& ItemName_Description_fr(void)
        {
            static std::string str("Description_fr");
            return str;
        }
    public:
        static std::string const& ItemName_IntermediateStandardBaseUnitName_fr(void)
        {
            static std::string str("IntermediateStandardBaseUnitName_fr");
            return str;
        }
    public:
        static std::string const& ItemName_Description_ja(void)
        {
            static std::string str("Description_ja");
            return str;
        }
    public:
        static std::string const& ItemName_IntermediateStandardBaseUnitName_ja(void)
        {
            static std::string str("IntermediateStandardBaseUnitName_ja");
            return str;
        }
    public:
        static std::string const& ItemName_Description_ko(void)
        {
            static std::string str("Description_ko");
            return str;
        }
    public:
        static std::string const& ItemName_IntermediateStandardBaseUnitName_ko(void)
        {
            static std::string str("IntermediateStandardBaseUnitName_ko");
            return str;
        }
    public:
        static std::string const& ItemName_Description_nl(void)
        {
            static std::string str("Description_nl");
            return str;
        }
    public:
        static std::string const& ItemName_IntermediateStandardBaseUnitName_nl(void)
        {
            static std::string str("IntermediateStandardBaseUnitName_nl");
            return str;
        }
    public:
        static std::string const& ItemName_Description_pt(void)
        {
            static std::string str("Description_pt");
            return str;
        }
    public:
        static std::string const& ItemName_IntermediateStandardBaseUnitName_pt(void)
        {
            static std::string str("IntermediateStandardBaseUnitName_pt");
            return str;
        }
    public:
        static std::string const& ItemName_Description_ru(void)
        {
            static std::string str("Description_ru");
            return str;
        }
    public:
        static std::string const& ItemName_IntermediateStandardBaseUnitName_ru(void)
        {
            static std::string str("IntermediateStandardBaseUnitName_ru");
            return str;
        }
    public:
        static std::string const& ItemName_Description_tr(void)
        {
            static std::string str("Description_tr");
            return str;
        }
    public:
        static std::string const& ItemName_IntermediateStandardBaseUnitName_tr(void)
        {
            static std::string str("IntermediateStandardBaseUnitName_tr");
            return str;
        }
    public:
        static std::string const& ItemName_Description_zh(void)
        {
            static std::string str("Description_zh");
            return str;
        }
    public:
        static std::string const& ItemName_IntermediateStandardBaseUnitName_zh(void)
        {
            static std::string str("IntermediateStandardBaseUnitName_zh");
            return str;
        }
public:
    static std::string const& StructTypeName(void)
    {
        static std::string str("TypeItemParameter");
        return str;
    }
    static std::string const& StructTypeID(void)
    {
        static std::string str("39.0");
        return str;
    }
public:
    CTypeItemParameter(void)
    {
        try
        {
            Construct_ID();
            Construct_Name();
            Construct_IsStandard();
            Construct_IsTemporary();
            Construct_ChangeDateTime();
            Construct_ChangeName();
            Construct_UsedInActualConfigurationIDs();
            Construct_TypeFilterORed0();
            Construct_TypeFilterORed1();
            Construct_TypeFilterORed2();
            Construct_TypeFilterORed3();
            Construct_TypeFilterORed4();
            Construct_PointsPhysical2Intermediate();
            Construct_Error();
            Construct_Description_de();
            Construct_IntermediateStandardBaseUnitName_de();
            Construct_Description_en();
            Construct_IntermediateStandardBaseUnitName_en();
            Construct_Description_es();
            Construct_IntermediateStandardBaseUnitName_es();
            Construct_Description_fr();
            Construct_IntermediateStandardBaseUnitName_fr();
            Construct_Description_ja();
            Construct_IntermediateStandardBaseUnitName_ja();
            Construct_Description_ko();
            Construct_IntermediateStandardBaseUnitName_ko();
            Construct_Description_nl();
            Construct_IntermediateStandardBaseUnitName_nl();
            Construct_Description_pt();
            Construct_IntermediateStandardBaseUnitName_pt();
            Construct_Description_ru();
            Construct_IntermediateStandardBaseUnitName_ru();
            Construct_Description_tr();
            Construct_IntermediateStandardBaseUnitName_tr();
            Construct_Description_zh();
            Construct_IntermediateStandardBaseUnitName_zh();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
    CTypeItemParameter(const CTypeItemParameter& rhs) : 
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    try
    {
        if ((*this).valid())
        {
            (*this).setStructTypeID(StructTypeID());
        }
    }
    catch (...) {}
        }
    CTypeItemParameter(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            if (!(*this).valid())
            {
                return;
            }
            if (((*this).getType() != GInsXmlRpc::XmlRpcValue::TypeStruct) ||
                (!(*this).getStructTypeID().empty() && ((*this).getStructTypeID() != StructTypeID())))
            {
                (*this).invalidate();
            }
            Construct_ID();
            Construct_Name();
            Construct_IsStandard();
            Construct_IsTemporary();
            Construct_ChangeDateTime();
            Construct_ChangeName();
            Construct_UsedInActualConfigurationIDs();
            Construct_TypeFilterORed0();
            Construct_TypeFilterORed1();
            Construct_TypeFilterORed2();
            Construct_TypeFilterORed3();
            Construct_TypeFilterORed4();
            Construct_PointsPhysical2Intermediate();
            Construct_Error();
            Construct_Description_de();
            Construct_IntermediateStandardBaseUnitName_de();
            Construct_Description_en();
            Construct_IntermediateStandardBaseUnitName_en();
            Construct_Description_es();
            Construct_IntermediateStandardBaseUnitName_es();
            Construct_Description_fr();
            Construct_IntermediateStandardBaseUnitName_fr();
            Construct_Description_ja();
            Construct_IntermediateStandardBaseUnitName_ja();
            Construct_Description_ko();
            Construct_IntermediateStandardBaseUnitName_ko();
            Construct_Description_nl();
            Construct_IntermediateStandardBaseUnitName_nl();
            Construct_Description_pt();
            Construct_IntermediateStandardBaseUnitName_pt();
            Construct_Description_ru();
            Construct_IntermediateStandardBaseUnitName_ru();
            Construct_Description_tr();
            Construct_IntermediateStandardBaseUnitName_tr();
            Construct_Description_zh();
            Construct_IntermediateStandardBaseUnitName_zh();
            (*this).setStructTypeID(StructTypeID());
            }
        catch (...) {}
    }
public:
    ~CTypeItemParameter(void)
    {
    }
protected:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Initialize_ID();
            Initialize_Name();
            Initialize_IsStandard();
            Initialize_IsTemporary();
            Initialize_ChangeDateTime();
            Initialize_ChangeName();
            Initialize_UsedInActualConfigurationIDs();
            Initialize_TypeFilterORed0();
            Initialize_TypeFilterORed1();
            Initialize_TypeFilterORed2();
            Initialize_TypeFilterORed3();
            Initialize_TypeFilterORed4();
            Initialize_PointsPhysical2Intermediate();
            Initialize_Error();
            Initialize_Description_de();
            Initialize_IntermediateStandardBaseUnitName_de();
            Initialize_Description_en();
            Initialize_IntermediateStandardBaseUnitName_en();
            Initialize_Description_es();
            Initialize_IntermediateStandardBaseUnitName_es();
            Initialize_Description_fr();
            Initialize_IntermediateStandardBaseUnitName_fr();
            Initialize_Description_ja();
            Initialize_IntermediateStandardBaseUnitName_ja();
            Initialize_Description_ko();
            Initialize_IntermediateStandardBaseUnitName_ko();
            Initialize_Description_nl();
            Initialize_IntermediateStandardBaseUnitName_nl();
            Initialize_Description_pt();
            Initialize_IntermediateStandardBaseUnitName_pt();
            Initialize_Description_ru();
            Initialize_IntermediateStandardBaseUnitName_ru();
            Initialize_Description_tr();
            Initialize_IntermediateStandardBaseUnitName_tr();
            Initialize_Description_zh();
            Initialize_IntermediateStandardBaseUnitName_zh();
        }
        catch (...) {}
    }
    //------------------------------------------------------------------------
    // Item ID (Type: "GInsXmlRpcStdAPI::CGIns_Info_StringValue")
    protected:
        void Construct_ID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ID()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_StringValue InitValue;
                    (*Value())[ItemName_ID()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ID(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ID()))
                {
                    Construct_ID();
                }
                if ((*Value()).hasMember(ItemName_ID()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_StringValue InitValue;
                    (*Value())[ItemName_ID()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ID(const GInsXmlRpcStdAPI::CGIns_Info_StringValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_ID()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_StringValue Get_ID(void) const
        {
            return (*Value())[ItemName_ID()];
        }
        bool Get_ID(GInsXmlRpcStdAPI::CGIns_Info_StringValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ID()]).valid())
                {
                    GetValue = (*Value())[ItemName_ID()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Name (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringValue")
    protected:
        void Construct_Name(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Name()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Name()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Name(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Name()))
                {
                    Construct_Name();
                }
                if ((*Value()).hasMember(ItemName_Name()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Name()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Name(const GInsXmlRpcStdAPI::CGIns_Edit_StringValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_Name()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringValue Get_Name(void) const
        {
            return (*Value())[ItemName_Name()];
        }
        bool Get_Name(GInsXmlRpcStdAPI::CGIns_Edit_StringValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Name()]).valid())
                {
                    GetValue = (*Value())[ItemName_Name()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item IsStandard (Type: "GInsXmlRpcStdAPI::CGIns_Info_StateValue")
    protected:
        void Construct_IsStandard(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IsStandard()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_StateValue InitValue;
                    (*Value())[ItemName_IsStandard()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_IsStandard(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IsStandard()))
                {
                    Construct_IsStandard();
                }
                if ((*Value()).hasMember(ItemName_IsStandard()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_StateValue InitValue;
                    (*Value())[ItemName_IsStandard()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IsStandard(const GInsXmlRpcStdAPI::CGIns_Info_StateValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_IsStandard()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_StateValue Get_IsStandard(void) const
        {
            return (*Value())[ItemName_IsStandard()];
        }
        bool Get_IsStandard(GInsXmlRpcStdAPI::CGIns_Info_StateValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IsStandard()]).valid())
                {
                    GetValue = (*Value())[ItemName_IsStandard()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item IsTemporary (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StateValue")
    protected:
        void Construct_IsTemporary(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IsTemporary()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StateValue InitValue;
                    (*Value())[ItemName_IsTemporary()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_IsTemporary(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IsTemporary()))
                {
                    Construct_IsTemporary();
                }
                if ((*Value()).hasMember(ItemName_IsTemporary()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StateValue InitValue;
                    (*Value())[ItemName_IsTemporary()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IsTemporary(const GInsXmlRpcStdAPI::CGIns_Edit_StateValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_IsTemporary()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StateValue Get_IsTemporary(void) const
        {
            return (*Value())[ItemName_IsTemporary()];
        }
        bool Get_IsTemporary(GInsXmlRpcStdAPI::CGIns_Edit_StateValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IsTemporary()]).valid())
                {
                    GetValue = (*Value())[ItemName_IsTemporary()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ChangeDateTime (Type: "GInsXmlRpcStdAPI::CGIns_Info_DateTimeValue")
    protected:
        void Construct_ChangeDateTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ChangeDateTime()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_DateTimeValue InitValue;
                    (*Value())[ItemName_ChangeDateTime()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ChangeDateTime(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ChangeDateTime()))
                {
                    Construct_ChangeDateTime();
                }
                if ((*Value()).hasMember(ItemName_ChangeDateTime()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_DateTimeValue InitValue;
                    (*Value())[ItemName_ChangeDateTime()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ChangeDateTime(const GInsXmlRpcStdAPI::CGIns_Info_DateTimeValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_ChangeDateTime()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_DateTimeValue Get_ChangeDateTime(void) const
        {
            return (*Value())[ItemName_ChangeDateTime()];
        }
        bool Get_ChangeDateTime(GInsXmlRpcStdAPI::CGIns_Info_DateTimeValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ChangeDateTime()]).valid())
                {
                    GetValue = (*Value())[ItemName_ChangeDateTime()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ChangeName (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringValue")
    protected:
        void Construct_ChangeName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ChangeName()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_ChangeName()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ChangeName(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ChangeName()))
                {
                    Construct_ChangeName();
                }
                if ((*Value()).hasMember(ItemName_ChangeName()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_ChangeName()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ChangeName(const GInsXmlRpcStdAPI::CGIns_Edit_StringValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_ChangeName()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringValue Get_ChangeName(void) const
        {
            return (*Value())[ItemName_ChangeName()];
        }
        bool Get_ChangeName(GInsXmlRpcStdAPI::CGIns_Edit_StringValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ChangeName()]).valid())
                {
                    GetValue = (*Value())[ItemName_ChangeName()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item UsedInActualConfigurationIDs (Type: "GInsXmlRpcStdAPI::CGIns_Info_ElementList")
    protected:
        void Construct_UsedInActualConfigurationIDs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UsedInActualConfigurationIDs()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_ElementList InitValue;
                    (*Value())[ItemName_UsedInActualConfigurationIDs()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_UsedInActualConfigurationIDs(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_UsedInActualConfigurationIDs()))
                {
                    Construct_UsedInActualConfigurationIDs();
                }
                if ((*Value()).hasMember(ItemName_UsedInActualConfigurationIDs()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_ElementList InitValue;
                    (*Value())[ItemName_UsedInActualConfigurationIDs()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_UsedInActualConfigurationIDs(const GInsXmlRpcStdAPI::CGIns_Info_ElementList& SetValue)
        {
            try
            {
                (*Value())[ItemName_UsedInActualConfigurationIDs()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_ElementList Get_UsedInActualConfigurationIDs(void) const
        {
            return (*Value())[ItemName_UsedInActualConfigurationIDs()];
        }
        bool Get_UsedInActualConfigurationIDs(GInsXmlRpcStdAPI::CGIns_Info_ElementList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_UsedInActualConfigurationIDs()]).valid())
                {
                    GetValue = (*Value())[ItemName_UsedInActualConfigurationIDs()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item TypeFilterORed0 (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_TypeFilterORed0(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TypeFilterORed0()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_TypeFilterORed0()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_TypeFilterORed0(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TypeFilterORed0()))
                {
                    Construct_TypeFilterORed0();
                }
                if ((*Value()).hasMember(ItemName_TypeFilterORed0()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_TypeFilterORed0()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TypeFilterORed0(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_TypeFilterORed0()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_TypeFilterORed0(void) const
        {
            return (*Value())[ItemName_TypeFilterORed0()];
        }
        bool Get_TypeFilterORed0(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TypeFilterORed0()]).valid())
                {
                    GetValue = (*Value())[ItemName_TypeFilterORed0()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item TypeFilterORed1 (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_TypeFilterORed1(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TypeFilterORed1()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_TypeFilterORed1()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_TypeFilterORed1(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TypeFilterORed1()))
                {
                    Construct_TypeFilterORed1();
                }
                if ((*Value()).hasMember(ItemName_TypeFilterORed1()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_TypeFilterORed1()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TypeFilterORed1(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_TypeFilterORed1()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_TypeFilterORed1(void) const
        {
            return (*Value())[ItemName_TypeFilterORed1()];
        }
        bool Get_TypeFilterORed1(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TypeFilterORed1()]).valid())
                {
                    GetValue = (*Value())[ItemName_TypeFilterORed1()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item TypeFilterORed2 (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_TypeFilterORed2(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TypeFilterORed2()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_TypeFilterORed2()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_TypeFilterORed2(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TypeFilterORed2()))
                {
                    Construct_TypeFilterORed2();
                }
                if ((*Value()).hasMember(ItemName_TypeFilterORed2()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_TypeFilterORed2()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TypeFilterORed2(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_TypeFilterORed2()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_TypeFilterORed2(void) const
        {
            return (*Value())[ItemName_TypeFilterORed2()];
        }
        bool Get_TypeFilterORed2(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TypeFilterORed2()]).valid())
                {
                    GetValue = (*Value())[ItemName_TypeFilterORed2()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item TypeFilterORed3 (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_TypeFilterORed3(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TypeFilterORed3()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_TypeFilterORed3()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_TypeFilterORed3(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TypeFilterORed3()))
                {
                    Construct_TypeFilterORed3();
                }
                if ((*Value()).hasMember(ItemName_TypeFilterORed3()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_TypeFilterORed3()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TypeFilterORed3(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_TypeFilterORed3()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_TypeFilterORed3(void) const
        {
            return (*Value())[ItemName_TypeFilterORed3()];
        }
        bool Get_TypeFilterORed3(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TypeFilterORed3()]).valid())
                {
                    GetValue = (*Value())[ItemName_TypeFilterORed3()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item TypeFilterORed4 (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_TypeFilterORed4(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TypeFilterORed4()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_TypeFilterORed4()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_TypeFilterORed4(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_TypeFilterORed4()))
                {
                    Construct_TypeFilterORed4();
                }
                if ((*Value()).hasMember(ItemName_TypeFilterORed4()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_TypeFilterORed4()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_TypeFilterORed4(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_TypeFilterORed4()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_TypeFilterORed4(void) const
        {
            return (*Value())[ItemName_TypeFilterORed4()];
        }
        bool Get_TypeFilterORed4(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_TypeFilterORed4()]).valid())
                {
                    GetValue = (*Value())[ItemName_TypeFilterORed4()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item PointsPhysical2Intermediate (Type: "GInsXmlRpcStdAPI::CGIns_Edit_PointList")
    protected:
        void Construct_PointsPhysical2Intermediate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PointsPhysical2Intermediate()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_PointList InitValue;
                    (*Value())[ItemName_PointsPhysical2Intermediate()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_PointsPhysical2Intermediate(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_PointsPhysical2Intermediate()))
                {
                    Construct_PointsPhysical2Intermediate();
                }
                if ((*Value()).hasMember(ItemName_PointsPhysical2Intermediate()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_PointList InitValue;
                    (*Value())[ItemName_PointsPhysical2Intermediate()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_PointsPhysical2Intermediate(const GInsXmlRpcStdAPI::CGIns_Edit_PointList& SetValue)
        {
            try
            {
                (*Value())[ItemName_PointsPhysical2Intermediate()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_PointList Get_PointsPhysical2Intermediate(void) const
        {
            return (*Value())[ItemName_PointsPhysical2Intermediate()];
        }
        bool Get_PointsPhysical2Intermediate(GInsXmlRpcStdAPI::CGIns_Edit_PointList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_PointsPhysical2Intermediate()]).valid())
                {
                    GetValue = (*Value())[ItemName_PointsPhysical2Intermediate()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Error (Type: "GInsXmlRpcStdAPI::CGIns_Info_StringValue")
    protected:
        void Construct_Error(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Error()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_StringValue InitValue;
                    (*Value())[ItemName_Error()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Error(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Error()))
                {
                    Construct_Error();
                }
                if ((*Value()).hasMember(ItemName_Error()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_StringValue InitValue;
                    (*Value())[ItemName_Error()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Error(const GInsXmlRpcStdAPI::CGIns_Info_StringValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_Error()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_StringValue Get_Error(void) const
        {
            return (*Value())[ItemName_Error()];
        }
        bool Get_Error(GInsXmlRpcStdAPI::CGIns_Info_StringValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Error()]).valid())
                {
                    GetValue = (*Value())[ItemName_Error()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Description_de (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringValue")
    protected:
        void Construct_Description_de(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description_de()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Description_de()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Description_de(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description_de()))
                {
                    Construct_Description_de();
                }
                if ((*Value()).hasMember(ItemName_Description_de()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Description_de()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Description_de(const GInsXmlRpcStdAPI::CGIns_Edit_StringValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_Description_de()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringValue Get_Description_de(void) const
        {
            return (*Value())[ItemName_Description_de()];
        }
        bool Get_Description_de(GInsXmlRpcStdAPI::CGIns_Edit_StringValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Description_de()]).valid())
                {
                    GetValue = (*Value())[ItemName_Description_de()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item IntermediateStandardBaseUnitName_de (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify")
    protected:
        void Construct_IntermediateStandardBaseUnitName_de(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_de()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_IntermediateStandardBaseUnitName_de()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_IntermediateStandardBaseUnitName_de(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_de()))
                {
                    Construct_IntermediateStandardBaseUnitName_de();
                }
                if ((*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_de()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_IntermediateStandardBaseUnitName_de()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IntermediateStandardBaseUnitName_de(const GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& SetValue)
        {
            try
            {
                (*Value())[ItemName_IntermediateStandardBaseUnitName_de()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify Get_IntermediateStandardBaseUnitName_de(void) const
        {
            return (*Value())[ItemName_IntermediateStandardBaseUnitName_de()];
        }
        bool Get_IntermediateStandardBaseUnitName_de(GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IntermediateStandardBaseUnitName_de()]).valid())
                {
                    GetValue = (*Value())[ItemName_IntermediateStandardBaseUnitName_de()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Description_en (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringValue")
    protected:
        void Construct_Description_en(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description_en()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Description_en()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Description_en(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description_en()))
                {
                    Construct_Description_en();
                }
                if ((*Value()).hasMember(ItemName_Description_en()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Description_en()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Description_en(const GInsXmlRpcStdAPI::CGIns_Edit_StringValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_Description_en()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringValue Get_Description_en(void) const
        {
            return (*Value())[ItemName_Description_en()];
        }
        bool Get_Description_en(GInsXmlRpcStdAPI::CGIns_Edit_StringValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Description_en()]).valid())
                {
                    GetValue = (*Value())[ItemName_Description_en()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item IntermediateStandardBaseUnitName_en (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify")
    protected:
        void Construct_IntermediateStandardBaseUnitName_en(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_en()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_IntermediateStandardBaseUnitName_en()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_IntermediateStandardBaseUnitName_en(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_en()))
                {
                    Construct_IntermediateStandardBaseUnitName_en();
                }
                if ((*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_en()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_IntermediateStandardBaseUnitName_en()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IntermediateStandardBaseUnitName_en(const GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& SetValue)
        {
            try
            {
                (*Value())[ItemName_IntermediateStandardBaseUnitName_en()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify Get_IntermediateStandardBaseUnitName_en(void) const
        {
            return (*Value())[ItemName_IntermediateStandardBaseUnitName_en()];
        }
        bool Get_IntermediateStandardBaseUnitName_en(GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IntermediateStandardBaseUnitName_en()]).valid())
                {
                    GetValue = (*Value())[ItemName_IntermediateStandardBaseUnitName_en()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Description_es (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringValue")
    protected:
        void Construct_Description_es(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description_es()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Description_es()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Description_es(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description_es()))
                {
                    Construct_Description_es();
                }
                if ((*Value()).hasMember(ItemName_Description_es()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Description_es()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Description_es(const GInsXmlRpcStdAPI::CGIns_Edit_StringValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_Description_es()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringValue Get_Description_es(void) const
        {
            return (*Value())[ItemName_Description_es()];
        }
        bool Get_Description_es(GInsXmlRpcStdAPI::CGIns_Edit_StringValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Description_es()]).valid())
                {
                    GetValue = (*Value())[ItemName_Description_es()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item IntermediateStandardBaseUnitName_es (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify")
    protected:
        void Construct_IntermediateStandardBaseUnitName_es(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_es()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_IntermediateStandardBaseUnitName_es()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_IntermediateStandardBaseUnitName_es(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_es()))
                {
                    Construct_IntermediateStandardBaseUnitName_es();
                }
                if ((*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_es()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_IntermediateStandardBaseUnitName_es()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IntermediateStandardBaseUnitName_es(const GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& SetValue)
        {
            try
            {
                (*Value())[ItemName_IntermediateStandardBaseUnitName_es()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify Get_IntermediateStandardBaseUnitName_es(void) const
        {
            return (*Value())[ItemName_IntermediateStandardBaseUnitName_es()];
        }
        bool Get_IntermediateStandardBaseUnitName_es(GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IntermediateStandardBaseUnitName_es()]).valid())
                {
                    GetValue = (*Value())[ItemName_IntermediateStandardBaseUnitName_es()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Description_fr (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringValue")
    protected:
        void Construct_Description_fr(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description_fr()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Description_fr()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Description_fr(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description_fr()))
                {
                    Construct_Description_fr();
                }
                if ((*Value()).hasMember(ItemName_Description_fr()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Description_fr()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Description_fr(const GInsXmlRpcStdAPI::CGIns_Edit_StringValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_Description_fr()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringValue Get_Description_fr(void) const
        {
            return (*Value())[ItemName_Description_fr()];
        }
        bool Get_Description_fr(GInsXmlRpcStdAPI::CGIns_Edit_StringValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Description_fr()]).valid())
                {
                    GetValue = (*Value())[ItemName_Description_fr()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item IntermediateStandardBaseUnitName_fr (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify")
    protected:
        void Construct_IntermediateStandardBaseUnitName_fr(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_fr()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_IntermediateStandardBaseUnitName_fr()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_IntermediateStandardBaseUnitName_fr(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_fr()))
                {
                    Construct_IntermediateStandardBaseUnitName_fr();
                }
                if ((*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_fr()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_IntermediateStandardBaseUnitName_fr()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IntermediateStandardBaseUnitName_fr(const GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& SetValue)
        {
            try
            {
                (*Value())[ItemName_IntermediateStandardBaseUnitName_fr()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify Get_IntermediateStandardBaseUnitName_fr(void) const
        {
            return (*Value())[ItemName_IntermediateStandardBaseUnitName_fr()];
        }
        bool Get_IntermediateStandardBaseUnitName_fr(GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IntermediateStandardBaseUnitName_fr()]).valid())
                {
                    GetValue = (*Value())[ItemName_IntermediateStandardBaseUnitName_fr()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Description_ja (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringValue")
    protected:
        void Construct_Description_ja(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description_ja()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Description_ja()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Description_ja(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description_ja()))
                {
                    Construct_Description_ja();
                }
                if ((*Value()).hasMember(ItemName_Description_ja()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Description_ja()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Description_ja(const GInsXmlRpcStdAPI::CGIns_Edit_StringValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_Description_ja()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringValue Get_Description_ja(void) const
        {
            return (*Value())[ItemName_Description_ja()];
        }
        bool Get_Description_ja(GInsXmlRpcStdAPI::CGIns_Edit_StringValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Description_ja()]).valid())
                {
                    GetValue = (*Value())[ItemName_Description_ja()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item IntermediateStandardBaseUnitName_ja (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify")
    protected:
        void Construct_IntermediateStandardBaseUnitName_ja(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_ja()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_IntermediateStandardBaseUnitName_ja()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_IntermediateStandardBaseUnitName_ja(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_ja()))
                {
                    Construct_IntermediateStandardBaseUnitName_ja();
                }
                if ((*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_ja()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_IntermediateStandardBaseUnitName_ja()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IntermediateStandardBaseUnitName_ja(const GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& SetValue)
        {
            try
            {
                (*Value())[ItemName_IntermediateStandardBaseUnitName_ja()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify Get_IntermediateStandardBaseUnitName_ja(void) const
        {
            return (*Value())[ItemName_IntermediateStandardBaseUnitName_ja()];
        }
        bool Get_IntermediateStandardBaseUnitName_ja(GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IntermediateStandardBaseUnitName_ja()]).valid())
                {
                    GetValue = (*Value())[ItemName_IntermediateStandardBaseUnitName_ja()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Description_ko (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringValue")
    protected:
        void Construct_Description_ko(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description_ko()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Description_ko()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Description_ko(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description_ko()))
                {
                    Construct_Description_ko();
                }
                if ((*Value()).hasMember(ItemName_Description_ko()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Description_ko()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Description_ko(const GInsXmlRpcStdAPI::CGIns_Edit_StringValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_Description_ko()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringValue Get_Description_ko(void) const
        {
            return (*Value())[ItemName_Description_ko()];
        }
        bool Get_Description_ko(GInsXmlRpcStdAPI::CGIns_Edit_StringValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Description_ko()]).valid())
                {
                    GetValue = (*Value())[ItemName_Description_ko()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item IntermediateStandardBaseUnitName_ko (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify")
    protected:
        void Construct_IntermediateStandardBaseUnitName_ko(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_ko()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_IntermediateStandardBaseUnitName_ko()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_IntermediateStandardBaseUnitName_ko(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_ko()))
                {
                    Construct_IntermediateStandardBaseUnitName_ko();
                }
                if ((*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_ko()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_IntermediateStandardBaseUnitName_ko()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IntermediateStandardBaseUnitName_ko(const GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& SetValue)
        {
            try
            {
                (*Value())[ItemName_IntermediateStandardBaseUnitName_ko()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify Get_IntermediateStandardBaseUnitName_ko(void) const
        {
            return (*Value())[ItemName_IntermediateStandardBaseUnitName_ko()];
        }
        bool Get_IntermediateStandardBaseUnitName_ko(GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IntermediateStandardBaseUnitName_ko()]).valid())
                {
                    GetValue = (*Value())[ItemName_IntermediateStandardBaseUnitName_ko()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Description_nl (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringValue")
    protected:
        void Construct_Description_nl(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description_nl()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Description_nl()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Description_nl(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description_nl()))
                {
                    Construct_Description_nl();
                }
                if ((*Value()).hasMember(ItemName_Description_nl()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Description_nl()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Description_nl(const GInsXmlRpcStdAPI::CGIns_Edit_StringValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_Description_nl()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringValue Get_Description_nl(void) const
        {
            return (*Value())[ItemName_Description_nl()];
        }
        bool Get_Description_nl(GInsXmlRpcStdAPI::CGIns_Edit_StringValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Description_nl()]).valid())
                {
                    GetValue = (*Value())[ItemName_Description_nl()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item IntermediateStandardBaseUnitName_nl (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify")
    protected:
        void Construct_IntermediateStandardBaseUnitName_nl(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_nl()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_IntermediateStandardBaseUnitName_nl()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_IntermediateStandardBaseUnitName_nl(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_nl()))
                {
                    Construct_IntermediateStandardBaseUnitName_nl();
                }
                if ((*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_nl()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_IntermediateStandardBaseUnitName_nl()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IntermediateStandardBaseUnitName_nl(const GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& SetValue)
        {
            try
            {
                (*Value())[ItemName_IntermediateStandardBaseUnitName_nl()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify Get_IntermediateStandardBaseUnitName_nl(void) const
        {
            return (*Value())[ItemName_IntermediateStandardBaseUnitName_nl()];
        }
        bool Get_IntermediateStandardBaseUnitName_nl(GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IntermediateStandardBaseUnitName_nl()]).valid())
                {
                    GetValue = (*Value())[ItemName_IntermediateStandardBaseUnitName_nl()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Description_pt (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringValue")
    protected:
        void Construct_Description_pt(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description_pt()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Description_pt()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Description_pt(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description_pt()))
                {
                    Construct_Description_pt();
                }
                if ((*Value()).hasMember(ItemName_Description_pt()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Description_pt()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Description_pt(const GInsXmlRpcStdAPI::CGIns_Edit_StringValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_Description_pt()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringValue Get_Description_pt(void) const
        {
            return (*Value())[ItemName_Description_pt()];
        }
        bool Get_Description_pt(GInsXmlRpcStdAPI::CGIns_Edit_StringValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Description_pt()]).valid())
                {
                    GetValue = (*Value())[ItemName_Description_pt()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item IntermediateStandardBaseUnitName_pt (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify")
    protected:
        void Construct_IntermediateStandardBaseUnitName_pt(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_pt()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_IntermediateStandardBaseUnitName_pt()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_IntermediateStandardBaseUnitName_pt(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_pt()))
                {
                    Construct_IntermediateStandardBaseUnitName_pt();
                }
                if ((*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_pt()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_IntermediateStandardBaseUnitName_pt()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IntermediateStandardBaseUnitName_pt(const GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& SetValue)
        {
            try
            {
                (*Value())[ItemName_IntermediateStandardBaseUnitName_pt()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify Get_IntermediateStandardBaseUnitName_pt(void) const
        {
            return (*Value())[ItemName_IntermediateStandardBaseUnitName_pt()];
        }
        bool Get_IntermediateStandardBaseUnitName_pt(GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IntermediateStandardBaseUnitName_pt()]).valid())
                {
                    GetValue = (*Value())[ItemName_IntermediateStandardBaseUnitName_pt()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Description_ru (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringValue")
    protected:
        void Construct_Description_ru(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description_ru()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Description_ru()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Description_ru(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description_ru()))
                {
                    Construct_Description_ru();
                }
                if ((*Value()).hasMember(ItemName_Description_ru()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Description_ru()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Description_ru(const GInsXmlRpcStdAPI::CGIns_Edit_StringValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_Description_ru()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringValue Get_Description_ru(void) const
        {
            return (*Value())[ItemName_Description_ru()];
        }
        bool Get_Description_ru(GInsXmlRpcStdAPI::CGIns_Edit_StringValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Description_ru()]).valid())
                {
                    GetValue = (*Value())[ItemName_Description_ru()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item IntermediateStandardBaseUnitName_ru (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify")
    protected:
        void Construct_IntermediateStandardBaseUnitName_ru(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_ru()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_IntermediateStandardBaseUnitName_ru()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_IntermediateStandardBaseUnitName_ru(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_ru()))
                {
                    Construct_IntermediateStandardBaseUnitName_ru();
                }
                if ((*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_ru()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_IntermediateStandardBaseUnitName_ru()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IntermediateStandardBaseUnitName_ru(const GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& SetValue)
        {
            try
            {
                (*Value())[ItemName_IntermediateStandardBaseUnitName_ru()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify Get_IntermediateStandardBaseUnitName_ru(void) const
        {
            return (*Value())[ItemName_IntermediateStandardBaseUnitName_ru()];
        }
        bool Get_IntermediateStandardBaseUnitName_ru(GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IntermediateStandardBaseUnitName_ru()]).valid())
                {
                    GetValue = (*Value())[ItemName_IntermediateStandardBaseUnitName_ru()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Description_tr (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringValue")
    protected:
        void Construct_Description_tr(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description_tr()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Description_tr()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Description_tr(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description_tr()))
                {
                    Construct_Description_tr();
                }
                if ((*Value()).hasMember(ItemName_Description_tr()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Description_tr()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Description_tr(const GInsXmlRpcStdAPI::CGIns_Edit_StringValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_Description_tr()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringValue Get_Description_tr(void) const
        {
            return (*Value())[ItemName_Description_tr()];
        }
        bool Get_Description_tr(GInsXmlRpcStdAPI::CGIns_Edit_StringValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Description_tr()]).valid())
                {
                    GetValue = (*Value())[ItemName_Description_tr()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item IntermediateStandardBaseUnitName_tr (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify")
    protected:
        void Construct_IntermediateStandardBaseUnitName_tr(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_tr()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_IntermediateStandardBaseUnitName_tr()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_IntermediateStandardBaseUnitName_tr(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_tr()))
                {
                    Construct_IntermediateStandardBaseUnitName_tr();
                }
                if ((*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_tr()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_IntermediateStandardBaseUnitName_tr()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IntermediateStandardBaseUnitName_tr(const GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& SetValue)
        {
            try
            {
                (*Value())[ItemName_IntermediateStandardBaseUnitName_tr()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify Get_IntermediateStandardBaseUnitName_tr(void) const
        {
            return (*Value())[ItemName_IntermediateStandardBaseUnitName_tr()];
        }
        bool Get_IntermediateStandardBaseUnitName_tr(GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IntermediateStandardBaseUnitName_tr()]).valid())
                {
                    GetValue = (*Value())[ItemName_IntermediateStandardBaseUnitName_tr()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Description_zh (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringValue")
    protected:
        void Construct_Description_zh(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description_zh()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Description_zh()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Description_zh(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Description_zh()))
                {
                    Construct_Description_zh();
                }
                if ((*Value()).hasMember(ItemName_Description_zh()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringValue InitValue;
                    (*Value())[ItemName_Description_zh()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Description_zh(const GInsXmlRpcStdAPI::CGIns_Edit_StringValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_Description_zh()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringValue Get_Description_zh(void) const
        {
            return (*Value())[ItemName_Description_zh()];
        }
        bool Get_Description_zh(GInsXmlRpcStdAPI::CGIns_Edit_StringValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Description_zh()]).valid())
                {
                    GetValue = (*Value())[ItemName_Description_zh()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item IntermediateStandardBaseUnitName_zh (Type: "GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify")
    protected:
        void Construct_IntermediateStandardBaseUnitName_zh(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_zh()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_IntermediateStandardBaseUnitName_zh()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_IntermediateStandardBaseUnitName_zh(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_zh()))
                {
                    Construct_IntermediateStandardBaseUnitName_zh();
                }
                if ((*Value()).hasMember(ItemName_IntermediateStandardBaseUnitName_zh()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify InitValue;
                    (*Value())[ItemName_IntermediateStandardBaseUnitName_zh()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_IntermediateStandardBaseUnitName_zh(const GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& SetValue)
        {
            try
            {
                (*Value())[ItemName_IntermediateStandardBaseUnitName_zh()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify Get_IntermediateStandardBaseUnitName_zh(void) const
        {
            return (*Value())[ItemName_IntermediateStandardBaseUnitName_zh()];
        }
        bool Get_IntermediateStandardBaseUnitName_zh(GInsXmlRpcStdAPI::CGIns_Edit_StringSelectionListWithManualModify& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_IntermediateStandardBaseUnitName_zh()]).valid())
                {
                    GetValue = (*Value())[ItemName_IntermediateStandardBaseUnitName_zh()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CTypeItemParameter


//------------------------------------------------------------------------
// giconfig_SensorActorDBAPI::Create::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_CREATE)
namespace Create
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("SensorActorDBAPI.Create");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
        }
        catch (...) {}
    }
public:
    CParams(const CParams& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CParams(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
        }
        catch (...) {}
    }
public:
    ~CParams(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try {
            (*Value()).clear();
            Construct_MethodID();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SensorActorDBAPI::Create");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
}; // class CParams
} // namespace Create
#endif //#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_CREATE)


//------------------------------------------------------------------------
// giconfig_SensorActorDBAPI::Remove::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_REMOVE)
namespace Remove
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Items(void)
    {
        static std::string str("Items");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("SensorActorDBAPI.Remove");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Items();
        }
        catch (...) {}
    }
public:
    CParams(const CParams& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CParams(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_Items();
        }
        catch (...) {}
    }
public:
    ~CParams(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_Items();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SensorActorDBAPI::Remove");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item Items (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList")
    protected:
        void Construct_Items(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Items()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList InitValue;
                    (*Value())[ItemName_Items()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Items(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Items()))
                {
                    Construct_Items();
                }
                if ((*Value()).hasMember(ItemName_Items()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList InitValue;
                    (*Value())[ItemName_Items()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Items(const GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Items()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList Get_Items(void) const
        {
            return (*Value())[ItemName_Items()];
        }
        bool Get_Items(GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Items()]).valid())
                {
                    GetValue = (*Value())[ItemName_Items()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace Remove
#endif //#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_REMOVE)


//------------------------------------------------------------------------
// giconfig_SensorActorDBAPI::Copy::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_COPY)
namespace Copy
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Items(void)
    {
        static std::string str("Items");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("SensorActorDBAPI.Copy");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Items();
        }
        catch (...) {}
    }
public:
    CParams(const CParams& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CParams(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_Items();
        }
        catch (...) {}
    }
public:
    ~CParams(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_Items();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SensorActorDBAPI::Copy");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item Items (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList")
    protected:
        void Construct_Items(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Items()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList InitValue;
                    (*Value())[ItemName_Items()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Items(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Items()))
                {
                    Construct_Items();
                }
                if ((*Value()).hasMember(ItemName_Items()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList InitValue;
                    (*Value())[ItemName_Items()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Items(const GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Items()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList Get_Items(void) const
        {
            return (*Value())[ItemName_Items()];
        }
        bool Get_Items(GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Items()]).valid())
                {
                    GetValue = (*Value())[ItemName_Items()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace Copy
#endif //#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_COPY)


//------------------------------------------------------------------------
// giconfig_SensorActorDBAPI::Get::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_GET)
namespace Get
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Items(void)
    {
        static std::string str("Items");
        return str;
    }
public:
    static std::string const& ItemName_WithOptions(void)
    {
        static std::string str("WithOptions");
        return str;
    }
public:
    static std::string const& ItemName_WithImages(void)
    {
        static std::string str("WithImages");
        return str;
    }
public:
    static std::string const& ItemName_WithValueLists(void)
    {
        static std::string str("WithValueLists");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("SensorActorDBAPI.Get");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Items();
            Construct_WithOptions();
            Construct_WithImages();
            Construct_WithValueLists();
        }
        catch (...) {}
    }
public:
    CParams(const CParams& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CParams(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_Items();
            Construct_WithOptions();
            Construct_WithImages();
            Construct_WithValueLists();
        }
        catch (...) {}
    }
public:
    ~CParams(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_Items();
            Initialize_WithOptions();
            Initialize_WithImages();
            Initialize_WithValueLists();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SensorActorDBAPI::Get");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item Items (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList")
    protected:
        void Construct_Items(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Items()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList InitValue;
                    (*Value())[ItemName_Items()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Items(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Items()))
                {
                    Construct_Items();
                }
                if ((*Value()).hasMember(ItemName_Items()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList InitValue;
                    (*Value())[ItemName_Items()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Items(const GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Items()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList Get_Items(void) const
        {
            return (*Value())[ItemName_Items()];
        }
        bool Get_Items(GInsXmlRpcStdAPI::CGIns_Edit_ElementListSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Items()]).valid())
                {
                    GetValue = (*Value())[ItemName_Items()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item WithOptions (Type: "bool")
protected:
    void Construct_WithOptions(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_WithOptions()))
            {
                bool InitValue;
                InitValue = true;
                    (*Value())[ItemName_WithOptions()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_WithOptions(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_WithOptions()))
                {
                    Construct_WithOptions();
                }
                if ((*Value()).hasMember(ItemName_WithOptions()))
                {
                    bool InitValue;
                    InitValue = true;
                    (*Value())[ItemName_WithOptions()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_WithOptions(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_WithOptions()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_WithOptions(void) const
        {
            bool GetValue = (*Value())[ItemName_WithOptions()];
            return (bool)GetValue;
        }
        bool Get_WithOptions(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_WithOptions()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_WithOptions()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item WithImages (Type: "bool")
protected:
    void Construct_WithImages(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_WithImages()))
            {
                bool InitValue;
                InitValue = true;
                    (*Value())[ItemName_WithImages()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_WithImages(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_WithImages()))
                {
                    Construct_WithImages();
                }
                if ((*Value()).hasMember(ItemName_WithImages()))
                {
                    bool InitValue;
                    InitValue = true;
                    (*Value())[ItemName_WithImages()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_WithImages(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_WithImages()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_WithImages(void) const
        {
            bool GetValue = (*Value())[ItemName_WithImages()];
            return (bool)GetValue;
        }
        bool Get_WithImages(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_WithImages()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_WithImages()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
//------------------------------------------------------------------------
// Item WithValueLists (Type: "bool")
protected:
    void Construct_WithValueLists(void)
    {
        try
        {
            if (!(*Value()).hasMember(ItemName_WithValueLists()))
            {
                bool InitValue;
                InitValue = true;
                    (*Value())[ItemName_WithValueLists()] = (bool)InitValue;
            }
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
    public:
        bool Initialize_WithValueLists(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_WithValueLists()))
                {
                    Construct_WithValueLists();
                }
                if ((*Value()).hasMember(ItemName_WithValueLists()))
                {
                    bool InitValue;
                    InitValue = true;
                    (*Value())[ItemName_WithValueLists()] = (bool)InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_WithValueLists(bool SetValue)
        {
            try
            {
                (*Value())[ItemName_WithValueLists()] = (bool)SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Get_WithValueLists(void) const
        {
            bool GetValue = (*Value())[ItemName_WithValueLists()];
            return (bool)GetValue;
        }
        bool Get_WithValueLists(bool& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_WithValueLists()]).valid())
                {
                    GetValue = (bool)((bool)((*Value())[ItemName_WithValueLists()]));
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace Get
#endif //#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_GET)


//------------------------------------------------------------------------
// giconfig_SensorActorDBAPI::Set::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_SET)
namespace Set
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Item(void)
    {
        static std::string str("Item");
        return str;
    }
public:
    static std::string const& ItemName_Parameter(void)
    {
        static std::string str("Parameter");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("SensorActorDBAPI.Set");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Item();
            Construct_Parameter();
        }
        catch (...) {}
    }
public:
    CParams(const CParams& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CParams(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_Item();
            Construct_Parameter();
        }
        catch (...) {}
    }
public:
    ~CParams(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_Item();
            Initialize_Parameter();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SensorActorDBAPI::Set");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item Item (Type: "GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList")
    protected:
        void Construct_Item(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Item()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Item()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Item(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Item()))
                {
                    Construct_Item();
                }
                if ((*Value()).hasMember(ItemName_Item()))
                {
                    GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList InitValue;
                    (*Value())[ItemName_Item()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Item(const GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& SetValue)
        {
            try
            {
                (*Value())[ItemName_Item()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList Get_Item(void) const
        {
            return (*Value())[ItemName_Item()];
        }
        bool Get_Item(GInsXmlRpcStdAPI::CGIns_Edit_ElementSelectionList& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Item()]).valid())
                {
                    GetValue = (*Value())[ItemName_Item()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Parameter (Type: "CTypeItemParameter")
    protected:
        void Construct_Parameter(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Parameter()))
                {
                    CTypeItemParameter InitValue;
                    (*Value())[ItemName_Parameter()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_Parameter(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Parameter()))
                {
                    Construct_Parameter();
                }
                if ((*Value()).hasMember(ItemName_Parameter()))
                {
                    CTypeItemParameter InitValue;
                    (*Value())[ItemName_Parameter()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Parameter(const CTypeItemParameter& SetValue)
        {
            try
            {
                (*Value())[ItemName_Parameter()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CTypeItemParameter Get_Parameter(void) const
        {
            return (*Value())[ItemName_Parameter()];
        }
        bool Get_Parameter(CTypeItemParameter& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_Parameter()]).valid())
                {
                    GetValue = (*Value())[ItemName_Parameter()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CParams
} // namespace Set
#endif //#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_SET)


//------------------------------------------------------------------------
// giconfig_SensorActorDBAPI::GetInfo::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_GETINFO)
namespace GetInfo
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("SensorActorDBAPI.GetInfo");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
        }
        catch (...) {}
    }
public:
    CParams(const CParams& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CParams(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
        }
        catch (...) {}
    }
public:
    ~CParams(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try {
            (*Value()).clear();
            Construct_MethodID();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SensorActorDBAPI::GetInfo");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
}; // class CParams
} // namespace GetInfo
#endif //#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_GETINFO)


//------------------------------------------------------------------------
// giconfig_SensorActorDBAPI::Load::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_LOAD)
namespace Load
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("SensorActorDBAPI.Load");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
        }
        catch (...) {}
    }
public:
    CParams(const CParams& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CParams(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
        }
        catch (...) {}
    }
public:
    ~CParams(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try {
            (*Value()).clear();
            Construct_MethodID();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SensorActorDBAPI::Load");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
}; // class CParams
} // namespace Load
#endif //#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_LOAD)


//------------------------------------------------------------------------
// giconfig_SensorActorDBAPI::Save::CParams
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_SAVE)
namespace Save
{
class CParams : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string strName("MethodID");
        return strName;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("SensorActorDBAPI.Save");
        return str;
    }
public:
    CParams(void)
    {
        try
        {
            Construct_MethodID();
        }
        catch (...) {}
    }
public:
    CParams(const CParams& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CParams(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
        }
        catch (...) {}
    }
public:
    ~CParams(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try {
            (*Value()).clear();
            Construct_MethodID();
        }
        catch (...) {
        }
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SensorActorDBAPI::Save");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
}; // class CParams
} // namespace Save
#endif //#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_SAVE)


//------------------------------------------------------------------------
// giconfig_SensorActorDBAPI::Create::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_CREATE)
namespace Create
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_HandledItem(void)
    {
        static std::string str("HandledItem");
        return str;
    }
public:
    static std::string const& ItemName_ReturnState(void)
    {
        static std::string str("ReturnState");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("SensorActorDBAPI.Create");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_HandledItem();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    CResults(const CResults& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CResults(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_HandledItem();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    ~CResults(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_HandledItem();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SensorActorDBAPI::Create");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item HandledItem (Type: "GInsXmlRpcStdAPI::CGIns_Base_ElementValue")
    protected:
        void Construct_HandledItem(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_HandledItem()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_HandledItem()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_HandledItem(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_HandledItem()))
                {
                    Construct_HandledItem();
                }
                if ((*Value()).hasMember(ItemName_HandledItem()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_HandledItem()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_HandledItem(const GInsXmlRpcStdAPI::CGIns_Base_ElementValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_HandledItem()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Base_ElementValue Get_HandledItem(void) const
        {
            return (*Value())[ItemName_HandledItem()];
        }
        bool Get_HandledItem(GInsXmlRpcStdAPI::CGIns_Base_ElementValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_HandledItem()]).valid())
                {
                    GetValue = (*Value())[ItemName_HandledItem()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ReturnState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    Construct_ReturnState();
                }
                if ((*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReturnState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_ReturnState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_ReturnState(void) const
        {
            return (*Value())[ItemName_ReturnState()];
        }
        bool Get_ReturnState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReturnState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ReturnState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace Create
#endif //#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_CREATE)


//------------------------------------------------------------------------
// giconfig_SensorActorDBAPI::Remove::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_REMOVE)
namespace Remove
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_HandledItems(void)
    {
        static std::string str("HandledItems");
        return str;
    }
public:
    static std::string const& ItemName_ReturnState(void)
    {
        static std::string str("ReturnState");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("SensorActorDBAPI.Remove");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_HandledItems();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    CResults(const CResults& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CResults(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_HandledItems();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    ~CResults(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_HandledItems();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SensorActorDBAPI::Remove");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item HandledItems (Type: "GInsXmlRpcStdAPI::CGIns_Base_ElementValue[0]")
    protected:
        void Construct_HandledItems(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_HandledItems()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_HandledItems()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_HandledItems(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_HandledItems()))
                {
                    Construct_HandledItems();
                }
                if ((*Value()).hasMember(ItemName_HandledItems()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_HandledItems()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_HandledItems(int NewSize)
        {
            try
            {
                GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                (*Value())[ItemName_HandledItems()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_HandledItems(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_HandledItems()))
                {
                    return (*Value())[ItemName_HandledItems()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_HandledItems(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_HandledItems()))
                {
                    (*Value())[ItemName_HandledItems()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_HandledItems(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Base_ElementValue SetValue)
        {
            try
            {
                (*Value())[ItemName_HandledItems()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_HandledItems(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_HandledItems()))
                {
                    (*Value())[ItemName_HandledItems()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_HandledItems(int ArrayIndex, const GInsXmlRpcStdAPI::CGIns_Base_ElementValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_HandledItems()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_HandledItems()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Base_ElementValue Get_HandledItems(int ArrayIndex) const
        {
            return (*Value())[ItemName_HandledItems()][ArrayIndex];
        }
        bool Get_HandledItems(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Base_ElementValue& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_HandledItems()))
                {
                    if (((*Value())[ItemName_HandledItems()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_HandledItems()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ReturnState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    Construct_ReturnState();
                }
                if ((*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReturnState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_ReturnState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_ReturnState(void) const
        {
            return (*Value())[ItemName_ReturnState()];
        }
        bool Get_ReturnState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReturnState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ReturnState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace Remove
#endif //#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_REMOVE)


//------------------------------------------------------------------------
// giconfig_SensorActorDBAPI::Copy::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_COPY)
namespace Copy
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_HandledItems(void)
    {
        static std::string str("HandledItems");
        return str;
    }
public:
    static std::string const& ItemName_ReturnState(void)
    {
        static std::string str("ReturnState");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("SensorActorDBAPI.Copy");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_HandledItems();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    CResults(const CResults& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CResults(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_HandledItems();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    ~CResults(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_HandledItems();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SensorActorDBAPI::Copy");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item HandledItems (Type: "GInsXmlRpcStdAPI::CGIns_Base_ElementValue[0]")
    protected:
        void Construct_HandledItems(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_HandledItems()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_HandledItems()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_HandledItems(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_HandledItems()))
                {
                    Construct_HandledItems();
                }
                if ((*Value()).hasMember(ItemName_HandledItems()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_HandledItems()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_HandledItems(int NewSize)
        {
            try
            {
                GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                (*Value())[ItemName_HandledItems()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_HandledItems(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_HandledItems()))
                {
                    return (*Value())[ItemName_HandledItems()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_HandledItems(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_HandledItems()))
                {
                    (*Value())[ItemName_HandledItems()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_HandledItems(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Base_ElementValue SetValue)
        {
            try
            {
                (*Value())[ItemName_HandledItems()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_HandledItems(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_HandledItems()))
                {
                    (*Value())[ItemName_HandledItems()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_HandledItems(int ArrayIndex, const GInsXmlRpcStdAPI::CGIns_Base_ElementValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_HandledItems()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_HandledItems()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Base_ElementValue Get_HandledItems(int ArrayIndex) const
        {
            return (*Value())[ItemName_HandledItems()][ArrayIndex];
        }
        bool Get_HandledItems(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Base_ElementValue& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_HandledItems()))
                {
                    if (((*Value())[ItemName_HandledItems()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_HandledItems()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ReturnState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    Construct_ReturnState();
                }
                if ((*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReturnState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_ReturnState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_ReturnState(void) const
        {
            return (*Value())[ItemName_ReturnState()];
        }
        bool Get_ReturnState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReturnState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ReturnState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace Copy
#endif //#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_COPY)


//------------------------------------------------------------------------
// giconfig_SensorActorDBAPI::Get::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_GET)
namespace Get
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Parameters(void)
    {
        static std::string str("Parameters");
        return str;
    }
public:
    static std::string const& ItemName_HandledItems(void)
    {
        static std::string str("HandledItems");
        return str;
    }
public:
    static std::string const& ItemName_ReturnState(void)
    {
        static std::string str("ReturnState");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("SensorActorDBAPI.Get");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Parameters();
            Construct_HandledItems();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    CResults(const CResults& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CResults(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_Parameters();
            Construct_HandledItems();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    ~CResults(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_Parameters();
            Initialize_HandledItems();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SensorActorDBAPI::Get");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item Parameters (Type: "CTypeItemParameter[0]")
    protected:
        void Construct_Parameters(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Parameters()))
                {
                    CTypeItemParameter InitValue;
                    (*Value())[ItemName_Parameters()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Parameters(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Parameters()))
                {
                    Construct_Parameters();
                }
                if ((*Value()).hasMember(ItemName_Parameters()))
                {
                    CTypeItemParameter InitValue;
                    (*Value())[ItemName_Parameters()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Parameters(int NewSize)
        {
            try
            {
                CTypeItemParameter InitValue;
                (*Value())[ItemName_Parameters()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Parameters(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Parameters()))
                {
                    return (*Value())[ItemName_Parameters()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Parameters(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Parameters()))
                {
                    (*Value())[ItemName_Parameters()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Parameters(int ArrayIndex, CTypeItemParameter SetValue)
        {
            try
            {
                (*Value())[ItemName_Parameters()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Parameters(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Parameters()))
                {
                    (*Value())[ItemName_Parameters()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Parameters(int ArrayIndex, const CTypeItemParameter& SetValue)
        {
            try
            {
                (*Value())[ItemName_Parameters()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Parameters()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        CTypeItemParameter Get_Parameters(int ArrayIndex) const
        {
            return (*Value())[ItemName_Parameters()][ArrayIndex];
        }
        bool Get_Parameters(int ArrayIndex, CTypeItemParameter& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Parameters()))
                {
                    if (((*Value())[ItemName_Parameters()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Parameters()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item HandledItems (Type: "GInsXmlRpcStdAPI::CGIns_Base_ElementValue[0]")
    protected:
        void Construct_HandledItems(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_HandledItems()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_HandledItems()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_HandledItems(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_HandledItems()))
                {
                    Construct_HandledItems();
                }
                if ((*Value()).hasMember(ItemName_HandledItems()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_HandledItems()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_HandledItems(int NewSize)
        {
            try
            {
                GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                (*Value())[ItemName_HandledItems()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_HandledItems(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_HandledItems()))
                {
                    return (*Value())[ItemName_HandledItems()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_HandledItems(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_HandledItems()))
                {
                    (*Value())[ItemName_HandledItems()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_HandledItems(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Base_ElementValue SetValue)
        {
            try
            {
                (*Value())[ItemName_HandledItems()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_HandledItems(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_HandledItems()))
                {
                    (*Value())[ItemName_HandledItems()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_HandledItems(int ArrayIndex, const GInsXmlRpcStdAPI::CGIns_Base_ElementValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_HandledItems()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_HandledItems()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Base_ElementValue Get_HandledItems(int ArrayIndex) const
        {
            return (*Value())[ItemName_HandledItems()][ArrayIndex];
        }
        bool Get_HandledItems(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Base_ElementValue& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_HandledItems()))
                {
                    if (((*Value())[ItemName_HandledItems()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_HandledItems()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ReturnState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    Construct_ReturnState();
                }
                if ((*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReturnState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_ReturnState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_ReturnState(void) const
        {
            return (*Value())[ItemName_ReturnState()];
        }
        bool Get_ReturnState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReturnState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ReturnState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace Get
#endif //#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_GET)


//------------------------------------------------------------------------
// giconfig_SensorActorDBAPI::Set::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_SET)
namespace Set
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_HandledItem(void)
    {
        static std::string str("HandledItem");
        return str;
    }
public:
    static std::string const& ItemName_ReturnState(void)
    {
        static std::string str("ReturnState");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("SensorActorDBAPI.Set");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_HandledItem();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    CResults(const CResults& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CResults(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_HandledItem();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    ~CResults(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_HandledItem();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SensorActorDBAPI::Set");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item HandledItem (Type: "GInsXmlRpcStdAPI::CGIns_Base_ElementValue")
    protected:
        void Construct_HandledItem(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_HandledItem()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_HandledItem()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_HandledItem(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_HandledItem()))
                {
                    Construct_HandledItem();
                }
                if ((*Value()).hasMember(ItemName_HandledItem()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_HandledItem()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_HandledItem(const GInsXmlRpcStdAPI::CGIns_Base_ElementValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_HandledItem()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Base_ElementValue Get_HandledItem(void) const
        {
            return (*Value())[ItemName_HandledItem()];
        }
        bool Get_HandledItem(GInsXmlRpcStdAPI::CGIns_Base_ElementValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_HandledItem()]).valid())
                {
                    GetValue = (*Value())[ItemName_HandledItem()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ReturnState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    Construct_ReturnState();
                }
                if ((*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReturnState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_ReturnState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_ReturnState(void) const
        {
            return (*Value())[ItemName_ReturnState()];
        }
        bool Get_ReturnState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReturnState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ReturnState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace Set
#endif //#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_SET)


//------------------------------------------------------------------------
// giconfig_SensorActorDBAPI::GetInfo::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_GETINFO)
namespace GetInfo
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_Items(void)
    {
        static std::string str("Items");
        return str;
    }
public:
    static std::string const& ItemName_Errors(void)
    {
        static std::string str("Errors");
        return str;
    }
public:
    static std::string const& ItemName_ChangedWithRespectToStorage(void)
    {
        static std::string str("ChangedWithRespectToStorage");
        return str;
    }
public:
    static std::string const& ItemName_ReturnState(void)
    {
        static std::string str("ReturnState");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("SensorActorDBAPI.GetInfo");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_Items();
            Construct_Errors();
            Construct_ChangedWithRespectToStorage();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    CResults(const CResults& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CResults(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_Items();
            Construct_Errors();
            Construct_ChangedWithRespectToStorage();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    ~CResults(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_Items();
            Initialize_Errors();
            Initialize_ChangedWithRespectToStorage();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SensorActorDBAPI::GetInfo");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item Items (Type: "GInsXmlRpcStdAPI::CGIns_Base_ElementValue[0]")
    protected:
        void Construct_Items(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Items()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_Items()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Items(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Items()))
                {
                    Construct_Items();
                }
                if ((*Value()).hasMember(ItemName_Items()))
                {
                    GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                    (*Value())[ItemName_Items()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Items(int NewSize)
        {
            try
            {
                GInsXmlRpcStdAPI::CGIns_Base_ElementValue InitValue;
                (*Value())[ItemName_Items()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Items(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Items()))
                {
                    return (*Value())[ItemName_Items()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Items(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Items()))
                {
                    (*Value())[ItemName_Items()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Items(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Base_ElementValue SetValue)
        {
            try
            {
                (*Value())[ItemName_Items()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Items(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Items()))
                {
                    (*Value())[ItemName_Items()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Items(int ArrayIndex, const GInsXmlRpcStdAPI::CGIns_Base_ElementValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_Items()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Items()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Base_ElementValue Get_Items(int ArrayIndex) const
        {
            return (*Value())[ItemName_Items()][ArrayIndex];
        }
        bool Get_Items(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Base_ElementValue& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Items()))
                {
                    if (((*Value())[ItemName_Items()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Items()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item Errors (Type: "GInsXmlRpcStdAPI::CGIns_Info_StringValue[0]")
    protected:
        void Construct_Errors(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Errors()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_StringValue InitValue;
                    (*Value())[ItemName_Errors()].setArraySizeAndInit(0,InitValue);
                }
            }
            catch (...) 
            {
                (*this).invalidate();
            }
    }
    public:
        bool Initialize_Errors(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_Errors()))
                {
                    Construct_Errors();
                }
                if ((*Value()).hasMember(ItemName_Errors()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_StringValue InitValue;
                    (*Value())[ItemName_Errors()].setArraySizeAndInit(0,InitValue);
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool SetSize_Errors(int NewSize)
        {
            try
            {
                GInsXmlRpcStdAPI::CGIns_Info_StringValue InitValue;
                (*Value())[ItemName_Errors()].setArraySizeAndInit(NewSize,InitValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        int GetSize_Errors(void) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Errors()))
                {
                    return (*Value())[ItemName_Errors()].size();
                }
            }
            catch (...) {}
            return 0;
        }
        void Clear_Errors(void)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Errors()))
                {
                    (*Value())[ItemName_Errors()].setArraySize(-1);
                }
            }
            catch (...) {}
        }
        bool Insert_Errors(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Info_StringValue SetValue)
        {
            try
            {
                (*Value())[ItemName_Errors()].insertArrayValue(ArrayIndex,SetValue);
                return true;
            }
            catch (...) {}
            return false;
        }
        bool Delete_Errors(int ArrayIndex)
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Errors()))
                {
                    (*Value())[ItemName_Errors()].deleteArrayValue(ArrayIndex);
                }
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_Errors(int ArrayIndex, const GInsXmlRpcStdAPI::CGIns_Info_StringValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_Errors()].checkArraySizeOrExpand(ArrayIndex + 1);
                (*Value())[ItemName_Errors()][ArrayIndex] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_StringValue Get_Errors(int ArrayIndex) const
        {
            return (*Value())[ItemName_Errors()][ArrayIndex];
        }
        bool Get_Errors(int ArrayIndex, GInsXmlRpcStdAPI::CGIns_Info_StringValue& GetValue) const
        {
            try
            {
                if ((*Value()).hasMember(ItemName_Errors()))
                {
                    if (((*Value())[ItemName_Errors()][ArrayIndex]).valid())
                    {
                        GetValue = (*Value())[ItemName_Errors()][ArrayIndex];
                        return true;
                    }
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ChangedWithRespectToStorage (Type: "GInsXmlRpcStdAPI::CGIns_Info_StateValue")
    protected:
        void Construct_ChangedWithRespectToStorage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ChangedWithRespectToStorage()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_StateValue InitValue;
                    (*Value())[ItemName_ChangedWithRespectToStorage()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ChangedWithRespectToStorage(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ChangedWithRespectToStorage()))
                {
                    Construct_ChangedWithRespectToStorage();
                }
                if ((*Value()).hasMember(ItemName_ChangedWithRespectToStorage()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_StateValue InitValue;
                    (*Value())[ItemName_ChangedWithRespectToStorage()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ChangedWithRespectToStorage(const GInsXmlRpcStdAPI::CGIns_Info_StateValue& SetValue)
        {
            try
            {
                (*Value())[ItemName_ChangedWithRespectToStorage()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_StateValue Get_ChangedWithRespectToStorage(void) const
        {
            return (*Value())[ItemName_ChangedWithRespectToStorage()];
        }
        bool Get_ChangedWithRespectToStorage(GInsXmlRpcStdAPI::CGIns_Info_StateValue& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ChangedWithRespectToStorage()]).valid())
                {
                    GetValue = (*Value())[ItemName_ChangedWithRespectToStorage()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    //------------------------------------------------------------------------
    // Item ReturnState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    Construct_ReturnState();
                }
                if ((*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReturnState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_ReturnState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_ReturnState(void) const
        {
            return (*Value())[ItemName_ReturnState()];
        }
        bool Get_ReturnState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReturnState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ReturnState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace GetInfo
#endif //#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_GETINFO)


//------------------------------------------------------------------------
// giconfig_SensorActorDBAPI::Load::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_LOAD)
namespace Load
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ReturnState(void)
    {
        static std::string str("ReturnState");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("SensorActorDBAPI.Load");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    CResults(const CResults& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CResults(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    ~CResults(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SensorActorDBAPI::Load");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item ReturnState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    Construct_ReturnState();
                }
                if ((*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReturnState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_ReturnState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_ReturnState(void) const
        {
            return (*Value())[ItemName_ReturnState()];
        }
        bool Get_ReturnState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReturnState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ReturnState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace Load
#endif //#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_LOAD)


//------------------------------------------------------------------------
// giconfig_SensorActorDBAPI::Save::CResults
//------------------------------------------------------------------------
#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_SAVE)
namespace Save
{
class CResults : public GInsXmlRpc::XmlRpcValue
{
public:
    static std::string const& ItemName_ReturnState(void)
    {
        static std::string str("ReturnState");
        return str;
    }
public:
    static std::string const& ItemName_MethodID(void)
    {
        static std::string str("MethodID");
        return str;
    }
public:
    static std::string const& MethodName(void)
    {
        static std::string str("SensorActorDBAPI.Save");
        return str;
    }
public:
    CResults(void)
    {
        try
        {
            Construct_MethodID();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    CResults(const CResults& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
    }
    CResults(const GInsXmlRpc::XmlRpcValue& rhs) :
        GInsXmlRpc::XmlRpcValue(rhs)
    {
        try
        {
            // special handling: not like structure ...
            if (!(*this).valid())
            {
                return;
            }
            Construct_MethodID();
            Construct_ReturnState();
        }
        catch (...) {}
    }
public:
    ~CResults(void)
    {
    }
public:
    const GInsXmlRpc::XmlRpcValue* Value(void) const
    {
        return (const GInsXmlRpc::XmlRpcValue*) this;
    }
    GInsXmlRpc::XmlRpcValue* Value(void)
    {
        return (GInsXmlRpc::XmlRpcValue*) this;
    }
public:
    void Initialize(void)
    {
        try
        {
            (*Value()).clear();
            Construct_MethodID();
            Initialize_ReturnState();
        }
        catch (...) {}
    }
protected:
    void Construct_MethodID(void)
    {
        try
        {
            (*Value())[ItemName_MethodID()] = std::string("SensorActorDBAPI::Save");
        }
        catch (...)
        {
            (*this).invalidate();
        }
    }
public:
    const std::string Get_MethodID(void) const
    {
        try
        {
            if ((*Value()).hasMember(ItemName_MethodID()))
            {
                return (*Value())[ItemName_MethodID()];
            }
            return std::string("");
        }
        catch (...)
        {
            return std::string("");
        }
    }
    //------------------------------------------------------------------------
    // Item ReturnState (Type: "GInsXmlRpcStdAPI::CGIns_Info_State")
    protected:
        void Construct_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                }
            }
            catch (...)
            {
                (*this).invalidate();
            }
        }
    public:
        bool Initialize_ReturnState(void)
        {
            try
            {
                if (!(*Value()).hasMember(ItemName_ReturnState()))
                {
                    Construct_ReturnState();
                }
                if ((*Value()).hasMember(ItemName_ReturnState()))
                {
                    GInsXmlRpcStdAPI::CGIns_Info_State InitValue;
                    (*Value())[ItemName_ReturnState()] = InitValue;
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
    public:
        bool Set_ReturnState(const GInsXmlRpcStdAPI::CGIns_Info_State& SetValue)
        {
            try
            {
                (*Value())[ItemName_ReturnState()] = SetValue;
                return true;
            }
            catch (...) {}
            return false;
        }
    public:
        GInsXmlRpcStdAPI::CGIns_Info_State Get_ReturnState(void) const
        {
            return (*Value())[ItemName_ReturnState()];
        }
        bool Get_ReturnState(GInsXmlRpcStdAPI::CGIns_Info_State& GetValue) const
        {
            try
            {
                if (((*Value())[ItemName_ReturnState()]).valid())
                {
                    GetValue = (*Value())[ItemName_ReturnState()];
                    return true;
                }
            }
            catch (...) {}
            return false;
        }
}; // class CResults
} // namespace Save
#endif //#if defined(IMPLEMENT_GICONFIG_SENSORACTORDBAPI_SAVE)
//========================================================================
}; // namespace giconfig_SensorActorDBAPI
//========================================================================
#endif // #if !defined(_GICONFIG_SENSORACTORDBAPI_TYPES_H)

