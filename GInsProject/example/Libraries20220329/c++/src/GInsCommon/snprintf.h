/*
 * snprintf.h
 *
 *  Created on: Mar 25, 2015
 *      Author: user1
 */

#ifndef SNPRINTF_H_
#define SNPRINTF_H_

#ifdef _MSC_VER 
#if _MSC_VER < 1900

#define snprintf c99_snprintf

#include <stdio.h>
#include <stdarg.h>

#if defined(__cplusplus)
extern "C"
{
#endif

int c99_vsnprintf(char* str, size_t size, const char* format, va_list ap);
int c99_snprintf(char* str, size_t size, const char* format, ...);

#if defined(__cplusplus)
}
#endif

#endif // _MSC_VER < 1900
#endif // _MSC_VER

#endif /* SNPRINTF_H_ */
