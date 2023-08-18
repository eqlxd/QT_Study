#ifndef GINSDEFS_H_
#define GINSDEFS_H_

//========================================================================
// "not a number" (NAN)
//========================================================================
#if defined(_MSC_VER)
static const unsigned long __gins_nan[2] = {0xffffffff, 0x7fffffff};
#define GINS_NAN    (double)(*(const float *) __gins_nan)
#define IsNaN(x)    _isnan(x)
#endif

#if defined(__GNUC__)
#include <math.h>

#if defined(__MINGW32__)
#define GINS_NAN    nan("")
#else
#define GINS_NAN    NAN
#endif

#define IsNaN(x)    isnan(x)
#endif // #if defined(__GNUC__)

//========================================================================
// Integer 64Bit
//========================================================================
#if defined(_MSC_VER)

typedef __int64             GINS_SINT64;
typedef unsigned __int64    GINS_UINT64;
#define GINS_SINT64_MIN     _I64_MIN
#define GINS_SINT64_MAX     _I64_MAX
#define GINS_UINT64_MAX     _UI64_MAX

#if !defined(LLONG_MAX)
#define LLONG_MAX     9223372036854775807i64        // maximum signed integer 64Bit
#endif

#if !defined(LLONG_MIN)
#define LLONG_MIN   (-9223372036854775807i64 - 1)   // minimum signed integer 64Bit
#endif

#endif // #if defined(_MSC_VER)

#if defined(__GNUC__)

#if !defined(LLONG_MAX)
#define LLONG_MAX     9223372036854775807LL         // maximum signed integer 64Bit
#endif

#if !defined(LLONG_MIN)
#define LLONG_MIN   (-9223372036854775807LL - 1)    // minimum signed integer 64Bit
#endif

#if !defined(ULLONG_MAX)
#define ULLONG_MAX    0xffffffffffffffffLL          // maximum unsigned integer 64Bit
#endif

typedef long long           GINS_SINT64;
typedef unsigned long long  GINS_UINT64;
#define GINS_SINT64_MIN     LLONG_MIN
#define GINS_SINT64_MAX     LLONG_MAX
#define GINS_UINT64_MAX     ULLONG_MAX

#endif // #if defined(__GNUC__)

//========================================================================
// TRUE, FALSE
//========================================================================
#if !defined(FALSE)
#define FALSE           0
#endif // #if !defined(FALSE)

#if !defined(TRUE)
#define TRUE            1
#endif // #if !defined(TRUE)

//========================================================================
// ARRAYSIZE
//========================================================================
#if !defined(ARRAYSIZE) && !defined(_MSC_VER)
#define ARRAYSIZE(a)    (sizeof(a)/sizeof(a[0]))
#endif

//========================================================================
// ASSERT
//========================================================================
#if !defined(ASSERT)
#if (defined(_MSC_VER) && !defined(_AFXDLL))

#if defined(__cplusplus)
#include <cassert>
#else
#include <assert.h>
#endif // #if defined(__cplusplus)
    
#if defined(_DEBUG)
#define ASSERT( exp )           assert( exp )
#define VERIFY( exp )           assert( exp )
#else
#define ASSERT( exp )           ((void)0)
#define VERIFY( exp )           ((void)(exp))
#endif // #if defined(_DEBUG)

#endif // #if (defined(_MSC_VER) && !defined(_AFXDLL))

#if defined(_MSC_VER) && defined(_AFXDLL)
#if !defined(__AFX_H__)
#include "afx.h"
#endif

#endif // #if defined(_MSC_VER) && !defined(_AFXDLL)
#endif // #if !defined(ASSERT)

#if defined(_MSC_VER) 

#if defined(__AFX_H__)
#define ASSERT_PTR(ptr)                 { ASSERT(AfxIsValidAddress(ptr, sizeof(*ptr))); }       // read and write
#define ASSERT_PTRRO(ptr)               { ASSERT(AfxIsValidAddress(ptr, sizeof(*ptr), FALSE)); }// read only
#define ASSERT_PTR_SIZE(ptr, size_t)    { ASSERT(AfxIsValidAddress(ptr, size_t)); }             // read and write
#define ASSERT_PTR_SIZERO(ptr, size_t)  { ASSERT(AfxIsValidAddress(ptr, size_t, FALSE)); }      // read only
#define ASSERT_STR(pStr)                { ASSERT(AfxIsValidString(pStr)); }

#else // #if defined(__AFX_H__)

#define ASSERT_PTR(ptr)                 { ASSERT(ptr); }
#define ASSERT_PTRRO(ptr)               { ASSERT(ptr); }
#define ASSERT_PTR_SIZE(ptr, size_t)    { ASSERT(ptr); }
#define ASSERT_PTR_SIZERO(ptr, size_t)  { ASSERT(ptr); }
#define ASSERT_STR(pStr)                { ASSERT(pStr); }
#endif // #if defined(__AFX_H__)

#else  // #if defined(_MSC_VER)

#define ASSERT_PTR(ptr)
#define ASSERT_PTRRO(ptr)
#define ASSERT_PTR_SIZE(ptr, size_t)
#define ASSERT_PTR_SIZERO(ptr, size_t)
#define ASSERT_STR(pStr)

#endif // #if defined(_MSC_VER)

//========================================================================
//========================================================================
#endif /* GINSDEFS_H_ */
