
#ifndef __LIBXLIBTRACE_X_BASIC_H__
#define __LIBXLIBTRACE_X_BASIC_H__


#include <X11/Xlib.h>
//#include <X11/Xutil.h>
//#include <X11/Xos.h>
#include <X11/Xatom.h>
//#include <X11/extensions/shape.h>

#include "libxlibtrace-common.h"
#include "libxlibtrace-print.h"
#include "libxlibtrace-print-basic.h"
#include "libxlibtrace-print-keysyms.h"
#include "libxlibtrace-atoms.h"


#if defined(__LIBXLIBTRACE_PRINT_X_INCLUDE_DEFINITIONS__)

/* Stuff for the .c file */
#  define __LIBXLIBTRACE_PRINT_X_BODY__(x) x
#  define __LIBXLIBTRACE_PRINT_X_SUFF__ 

#else

/* Stuff for the .h file */
#  define __LIBXLIBTRACE_PRINT_X_BODY__(x) ;
#  define __LIBXLIBTRACE_PRINT_X_SUFF__ _PROTO

#endif




#define __REALTYPE_XID__ XID
void print_type_XID_(FILE *f, const char *funcname, const char *argname, const char *type, const XID value) __LIBXLIBTRACE_PRINT_X_BODY__({
	fprintf(f, "0x%lx", value);
	dofflush(f);
})
#define __REALTYPE_XID_p__ XID *
#define __REALTYPE_XID_pp__ XID * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XID)

#define __REALTYPE_Mask__ Mask
void print_type_Mask_(FILE *f, const char *funcname, const char *argname, const char *type, const Mask value) __LIBXLIBTRACE_PRINT_X_BODY__({
	fprintf(f, "0x%lx", value);
	dofflush(f);
})
#define __REALTYPE_Mask_p__ Mask *
#define __REALTYPE_Mask_pp__ Mask * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(Mask)

#define __REALTYPE_Atom__ Atom
void print_type_Atom_(FILE *f, const char *funcname, const char *argname, const char *type, const Atom value) __LIBXLIBTRACE_PRINT_X_BODY__({
	//if (value > XA_LAST_PREDEFINED) {
	if (value > max_atom_name) {
		fprintf(f, "%s (%lu)", "UNKNOWN_ATOM", value);
	} else if (value == None) {
		fprintf(f, "%s (%lu)", "None", value);
	} else {
		fprintf(f, "%s (%lu)", atom_name[value], value);
	}
	dofflush(f);
})
#define __REALTYPE_Atom_p__ Atom *
#define __REALTYPE_Atom_pp__ Atom * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(Atom)

#define __REALTYPE_VisualID__ VisualID
void print_type_VisualID_(FILE *f, const char *funcname, const char *argname, const char *type, const VisualID value) __LIBXLIBTRACE_PRINT_X_BODY__({
	fprintf(f, "0x%lx", value);
	dofflush(f);
})
#define __REALTYPE_VisualID_p__ VisualID *
#define __REALTYPE_VisualID_pp__ VisualID * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(VisualID)

#define __REALTYPE_Time__ Time
void print_type_Time_(FILE *f, const char *funcname, const char *argname, const char *type, const Time value) __LIBXLIBTRACE_PRINT_X_BODY__({
	if (value == CurrentTime) {
		fprintf(f, "(0x%lx) CurrentTime", value);
	} else {
		fprintf(f, "0x%lx", value);
	}
	dofflush(f);
})
#define __REALTYPE_Time_p__ Time *
#define __REALTYPE_Time_pp__ Time * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(Time)

#define __REALTYPE_Window__ Window
void print_type_Window_(FILE *f, const char *funcname, const char *argname, const char *type, const Window value) __LIBXLIBTRACE_PRINT_X_BODY__({
	fprintf(f, "0x%lx", value);
	dofflush(f);
})
#define __REALTYPE_Window_p__ Window *
#define __REALTYPE_Window_pp__ Window * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(Window)

#define __REALTYPE_Drawable__ Drawable
void print_type_Drawable_(FILE *f, const char *funcname, const char *argname, const char *type, const Drawable value) __LIBXLIBTRACE_PRINT_X_BODY__({
	fprintf(f, "0x%lx", value);
	dofflush(f);
})
#define __REALTYPE_Drawable_p__ Drawable *
#define __REALTYPE_Drawable_pp__ Drawable * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(Drawable)

#define __REALTYPE_Font__ Font
void print_type_Font_(FILE *f, const char *funcname, const char *argname, const char *type, const Font value) __LIBXLIBTRACE_PRINT_X_BODY__({
	fprintf(f, "0x%lx", value);
	dofflush(f);
})
#define __REALTYPE_Font_p__ Font *
#define __REALTYPE_Font_pp__ Font * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(Font)

#define __REALTYPE_Pixmap__ Pixmap
void print_type_Pixmap_(FILE *f, const char *funcname, const char *argname, const char *type, const Pixmap value) __LIBXLIBTRACE_PRINT_X_BODY__({
	fprintf(f, "0x%lx", value);
	dofflush(f);
})
#define __REALTYPE_Pixmap_p__ Pixmap *
#define __REALTYPE_Pixmap_pp__ Pixmap * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(Pixmap)

#define __REALTYPE_Cursor__ Cursor
void print_type_Cursor_(FILE *f, const char *funcname, const char *argname, const char *type, const Cursor value) __LIBXLIBTRACE_PRINT_X_BODY__({
	fprintf(f, "0x%lx", value);
	dofflush(f);
})
#define __REALTYPE_Cursor_p__ Cursor *
#define __REALTYPE_Cursor_pp__ Cursor * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(Cursor)

#define __REALTYPE_Colormap__ Colormap
void print_type_Colormap_(FILE *f, const char *funcname, const char *argname, const char *type, const Colormap value) __LIBXLIBTRACE_PRINT_X_BODY__({
	fprintf(f, "0x%lx", value);
	dofflush(f);
})
#define __REALTYPE_Colormap_p__ Colormap *
#define __REALTYPE_Colormap_pp__ Colormap * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(Colormap)

#define __REALTYPE_GContext__ GContext
void print_type_GContext_(FILE *f, const char *funcname, const char *argname, const char *type, const GContext value) __LIBXLIBTRACE_PRINT_X_BODY__({
	fprintf(f, "0x%lx", value);
	dofflush(f);
})
#define __REALTYPE_GContext_p__ GContext *
#define __REALTYPE_GContext_pp__ GContext * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(GContext)

// KeySyms are generated and done by libxlibtrace-print-keysyms.h

#define __REALTYPE_KeyCode__ KeyCode
void print_type_KeyCode_(FILE *f, const char *funcname, const char *argname, const char *type, const KeyCode value) __LIBXLIBTRACE_PRINT_X_BODY__({
	// KeyCode is typedef'd as an unsigned char, but don't try to print it as a character, that can be bad news.
	//fprintf(f, "'%c'", value);
	fprintf(f, "'\\%u'", value);
	dofflush(f);
})
#define __REALTYPE_KeyCode_p__ KeyCode *
#define __REALTYPE_KeyCode_pp__ KeyCode * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(KeyCode)

#define __REALTYPE_XPointer__ XPointer
void print_type_XPointer_(FILE *f, const char *funcname, const char *argname, const char *type, const XPointer value) __LIBXLIBTRACE_PRINT_X_BODY__({
	fprintf(f, "%p", value);
	dofflush(f);
})
#define __REALTYPE_XPointer_p__ XPointer *
#define __REALTYPE_XPointer_pp__ XPointer * *
__INDIRECT_CALL_3__(__TRACE_PRINT_SIMPLE_TYPE_P,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XPointer)


#define __REALTYPE_Bool__p____Display_p___XEvent_p___XPointer___ int (*) ( Display * , XEvent * , XPointer )
void print_type_Bool__p____Display_p___XEvent_p___XPointer___(FILE *f, const char *funcname, const char *argname, const char *type, Bool (*value) ( Display * , XEvent * , XPointer )) __LIBXLIBTRACE_PRINT_X_BODY__({
	fprintf(f, "%p", value);
	dofflush(f);
})





#define __REALTYPE_long_EventMask__    long
#define __REALTYPE_long_EventMask_p__  long *
#define __REALTYPE_long_EventMask_pp__ long **
#define __TRACE_PRINT_TYPE_BITMASK_BODY_long_EventMask__(safetype) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, NoEventMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, KeyPressMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, KeyReleaseMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, ButtonPressMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, ButtonReleaseMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, EnterWindowMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, LeaveWindowMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, PointerMotionMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, PointerMotionHintMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, Button1MotionMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, Button2MotionMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, Button3MotionMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, Button4MotionMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, Button5MotionMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, ButtonMotionMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, KeymapStateMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, ExposureMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, VisibilityChangeMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, StructureNotifyMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, ResizeRedirectMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, SubstructureNotifyMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, SubstructureRedirectMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, FocusChangeMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, PropertyChangeMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, ColormapChangeMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, OwnerGrabButtonMask)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_BITMASK,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(long_EventMask)

#define __REALTYPE_int_KeyButtonMask__    int
#define __REALTYPE_int_KeyButtonMask_p__  int *
#define __REALTYPE_int_KeyButtonMask_pp__ int **
#define __TRACE_PRINT_TYPE_BITMASK_BODY_int_KeyButtonMask__(safetype) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, ShiftMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, LockMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, ControlMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, Mod1Mask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, Mod2Mask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, Mod3Mask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, Mod4Mask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, Mod5Mask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, Button1Mask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, Button2Mask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, Button3Mask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, Button4Mask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, Button5Mask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, AnyModifier)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_BITMASK,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_KeyButtonMask)

// Don't know where this is used...
#define __REALTYPE_int_ModifierMapIndex__    int
#define __REALTYPE_int_ModifierMapIndex_p__  int *
#define __REALTYPE_int_ModifierMapIndex_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_ModifierMapIndex__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, ShiftMapIndex) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, LockMapIndex) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, ControlMapIndex) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, Mod1MapIndex) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, Mod2MapIndex) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, Mod3MapIndex) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, Mod4MapIndex) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, Mod5MapIndex)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_ModifierMapIndex)

#define __REALTYPE_int_ButtonName__    int
#define __REALTYPE_int_ButtonName_p__  int *
#define __REALTYPE_int_ButtonName_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_ButtonName__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, AnyButton) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, Button1) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, Button2) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, Button3) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, Button4) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, Button5)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_ButtonName)

#define __REALTYPE_int_NotifyMode__    int
#define __REALTYPE_int_NotifyMode_p__  int *
#define __REALTYPE_int_NotifyMode_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_NotifyMode__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, NotifyNormal) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, NotifyGrab) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, NotifyUngrab) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, NotifyWhileGrabbed)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_NotifyMode)

#define __REALTYPE_char_NotifyHint__    char
#define __REALTYPE_char_NotifyHint_p__  char *
#define __REALTYPE_char_NotifyHint_pp__ char **
#define __TRACE_PRINT_TYPE_ENUM_BODY_char_NotifyHint__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, NotifyNormal) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, NotifyHint)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(char_NotifyHint)

