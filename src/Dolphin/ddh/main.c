#include "types.h"
#include "Dolphin/trk.h"
#include "Dolphin/AmcExi2Stubs.h"

static char gRecvBuf[0x800];
static char gRecvCB[0x20];
static BOOL gIsInitialized;

static makeDDHBSSOrderingWork()
{
	u8 buff[0x800];
	memcpy(buff, gRecvBuf, 0x800);
}

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
u32 ddh_cc_read(int arg0, u32 arg1)
{
	u8 buff[0x800];
	int p1;
	u32 retval;
	int p2;
	int poll;

	retval = 0;
	if (!gIsInitialized) {
		return -0x2711;
	}

	MWTRACE(1, "Expected packet size : 0x%08x (%ld)\n", arg1, arg1);

	p1 = arg1;
	p2 = arg1;
	while ((u32)CBGetBytesAvailableForRead(&gRecvCB) < p2) {
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
		CircleBufferReadBytes(&gRecvCB, arg0, p1);
	} else {
		MWTRACE(8, "cc_read : error reading bytes from EXI2 %ld\n", retval);
	}

	return retval;
}

/*
 * --INFO--
 * Address:	800C0ED8
 * Size:	000008
 */
BOOL ddh_cc_close() { return FALSE; }

/*
 * --INFO--
 * Address:	800C0EE0
 * Size:	000024
 */
int ddh_cc_open()
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
