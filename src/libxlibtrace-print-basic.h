/* xlibtrace: LD_PRELOAD library to trace libX11 calls
 * Copyright (C) 2007-2009 Kevin Pulo
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 * 
 * Contact:
 * Kevin Pulo
 * kev@pulo.com.au
 */


#ifndef __LIBXLIBTRACE_PRINT_BASIC_H__
#define __LIBXLIBTRACE_PRINT_BASIC_H__

#include <X11/Xlib.h>

#include "libxlibtrace-print.h"


#if defined(__LIBXLIBTRACE_PRINT_BASIC_INCLUDE_DEFINITIONS__)

/* Stuff for the .c file */
#  define __LIBXLIBTRACE_PRINT_BASIC_BODY__(x) x
#  define __LIBXLIBTRACE_PRINT_BASIC_SUFF__ 

#include <string.h>

#else

/* Stuff for the .h file */
#  define __LIBXLIBTRACE_PRINT_BASIC_BODY__(x) ;
#  define __LIBXLIBTRACE_PRINT_BASIC_SUFF__ _PROTO

#endif


#define __REALTYPE_POINTER__ void *
void print_type_POINTER_(FILE *f, const char *funcname, const char *argname, const char *type, const void * value) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	fprintf(f, "%p", value);
	dofflush(f);
})
#define __REALTYPE_POINTER_p__ void * *
#define __REALTYPE_POINTER_pp__ void * * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(POINTER)

#define __REALTYPE_void__ void

#define __REALTYPE_void_p__ void *
void print_type_void_p_(FILE *f, const char *funcname, const char *argname, const char *type, const void * value) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	fprintf(f, "%p", value);
	dofflush(f);
})
#define __REALTYPE_void_p_p__ void * *
#define __REALTYPE_void_p_pp__ void * * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(void_p)

#define __REALTYPE_int__ int
void print_type_int_(FILE *f, const char *funcname, const char *argname, const char *type, const int value) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	fprintf(f, "%d", value);
	dofflush(f);
})
#define __REALTYPE_int_p__ int *
#define __REALTYPE_int_pp__ int * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(int)

#define __REALTYPE_unsigned_int__ unsigned int
void print_type_unsigned_int_(FILE *f, const char *funcname, const char *argname, const char *type, const unsigned int value) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	fprintf(f, "%u", value);
	dofflush(f);
})
#define __REALTYPE_unsigned_int_p__ unsigned int *
#define __REALTYPE_unsigned_int_pp__ unsigned int * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(unsigned_int)

#define __REALTYPE_signed_int__ signed int
void print_type_signed_int_(FILE *f, const char *funcname, const char *argname, const char *type, const signed int value) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	fprintf(f, "%d", value);
	dofflush(f);
})
#define __REALTYPE_signed_int_p__ signed int *
#define __REALTYPE_signed_int_pp__ signed int * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(signed_int)

#define __REALTYPE_unsigned__ unsigned
void print_type_unsigned_(FILE *f, const char *funcname, const char *argname, const char *type, const unsigned value) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	fprintf(f, "%u", value);
	dofflush(f);
})
#define __REALTYPE_unsigned_p__ unsigned *
#define __REALTYPE_unsigned_pp__ unsigned * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(unsigned)

#define __REALTYPE_signed__ signed
void print_type_signed_(FILE *f, const char *funcname, const char *argname, const char *type, const signed value) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	fprintf(f, "%d", value);
	dofflush(f);
})
#define __REALTYPE_signed_p__ signed *
#define __REALTYPE_signed_pp__ signed * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(signed)

#define __REALTYPE_long__ long
void print_type_long_(FILE *f, const char *funcname, const char *argname, const char *type, const long value) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	fprintf(f, "%ld", value);
	dofflush(f);
})
#define __REALTYPE_long_p__ long *
#define __REALTYPE_long_pp__ long * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(long)

#define __REALTYPE_unsigned_long__ unsigned long
void print_type_unsigned_long_(FILE *f, const char *funcname, const char *argname, const char *type, const unsigned long value) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	fprintf(f, "%lu", value);
	dofflush(f);
})
#define __REALTYPE_unsigned_long_p__ unsigned long *
#define __REALTYPE_unsigned_long_pp__ unsigned long * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(unsigned_long)

#define __REALTYPE_signed_long__ signed long
void print_type_signed_long_(FILE *f, const char *funcname, const char *argname, const char *type, const signed long value) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	fprintf(f, "%ld", value);
	dofflush(f);
})
#define __REALTYPE_signed_long_p__ signed long *
#define __REALTYPE_signed_long_pp__ signed long * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(signed_long)

#define __REALTYPE_short__ short
void print_type_short_(FILE *f, const char *funcname, const char *argname, const char *type, const short value) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	fprintf(f, "%hd", value);
	dofflush(f);
})
#define __REALTYPE_short_p__ short *
#define __REALTYPE_short_pp__ short * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(short)

#define __REALTYPE_unsigned_short__ unsigned short
void print_type_unsigned_short_(FILE *f, const char *funcname, const char *argname, const char *type, const unsigned short value) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	fprintf(f, "%hu", value);
	dofflush(f);
})
#define __REALTYPE_unsigned_short_p__ unsigned short *
#define __REALTYPE_unsigned_short_pp__ unsigned short * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(unsigned_short)

