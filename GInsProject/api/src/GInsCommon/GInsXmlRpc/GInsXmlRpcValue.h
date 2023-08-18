#ifndef _GINSXMLRPCVALUE_H_
#define _GINSXMLRPCVALUE_H_

#include <stdio.h>
#include <map>
#include <string>
#include <vector>
#include <time.h>
#include <stdint.h>

#include "ginsdefs.h"    // GINS_SINT64
#include "GInsXmlRpcUtil.h"

//========================================================================
namespace GInsXmlRpc {
//========================================================================

class XmlRpcValue
{
public:
    // Xml-Tags
    static const char SET1_XML_TAG_VALUE[];
    static const char SET2_XML_TAG_VALUE[];
    static const char* XML_TAG_VALUE[];

    static const char SET1_XML_ENDTAG_VALUE[];
    static const char SET2_XML_ENDTAG_VALUE[];
    static const char* XML_ENDTAG_VALUE[];

    static const char SET1_XML_TAG_BOOLEAN[];
    static const char SET2_XML_TAG_BOOLEAN[];
    static const char* XML_TAG_BOOLEAN[];

    static const char SET1_XML_ENDTAG_BOOLEAN[];
    static const char SET2_XML_ENDTAG_BOOLEAN[];
    static const char* XML_ENDTAG_BOOLEAN[];

    static const char SET1_XML_TAG_FLOAT[];
    static const char SET2_XML_TAG_FLOAT[];
    static const char* XML_TAG_FLOAT[];

    static const char SET1_XML_ENDTAG_FLOAT[];
    static const char SET2_XML_ENDTAG_FLOAT[];
    static const char* XML_ENDTAG_FLOAT[];

    static const char SET1_XML_TAG_DOUBLE[];
    static const char SET2_XML_TAG_DOUBLE[];
    static const char* XML_TAG_DOUBLE[];

    static const char SET1_XML_ENDTAG_DOUBLE[];
    static const char SET2_XML_ENDTAG_DOUBLE[];
    static const char* XML_ENDTAG_DOUBLE[];

    static const char SET1_XML_TAG_INT[];
    static const char SET2_XML_TAG_INT[];
    static const char* XML_TAG_INT[];

    static const char SET1_XML_ENDTAG_INT[];
    static const char SET2_XML_ENDTAG_INT[];
    static const char* XML_ENDTAG_INT[];

    static const char SET1_XML_TAG_I4[];
    static const char SET2_XML_TAG_I4[];
    static const char* XML_TAG_I4[];

    static const char SET1_XML_ENDTAG_I4[];
    static const char SET2_XML_ENDTAG_I4[];
    static const char* XML_ENDTAG_I4[];

    static const char SET1_XML_TAG_I8[];
    static const char SET2_XML_TAG_I8[];
    static const char* XML_TAG_I8[];

    static const char SET1_XML_ENDTAG_I8[];
    static const char SET2_XML_ENDTAG_I8[];
    static const char* XML_ENDTAG_I8[];

    static const char SET1_XML_TAG_STRING[];
    static const char SET2_XML_TAG_STRING[];
    static const char* XML_TAG_STRING[];

    static const char SET1_XML_ENDTAG_STRING[];
    static const char SET2_XML_ENDTAG_STRING[];
    static const char* XML_ENDTAG_STRING[];

    static const char SET1_XML_TAG_DATETIME[];
    static const char SET2_XML_TAG_DATETIME[];
    static const char* XML_TAG_DATETIME[];

    static const char SET1_XML_ENDTAG_DATETIME[];
    static const char SET2_XML_ENDTAG_DATETIME[];
    static const char* XML_ENDTAG_DATETIME[];

    static const char SET1_XML_TAG_BASE64[];
    static const char SET2_XML_TAG_BASE64[];
    static const char* XML_TAG_BASE64[];

    static const char SET1_XML_ENDTAG_BASE64[];
    static const char SET2_XML_ENDTAG_BASE64[];
    static const char* XML_ENDTAG_BASE64[];

    static const char SET1_XML_TAG_ARRAY[];
    static const char SET2_XML_TAG_ARRAY[];
    static const char* XML_TAG_ARRAY[];