#define __REALTYPE_int_NotifyDetail__    int
#define __REALTYPE_int_NotifyDetail_p__  int *
#define __REALTYPE_int_NotifyDetail_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_NotifyDetail__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, NotifyAncestor) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, NotifyVirtual) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, NotifyInferior) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, NotifyNonlinear) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, NotifyNonlinearVirtual) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, NotifyPointer) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, NotifyPointerRoot) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, NotifyDetailNone)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_NotifyDetail)

#define __REALTYPE_int_VisibilityNotify__    int
#define __REALTYPE_int_VisibilityNotify_p__  int *
#define __REALTYPE_int_VisibilityNotify_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_VisibilityNotify__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, VisibilityUnobscured) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, VisibilityPartiallyObscured) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, VisibilityFullyObscured)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_VisibilityNotify)

#define __REALTYPE_int_CirculationRequest__    int
#define __REALTYPE_int_CirculationRequest_p__  int *
#define __REALTYPE_int_CirculationRequest_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_CirculationRequest__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, PlaceOnTop) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, PlaceOnBottom)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_CirculationRequest)

#define __REALTYPE_int_ProtocolFamily__    int
#define __REALTYPE_int_ProtocolFamily_p__  int *
#define __REALTYPE_int_ProtocolFamily_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_ProtocolFamily__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, FamilyInternet) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, FamilyDECnet) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, FamilyChaos) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, FamilyServerInterpreted) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, FamilyInternet6)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_ProtocolFamily)

#define __REALTYPE_int_Property__    int
#define __REALTYPE_int_Property_p__  int *
#define __REALTYPE_int_Property_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_Property__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, PropertyNewValue) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, PropertyDelete)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_Property)

#define __REALTYPE_int_Colormap__    int
#define __REALTYPE_int_Colormap_p__  int *
#define __REALTYPE_int_Colormap_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_Colormap__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, ColormapUninstalled) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, ColormapInstalled)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_Colormap)

#define __REALTYPE_int_GrabMode__    int
#define __REALTYPE_int_GrabMode_p__  int *
#define __REALTYPE_int_GrabMode_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_GrabMode__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GrabModeSync) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GrabModeAsync)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_GrabMode)

#define __REALTYPE_int_GrabReply__    int
#define __REALTYPE_int_GrabReply_p__  int *
#define __REALTYPE_int_GrabReply_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_GrabReply__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GrabSuccess) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, AlreadyGrabbed) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GrabInvalidTime) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GrabNotViewable) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GrabFrozen)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_GrabReply)

#define __REALTYPE_int_AllowEvents__    int
#define __REALTYPE_int_AllowEvents_p__  int *
#define __REALTYPE_int_AllowEvents_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_AllowEvents__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, AsyncPointer) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, SyncPointer) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, ReplayPointer) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, AsyncKeyboard) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, SyncKeyboard) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, ReplayKeyboard) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, AsyncBoth) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, SyncBoth)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_AllowEvents)

#define __REALTYPE_int_InputFocus__    int
#define __REALTYPE_int_InputFocus_p__  int *
#define __REALTYPE_int_InputFocus_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_InputFocus__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, RevertToNone) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, RevertToPointerRoot) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, RevertToParent)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_InputFocus)

#define __REALTYPE_unsigned_char_ErrorCode__    int
#define __REALTYPE_unsigned_char_ErrorCode_p__  int *
#define __REALTYPE_unsigned_char_ErrorCode_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_unsigned_char_ErrorCode__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, Success) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, BadRequest) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, BadValue) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, BadWindow) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, BadPixmap) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, BadAtom) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, BadCursor) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, BadFont) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, BadMatch) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, BadDrawable) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, BadAccess) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, BadAlloc) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, BadColor) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, BadGC) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, BadIDChoice) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, BadName) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, BadLength) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, BadImplementation)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(unsigned_char_ErrorCode)

#define __REALTYPE_int_WindowClass__    int
#define __REALTYPE_int_WindowClass_p__  int *
#define __REALTYPE_int_WindowClass_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_WindowClass__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, CopyFromParent) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, InputOutput) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, InputOnly)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_WindowClass)

#define __REALTYPE_unsigned_long_WindowAttributes__    long
#define __REALTYPE_unsigned_long_WindowAttributes_p__  long *
#define __REALTYPE_unsigned_long_WindowAttributes_pp__ long **
#define __TRACE_PRINT_TYPE_BITMASK_BODY_unsigned_long_WindowAttributes__(safetype) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, CWBackPixmap) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, CWBackPixel) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, CWBorderPixmap) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, CWBorderPixel) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, CWBitGravity) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, CWWinGravity) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, CWBackingStore) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, CWBackingPlanes) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, CWBackingPixel) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, CWOverrideRedirect) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, CWSaveUnder) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, CWEventMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, CWDontPropagate) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, CWColormap) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, CWCursor)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_BITMASK,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(unsigned_long_WindowAttributes)

#define __REALTYPE_unsigned_int_ConfigureWindow__    int
#define __REALTYPE_unsigned_int_ConfigureWindow_p__  int *
#define __REALTYPE_unsigned_int_ConfigureWindow_pp__ int **
#define __TRACE_PRINT_TYPE_BITMASK_BODY_unsigned_int_ConfigureWindow__(safetype) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, CWX) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, CWY) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, CWWidth) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, CWHeight) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, CWBorderWidth) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, CWSibling) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, CWStackMode)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_BITMASK,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(unsigned_int_ConfigureWindow)

#define __REALTYPE_int_BitGravity__    int
#define __REALTYPE_int_BitGravity_p__  int *
#define __REALTYPE_int_BitGravity_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_BitGravity__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, ForgetGravity) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, NorthWestGravity) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, NorthGravity) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, NorthEastGravity) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, WestGravity) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, CenterGravity) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, EastGravity) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, SouthWestGravity) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, SouthGravity) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, SouthEastGravity) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, StaticGravity)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_BitGravity)

#define __REALTYPE_int_WindowGravity__    int
#define __REALTYPE_int_WindowGravity_p__  int *
#define __REALTYPE_int_WindowGravity_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_WindowGravity__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, UnmapGravity) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, NorthWestGravity) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, NorthGravity) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, NorthEastGravity) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, WestGravity) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, CenterGravity) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, EastGravity) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, SouthWestGravity) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, SouthGravity) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, SouthEastGravity) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, StaticGravity)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_WindowGravity)

#define __REALTYPE_int_GetWindowAttributesReply__    int
#define __REALTYPE_int_GetWindowAttributesReply_p__  int *
#define __REALTYPE_int_GetWindowAttributesReply_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_GetWindowAttributesReply__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, IsUnmapped) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, IsUnviewable) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, IsViewable)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_GetWindowAttributesReply)

#define __REALTYPE_int_SetMode__    int
#define __REALTYPE_int_SetMode_p__  int *
#define __REALTYPE_int_SetMode_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_SetMode__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, SetModeInsert) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, SetModeDelete)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_SetMode)

#define __REALTYPE_int_ChangeCloseDownMode__    int
#define __REALTYPE_int_ChangeCloseDownMode_p__  int *
#define __REALTYPE_int_ChangeCloseDownMode_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_ChangeCloseDownMode__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, DestroyAll) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, RetainPermanent) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, RetainTemporary)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_ChangeCloseDownMode)

#define __REALTYPE_int_WindowStackingMethod__    int
#define __REALTYPE_int_WindowStackingMethod_p__  int *
#define __REALTYPE_int_WindowStackingMethod_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_WindowStackingMethod__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, Above) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, Below) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, TopIf) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, BottomIf) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, Opposite)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_WindowStackingMethod)

#define __REALTYPE_int_CirculationDirection__    int
#define __REALTYPE_int_CirculationDirection_p__  int *
#define __REALTYPE_int_CirculationDirection_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_CirculationDirection__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, RaiseLowest) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, LowerHighest)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_CirculationDirection)

#define __REALTYPE_int_PropertyMode__    int
#define __REALTYPE_int_PropertyMode_p__  int *
#define __REALTYPE_int_PropertyMode_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_PropertyMode__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, PropModeReplace) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, PropModePrepend) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, PropModeAppend)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_PropertyMode)

#define __REALTYPE_unsigned_int_FontDirection__    int
#define __REALTYPE_unsigned_int_FontDirection_p__  int *
#define __REALTYPE_unsigned_int_FontDirection_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_unsigned_int_FontDirection__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, FontLeftToRight) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, FontRightToLeft) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, FontChange)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(unsigned_int_FontDirection)

#define __REALTYPE_int_ImageFormat__    int
#define __REALTYPE_int_ImageFormat_p__  int *
#define __REALTYPE_int_ImageFormat_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_ImageFormat__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XYBitmap) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XYPixmap) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, ZPixmap)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_ImageFormat)

#define __REALTYPE_int_ColormapAlloc__    int
#define __REALTYPE_int_ColormapAlloc_p__  int *
#define __REALTYPE_int_ColormapAlloc_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_ColormapAlloc__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, AllocNone) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, AllocAll)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_ColormapAlloc)

#define __REALTYPE_int_ColormapFlags__    int
#define __REALTYPE_int_ColormapFlags_p__  int *
#define __REALTYPE_int_ColormapFlags_pp__ int **
#define __TRACE_PRINT_TYPE_BITMASK_BODY_int_ColormapFlags__(safetype) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, DoRed) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, DoGreen) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, DoBlue)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_BITMASK,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_ColormapFlags)

#define __REALTYPE_int_CursorShape__    int
#define __REALTYPE_int_CursorShape_p__  int *
#define __REALTYPE_int_CursorShape_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_CursorShape__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, CursorShape) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, TileShape) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, StippleShape)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_CursorShape)

#define __REALTYPE_int_AutoRepeat__    int
#define __REALTYPE_int_AutoRepeat_p__  int *
#define __REALTYPE_int_AutoRepeat_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_AutoRepeat__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, AutoRepeatModeOff) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, AutoRepeatModeOn) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, AutoRepeatModeDefault)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_AutoRepeat)

#define __REALTYPE_int_LedMode__    int
#define __REALTYPE_int_LedMode_p__  int *
#define __REALTYPE_int_LedMode_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_LedMode__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, LedModeOff) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, LedModeOn)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_LedMode)

#define __REALTYPE_unsigned_long_KeyboardControlMask__    long
#define __REALTYPE_unsigned_long_KeyboardControlMask_p__  long *
#define __REALTYPE_unsigned_long_KeyboardControlMask_pp__ long **
#define __TRACE_PRINT_TYPE_BITMASK_BODY_unsigned_long_KeyboardControlMask__(safetype) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, KBKeyClickPercent) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, KBBellPercent) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, KBBellPitch) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, KBBellDuration) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, KBLed) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, KBLedMode) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, KBKey) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, KBAutoRepeatMode)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_BITMASK,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(unsigned_long_KeyboardControlMask)

#define __REALTYPE_int_MappingResult__    int
#define __REALTYPE_int_MappingResult_p__  int *
#define __REALTYPE_int_MappingResult_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_MappingResult__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, MappingSuccess) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, MappingBusy) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, MappingFailed)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_MappingResult)

#define __REALTYPE_int_MappingTarget__    int
#define __REALTYPE_int_MappingTarget_p__  int *
#define __REALTYPE_int_MappingTarget_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_MappingTarget__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, MappingModifier) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, MappingKeyboard) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, MappingPointer)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_MappingTarget)

