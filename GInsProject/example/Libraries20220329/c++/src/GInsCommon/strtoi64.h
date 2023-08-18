#ifndef __STR_TO_INT64_H__
#define __STR_TO_INT64_H__

#include <stdlib.h>
#include <limits.h>
#include <errno.h>
#include <ctype.h>
#include <wctype.h>
#include "ginsdefs.h"

#ifdef  __cplusplus
extern "C" {
#endif

/* flag values */
#define FL_UNSIGNED   1       /* strtoul called */
#define FL_NEG        2       /* negative sign found */
#define FL_OVERFLOW   4       /* overflow occured */
#define FL_READDIGIT  8       /* we've read at least one correct digit */

/**************************************************************************************/
/* char*/
/**************************************************************************************/
GINS_UINT64 strtoxi64 (const char *nptr, char **endptr, int ibase, int flags );

inline GINS_SINT64 strtoi64 (const char *nptr, char **endptr, int ibase)
{
    return (GINS_SINT64) strtoxi64(nptr, endptr, ibase, 0);
}

inline GINS_UINT64 strtoui64 (const char *nptr, char **endptr, int ibase)
{
    return strtoxi64(nptr, endptr, ibase, FL_UNSIGNED);
}

#if defined(_WIN32)
inline GINS_SINT64 strtoll (const char *nptr, char **endptr, int ibase)
{
    return (GINS_SINT64) strtoxi64(nptr, endptr, ibase, 0);
}

inline GINS_UINT64 strtoull (const char *nptr, char **endptr, int ibase)
{
    return strtoxi64(nptr, endptr, ibase, FL_UNSIGNED);
}
#endif // #if defined(_WIN32)

/**************************************************************************************/
/* wchar_t */
/**************************************************************************************/
GINS_UINT64 wcstoxi64 (const wchar_t *nptr, const wchar_t **endptr, int ibase, int flags);

inline GINS_SINT64 wcstoi64 (const wchar_t *nptr, const wchar_t **endptr, int ibase)
{
    return (GINS_SINT64) wcstoxi64(nptr, (const wchar_t**)endptr, ibase, 0);
}

inline GINS_UINT64 wcstoui64 (const wchar_t *nptr, const wchar_t **endptr, int ibase)
{
    return wcstoxi64(nptr, (const wchar_t**)endptr, ibase, FL_UNSIGNED);
}

#ifdef  __cplusplus
};
#endif

/**************************************************************************************/
#if defined( _UNICODE)

#if !defined(_tcstoi64)
#define _tcstoi64    wcstoi64
#endif

#if !defined(_tcstoui64)
#define _tcstoui64   wcstoui64
#endif

#else // #if defined( _UNICODE)

#if !defined(_tcstoi64)
#define _tcstoi64    strtoi64
#endif

#if !defined(_tcstoui64)
#define _tcstoui64   strtoui64
#endif

#endif // #if defined( _UNICODE)

/**************************************************************************************/
#if defined(STRTOI64_INLINE)
inline GINS_UINT64 strtoxi64(const char* nptr, char** endptr, int ibase, int flags)
{
    const char*     p;
    char            c;
    GINS_UINT64      number;
    unsigned int    digval;
    GINS_UINT64      maxval;

    ASSERT_PTRRO(nptr);

    p = nptr;       /* p is our scanning pointer */
    number = 0;     /* start with zero */

    c = *p++;       /* read char */
    while (isspace((int) (unsigned char)c)) {
        c = *p++;   /* skip whitespace */
    }

    if (c == '-') {
        flags |= FL_NEG;    /* remember minus sign */
        c = *p++;
    }
    else if (c == '+') {
        c = *p++;           /* skip sign */
    }

    if (ibase < 0 || ibase == 1 || ibase > 36) {
        /* bad base! */
        if (endptr) {
            /* store beginning of string in endptr */
            *endptr = (char*)nptr;
        }

        return 0L;  /* return 0 */
    }
    else if (ibase == 0) {
        /* determine base free-lance, based on first two chars of string */
        if (c != '0') {
            ibase = 10;
        }
        else if (*p == 'x' || *p == 'X') {
            ibase = 16;
        }
        else {
            ibase = 8;
        }
    }

    if (ibase == 16) {
        /* we might have 0x in front of number; remove if there */
        if (c == '0' && (*p == 'x' || *p == 'X')) {
            ++p;
            c = *p++; /* advance past prefix */
        }
    }

    /* if our number exceeds this, we will overflow on multiply */
    maxval = GINS_UINT64_MAX / ibase;
    for (;;) {
        /* exit in middle of loop */
        /* convert c to value */
        if (isdigit((int) (unsigned char)c)) {
            digval = c - '0';
        }
        else if (isalpha((int) (unsigned char)c)) {
            digval = toupper(c) - 'A' + 10;
        }
        else {
            break;
        }

        if (digval >= (unsigned int)ibase) {
            break; /* exit loop if bad digit found */
        }

        /* record the fact we have read one digit */
        flags |= FL_READDIGIT;

        /* we now need to compute number = number * base + digval,
           but we need to know if overflow occured.  This requires
           a tricky pre-check. */
        if (number < maxval || (number == maxval && (GINS_UINT64) digval <= GINS_UINT64_MAX % ibase)) {
            /* we won't overflow, go ahead and multiply */
            number = number * ibase + digval;
        }
        else {
            /* we would have overflowed -- set the overflow flag */
            flags |= FL_OVERFLOW;
        }

        c = *p++; /* read next digit */
    }

    --p; /* point to place that stopped scan */

    if (!(flags & FL_READDIGIT)) {
        /* no number there; return 0 and point to beginning of string */
        if (endptr) {
            /* store beginning of string in endptr later on */
            p = nptr;
        }

        number = 0L; /* return 0 */
    }
    else if ((flags & FL_OVERFLOW) || (!(flags & FL_UNSIGNED) && (((flags & FL_NEG) && (number > (GINS_UINT64) GINS_SINT64_MIN)) || (!(flags & FL_NEG) && (number > (GINS_UINT64) GINS_SINT64_MAX))))) {
        /* overflow or signed overflow occurred */
        errno = ERANGE;
        if (flags & FL_UNSIGNED) {
            number = GINS_UINT64_MAX;
        }
        else if (flags & FL_NEG) {
            number = (GINS_UINT64) (GINS_SINT64_MIN);
        }
        else {
            number = GINS_SINT64_MAX;
        }
    }

    if (endptr != NULL) {
        /* store pointer to char that stopped the scan */
        *endptr = (char*)p;
    }

    if (flags & FL_NEG) {
        /* negate result if there was a neg sign */
        number = (GINS_UINT64) (-(GINS_SINT64) number);
    }

    return number; /* done. */
}