    static const char SET1_XML_ENDTAG_ARRAY[];
    static const char SET2_XML_ENDTAG_ARRAY[];
    static const char* XML_ENDTAG_ARRAY[];

    static const char SET1_XML_TAG_DATA[];
    static const char SET2_XML_TAG_DATA[];
    static const char* XML_TAG_DATA[];

    static const char SET1_XML_ENDTAG_DATA[];
    static const char SET2_XML_ENDTAG_DATA[];
    static const char* XML_ENDTAG_DATA[];

    static const char SET1_XML_TAG_STRUCT[];
    static const char SET2_XML_TAG_STRUCT[];
    static const char* XML_TAG_STRUCT[];

    static const char SET1_XML_ENDTAG_STRUCT[];
    static const char SET2_XML_ENDTAG_STRUCT[];
    static const char* XML_ENDTAG_STRUCT[];

    static const char SET1_XML_TAG_MEMBER[];
    static const char SET2_XML_TAG_MEMBER[];
    static const char* XML_TAG_MEMBER[];

    static const char SET1_XML_ENDTAG_MEMBER[];
    static const char SET2_XML_ENDTAG_MEMBER[];
    static const char* XML_ENDTAG_MEMBER[];

    static const char SET1_XML_TAG_NAME[];
    static const char SET2_XML_TAG_NAME[];
    static const char* XML_TAG_NAME[];

    static const char SET1_XML_ENDTAG_NAME[];
    static const char SET2_XML_ENDTAG_NAME[];
    static const char* XML_ENDTAG_NAME[];

    static const char SET1_XML_TAG_ID[];
    static const char SET2_XML_TAG_ID[];
    static const char* XML_TAG_ID[];

    static const char SET1_XML_ENDTAG_ID[];
    static const char SET2_XML_ENDTAG_ID[];
    static const char* XML_ENDTAG_ID[];

    static const char NotANumber[];
    static const char StructTypeIDIdent[];

public:
    // Types
    enum Type {
        TypeInvalid,
        TypeBoolean,
        TypeInt,
        TypeFloat,
        TypeDouble,
        TypeString,
        TypeDateTime,
        TypeBase64,
        TypeArray,
        TypeStruct,
        TypeInt64
    };

public:
    // Non-primitive types
    typedef std::vector<char> BinaryData;
    typedef std::vector<XmlRpcValue> ValueArray;
    typedef std::map<std::string, XmlRpcValue> ValueStruct;

public:
    // Constructors
	XmlRpcValue(void) : m_XmlTagSet(XML_TAG_SET1), m_ValueXml(""), m_StructTypeID(""), m_Type(TypeInvalid)
    {
        m_Value.asBinary = 0;
    }

	XmlRpcValue(bool value) : m_XmlTagSet(XML_TAG_SET1), m_ValueXml(""), m_StructTypeID(""), m_Type(TypeBoolean)
    {
        m_Value.asBool = value;
    }

	XmlRpcValue(int32_t value) : m_XmlTagSet(XML_TAG_SET1), m_ValueXml(""), m_StructTypeID(""), m_Type(TypeInt)
    {
        m_Value.asInt = value;
    }

	XmlRpcValue(uint32_t value) : m_XmlTagSet(XML_TAG_SET1), m_ValueXml(""), m_StructTypeID(""), m_Type(TypeInt64)
    {
        m_Value.asInt64 = value;
    }

	XmlRpcValue(int64_t value) : m_XmlTagSet(XML_TAG_SET1), m_ValueXml(""), m_StructTypeID(""), m_Type(TypeInt64)
    {
        m_Value.asInt64 = value;
    }

	XmlRpcValue(float value) : m_XmlTagSet(XML_TAG_SET1), m_ValueXml(""), m_StructTypeID(""), m_Type(TypeFloat)
    {
        m_Value.asFloat = value;
    }

	XmlRpcValue(double value) : m_XmlTagSet(XML_TAG_SET1), m_ValueXml(""), m_StructTypeID(""), m_Type(TypeDouble)
    {
        m_Value.asDouble = value;
    }