#define __REALTYPE_int_ScreenSaverBlanking__    int
#define __REALTYPE_int_ScreenSaverBlanking_p__  int *
#define __REALTYPE_int_ScreenSaverBlanking_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_ScreenSaverBlanking__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, DontPreferBlanking) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, PreferBlanking) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, DefaultBlanking)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_ScreenSaverBlanking)

#define __REALTYPE_int_DisableScreenSaver__    int
#define __REALTYPE_int_DisableScreenSaver_p__  int *
#define __REALTYPE_int_DisableScreenSaver_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_DisableScreenSaver__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, DisableScreenSaver)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_DisableScreenSaver)

#define __REALTYPE_int_DisableScreenInterval__    int
#define __REALTYPE_int_DisableScreenInterval_p__  int *
#define __REALTYPE_int_DisableScreenInterval_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_DisableScreenInterval__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, DisableScreenInterval)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_DisableScreenInterval)

#define __REALTYPE_int_ScreenSaverExposures__    int
#define __REALTYPE_int_ScreenSaverExposures_p__  int *
#define __REALTYPE_int_ScreenSaverExposures_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_ScreenSaverExposures__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, DontAllowExposures) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, AllowExposures) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, DefaultExposures)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_ScreenSaverExposures)

#define __REALTYPE_int_ForceScreenSaver__    int
#define __REALTYPE_int_ForceScreenSaver_p__  int *
#define __REALTYPE_int_ForceScreenSaver_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_ForceScreenSaver__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, ScreenSaverReset) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, ScreenSaverActive)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_ForceScreenSaver)

#define __REALTYPE_int_HostOrder__    int
#define __REALTYPE_int_HostOrder_p__  int *
#define __REALTYPE_int_HostOrder_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_HostOrder__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, HostInsert) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, HostDelete)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_HostOrder)

#define __REALTYPE_int_HostAccess__    int
#define __REALTYPE_int_HostAccess_p__  int *
#define __REALTYPE_int_HostAccess_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_HostAccess__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, EnableAccess) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, DisableAccess)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_HostAccess)

#define __REALTYPE_int_DisplayClass__    int
#define __REALTYPE_int_DisplayClass_p__  int *
#define __REALTYPE_int_DisplayClass_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_DisplayClass__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, StaticGray) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GrayScale) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, StaticColor) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, PseudoColor) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, TrueColor) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, DirectColor)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_DisplayClass)

#define __REALTYPE_int_ByteOrder__    int
#define __REALTYPE_int_ByteOrder_p__  int *
#define __REALTYPE_int_ByteOrder_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_ByteOrder__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, LSBFirst) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, MSBFirst)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_ByteOrder)

#define __REALTYPE_int_QueueMode__    int
#define __REALTYPE_int_QueueMode_p__  int *
#define __REALTYPE_int_QueueMode_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_QueueMode__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, QueuedAlready) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, QueuedAfterReading) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, QueuedAfterFlush)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_QueueMode)

#define __REALTYPE_int_GraphicsFunction__    int
#define __REALTYPE_int_GraphicsFunction_p__  int *
#define __REALTYPE_int_GraphicsFunction_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_GraphicsFunction__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GXclear) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GXand) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GXandReverse) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GXcopy) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GXandInverted) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GXnoop) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GXxor) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GXor) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GXnor) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GXequiv) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GXinvert) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GXorReverse) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GXcopyInverted) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GXorInverted) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GXnand) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GXset)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_GraphicsFunction)

#define __REALTYPE_int_LineStyle__    int
#define __REALTYPE_int_LineStyle_p__  int *
#define __REALTYPE_int_LineStyle_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_LineStyle__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, LineSolid) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, LineOnOffDash) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, LineDoubleDash)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_LineStyle)

#define __REALTYPE_int_CapStyle__    int
#define __REALTYPE_int_CapStyle_p__  int *
#define __REALTYPE_int_CapStyle_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_CapStyle__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, CapNotLast) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, CapButt) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, CapRound) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, CapProjecting)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_CapStyle)

#define __REALTYPE_int_JoinStyle__    int
#define __REALTYPE_int_JoinStyle_p__  int *
#define __REALTYPE_int_JoinStyle_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_JoinStyle__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, JoinMiter) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, JoinRound) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, JoinBevel)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_JoinStyle)

#define __REALTYPE_int_FillStyle__    int
#define __REALTYPE_int_FillStyle_p__  int *
#define __REALTYPE_int_FillStyle_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_FillStyle__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, FillSolid) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, FillTiled) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, FillStippled) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, FillOpaqueStippled)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_FillStyle)

#define __REALTYPE_int_FillRule__    int
#define __REALTYPE_int_FillRule_p__  int *
#define __REALTYPE_int_FillRule_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_FillRule__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, EvenOddRule) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, WindingRule)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_FillRule)

#define __REALTYPE_int_SubwindowMode__    int
#define __REALTYPE_int_SubwindowMode_p__  int *
#define __REALTYPE_int_SubwindowMode_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_SubwindowMode__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, ClipByChildren) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, IncludeInferiors)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_SubwindowMode)

#define __REALTYPE_int_SetClipRectanglesOrdering__    int
#define __REALTYPE_int_SetClipRectanglesOrdering_p__  int *
#define __REALTYPE_int_SetClipRectanglesOrdering_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_SetClipRectanglesOrdering__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, Unsorted) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, YSorted) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, YXSorted) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, YXBanded)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_SetClipRectanglesOrdering)

#define __REALTYPE_int_CoordinateMode__    int
#define __REALTYPE_int_CoordinateMode_p__  int *
#define __REALTYPE_int_CoordinateMode_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_CoordinateMode__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, CoordModeOrigin) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, CoordModePrevious)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_CoordinateMode)

#define __REALTYPE_int_PolygonShape__    int
#define __REALTYPE_int_PolygonShape_p__  int *
#define __REALTYPE_int_PolygonShape_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_PolygonShape__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, Complex) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, Nonconvex) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, Convex)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_PolygonShape)

#define __REALTYPE_int_ArcMode__    int
#define __REALTYPE_int_ArcMode_p__  int *
#define __REALTYPE_int_ArcMode_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_ArcMode__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, ArcChord) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, ArcPieSlice)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_ArcMode)

#define __REALTYPE_unsigned_long_GCComponent__    long
#define __REALTYPE_unsigned_long_GCComponent_p__  long *
#define __REALTYPE_unsigned_long_GCComponent_pp__ long **
#define __TRACE_PRINT_TYPE_BITMASK_BODY_unsigned_long_GCComponent__(safetype) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, GCFunction) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, GCPlaneMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, GCForeground) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, GCBackground) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, GCLineWidth) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, GCLineStyle) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, GCCapStyle) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, GCJoinStyle) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, GCFillStyle) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, GCFillRule) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, GCTile) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, GCStipple) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, GCTileStipXOrigin) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, GCTileStipYOrigin) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, GCFont) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, GCSubwindowMode) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, GCGraphicsExposures) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, GCClipXOrigin) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, GCClipYOrigin) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, GCClipMask) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, GCDashOffset) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, GCDashList) \
	__TRACE_PRINT_BITMASK_MEMBER__(f, safetype, value, GCArcMode)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_BITMASK,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(unsigned_long_GCComponent)


#define __REALTYPE_XExtData__    XExtData
#define __REALTYPE_XExtData_p__  XExtData *
#define __REALTYPE_XExtData_pp__ XExtData **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XExtData__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, number) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XExtData_p, next) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, void_p, free_private) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XPointer, private_data)
// FIXME
//__TRACE_PRINT_TYPE_STRUCT__(XExtData)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_OPAQUE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XExtData)

#define __REALTYPE_struct__XExtData__    struct _XExtData
#define __REALTYPE_struct__XExtData_p__  struct _XExtData *
#define __REALTYPE_struct__XExtData_pp__ struct _XExtData **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_INDIRECT_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(struct__XExtData, XExtData)

#define __REALTYPE_XExtCodes__    XExtCodes
#define __REALTYPE_XExtCodes_p__  XExtCodes *
#define __REALTYPE_XExtCodes_pp__ XExtCodes **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XExtCodes__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, extension) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, major_opcode) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, first_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, first_error)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XExtCodes)

#define __REALTYPE_XPixmapFormatValues__    XPixmapFormatValues
#define __REALTYPE_XPixmapFormatValues_p__  XPixmapFormatValues *
#define __REALTYPE_XPixmapFormatValues_pp__ XPixmapFormatValues **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XPixmapFormatValues__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, depth) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, bits_per_pixel) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, scanline_pad)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XPixmapFormatValues)

#define __REALTYPE_XGCValues__    XGCValues
#define __REALTYPE_XGCValues_p__  XGCValues *
#define __REALTYPE_XGCValues_pp__ XGCValues **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XGCValues__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_GraphicsFunction, function) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, plane_mask) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, foreground) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, background) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, line_width) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_LineStyle, line_style) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_CapStyle, cap_style) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_JoinStyle, join_style) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_FillStyle, fill_style) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_FillRule, fill_rule) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_ArcMode, arc_mode) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Pixmap, tile) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Pixmap, stipple) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, ts_x_origin) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, ts_y_origin) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Font, font) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_SubwindowMode, subwindow_mode) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, graphics_exposures) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, clip_x_origin) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, clip_y_origin) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Pixmap, clip_mask) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, dash_offset) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, char, dashes)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XGCValues)

#define __REALTYPE_struct__XGC__    struct _XGC
#define __REALTYPE_struct__XGC_p__  struct _XGC *
#define __REALTYPE_struct__XGC_pp__ struct _XGC **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_OPAQUE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(struct__XGC)

#define __REALTYPE_GC__    GC
#define __REALTYPE_GC_p__  GC *
#define __REALTYPE_GC_pp__ GC **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_OPAQUE_STRUCT_P,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(GC)

#define __REALTYPE_Visual__    Visual
#define __REALTYPE_Visual_p__  Visual *
#define __REALTYPE_Visual_pp__ Visual **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_Visual__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, void_p, ext_data) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, VisualID, visualid) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, class) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, red_mask) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, green_mask) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, blue_mask) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, bits_per_rgb) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, map_entries)
// FIXME
//__TRACE_PRINT_TYPE_STRUCT__(Visual)
//	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XExtData_p, ext_data) __PRINT_COMMA__(f)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_OPAQUE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(Visual)

#define __REALTYPE_Depth__    Depth
#define __REALTYPE_Depth_p__  Depth *
#define __REALTYPE_Depth_pp__ Depth **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_Depth__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, depth) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, nvisuals) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Visual_p, visuals)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(Depth)

#define __REALTYPE_struct__XDisplay__    struct _XDisplay
#define __REALTYPE_struct__XDisplay_p__  struct _XDisplay *
#define __REALTYPE_struct__XDisplay_pp__ struct _XDisplay **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_OPAQUE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(struct__XDisplay)

#define __REALTYPE_Display__    Display
#define __REALTYPE_Display_p__  Display *
#define __REALTYPE_Display_pp__ Display **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_INDIRECT_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(Display, struct__XDisplay)

