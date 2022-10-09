#include "types.h"
#include "Dolphin/AmcExi2Stubs.h"

/*
 * --INFO--
 * Address:	800D2644
 * Size:	000004
 */
void EXI2_Init(s32 a, s32 b) { return; }

/*
 * --INFO--
 * Address:	800D2648
 * Size:	000004
 */
void EXI2_EnableInterrupts() { return; }

/*
 * --INFO--
 * Address:	800D264C
 * Size:	000008
 */
BOOL EXI2_Poll() { return FALSE; }

/*
 * --INFO--
 * Address:	800D2654
 * Size:	000008
 */
BOOL EXI2_ReadN(u8* a, int b) { return FALSE; }

/*
 * --INFO--
 * Address:	800D265C
 * Size:	000008
 */
BOOL EXI2_WriteN(u32 a, u32 b) { return FALSE; }

/*
 * --INFO--
 * Address:	800D2664
 * Size:	000004
 */
void EXI2_Reserve() { return; }

/*
 * --INFO--
 * Address:	800D2668
 * Size:	000004
 */
void EXI2_Unreserve() { return; }

/*
 * --INFO--
 * Address:	800D266C
 * Size:	000008
 */
BOOL AMC_IsStub() { return TRUE; }