	XmlRpcValue(std::string const& value) : m_XmlTagSet(XML_TAG_SET1), m_ValueXml(""), m_StructTypeID(""), m_Type(TypeString)
    {
        m_Value.asString = new std::string(value);
    }

	XmlRpcValue(const char* value) : m_XmlTagSet(XML_TAG_SET1), m_ValueXml(""), m_StructTypeID(""), m_Type(TypeString)
    {
        m_Value.asString = new std::string(value);
    }

	XmlRpcValue(const char* value, int nChars) : m_XmlTagSet(XML_TAG_SET1), m_ValueXml(""), m_StructTypeID(""), m_Type(TypeString)
    {
        m_Value.asString = new std::string(value, nChars);
    }

	XmlRpcValue(struct tm const& value) : m_XmlTagSet(XML_TAG_SET1), m_ValueXml(""), m_StructTypeID(""), m_Type(TypeDateTime)
    {
        m_Value.asTime = new struct tm(value);
    }

	XmlRpcValue(void* value, int nBytes) : m_XmlTagSet(XML_TAG_SET1), m_ValueXml(""), m_StructTypeID(""), m_Type(TypeBase64)
    {
        m_Value.asBinary = new BinaryData((char*)value, ((char*)value) + nBytes);
    }

	XmlRpcValue(BinaryData const& value) : m_XmlTagSet(XML_TAG_SET1), m_ValueXml(""), m_StructTypeID(""), m_Type(TypeBase64)
    {
        m_Value.asBinary = new BinaryData(value);
    }
public:
    // Construct from xml, beginning at *offset chars into the string, updates offset
	XmlRpcValue(std::string const& xml, size_t* offset) : m_XmlTagSet(XML_TAG_SET1), m_ValueXml(""), m_StructTypeID(""), m_Type(TypeInvalid)
    {
        if (!fromXml(xml, offset)) {
            m_Type = TypeInvalid;
        }
    }

public:
    // Copy Constructor
	XmlRpcValue(XmlRpcValue const& rhs) : m_XmlTagSet(XML_TAG_SET1), m_ValueXml(""), m_StructTypeID(""), m_Type(TypeInvalid)
    {
        *this = rhs;
    }

public:
    // Destructor
    virtual ~XmlRpcValue(void)
    {
        invalidate();
    }

public:
    // Erase the current value
    void clear(void)
    {
        invalidate();
    }

public:
    XmlRpcValue& operator=(XmlRpcValue const& rhs);

    XmlRpcValue& operator=(bool const& rhs)
    {
        return operator=(XmlRpcValue(rhs));
    }

    XmlRpcValue& operator=(int32_t const& rhs)
    {
        return operator=(XmlRpcValue(rhs));
    }

    XmlRpcValue& operator=(int64_t const& rhs)
    {
        return operator=(XmlRpcValue(rhs));
    }

    XmlRpcValue& operator=(float const& rhs)
    {
        return operator=(XmlRpcValue(rhs));
    }

    XmlRpcValue& operator=(double const& rhs)
    {
        return operator=(XmlRpcValue(rhs));
    }

    XmlRpcValue& operator=(const char* rhs)
    {
        return operator=(XmlRpcValue(std::string(rhs)));
    }

    XmlRpcValue& operator=(struct tm const& rhs)
    {
        return operator=(XmlRpcValue(rhs));
    }

