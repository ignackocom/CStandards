/******************************************************************************
* \file      CStandard.h
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

#ifndef CSTANDARD_H
#define CSTANDARD_H		20250318L


/* no standard *//* do not use */
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
* Example of use
*
* #if defined(__STDC_VERSION__) && __STDC_VERSION__ == C99
* ...
* C 99 code
* ...
* #endif
* 
*/


#endif /* CSTANDARD_H */
