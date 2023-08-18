#if !defined(_PORTABLETRACE_H_INCLUDED_)
#define _PORTABLETRACE_H_INCLUDED_

#if !defined(__cplusplus)
#error C++ compiler required.
#endif // __cplusplus

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <ctime>
#include <stdint.h>

#include "snprintf.h"

namespace GInsPortableTrace {
// CTraceTime
class CTraceTime
{
public:
    ~CTraceTime(void)
    {
    };

private:
    // Singleton Design Pattern
    CTraceTime(void)
    {
        Reset();
    };

    CTraceTime(const CTraceTime&);              // Copy-CTOR nicht definiert
    CTraceTime& operator=(const CTraceTime&);   // Zuweisungsoperator nicht definiert

public:
    // Singleton Design Pattern
    static CTraceTime& Instance(void)
    {
        static CTraceTime TraceTime;    // die einzige Instanz
        return TraceTime;
    };

public:
    void Reset(void)
    {
		this->m_StartTimeMs = (clock() * 1000) / CLOCKS_PER_SEC;
    };

public:
    void	TimeStamp(char* szBuffer, size_t BufferLength);

private:
	uint64_t m_StartTimeMs;
};

// Singleton Design Pattern
inline CTraceTime& TraceTime(void)
{
    return CTraceTime::Instance();
}

inline void CTraceTime::TimeStamp(char* szBuffer, size_t BufferLength)
{
    if (NULL == szBuffer) {
        return;
    }
    if (0 >= BufferLength) {
        return;
    }
	uint64_t actTimeMs = (clock() * 1000) / CLOCKS_PER_SEC;
    snprintf(szBuffer, BufferLength, "[%llums] ", (long long unsigned int)(actTimeMs - m_StartTimeMs));
    return;
}
// Ende: CTraceTime

inline void Print(const char* pszFormat, ...)
{
    const int   BufferLength = 1024;
    char        szBuffer[BufferLength];
    va_list     args;

    if ((NULL != pszFormat) && (0 < strlen(pszFormat))) {
        memset(szBuffer, 0, (sizeof(char) * BufferLength));
        TraceTime().TimeStamp(szBuffer, (sizeof(char) * BufferLength));

        va_start(args, pszFormat);
        if (0 <= vsnprintf(&szBuffer[strlen(szBuffer)], (sizeof(char) * BufferLength) - strlen(szBuffer), pszFormat, args)) 
		{
            fprintf(stderr, "%s", szBuffer);
            fflush(stderr);
        }
        va_end(args);
    }
} // Print()

inline void PrintIf(int Condition, const char* pszFormat, ...)
{
    const int   BufferLength = 1024;
    char        szBuffer[BufferLength];
    va_list     args;

    if ((0 < Condition) && (NULL != pszFormat) && (0 < strlen(pszFormat))) {
        memset(szBuffer, 0, (sizeof(char) * BufferLength));
        TraceTime().TimeStamp(szBuffer, (sizeof(char) * BufferLength));

        va_start(args, pszFormat);
        if (0 <= vsnprintf(&szBuffer[strlen(szBuffer)], (sizeof(char) * BufferLength) - strlen(szBuffer), pszFormat, args)) 
		{
            fprintf(stderr, "%s", szBuffer);
            fflush(stderr);
        }
        va_end(args);
    }
} // PrintIf()

#if 0
inline void Backtrace(void)
{
    void* Pointers[50];
    size_t Size = 0;
    size_t n = 0;
    Size = backtrace(Pointers, 50);
    if (0 == Size) {
        return;
    }
    for (n = 0; n < Size; n++) {
        Print("BACKTRACE [0x%08lx]\n", (unsigned long)Pointers[n]);
    }
} // Backtrace()
#endif
} // namespace GInsPortableTrace
//#endif // #if defined(__linux__)

// TRACE nur f�r DEBUG-Version
#ifndef TRACE
#ifdef _DEBUG
#define TRACE           GInsPortableTrace::Print
#else // #ifdef _DEBUG
#define TRACE           1 ? (void)0 : GInsPortableTrace::Print
#endif // #ifdef _DEBUG
#endif // #ifndef TRACE

// TRACEIF nur f�r DEBUG-Version
#ifndef TRACEIF
#ifdef _DEBUG
#define TRACEIF         GInsPortableTrace::PrintIf
#else // #ifdef _DEBUG
#define TRACEIF         1 ? (void)0 : GInsPortableTrace::PrintIf
#endif // #ifdef _DEBUG
#endif // #ifndef TRACEIF

// PRINTF f�r RELEASE- und DEBUG-Version
#ifndef PRINTF
#define PRINTF          GInsPortableTrace::Print
#define PRINTFIF        GInsPortableTrace::PrintIf
#endif // #ifndef PRINTF

// BACKTRACE nur f�r DEBUG-Version
#ifndef BACKTRACE
#ifdef _DEBUG
#define BACKTRACE       GInsPortableTrace::Backtrace
#else // #ifdef _DEBUG
//#define BACKTRACE       1 ? (void)0 : GInsPortableTrace::Backtrace
#endif // #ifdef _DEBUG
#endif // #ifndef BACKTRACE

#ifndef IFDEBUG
#ifdef _DEBUG
#define IFDEBUG(x)      if (0 < (x))
#else // #ifdef _DEBUG
#define IFDEBUG(x)      if (false)
#endif // #ifdef _DEBUG
#endif // #ifndef IFDEBUG

#define TRACE_TIMESTAMP_RESET   GInsPortableTrace::TraceTime().Reset();
#define TRACE_TIMESTAMP_ON      GInsPortableTrace::TraceTime().TraceWithTimeStamp(true, false);
#define TRACE_LOCALTIMESTAMP_ON GInsPortableTrace::TraceTime().TraceWithTimeStamp(true, true);
#define TRACE_TIMESTAMP_OFF     GInsPortableTrace::TraceTime().TraceWithTimeStamp(false, false);

#endif // _PORTABLETRACE_H_INCLUDED_