    XmlRpcValue& operator=(BinaryData const& rhs)
    {
        return operator=(XmlRpcValue(rhs));
    }

public:
    bool operator==(XmlRpcValue const& other) const;
    bool operator!=(XmlRpcValue const& other) const;

#ifdef STRICT_TYPE_ACCESS
public:
    operator bool const&() const
    {
        assertTypeOrInvalid(TypeBoolean);
        return m_Value.asBool;
    }
    operator bool&()
    {
        assertTypeOrInvalid(TypeBoolean);
        return m_Value.asBool;
    }
    operator int32_t const&() const
    {
        assertTypeOrInvalid(TypeInt);
        return m_Value.asInt;
    }
    operator int32_t&()
    {
        assertTypeOrInvalid(TypeInt);
        return m_Value.asInt;
    }
    operator int64_t const&() const
    {
        assertTypeOrInvalid(TypeInt64);
        return m_Value.asInt64;
    }
    operator int64_t&()
    {
        assertTypeOrInvalid(TypeInt64);
        return m_Value.asInt64;
    }
    operator float const&() const
    {
        assertTypeOrInvalid(TypeFloat);
        return m_Value.asFloat;
    }
    operator float&()
    {
        assertTypeOrInvalid(TypeFloat);
        return m_Value.asFloat;
    }
    operator double const&() const
    {
        assertTypeOrInvalid(TypeDouble);
        return m_Value.asDouble;
    }
    operator double&()
    {
        assertTypeOrInvalid(TypeDouble);
        return m_Value.asDouble;
    }
#endif
public:
    bool toBoolean() const;
    int32_t toInt() const;
    int64_t toInt64() const;
    float toFloat() const;
    double toDouble() const;

    operator bool() const
    {
    	return this->toBoolean();
    }

    operator int32_t() const
	{
    	return this->toInt();
	}

    operator int64_t() const
    {
    	return this->toInt64();
    }

    operator float() const
    {
    	return this->toFloat();
    }

    operator double() const
    {
    	return this->toDouble();
    }

    operator std::string const&() const
    {
        assertTypeOrInvalid(TypeString);
        return *m_Value.asString;
    }
    operator std::string&()
    {
        assertTypeOrInvalid(TypeString);
        return *m_Value.asString;
    }

    operator BinaryData const&() const
    {
        assertTypeOrInvalid(TypeBase64);
        return *m_Value.asBinary;
    }
    operator BinaryData&()
    {
        assertTypeOrInvalid(TypeBase64);
        return *m_Value.asBinary;
    }

    operator struct tm const&() const
    {
        assertTypeOrInvalid(TypeDateTime);
        return *m_Value.asTime;
    }
    operator struct tm&()
    {
        assertTypeOrInvalid(TypeDateTime);
        return *m_Value.asTime;
    }

public:
    XmlRpcValue const& operator[](int i) const
    {
        assertArray(i + 1);
        return (*m_Value.asArray)[i];
    }
    XmlRpcValue& operator[](int i)
    {
        assertArrayOrExpand(i + 1);
        return (*m_Value.asArray)[i];
    }

    XmlRpcValue const& operator[](std::string const& k) const
    {
        assertStruct();
        return (*m_Value.asStruct)[k];
    }
    XmlRpcValue& operator[](std::string const& k)
    {
        assertStruct();
        return (*m_Value.asStruct)[k];
    }

    XmlRpcValue const& operator[](const char* k) const
    {
        assertStruct();
        std::string s(k);
        return (*m_Value.asStruct)[s];
    }
    XmlRpcValue& operator[](const char* k)
    {
        assertStruct();
        std::string s(k);
        return (*m_Value.asStruct)[s];
    }
public:
    // Accessors
    // Return true if the value has been set to something.
    bool valid(void) const
    {
        return m_Type != TypeInvalid;
    }

    // Return the type of the value stored.
    Type getType(void) const
    {
        return m_Type;
    }

    // Return the size for string, base64, array, and struct values.
	int size(void) const;

    // Return binary data for base64 values.
    const BinaryData* getBinaryData(void) const;

    // Return value at the given position for base64 values.
    char getBinaryDataAt(size_t i) const;

    // initializes the array with init value
    void initArray(const XmlRpcValue &initValue);

    // delete a value from the array
    void deleteArrayValue(int index);

    // inserts a value to the array
    // if index is outside existing range, it is added
    void insertArrayValue(int index, const XmlRpcValue &value);

    // Specify the size for array values. Array values will grow beyond this size if needed.
    // Clears the array, if size is <= 0.
    // Array will also shrink to this size
    void setArraySize(int size);
    inline void setSize(int size){setArraySize(size);}

    // Specify the size for array values. Array values will grow beyond this size if needed.
    // Clears the array, if size is <= 0.
    // Array will also shrink to this size
    // If expanded, initializes the array with init value
    void setArraySizeAndInit(int size,const XmlRpcValue &initValue);

