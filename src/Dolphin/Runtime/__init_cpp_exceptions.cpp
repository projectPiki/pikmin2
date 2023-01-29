#include "types.h"
#include "Dolphin/NMWException.h"

static int fragmentID = -2;

/*
 * --INFO--
 * Address:	800C22C4
 * Size:	000008
 */
// clang-format off
asm char* GetR2() 
{ 
	nofralloc 
	mr r3, r2 
	blr 
}
// clang-format on

/*
 * --INFO--
 * Address:	800C22CC
 * Size:	000034
 */
void __fini_cpp_exceptions()
{
	if ((s32)fragmentID != -2) {
		__unregister_fragment(fragmentID);
		fragmentID = -2;
	}
}

/*
 * --INFO--
 * Address:	800C2300
 * Size:	000040
 */
void __init_cpp_exceptions()
{
	if ((s32)fragmentID == -2) {
		char* R2   = GetR2();
		fragmentID = __register_fragment(&_eti_init_info, R2);
	}
}
