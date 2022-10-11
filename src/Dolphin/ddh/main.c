#include "types.h"
#include "Dolphin/trk.h"
#include "Dolphin/AmcExi2Stubs.h"

static char gRecvBuf[0x800];
static char gRecvCB[0x20];
static BOOL gIsInitialized;

/*
 * --INFO--
 * Address:	800C0C50
 * Size:	000024
 */
BOOL ddh_cc_initinterrupts()
{
	EXI2_EnableInterrupts();
	return FALSE;
}

/*
 * --INFO--
 * Address:	800C0C74
 * Size:	000070
 */
int ddh_cc_peek()
{
	int poll;
	u8 buff[0x800];

	poll = EXI2_Poll();
	if (poll <= 0) {
		return 0;
	}

	if (EXI2_ReadN(buff, poll) == 0) {
		CircleBufferWriteBytes(gRecvCB, buff, poll);
	} else {
		return -0x2719;
	}

	return poll;
}

/*
 * --INFO--
 * Address:	800C0CE4
 * Size:	000024
 */
BOOL ddh_cc_post_stop()
{
	EXI2_Reserve();
	return FALSE;
}

/*
 * --INFO--
 * Address:	800C0D08
 * Size:	000024
 */
BOOL ddh_cc_pre_continue()
{
	EXI2_Unreserve();
	return FALSE;
}

/*
 * --INFO--
 * Address:	800C0D2C
 * Size:	0000C0
 */
int ddh_cc_write(u32 bytes, u32 length)
{
	int exi2Len;
	int n_copy;
	u32 hexCopy;

	hexCopy = bytes;
	n_copy  = length;

	if (gIsInitialized == FALSE) {
		MWTRACE(8, "cc not initialized\n");
		return -0x2711;
	}

	MWTRACE(8, "cc_write : Output data 0x%08x %ld bytes\n", bytes, length);

	while (n_copy > 0) {
		MWTRACE(1, "cc_write sending %ld bytes\n", n_copy);
		exi2Len = EXI2_WriteN((const void*)hexCopy, n_copy);
		if (exi2Len == AMC_EXI_NO_ERROR) {
			break;
		}
		hexCopy += exi2Len;
		n_copy -= exi2Len;
	}

	return 0;
}

/*
 * --INFO--
 * Address:	800C0DEC
 * Size:	0000EC
 */
u32 ddh_cc_read(int arg0, int arg1)
{
	u8 buff[0x800];
	int poll;
	u32 retval;

	retval = 0;
	if (!gIsInitialized) {
		return -0x2711;
	}

	MWTRACE(1, "Expected packet size : 0x%08x (%ld)\n", arg1, arg1);

	while ((u32)CBGetBytesAvailableForRead(&gRecvCB) < arg1) {
		retval = 0;
		poll   = EXI2_Poll();
		if (poll != 0) {
			retval = EXI2_ReadN(buff, poll);
			if (retval == 0) {
				CircleBufferWriteBytes(&gRecvCB, buff, poll);
			}
		}
	}

	if (retval == 0) {
		CircleBufferReadBytes(&gRecvCB, arg0, arg1);
	} else {
		MWTRACE(8, "cc_read : error reading bytes from EXI2 %ld\n", retval);
	}

	return retval;
	/*
	.loc_0x0:
	  stwu      r1, -0x820(r1)
	  mflr      r0
	  stw       r0, 0x824(r1)
	  stmw      r27, 0x80C(r1)
	  mr        r27, r3
	  mr        r30, r4
	  li        r29, 0
	  lwz       r0, -0x7370(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0x30
	  li        r3, -0x2711
	  b         .loc_0xD8

	.loc_0x30:
	  lis       r3, 0x8048
	  mr        r5, r30
	  subi      r4, r3, 0x6254
	  mr        r6, r30
	  li        r3, 0x1
	  crclr     6, 0x6
	  bl        0x714
	  lis       r3, 0x804F
	  addi      r31, r3, 0x5020
	  b         .loc_0x8C

	.loc_0x58:
	  li        r29, 0
	  bl        0x11804
	  mr.       r28, r3
	  beq-      .loc_0x8C
	  mr        r4, r28
	  addi      r3, r1, 0x8
	  bl        0x117F8
	  mr.       r29, r3
	  bne-      .loc_0x8C
	  mr        r3, r31
	  mr        r5, r28
	  addi      r4, r1, 0x8
	  bl        0x228

	.loc_0x8C:
	  mr        r3, r31
	  bl        0x378
	  cmplw     r3, r30
	  blt+      .loc_0x58
	  cmplwi    r29, 0
	  bne-      .loc_0xBC
	  lis       r3, 0x804F
	  mr        r4, r27
	  addi      r3, r3, 0x5020
	  mr        r5, r30
	  bl        0xF4
	  b         .loc_0xD4

	.loc_0xBC:
	  lis       r3, 0x8048
	  mr        r5, r29
	  subi      r4, r3, 0x622C
	  li        r3, 0x8
	  crclr     6, 0x6
	  bl        0x68C

	.loc_0xD4:
	  mr        r3, r29

	.loc_0xD8:
	  lmw       r27, 0x80C(r1)
	  lwz       r0, 0x824(r1)
	  mtlr      r0
	  addi      r1, r1, 0x820
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C0ED8
 * Size:	000008
 */
BOOL ddh_cc_close(void) { return FALSE; }

/*
 * --INFO--
 * Address:	800C0EE0
 * Size:	000024
 */
BOOL ddh_cc_open()
{
	if (gIsInitialized) {
		return -0x2715;
	}

	gIsInitialized = TRUE;
	return FALSE;
}

/*
 * --INFO--
 * Address:	800C0F04
 * Size:	000008
 */
BOOL ddh_cc_shutdown() { return FALSE; }

/*
 * --INFO--
 * Address:	800C0F0C
 * Size:	000088
 */
BOOL ddh_cc_initialize(vu8** inputPendingPtrRef, AmcEXICallback monitorCallback)
{
	MWTRACE(1, "CALLING EXI2_Init\n");
	EXI2_Init(inputPendingPtrRef, monitorCallback);
	MWTRACE(1, "DONE CALLING EXI2_Init\n");
	CircleBufferInitialize(&gRecvCB, &gRecvBuf, 0x800);
	return FALSE;
}