    // Check the size for array value or expand if too small
    // Clears the array, if size is <= 0.
    // If expanded, initializes the array with init value
    // Array will not shrink to this size
    void checkArraySizeOrExpand(int size);

    // Check for the existence of a struct member by name.
    bool hasMember(const std::string& name) const;

    // Get a struct member value by name.
    bool getMember(const std::string& name, XmlRpcValue& value) const;

    // Get a struct member type by name.
    Type getMemberType(const std::string& name) const;

    // Get a struct ID if member has type struct
    std::string getMemberStructTypeID(const std::string& ID) const;

    // Get/set a struct ID if this is type struct
    std::string getStructTypeID() const;
    bool setStructTypeID(const std::string &ID);

    // Delets a struct member by name.
    bool deleteMember(const std::string& name);

    // Get a list of the names of all struct members.
    bool getMembers(std::vector<std::string>& members) const;

    // Get the count of all struct members.
    int countMembers(void) const;

    // Decode xml. Destroys any existing value.
    bool fromXml(std::string const& valueXml, size_t* offset);

    // Encode the value in xml
    std::string toXml(int XmlTagSet = XML_TAG_UNDEF) const;
    size_t toXmlSize(int XmlTagSet = XML_TAG_UNDEF) const;

    void setXmlTagSet(int XmlTagSet = XML_TAG_UNDEF)
    {
        if (XML_TAG_UNDEF == XmlTagSet) {
            return;
        }
        m_XmlTagSet = XmlTagSet;
        if ((XML_TAG_SET1 != m_XmlTagSet) && (XML_TAG_SET2 != m_XmlTagSet) && (JSON_TAG_SET1 != m_XmlTagSet) && (JSON_TAG_SET1_PRETTY != m_XmlTagSet)) {
            m_XmlTagSet = XML_TAG_SET1;
        }
        return;
    }
    int getXmlTagSet(void) const
    {
        return m_XmlTagSet;
    }
	/*
#ifdef _DEBUG
    const std::string& getXml(void) const
    {
        return m_ValueXml;
    }
#endif // #ifdef _DEBUG
*/

    // Write the value (no xml encoding)
    std::ostream& write(std::ostream& os) const;

    // Formatting
    // Return the format used to write float values.
    static std::string const& getFloatFormat(void)
    {
        return m_FloatFormat;
    }

    // Specify the format used to write float values.
    static void setFloatFormat(const char* f)
    {
        m_FloatFormat = f;
    }

    // Return the format used to write double values.
    static std::string const& getDoubleFormat(void)
    {
        return m_DoubleFormat;
    }

    // Specify the format used to write double values.
    static void setDoubleFormat(const char* f)
    {
        m_DoubleFormat = f;
    }

// Helper
public:
    bool IsFaultResponse(void);
    std::string GetFaultString(void);
    int GetFaultCode(void);
    void PrintIf(int Condition, const char* name = "XmlRpcValue", const char* text = 0) const;
    void Print(const char* name = "XmlRpcValue", const char* text = 0) const;
    void FilePrint(FILE* stream, const char* name = "XmlRpcValue", const char* text = 0) const;

//Direct Pointer Access
public:
	XmlRpcValue* GetMemberPtr(const std::string& name);
	XmlRpcValue* GetArrayElementPtr(int index);

// Clean up
protected:
    void invalidate(void);

// Type checking
protected:
    void assertTypeOrInvalid(Type t) const;
    void assertTypeOrInvalid(Type t);
    void assertArray(int size) const;
    void assertArrayOrExpand(int size);
    void assertStruct(void) const;
    void assertStruct(void);
    void assertBinaryData(size_t size) const;
    void assertBinaryData(size_t size);

// XML decoding
private://internal use only!
    bool boolFromXml(std::string const& valueXml, size_t* offset);
    bool intFromXml(std::string const& valueXml, size_t* offset);
    bool int64FromXml(std::string const& valueXml, size_t* offset);
    bool floatFromXml(std::string const& valueXml, size_t* offset);
    bool doubleFromXml(std::string const& valueXml, size_t* offset);
    bool stringFromXml(std::string const& valueXml, size_t* offset);
    bool dateTimeFromXml(std::string const& valueXml, size_t* offset);
    bool binaryFromXml(std::string const& valueXml, size_t* offset);
    bool arrayFromXml(std::string const& valueXml, size_t* offset);
    bool structFromXml(std::string const& valueXml, size_t* offset);
// XML encoding
private://internal use only!
    std::string boolToXml(int XmlTagSet = XML_TAG_SET1) const;
    std::string intToXml(int XmlTagSet = XML_TAG_SET1) const;
    std::string int64ToXml(int XmlTagSet = XML_TAG_SET1) const;
    std::string floatToXml(int XmlTagSet = XML_TAG_SET1) const;
    std::string doubleToXml(int XmlTagSet = XML_TAG_SET1) const;
    std::string stringToXml(int XmlTagSet = XML_TAG_SET1) const;
    std::string dateTimeToXml(int XmlTagSet = XML_TAG_SET1) const;
    std::string binaryToXml(int XmlTagSet = XML_TAG_SET1) const;
    std::string arrayToXml(int XmlTagSet = XML_TAG_SET1) const;
    std::string structToXml(int XmlTagSet = XML_TAG_SET1) const;