#define __REALTYPE_int_BackingStore__    int
#define __REALTYPE_int_BackingStore_p__  int *
#define __REALTYPE_int_BackingStore_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_BackingStore__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, NotUseful) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, WhenMapped) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, Always)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_BackingStore)

#define __REALTYPE_Screen__    Screen
#define __REALTYPE_Screen_p__  Screen *
#define __REALTYPE_Screen_pp__ Screen **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_Screen__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XExtData_p, ext_data) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, struct__XDisplay_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, root) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, width) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, height) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, mwidth) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, mheight) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, ndepths) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Depth_p, depths) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, root_depth) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Visual_p, root_visual) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, GC, default_gc) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Colormap, cmap) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, white_pixel) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, black_pixel) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, max_maps) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, min_maps) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_BackingStore, backing_store) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, save_unders) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, long, root_input_mask)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_IMPL_DEP_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(Screen)

#define __REALTYPE_ScreenFormat__    ScreenFormat
#define __REALTYPE_ScreenFormat_p__  ScreenFormat *
#define __REALTYPE_ScreenFormat_pp__ ScreenFormat **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_ScreenFormat__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XExtData_p, ext_data) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, depth) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, bits_per_pixel) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, scanline_pad)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(ScreenFormat)


#define __REALTYPE_XSetWindowAttributes__    XSetWindowAttributes
#define __REALTYPE_XSetWindowAttributes_p__  XSetWindowAttributes *
#define __REALTYPE_XSetWindowAttributes_pp__ XSetWindowAttributes **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XSetWindowAttributes__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Pixmap, background_pixmap) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, background_pixel) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Pixmap, border_pixmap) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, border_pixel) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_BitGravity, bit_gravity) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_WindowGravity, win_gravity) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_BackingStore, backing_store) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, backing_planes) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, backing_pixel) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, save_under) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, long_EventMask, event_mask) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, long, do_not_propagate_mask) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, override_redirect) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Colormap, colormap) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Cursor, cursor)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XSetWindowAttributes)

#define __REALTYPE_XWindowAttributes__    XWindowAttributes
#define __REALTYPE_XWindowAttributes_p__  XWindowAttributes *
#define __REALTYPE_XWindowAttributes_pp__ XWindowAttributes **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XWindowAttributes__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, x) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, y) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, width) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, height) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, border_width) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Visual_p, visual) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, root) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_WindowClass, class) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_BitGravity, bit_gravity) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_WindowGravity, win_gravity) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_BackingStore, backing_store) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, backing_planes) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, backing_pixel) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, save_under) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Colormap, colormap) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, map_installed) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_GetWindowAttributesReply, map_state) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, long_EventMask, all_event_masks) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, long_EventMask, your_event_mask) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, long, do_not_propagate_mask) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, override_redirect) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Screen_p, screen)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XWindowAttributes)

#define __REALTYPE_XHostAddress__    XHostAddress
#define __REALTYPE_XHostAddress_p__  XHostAddress *
#define __REALTYPE_XHostAddress_pp__ XHostAddress **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XHostAddress__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_ProtocolFamily, family) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, length) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, char_p, address)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XHostAddress)

#define __REALTYPE_XServerInterpretedAddress__    XServerInterpretedAddress
#define __REALTYPE_XServerInterpretedAddress_p__  XServerInterpretedAddress *
#define __REALTYPE_XServerInterpretedAddress_pp__ XServerInterpretedAddress **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XServerInterpretedAddress__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, typelength) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, valuelength) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, char_p, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, char_p, value)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XServerInterpretedAddress)

#define __REALTYPE_XImage__    XImage
#define __REALTYPE_XImage_p__  XImage *
#define __REALTYPE_XImage_pp__ XImage **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XImage__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, width) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, height) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, xoffset) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, format) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, void_p, data) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, byte_order) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, bitmap_unit) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, bitmap_bit_order) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, bitmap_pad) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, depth) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, bytes_per_line) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, bits_per_pixel) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, red_mask) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, green_mask) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, blue_mask) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype.funcs, *value, void_p, f.create_image) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype.funcs, *value, void_p, f.destroy_image) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype.funcs, *value, void_p, f.get_pixel) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype.funcs, *value, void_p, f.put_pixel) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype.funcs, *value, void_p, f.sub_image) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype.funcs, *value, void_p, f.add_pixel)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XImage)

#define __REALTYPE_struct__XImage__    struct _XImage
#define __REALTYPE_struct__XImage_p__  struct _XImage *
#define __REALTYPE_struct__XImage_pp__ struct _XImage **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_INDIRECT_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(struct__XImage, XImage)

#define __REALTYPE_XWindowChanges__    XWindowChanges
#define __REALTYPE_XWindowChanges_p__  XWindowChanges *
#define __REALTYPE_XWindowChanges_pp__ XWindowChanges **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XWindowChanges__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, x) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, y) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, width) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, height) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, border_width) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, sibling) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_WindowStackingMethod, stack_mode)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XWindowChanges)

#define __REALTYPE_XColor__    XColor
#define __REALTYPE_XColor_p__  XColor *
#define __REALTYPE_XColor_pp__ XColor **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XColor__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, pixel) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_short, red) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_short, green) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_short, blue) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_ColormapFlags, flags) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, char, pad)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XColor)

#define __REALTYPE_XColor_const__    XColor const
#define __REALTYPE_XColor_const_p__  XColor const *
#define __REALTYPE_XColor_const_pp__ XColor const **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_INDIRECT_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XColor_const, XColor)

#define __REALTYPE_XSegment__    XSegment
#define __REALTYPE_XSegment_p__  XSegment *
#define __REALTYPE_XSegment_pp__ XSegment **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XSegment__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, short, x1) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, short, y1) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, short, x2) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, short, y2)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XSegment)

#define __REALTYPE_XPoint__    XPoint
#define __REALTYPE_XPoint_p__  XPoint *
#define __REALTYPE_XPoint_pp__ XPoint **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XPoint__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, short, x) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, short, y)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XPoint)

#define __REALTYPE_XRectangle__    XRectangle
#define __REALTYPE_XRectangle_p__  XRectangle *
#define __REALTYPE_XRectangle_pp__ XRectangle **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XRectangle__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, short, x) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, short, y) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_short, width) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_short, height)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XRectangle)

#define __REALTYPE_XArc__    XArc
#define __REALTYPE_XArc_p__  XArc *
#define __REALTYPE_XArc_pp__ XArc **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XArc__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, short, x) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, short, y) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_short, width) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_short, height) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, short, angle1) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, short, angle2)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XArc)

#define __REALTYPE_XKeyboardControl__    XKeyboardControl
#define __REALTYPE_XKeyboardControl_p__  XKeyboardControl *
#define __REALTYPE_XKeyboardControl_pp__ XKeyboardControl **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XKeyboardControl__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, key_click_percent) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, bell_percent) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, bell_pitch) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, bell_duration) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, led) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_LedMode, led_mode) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, key) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_AutoRepeat, auto_repeat_mode)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XKeyboardControl)

#define __REALTYPE_XKeyboardState__    XKeyboardState
#define __REALTYPE_XKeyboardState_p__  XKeyboardState *
#define __REALTYPE_XKeyboardState_pp__ XKeyboardState **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XKeyboardState__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, key_click_percent) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, bell_percent) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_int, bell_pitch) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_int, bell_duration) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, led_mask) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, global_auto_repeat) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, char__32_, auto_repeats)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XKeyboardState)

#define __REALTYPE_XTimeCoord__    XTimeCoord
#define __REALTYPE_XTimeCoord_p__  XTimeCoord *
#define __REALTYPE_XTimeCoord_pp__ XTimeCoord **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XTimeCoord__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Time, time) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, short, x) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, short, y)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XTimeCoord)

#define __REALTYPE_XModifierKeymap__    XModifierKeymap
#define __REALTYPE_XModifierKeymap_p__  XModifierKeymap *
#define __REALTYPE_XModifierKeymap_pp__ XModifierKeymap **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XModifierKeymap__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, max_keypermod) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, KeyCode_p, modifiermap)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XModifierKeymap)

#define __REALTYPE_struct__XPrivate__    struct _XPrivate
#define __REALTYPE_struct__XPrivate_p__  struct _XPrivate *
#define __REALTYPE_struct__XPrivate_pp__ struct _XPrivate **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_OPAQUE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(struct__XPrivate)

#define __REALTYPE_struct__XrmHashBucketRec__    struct _XrmHashBucketRec
#define __REALTYPE_struct__XrmHashBucketRec_p__  struct _XrmHashBucketRec *
#define __REALTYPE_struct__XrmHashBucketRec_pp__ struct _XrmHashBucketRec **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_OPAQUE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(struct__XrmHashBucketRec)


#define __REALTYPE_int_XEvent_type__    int
#define __REALTYPE_int_XEvent_type_p__  int *
#define __REALTYPE_int_XEvent_type_pp__ int **
#define __TRACE_PRINT_TYPE_ENUM_BODY_int_XEvent_type__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, KeyPress) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, KeyRelease) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, ButtonPress) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, ButtonRelease) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, MotionNotify) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, EnterNotify) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, LeaveNotify) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, FocusIn) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, FocusOut) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, KeymapNotify) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, Expose) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GraphicsExpose) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, NoExpose) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, VisibilityNotify) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, CreateNotify) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, DestroyNotify) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, UnmapNotify) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, MapNotify) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, MapRequest) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, ReparentNotify) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, ConfigureNotify) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, ConfigureRequest) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, GravityNotify) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, ResizeRequest) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, CirculateNotify) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, CirculateRequest) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, PropertyNotify) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, SelectionClear) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, SelectionRequest) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, SelectionNotify) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, ColormapNotify) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, ClientMessage) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, MappingNotify)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(int_XEvent_type)

#define __REALTYPE_XKeyEvent__    XKeyEvent
#define __REALTYPE_XKeyEvent_p__  XKeyEvent *
#define __REALTYPE_XKeyEvent_pp__ XKeyEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XKeyEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, root) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, subwindow) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Time, time) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, x) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, y) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, x_root) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, y_root) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_KeyButtonMask, state) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_int, keycode) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, same_screen)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XKeyEvent)

#define __REALTYPE_XKeyPressedEvent__    XKeyPressedEvent
#define __REALTYPE_XKeyPressedEvent_p__  XKeyPressedEvent *
#define __REALTYPE_XKeyPressedEvent_pp__ XKeyPressedEvent **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_INDIRECT_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XKeyPressedEvent, XKeyEvent)

#define __REALTYPE_XKeyReleasedEvent__    XKeyReleasedEvent
#define __REALTYPE_XKeyReleasedEvent_p__  XKeyReleasedEvent *
#define __REALTYPE_XKeyReleasedEvent_pp__ XKeyReleasedEvent **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_INDIRECT_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XKeyReleasedEvent, XKeyEvent)

#define __REALTYPE_XButtonEvent__    XButtonEvent
#define __REALTYPE_XButtonEvent_p__  XButtonEvent *
#define __REALTYPE_XButtonEvent_pp__ XButtonEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XButtonEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, root) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, subwindow) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Time, time) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, x) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, y) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, x_root) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, y_root) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_KeyButtonMask, state) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_ButtonName, button) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, same_screen)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XButtonEvent)

