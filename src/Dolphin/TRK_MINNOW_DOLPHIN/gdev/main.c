#include "Dolphin/db.h"
#include "PowerPC_EABI_Support/MetroTRK/trk.h"
#include "Dolphin/AmcExi2Stubs.h"
#include "PowerPC_EABI_Support/MetroTRK/custconn/CircleBuffer.h"

#define GDEV_BUF_SIZE (0x500)

static CircleBuffer gRecvCB;
static u8 gRecvBuf[GDEV_BUF_SIZE];
static BOOL gIsInitialized;

/*
 * --INFO--
 * Address:	800C14C0
 * Size:	000088
 */
BOOL gdev_cc_initialize(vu8** inputPendingPtrRef, AmcEXICallback monitorCallback)
{
	MWTRACE(1, "CALLING EXI2_Init\n");
	DBInitComm(inputPendingPtrRef, monitorCallback);
	MWTRACE(1, "DONE CALLING EXI2_Init\n");
	CircleBufferInitialize(&gRecvCB, gRecvBuf, GDEV_BUF_SIZE);
	return FALSE;
}

/*
 * --INFO--
 * Address:	800C14B8
 * Size:	000008
 */
BOOL gdev_cc_shutdown() { return FALSE; }

/*
 * --INFO--
 * Address:	800C1494
 * Size:	000024
 */
int gdev_cc_open()
{
	if (gIsInitialized) {
		return -0x2715;
	}

	gIsInitialized = TRUE;
	return FALSE;
}

/*
 * --INFO--
 * Address:	800C148C
 * Size:	000008
 */
BOOL gdev_cc_close() { return FALSE; }

/*
 * --INFO--
 * Address:	800C1398
 * Size:	0000F4
 */
u32 gdev_cc_read(u8* data, u32 size)
{
	u8 buff[GDEV_BUF_SIZE];
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
		poll   = DBQueryData();
		if (poll != 0) {
			retval = DBRead(buff, p2);
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
 * Address:	800C12D8
 * Size:	0000C0
 */
int gdev_cc_write(int bytes, int length)
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
		exi2Len = DBWrite((const void*)hexCopy, n_copy);
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
 * Address:	800C12B4
 * Size:	000024
 */
BOOL gdev_cc_pre_continue()
{
	DBClose();
	return FALSE;
}

/*
 * --INFO--
 * Address:	800C1290
 * Size:	000024
 */
BOOL gdev_cc_post_stop()
{
	DBOpen();
	return FALSE;
}

/*
 * --INFO--
 * Address:	800C1220
 * Size:	000070
 */
int gdev_cc_peek()
{
	int poll;
	u8 buff[GDEV_BUF_SIZE];

	poll = DBQueryData();
	if (poll <= 0) {
		return 0;
	}

	if (DBRead(buff, poll) == 0) {
		CircleBufferWriteBytes(&gRecvCB, buff, poll);
	} else {
		return -0x2719;
	}

	return poll;
}

/*
 * --INFO--
 * Address:	800C11FC
 * Size:	000024
 */
BOOL gdev_cc_initinterrupts()
{
	DBInitInterrupts();
	return FALSE;
}
