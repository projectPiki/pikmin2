#include "types.h"
#include "Dolphin/os.h"
#include "Dolphin/gd.h"

GDCurrentDL* __GDCurrentDL    = (GDCurrentDL*)NULL;
GDOverflowCallback overflowcb = (GDOverflowCallback)NULL;

/*
 * --INFO--
 * Address:	800E1B04
 * Size:	000018
 */
void GDInitGDLObj(struct GDCurrentDL* GDL_Obj, u8* begin_ptr, s32 new_length)
{
	GDL_Obj->begin            = begin_ptr;
	GDL_Obj->pDisplayListData = begin_ptr;
	GDL_Obj->end              = begin_ptr + new_length;
	GDL_Obj->length           = new_length;
}

/*
 * --INFO--
 * Address:	800E1B1C
 * Size:	00002C
 */
void GDFlushCurrToMem(void) { DCFlushRange(__GDCurrentDL->begin, __GDCurrentDL->length); }

/*
 * --INFO--
 * Address:	800E1B48
 * Size:	0000F8
 */
void GDPadCurr32(void)
{
	u32 i = ((u32)__GDCurrentDL->pDisplayListData & 31);
	if (i) {
		for (i; i < 32; i++) {
			__GDWrite(0);
		}
	}
}

/*
 * --INFO--
 * Address:	800E1C40
 * Size:	000030
 */
void GDOverflowed(void)
{
	if (overflowcb) {
		(*overflowcb)();
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void GDSetOverflowCallback(GDOverflowCallback cb)
{
	// UNUSED FUNCTION
	overflowcb = cb;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
GDOverflowCallback GDGetOverflowCallback(void)
{
	// UNUSED FUNCTION
	return overflowcb;
}