#define __REALTYPE_XButtonPressedEvent__    XButtonPressedEvent
#define __REALTYPE_XButtonPressedEvent_p__  XButtonPressedEvent *
#define __REALTYPE_XButtonPressedEvent_pp__ XButtonPressedEvent **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_INDIRECT_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XButtonPressedEvent, XButtonEvent)

#define __REALTYPE_XButtonReleasedEvent__    XButtonReleasedEvent
#define __REALTYPE_XButtonReleasedEvent_p__  XButtonReleasedEvent *
#define __REALTYPE_XButtonReleasedEvent_pp__ XButtonReleasedEvent **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_INDIRECT_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XButtonReleasedEvent, XButtonEvent)

#define __REALTYPE_XMotionEvent__    XMotionEvent
#define __REALTYPE_XMotionEvent_p__  XMotionEvent *
#define __REALTYPE_XMotionEvent_pp__ XMotionEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XMotionEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, root) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, subwindow) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Time, time) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, x) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, y) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, x_root) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, y_root) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_KeyButtonMask, state) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, char_NotifyHint, is_hint) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, same_screen)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XMotionEvent)

#define __REALTYPE_XPointerMovedEvent__    XPointerMovedEvent
#define __REALTYPE_XPointerMovedEvent_p__  XPointerMovedEvent *
#define __REALTYPE_XPointerMovedEvent_pp__ XPointerMovedEvent **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_INDIRECT_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XPointerMovedEvent, XMotionEvent)

#define __REALTYPE_XCrossingEvent__    XCrossingEvent
#define __REALTYPE_XCrossingEvent_p__  XCrossingEvent *
#define __REALTYPE_XCrossingEvent_pp__ XCrossingEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XCrossingEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, root) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, subwindow) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Time, time) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, x) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, y) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, x_root) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, y_root) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_NotifyMode, mode) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_NotifyDetail, detail) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, same_screen) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, focus) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_KeyButtonMask, state)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XCrossingEvent)

#define __REALTYPE_XEnterWindowEvent__    XEnterWindowEvent
#define __REALTYPE_XEnterWindowEvent_p__  XEnterWindowEvent *
#define __REALTYPE_XEnterWindowEvent_pp__ XEnterWindowEvent **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_INDIRECT_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XEnterWindowEvent, XCrossingEvent)

#define __REALTYPE_XLeaveWindowEvent__    XLeaveWindowEvent
#define __REALTYPE_XLeaveWindowEvent_p__  XLeaveWindowEvent *
#define __REALTYPE_XLeaveWindowEvent_pp__ XLeaveWindowEvent **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_INDIRECT_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XLeaveWindowEvent, XCrossingEvent)

#define __REALTYPE_XFocusChangeEvent__    XFocusChangeEvent
#define __REALTYPE_XFocusChangeEvent_p__  XFocusChangeEvent *
#define __REALTYPE_XFocusChangeEvent_pp__ XFocusChangeEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XFocusChangeEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_NotifyMode, mode) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_NotifyDetail, detail)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XFocusChangeEvent)

#define __REALTYPE_XFocusInEvent__    XFocusInEvent
#define __REALTYPE_XFocusInEvent_p__  XFocusInEvent *
#define __REALTYPE_XFocusInEvent_pp__ XFocusInEvent **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_INDIRECT_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XFocusInEvent, XFocusChangeEvent)

#define __REALTYPE_XFocusOutEvent__    XFocusOutEvent
#define __REALTYPE_XFocusOutEvent_p__  XFocusOutEvent *
#define __REALTYPE_XFocusOutEvent_pp__ XFocusOutEvent **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_INDIRECT_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XFocusOutEvent, XFocusChangeEvent)

#define __REALTYPE_XKeymapEvent__    XKeymapEvent
#define __REALTYPE_XKeymapEvent_p__  XKeymapEvent *
#define __REALTYPE_XKeymapEvent_pp__ XKeymapEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XKeymapEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, char__32_, key_vector)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XKeymapEvent)

#define __REALTYPE_XExposeEvent__    XExposeEvent
#define __REALTYPE_XExposeEvent_p__  XExposeEvent *
#define __REALTYPE_XExposeEvent_pp__ XExposeEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XExposeEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, x) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, y) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, width) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, height) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, count)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XExposeEvent)

#define __REALTYPE_XGraphicsExposeEvent__    XGraphicsExposeEvent
#define __REALTYPE_XGraphicsExposeEvent_p__  XGraphicsExposeEvent *
#define __REALTYPE_XGraphicsExposeEvent_pp__ XGraphicsExposeEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XGraphicsExposeEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Drawable, drawable) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, x) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, y) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, width) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, height) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, count) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, major_code) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, minor_code)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XGraphicsExposeEvent)

#define __REALTYPE_XNoExposeEvent__    XNoExposeEvent
#define __REALTYPE_XNoExposeEvent_p__  XNoExposeEvent *
#define __REALTYPE_XNoExposeEvent_pp__ XNoExposeEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XNoExposeEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Drawable, drawable) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, major_code) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, minor_code)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XNoExposeEvent)

#define __REALTYPE_XVisibilityEvent__    XVisibilityEvent
#define __REALTYPE_XVisibilityEvent_p__  XVisibilityEvent *
#define __REALTYPE_XVisibilityEvent_pp__ XVisibilityEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XVisibilityEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_VisibilityNotify, state)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XVisibilityEvent)

#define __REALTYPE_XCreateWindowEvent__    XCreateWindowEvent
#define __REALTYPE_XCreateWindowEvent_p__  XCreateWindowEvent *
#define __REALTYPE_XCreateWindowEvent_pp__ XCreateWindowEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XCreateWindowEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, parent) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, x) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, y) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, width) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, height) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, border_width) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, override_redirect)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XCreateWindowEvent)

#define __REALTYPE_XDestroyWindowEvent__    XDestroyWindowEvent
#define __REALTYPE_XDestroyWindowEvent_p__  XDestroyWindowEvent *
#define __REALTYPE_XDestroyWindowEvent_pp__ XDestroyWindowEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XDestroyWindowEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XDestroyWindowEvent)

#define __REALTYPE_XUnmapEvent__    XUnmapEvent
#define __REALTYPE_XUnmapEvent_p__  XUnmapEvent *
#define __REALTYPE_XUnmapEvent_pp__ XUnmapEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XUnmapEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, from_configure)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XUnmapEvent)

#define __REALTYPE_XMapEvent__    XMapEvent
#define __REALTYPE_XMapEvent_p__  XMapEvent *
#define __REALTYPE_XMapEvent_pp__ XMapEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XMapEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, override_redirect)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XMapEvent)

#define __REALTYPE_XMapRequestEvent__    XMapRequestEvent
#define __REALTYPE_XMapRequestEvent_p__  XMapRequestEvent *
#define __REALTYPE_XMapRequestEvent_pp__ XMapRequestEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XMapRequestEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, parent) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XMapRequestEvent)

#define __REALTYPE_XReparentEvent__    XReparentEvent
#define __REALTYPE_XReparentEvent_p__  XReparentEvent *
#define __REALTYPE_XReparentEvent_pp__ XReparentEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XReparentEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, parent) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, x) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, y) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, override_redirect)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XReparentEvent)

#define __REALTYPE_XConfigureEvent__    XConfigureEvent
#define __REALTYPE_XConfigureEvent_p__  XConfigureEvent *
#define __REALTYPE_XConfigureEvent_pp__ XConfigureEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XConfigureEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, x) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, y) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, width) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, height) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, border_width) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, above) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, override_redirect)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XConfigureEvent)

#define __REALTYPE_XGravityEvent__    XGravityEvent
#define __REALTYPE_XGravityEvent_p__  XGravityEvent *
#define __REALTYPE_XGravityEvent_pp__ XGravityEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XGravityEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, x) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, y)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XGravityEvent)

#define __REALTYPE_XResizeRequestEvent__    XResizeRequestEvent
#define __REALTYPE_XResizeRequestEvent_p__  XResizeRequestEvent *
#define __REALTYPE_XResizeRequestEvent_pp__ XResizeRequestEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XResizeRequestEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, width) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, height)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XResizeRequestEvent)

#define __REALTYPE_XConfigureRequestEvent__    XConfigureRequestEvent
#define __REALTYPE_XConfigureRequestEvent_p__  XConfigureRequestEvent *
#define __REALTYPE_XConfigureRequestEvent_pp__ XConfigureRequestEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XConfigureRequestEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, parent) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, x) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, y) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, width) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, height) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, border_width) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, above) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_WindowStackingMethod, detail) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, value_mask)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XConfigureRequestEvent)

#define __REALTYPE_XCirculateEvent__    XCirculateEvent
#define __REALTYPE_XCirculateEvent_p__  XCirculateEvent *
#define __REALTYPE_XCirculateEvent_pp__ XCirculateEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XCirculateEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_CirculationRequest, place)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XCirculateEvent)

#define __REALTYPE_XCirculateRequestEvent__    XCirculateRequestEvent
#define __REALTYPE_XCirculateRequestEvent_p__  XCirculateRequestEvent *
#define __REALTYPE_XCirculateRequestEvent_pp__ XCirculateRequestEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XCirculateRequestEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, parent) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_CirculationRequest, place)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XCirculateRequestEvent)

#define __REALTYPE_XPropertyEvent__    XPropertyEvent
#define __REALTYPE_XPropertyEvent_p__  XPropertyEvent *
#define __REALTYPE_XPropertyEvent_pp__ XPropertyEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XPropertyEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Atom, atom) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Time, time) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_Property, state)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XPropertyEvent)

#define __REALTYPE_XSelectionClearEvent__    XSelectionClearEvent
#define __REALTYPE_XSelectionClearEvent_p__  XSelectionClearEvent *
#define __REALTYPE_XSelectionClearEvent_pp__ XSelectionClearEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XSelectionClearEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Atom, selection) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Time, time)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XSelectionClearEvent)

#define __REALTYPE_XSelectionRequestEvent__    XSelectionRequestEvent
#define __REALTYPE_XSelectionRequestEvent_p__  XSelectionRequestEvent *
#define __REALTYPE_XSelectionRequestEvent_pp__ XSelectionRequestEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XSelectionRequestEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, owner) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, requestor) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Atom, selection) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Atom, target) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Atom, property) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Time, time)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XSelectionRequestEvent)

#define __REALTYPE_XSelectionEvent__    XSelectionEvent
#define __REALTYPE_XSelectionEvent_p__  XSelectionEvent *
#define __REALTYPE_XSelectionEvent_pp__ XSelectionEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XSelectionEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, requestor) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Atom, selection) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Atom, target) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Atom, property) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Time, time)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XSelectionEvent)

#define __REALTYPE_XColormapEvent__    XColormapEvent
#define __REALTYPE_XColormapEvent_p__  XColormapEvent *
#define __REALTYPE_XColormapEvent_pp__ XColormapEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XColormapEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Colormap, colormap) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, new) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_Colormap, state)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XColormapEvent)

#define __REALTYPE_XClientMessageEvent__    XClientMessageEvent
#define __REALTYPE_XClientMessageEvent_p__  XClientMessageEvent *
#define __REALTYPE_XClientMessageEvent_pp__ XClientMessageEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XClientMessageEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Atom, message_type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, format) __PRINT_COMMA__(f) \
	fprintf(f, "data = ... (FIXME)"); \
	dofflush(f);
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XClientMessageEvent)

