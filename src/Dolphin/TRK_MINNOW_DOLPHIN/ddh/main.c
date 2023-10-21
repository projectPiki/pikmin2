#include "types.h"
#include "PowerPC_EABI_Support/MetroTRK/trk.h"
#include "Dolphin/AmcExi2Stubs.h"
#include "PowerPC_EABI_Support/MetroTRK/custconn/CircleBuffer.h"

#define DDH_BUF_SIZE (0x800)

static CircleBuffer gRecvCB;
static u8 gRecvBuf[DDH_BUF_SIZE];
static BOOL gIsInitialized;

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
	CircleBufferInitialize(&gRecvCB, gRecvBuf, DDH_BUF_SIZE);
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
 * Address:	800C0ED8
 * Size:	000008
 */
BOOL ddh_cc_close() { return FALSE; }

/*
 * --INFO--
 * Address:	800C0DEC
 * Size:	0000EC
 */
u32 ddh_cc_read(u8* data, u32 size)
{
	u8 buff[DDH_BUF_SIZE];
	int p1;
	u32 retval;
	int p2;
	int poll;

	retval = 0;
	if (!gIsInitialized) {
		return -0x2711;
	}

	MWTRACE(1, "Expected packet size : 0x%08x (%ld)\n", size, size);

	p1 = size;
	p2 = size;
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
		CircleBufferReadBytes(&gRecvCB, data, p1);
	} else {
		MWTRACE(8, "cc_read : error reading bytes from EXI2 %ld\n", retval);
	}

	return retval;
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
 * Address:	800C0C74
 * Size:	000070
 */
int ddh_cc_peek()
{
	int poll;
	u8 buff[DDH_BUF_SIZE];

	poll = EXI2_Poll();
	if (poll <= 0) {
		return 0;
	}

	if (EXI2_ReadN(buff, poll) == 0) {
		CircleBufferWriteBytes(&gRecvCB, buff, poll);
	} else {
		return -0x2719;
	}

	return poll;
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