    size_t boolToXmlSize(int XmlTagSet = XML_TAG_SET1) const;
	size_t intToXmlSize(int XmlTagSet = XML_TAG_SET1) const;
	size_t int64ToXmlSize(int XmlTagSet = XML_TAG_SET1) const;
	size_t floatToXmlSize(int XmlTagSet = XML_TAG_SET1) const;
	size_t doubleToXmlSize(int XmlTagSet = XML_TAG_SET1) const;
	size_t stringToXmlSize(int XmlTagSet = XML_TAG_SET1) const;
	size_t dateTimeToXmlSize(int XmlTagSet = XML_TAG_SET1) const;
	size_t binaryToXmlSize(int XmlTagSet = XML_TAG_SET1) const;
	size_t arrayToXmlSize(int XmlTagSet = XML_TAG_SET1) const;
	size_t structToXmlSize(int XmlTagSet = XML_TAG_SET1) const;

private://internal use only!
// JSon decoding
	//helper
	static double 		parseIntFromJson(std::string const& valueJson, size_t* offset);
	static double 		parseDecimalFromJson(std::string const& valueJson, size_t* offset);
	static bool 		parseStringFromJson(std::string const& valueJson, size_t* offset,std::string& str);
	static bool			parseDateTimeFromJson(std::string const& valueJson, size_t* offset,struct tm& time);
	static std::string 	encodeStringToJson(const std::string &str);
	static bool 		skipWhitespaceFromJson(std::string const& valueJson, size_t* offset);
//Json encoding
    std::string 	dateTimeToJson() const;
    std::string 	binaryToJson() const;
	std::string 	arrayToJson(int XmlTagSet, int Level) const;
	std::string 	structToJson(int XmlTagSet, int Level) const;

    // Decode json. Destroys any existing value.
    bool fromJson(std::string const& valueJson,size_t *offset);
    // Encode the value in json
	std::string toJson(int XmlTagSet, int Level) const;
protected:
    // Format strings
    static std::string  m_FloatFormat;
    static std::string  m_DoubleFormat;

    // Encoding from/to xml
    int32_t             m_XmlTagSet;

    // For debugging
    std::string         m_ValueXml;

    // ID string of struct type
    std::string         m_StructTypeID;

    // Type
    Type                m_Type;

    // Value
    union {
        bool            asBool;
        int32_t         asInt;
        int64_t         asInt64;
        float           asFloat;
        double          asDouble;
        struct tm*      asTime;
        std::string*    asString;
        BinaryData*     asBinary;
        ValueArray*     asArray;
        ValueStruct*    asStruct;
    } m_Value;
};  // class XmlRpcValue

//========================================================================
} // namespace GInsXmlRpc
//========================================================================

std::ostream& operator<<(std::ostream& os, GInsXmlRpc::XmlRpcValue& v);

//========================================================================
//========================================================================
#endif // _GINSXMLRPCVALUE_H_