#define __REALTYPE_XMappingEvent__    XMappingEvent
#define __REALTYPE_XMappingEvent_p__  XMappingEvent *
#define __REALTYPE_XMappingEvent_pp__ XMappingEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XMappingEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_MappingTarget, request) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, first_keycode) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, count)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XMappingEvent)

#define __REALTYPE_XErrorEvent__    XErrorEvent
#define __REALTYPE_XErrorEvent_p__  XErrorEvent *
#define __REALTYPE_XErrorEvent_pp__ XErrorEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XErrorEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XID, resourceid) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_char_ErrorCode, error_code) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_char, request_code) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_char, minor_code)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XErrorEvent)

#define __REALTYPE_XAnyEvent__    XAnyEvent
#define __REALTYPE_XAnyEvent_p__  XAnyEvent *
#define __REALTYPE_XAnyEvent_pp__ XAnyEvent **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XAnyEvent__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int_XEvent_type, type) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Window, window)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XAnyEvent)

#define __TRACE_PRINT_XEVENT_TYPE__(eventtype, structtype, member) \
		case eventtype: \
			print_type_X##structtype##Event_(f, funcname, argname, type, &(value->x##member)); \
			break; \

#define __REALTYPE_XEvent__    XEvent
void print_type_XEvent_(FILE *f, const char *funcname, const char *argname, const char *type, XEvent const * value) __LIBXLIBTRACE_PRINT_X_BODY__({
	switch (value->type) {
		__TRACE_PRINT_XEVENT_TYPE__(KeyPress, Key, key)
		__TRACE_PRINT_XEVENT_TYPE__(KeyRelease, Key, key)
		__TRACE_PRINT_XEVENT_TYPE__(ButtonPress, Button, button)
		__TRACE_PRINT_XEVENT_TYPE__(ButtonRelease, Button, button)
		__TRACE_PRINT_XEVENT_TYPE__(MotionNotify, Motion, motion)
		__TRACE_PRINT_XEVENT_TYPE__(EnterNotify, Crossing, crossing)
		__TRACE_PRINT_XEVENT_TYPE__(LeaveNotify, Crossing, crossing)
		__TRACE_PRINT_XEVENT_TYPE__(FocusIn, FocusChange, focus)
		__TRACE_PRINT_XEVENT_TYPE__(FocusOut, FocusChange, focus)
		__TRACE_PRINT_XEVENT_TYPE__(KeymapNotify, Keymap, keymap)
		__TRACE_PRINT_XEVENT_TYPE__(Expose, Expose, expose)
		__TRACE_PRINT_XEVENT_TYPE__(GraphicsExpose, GraphicsExpose, graphicsexpose)
		__TRACE_PRINT_XEVENT_TYPE__(NoExpose, NoExpose, noexpose)
		__TRACE_PRINT_XEVENT_TYPE__(VisibilityNotify, Visibility, visibility)
		__TRACE_PRINT_XEVENT_TYPE__(CreateNotify, CreateWindow, createwindow)
		__TRACE_PRINT_XEVENT_TYPE__(DestroyNotify, DestroyWindow, destroywindow)
		__TRACE_PRINT_XEVENT_TYPE__(UnmapNotify, Unmap, unmap)
		__TRACE_PRINT_XEVENT_TYPE__(MapNotify, Map, map)
		__TRACE_PRINT_XEVENT_TYPE__(MapRequest, MapRequest, maprequest)
		__TRACE_PRINT_XEVENT_TYPE__(ReparentNotify, Reparent, reparent)
		__TRACE_PRINT_XEVENT_TYPE__(ConfigureNotify, Configure, configure)
		__TRACE_PRINT_XEVENT_TYPE__(ConfigureRequest, ConfigureRequest, configurerequest)
		__TRACE_PRINT_XEVENT_TYPE__(GravityNotify, Gravity, gravity)
		__TRACE_PRINT_XEVENT_TYPE__(ResizeRequest, ResizeRequest, resizerequest)
		__TRACE_PRINT_XEVENT_TYPE__(CirculateNotify, Circulate, circulate)
		__TRACE_PRINT_XEVENT_TYPE__(CirculateRequest, CirculateRequest, circulaterequest)
		__TRACE_PRINT_XEVENT_TYPE__(PropertyNotify, Property, property)
		__TRACE_PRINT_XEVENT_TYPE__(SelectionClear, SelectionClear, selectionclear)
		__TRACE_PRINT_XEVENT_TYPE__(SelectionRequest, SelectionRequest, selectionrequest)
		__TRACE_PRINT_XEVENT_TYPE__(SelectionNotify, Selection, selection)
		__TRACE_PRINT_XEVENT_TYPE__(ColormapNotify, Colormap, colormap)
		__TRACE_PRINT_XEVENT_TYPE__(ClientMessage, ClientMessage, client)
		__TRACE_PRINT_XEVENT_TYPE__(MappingNotify, Mapping, mapping)
		default:
			fprintf(f, "[UNKNOWN EVENT TYPE (%d)] ", value->type);
			dofflush(f);
			print_type_XAnyEvent_(f, funcname, argname, type, &(value->xany));
			//print_type_XErrorEvent_(f, funcname, argname, type, &(value->xerror));
			dofflush(f);
			break;
	}
})
#define __REALTYPE_XEvent_p__  XEvent *
#define __REALTYPE_XEvent_pp__ XEvent **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_INDIRECT_P,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XEvent)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_PP,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XEvent_p)


// XCharStruct
#define __REALTYPE_XCharStruct__    XCharStruct
#define __REALTYPE_XCharStruct_p__  XCharStruct *
#define __REALTYPE_XCharStruct_pp__ XCharStruct **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XCharStruct__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, short, lbearing) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, short, rbearing) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, short, width) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, short, ascent) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, short, descent) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_short, attributes)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XCharStruct)

// XFontProp
#define __REALTYPE_XFontProp__    XFontProp
#define __REALTYPE_XFontProp_p__  XFontProp *
#define __REALTYPE_XFontProp_pp__ XFontProp **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XFontProp__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Atom, name) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, card32)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XFontProp)

// XFontStruct
#define __REALTYPE_XFontStruct__    XFontStruct
#define __REALTYPE_XFontStruct_p__  XFontStruct *
#define __REALTYPE_XFontStruct_pp__ XFontStruct **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XFontStruct__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XExtData_p, ext_data) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Font, fid) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_int_FontDirection, direction) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned, min_char_or_byte2) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned, max_char_or_byte2) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned, min_byte1) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned, min_byte1) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, all_chars_exist) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned, default_char) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, n_properties) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XFontProp_p, properties) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER_INDIRECT__(f, safetype, *value, XCharStruct, min_bounds) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER_INDIRECT__(f, safetype, *value, XCharStruct, max_bounds) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XCharStruct_p, per_char) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, ascent) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, descent)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XFontStruct)


// XTextItem
#define __REALTYPE_XTextItem__    XTextItem
#define __REALTYPE_XTextItem_p__  XTextItem *
#define __REALTYPE_XTextItem_pp__ XTextItem **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XTextItem__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, char_p, chars) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, nchars) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, delta) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Font, font)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XTextItem)


// XChar2b
#define __REALTYPE_XChar2b__    XChar2b
#define __REALTYPE_XChar2b_p__  XChar2b *
#define __REALTYPE_XChar2b_pp__ XChar2b **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XChar2b__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_char, byte1) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_char, byte2)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XChar2b)


// XTextItem16
#define __REALTYPE_XTextItem16__    XTextItem16
#define __REALTYPE_XTextItem16_p__  XTextItem16 *
#define __REALTYPE_XTextItem16_pp__ XTextItem16 **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XTextItem16__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XChar2b_p, chars) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, nchars) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, delta) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Font, font)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XTextItem16)


// XEDataObject
#define __REALTYPE_XEDataObject__    XEDataObject
#define __REALTYPE_XEDataObject_p__  XEDataObject *
#define __REALTYPE_XEDataObject_pp__ XEDataObject **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XEDataObject__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, value, void_p, display)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT_DIRECT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XEDataObject)


// XFontSetExtents
#define __REALTYPE_XFontSetExtents__    XFontSetExtents
#define __REALTYPE_XFontSetExtents_p__  XFontSetExtents *
#define __REALTYPE_XFontSetExtents_pp__ XFontSetExtents **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XFontSetExtents__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER_INDIRECT__(f, safetype, *value, XRectangle, max_ink_extent) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER_INDIRECT__(f, safetype, *value, XRectangle, max_logical_extent)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XFontSetExtents)


// struct _XOM
#define __REALTYPE_struct__XOM__    struct _XOM
#define __REALTYPE_struct__XOM_p__  struct _XOM *
#define __REALTYPE_struct__XOM_pp__ struct _XOM **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_OPAQUE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(struct__XOM)

// XOM
#define __REALTYPE_XOM__    XOM
#define __REALTYPE_XOM_p__  XOM *
#define __REALTYPE_XOM_pp__ XOM **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_OPAQUE_STRUCT_P,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XOM)

// struct _XOC
#define __REALTYPE_struct__XOC__    struct _XOC
#define __REALTYPE_struct__XOC_p__  struct _XOC *
#define __REALTYPE_struct__XOC_pp__ struct _XOC **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_OPAQUE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(struct__XOC)

// XOC
#define __REALTYPE_XOC__    XOC
#define __REALTYPE_XOC_p__  XOC *
#define __REALTYPE_XOC_pp__ XOC **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_OPAQUE_STRUCT_P,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XOC)

// XFontSet
#define __REALTYPE_XFontSet__    XFontSet
#define __REALTYPE_XFontSet_p__  XFontSet *
#define __REALTYPE_XFontSet_pp__ XFontSet **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_OPAQUE_STRUCT_P,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XFontSet)


// XmbTextItem
#define __REALTYPE_XmbTextItem__    XmbTextItem
#define __REALTYPE_XmbTextItem_p__  XmbTextItem *
#define __REALTYPE_XmbTextItem_pp__ XmbTextItem **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XmbTextItem__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, char_p, chars) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, nchars) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, delta) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XFontSet, font_set)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XmbTextItem)

// XwcTextItem
#define __REALTYPE_XwcTextItem__    XwcTextItem
#define __REALTYPE_XwcTextItem_p__  XwcTextItem *
#define __REALTYPE_XwcTextItem_pp__ XwcTextItem **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XwcTextItem__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, wchar_t_p, chars) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, nchars) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, delta) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XFontSet, font_set)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XwcTextItem)


// XOMCharSetList
#define __REALTYPE_XOMCharSetList__    XOMCharSetList
#define __REALTYPE_XOMCharSetList_p__  XOMCharSetList *
#define __REALTYPE_XOMCharSetList_pp__ XOMCharSetList **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XOMCharSetList__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, charset_count) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, char_pp, charset_list)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XOMCharSetList)

