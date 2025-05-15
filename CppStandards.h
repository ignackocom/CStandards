/******************************************************************************
* \file      CppStandards.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Cpp Standard definitions
* \details
*
* \see       https://github.com/ignackocom
*			 https://en.wikipedia.org/wiki/C%2B%2B
*            https://en.cppreference.com/w/cpp/preprocessor/replace#Predefined_macros
*            https://github.com/cpredef/predef
*			 and other resources
******************************************************************************/

#ifndef CPPSTANDARDS_H
#define CPPSTANDARDS_H		20250318L


#define CPPPRE98	1L

/* official standard 14882:1998 *//* ANSI/ISO C++ */
#define CPP98		199711L

/* official standard 14882:2003 *//* ANSI/ISO C++ *//* small changes */
/* (remains the same as C++98) */
#define CPP03		CPP98

/* official standard 14882:2011 *//* ANSI/ISO C++ */
#define CPP11		201103L

/* official standard 14882:2014 *//* ANSI/ISO C++ */
#define CPP14		201402L

/* official standard 14882:2017 *//* ANSI/ISO C++ */
#define CPP17		201703L

/* official standard 14882:2020 *//* ANSI/ISO C++ */
#define CPP20		202002L

/* official standard 14882:2024 *//* ANSI/ISO C++ */
#define CPP23		202302L


/******************************************************************************
* CPLUSPLUS_VERSION definition, since CPPPRE98, ..., CPP23
*/
#if defined(__cplusplus)
#define CPLUSPLUS_VERSION         __cplusplus
#else
#define CPLUSPLUS_VERSION         CPPPRE98
#endif


/******************************************************************************
**  Basic GET macros
*/
/* since CPPPRE98, ..., CPP23 */
#define GET_CPLUSPLUS_VERSION()			CPLUSPLUS_VERSION

#define GET_CPLUSPLUS_VERSION_YEAR()	(CPLUSPLUS_VERSION/100L)


/******************************************************************************
* Examples of use
*
* #if defined(__cplusplus) && __cplusplus == CPP11
* ...
* Cpp 11 code
* ...
* #endif
*
* ---------------------------------------------------------
* #if CPLUSPLUS_VERSION == CPPPRE98
* ...
* CPPPRE98 code
* ...
* #elif CPLUSPLUS_VERSION == CPP98
* ...
* CPP98 code
* ...
* #elif CPLUSPLUS_VERSION == CPP11
* ...
* CPP11 code
* ...
* #else
* ...
* other code
* ...
* #endif
* 
* ---------------------------------------------------------
* printf("cpp version      = %ld\n", GET_CPLUSPLUS_VERSION());
* printf("cpp version year = %ld\n", GET_CPLUSPLUS_VERSION_YEAR());
* 
*/


#endif /* CPPSTANDARDS_H */