inline GINS_UINT64 wcstoxi64(const wchar_t* nptr, const wchar_t** endptr, int ibase, int flags)
{
    const wchar_t*  p;
    wchar_t         c;
    GINS_UINT64      number;
    unsigned int    digval;
    GINS_UINT64      maxval;
    
    ASSERT_PTRRO(nptr);
    
    p = nptr;               /* p is our scanning pointer */
    number = 0;             /* start with zero */
    
    c = *p++;               /* read char */
    while (iswspace(c)) {
        c = *p++;           /* skip whitespace */
    }
    
    if (c == '-') {
        flags |= FL_NEG;    /* remember minus sign */
        c = *p++;
    }
    else if (c == '+') {
        c = *p++;           /* skip sign */
    }
    
    if (ibase < 0 || ibase == 1 || ibase > 36) {
        /* bad base! */
        if (endptr) {
            /* store beginning of string in endptr */
            *endptr = (wchar_t*)nptr;
        }
        
        return 0; /* return 0 */
    }
    else if (ibase == 0) {
        /* determine base free-lance, based on first two chars of string */
        if (c != L'0') {
            ibase = 10;
        }
        else if (*p == L'x' || *p == L'X') {
            ibase = 16;
        }
        else {
            ibase = 8;
        }
    }
    
    if (ibase == 16) {
        /* we might have 0x in front of number; remove if there */
        if (c == L'0' && (*p == L'x' || *p == L'X')) {
            ++p;
            c = *p++;   /* advance past prefix */
        }
    }
    
    /* if our number exceeds this, we will overflow on multiply */
    maxval = GINS_UINT64_MAX / ibase;
    
    for (;;) {
        /* exit in middle of loop */
        /* convert c to value */
        if (iswdigit(c)) {
            digval = c - L'0';
        }
        else if (iswalpha(c)) {
            digval = towupper(c) - L'A' + 10;
        }
        else {
            break;
        }
        
        if (digval >= (unsigned)ibase) {
            break;  /* exit loop if bad digit found */
        }
        
        /* record the fact we have read one digit */
        flags |= FL_READDIGIT;
        
        /* we now need to compute number = number * base + digval,
        but we need to know if overflow occured.  This requires
        a tricky pre-check. */
        if (number < maxval || (number == maxval && (GINS_UINT64) digval <= GINS_UINT64_MAX % ibase)) {
            /* we won't overflow, go ahead and multiply */
            number = number * ibase + digval;
        }
        else {
            /* we would have overflowed -- set the overflow flag */
            flags |= FL_OVERFLOW;
        }
        
        c = *p++;   /* read next digit */
    }
    
    --p;    /* point to place that stopped scan */
    
    if (!(flags & FL_READDIGIT)) {
        /* no number there; return 0 and point to beginning of string */
        if (endptr) {
            /* store beginning of string in endptr later on */
            p = (wchar_t*)nptr;
        }
        
        number = 0; /* return 0 */
    }
    else if ((flags & FL_OVERFLOW) || (!(flags & FL_UNSIGNED) && (((flags & FL_NEG) && (number > (GINS_UINT64) GINS_SINT64_MIN)) || (!(flags & FL_NEG) && (number > (GINS_UINT64) GINS_SINT64_MAX))))) {
        /* overflow or signed overflow occurred */
        errno = ERANGE;
        if (flags & FL_UNSIGNED) {
            number = GINS_UINT64_MAX;
        }
        else if (flags & FL_NEG) {
            number = (GINS_UINT64) GINS_SINT64_MIN;
        }
        else {
            number = (GINS_UINT64) GINS_SINT64_MAX;
        }
    }
    
    if (endptr != NULL) {
        /* store pointer to char that stopped the scan */
        *endptr = p;
    }
    
    if (flags & FL_NEG) {
        /* negate result if there was a neg sign */
        number = (GINS_UINT64) (-(GINS_SINT64) number);
    }
    
    return number; /* done. */
}
#endif // #if defined(STRTOI64_INLINE)

/**************************************************************************************/
/**************************************************************************************/
#endif // #ifndef __STR_TO_INT64_H__