// XOrientation
#define __REALTYPE_XOrientation__    XOrientation
#define __REALTYPE_XOrientation_p__  XOrientation *
#define __REALTYPE_XOrientation_pp__ XOrientation **
#define __TRACE_PRINT_TYPE_ENUM_BODY_XOrientation__(safetype) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XOMOrientation_LTR_TTB) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XOMOrientation_RTL_TTB) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XOMOrientation_TTB_LTR) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XOMOrientation_TTB_RTL) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XOMOrientation_Context)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XOrientation)

// XOMOrientation
#define __REALTYPE_XOMOrientation__    XOMOrientation
#define __REALTYPE_XOMOrientation_p__  XOMOrientation *
#define __REALTYPE_XOMOrientation_pp__ XOMOrientation **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XOMOrientation__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, num_orientation) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XOrientation_p, orientation)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XOMOrientation)

// XOMFontInfo
#define __REALTYPE_XOMFontInfo__    XOMFontInfo
#define __REALTYPE_XOMFontInfo_p__  XOMFontInfo *
#define __REALTYPE_XOMFontInfo_pp__ XOMFontInfo **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XOMFontInfo__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, num_font) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XFontStruct_pp, font_struct_list) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, char_pp, font_name_list)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XOMFontInfo)

// struct _XIM
#define __REALTYPE_struct__XIM__    struct _XIM
#define __REALTYPE_struct__XIM_p__  struct _XIM *
#define __REALTYPE_struct__XIM_pp__ struct _XIM **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_OPAQUE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(struct__XIM)

// XIM
#define __REALTYPE_XIM__    XIM
#define __REALTYPE_XIM_p__  XIM *
#define __REALTYPE_XIM_pp__ XIM **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_OPAQUE_STRUCT_P,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIM)


// struct _XIC
#define __REALTYPE_struct__XIC__    struct _XIC
#define __REALTYPE_struct__XIC_p__  struct _XIC *
#define __REALTYPE_struct__XIC_pp__ struct _XIC **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_OPAQUE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(struct__XIC)

// XIC
#define __REALTYPE_XIC__    XIC
#define __REALTYPE_XIC_p__  XIC *
#define __REALTYPE_XIC_pp__ XIC **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_OPAQUE_STRUCT_P,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIC)


// XIMProc
// FIXME: need a __TRACE_PRINT_TYPE_FUNCTION_POINTER__
#define __REALTYPE_XIMProc__    XIMProc
#define __REALTYPE_XIMProc_p__  XIMProc *
#define __REALTYPE_XIMProc_pp__ XIMProc * *
void print_type_XIMProc_(FILE *f, const char *funcname, const char *argname, const char *type, const XIMProc value) __LIBXLIBTRACE_PRINT_X_BODY__({
	fprintf(f, "%p", value);
	dofflush(f);
})

// XICProc
#define __REALTYPE_XICProc__    XICProc
#define __REALTYPE_XICProc_p__  XICProc *
#define __REALTYPE_XICProc_pp__ XICProc * *
void print_type_XICProc_(FILE *f, const char *funcname, const char *argname, const char *type, const XICProc value) __LIBXLIBTRACE_PRINT_X_BODY__({
	fprintf(f, "%p", value);
	dofflush(f);
})

// XIDProc
#define __REALTYPE_XIDProc__    XIDProc
#define __REALTYPE_XIDProc_p__  XIDProc *
#define __REALTYPE_XIDProc_pp__ XIDProc * *
void print_type_XIDProc_(FILE *f, const char *funcname, const char *argname, const char *type, const XIDProc value) __LIBXLIBTRACE_PRINT_X_BODY__({
	fprintf(f, "%p", value);
	dofflush(f);
})


// XIMStyle
#define __REALTYPE_XIMStyle__    XIMStyle
#define __REALTYPE_XIMStyle_p__  XIMStyle *
#define __REALTYPE_XIMStyle_pp__ XIMStyle **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMStyle, unsigned_long)

// XIMStyles
#define __REALTYPE_XIMStyles__    XIMStyles
#define __REALTYPE_XIMStyles_p__  XIMStyles *
#define __REALTYPE_XIMStyles_pp__ XIMStyles **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XIMStyles__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_short, count_styles) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XIMStyle_p, supported_styles)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMStyles)

// XVaNestedList
#define __REALTYPE_XVaNestedList__    XVaNestedList
#define __REALTYPE_XVaNestedList_p__  XVaNestedList *
#define __REALTYPE_XVaNestedList_pp__ XVaNestedList **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XVaNestedList, void_p)

// XIMCallback
#define __REALTYPE_XIMCallback__    XIMCallback
#define __REALTYPE_XIMCallback_p__  XIMCallback *
#define __REALTYPE_XIMCallback_pp__ XIMCallback **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XIMCallback__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XPointer, client_data) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XIMProc, callback)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMCallback)

// XICCallback
#define __REALTYPE_XICCallback__    XICCallback
#define __REALTYPE_XICCallback_p__  XICCallback *
#define __REALTYPE_XICCallback_pp__ XICCallback **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XICCallback__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XPointer, client_data) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XICProc, callback)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XICCallback)

// XIMFeedback
#define __REALTYPE_XIMFeedback__    XIMFeedback
#define __REALTYPE_XIMFeedback_p__  XIMFeedback *
#define __REALTYPE_XIMFeedback_pp__ XIMFeedback **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMFeedback, unsigned_long)

// struct _XIMText
#define __REALTYPE_struct__XIMText__    struct _XIMText
#define __REALTYPE_struct__XIMText_p__  struct _XIMText *
#define __REALTYPE_struct__XIMText_pp__ struct _XIMText **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_struct__XIMText__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_short, length) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XIMFeedback_p, feedback) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, encoding_is_wchar) __PRINT_COMMA__(f) \
	if (value->encoding_is_wchar) { \
		__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, wchar_t_p, string.wide_char) \
	} else { \
		__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, char_p, string.multi_byte) \
	}
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(struct__XIMText)

// XIMText
#define __REALTYPE_XIMText__    XIMText
#define __REALTYPE_XIMText_p__  XIMText *
#define __REALTYPE_XIMText_pp__ XIMText **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_INDIRECT_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMText, struct__XIMText)

// XIMPreeditState
#define __REALTYPE_XIMPreeditState__    XIMPreeditState
#define __REALTYPE_XIMPreeditState_p__  XIMPreeditState *
#define __REALTYPE_XIMPreeditState_pp__ XIMPreeditState **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMPreeditState, unsigned_long)

// struct _XIMPreeditStateNotifyCallbackStruct
#define __REALTYPE_struct__XIMPreeditStateNotifyCallbackStruct__    struct _XIMPreeditStateNotifyCallbackStruct
#define __REALTYPE_struct__XIMPreeditStateNotifyCallbackStruct_p__  struct _XIMPreeditStateNotifyCallbackStruct *
#define __REALTYPE_struct__XIMPreeditStateNotifyCallbackStruct_pp__ struct _XIMPreeditStateNotifyCallbackStruct **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_struct__XIMPreeditStateNotifyCallbackStruct__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XIMPreeditState, state)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(struct__XIMPreeditStateNotifyCallbackStruct)

// XIMPreeditStateNotifyCallbackStruct
#define __REALTYPE_XIMPreeditStateNotifyCallbackStruct__    XIMPreeditStateNotifyCallbackStruct
#define __REALTYPE_XIMPreeditStateNotifyCallbackStruct_p__  XIMPreeditStateNotifyCallbackStruct *
#define __REALTYPE_XIMPreeditStateNotifyCallbackStruct_pp__ XIMPreeditStateNotifyCallbackStruct **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_INDIRECT_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMPreeditStateNotifyCallbackStruct, struct__XIMPreeditStateNotifyCallbackStruct)

// XIMResetState
#define __REALTYPE_XIMResetState__    XIMResetState
#define __REALTYPE_XIMResetState_p__  XIMResetState *
#define __REALTYPE_XIMResetState_pp__ XIMResetState **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMResetState, unsigned_long)

// XIMStringConversionFeedback
#define __REALTYPE_XIMStringConversionFeedback__    XIMStringConversionFeedback
#define __REALTYPE_XIMStringConversionFeedback_p__  XIMStringConversionFeedback *
#define __REALTYPE_XIMStringConversionFeedback_pp__ XIMStringConversionFeedback **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMStringConversionFeedback, unsigned_long)

// struct _XIMStringConversionText
#define __REALTYPE_struct__XIMStringConversionText__    struct _XIMStringConversionText
#define __REALTYPE_struct__XIMStringConversionText_p__  struct _XIMStringConversionText *
#define __REALTYPE_struct__XIMStringConversionText_pp__ struct _XIMStringConversionText **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_struct__XIMStringConversionText__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_short, length) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XIMStringConversionFeedback_p, feedback) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, encoding_is_wchar) __PRINT_COMMA__(f) \
	if (value->encoding_is_wchar) { \
		__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, wchar_t_p, string.wcs) \
	} else { \
		__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, char_p, string.mbs) \
	}
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(struct__XIMStringConversionText)

// XIMStringConversionText
#define __REALTYPE_XIMStringConversionText__    XIMStringConversionText
#define __REALTYPE_XIMStringConversionText_p__  XIMStringConversionText *
#define __REALTYPE_XIMStringConversionText_pp__ XIMStringConversionText **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_INDIRECT_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMStringConversionText, struct__XIMStringConversionText)

// XIMStringConversionPosition
#define __REALTYPE_XIMStringConversionPosition__    XIMStringConversionPosition
#define __REALTYPE_XIMStringConversionPosition_p__  XIMStringConversionPosition *
#define __REALTYPE_XIMStringConversionPosition_pp__ XIMStringConversionPosition **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMStringConversionPosition, unsigned_long)

// XIMStringConversionType
#define __REALTYPE_XIMStringConversionType__    XIMStringConversionType
#define __REALTYPE_XIMStringConversionType_p__  XIMStringConversionType *
#define __REALTYPE_XIMStringConversionType_pp__ XIMStringConversionType **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMStringConversionType, unsigned_long)

// XIMStringConversionOperation
#define __REALTYPE_XIMStringConversionOperation__    XIMStringConversionOperation
#define __REALTYPE_XIMStringConversionOperation_p__  XIMStringConversionOperation *
#define __REALTYPE_XIMStringConversionOperation_pp__ XIMStringConversionOperation **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMStringConversionOperation, unsigned_long)

// XIMCaretDirection
#define __REALTYPE_XIMCaretDirection__    XIMCaretDirection
#define __REALTYPE_XIMCaretDirection_p__  XIMCaretDirection *
#define __REALTYPE_XIMCaretDirection_pp__ XIMCaretDirection **
#define __TRACE_PRINT_TYPE_ENUM_BODY_XIMCaretDirection__(safetype) \
    __TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XIMForwardChar) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XIMBackwardChar) \
    __TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XIMForwardWord) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XIMBackwardWord) \
    __TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XIMCaretUp) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XIMCaretDown) \
    __TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XIMNextLine) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XIMPreviousLine) \
    __TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XIMLineStart) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XIMLineEnd) \
    __TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XIMAbsolutePosition) \
    __TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XIMDontChange)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMCaretDirection)

