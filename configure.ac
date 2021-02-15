#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

# xlibtrace: LD_PRELOAD library to trace libX11 calls
# Copyright (C) 2007-2009 Kevin Pulo
# 
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2 of the License, or (at your option) any later version.
# 
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# Lesser General Public License for more details.
# 
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
# 
# Contact:
# Kevin Pulo
# kev@pulo.com.au


AC_PREREQ(2.5)
AC_INIT(xlibtrace, [0.2], [kev@pulo.com.au])
AC_CONFIG_SRCDIR([src/libxlibtrace.c])
AM_INIT_AUTOMAKE
AM_CONFIG_HEADER([config.h])

#CFLAGS="$CFLAGS -Wall -Werror"

# Checks for programs.
AC_PROG_CC

# The next three lines are needed to build a shared library in this package.
# It turns out that this is probably no longer necessary.
AC_ENABLE_SHARED
AC_DISABLE_STATIC
AM_PROG_LIBTOOL

AC_PROG_INSTALL
AC_PROG_LN_S

# FIXME
#AC_CHECK_LIBX

# Checks for libraries.
#AC_CHECK_LIB([m], [ceil])
#if test "$ac_cv_lib_m_ceil" != yes; then
#	AC_MSG_ERROR([math library is required])
#fi

# Checks for header files.
AC_HEADER_STDC
#AC_HEADER_SYS_WAIT
#AC_CHECK_HEADERS([netdb.h stdlib.h string.h unistd.h sys/resource.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_C_CONST
AC_TYPE_PID_T
AC_TYPE_SIZE_T
#AC_HEADER_TIME

# Checks for library functions.
#AC_FUNC_FORK
#AC_FUNC_MALLOC
#AC_FUNC_MEMCMP
#AC_FUNC_SELECT_ARGTYPES
#AC_FUNC_VPRINTF
#AC_CHECK_FUNCS([dup2 getcwd gethostbyaddr gethostbyname gethostname memset select setenv strcasecmp strchr strdup strerror strncasecmp strrchr getsid getrlimit setrlimit])
#AC_CHECK_DECLS([getsid])

AC_CONFIG_FILES([Makefile src/Makefile])
AC_OUTPUT
