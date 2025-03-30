/******************************************************************************
* \file      CStandards.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     C Standard definitions
* \details   
*
* \see       https://en.wikipedia.org/wiki/C_(programming_language)
*            https://en.cppreference.com/w/c/preprocessor/replace#Predefined_macros
*            https://github.com/cpredef/predef
******************************************************************************/

#ifndef CSTANDARDS_H
#define CSTANDARDS_H		20250318L


/* non standard *//* do not use */
#define CKR		197801L
#define C78		CKR

/* official standard ANSI X3.159-1989 *//* ANSI C */
#define C89		198901L

/* official standard ISO/IEC 9899:1990 *//* ANSI/ISO C */
#define C90		C89

/* official standard ISO/IEC 9899-1:1994 ISO/IEC 9899/AMD1:1995 *//* ANSI/ISO C */
#define C94		199409L
#define C95		C94

/* official standard ISO/IEC 9899:1999 *//* ANSI/ISO C */
#define C99		199901L

/* official standard ISO/IEC 9899:2011 *//* ANSI/ISO C */
#define C11		201112L

/* official standard ISO/IEC 9899:2018 *//* ANSI/ISO C */
#define C17		201710L
#define C18		C17

/* official standard ISO/IEC 9899:2024 *//* ANSI/ISO C */
#define C23		202311L


/******************************************************************************
* STDC definition, 1 STDC, 0 not STDC
*/
#if defined(__STDC__)
#define STDC                 __STDC__
#else
#define STDC                 0
#endif


/******************************************************************************
* STDC_VERSION definition, since CKR/C78, ..., C23
*/
#if defined(__STDC_VERSION__)
#define STDC_VERSION         __STDC_VERSION__
#elif defined(__STDC__)
#define STDC_VERSION         C89
#else
#define STDC_VERSION         CKR
#endif


/******************************************************************************
* STDC_HOSTED definition, 1 hosted, 0 not hosted, -1 hosting is unknown
*/
#if defined(__STDC_HOSTED__)
#define STDC_HOSTED          __STDC_HOSTED__
#else
#define STDC_HOSTED          -1
#endif


/******************************************************************************
**  Basic GET macros
*/
/* 1 STDC, 0 not STDC */
#define GET_STDC()					STDC

/* since CKR, ..., C23 */
#define GET_STDC_VERSION()			STDC_VERSION

#define GET_STDC_VERSION_YEAR()		(STDC_VERSION/100L)

/* 1 hosted, 0 not hosted, -1 unknown */
#define GET_STDC_HOSTED()			STDC_HOSTED


/******************************************************************************
* Examples of use
*
* #if defined(__STDC_VERSION__) && __STDC_VERSION__ == C99
* ...
* C 99 code
* ...
* #endif
* 
* ---------------------------------------------------------
* #if STDC_VERSION == CKR
* ...
* CKR code
* ...
* #elif STDC_VERSION == C89
* ...
* C89 code
* ...
* #elif STDC_VERSION == C95
* ...
* C95 code
* ...
* #else
* ...
* other code
* ...
* #endif
* 
* ---------------------------------------------------------
* printf("stdc              = %d\n",  GET_STDC());
* printf("stdc version      = %ld\n", GET_STDC_VERSION());
* printf("stdc version year = %ld\n", GET_STDC_VERSION_YEAR());
* printf("hosted            = %d\n",  GET_STDC_HOSTED());
*
*/


#endif /* CSTANDARDS_H */
