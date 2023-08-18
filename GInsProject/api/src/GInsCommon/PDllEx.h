//=============================================================================
//	Class:      PDllEx
//  Authors:    MicHael Galkovsky, Pervasive Software
//              Jan-Marc Stranz, imc Messsysteme GmbH
//  Purpose:    Base class to wrap dynamic use of dll
//=============================================================================
#if !defined (_PDLLEX_H_)
#define _PDLLEX_H_

//=============================================================================
// Include
//=============================================================================
#include <windows.h>
#include <winbase.h>
#include "ginsportabletrace.h"

//=============================================================================
// Define
//=============================================================================
#define FUNC_LOADED 3456

//function declarations according to the number of parameters
//define the type
//declare a variable of that type
//declare a member function by an other name as the dll function
//check for dll handle
//if this is the first call to the function then try to load it
//if not then if the function was loaded successfully make a call to it
//otherwise return a NULL cast to the return parameter.

//=============================================================================
// DECLARE_FUNCTION*_EX: all calling conventions
//=============================================================================
#define DECLARE_FUNCTION0_EX(retVal, CallType, PublicFuncName, FuncName) \
private: \
	typedef  retVal (CallType * TYPE_##FuncName)(); \
	TYPE_##FuncName m_##FuncName; \
	short m_is##FuncName; \
public: \
	retVal PublicFuncName() \
	{ \
		if (m_dllHandle) \
		{ \
			if (FUNC_LOADED != m_is##FuncName) \
			{\
				m_##FuncName = NULL; \
				m_##FuncName = (TYPE_##FuncName)GetProcAddress(m_dllHandle, #FuncName); \
				m_is##FuncName = FUNC_LOADED;\
			}\
			if (NULL != m_##FuncName) \
				return m_##FuncName(); \
            else  {\
                TRACE("PDLLEX(): unknown function #FuncName"); \
                return (retVal)NULL; \
		    } \
		} \
		else \
			return (retVal)NULL; \
	}   	

#define DECLARE_FUNCTION1_EX(retVal, CallType, PublicFuncName, FuncName, Param1) \
private: \
	typedef  retVal (CallType * TYPE_##FuncName)(Param1); \
	TYPE_##FuncName m_##FuncName; \
	short m_is##FuncName;\
public: \
	retVal PublicFuncName(Param1 p1) \
	{ \
		if (m_dllHandle) \
		{ \
			if (FUNC_LOADED != m_is##FuncName) \
			{\
				m_##FuncName = NULL; \
				m_##FuncName = (TYPE_##FuncName)GetProcAddress(m_dllHandle, #FuncName); \
				m_is##FuncName = FUNC_LOADED;\
			}\
			if (NULL != m_##FuncName) \
				return m_##FuncName(p1); \
            else  {\
                TRACE("PDLLEX(): unknown function #FuncName"); \
                return (retVal)NULL; \
		    } \
		} \
		else \
			return (retVal)NULL; \
	}

#define DECLARE_FUNCTION1_VOID_EX(retVal, CallType, PublicFuncName, FuncName, Param1) \
private: \
	typedef  retVal (CallType * TYPE_##FuncName)(Param1); \
	TYPE_##FuncName m_##FuncName; \
	short m_is##FuncName;\
public: \
	retVal PublicFuncName(Param1 p1) \
	{ \
		if (m_dllHandle) \
		{ \
			if (FUNC_LOADED != m_is##FuncName) \
			{\
				m_##FuncName = NULL; \
				m_##FuncName = (TYPE_##FuncName)GetProcAddress(m_dllHandle, #FuncName); \
				m_is##FuncName = FUNC_LOADED;\
			}\
			if (NULL != m_##FuncName) \
				m_##FuncName(p1); \
		} \
	}

#define DECLARE_FUNCTION2_EX(retVal, CallType, PublicFuncName, FuncName, Param1, Param2) \
private: \
	typedef  retVal (CallType * TYPE_##FuncName)(Param1, Param2); \
	TYPE_##FuncName m_##FuncName; \
	short m_is##FuncName;\
public: \
	retVal PublicFuncName(Param1 p1, Param2 p2) \
	{\
		if (m_dllHandle)\
		{\
			if (FUNC_LOADED != m_is##FuncName) \
			{\
				m_##FuncName = NULL; \
				m_##FuncName = (TYPE_##FuncName)GetProcAddress(m_dllHandle, #FuncName); \
				m_is##FuncName = FUNC_LOADED;\
			}\
			if (NULL != m_##FuncName) \
				return m_##FuncName(p1, p2); \
            else  {\
                TRACE("PDLLEX(): unknown function #FuncName"); \
                return (retVal)NULL; \
		    } \
		} \
		else\
			return (retVal)NULL; \
	}

#define DECLARE_FUNCTION3_EX(retVal, CallType, PublicFuncName, FuncName, Param1, Param2, Param3) \
private: \
	typedef  retVal (CallType * TYPE_##FuncName)(Param1, Param2, Param3); \
	TYPE_##FuncName m_##FuncName; \
	short m_is##FuncName;\
public: \
	retVal PublicFuncName(Param1 p1, Param2 p2, Param3 p3) \
	{\
		if (m_dllHandle)\
		{\
			if (FUNC_LOADED != m_is##FuncName) \
			{\
				m_##FuncName = NULL; \
				m_##FuncName = (TYPE_##FuncName)GetProcAddress(m_dllHandle, #FuncName); \
				m_is##FuncName = FUNC_LOADED; \
			}\
			if (NULL != m_##FuncName) \
				return m_##FuncName(p1, p2, p3);\
            else  {\
                TRACE("PDLLEX(): unknown function #FuncName"); \
                return (retVal)NULL; \
		    } \
		} \
		else\
			return (retVal)NULL; \
	}

#define DECLARE_FUNCTION4_EX(retVal, CallType, PublicFuncName, FuncName, Param1, Param2, Param3, Param4) \
private: \
	typedef  retVal (CallType * TYPE_##FuncName)(Param1, Param2, Param3, Param4); \
	TYPE_##FuncName m_##FuncName; \
	short m_is##FuncName;\
public: \
	retVal PublicFuncName(Param1 p1, Param2 p2, Param3 p3, Param4 p4) \
	{\
		if (m_dllHandle)\
		{\
			if (FUNC_LOADED != m_is##FuncName) \
			{\
				m_##FuncName = NULL; \
				m_##FuncName = (TYPE_##FuncName)GetProcAddress(m_dllHandle, #FuncName); \
				m_is##FuncName = FUNC_LOADED;\
			}\
			if (NULL != m_##FuncName) \
				return m_##FuncName(p1, p2, p3, p4);\
            else  {\
                TRACE("PDLLEX(): unknown function #FuncName"); \
                return (retVal)NULL; \
		    } \
		} \
		else\
			return (retVal)NULL; \
	}

#define DECLARE_FUNCTION5_EX(retVal, CallType, PublicFuncName, FuncName, Param1, Param2, Param3, Param4, Param5) \
private: \
	typedef  retVal (CallType * TYPE_##FuncName)(Param1, Param2, Param3, Param4, Param5); \
	TYPE_##FuncName m_##FuncName; \
	short m_is##FuncName; \
public: \
	retVal PublicFuncName(Param1 p1, Param2 p2, Param3 p3, Param4 p4, Param5 p5) \
	{\
		if (m_dllHandle)\
		{\
			if (FUNC_LOADED != m_is##FuncName) \
			{\
				m_##FuncName = NULL; \
				m_##FuncName = (TYPE_##FuncName)GetProcAddress(m_dllHandle, #FuncName); \
				m_is##FuncName = FUNC_LOADED;\
			}\
			if (NULL != m_##FuncName) \
				return m_##FuncName(p1, p2, p3, p4, p5);\
            else  {\
                TRACE("PDLLEX(): unknown function #FuncName"); \
                return (retVal)NULL; \
		    } \
		} \
		else\
			return (retVal)NULL; \
	}

#define DECLARE_FUNCTION6_EX(retVal, CallType, PublicFuncName, FuncName, Param1, Param2, Param3, Param4, Param5, Param6) \
private: \
	typedef  retVal (CallType * TYPE_##FuncName)(Param1, Param2, Param3, Param4, Param5, Param6); \
	TYPE_##FuncName m_##FuncName; \
	short m_is##FuncName;\
public: \
	retVal PublicFuncName(Param1 p1, Param2 p2, Param3 p3, Param4 p4, Param5 p5, Param6 p6) \
	{\
		if (m_dllHandle)\
		{\
			if (FUNC_LOADED != m_is##FuncName) \
			{\
				m_##FuncName = NULL; \
				m_##FuncName = (TYPE_##FuncName)GetProcAddress(m_dllHandle, #FuncName); \
				m_is##FuncName = FUNC_LOADED;\
			}\
			if (NULL != m_##FuncName) \
				return m_##FuncName(p1, p2, p3, p4, p5, p6);\
            else  {\
                TRACE("PDLLEX(): unknown function #FuncName"); \
                return (retVal)NULL; \
		    } \
		} \
		else\
			return (retVal)NULL; \
	}

#define DECLARE_FUNCTION7_EX(retVal, CallType, PublicFuncName, FuncName, Param1, Param2, Param3, Param4, Param5, Param6, Param7) \
private: \
	typedef  retVal (CallType * TYPE_##FuncName)(Param1, Param2, Param3, Param4, Param5, Param6, Param7); \
	TYPE_##FuncName m_##FuncName; \
	short m_is##FuncName;\
public: \
	retVal PublicFuncName(Param1 p1, Param2 p2, Param3 p3, Param4 p4, Param5 p5, Param6 p6, Param7 p7) \
	{\
		if (m_dllHandle)\
		{\
			if (FUNC_LOADED != m_is##FuncName) \
			{\
				m_##FuncName = NULL; \
				m_##FuncName = (TYPE_##FuncName)GetProcAddress(m_dllHandle, #FuncName); \
				m_is##FuncName = FUNC_LOADED;\
			}\
			if (NULL != m_##FuncName) \
				return m_##FuncName(p1, p2, p3, p4, p5, p6, p7);\
            else  {\
                TRACE("PDLLEX(): unknown function #FuncName"); \
                return (retVal)NULL; \
		    } \
		} \
		else\
			return (retVal)NULL; \
	}

#define DECLARE_FUNCTION8_EX(retVal, CallType, PublicFuncName, FuncName, Param1, Param2, Param3, Param4, Param5, Param6, Param7, Param8) \
private: \
	typedef  retVal (CallType * TYPE_##FuncName)(Param1, Param2, Param3, Param4, Param5, Param6, Param7, Param8); \
	TYPE_##FuncName m_##FuncName; \
	short m_is##FuncName;\
public: \
	retVal PublicFuncName(Param1 p1, Param2 p2, Param3 p3, Param4 p4, Param5 p5, Param6 p6, Param7 p7, Param8 p8) \
	{\
		if (m_dllHandle)\
		{\
			if (FUNC_LOADED != m_is##FuncName) \
			{\
				m_##FuncName = NULL; \
				m_##FuncName = (TYPE_##FuncName)GetProcAddress(m_dllHandle, #FuncName); \
				m_is##FuncName = FUNC_LOADED;\
			}\
			if (NULL != m_##FuncName) \
				return m_##FuncName(p1, p2, p3, p4, p5, p6, p7, p8);\
            else  {\
                TRACE("PDLLEX(): unknown function #FuncName"); \
                return (retVal)NULL; \
		    } \
		}\
		else\
			return (retVal)NULL; \
	}

#define DECLARE_FUNCTION9_EX(retVal, CallType, PublicFuncName, FuncName, Param1, Param2, Param3, Param4, Param5, Param6, Param7, Param8, Param9) \
private: \
	typedef  retVal (CallType * TYPE_##FuncName)(Param1, Param2, Param3, Param4, Param5, Param6, Param7, Param8, Param9); \
	TYPE_##FuncName m_##FuncName; \
	short m_is##FuncName; \
public: \
	retVal PublicFuncName(Param1 p1, Param2 p2, Param3 p3, Param4 p4, Param5 p5, Param6 p6, Param7 p7, Param8 p8, Param9 p9) \
	{\
		if (m_dllHandle)\
		{\
			if (FUNC_LOADED != m_is##FuncName) \
			{\
				m_##FuncName = NULL; \
				m_##FuncName = (TYPE_##FuncName)GetProcAddress(m_dllHandle, #FuncName); \
				m_is##FuncName = FUNC_LOADED;\
			}\
			if (NULL != m_##FuncName) \
				return m_##FuncName(p1, p2, p3, p4, p5, p6, p7, p8, p9);\
            else  {\
                TRACE("PDLLEX(): unknown function #FuncName"); \
                return (retVal)NULL; \
		    } \
		}\
		else\
			return (retVal)NULL; \
	}

#define DECLARE_FUNCTION10_EX(retVal, CallType, PublicFuncName, FuncName, Param1, Param2, Param3, Param4, Param5, Param6, Param7, Param8, Param9, Param10) \
private: \
	typedef  retVal (CallType * TYPE_##FuncName)FuncName(Param1, Param2, Param3, Param4, Param5, Param6, Param7, Param8, Param9, Param10); \
	TYPE_##FuncName m_##FuncName; \
	short m_is##FuncName;\
public: \
	retVal PublicFuncName(Param1 p1, Param2 p2, Param3 p3, Param4 p4, Param5 p5, Param6 p6, Param7 p7, Param8 p8, Param9 p9, Param10 p10) \
	{\
		if (m_dllHandle)\
		{\
			if (FUNC_LOADED != m_is##FuncName) \
			{\
				m_##FuncName = NULL; \
				m_##FuncName = (TYPE_##FuncName)GetProcAddress(m_dllHandle, #FuncName); \
				m_is##FuncName = FUNC_LOADED;\
			}\
			if (NULL != m_##FuncName) \
				return m_##FuncName(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);\
            else  {\
                TRACE("PDLLEX(): unknown function #FuncName"); \
                return (retVal)NULL; \
		    } \
		}\
		else					\
			return (retVal)NULL;\
	}

//=============================================================================
// Declare constructors and LoadFunctions
//=============================================================================
#define DECLARE_CLASS_EX(ClassName) \
public:	\
	explicit ClassName (const char* DllName) \
    { \
        /* Initialisierungswert (0) darf nicht ge�ndert werden! */ \
        memset(this, 0, sizeof(ClassName)); \
        LoadDll(DllName); \
    } \
private: \
    ClassName (void); \
    ClassName (const ClassName & );

//=============================================================================
// PDLLEX
// Base class to wrap dynamic use of dll
//=============================================================================
class   PDLLEX
{
public:
    PDLLEX(void)
    {
        // Initialisierungswerte m�ssen ausschlie�lich (0) sein!
        m_dllHandle = NULL;
        m_dllName = NULL;
        m_refCount = 0;
    }

    ~PDLLEX(void) {
        //force this to be a true uninitialize
        m_refCount = 1;
        Uninitialize();

        //free name
        if (m_dllName) {
            delete[] m_dllName;
            m_dllName = NULL;
        }
    }

    //A NULL here means the name has already been set
    void LoadDll(const char* name)
    {
        if (name) {
            SetDllName(name);
        }

        if (NULL == m_dllName) {
            m_dllHandle = NULL;
            return;
        }

        //try to load
        m_dllHandle = LoadLibraryA(m_dllName);

        if ((m_dllHandle == NULL) && (NULL != m_dllName)) {
            //show warning here if needed
            TRACE("PDLLEX(): error loading library %s, m_dllHandle = NULL\n", m_dllName);
        }
        else {
            TRACE("PDLLEX(): library %s loaded\n", m_dllName);
        }
    }

    bool SetDllName(const char* newName)
    {
        bool    retVal = false;

        //we allow name resets only if the current DLL handle is invalid
        //once they've hooked into a DLL, the  name cannot be changed
        if (!m_dllHandle) {
            if (m_dllName) {
                delete[] m_dllName;
                m_dllName = NULL;
            }

            //They may be setting this null (e.g., uninitialize)
            if (newName) {
                m_dllName = new char[strlen(newName) + 1];

                //make sure memory was allocated
                if (m_dllName) {
                    strcpy(m_dllName, newName);
                }
                else {
                    retVal = false;
                }
            }

            retVal = true;
        }

        return retVal;
    }

    virtual bool Initialize(void)
    {
        bool    retVal = false;

        //Add one to our internal reference counter
        m_refCount++;

        if (m_refCount == 1 && m_dllName) { 
            //if this is first time, load the DLL
            //we are assuming the name is already set
            LoadDll(NULL);
            retVal = (m_dllHandle != NULL);
        }

        return retVal;
    }

    virtual void Uninitialize(void)
    {
        //If we're already completely unintialized, early exit
        if (!m_refCount) {
            return;
        }

        //if this is the last time this instance has been unitialized,
        //then do a full uninitialization
        m_refCount--;

        if (m_refCount < 1) {
            if (m_dllHandle) {
                FreeLibrary(m_dllHandle);
                m_dllHandle = NULL;
            }

            SetDllName(NULL); //clear out the name & free memory
        }
    }

protected:
    HINSTANCE   m_dllHandle;
    char*       m_dllName;
    int         m_refCount;

};

//=============================================================================
//=============================================================================
#endif // #if !defined (_PDLLEX_H_)
