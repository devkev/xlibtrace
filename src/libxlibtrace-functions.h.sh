#!/bin/bash

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


cat /usr/include/X11/Xlib.h \
| sed \
	-e 's/^#define Bool/\/\/&/' \
	-e 's/^#define Status/\/\/&/' \
	-e 's/_X_SENTINEL([0-9]*)//g' \
| gcc -C -E - \
| sed -e '/^[ 	]*$/d' \
| sed -e 's/,[ 	][ 	]*\.\.\.$/,\n.../' \
| awk '
{
	if (/\(\*\) \($/) {
		mode = 1;
	}
	if (/^[ 	]*\) \/\* .* \*\/,?[ 	]*$/) {
		mode = 2;
	}
	if (mode == 1) {
		$0 = gensub("\\/\\*[ 	]*[A-Za-z0-9_]*[ 	]*\\*\\/", "", "g");
		$0 = gensub("[ 	]+", " ", "g");
		printf("%s", $0);
	} else if (mode == 2) {
		printf("%s\n", gensub("[ 	]+", " ", "g"));
		mode = 0;
	} else {
		print;
	}
}
' \
| sed -e 's/[ 	]\+/ /g' \
| awk \
	-v function_parameter_overrides_file="libxlibtrace-functions-parameter-overrides" \
'
function _xlibtrace_makesafe(t) {
	#if (_xlibtrace_ispointer(t)) {
	#	return "POINTER";
	#} else {
		safet = t;
		safet = gensub("^const[ 	]+", "", "", safet);
		safet = gensub("[ 	]+", "_", "g", safet);
		safet = gensub("[(),]", "_", "g", safet);
		safet = gensub("\\[", "_", "g", safet);
		safet = gensub("\\]", "_", "g", safet);
		safet = gensub("\\*", "p", "g", safet);
		return safet;
	#}
}

function _xlibtrace_isfunctionpointer(t) {
	return (t ~ /\(\*\)/);
}

function _xlibtrace_ispointer(t) {
	return _xlibtrace_isfunctionpointer(t) || (t ~ /\*$/);
}

function _xlibtrace_isconst(t) {
	return (t ~ /^[cC][oO][nN][sS][tT][ 	]/);
}

function _xlibtrace_isarray(t) {
	return (t ~ /\[.*\]$/);
}

function _xlibtrace_makedefn(t, n) {
	if (t == "...") {
		return sprintf("%s", t);
	} else if (_xlibtrace_isfunctionpointer(t)) {
		return gensub("^(.*\\(\\*)(\\).*)$", "\\1"n"\\2", "", t);
	} else if (_xlibtrace_isarray(t)) {
		return gensub("^(.*)(\\[.*\\])$", "\\1"n"\\2", "", t);
	} else {
		return sprintf("%s %s", t, n);
	}
}

function _xlibtrace_makeprotoarglist() {
	s = "(";
	for (i = 0; i < numargs; i++) {
		s = s sprintf(" %s%s", _xlibtrace_makedefn(argtype[i], argname[i]), ((i<numargs-1)?",":""));
	}
	s = s ")";
	return s;
}

function _xlibtrace_makearglist() {
	s = "(";
	for (i = 0; i < numargs; i++) {
		s = s sprintf(" %s%s", argname[i], ((i<numargs-1)?",":""));
	}
	s = s ")";
	return s;
}

function _xlibtrace_makefixedargliststart() {
	s = "(";
	for (i = 0; i < numargs - 1; i++) {
		s = s sprintf(" %s%s", argname[i], ((i<numargs-2)?",":""));
	}
	return s;
}

function _xlibtrace_finalfixedargname() {
	return argname[numargs-2];
}

BEGIN {
	numargs = 0;
	while (getline < function_parameter_overrides_file) {
		override[$1, $3] = $2;
	}
}

