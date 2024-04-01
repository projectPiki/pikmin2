#include "types.h"
#include "Dolphin/os.h"
#include "Dolphin/gd.h"

GDCurrentDL* __GDCurrentDL    = (GDCurrentDL*)NULL;
GDOverflowCallback overflowcb = (GDOverflowCallback)NULL;

/**
 * @note Address: 0x800E1B04
 * @note Size: 0x18
 */
void GDInitGDLObj(GDCurrentDL* GDL_Obj, u8* start, s32 len)
{
	GDL_Obj->begin  = start;
	GDL_Obj->data   = start;
	GDL_Obj->end    = start + len;
	GDL_Obj->length = len;
}

/**
 * @note Address: 0x800E1B1C
 * @note Size: 0x2C
 */
void GDFlushCurrToMem() { DCFlushRange(__GDCurrentDL->begin, __GDCurrentDL->length); }

/**
 * @note Address: 0x800E1B48
 * @note Size: 0xF8
 */
void GDPadCurr32()
{
	u32 i = ((u32)__GDCurrentDL->data & 31);
	if (i) {
		for (i; i < 32; i++) {
			__GDWrite(0);
		}
	}
}

/**
 * @note Address: 0x800E1C40
 * @note Size: 0x30
 */
void GDOverflowed(void)
{
	if (overflowcb) {
		(*overflowcb)();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void GDSetOverflowCallback(GDOverflowCallback cb) { overflowcb = cb; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
GDOverflowCallback GDGetOverflowCallback(void) { return overflowcb; }