#define __REALTYPE_signed_short__ signed short
void print_type_signed_short_(FILE *f, const char *funcname, const char *argname, const char *type, const signed short value) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	fprintf(f, "%hd", value);
	dofflush(f);
})
#define __REALTYPE_signed_short_p__ signed short *
#define __REALTYPE_signed_short_pp__ signed short * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(signed_short)

// Why they didn't typedef Bool as int is beyond me, ugh...
#ifdef Bool
#undef Bool
typedef int Bool;
#endif
#define __REALTYPE_Bool__ Bool
void print_type_Bool_(FILE *f, const char *funcname, const char *argname, const char *type, const Bool value) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	fprintf(f, "%s", (value?"True":"False"));
	dofflush(f);
})
#define __REALTYPE_Bool_p__ Bool *
#define __REALTYPE_Bool_pp__ Bool * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(Bool)

// Same for Status as for Bool
#ifdef Status
#undef Status
typedef int Status;
#endif
#define __REALTYPE_Status__ Status
void print_type_Status_(FILE *f, const char *funcname, const char *argname, const char *type, const Status value) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	fprintf(f, "%s", (value?"Success":"Failure"));
	dofflush(f);
})
#define __REALTYPE_Status_p__ Status *
#define __REALTYPE_Status_pp__ Status * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(Status)

#define __REALTYPE_char__ char
void print_type_char_(FILE *f, const char *funcname, const char *argname, const char *type, const char value) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	fprintf(f, "'%c' (%d)", value, value);
	dofflush(f);
})

#define __REALTYPE_char_p__ char *
void print_type_char_p_(FILE *f, const char *funcname, const char *argname, const char *type, const char *value) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	if (value) {
		size_t len = strlen(value);
		if (len > 30) {
			char tmp[31];
			strncpy(tmp, value, 30);
			tmp[30] = '\0';
			fprintf(f, "\"%s\"...", tmp);
		} else {
			fprintf(f, "\"%s\"", value);
		}
	} else {
		fprintf(f, "%p", value);
	}
	dofflush(f);
})
#define __REALTYPE_char_p_p__ char * *
#define __REALTYPE_char_p_pp__ char * * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(char_p)
#define __REALTYPE_char_pp__ char * *
#define __REALTYPE_char_ppp__ char * * *
// This is inappropriate, because it tries to print the string at the end of the pointer chain.
// But sometimes that causes segfaults.
//__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_PP,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(char)
// So instead just print out the pointer address.
// This doesn't work because of problems with const-ness.
//__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_ALIAS,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(char_pp, void_p)
//__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_ALIAS,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(char_ppp, void_p)
// So just do it manually for now.
void print_type_char_pp_(FILE *f, const char *funcname, const char *argname, const char *type, char ** value) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	fprintf(f, "%p", value);
	dofflush(f);
})
void print_type_char_ppp_(FILE *f, const char *funcname, const char *argname, const char *type, char *** value) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	fprintf(f, "%p", value);
	dofflush(f);
})


#define __REALTYPE_unsigned_char__ unsigned char
void print_type_unsigned_char_(FILE *f, const char *funcname, const char *argname, const char *type, const unsigned char value) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	fprintf(f, "'%c' (%u)", value, value);
	dofflush(f);
})

#define __REALTYPE_unsigned_char_p__ unsigned char *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_ALIAS,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(unsigned_char_p, char_p)
#define __REALTYPE_unsigned_char_p_p__ unsigned char * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_ALIAS,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(unsigned_char_p_p, char_p_p)
#define __REALTYPE_unsigned_char_p_pp__ unsigned char * * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_ALIAS,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(unsigned_char_p_pp, char_p_pp)

#define __REALTYPE_unsigned_char_pp__ unsigned char * *
//__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_ALIAS_P,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(unsigned_char_p, char_p)
#define __REALTYPE_unsigned_char_ppp__ unsigned char * * *
//__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_ALIAS_P,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(unsigned_char_pp, char_pp)
void print_type_unsigned_char_pp_(FILE *f, const char *funcname, const char *argname, const char *type, unsigned char ** value) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	fprintf(f, "%p", value);
	dofflush(f);
})
void print_type_unsigned_char_ppp_(FILE *f, const char *funcname, const char *argname, const char *type, unsigned char *** value) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	fprintf(f, "%p", value);
	dofflush(f);
})


#define __REALTYPE_char__32___ char [32]
void print_type_char__32__(FILE *f, const char *funcname, const char *argname, const char *type, const char value[32]) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	fprintf(f, "%32s", value);
	dofflush(f);
})


#define __REALTYPE_wchar_t__ wchar_t
void print_type_wchar_t_(FILE *f, const char *funcname, const char *argname, const char *type, const wchar_t value) __LIBXLIBTRACE_PRINT_BASIC_BODY__({
	// "%lc" complains that it's a wint_t format, yet wchar_t arg, go figure
	//fprintf(f, "%li", value);
	// looks like "%lc" is fixed now...
	fprintf(f, "%lc", value);
	dofflush(f);
})

#define __REALTYPE_wchar_t_p__ wchar_t *
#define __REALTYPE_wchar_t_pp__ wchar_t * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_BASIC_SUFF__,__)(wchar_t)



#undef __LIBXLIBTRACE_PRINT_BASIC_BODY__
#undef __LIBXLIBTRACE_PRINT_BASIC_SUFF__


#endif

