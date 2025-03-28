/******************************************************************************
* \file      CStdcVersion.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     C Standard C version macros
* \details
*
* \see       https://en.wikipedia.org/wiki/C_(programming_language)
*            https://en.cppreference.com/w/c/preprocessor/replace#Predefined_macros
*            https://github.com/cpredef/predef
******************************************************************************/

#ifndef CSTDCVERSION_H
#define CSTDCVERSION_H		20250318L


#include "CStandard.h"


/* STDC_VERSION definition, since CKR, ..., C23 */
#if defined(__STDC_VERSION__)
#define STDC_VERSION         __STDC_VERSION__
#elif defined(__STDC__)
#define STDC_VERSION         C89
#else
#define STDC_VERSION         CKR
#endif


#endif /* CSTDCVERSION_H */
