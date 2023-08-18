#include "GInsXmlRpcValue.h"
#include "GInsXmlRpcException.h"
#include "Base64.h"

#ifndef MAKEDEPEND
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
//#include <math.h>
#include <float.h>

#include <cmath>
#include <limits>
#endif

#if _MSC_VER >= 1400
#pragma warning(disable : 4996)
#endif

//=============================================================================
// Debugging
// Ist "XmlRpcTrace" aktiv, so darf innerhalb von GInsXmlRpc kein "TRACE()", "TRACEIF()", "PRINT()" oder "PRINTF()" verwendet werden!
// Grund: XmlRpcTrace verwendet GInsXmlRpc (XmlRpcClient, XmlRpcClientTransport, XmlRpcClientTransportHTTP).
// Die Verwendeung von "TRACE()", "TRACEIF()", "PRINT()" oder "PRINTF()" führt zu unendlichen rekursiven Aufrufen!
#if defined(_DEBUG)
//#define _DEBUG_XMLRPCVALUE
#endif // #if defined(_DEBUG)
//=============================================================================

//========================================================================
namespace GInsXmlRpc {
//========================================================================

// Xml: Tags
const char XmlRpcValue::SET1_XML_TAG_VALUE[] = "<value>";
const char XmlRpcValue::SET2_XML_TAG_VALUE[] = "<va>";
const char* XmlRpcValue::XML_TAG_VALUE[] = {XmlRpcValue::SET1_XML_TAG_VALUE, XmlRpcValue::SET2_XML_TAG_VALUE};

const char XmlRpcValue::SET1_XML_ENDTAG_VALUE[] = "</value>";
const char XmlRpcValue::SET2_XML_ENDTAG_VALUE[] = "</va>";
const char* XmlRpcValue::XML_ENDTAG_VALUE[] = {XmlRpcValue::SET1_XML_ENDTAG_VALUE, XmlRpcValue::SET2_XML_ENDTAG_VALUE};

const char XmlRpcValue::SET1_XML_TAG_BOOLEAN[] = "<boolean>";
const char XmlRpcValue::SET2_XML_TAG_BOOLEAN[] = "<bo>";
const char* XmlRpcValue::XML_TAG_BOOLEAN[] = {XmlRpcValue::SET1_XML_TAG_BOOLEAN, XmlRpcValue::SET2_XML_TAG_BOOLEAN};

const char XmlRpcValue::SET1_XML_ENDTAG_BOOLEAN[] = "</boolean>";
const char XmlRpcValue::SET2_XML_ENDTAG_BOOLEAN[] = "</bo>";
const char* XmlRpcValue::XML_ENDTAG_BOOLEAN[] = {XmlRpcValue::SET1_XML_ENDTAG_BOOLEAN, XmlRpcValue::SET2_XML_ENDTAG_BOOLEAN};

const char XmlRpcValue::SET1_XML_TAG_FLOAT[] = "<float>";
const char XmlRpcValue::SET2_XML_TAG_FLOAT[] = "<fl>";
const char* XmlRpcValue::XML_TAG_FLOAT[] = {XmlRpcValue::SET1_XML_TAG_FLOAT, XmlRpcValue::SET2_XML_TAG_FLOAT};

const char XmlRpcValue::SET1_XML_ENDTAG_FLOAT[] = "</float>";
const char XmlRpcValue::SET2_XML_ENDTAG_FLOAT[] = "</fl>";
const char* XmlRpcValue::XML_ENDTAG_FLOAT[] = {XmlRpcValue::SET1_XML_ENDTAG_FLOAT, XmlRpcValue::SET2_XML_ENDTAG_FLOAT};

const char XmlRpcValue::SET1_XML_TAG_DOUBLE[] = "<double>";
const char XmlRpcValue::SET2_XML_TAG_DOUBLE[] = "<do>";
const char* XmlRpcValue::XML_TAG_DOUBLE[] = {XmlRpcValue::SET1_XML_TAG_DOUBLE, XmlRpcValue::SET2_XML_TAG_DOUBLE};

const char XmlRpcValue::SET1_XML_ENDTAG_DOUBLE[] = "</double>";
const char XmlRpcValue::SET2_XML_ENDTAG_DOUBLE[] = "</do>";
const char* XmlRpcValue::XML_ENDTAG_DOUBLE[] = {XmlRpcValue::SET1_XML_ENDTAG_DOUBLE, XmlRpcValue::SET2_XML_ENDTAG_DOUBLE};

const char XmlRpcValue::SET1_XML_TAG_INT[] = "<int>";
const char XmlRpcValue::SET2_XML_TAG_INT[] = "<int>";
const char* XmlRpcValue::XML_TAG_INT[] = {XmlRpcValue::SET1_XML_TAG_INT, XmlRpcValue::SET2_XML_TAG_INT};

const char XmlRpcValue::SET1_XML_ENDTAG_INT[] = "</int>";
const char XmlRpcValue::SET2_XML_ENDTAG_INT[] = "</int>";
const char* XmlRpcValue::XML_ENDTAG_INT[] = {XmlRpcValue::SET1_XML_ENDTAG_INT, XmlRpcValue::SET2_XML_ENDTAG_INT};

const char XmlRpcValue::SET1_XML_TAG_I4[] = "<i4>";
const char XmlRpcValue::SET2_XML_TAG_I4[] = "<i4>";
const char* XmlRpcValue::XML_TAG_I4[] = {XmlRpcValue::SET1_XML_TAG_I4, XmlRpcValue::SET2_XML_TAG_I4};

const char XmlRpcValue::SET1_XML_ENDTAG_I4[] = "</i4>";
const char XmlRpcValue::SET2_XML_ENDTAG_I4[] = "</i4>";
const char* XmlRpcValue::XML_ENDTAG_I4[] = {XmlRpcValue::SET1_XML_ENDTAG_I4, XmlRpcValue::SET2_XML_ENDTAG_I4};

const char XmlRpcValue::SET1_XML_TAG_I8[] = "<i8>";
const char XmlRpcValue::SET2_XML_TAG_I8[] = "<i8>";
const char* XmlRpcValue::XML_TAG_I8[] = {XmlRpcValue::SET1_XML_TAG_I8, XmlRpcValue::SET2_XML_TAG_I8};

const char XmlRpcValue::SET1_XML_ENDTAG_I8[] = "</i8>";
const char XmlRpcValue::SET2_XML_ENDTAG_I8[] = "</i8>";
const char* XmlRpcValue::XML_ENDTAG_I8[] = {XmlRpcValue::SET1_XML_ENDTAG_I8, XmlRpcValue::SET2_XML_ENDTAG_I8};

const char XmlRpcValue::SET1_XML_TAG_STRING[] = "<string>";
const char XmlRpcValue::SET2_XML_TAG_STRING[] = "<str>";
const char* XmlRpcValue::XML_TAG_STRING[] = {XmlRpcValue::SET1_XML_TAG_STRING, XmlRpcValue::SET2_XML_TAG_STRING};

const char XmlRpcValue::SET1_XML_ENDTAG_STRING[] = "</string>";
const char XmlRpcValue::SET2_XML_ENDTAG_STRING[] = "</str>";
const char* XmlRpcValue::XML_ENDTAG_STRING[] = {XmlRpcValue::SET1_XML_ENDTAG_STRING, XmlRpcValue::SET2_XML_ENDTAG_STRING};

const char XmlRpcValue::SET1_XML_TAG_DATETIME[] = "<dateTime.iso8601>";
const char XmlRpcValue::SET2_XML_TAG_DATETIME[] = "<dtime>";
const char* XmlRpcValue::XML_TAG_DATETIME[] = {XmlRpcValue::SET1_XML_TAG_DATETIME, XmlRpcValue::SET2_XML_TAG_DATETIME};

const char XmlRpcValue::SET1_XML_ENDTAG_DATETIME[] = "</dateTime.iso8601>";
const char XmlRpcValue::SET2_XML_ENDTAG_DATETIME[] = "</dtime>";
const char* XmlRpcValue::XML_ENDTAG_DATETIME[] = {XmlRpcValue::SET1_XML_ENDTAG_DATETIME, XmlRpcValue::SET2_XML_ENDTAG_DATETIME};

const char XmlRpcValue::SET1_XML_TAG_BASE64[] = "<base64>";
const char XmlRpcValue::SET2_XML_TAG_BASE64[] = "<b64>";
const char* XmlRpcValue::XML_TAG_BASE64[] = {XmlRpcValue::SET1_XML_TAG_BASE64, XmlRpcValue::SET2_XML_TAG_BASE64};

const char XmlRpcValue::SET1_XML_ENDTAG_BASE64[] = "</base64>";
const char XmlRpcValue::SET2_XML_ENDTAG_BASE64[] = "</b64>";
const char* XmlRpcValue::XML_ENDTAG_BASE64[] = {XmlRpcValue::SET1_XML_ENDTAG_BASE64, XmlRpcValue::SET2_XML_ENDTAG_BASE64};

const char XmlRpcValue::SET1_XML_TAG_ARRAY[] = "<array>";
const char XmlRpcValue::SET2_XML_TAG_ARRAY[] = "<ar>";
const char* XmlRpcValue::XML_TAG_ARRAY[] = {XmlRpcValue::SET1_XML_TAG_ARRAY, XmlRpcValue::SET2_XML_TAG_ARRAY};

const char XmlRpcValue::SET1_XML_ENDTAG_ARRAY[] = "</array>";
const char XmlRpcValue::SET2_XML_ENDTAG_ARRAY[] = "</ar>";
const char* XmlRpcValue::XML_ENDTAG_ARRAY[] = {XmlRpcValue::SET1_XML_ENDTAG_ARRAY, XmlRpcValue::SET2_XML_ENDTAG_ARRAY};

const char XmlRpcValue::SET1_XML_TAG_DATA[] = "<data>";
const char XmlRpcValue::SET2_XML_TAG_DATA[] = "<da>";
const char* XmlRpcValue::XML_TAG_DATA[] = {XmlRpcValue::SET1_XML_TAG_DATA, XmlRpcValue::SET2_XML_TAG_DATA};

const char XmlRpcValue::SET1_XML_ENDTAG_DATA[] = "</data>";
const char XmlRpcValue::SET2_XML_ENDTAG_DATA[] = "</da>";
const char* XmlRpcValue::XML_ENDTAG_DATA[] = {XmlRpcValue::SET1_XML_ENDTAG_DATA, XmlRpcValue::SET2_XML_ENDTAG_DATA};

const char XmlRpcValue::SET1_XML_TAG_STRUCT[] = "<struct>";
const char XmlRpcValue::SET2_XML_TAG_STRUCT[] = "<st>";
const char* XmlRpcValue::XML_TAG_STRUCT[] = {XmlRpcValue::SET1_XML_TAG_STRUCT, XmlRpcValue::SET2_XML_TAG_STRUCT};

const char XmlRpcValue::SET1_XML_ENDTAG_STRUCT[] = "</struct>";
const char XmlRpcValue::SET2_XML_ENDTAG_STRUCT[] = "</st>";
const char* XmlRpcValue::XML_ENDTAG_STRUCT[] = {XmlRpcValue::SET1_XML_ENDTAG_STRUCT, XmlRpcValue::SET2_XML_ENDTAG_STRUCT};

const char XmlRpcValue::SET1_XML_TAG_MEMBER[] = "<member>";
const char XmlRpcValue::SET2_XML_TAG_MEMBER[] = "<me>";
const char* XmlRpcValue::XML_TAG_MEMBER[] = {XmlRpcValue::SET1_XML_TAG_MEMBER, XmlRpcValue::SET2_XML_TAG_MEMBER};

const char XmlRpcValue::SET1_XML_ENDTAG_MEMBER[] = "</member>";
const char XmlRpcValue::SET2_XML_ENDTAG_MEMBER[] = "</me>";
const char* XmlRpcValue::XML_ENDTAG_MEMBER[] = {XmlRpcValue::SET1_XML_ENDTAG_MEMBER, XmlRpcValue::SET2_XML_ENDTAG_MEMBER};

const char XmlRpcValue::SET1_XML_TAG_NAME[] = "<name>";
const char XmlRpcValue::SET2_XML_TAG_NAME[] = "<na>";
const char* XmlRpcValue::XML_TAG_NAME[] = {XmlRpcValue::SET1_XML_TAG_NAME, XmlRpcValue::SET2_XML_TAG_NAME};

const char XmlRpcValue::SET1_XML_ENDTAG_NAME[] = "</name>";
const char XmlRpcValue::SET2_XML_ENDTAG_NAME[] = "</na>";
const char* XmlRpcValue::XML_ENDTAG_NAME[] = {XmlRpcValue::SET1_XML_ENDTAG_NAME, XmlRpcValue::SET2_XML_ENDTAG_NAME};

const char XmlRpcValue::SET1_XML_TAG_ID[] = "<id>";
const char XmlRpcValue::SET2_XML_TAG_ID[] = "<id>";
const char* XmlRpcValue::XML_TAG_ID[] = { XmlRpcValue::SET1_XML_TAG_ID, XmlRpcValue::SET2_XML_TAG_ID };

const char XmlRpcValue::SET1_XML_ENDTAG_ID[] = "</id>";
const char XmlRpcValue::SET2_XML_ENDTAG_ID[] = "</id>";
const char* XmlRpcValue::XML_ENDTAG_ID[] = { XmlRpcValue::SET1_XML_ENDTAG_ID, XmlRpcValue::SET2_XML_ENDTAG_ID };

// Ende: Xml: Tags

// "not a number" (NAN)
const char XmlRpcValue::NotANumber[] = "nan";
const char XmlRpcValue::StructTypeIDIdent[] = "_id";


// Format strings
std::string XmlRpcValue::m_FloatFormat("%.7g");
std::string XmlRpcValue::m_DoubleFormat("%.15g");

XmlRpcValue* XmlRpcValue::GetMemberPtr(const std::string& name)
{
	if (m_Type == TypeStruct)
	{
		auto iter = this->m_Value.asStruct->find(name);
		if (iter != this->m_Value.asStruct->end())
			return &(*iter).second;
	}
	return NULL;
}

XmlRpcValue* XmlRpcValue::GetArrayElementPtr(int index)
{
	if (m_Type == TypeArray)
	{
		if ((int)this->m_Value.asArray->size() > index)
		{
			return &(this->m_Value.asArray->at(index));
		}
	}
	return NULL;
}

// Clean up
void XmlRpcValue::invalidate(void)
{
    switch (m_Type) {
    case TypeString:
        delete m_Value.asString;
        break;

    case TypeDateTime:
        delete m_Value.asTime;
        break;

    case TypeBase64:
        delete m_Value.asBinary;
        break;

    case TypeArray:
        delete m_Value.asArray;
        break;

    case TypeStruct:
        delete m_Value.asStruct;
        break;

    default:
        break;
    }

    m_Type = TypeInvalid;
    m_Value.asBinary = 0;
    m_XmlTagSet = XML_TAG_SET1;
    m_ValueXml.erase();
}

// Type checking
void XmlRpcValue::assertTypeOrInvalid(Type t)
{
    if (m_Type == TypeInvalid) {
        m_Type = t;
        switch (m_Type) {
        case TypeString:
            m_Value.asString = new std::string();
            break;

        case TypeDateTime:
            m_Value.asTime = new struct tm();
            break;

        case TypeBase64:
            m_Value.asBinary = new BinaryData();
            break;

        case TypeArray:
            m_Value.asArray = new ValueArray();
            break;

        case TypeStruct:
            m_Value.asStruct = new ValueStruct();
            break;

        default:
            m_Value.asBinary = 0;
            break;
        }
    }
    else if (m_Type != t)
    {
    	throw XmlRpcException("type error", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUETYPEERROR);
    }
}

void XmlRpcValue::assertTypeOrInvalid(Type t) const
{
    if (m_Type != t)
    {
        throw XmlRpcException("type error", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUETYPEERROR);
    }
}

void XmlRpcValue::assertArray(int size) const
{
    if (m_Type != TypeArray) {
        throw XmlRpcException("type error: expected an array", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUEEXPECTEDARRAY);
    }
    else if (int(m_Value.asArray->size()) < size) {
        throw XmlRpcException("range error: array index too large", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUEARRAYINDEX);
    }
}

void XmlRpcValue::assertArrayOrExpand(int size)
{
    if (m_Type == TypeInvalid) {
        m_Type = TypeArray;
        m_Value.asArray = new ValueArray(size);
    }
    else if (m_Type == TypeArray)
    {
        if (-1 == size) {
            m_Value.asArray->clear();
        }
        // Achtung: Die folgende Abfrage darf nicht entfernt werden! (Stranz Jan-Marc 24.06.2014)
        //          Von "<" auf "!=" geändert, da sonst das array nicht schrittweise verkleinert werden kann! (Stefan Stocker 04.08.2015)
        //			Von "!=" auf "<" zurück geändert, da sonst das Array in der Mitte nicht mehr beschrieben werden kann
        else if (int(m_Value.asArray->size()) < size) {
            m_Value.asArray->resize(size);
        }
    }
    else {
        throw XmlRpcException("type error: expected an array", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUEEXPECTEDARRAY);
    }
}
void XmlRpcValue::setArraySize(int size)
{
    if (m_Type == TypeInvalid) {
        m_Type = TypeArray;
        m_Value.asArray = new ValueArray(size);
    }
    else if (m_Type == TypeArray)
    {
        if (-1 == size) {
            m_Value.asArray->clear();
        }
        else if (int(m_Value.asArray->size()) != size) {
            m_Value.asArray->resize(size);
        }
    }
    else {
        throw XmlRpcException("type error: expected an array", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUEEXPECTEDARRAY);
    }
}
//Check if an array is big enough and expanded it if not
void XmlRpcValue::setArraySizeAndInit(int size,const XmlRpcValue &initValue)
{
	size_t oldSize=0;
    if (m_Type == TypeInvalid) {
        m_Type = TypeArray;
        m_Value.asArray = new ValueArray(size);
    }
    else if (m_Type == TypeArray)
    {
    	oldSize=m_Value.asArray->size();
        if (-1 == size) {
            m_Value.asArray->clear();
        }
        else if (int(m_Value.asArray->size()) != size) {//always change size
            m_Value.asArray->resize(size);
        }
    }
    else {
        throw XmlRpcException("type error: expected an array", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUEEXPECTEDARRAY);
    }
    size_t newSize=m_Value.asArray->size();
    for(size_t i=oldSize;i<newSize;i++)
    {
    	m_Value.asArray->at(i)=initValue;
    }
}
void XmlRpcValue::checkArraySizeOrExpand(int size)
{
    if (m_Type == TypeInvalid) {
        m_Type = TypeArray;
        m_Value.asArray = new ValueArray(size);
    }
    else if (m_Type == TypeArray)
    {
        if (-1 == size) {
            m_Value.asArray->clear();
        }
        else if (int(m_Value.asArray->size()) < size) {//only change it if it doesn't fit
            m_Value.asArray->resize(size);
        }
    }
    else {
        throw XmlRpcException("type error: expected an array", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUEEXPECTEDARRAY);
    }
}
// initializes the array with init value
void XmlRpcValue::initArray(const XmlRpcValue &initValue)
{
    if (m_Type == TypeInvalid) {
        m_Type = TypeArray;
        m_Value.asArray = new ValueArray(0);
    }
    else if (m_Type == TypeArray)
    {
        size_t size=m_Value.asArray->size();
        for(size_t i=0;i<size;i++) {
        	m_Value.asArray->at(i)=initValue;
        }
    }
    else {
        throw XmlRpcException("type error: expected an array", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUEEXPECTEDARRAY);
    }
}

void XmlRpcValue::deleteArrayValue(int index)
{
	if (m_Type == TypeArray) {
        if ((index >= 0) && (index < int(m_Value.asArray->size()))) {
            m_Value.asArray->erase(m_Value.asArray->begin() + index);
        }
    }
    else {
        throw XmlRpcException("type error: expected an array", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUEEXPECTEDARRAY);
    }
}

void XmlRpcValue::insertArrayValue(int index, const XmlRpcValue &value)
{
    if (m_Type == TypeInvalid) {
        this->setArraySizeAndInit(1,value);
    }
    else if (m_Type == TypeArray)
    {
    	if (m_Value.asArray->empty()) {
    		this->setArraySizeAndInit(1,value);
    	}
    	else if ((index >= 0) && (index < int(m_Value.asArray->size()))) {
    		m_Value.asArray->insert(m_Value.asArray->begin() + index, value);
    	}
    }
    else {
        throw XmlRpcException("type error: expected an array", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUEEXPECTEDARRAY);
    }
}

void XmlRpcValue::assertStruct(void)
{
    if (m_Type == TypeInvalid) {
        m_Type = TypeStruct;
        m_Value.asStruct = new ValueStruct();
    }
    else if (m_Type != TypeStruct) {
        throw XmlRpcException("type error: expected a struct", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUEEXPECTEDSTRUCT);
    }
}

void XmlRpcValue::assertStruct(void) const
{
    if (m_Type != TypeStruct) {
        throw XmlRpcException("type error: expected a struct", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUEEXPECTEDSTRUCT);
    }
}

void XmlRpcValue::assertBinaryData(size_t size) const
{
    if (m_Type != TypeBase64) {
        throw XmlRpcException("type error: expected binary data", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUEEXPECTEDBINARYDATA);
    }
    else if (m_Value.asBinary->size() < size) {
        throw XmlRpcException("range error: index too large", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUEINDEX);
    }
}

void XmlRpcValue::assertBinaryData(size_t size)
{
    if (m_Type == TypeInvalid) {
        m_Type = TypeBase64;
        m_Value.asBinary = new BinaryData(size);
    }
    else if (m_Type == TypeBase64) {
        if (m_Value.asBinary->size() < size) {
            m_Value.asBinary->resize(size);
        }
    }
    else {
        throw XmlRpcException("type error: expected binary data", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUEEXPECTEDBINARYDATA);
    }
}

XmlRpcValue& XmlRpcValue::operator=(XmlRpcValue const& rhs)
{
    if (this != &rhs) {
        invalidate();
        m_Type = rhs.m_Type;
        m_XmlTagSet = rhs.m_XmlTagSet;
#if defined(_DEBUG)
        m_ValueXml = rhs.m_ValueXml;
#endif // #if defined(_DEBUG)
        switch (m_Type) {
        case TypeBoolean:
            m_Value.asBool = rhs.m_Value.asBool;
            break;

        case TypeInt:
            m_Value.asInt = rhs.m_Value.asInt;
            break;

        case TypeInt64:
            m_Value.asInt64 = rhs.m_Value.asInt64;
            break;

        case TypeFloat:
            m_Value.asFloat = rhs.m_Value.asFloat;
            break;

        case TypeDouble:
            m_Value.asDouble = rhs.m_Value.asDouble;
            break;

        case TypeDateTime:
            m_Value.asTime = new struct tm(*rhs.m_Value.asTime);
            break;

        case TypeString:
            m_Value.asString = new std::string(*rhs.m_Value.asString);
            break;

        case TypeBase64:
            m_Value.asBinary = new BinaryData(*rhs.m_Value.asBinary);
            break;

        case TypeArray:
            m_Value.asArray = new ValueArray(*rhs.m_Value.asArray);
            break;

        case TypeStruct:
            m_Value.asStruct = new ValueStruct(*rhs.m_Value.asStruct);
            this->m_StructTypeID = rhs.m_StructTypeID;
            break;

        default:
            m_Value.asBinary = 0;
            break;
        }
    }

    return *this;
}

static bool tmEq(struct tm const& t1, struct tm const& t2)
{
    return ((t1.tm_sec == t2.tm_sec) &&
    		(t1.tm_min == t2.tm_min) &&
			(t1.tm_hour == t2.tm_hour) &&
			(t1.tm_mday == t2.tm_mday) &&
			(t1.tm_mon == t2.tm_mon) &&
			(t1.tm_year == t2.tm_year));
}

bool XmlRpcValue::operator==(XmlRpcValue const& other) const
{
    if (m_Type != other.m_Type) {
        return false;
    }

    switch (m_Type) {
    case TypeBoolean:
        return (!m_Value.asBool && !other.m_Value.asBool) || (m_Value.asBool && other.m_Value.asBool);

    case TypeInt:
        return m_Value.asInt == other.m_Value.asInt;

    case TypeInt64:
        return m_Value.asInt64 == other.m_Value.asInt64;

    case TypeFloat:
#if !defined(GINS_NAN)
        return m_Value.asFloat == other.m_Value.asFloat;
#else
        if (IsNaN(m_Value.asFloat) != IsNaN(other.m_Value.asFloat)) {
            return false;
        }
        return m_Value.asFloat == other.m_Value.asFloat;
#endif // #if !defined(GINS_NAN)

    case TypeDouble:
#if !defined(GINS_NAN)
        return m_Value.asDouble == other.m_Value.asDouble;
#else
        if (IsNaN(m_Value.asDouble) != IsNaN(other.m_Value.asDouble)) {
            return false;
        }
        return m_Value.asDouble == other.m_Value.asDouble;
#endif // #if !defined(GINS_NAN)

    case TypeDateTime:
        return tmEq(*m_Value.asTime, *other.m_Value.asTime);

    case TypeString:
        return *m_Value.asString == *other.m_Value.asString;

    case TypeBase64:
        return *m_Value.asBinary == *other.m_Value.asBinary;

    case TypeArray:
        return *m_Value.asArray == *other.m_Value.asArray;

    case TypeStruct:
        {
            if (m_Value.asStruct->size() != other.m_Value.asStruct->size()) {
                return false;
            }

            //Check only size to save performance, values itselve will be checked in detail
           if (this->m_StructTypeID.size() != other.m_StructTypeID.size()){
            	return false;
            }

            ValueStruct::const_iterator it1 = m_Value.asStruct->begin();
            ValueStruct::const_iterator it2 = other.m_Value.asStruct->begin();
            while (it1 != m_Value.asStruct->end()) {
                const XmlRpcValue&  v1 = it1->second;
                const XmlRpcValue&  v2 = it2->second;
                if (!(v1 == v2)) {
                    return false;
                }

                it1++;
                it2++;
            }

            return true;
        }

    default:
        break;
    }

    return true;
}

bool XmlRpcValue::operator!=(XmlRpcValue const& other) const
{
    return !(*this == other);
}

bool XmlRpcValue::toBoolean() const
{
	 switch (m_Type) {
		case TypeBoolean: 	return m_Value.asBool;
		case TypeInt:		return m_Value.asInt!=0;
		case TypeInt64:		return m_Value.asInt64!=0;
		case TypeFloat:
		{
			if(!std::isnan(m_Value.asFloat) && !std::isinf(m_Value.asFloat))
				return m_Value.asFloat!=0;
			else
				return false;
		}
		case TypeDouble:
		{
			if(!std::isnan(m_Value.asDouble) && !std::isinf(m_Value.asDouble))
				return m_Value.asDouble!=0;
			else
				return false;
		}
		default:
			break;
	 }
	 throw XmlRpcException("type error", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUETYPEERROR);
}
int32_t XmlRpcValue::toInt() const
{
	 switch (m_Type) {
		case TypeBoolean: 	return m_Value.asBool;
		case TypeInt:		return m_Value.asInt;
		case TypeInt64:
		{
			if((std::numeric_limits<int32_t>::max)( )>= std::abs(m_Value.asInt64))
				return (int32_t)m_Value.asInt64;

			break;
		}
		case TypeFloat:
		{
			if(!std::isnan(m_Value.asFloat) && !std::isinf(m_Value.asFloat)
				&& (std::numeric_limits<int32_t>::max)()>= std::abs(m_Value.asFloat))
				return (int32_t)m_Value.asFloat;
			else
				break;
		}
		case TypeDouble:
		{
			if(!std::isnan(m_Value.asDouble) && !std::isinf(m_Value.asDouble)
				&& (std::numeric_limits<int32_t>::max)()>= std::abs(m_Value.asDouble))
				return (int32_t)m_Value.asDouble;
			else
				break;
		}
		default:
			break;
	 }
	 throw XmlRpcException("type error", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUETYPEERROR);
}
int64_t XmlRpcValue::toInt64() const
{
	 switch (m_Type) {
		case TypeBoolean: 	return (int64_t)m_Value.asBool;
		case TypeInt:		return (int64_t)m_Value.asInt;
		case TypeInt64:		return (int64_t)m_Value.asInt64;
		case TypeFloat:
		{
			if(!std::isnan(m_Value.asFloat) && !std::isinf(m_Value.asFloat))
				return (int64_t)m_Value.asFloat;
			else
				break;
		}
		case TypeDouble:
		{
			if(!std::isnan(m_Value.asDouble) && !std::isinf(m_Value.asDouble)
				&& (std::numeric_limits<int64_t>::max)()>= std::abs(m_Value.asDouble))
				return (int64_t)m_Value.asDouble;
			else
				break;
		}
		default:
			break;
	 }
	 throw XmlRpcException("type error", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUETYPEERROR);
}
float XmlRpcValue::toFloat() const
{
	 switch (m_Type) {
		case TypeBoolean: 	return m_Value.asBool;
		case TypeInt:		return (float)m_Value.asInt;
		case TypeInt64:
		{
			if((std::numeric_limits<float>::max)()>= std::abs(m_Value.asInt64))
				return (float)m_Value.asInt64;
			else
				break;
		}
		case TypeFloat:		return m_Value.asFloat;
		case TypeDouble:
		{
			if((std::numeric_limits<float>::max)()>= std::abs(m_Value.asDouble))
				return (float)m_Value.asDouble;
			else
				break;
		}
		default:
			break;
	 }
	 throw XmlRpcException("type error", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUETYPEERROR);
}
double XmlRpcValue::toDouble() const
{
	 switch (m_Type) {
	    case TypeBoolean: 	return (double)m_Value.asBool;
		case TypeInt:		return (double)m_Value.asInt;
		case TypeInt64:		return (double)m_Value.asInt64;
		case TypeFloat:		return (double)m_Value.asFloat;
		case TypeDouble:	return m_Value.asDouble;
		default:
			break;
	 }
	 throw XmlRpcException("type error", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUETYPEERROR);
}

int XmlRpcValue::size(void) const
{
    switch (m_Type) {
    case TypeString:
        return (int)m_Value.asString->size();

    case TypeBase64:
        return (int)m_Value.asBinary->size();

    case TypeArray:
        return (int)m_Value.asArray->size();

    case TypeStruct:
        return (int)m_Value.asStruct->size();

    default:
        break;
    }

    return 0;
}

const XmlRpcValue::BinaryData* XmlRpcValue::getBinaryData(void) const
{
    switch (m_Type) {
    case TypeBase64:
        return m_Value.asBinary;

    default:
        break;
    }

    throw XmlRpcException("type error", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUETYPEERROR);
}

char XmlRpcValue::getBinaryDataAt(size_t i) const
{
    switch (m_Type) {
    case TypeBase64:
        if (0 > i) {
            throw XmlRpcException("type error", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUEINDEX);
        }
        if (m_Value.asBinary->size() <= i) {
            throw XmlRpcException("type error", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUEINDEX);
        }
        return (*m_Value.asBinary)[i];

    default:
        break;
    }

    throw XmlRpcException("type error", TEnumGInsStateType::eGInsStateType__XMLRPC_VALUETYPEERROR);
}

bool XmlRpcValue::hasMember(const std::string& name) const
{
    if (m_Type != TypeStruct) {
        return false;
    }
    return (m_Value.asStruct->find(name) != m_Value.asStruct->end());
}

bool XmlRpcValue::getMember(const std::string& name, XmlRpcValue& value) const
{
    value.clear();

    if (m_Type != TypeStruct) {
        return false;
    }

    ValueStruct::iterator it = m_Value.asStruct->find(name);
    if (it == m_Value.asStruct->end()) {
        return false;
    }

    value = it->second;
    return true;
}

XmlRpcValue::Type XmlRpcValue::getMemberType(const std::string& name) const
{
    if (m_Type != TypeStruct) {
        return TypeInvalid;
    }

    ValueStruct::iterator it = m_Value.asStruct->find(name);
    if (it == m_Value.asStruct->end()) {
        return TypeInvalid;
    }

    return (it->second).getType();
}

std::string XmlRpcValue::getMemberStructTypeID(const std::string& ID) const
{
    if (m_Type != TypeStruct) {
        return "";
    }
    ValueStruct::iterator it = m_Value.asStruct->find(ID);
    if(it != m_Value.asStruct->end())
    {
    	return it->second.getStructTypeID();
    }
    return "";
}

std::string XmlRpcValue::getStructTypeID() const
{
    if (m_Type != TypeStruct) {
        return "";
    }
	return this->m_StructTypeID;
}

bool XmlRpcValue::setStructTypeID(const std::string &ID)
{
    if (m_Type != TypeStruct) {
        return false;
    }
	this->m_StructTypeID = ID;
	return true;
}

bool XmlRpcValue::deleteMember(const std::string& name)
{
    if (m_Type != TypeStruct) {
        return false;
    }

    ValueStruct::iterator it = m_Value.asStruct->find(name);
    if (it == m_Value.asStruct->end()) {
        return false;
    }

    m_Value.asStruct->erase(it);
    return true;
}

bool XmlRpcValue::getMembers(std::vector<std::string>& members) const
{
    members.clear();
    if (m_Type != TypeStruct) {
        return false;
    }

    for (ValueStruct::iterator it = m_Value.asStruct->begin(); it != m_Value.asStruct->end(); ++it) {
        members.push_back(it->first);
    }

    return true;
}

int XmlRpcValue::countMembers(void) const
{
    if (m_Type != TypeStruct) {
        return 0;
    }

    return (int)m_Value.asStruct->size();
}

// Decode xml. Destroys any existing value.
bool XmlRpcValue::fromXml(std::string const& valueXml, size_t* offset)
{
    size_t savedOffset = *offset;

    invalidate();

    m_XmlTagSet = XML_TAG_SET1;
    if (!XmlRpcUtil::nextTagIs(XML_TAG_VALUE[XML_TAG_SET1], valueXml, offset)) {
        *offset = savedOffset;
        if (XmlRpcUtil::nextTagIs(XML_TAG_VALUE[XML_TAG_SET2], valueXml, offset)) {
            // Not a value, offset not updated
#if defined(_DEBUG)
            m_ValueXml.erase();
#endif // #if defined(_DEBUG)
            // Use xml tag set2 for all following tags
            m_XmlTagSet = XML_TAG_SET2;
        }
        else
        {
        	*offset = savedOffset;
        	m_XmlTagSet=JSON_TAG_SET1;
        	return fromJson(valueXml,offset);
        }
    }

    size_t afterValueOffset = *offset;
    std::string typeTag = XmlRpcUtil::getNextTag(valueXml, offset);
    bool result = false;
    if (typeTag == XML_TAG_BOOLEAN[m_XmlTagSet]) {
        result = boolFromXml(valueXml, offset);
    }
    else if (typeTag == XML_TAG_I4[m_XmlTagSet] || typeTag == XML_TAG_INT[m_XmlTagSet]) {
        result = intFromXml(valueXml, offset);
    }
    else if (typeTag == XML_TAG_I8[m_XmlTagSet]) {
        result = int64FromXml(valueXml, offset);
    }
    else if (typeTag == XML_TAG_FLOAT[m_XmlTagSet]) {
        result = floatFromXml(valueXml, offset);
    }
    else if (typeTag == XML_TAG_DOUBLE[m_XmlTagSet]) {
        result = doubleFromXml(valueXml, offset);
    }
    else if (typeTag.empty() || typeTag == XML_TAG_STRING[m_XmlTagSet]) {
        result = stringFromXml(valueXml, offset);
    }
    else if (typeTag == XML_TAG_DATETIME[m_XmlTagSet]) {
        result = dateTimeFromXml(valueXml, offset);
    }
    else if (typeTag == XML_TAG_BASE64[m_XmlTagSet]) {
        result = binaryFromXml(valueXml, offset);
    }
    else if (typeTag == XML_TAG_ARRAY[m_XmlTagSet]) {
        result = arrayFromXml(valueXml, offset);
    }
    else if (typeTag == XML_TAG_STRUCT[m_XmlTagSet]) {
        result = structFromXml(valueXml, offset);
    }
    else if (typeTag == XML_ENDTAG_VALUE[m_XmlTagSet]) {
        // Watch for empty/blank strings with no <string>tag
        *offset = afterValueOffset; // back up & try again
        result = stringFromXml(valueXml, offset);
    }

    if (result) {
        // Skip over the </value> tag
        XmlRpcUtil::findTag(XML_ENDTAG_VALUE[m_XmlTagSet], valueXml, offset);
#if defined(_DEBUG)
        m_ValueXml.assign(valueXml.begin() + savedOffset, valueXml.begin() + *offset);
#endif // #if defined(_DEBUG)
    }
    else {
        // Unrecognized tag after <value>, offset not updated
        *offset = savedOffset;
#if defined(_DEBUG)
        m_ValueXml.erase();
#endif // #if defined(_DEBUG)
    }

    return result;
}

std::string XmlRpcValue::toXml(int XmlTagSet) const
{
    if (XML_TAG_UNDEF == XmlTagSet) {
        XmlTagSet = m_XmlTagSet;
    }
    if(XmlTagSet == JSON_TAG_SET1 || XmlTagSet == JSON_TAG_SET1_PRETTY){
		return toJson(XmlTagSet, 0);
    }
    else if ((XML_TAG_SET1 != XmlTagSet) && (XML_TAG_SET2 != XmlTagSet)) {
        XmlTagSet = XML_TAG_SET1;
    }

    switch (m_Type) {
    case TypeBoolean:
        return boolToXml(XmlTagSet);
        break;

    case TypeInt:
        return intToXml(XmlTagSet);
        break;

    case TypeInt64:
        return int64ToXml(XmlTagSet);
        break;

    case TypeFloat:
        return floatToXml(XmlTagSet);
        break;

    case TypeDouble:
        return doubleToXml(XmlTagSet);
        break;

    case TypeString:
        return stringToXml(XmlTagSet);
        break;

    case TypeDateTime:
        return dateTimeToXml(XmlTagSet);
        break;

    case TypeBase64:
        return binaryToXml(XmlTagSet);
        break;

    case TypeArray:
        return arrayToXml(XmlTagSet);
        break;

    case TypeStruct:
        return structToXml(XmlTagSet);
        break;

    default:
        break;
    }
    return std::string();
}

size_t XmlRpcValue::toXmlSize(int XmlTagSet) const
{
    if (XML_TAG_UNDEF == XmlTagSet) {
        XmlTagSet = m_XmlTagSet;
    }
    if ((XML_TAG_SET1 != XmlTagSet) && (XML_TAG_SET2 != XmlTagSet)) {
        XmlTagSet = XML_TAG_SET1;
    }

    switch (m_Type) {
    case TypeBoolean:
        return boolToXmlSize(XmlTagSet);
        break;

    case TypeInt:
        return intToXmlSize(XmlTagSet);
        break;

    case TypeInt64:
        return int64ToXmlSize(XmlTagSet);
        break;

    case TypeFloat:
        return floatToXmlSize(XmlTagSet);
        break;

    case TypeDouble:
        return doubleToXmlSize(XmlTagSet);
        break;

    case TypeString:
        return stringToXmlSize(XmlTagSet) + (2*int(m_Value.asString->size()));
        break;

    case TypeDateTime:
        return dateTimeToXmlSize(XmlTagSet);
        break;

    case TypeBase64:
        return binaryToXmlSize(XmlTagSet) + (2*int(m_Value.asBinary->size()));	// 256 byte --> 344 char
        break;

    case TypeArray:
        return arrayToXmlSize(XmlTagSet);
        break;

    case TypeStruct:
        return structToXmlSize(XmlTagSet);
        break;

    default:
        break;
    }

    return 256;
}

// Boolean
bool XmlRpcValue::boolFromXml(std::string const &valueXml, size_t* offset)
{
    const char* valueStart = valueXml.c_str() + *offset;
    char* valueEnd;
    int32_t ivalue = strtol(valueStart, &valueEnd, 10);
    if (valueEnd == valueStart || (ivalue != 0 && ivalue != 1)) {
        return false;
    }

    m_Type = TypeBoolean;
    m_Value.asBool = (ivalue == 1);
    *offset += int(valueEnd - valueStart);
    return true;
}

size_t XmlRpcValue::boolToXmlSize(int XmlTagSet) const
{
	if (XmlTagSet == XML_TAG_SET1) {
		return
			sizeof(XmlRpcValue::SET1_XML_TAG_VALUE)+
			sizeof(XmlRpcValue::SET1_XML_TAG_BOOLEAN)+
			1+
			sizeof(XmlRpcValue::SET1_XML_ENDTAG_BOOLEAN)+
			sizeof(XmlRpcValue::SET1_XML_ENDTAG_VALUE)
			+1;
	}
	else
	{
		return
			sizeof(XmlRpcValue::SET2_XML_TAG_VALUE)+
			sizeof(XmlRpcValue::SET2_XML_TAG_BOOLEAN)+
			1+
			sizeof(XmlRpcValue::SET2_XML_ENDTAG_BOOLEAN)+
			sizeof(XmlRpcValue::SET2_XML_ENDTAG_VALUE)
			+1;
	}
}

std::string XmlRpcValue::boolToXml(int XmlTagSet) const
{
    std::string xml; xml.reserve(boolToXmlSize(XmlTagSet));
	xml.append(XML_TAG_VALUE[XmlTagSet]);
    xml.append(XML_TAG_BOOLEAN[XmlTagSet]);
    xml.append(m_Value.asBool ? "1" : "0");
    xml.append(XML_ENDTAG_BOOLEAN[XmlTagSet]);
    xml.append(XML_ENDTAG_VALUE[XmlTagSet]);
    return xml;
}

// Integer
bool XmlRpcValue::intFromXml(std::string const &valueXml, size_t* offset)
{
    const char* valueStart = valueXml.c_str() + *offset;
    char* valueEnd;
    int32_t ivalue = strtol(valueStart, &valueEnd, 10);
    if (valueEnd == valueStart) {
        return false;
    }

    m_Type = TypeInt;
    m_Value.asInt = ivalue;
    *offset += int(valueEnd - valueStart);
    return true;
}

size_t XmlRpcValue::intToXmlSize(int XmlTagSet) const
{
	if (XmlTagSet == XML_TAG_SET1) {
		return
			sizeof(XmlRpcValue::SET1_XML_TAG_VALUE)+
			sizeof(XmlRpcValue::SET1_XML_TAG_I4)+
			12+
			sizeof(XmlRpcValue::SET1_XML_ENDTAG_I4)+
			sizeof(XmlRpcValue::SET1_XML_ENDTAG_VALUE)
			+1;
	}
	else {
        return
			sizeof(XmlRpcValue::SET2_XML_TAG_VALUE)+
			sizeof(XmlRpcValue::SET2_XML_TAG_I4)+
			12+
			sizeof(XmlRpcValue::SET2_XML_ENDTAG_I4)+
			sizeof(XmlRpcValue::SET2_XML_ENDTAG_VALUE)
			+1;
	}
}

std::string XmlRpcValue::intToXml(int XmlTagSet) const
{
    char buf[256];
    snprintf(buf, sizeof(buf) - 1, "%d", m_Value.asInt);
    buf[sizeof(buf) - 1] = 0;

    std::string xml; xml.reserve(intToXmlSize(XmlTagSet));
	xml.append(XML_TAG_VALUE[XmlTagSet]);
    xml.append(XML_TAG_I4[XmlTagSet]);
    xml.append(buf);
    xml.append(XML_ENDTAG_I4[XmlTagSet]);
    xml.append(XML_ENDTAG_VALUE[XmlTagSet]);
    return xml;
}

// Integer 64-Bit
bool XmlRpcValue::int64FromXml(std::string const &valueXml, size_t* offset)
{
    const char* valueStart = valueXml.c_str() + *offset;
    char* valueEnd;
    int64_t i64value = strtoll(valueStart, &valueEnd, 10);
    if (valueEnd == valueStart) {
        return false;
    }

    m_Type = TypeInt64;
    m_Value.asInt64 = i64value;
    *offset += int(valueEnd - valueStart);
    return true;
}


size_t XmlRpcValue::int64ToXmlSize(int XmlTagSet) const
{
	if (XmlTagSet == XML_TAG_SET1) {
		return
			sizeof(XmlRpcValue::SET1_XML_TAG_VALUE)+
			sizeof(XmlRpcValue::SET1_XML_TAG_I8)+
			22+
			sizeof(XmlRpcValue::SET1_XML_ENDTAG_I8)+
			sizeof(XmlRpcValue::SET1_XML_ENDTAG_VALUE)
			+1;
	}
	else {
	    return
			sizeof(XmlRpcValue::SET2_XML_TAG_VALUE)+
			sizeof(XmlRpcValue::SET2_XML_TAG_I8)+
			22+
			sizeof(XmlRpcValue::SET2_XML_ENDTAG_I8)+
			sizeof(XmlRpcValue::SET2_XML_ENDTAG_VALUE)
			+1;
	}
}

std::string XmlRpcValue::int64ToXml(int XmlTagSet) const
{
    char buf[256];

#if defined(__GNUC__) && !defined(__MINGW32__)
    snprintf(buf, sizeof(buf) - 1, "%lli", (long long)m_Value.asInt64);	// casting to (long long) compiler need ...
#else
	#if defined(__MINGW32__)
	snprintf(buf, sizeof(buf) - 1, "%I64i", m_Value.asInt64);
	#else
		#if defined(_MSC_VER)
	snprintf(buf, sizeof(buf)-1, "%lld", m_Value.asInt64);
		#else
	#pragma message("ATTENTION WARNING: unknown XMLRPC int64ToXml converter for this compiler !!!!")
	#error "ATTENTION: unknown XMLRPC int64ToXml converter for this compiler !!!!"
		#endif
	#endif
#endif

	buf[sizeof(buf)-1] = 0;

    std::string xml; xml.reserve(int64ToXmlSize(XmlTagSet));
	xml.append(XML_TAG_VALUE[XmlTagSet]);
    xml.append(XML_TAG_I8[XmlTagSet]);
    xml.append(buf);
    xml.append(XML_ENDTAG_I8[XmlTagSet]);
    xml.append(XML_ENDTAG_VALUE[XmlTagSet]);
    return xml;
}

// Float
bool XmlRpcValue::floatFromXml(std::string const &valueXml, size_t* offset)
{
    const char* valueStart = valueXml.c_str() + *offset;
    char*       valueEnd = (char*) valueStart;

#if !defined(GINS_NAN)
    float fvalue = strtof(valueStart, &valueEnd);
#else
    float fvalue = 0;
    if (0 > strcasecmp(XmlRpcValue::NotANumber, valueStart)) 
	{
        fvalue = (float)GINS_NAN;
        valueEnd += strlen(XmlRpcValue::NotANumber);
    }
    else 
	{
        fvalue = strtof(valueStart, &valueEnd);
    }
#endif // #if !defined(GINS_NAN)
    if (valueEnd == valueStart) {
        return false;
    }

    m_Type = TypeFloat;
    m_Value.asFloat = fvalue;
    *offset += int(valueEnd - valueStart);
    return true;
}


size_t XmlRpcValue::floatToXmlSize(int XmlTagSet) const
{
    if (XmlTagSet == XML_TAG_SET1){
        return
            sizeof(XmlRpcValue::SET1_XML_TAG_VALUE)+
            sizeof(XmlRpcValue::SET1_XML_TAG_FLOAT)+
            256+
            sizeof(XmlRpcValue::SET1_XML_ENDTAG_FLOAT)+
            sizeof(XmlRpcValue::SET1_XML_ENDTAG_VALUE)
            +1;
    }
    else {
        return
            sizeof(XmlRpcValue::SET2_XML_TAG_VALUE)+
            sizeof(XmlRpcValue::SET2_XML_TAG_FLOAT)+
            256+
            sizeof(XmlRpcValue::SET2_XML_ENDTAG_FLOAT)+
            sizeof(XmlRpcValue::SET2_XML_ENDTAG_VALUE)
            +1;
    }
}

std::string XmlRpcValue::floatToXml(int XmlTagSet) const
{
    char buf[256];

	if (std::isnan(m_Value.asFloat))
	{
		snprintf(buf, sizeof(buf) - 1, "%s", XmlRpcValue::NotANumber);
	}
	else 
	{
		snprintf(buf, sizeof(buf) - 1, getFloatFormat().c_str(), m_Value.asFloat);
	}

    buf[sizeof(buf) - 1] = 0;

    std::string xml; xml.reserve(floatToXmlSize(XmlTagSet));
    xml.append(XML_TAG_VALUE[XmlTagSet]);
    xml.append(XML_TAG_FLOAT[XmlTagSet]);
    xml.append(buf);
    xml.append(XML_ENDTAG_FLOAT[XmlTagSet]);
    xml.append(XML_ENDTAG_VALUE[XmlTagSet]);
    return xml;
}

// Double
bool XmlRpcValue::doubleFromXml(std::string const &valueXml, size_t* offset)
{
    const char* valueStart = valueXml.c_str() + *offset;
    char*       valueEnd = (char*) valueStart;

#if !defined(GINS_NAN)
    double dvalue = strtod(valueStart, &valueEnd);
#else
    double dvalue = 0;
    if (0 > strcasecmp(XmlRpcValue::NotANumber, valueStart)) {
        dvalue = GINS_NAN;
        valueEnd += strlen(XmlRpcValue::NotANumber);
    }
    else {
        dvalue = strtod(valueStart, &valueEnd);
    }
#endif // #if !defined(GINS_NAN)
    if (valueEnd == valueStart) {
        return false;
    }

    m_Type = TypeDouble;
    m_Value.asDouble = dvalue;
    *offset += int(valueEnd - valueStart);
    return true;
}


size_t XmlRpcValue::doubleToXmlSize(int XmlTagSet) const
{
	if (XmlTagSet == XML_TAG_SET1){
		return
			sizeof(XmlRpcValue::SET1_XML_TAG_VALUE)+
			sizeof(XmlRpcValue::SET1_XML_TAG_DOUBLE)+
			256+
			sizeof(XmlRpcValue::SET1_XML_ENDTAG_DOUBLE)+
			sizeof(XmlRpcValue::SET1_XML_ENDTAG_VALUE)
			+1;
	}
	else {
		return
			sizeof(XmlRpcValue::SET2_XML_TAG_VALUE)+
			sizeof(XmlRpcValue::SET2_XML_TAG_DOUBLE)+
			256+
			sizeof(XmlRpcValue::SET2_XML_ENDTAG_DOUBLE)+
			sizeof(XmlRpcValue::SET2_XML_ENDTAG_VALUE)
			+1;
	}
}

std::string XmlRpcValue::doubleToXml(int XmlTagSet) const
{
    char buf[256];
	if (std::isnan(m_Value.asDouble))
	{
		snprintf(buf, sizeof(buf) - 1, "%s", XmlRpcValue::NotANumber);
	}
	else 
	{
		snprintf(buf, sizeof(buf) - 1, getDoubleFormat().c_str(), m_Value.asDouble);
	}
    buf[sizeof(buf) - 1] = 0;

    std::string xml; xml.reserve(doubleToXmlSize(XmlTagSet));
	xml.append(XML_TAG_VALUE[XmlTagSet]);
    xml.append(XML_TAG_DOUBLE[XmlTagSet]);
    xml.append(buf);
    xml.append(XML_ENDTAG_DOUBLE[XmlTagSet]);
    xml.append(XML_ENDTAG_VALUE[XmlTagSet]);
    return xml;
}

// String
bool XmlRpcValue::stringFromXml(std::string const &valueXml, size_t* offset)
{
    size_t valueEnd = valueXml.find('<', *offset);
    if (valueEnd == std::string::npos) {
        return false;   // No end tag;
    }

    m_Type = TypeString;

    std::string valueXmlTemp = XmlRpcUtil::xmlDecode(valueXml.substr(*offset, valueEnd - *offset));
#if defined(XMLRPC_EXTERNAL_ENCODING_ISO8859_1) && !defined(XMLRPC_ENCODING_ISO8859_1)
    // text conversion from "UTF-8" to "ISO-8859-1 (Latin1)"
    m_Value.asString = new std::string(XmlRpcUtil::UTF8toLatin1(valueXmlTemp));
#elif !defined(XMLRPC_EXTERNAL_ENCODING_ISO8859_1) && defined(XMLRPC_ENCODING_ISO8859_1)
    // text conversion from "ISO-8859-1 (Latin1)" to "UTF-8"
    m_Value.asString = new std::string(XmlRpcUtil::Latin1toUTF8(valueXmlTemp));
#else
    m_Value.asString = new std::string(valueXmlTemp);
#endif

    *offset += int(valueXmlTemp.length());
    return true;
}

size_t XmlRpcValue::stringToXmlSize(int XmlTagSet) const
{
	if (XmlTagSet == XML_TAG_SET1) {
		return
			sizeof(XmlRpcValue::SET1_XML_TAG_VALUE)+
			//sizeof(XmlRpcValue::SET1_XML_TAG_STRING)+ // optional
			//sizeof(XmlRpcValue::SET1_XML_ENDTAG_STRING)+ // optional
			sizeof(XmlRpcValue::SET1_XML_ENDTAG_VALUE)
			+1;
	}
	else {
		return
			sizeof(XmlRpcValue::SET2_XML_TAG_VALUE)+
			//sizeof(XmlRpcValue::SET2_XML_TAG_STRING)+ // optional
			//sizeof(XmlRpcValue::SET2_XML_ENDTAG_STRING)+ // optional
			sizeof(XmlRpcValue::SET2_XML_ENDTAG_VALUE)
			+1;
	}
}

std::string XmlRpcValue::stringToXml(int XmlTagSet) const
{
#if defined(XMLRPC_EXTERNAL_ENCODING_ISO8859_1) && !defined(XMLRPC_ENCODING_ISO8859_1)
    // text conversion from "ISO-8859-1 (Latin1)" to "UTF-8"
    std::string s = XmlRpcUtil::xmlEncode(XmlRpcUtil::Latin1toUTF8(*m_Value.asString));
#elif !defined(XMLRPC_EXTERNAL_ENCODING_ISO8859_1) && defined(XMLRPC_ENCODING_ISO8859_1)
    // text conversion from "UTF-8" to "ISO-8859-1 (Latin1)"
    std::string s = XmlRpcUtil::xmlEncode(XmlRpcUtil::UTF8toLatin1(*m_Value.asString));
#else
	std::string s = XmlRpcUtil::xmlEncode(*m_Value.asString);
#endif

    std::string xml; xml.reserve(stringToXmlSize(XmlTagSet) + s.length());
	xml.append(XML_TAG_VALUE[XmlTagSet]);
    //xml.append(XML_TAG_STRING[XmlTagSet]); // optional
    xml.append(s);
    //xml.append(XML_ENDTAG_STRING[XmlTagSet]); // optional
    xml.append(XML_ENDTAG_VALUE[XmlTagSet]);
    return xml;
}

// Date and Time
bool XmlRpcValue::dateTimeFromXml(std::string const& valueXml, size_t* offset)
{
    size_t valueEnd = valueXml.find('<', *offset);
    if (valueEnd == std::string::npos) {
        return false;   // No end tag;
    }

    std::string stime = valueXml.substr(*offset, valueEnd -*offset);

    struct tm t;
    if (sscanf(stime.c_str(), "%4d%2d%2dT%2d:%2d:%2d", &t.tm_year, &t.tm_mon, &t.tm_mday, &t.tm_hour, &t.tm_min, &t.tm_sec) != 6)
	{
		if (sscanf(stime.c_str(), "%4d-%2d-%2dT%2d:%2d:%2d", &t.tm_year, &t.tm_mon, &t.tm_mday, &t.tm_hour, &t.tm_min, &t.tm_sec) != 6)
		{
			return false;
		}
    }

    t.tm_isdst = -1;
    m_Type = TypeDateTime;
    m_Value.asTime = new struct tm(t);
    *offset += int(stime.length());
    return true;
}

size_t XmlRpcValue::dateTimeToXmlSize(int XmlTagSet) const
{
	if (XmlTagSet == XML_TAG_SET1) {
		return
			sizeof(XmlRpcValue::SET1_XML_TAG_VALUE)+
			sizeof(XmlRpcValue::SET1_XML_TAG_DATETIME)+
			20+
			sizeof(XmlRpcValue::SET1_XML_ENDTAG_DATETIME)+
			sizeof(XmlRpcValue::SET1_XML_ENDTAG_VALUE)
			+1;
	}
	else {
		return
			sizeof(XmlRpcValue::SET2_XML_TAG_VALUE)+
			sizeof(XmlRpcValue::SET2_XML_TAG_DATETIME)+
			20+
			sizeof(XmlRpcValue::SET2_XML_ENDTAG_DATETIME)+
			sizeof(XmlRpcValue::SET2_XML_ENDTAG_VALUE)
			+1;
	}
}
std::string XmlRpcValue::dateTimeToXml(int XmlTagSet) const
{
    // IS8601: "yyyy-mm-ddThh:mm:ssZ"
	// yyyy: Jahreszahl (immer 4 Stellen; ggf. mit führenden Nullen!)
	// mm: Monat (immer 2 Stellen; ggf. mit führender Null!)
	// dd: Tag (immer 2 Stellen; ggf. mit führender Null!)
	// T: Trennzeichen zwischen Datum und Uhrzeit
	struct tm* t = m_Value.asTime;
	char buf[25];
	snprintf(buf, sizeof(buf) - 1, "%04d-%02d-%02dT%02d:%02d:%02dZ", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday, t->tm_hour, t->tm_min, t->tm_sec);
    buf[sizeof(buf) - 1] = 0;

    std::string xml; xml.reserve(dateTimeToXmlSize(XmlTagSet));
	xml.append(XML_TAG_VALUE[XmlTagSet]);
    xml.append(XML_TAG_DATETIME[XmlTagSet]);
    xml.append(buf);
    xml.append(XML_ENDTAG_DATETIME[XmlTagSet]);
    xml.append(XML_ENDTAG_VALUE[XmlTagSet]);
    return xml;
}

// Binary data
bool XmlRpcValue::binaryFromXml(std::string const& valueXml, size_t* offset)
{
    size_t valueEnd = valueXml.find('<', *offset);
    if (valueEnd == std::string::npos) {
        return false;   // No end tag;
    }

    m_Type = TypeBase64;

    std::string asString = valueXml.substr(*offset, valueEnd - *offset);

    // convert from base64 to binary
    CBase64 base64;
    base64.Decode(asString.c_str());

    size_t nBytes = 0;
    const unsigned char*  pData = base64.Decoded(nBytes);
    m_Value.asBinary = new BinaryData((char*)pData, ((char*)pData) + nBytes);

    *offset += int(asString.length());
    return true;
}

size_t XmlRpcValue::binaryToXmlSize(int XmlTagSet) const
{
	if (XmlTagSet == XML_TAG_SET1) {
		return
			sizeof(XmlRpcValue::SET1_XML_TAG_VALUE)+
			sizeof(XmlRpcValue::SET1_XML_TAG_BASE64)+
			sizeof(XmlRpcValue::SET1_XML_ENDTAG_BASE64)+
			sizeof(XmlRpcValue::SET1_XML_ENDTAG_VALUE)
			+1;
	}
	else {
		return
			sizeof(XmlRpcValue::SET2_XML_TAG_VALUE)+
			sizeof(XmlRpcValue::SET2_XML_TAG_BASE64)+
			sizeof(XmlRpcValue::SET2_XML_ENDTAG_BASE64)+
			sizeof(XmlRpcValue::SET2_XML_ENDTAG_VALUE)
			+1;
	}
}
std::string XmlRpcValue::binaryToXml(int XmlTagSet) const
{
    std::string sData("");

    if (!(*m_Value.asBinary).empty()) {
        // convert from binary to base64
        CBase64 base64;
        base64.Encode(*m_Value.asBinary);
        sData = base64.Encoded();
    }

    std::string xml; xml.reserve(binaryToXmlSize(XmlTagSet) + sData.length());
	xml.append(XML_TAG_VALUE[XmlTagSet]);
    xml.append(XML_TAG_BASE64[XmlTagSet]);
    xml.append(sData);
    xml.append(XML_ENDTAG_BASE64[XmlTagSet]);
    xml.append(XML_ENDTAG_VALUE[XmlTagSet]);
    return xml;
}

// Array
bool XmlRpcValue::arrayFromXml(std::string const& valueXml, size_t* offset)
{
    if (XmlRpcUtil::nextTagIs(XML_TAG_DATA[m_XmlTagSet], valueXml, offset, true)) {
		setArraySize(0);
		return true;
	}
    else if (!XmlRpcUtil::nextTagIs(XML_TAG_DATA[m_XmlTagSet], valueXml, offset)) {
        return false;
    }

    m_Type = TypeArray;
    m_Value.asArray = new ValueArray;

    XmlRpcValue v;
    while (v.fromXml(valueXml, offset)) {
        m_Value.asArray->push_back(v);
    }

    // Skip the trailing </data>
    (void)XmlRpcUtil::nextTagIs(XML_ENDTAG_DATA[m_XmlTagSet], valueXml, offset);
    return true;
}

// In general, its preferable to generate the xml of each element of the
// array as it is needed rather than glomming up one big string.
size_t XmlRpcValue::arrayToXmlSize(int XmlTagSet) const
{
	size_t size = (XmlTagSet == XML_TAG_SET1) ? 
		sizeof(XmlRpcValue::SET1_XML_TAG_VALUE)+
		sizeof(XmlRpcValue::SET1_XML_TAG_ARRAY)+
		sizeof(XmlRpcValue::SET1_XML_TAG_DATA)+
		sizeof(XmlRpcValue::SET1_XML_ENDTAG_DATA)+
		sizeof(XmlRpcValue::SET1_XML_ENDTAG_ARRAY)+
		sizeof(XmlRpcValue::SET1_XML_ENDTAG_VALUE)
		+1	: 
		sizeof(XmlRpcValue::SET2_XML_TAG_VALUE)+
		sizeof(XmlRpcValue::SET2_XML_TAG_ARRAY)+
		sizeof(XmlRpcValue::SET2_XML_TAG_DATA)+
		sizeof(XmlRpcValue::SET2_XML_ENDTAG_DATA)+
		sizeof(XmlRpcValue::SET2_XML_ENDTAG_ARRAY)+
		sizeof(XmlRpcValue::SET2_XML_ENDTAG_VALUE)
		+1;
    int s = int(m_Value.asArray->size());
	for (int i = 0; i < s; ++i) {
        size += (*m_Value.asArray)[i].toXmlSize(XmlTagSet);
    }
	return size;
}

std::string XmlRpcValue::arrayToXml(int XmlTagSet) const
{
    std::string xml; xml.reserve(arrayToXmlSize(XmlTagSet));

	xml.append(XML_TAG_VALUE[XmlTagSet]);
	xml.append(XML_TAG_ARRAY[XmlTagSet]);
    xml.append(XML_TAG_DATA[XmlTagSet]);

    int s = int(m_Value.asArray->size());
	for (int i = 0; i < s; ++i) {
        xml.append((*m_Value.asArray)[i].toXml(XmlTagSet));
    }

    xml.append(XML_ENDTAG_DATA[XmlTagSet]);
    xml.append(XML_ENDTAG_ARRAY[XmlTagSet]);
    xml.append(XML_ENDTAG_VALUE[XmlTagSet]);
    return xml;
}

// Struct
bool XmlRpcValue::structFromXml(std::string const &valueXml, size_t* offset)
{
    m_Type = TypeStruct;
    m_Value.asStruct = new ValueStruct;

    std::string tag;
    do
    {
    	size_t oldOffset=*offset;
    	tag = XmlRpcUtil::getNextTag(valueXml, offset);
    	if(tag == XML_TAG_MEMBER[m_XmlTagSet])
		{
			const std::string   name = XmlRpcUtil::parseTag(XML_TAG_NAME[m_XmlTagSet], valueXml, offset);
			XmlRpcValue val(valueXml, offset);
			if (!val.valid())
			{
				//If member end detected, keep invalid member and continue although member wasn't decoded correctly
				if (!XmlRpcUtil::nextTagIs(XML_ENDTAG_MEMBER[m_XmlTagSet], valueXml, offset))
				{
					invalidate();
					return false;
				}
			}
			const std::pair<const std::string, XmlRpcValue> p(name, val);
			m_Value.asStruct->insert(p);
			(void)XmlRpcUtil::nextTagIs(XML_ENDTAG_MEMBER[m_XmlTagSet], valueXml, offset);
		}
    	else if(tag == XML_TAG_ID[m_XmlTagSet])
    	{
    		*offset=oldOffset;
			this->m_StructTypeID = XmlRpcUtil::parseTag(XML_TAG_ID[m_XmlTagSet], valueXml, offset);

    		(void)XmlRpcUtil::nextTagIs(XML_ENDTAG_ID[m_XmlTagSet], valueXml, offset);
    	}
    }
    while(tag.size()>0 && tag != XML_ENDTAG_STRUCT[m_XmlTagSet]);

    return true;
}

size_t XmlRpcValue::structToXmlSize(int XmlTagSet) const
{
	size_t size = (XmlTagSet == XML_TAG_SET1) ? 
		sizeof(XmlRpcValue::SET1_XML_TAG_VALUE)+
		sizeof(XmlRpcValue::SET1_XML_TAG_STRUCT)+
		sizeof(XmlRpcValue::SET1_XML_ENDTAG_STRUCT)+
		sizeof(XmlRpcValue::SET1_XML_ENDTAG_VALUE)
		+1 : 
		sizeof(XmlRpcValue::SET2_XML_TAG_VALUE)+
		sizeof(XmlRpcValue::SET2_XML_TAG_STRUCT)+
		sizeof(XmlRpcValue::SET2_XML_ENDTAG_STRUCT)+
		sizeof(XmlRpcValue::SET2_XML_ENDTAG_VALUE)
		+1;

		if (!this->m_StructTypeID.empty())
		{
			size +=  (XmlTagSet == XML_TAG_SET1) ? 
			sizeof(XmlRpcValue::SET1_XML_TAG_ID)+
			sizeof(XmlRpcValue::SET1_XML_ENDTAG_ID)
			+1 : 
			sizeof(XmlRpcValue::SET2_XML_TAG_ID)+
			sizeof(XmlRpcValue::SET2_XML_ENDTAG_ID)+
			+1;
			size += this->m_StructTypeID.length();
		}

    size_t sizeMember = (XmlTagSet == XML_TAG_SET1) ? 
        sizeof(XmlRpcValue::SET1_XML_TAG_MEMBER)+
	    sizeof(XmlRpcValue::SET1_XML_TAG_NAME)+
	    sizeof(XmlRpcValue::SET1_XML_ENDTAG_NAME)+
        sizeof(XmlRpcValue::SET1_XML_ENDTAG_MEMBER)
        +1 : 
        sizeof(XmlRpcValue::SET2_XML_TAG_MEMBER)+
	    sizeof(XmlRpcValue::SET2_XML_TAG_NAME)+
	    sizeof(XmlRpcValue::SET2_XML_ENDTAG_NAME)+
        sizeof(XmlRpcValue::SET2_XML_ENDTAG_MEMBER)
	    +1;

    ValueStruct::const_iterator it;
    for (it = m_Value.asStruct->begin(); it != m_Value.asStruct->end(); ++it) {
        size += sizeMember;
		size += it->second.toXmlSize(XmlTagSet);
    }
	return size;
}

std::string XmlRpcValue::structToXml(int XmlTagSet) const
{
    std::string xml; xml.reserve(structToXmlSize(XmlTagSet));

	xml.append(XML_TAG_VALUE[XmlTagSet]);
    xml.append(XML_TAG_STRUCT[XmlTagSet]);

	if (!this->m_StructTypeID.empty())
    {
		xml.append(XML_TAG_ID[XmlTagSet]);
		xml.append(XmlRpcUtil::xmlEncode(this->m_StructTypeID));
		xml.append(XML_ENDTAG_ID[XmlTagSet]);
    }

    // In general, its preferable to generate the xml of each element
    // as it is needed rather than glomming up one big string.
    ValueStruct::const_iterator it;
    for (it = m_Value.asStruct->begin(); it != m_Value.asStruct->end(); ++it) {
        xml.append(XML_TAG_MEMBER[XmlTagSet]);
        xml.append(XML_TAG_NAME[XmlTagSet]);
        xml.append(XmlRpcUtil::xmlEncode(it->first));
        xml.append(XML_ENDTAG_NAME[XmlTagSet]);
        xml.append(it->second.toXml(XmlTagSet));
        xml.append(XML_ENDTAG_MEMBER[XmlTagSet]);
    }

    xml.append(XML_ENDTAG_STRUCT[XmlTagSet]);
    xml.append(XML_ENDTAG_VALUE[XmlTagSet]);
    return xml;
}

// Write the value without xml encoding it
std::ostream & XmlRpcValue::write(std::ostream & os) const
{
    switch (m_Type) {
    default:
        break;
    case TypeBoolean:
        {
            os << m_Value.asBool;
            break;
        }
    case TypeInt:
        {
            os << m_Value.asInt;
            break;
        }
    case TypeInt64:
        {
            char buf[25];
#if defined(__GNUC__)
            snprintf(buf, sizeof(buf) - 1, "%lli", (long long)m_Value.asInt64);
#endif // #if defined(__GNUC__)
#if defined(_WIN32)
            snprintf(buf, sizeof(buf) - 1, "%I64i", m_Value.asInt64);
#endif // #if defined(_WIN32)
            buf[sizeof(buf) - 1] = 0;
            os << buf;
            break;
        }
    case TypeFloat:
        {
            os << m_Value.asFloat;
            break;
        }
    case TypeDouble:
        {
            os << m_Value.asDouble;
            break;
        }
    case TypeString:
        {
            os << *m_Value.asString;
            break;
        }
    case TypeDateTime:
        {
            struct tm*  t = m_Value.asTime;
            char buf[20];
            snprintf(buf, sizeof(buf) - 1, "%4d%02d%02dT%02d:%02d:%02d", t->tm_year, t->tm_mon, t->tm_mday, t->tm_hour, t->tm_min, t->tm_sec);
            buf[sizeof(buf) - 1] = 0;
            os << buf;
            break;
        }
    case TypeBase64:
        {
            CBase64 base64;
            base64.Encode(*m_Value.asBinary);
            os << base64.Encoded();
            break;
        }
    case TypeArray:
        {
            int s = int(m_Value.asArray->size());
            os << '{';
            for (int i = 0; i < s; ++i) {
                if (i > 0) {
                    os << ',';
                }
                (*m_Value.asArray)[i].write(os);
            }
            os << '}';
            break;
        }
    case TypeStruct:
        {
            os << '[';
            ValueStruct::const_iterator it;
            for (it = m_Value.asStruct->begin(); it != m_Value.asStruct->end(); ++it) {
                if (it != m_Value.asStruct->begin()) {
                    os << ',';
                }
                os << it->first << ':';
                it->second.write(os);
            }
            os << ']';
            break;
        }
    }
    return os;
}

bool XmlRpcValue::IsFaultResponse(void)
{
    if (XmlRpcValue::TypeStruct != getType()) {
        return false;
    }
    if (!hasMember(FAULTCODE)) {
        return false;
    }
    if (!hasMember(FAULTSTRING)) {
        return false;
    }
    return true;
}

std::string XmlRpcValue::GetFaultString(void)
{
    if (!IsFaultResponse()) {
        return std::string();
    }
    std::string sString = (*this)[FAULTSTRING];
    return sString;
}

int XmlRpcValue::GetFaultCode(void)
{
    if (!IsFaultResponse()) {
        return 0;
    }
    int Code = (*this)[FAULTCODE];
    return Code;
}
/****************************************************************************************************************/
///////////////////// Json ///////////////////////////////////////////////////////////////////////////////////
/****************************************************************************************************************/
/**
 * Parses some text as though it is an integer
 *
 * @access protected
 *
 * @param wchar_t** data Pointer to a wchar_t* that contains the JSON text
 *
 * @return double Returns the double value of the number found
 */
double XmlRpcValue::parseIntFromJson(std::string const& valueJson, size_t* offset)
{
	double integer = 0;
	while (valueJson.size()>(*offset) && valueJson[*offset] >= '0' && valueJson[*offset] <= '9')
	{
		integer = integer * 10 + (valueJson[*offset] - '0');
		(*offset)++;
	}
	return integer;
}
/**
 * Parses some text as though it is a decimal
 *
 * @access protected
 *
 * @param wchar_t** data Pointer to a wchar_t* that contains the JSON text
 *
 * @return double Returns the double value of the decimal found
 */
double XmlRpcValue::parseDecimalFromJson(std::string const& valueJson, size_t* offset)
{
  double decimal = 0.0;
  double factor = 0.1;
  while (valueJson.size()>(*offset) && valueJson[*offset] >= '0' && valueJson[*offset] <= '9')
  {
		int32_t digit = (valueJson[*offset] - '0');
		decimal = decimal + digit * factor;
		factor *= 0.1;
		(*offset)++;
  }
  return decimal;
}
bool XmlRpcValue::parseDateTimeFromJson(std::string const& valueJson, size_t* offset,struct tm& time)
{
	if(valueJson.size()>(*offset)+5 && valueJson[(*offset)+4]=='-')
	{
return false;
/*   must be implemented without Poco. Not implemented yet Stefan Stocker 2017-02-22
		Poco::DateTime 	dateTime;
		int32_t timeZoneDiff = 0;
		const char* start = valueJson.c_str() + (*offset);
		if (Poco::DateTimeParser::tryParse(start,dateTime,timeZoneDiff))
		{
			std::time_t tmpTime = dateTime.timestamp().epochTime();
			time = *std::gmtime(&tmpTime);
			while (valueJson[*offset] != 0)
			{
				if(valueJson[*offset]== '"')
				{
					(*offset)++;
					break;
				}

				(*offset)++;
			}
			return true;
		}
*/
	}
	return false;
}
bool XmlRpcValue::parseStringFromJson(std::string const& valueJson, size_t* offset,std::string& str)
{
	str.clear();
	while (valueJson[*offset] != 0)
	{
		// Save the char so we can change it if need be
		char next_char = valueJson[*offset];
		// Escaping something?
		if (next_char == '\\')
		{
			// Move over the escape char
			(*offset)++;

			// Deal with the escaped char
			switch (valueJson[*offset])
			{
				case '"': next_char = '"'; break;
				case '\\': next_char = '\\'; break;
				case '/': next_char = '/'; break;
				case 'b': next_char = '\b'; break;
				case 'f': next_char = '\f'; break;
				case 'n': next_char = '\n'; break;
				case 'r': next_char = '\r'; break;
				case 't': next_char = '\t'; break;
				case 'u':
				{
					// We need 5 chars (4 hex + the 'u') or its not valid
					if (!(valueJson.size()>(*offset)+5))
						return false;

					// Deal with the chars
					next_char = 0;
					for (int i = 0; i < 4; i++)
					{
						// Do it first to move off the 'u' and leave us on the
						// final hex digit as we move on by one later on
						(*offset)++;

						next_char <<= 4;

						// Parse the hex digit
						if (valueJson[*offset] >= '0' && valueJson[*offset] <= '9')
							next_char |= (valueJson[*offset] - '0');
						else if (valueJson[*offset] >= 'A' && valueJson[*offset] <= 'F')
							next_char |= (10 + (valueJson[*offset] - 'A'));
						else if (valueJson[*offset] >= 'a' && valueJson[*offset] <= 'f')
							next_char |= (10 + (valueJson[*offset] - 'a'));
						else
						{
							// Invalid hex digit = invalid JSON
							return false;
						}
					}
					break;
				}
				// By the spec, only the above cases are allowed
				default:
					return false;
			}
		}
		// End of the string?
		else if (next_char == '"')
		{
			(*offset)++;
			return true;
		}
		// Disallowed char?
		else if (next_char < ' ' && next_char != '\t')
		{
			// SPEC Violation: Allow tabs due to real world cases
			return false;
		}
		// Add the next char
		str += next_char;
		// Move on
		(*offset)++;
	}
	// If we're here, the string ended incorrectly
	return false;
}
/**
 * Creates a JSON encoded string with all required fields escaped
 * Works from http://www.ecma-internationl.org/publications/files/ECMA-ST/ECMA-262.pdf
 * Section 15.12.3.
 *
 * @access private
 *
 * @param std::wstring str The string that needs to have the characters escaped
 *
 * @return std::wstring Returns the JSON string
 */
std::string XmlRpcValue::encodeStringToJson(const std::string &str)
{
	std::string str_out = "\"";

	std::string::const_iterator iter = str.begin();
	while (iter != str.end())
	{
		char chr = *iter;

		if (chr == '"' || chr == '\\' || chr == '/')
		{
			str_out += '\\';
			str_out += chr;
		}
		else if (chr == '\b')
		{
			str_out += "\\b";
		}
		else if (chr == '\f')
		{
			str_out += "\\f";
		}
		else if (chr == '\n')
		{
			str_out += "\\n";
		}
		else if (chr == '\r')
		{
			str_out += "\\r";
		}
		else if (chr == '\t')
		{
			str_out += "\\t";
		}
		/*
		else if (chr < ' ' || chr > 126)
		{
			str_out += "\\u";
			for (int i = 0; i < 4; i++)
			{
				int value = (chr >> 12) & 0xf;
				if (value >= 0 && value <= 9)
					str_out += (char)('0' + value);
				else if (value >= 10 && value <= 15)
					str_out += (char)('A' + (value - 10));
				chr <<= 4;
			}
		}
		*/
		else if (chr < ' ' || chr > 126)
		{
			char buf[7];
            snprintf(buf,sizeof(buf),"\\u%04x",chr & 0xff);
            str_out.append(buf);
		}
		else if (chr < ' ' || chr > 126)
		{

		}
		else
		{
			str_out += chr;
		}

		iter++;
	}

	str_out += "\"";
	return str_out;
}
bool XmlRpcValue::skipWhitespaceFromJson(std::string const& valueJson, size_t* offset)
{
	while (valueJson.size()>(*offset) && (valueJson[(*offset)] == L' ' || valueJson[(*offset)] == L'\t' || valueJson[(*offset)] == L'\r' || valueJson[(*offset)] == L'\n'))
	{
		(*offset)++;
	}
	return valueJson.size()>(*offset);
}
// Decode Json. Destroys any existing value.
bool XmlRpcValue::fromJson(std::string const& valueJson,size_t *offset)
{
	if(valueJson.size()<=(*offset))
		return false;

	// Whitespace at the start?
	if (!skipWhitespaceFromJson(valueJson,offset))
	{
		return false;
	}
	// Is it a string?
	if (valueJson[*offset] == '"')
	{
		(*offset)++;
		std::string str;
		struct tm dateTime;
		//check if it is time
		if(parseDateTimeFromJson(valueJson,offset,dateTime))
		{
			this->m_Type = TypeDateTime;
			this->m_Value.asTime = new struct tm(dateTime);
			return true;
		}
		if(XmlRpcValue::parseStringFromJson(valueJson,offset,str))
		{
			this->m_Type= TypeString;
			this->m_Value.asString = new std::string(str);
			return true;
		}
		else
		{
			this->m_Type=TypeInvalid;
			return false;
		}
	}
	// Is it a boolean?
	else if (((valueJson.size()>(*offset)+4) && strncasecmp(&valueJson[*offset], "true", 4) == 0) || ((valueJson.size()>(*offset)+5) && strncasecmp(&valueJson[*offset], "false", 5) == 0))
	{
		bool value = strncasecmp(&valueJson[*offset], "true", 4) == 0;
		(*offset) += value ? 4 : 5;
		this->m_Value.asBool=value;
		this->m_Type = TypeBoolean;
		return true;
	}
	// Is it a null?
	else if ((valueJson.size()>(*offset)+4) && strncasecmp(&valueJson[*offset], "null", 4) == 0)
	{
		(*offset) += 4;
		this->m_Type = TypeInvalid;
		return true;
	}
	// Is it a number?
	else if (valueJson[*offset] == '-' || (valueJson[*offset] >= '0' && valueJson[*offset] <= '9'))
	{
		// Negative?
		bool neg = valueJson[*offset] == '-';
		if (neg) (*offset)++;

		double number = 0.0;

		// Parse the whole part of the number - only if it wasn't 0
		if (valueJson[*offset] == '0')
			(*offset)++;
		else if (valueJson[*offset] >= '1' && valueJson[*offset] <= '9')
		{
			number = parseIntFromJson(valueJson,offset);
		}
		else
		{
			this->m_Type = TypeInvalid;
			return false;
		}

		bool isDecimal=false;
		// Could be a decimal now...
		if (valueJson[*offset] == '.')
		{
			(*offset)++;
			// Not get any digits?
			if (!(valueJson[*offset] >= '0' && valueJson[*offset] <= '9'))
				return false;

			// Find the decimal and sort the decimal place out
			// Use ParseDecimal as ParseInt won't work with decimals less than 0.1
			// thanks to Javier Abadia for the report & fix
			double decimal = parseDecimalFromJson(valueJson,offset);

			// Save the number
			number += decimal;

			isDecimal=true;
		}

		// Could be an exponent now...
		if (valueJson[*offset] == 'E' || valueJson[*offset] == 'e')
		{
			(*offset)++;

			// Check signage of expo
			bool neg_expo = false;
			if (valueJson[*offset] == '-' || valueJson[*offset] == '+')
			{
				neg_expo = valueJson[*offset] == '-';
				(*offset)++;
			}

			// Not get any digits?
			if (!(valueJson[*offset] >= '0' && valueJson[*offset] <= '9'))
				return NULL;

			// Sort the expo out
			double expo = parseIntFromJson(valueJson,offset);
			for (double i = 0.0; i < expo; i++)
				number = neg_expo ? (number / 10.0) : (number * 10.0);

			isDecimal=true;
		}

		// Was it neg?
		if (neg) number *= -1;

		if(isDecimal)//treat it as double
		{
			this->m_Value.asDouble=number;
			float floatVal = (float)number;
			if((double)floatVal == number)
			{
				this->m_Value.asFloat= floatVal;
				this->m_Type = TypeFloat;
			}
			else
			{
				this->m_Type = TypeDouble;
			}
		}
		else
		{
			this->m_Value.asInt64 = (int64_t)number;
			int32_t intVal = (int32_t)number;
			if (intVal == (int64_t)number)
			{
				this->m_Value.asInt = intVal;
				this->m_Type = TypeInt;
			}
			else
				this->m_Type = TypeInt64;
		}
		return true;
	}
	// An object?
	else if (valueJson[*offset] == '{')
	{
	    this->m_Type = TypeStruct;
	    this->m_Value.asStruct = new ValueStruct;

		(*offset)++;
		while (valueJson[*offset] != 0)
		{
			// Whitespace at the start?
			if (!skipWhitespaceFromJson(valueJson,offset))
			{
				return false;
			}
			// Special case - empty object
			if (valueJson.size()>(*offset) && valueJson[*offset] == '}')
			{
				(*offset)++;
				return true;
			}
			// We want a string now...

			if(valueJson.size()<=(*offset) || valueJson[*offset] != '"')
			{
				return false;
			}
			(*offset)++;

			std::string name;
			if (!parseStringFromJson(valueJson,offset,name))
			{
				return false;
			}

			// More whitespace?
			if (!skipWhitespaceFromJson(valueJson,offset))
			{
				return false;
			}
			// Need a : now
			if (valueJson.size()>(*offset) && valueJson[*offset] != ':')
			{
				return false;
			}
			(*offset)++;

			// More whitespace?
			if (!skipWhitespaceFromJson(valueJson,offset))
			{
				return false;
			}

		    XmlRpcValue val;
		    if(!val.fromJson(valueJson,offset)){
		    	return false;
		    }

		    if(name.compare(StructTypeIDIdent)==0)
		    {
		    	this->setStructTypeID(val);
		    }
		    else
		    {
				const std::pair<const std::string, XmlRpcValue> p(name, val);
				m_Value.asStruct->insert(p);
		    }

			// More whitespace?
			if (!skipWhitespaceFromJson(valueJson,offset))
			{
				return false;
			}

			// End of object?
			if (valueJson[*offset] == '}')
			{
				(*offset)++;
				return true;
			}

			// Want a , now
			if (valueJson[*offset] != ',')
			{
				return false;
			}
			(*offset)++;
		}
		return false;
	}

	// An array?
	else if (valueJson[*offset] == '[')
	{
	    m_Type = TypeArray;
	    m_Value.asArray = new ValueArray;

		(*offset)++;

		while (valueJson[*offset] != 0)
		{
			// Whitespace at the start?
			if (!skipWhitespaceFromJson(valueJson,offset))
			{
				return false;
			}

			// Special case - empty array
			if (this->m_Value.asArray->size() == 0 && valueJson[*offset] == ']')
			{
				(*offset)++;
				return true;
			}

		    XmlRpcValue val;
		    if(!val.fromJson(valueJson,offset)){
		    	return false;
		    }

			// Add the value
		    m_Value.asArray->push_back(val);

			// More whitespace?
			if (!skipWhitespaceFromJson(valueJson,offset))
			{
				return false;
			}

			// End of array?
			if (valueJson[*offset] == ']')
			{
				(*offset)++;
				return true;
			}

			// Want a , now
			if (valueJson[*offset] != ',')
			{
				return false;
			}
			(*offset)++;
		}

		// Only here if we ran out of data
		return false;
	}

	// Ran out of possibilites, it's bad!
	else
	{
		return false;
	}
}

std::string XmlRpcValue::dateTimeToJson() const
{
    // IS8601: "yyyy-mm-ddThh:mm:ssZ"
    // yyyy: Jahreszahl (immer 4 Stellen; ggf. mit führenden Nullen!)
    // mm: Monat (immer 2 Stellen; ggf. mit führender Null!)
    // dd: Tag (immer 2 Stellen; ggf. mit führender Null!)
    // T: Trennzeichen zwischen Datum und Uhrzeit
    struct tm* t = m_Value.asTime;
    char buf[25];
    snprintf(buf, sizeof(buf) - 1, "%04d-%02d-%02dT%02d:%02d:%02dZ", t->tm_year + 1900, t->tm_mon + 1, t->tm_mday, t->tm_hour, t->tm_min, t->tm_sec);
    buf[sizeof(buf) - 1] = 0;

    std::string json;
	json.append("\"");
    json.append(buf);
    json.append("\"");
    return json;
}

std::string XmlRpcValue::binaryToJson() const
{
    std::string sData("\"");

    if (!(*m_Value.asBinary).empty()) {
        // convert from binary to base64
        CBase64 base64;
        base64.Encode(*m_Value.asBinary);
        sData += base64.Encoded();
    }
    sData.append("\"");
    return sData;
}

std::string XmlRpcValue::arrayToJson(int XmlTagSet, int Level) const
{
	std::string json="[";

    int s = int(m_Value.asArray->size());
	for (int i = 0; i < s; ++i) {
		if(i > 0){
			json.append(",");
			if (XmlTagSet == JSON_TAG_SET1_PRETTY) {
				json.append("\r\n");
				json.append(std::string(Level * 3, ' '));
			}
		}
		json.append((*m_Value.asArray)[i].toJson(XmlTagSet, Level - 1));
    }

	json.append("]");

    return json;
}

std::string XmlRpcValue::structToJson(int XmlTagSet, int Level) const
{    
	std::string json = "";
	if (XmlTagSet == JSON_TAG_SET1) 
	{
		json = "{";
	}
	else 
	{
		json = "{\r\n";
	}
	
    // In general, its preferable to generate the xml of each element
    // as it is needed rather than glomming up one big string.
	uint16_t count=0;
	if (!this->m_StructTypeID.empty())
	{
		if (XmlTagSet == JSON_TAG_SET1)
		{
			json.append(XmlRpcValue::encodeStringToJson(StructTypeIDIdent));
			json.append(": ");
			json.append(XmlRpcValue::encodeStringToJson(this->m_StructTypeID));
		}
		else
		{
			json.append(std::string(Level * 3, ' ')).append(XmlRpcValue::encodeStringToJson(StructTypeIDIdent));
			json.append(": ");
			json.append(std::string(Level * 3, ' ')).append(XmlRpcValue::encodeStringToJson(this->m_StructTypeID));
		}
		count++;
	}

    ValueStruct::const_iterator it;
    for (it = m_Value.asStruct->begin(); it != m_Value.asStruct->end(); ++it)
    {
		//Don't add invalid member to json
		if (!it->second.valid())
			continue;

    	if(count>0)
    	{
			json.append(",");
			if (XmlTagSet == JSON_TAG_SET1_PRETTY)
			{
				json.append("\r\n");			
			}
    	}

		if (XmlTagSet == JSON_TAG_SET1)
		{
			json.append(XmlRpcValue::encodeStringToJson(it->first));
		}
		else
		{
			json.append(std::string(Level * 3, ' ')).append(XmlRpcValue::encodeStringToJson(it->first));
		}

        json.append(": ");
		json.append(it->second.toJson(XmlTagSet, Level));
		count++;
    }

	if (XmlTagSet == JSON_TAG_SET1)
	{
		json.append("}");
	}
	else
	{
		json.append("\r\n").append(std::string((Level - 1) * 3, ' ')).append("}");
	}

    return json;
}

std::string XmlRpcValue::toJson(int XmlTagSet, int Level) const
{
    switch (m_Type)
    {
		case TypeBoolean:
		{
			if(this->m_Value.asBool)
				return "true";
			else
				return "false";
		}
		case TypeInt:		return std::to_string((long int)this->m_Value.asInt);
		case TypeInt64:		return std::to_string((long long)this->m_Value.asInt64);
		case TypeFloat:
		{
			if(std::isinf(this->m_Value.asDouble) || std::isnan(this->m_Value.asDouble))
			{
				return "null";
			}
			return std::to_string(this->m_Value.asFloat);
		}
		case TypeDouble:
		{
			if(std::isinf(this->m_Value.asDouble) || std::isnan(this->m_Value.asDouble))
			{
				return "null";
			}
			return std::to_string(this->m_Value.asDouble);
		}
		case TypeString:	return  XmlRpcValue::encodeStringToJson(*m_Value.asString);
		case TypeDateTime:	return dateTimeToJson();
		case TypeBase64: 	return binaryToJson();
		case TypeArray:		return arrayToJson(XmlTagSet, Level + 1);
		case TypeStruct:	return structToJson(XmlTagSet, Level + 1);
		default:			return "{}";
    }
    return std::string();
}

void XmlRpcValue::PrintIf(int Condition, const char* name, const char* text) const
{
    if (0 < Condition) {
        Print(name, text);
    }
    return;
}

void XmlRpcValue::Print(const char* name, const char* text) const
{
	try
	{
		FilePrint(stdout, name, text);
	}
	catch(...)
	{
		FilePrint(stdout, name, "Failed to print value");
	}
    return;
}

void XmlRpcValue::FilePrint(FILE* stream, const char* name, const char* text) const
{
    switch (getType()) {
    case XmlRpcValue::TypeBoolean:
        {
            fprintf(stream, "%s%s = %s, TypeBoolean\n", text, name, (true == ((bool const&)(*this))) ? "true" : "false");
        }
        break;

    case XmlRpcValue::TypeInt:
        {
            fprintf(stream, "%s%s = %i, TypeInt\n", text, name, (int32_t const&)(*this));
        }
        break;

    case XmlRpcValue::TypeInt64:
        {
#if defined(__GNUC__) && !defined(__MINGW32__)
			fprintf(stream, "%s%s = %lli, TypeInt64\n", text, name, (long long const&)(int64_t const&)(*this));	// casting to (long long) compiler need ...
#else
	#if defined(__MINGW32__)
			fprintf(stream, "%s%s = %I64i, TypeInt64\n", text, name, (int64_t const&)(*this));
	#else
		#if defined(_MSC_VER)
			fprintf(stream, "%s%s = %lld, TypeInt64\n", text, name, (int64_t const&)(*this));
		#else
			#pragma message("ATTENTION WARNING: unknown XMLRPC int64ToXml converter for this compiler !!!!")
			#error "ATTENTION: unknown XMLRPC int64ToXml converter for this compiler !!!!"
		#endif
	#endif
#endif
        }
        break;

    case XmlRpcValue::TypeFloat:
        {
            char buf[100];

#if !defined(GINS_NAN)
            snprintf(buf, sizeof(buf) - 1, getFloatFormat().c_str(), (float const&)(*this));
#else
            float Value = (float const&)(*this);
            if (IsNaN(Value)) {
                snprintf(buf, sizeof(buf) - 1, "%s", XmlRpcValue::NotANumber);
            }
            else {
                snprintf(buf, sizeof(buf) - 1, getFloatFormat().c_str(), (float const&)(*this));
            }
#endif // #if !defined(GINS_NAN)
            buf[sizeof(buf) - 1] = 0;
            fprintf(stream, "%s%s = %s, TypeFloat\n", text, name, buf);
        }
        break;

    case XmlRpcValue::TypeDouble:
        {
            char buf[100];

#if !defined(GINS_NAN)
            snprintf(buf, sizeof(buf) - 1, getDoubleFormat().c_str(), (double const&)(*this));
#else
            double Value = (double const&)(*this);
            if (IsNaN(Value)) {
                snprintf(buf, sizeof(buf) - 1, "%s", XmlRpcValue::NotANumber);
            }
            else {
                snprintf(buf, sizeof(buf) - 1, getDoubleFormat().c_str(), (double const&)(*this));
            }
#endif // #if !defined(GINS_NAN)
            buf[sizeof(buf) - 1] = 0;
            fprintf(stream, "%s%s = %s, TypeDouble\n", text, name, buf);
        }
        break;

    case XmlRpcValue::TypeString:
        {
            std::string str((std::string const&)(*this), 0, 100);
            fprintf(stream, "%s%s = \"%s", text, name, str.c_str());
            if (str.length() < ((std::string  const&)(*this)).length()) {
                fprintf(stream, "...\", TypeString\n");
            }
            else {
                fprintf(stream, "\", TypeString\n");
            }
        }
        break;

    case XmlRpcValue::TypeDateTime:
        {
            struct tm DateAndTime = (struct tm const&)(*this);
            fprintf(stream, "%s%s, TypeDateTime, %02i.%02i.%04i %02i:%02i:%02i\n", text, name, DateAndTime.tm_mday, (DateAndTime.tm_mon + 1), (DateAndTime.tm_year + 1900), DateAndTime.tm_hour, DateAndTime.tm_min, DateAndTime.tm_sec);
        }
        break;

    case XmlRpcValue::TypeBase64:
        {
            uint32_t size = (uint32_t)((BinaryData const&)(*this)).size();
            if (0 < size) {
                fprintf(stream, "%s%s, TypeBase64, size = %u, data = ", text, name, size);
            }
            else {
                fprintf(stream, "%s%s, TypeBase64, size = %u", text, name, size);
            }

            uint32_t n = 0;
            for (n = 0; (n < size) && (n < 100); n++) {
                fprintf(stream, "0x%02x, ", ((BinaryData  const&)(*this))[n]);
            }

            if (n < size) {
                fprintf(stream, "...\n");
            }
            else {
                fprintf(stream, "\n");
            }
        }
        break;

    case XmlRpcValue::TypeArray:
        {
            uint32_t size = (uint32_t)this->size();
            fprintf(stream, "%s%s, TypeArray, size = %u\n", text, name, size);
            for (uint32_t n = 0; (n < size) && (n < 100); n++) {
                char tmp[20];
                sprintf(tmp, "[%u]", n);

                std::string sName = name;
                sName += tmp;
                (*this)[n].FilePrint(stream, (char*)sName.c_str(), text);
            }   // for()
        }
        break;

    case XmlRpcValue::TypeStruct:
        {
            std::vector<std::string>    members;
            getMembers(members);

            uint32_t size = (uint32_t)members.size();
            fprintf(stream, "%s%s, TypeStruct, size = %u\n", text, name, size);
            for (uint32_t n = 0; (n < size) && (n < 100); n++) {
                std::string sName = name;
                sName += "[" + members[n] + "]";
                (*this)[members[n]].FilePrint(stream, sName.c_str(), text);
            }   // for()
        }
        break;

    case XmlRpcValue::TypeInvalid:
        {
            fprintf(stream, "%s%s, TypeInvalid\n", text, name);
        }
        break;

    default:
        {
            fprintf(stream, "%s%s, unknown type (%i)\n", text, name, getType());
        }
        break;
    }

    return;
}

//========================================================================
} // namespace GInsXmlRpc
//========================================================================

// ostream
std::ostream& operator<<(std::ostream& os, GInsXmlRpc::XmlRpcValue& v) {

    // If you want to output in xml format:
    //return os << v.toXml();
    return v.write(os);
}