{
	if (/^extern [^(]*\($/) {
		funcname = gensub("^extern (.*[^A-Za-z0-9_])([A-Za-z0-9_]*)\\($", "\\2", "");
		type = gensub("^extern (.*[^A-Za-z0-9_])([A-Za-z0-9_]*)\\($", "\\1", "");
		type = gensub("[ 	]+$", "", "g", type);
		type = gensub("([^ *(])(\\*)", "\\1 \\2", "g", type);
	} else if ((/^)[ 	]*;$/) && funcname) {
		if (numargs == 1 && argtype[0] == "void") {
			numargs = 0;
		}
		printf("/*\n%s %s  // %d args\n", type, funcname, numargs);
		for (i = 0; i < numargs; i++) {
			printf("    \"%s\" \"%s\"\n", argtype[i], argname[i]);
		}
		printf("*/\n");

		usesvarargs = 0;
		for (i = 0; i < numargs; i++) {
			if (argtype[i] == "...") {
				usesvarargs = 1;
			}
		}

		saferettype = _xlibtrace_makesafe(type);
		if ((funcname,"") in override) {
			saferettype = override[funcname,""];
		}

		#printf("#define __TRACE_RETTYPE_%s__ %s\n", funcname, type);
		printf("#define __TRACE_SAFERETTYPE_%s__ %s\n", funcname, saferettype);
		printf("#define __TRACE_PROTOARGLIST_%s__ %s\n", funcname, _xlibtrace_makeprotoarglist());
		printf("#define __TRACE_ARGLIST_%s__ %s\n", funcname, _xlibtrace_makearglist());
		if (usesvarargs) {
			printf("#define __TRACE_FIXEDARGLISTSTART_%s__ %s\n", funcname, _xlibtrace_makefixedargliststart());
			printf("#define __TRACE_FINALFIXEDARGNAME_%s__ %s\n", funcname, _xlibtrace_finalfixedargname());
		}
		printf("#define __TRACE_ADDITIONAL_LOCAL_VARS_%s__\n", funcname);
		printf("#define __TRACE_ADDITIONAL_PRE_RUN_UNDERLYING_%s__\n", funcname);
		printf("#define __TRACE_ADDITIONAL_POST_RUN_UNDERLYING_%s__\n", funcname);

		if (numargs == 0) {
			printf("#define __TRACE_PRINTF_BODY_%s__ \n", funcname);
		} else {
			printf("#define __TRACE_PRINTF_BODY_%s__ \\\n", funcname);
			for (i = 0; i < numargs; i++) {
				if (_xlibtrace_ispointer(argtype[i]) && !_xlibtrace_isfunctionpointer(argtype[i]) && ! (argtype[i] ~ /void[ 	]+\*/) && !_xlibtrace_isconst(argtype[i])) {
					printf("    always_reprint = 1; \\\n");
					break;
				}
			}
			for (i = 0; i < numargs; i++) {
				if (argtype[i] == "...") {
					printf("    __TRACE_PRINTF_VARARG__()");
				} else {
					safeargtype = _xlibtrace_makesafe(argtype[i]);
					if ((funcname,argname[i]) in override) {
						safeargtype = override[funcname,argname[i]];
					}
					printf("    __TRACE_PRINTF_ARG__(%s, %s, %s)", funcname, safeargtype, argname[i]);
				}
				if (i<numargs-1) {
					printf(" __PRINT_COMMA__(out) \\");
				}
				printf("\n");
			}
		}

		has_display = 0;
		for (i = 0; i < numargs; i++) {
			if (argtype[i] ~ /^Display[ 	]+\*$/) {
				has_display++;
			}
		}
		if (funcname == "XFlush" || funcname == "XSync") {
			has_display = 0;
		}
		if (has_display > 0) {
			printf("#define __TRACE_RUN_UNDERLYING_EPILOGUE_%s__ \\\n", funcname);
			for (i = 0; i < numargs; i++) {
				if (argtype[i] ~ /^Display[ 	]+\*$/) {
					printf("    __TRACE_RUN_XFLUSH_XSYNC__(%s, %s, %s)", funcname, _xlibtrace_makesafe(argtype[i]), argname[i]);
					has_display--;
					if (has_display > 0) {
						printf(" \\");
					}
					printf("\n");
				}
			}
		} else {
			printf("#define __TRACE_RUN_UNDERLYING_EPILOGUE_%s__ \n", funcname);
		}

		printf("__TRACE__(%s, %s, %s)\n", ((type == "void") ? "VOID" : "TYPED"), (usesvarargs ? "VAR" : "FIXED"), funcname);
		printf("\n");
		printf("\n");

		funcname = "";
		type = "";
		numargs = 0;
	} else if (funcname) {
		argtype[numargs] = gensub("^[ 	]*(.*)[ 	]*/\\*[ 	]*([A-Za-z0-9_]*)[ 	]*\\*/,?[ 	]*$", "\\1", "");
		argname[numargs] = gensub("^[ 	]*(.*)[ 	]*/\\*[ 	]*([A-Za-z0-9_]*)[ 	]*\\*/,?[ 	]*$", "\\2", "");
		argtype[numargs] = gensub("^[ 	]*", "", "", argtype[numargs]);
		argtype[numargs] = gensub("[ 	]*$", "", "", argtype[numargs]);
		argtype[numargs] = gensub("([^ *(])(\\*)", "\\1 \\2", "g", argtype[numargs]);
		numargs = numargs + 1;
	}
}
' \
> libxlibtrace-functions.h

