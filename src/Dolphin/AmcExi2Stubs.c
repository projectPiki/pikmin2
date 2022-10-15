#include "types.h"
#include "Dolphin/AmcExi2Stubs.h"

/*
 * --INFO--
 * Address:	800D2644
 * Size:	000004
 */
void EXI2_Init(volatile unsigned char** inputPendingPtrRef, AmcEXICallback monitorCallback) { return; }

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
int EXI2_Poll() { return 0; }

/*
 * --INFO--
 * Address:	800D2654
 * Size:	000008
 */
AmcExiError EXI2_ReadN(void* bytes, u32 length) { return AMC_EXI_NO_ERROR; }

/*
 * --INFO--
 * Address:	800D265C
 * Size:	000008
 */
AmcExiError EXI2_WriteN(const void* bytes, u32 length) { return AMC_EXI_NO_ERROR; }

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
