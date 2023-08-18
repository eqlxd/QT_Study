/******************************************************************************
*Purpose:
*       strti64   - convert ascii string to GINS_SINT64
*       strtoui64 - convert ascii string to GINS_UINT64
*******************************************************************************/
#include "strtoi64.h"

#ifdef __cplusplus
extern "C"
{
#endif

/******************************************************************************
*Purpose:
*       Convert an ascii string to a integral 64-bit value.  The base
*       used for the caculations is supplied by the caller.  The base
*       must be in the range 0, 2-36.  If a base of 0 is supplied, the
*       ascii string must be examined to determine the base of the
*       number:
*               (a) First char = '0', second char = 'x' or 'X',
*                   use base 16.
*               (b) First char = '0', use base 8
*               (c) First char in range '1' - '9', use base 10.
*
*       If the 'endptr' value is non-NULL, then strtol/strtoul places
*       a pointer to the terminating character in this value.
*       See ANSI standard for details
*
*Entry:
*       nptr == NEAR/FAR pointer to the start of string.
*       endptr == NEAR/FAR pointer to the end of the string.
*       ibase == integer base to use for the calculations.
*
*       string format: [whitespace] [sign] [0] [x] [digits/letters]
*
*Exit:
*       Good return:
*               result
*
*       Overflow return:
*               strtol -- GINS_SINT64_MAX or GINS_SINT64_MIN
*               strtoul -- GINS_UINT64_MAX
*               strtol/strtoul -- errno == ERANGE
*
*       No digits or bad base return:
*               0
*               endptr = nptr*
*
*Exceptions:
*       None.
*******************************************************************************/
GINS_UINT64 strtoxi64(const char* nptr, char** endptr, int ibase, int flags)
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

GINS_UINT64 wcstoxi64(const wchar_t* nptr, const wchar_t** endptr, int ibase, int flags)
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

#ifdef TEST_STRTOI64
static void TestStrtoi64(void)
{
    GINS_SINT64  sint64 = 0;
    GINS_UINT64  uint64 = 0;
    int         err = 0;

    sint64 = strtoi64("-0x8000000000000001", NULL, 0);  // should fail
    err = errno;
    errno = 0;

    sint64 = strtoi64("0x8100000000000000", NULL, 0);   // should fail
    err = errno;
    errno = 0;

    sint64 = strtoi64("0x8000000000000000", NULL, 0);   // should fail
    err = errno;
    errno = 0;

    sint64 = strtoi64("-0x8000000000000000", NULL, 0);  // should succeed
    err = errno;
    errno = 0;

    sint64 = strtoi64("0x7fffffffffffffff", NULL, 0);   // should succeed
    err = errno;
    errno = 0;

    uint64 = strtoui64("0x10000000000000000", NULL, 0); // should fail
    err = errno;
    errno = 0;
}
#endif // #ifdef TEST_STRTOI64

#ifdef __cplusplus
}
#endif