// struct _XIMStringConversionCallbackStruct
#define __REALTYPE_struct__XIMStringConversionCallbackStruct__    struct _XIMStringConversionCallbackStruct
#define __REALTYPE_struct__XIMStringConversionCallbackStruct_p__  struct _XIMStringConversionCallbackStruct *
#define __REALTYPE_struct__XIMStringConversionCallbackStruct_pp__ struct _XIMStringConversionCallbackStruct **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_struct__XIMStringConversionCallbackStruct__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XIMStringConversionPosition, position) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XIMCaretDirection, direction) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XIMStringConversionOperation, operation) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_short, factor) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XIMStringConversionText_p, text)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(struct__XIMStringConversionCallbackStruct)

// XIMStringConversionCallbackStruct
#define __REALTYPE_XIMStringConversionCallbackStruct__    XIMStringConversionCallbackStruct
#define __REALTYPE_XIMStringConversionCallbackStruct_p__  XIMStringConversionCallbackStruct *
#define __REALTYPE_XIMStringConversionCallbackStruct_pp__ XIMStringConversionCallbackStruct **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_INDIRECT_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMStringConversionCallbackStruct, struct__XIMStringConversionCallbackStruct)

// struct _XIMPreeditDrawCallbackStruct
#define __REALTYPE_struct__XIMPreeditDrawCallbackStruct__    struct _XIMPreeditDrawCallbackStruct
#define __REALTYPE_struct__XIMPreeditDrawCallbackStruct_p__  struct _XIMPreeditDrawCallbackStruct *
#define __REALTYPE_struct__XIMPreeditDrawCallbackStruct_pp__ struct _XIMPreeditDrawCallbackStruct **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_struct__XIMPreeditDrawCallbackStruct__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, caret) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, chg_first) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, chg_length) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XIMText_p, text)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(struct__XIMPreeditDrawCallbackStruct)

// XIMPreeditDrawCallbackStruct
#define __REALTYPE_XIMPreeditDrawCallbackStruct__    XIMPreeditDrawCallbackStruct
#define __REALTYPE_XIMPreeditDrawCallbackStruct_p__  XIMPreeditDrawCallbackStruct *
#define __REALTYPE_XIMPreeditDrawCallbackStruct_pp__ XIMPreeditDrawCallbackStruct **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_INDIRECT_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMPreeditDrawCallbackStruct, struct__XIMPreeditDrawCallbackStruct)

// XIMCaretStyle
#define __REALTYPE_XIMCaretStyle__    XIMCaretStyle
#define __REALTYPE_XIMCaretStyle_p__  XIMCaretStyle *
#define __REALTYPE_XIMCaretStyle_pp__ XIMCaretStyle **
#define __TRACE_PRINT_TYPE_ENUM_BODY_XIMCaretStyle__(safetype) \
    __TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XIMIsInvisible) \
	__TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XIMIsPrimary) \
    __TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XIMIsSecondary)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMCaretStyle)

// struct _XIMPreeditCaretCallbackStruct
#define __REALTYPE_struct__XIMPreeditCaretCallbackStruct__    struct _XIMPreeditCaretCallbackStruct
#define __REALTYPE_struct__XIMPreeditCaretCallbackStruct_p__  struct _XIMPreeditCaretCallbackStruct *
#define __REALTYPE_struct__XIMPreeditCaretCallbackStruct_pp__ struct _XIMPreeditCaretCallbackStruct **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_struct__XIMPreeditCaretCallbackStruct__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, position) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XIMCaretDirection, direction) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XIMCaretStyle, style)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(struct__XIMPreeditCaretCallbackStruct)

// XIMPreeditCaretCallbackStruct
#define __REALTYPE_XIMPreeditCaretCallbackStruct__    XIMPreeditCaretCallbackStruct
#define __REALTYPE_XIMPreeditCaretCallbackStruct_p__  XIMPreeditCaretCallbackStruct *
#define __REALTYPE_XIMPreeditCaretCallbackStruct_pp__ XIMPreeditCaretCallbackStruct **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_INDIRECT_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMPreeditCaretCallbackStruct, struct__XIMPreeditCaretCallbackStruct)

// XIMStatusDataType
#define __REALTYPE_XIMStatusDataType__    XIMStatusDataType
#define __REALTYPE_XIMStatusDataType_p__  XIMStatusDataType *
#define __REALTYPE_XIMStatusDataType_pp__ XIMStatusDataType **
#define __TRACE_PRINT_TYPE_ENUM_BODY_XIMStatusDataType__(safetype) \
    __TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XIMTextType) \
    __TRACE_PRINT_ENUM_MEMBER__(f, safetype, value, XIMBitmapType)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ENUM,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMStatusDataType)

// struct _XIMStatusDrawCallbackStruct
#define __REALTYPE_struct__XIMStatusDrawCallbackStruct__    struct _XIMStatusDrawCallbackStruct
#define __REALTYPE_struct__XIMStatusDrawCallbackStruct_p__  struct _XIMStatusDrawCallbackStruct *
#define __REALTYPE_struct__XIMStatusDrawCallbackStruct_pp__ struct _XIMStatusDrawCallbackStruct **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_struct__XIMStatusDrawCallbackStruct__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XIMStatusDataType, type) __PRINT_COMMA__(f) \
	if (value->type == XIMTextType) { \
		__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XIMText_p, data.text) \
	} else if (value->type == XIMBitmapType) { \
		__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Pixmap, data.bitmap) \
	}
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(struct__XIMStatusDrawCallbackStruct)

// XIMStatusDrawCallbackStruct
#define __REALTYPE_XIMStatusDrawCallbackStruct__    XIMStatusDrawCallbackStruct
#define __REALTYPE_XIMStatusDrawCallbackStruct_p__  XIMStatusDrawCallbackStruct *
#define __REALTYPE_XIMStatusDrawCallbackStruct_pp__ XIMStatusDrawCallbackStruct **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_INDIRECT_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMStatusDrawCallbackStruct, struct__XIMStatusDrawCallbackStruct)

// struct _XIMHotKeyTrigger
#define __REALTYPE_struct__XIMHotKeyTrigger__    struct _XIMHotKeyTrigger
#define __REALTYPE_struct__XIMHotKeyTrigger_p__  struct _XIMHotKeyTrigger *
#define __REALTYPE_struct__XIMHotKeyTrigger_pp__ struct _XIMHotKeyTrigger **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_struct__XIMHotKeyTrigger__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, KeySym, keysym) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, modifier) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, modifier_mask)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(struct__XIMHotKeyTrigger)

// XIMHotKeyTrigger
#define __REALTYPE_XIMHotKeyTrigger__    XIMHotKeyTrigger
#define __REALTYPE_XIMHotKeyTrigger_p__  XIMHotKeyTrigger *
#define __REALTYPE_XIMHotKeyTrigger_pp__ XIMHotKeyTrigger **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_INDIRECT_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMHotKeyTrigger, struct__XIMHotKeyTrigger)

// struct _XIMHotKeyTriggers
#define __REALTYPE_struct__XIMHotKeyTriggers__    struct _XIMHotKeyTriggers
#define __REALTYPE_struct__XIMHotKeyTriggers_p__  struct _XIMHotKeyTriggers *
#define __REALTYPE_struct__XIMHotKeyTriggers_pp__ struct _XIMHotKeyTriggers **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_struct__XIMHotKeyTriggers__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, num_hot_key) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, XIMHotKeyTrigger_p, key)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(struct__XIMHotKeyTriggers)

// XIMHotKeyTriggers
#define __REALTYPE_XIMHotKeyTriggers__    XIMHotKeyTriggers
#define __REALTYPE_XIMHotKeyTriggers_p__  XIMHotKeyTriggers *
#define __REALTYPE_XIMHotKeyTriggers_pp__ XIMHotKeyTriggers **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_INDIRECT_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMHotKeyTriggers, struct__XIMHotKeyTriggers)

// XIMHotKeyState
#define __REALTYPE_XIMHotKeyState__    XIMHotKeyState
#define __REALTYPE_XIMHotKeyState_p__  XIMHotKeyState *
#define __REALTYPE_XIMHotKeyState_pp__ XIMHotKeyState **
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_ALIAS,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMHotKeyState, unsigned_long)

// XIMValuesList
#define __REALTYPE_XIMValuesList__    XIMValuesList
#define __REALTYPE_XIMValuesList_p__  XIMValuesList *
#define __REALTYPE_XIMValuesList_pp__ XIMValuesList **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XIMValuesList__(safetype) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_short, count_values) __PRINT_COMMA__(f) \
	__TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, char_pp, supported_values)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XIMValuesList)

// XErrorHandler
#define __REALTYPE_XErrorHandler__    XErrorHandler
#define __REALTYPE_XErrorHandler_p__  XErrorHandler *
#define __REALTYPE_XErrorHandler_pp__ XErrorHandler * *
void print_type_XErrorHandler_(FILE *f, const char *funcname, const char *argname, const char *type, const XErrorHandler value) __LIBXLIBTRACE_PRINT_X_BODY__({
	fprintf(f, "%p", value);
	dofflush(f);
})

// XIOErrorHandler
#define __REALTYPE_XIOErrorHandler__    XIOErrorHandler
#define __REALTYPE_XIOErrorHandler_p__  XIOErrorHandler *
#define __REALTYPE_XIOErrorHandler_pp__ XIOErrorHandler * *
void print_type_XIOErrorHandler_(FILE *f, const char *funcname, const char *argname, const char *type, const XIOErrorHandler value) __LIBXLIBTRACE_PRINT_X_BODY__({
	fprintf(f, "%p", value);
	dofflush(f);
})

// XConnectionWatchProc
#define __REALTYPE_XConnectionWatchProc__    XConnectionWatchProc
#define __REALTYPE_XConnectionWatchProc_p__  XConnectionWatchProc *
#define __REALTYPE_XConnectionWatchProc_pp__ XConnectionWatchProc * *
void print_type_XConnectionWatchProc_(FILE *f, const char *funcname, const char *argname, const char *type, const XConnectionWatchProc value) __LIBXLIBTRACE_PRINT_X_BODY__({
	fprintf(f, "%p", value);
	dofflush(f);
})

// XGenericEventCookie
#define __REALTYPE_XGenericEventCookie__    XGenericEventCookie
#define __REALTYPE_XGenericEventCookie_p__  XGenericEventCookie *
#define __REALTYPE_XGenericEventCookie_pp__ XGenericEventCookie **
#define __TRACE_PRINT_TYPE_STRUCT_BODY_XGenericEventCookie__(safetype) \
   __TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, type) __PRINT_COMMA__(f) \
   __TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_long, serial) __PRINT_COMMA__(f) \
   __TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Bool, send_event) __PRINT_COMMA__(f) \
   __TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, Display_p, display) __PRINT_COMMA__(f) \
   __TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, extension) __PRINT_COMMA__(f) \
   __TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, int, evtype) __PRINT_COMMA__(f) \
   __TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, unsigned_int, cookie) __PRINT_COMMA__(f) \
   __TRACE_PRINT_STRUCT_MEMBER__(f, safetype, *value, void_p, data)
__INDIRECT_CALL_3__(__TRACE_PRINT_TYPE_STRUCT,__LIBXLIBTRACE_PRINT_X_SUFF__,__)(XGenericEventCookie)



#undef __LIBXLIBTRACE_PRINT_X_BODY__
#undef __LIBXLIBTRACE_PRINT_X_SUFF__


#endif


