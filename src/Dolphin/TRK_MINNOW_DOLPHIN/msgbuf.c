#include "PowerPC_EABI_Support/MetroTRK/trk.h"

MessageBuffer gTRKMsgBufs[3];

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void TRKSetBufferUsed(MessageBuffer* msg, BOOL state) { msg->isInUse = state; }

/*
 * --INFO--
 * Address:	800BC054
 * Size:	000074
 */
DSError TRKInitializeMessageBuffers(void)
{
	int i;
	for (i = 0; i < 3; i++) {
		TRKInitializeMutex(&gTRKMsgBufs[i]);
		TRKAcquireMutex(&gTRKMsgBufs[i]);
		TRKSetBufferUsed(&gTRKMsgBufs[i], FALSE);
		TRKReleaseMutex(&gTRKMsgBufs[i]);
	}

	return DS_NoError;
}

/*
 * --INFO--
 * Address:	800BBF8C
 * Size:	0000C8
 */
DSError TRKGetFreeBuffer(int* msgID, MessageBuffer** outMsg)
{
	MessageBuffer* buf;
	DSError error = DS_NoMessageBufferAvailable;
	int i;

	*outMsg = nullptr;

	for (i = 0; i < 3; i++) {
		buf = TRKGetBuffer(i);

		TRKAcquireMutex(buf);
		if (!buf->isInUse) {
			TRKResetBuffer(buf, TRUE);
			TRKSetBufferUsed(buf, TRUE);
			error   = DS_NoError;
			*outMsg = buf;
			*msgID  = i;
			i       = 3; // why not break? weird choice
		}
		TRKReleaseMutex(buf);
	}

	if (error == DS_NoMessageBufferAvailable) {
		usr_puts_serial("ERROR : No buffer available\n");
	}

	return error;
}

/*
 * --INFO--
 * Address:	800BBF60
 * Size:	00002C
 */
void* TRKGetBuffer(int idx)
{
	MessageBuffer* buf = nullptr;
	if (idx >= 0 && idx < 3) {
		buf = &gTRKMsgBufs[idx];
	}

	return buf;
}

/*
 * --INFO--
 * Address:	800BBEFC
 * Size:	000064
 */
void TRKReleaseBuffer(int idx)
{
	MessageBuffer* msg;
	if (idx != -1 && idx >= 0 && idx < 3) {
		msg = &gTRKMsgBufs[idx];
		TRKAcquireMutex(msg);
		TRKSetBufferUsed(msg, FALSE);
		TRKReleaseMutex(msg);
	}
}

/*
 * --INFO--
 * Address:	800BBEBC
 * Size:	000040
 */
void TRKResetBuffer(MessageBuffer* msg, BOOL keepData)
{
	msg->length   = 0;
	msg->position = 0;

	if (!keepData) {
		TRK_memset(msg->data, 0, 0x880);
	}
}

/*
 * --INFO--
 * Address:	800BBE8C
 * Size:	000030
 */
DSError TRKSetBufferPosition(MessageBuffer* msg, u32 pos)
{
	DSError error = DS_NoError;

	if (pos > 0x880) {
		error = DS_MessageBufferOverflow;
	} else {
		msg->position = pos;
		// If the new position is past the current length,
		// update the length
		if (pos > msg->length) {
			msg->length = pos;
		}
	}

	return error;
}

/*
 * --INFO--
 * Address:	800BBDE8
 * Size:	0000A4
 */
DSError TRKAppendBuffer(MessageBuffer* msg, const void* data, size_t length)
{
	DSError error = DS_NoError; // r31
	u32 bytesLeft;

	// Return if no bytes to append
	if (length == 0) {
		return DS_NoError;
	}

	bytesLeft = 0x880 - msg->position;

	// If there isn't enough space left in the buffer, change the number
	// of bytes to append to the remaning number of bytes
	if (bytesLeft < length) {
		error  = DS_MessageBufferOverflow;
		length = bytesLeft;
	}

	if (length == 1) {
		// If the length of bytes to append is 1, just copy the byte over
		msg->data[msg->position] = ((u8*)data)[0];
	} else {
		// Otherwise, use memcpy
		TRK_memcpy(msg->data + msg->position, data, length);
	}

	// Update the position and length
	msg->position += length;
	msg->length = msg->position;

	return error;
}

/*
 * --INFO--
 * Address:	800BBD5C
 * Size:	00008C
 */
DSError TRKReadBuffer(MessageBuffer* msg, void* data, int length)
{
	DSError error = DS_NoError;
	u32 bytesLeft;

	// Return if no bytes to read
	if (length == 0) {
		return DS_NoError;
	}

	bytesLeft = msg->length - msg->position;

	// If the number of bytes to read exceeds the buffer length, change
	// the length to the remaining number of bytes
	if (length > bytesLeft) {
		error  = DS_MessageBufferReadError;
		length = bytesLeft;
	}

	TRK_memcpy(data, msg->data + msg->position, length);
	msg->position += length;
	return error;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void TRKAppendBuffer1_ui16(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D8
 */
DSError TRKAppendBuffer1_ui32(MessageBuffer* buffer, const u32 data)
{
	u8* bigEndianData;
	u8* byteData;
	u8 swapBuffer[sizeof(data)];

	if (gTRKBigEndian) {
		bigEndianData = (u8*)&data;
	} else {
		byteData      = (u8*)&data;
		bigEndianData = swapBuffer;

		bigEndianData[0] = byteData[3];
		bigEndianData[1] = byteData[2];
		bigEndianData[2] = byteData[1];
		bigEndianData[3] = byteData[0];
	}

	return TRKAppendBuffer(buffer, (const void*)bigEndianData, sizeof(data));
}

/*
 * --INFO--
 * Address:	800BBC60
 * Size:	0000FC
 */
DSError TRKAppendBuffer1_ui64(MessageBuffer* buffer, const u64 data)
{
	u8* bigEndianData;
	u8* byteData;
	u8 swapBuffer[sizeof(data)];
	if (gTRKBigEndian) {
		bigEndianData = (u8*)&data;
	} else {
		byteData      = (u8*)&data;
		bigEndianData = swapBuffer;

		bigEndianData[0] = byteData[7];
		bigEndianData[1] = byteData[6];
		bigEndianData[2] = byteData[5];
		bigEndianData[3] = byteData[4];
		bigEndianData[4] = byteData[3];
		bigEndianData[5] = byteData[2];
		bigEndianData[6] = byteData[1];
		bigEndianData[7] = byteData[0];
	}

	return TRKAppendBuffer(buffer, (const void*)bigEndianData, sizeof(data));
}

/*
 * --INFO--
 * Address:	........
 * Size:	000128
 */
void TRKAppendBuffer1_ui128(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BBBF8
 * Size:	000068
 */
DSError TRKAppendBuffer_ui8(MessageBuffer* buffer, const u8* data, int count)
{
	DSError err;
	int i;

	for (i = 0, err = DS_NoError; err == DS_NoError && i < count; i++) {
		err = TRKAppendBuffer1_ui8(buffer, data[i]);
	}

	return err;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
void TRKAppendBuffer_ui16(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BBAFC
 * Size:	0000FC
 */
DSError TRKAppendBuffer_ui32(MessageBuffer* buffer, const u32* data, int count)
{
	DSError err;
	int i;

	for (i = 0, err = DS_NoError; err == DS_NoError && i < count; i++) {
		err = TRKAppendBuffer1_ui32(buffer, data[i]);
	}

	return err;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void TRKAppendBuffer_ui64(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000154
 */
void TRKAppendBuffer_ui128(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
DSError TRKReadBuffer1_ui8(MessageBuffer* buffer, u8* data) { return TRKReadBuffer(buffer, (void*)data, 1); }

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
void TRKReadBuffer1_ui16(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
DSError TRKReadBuffer1_ui32(MessageBuffer* buffer, u32* data)
{
	DSError err;

	u8* bigEndianData;
	u8* byteData;
	u8 swapBuffer[sizeof(data)];

	if (gTRKBigEndian) {
		bigEndianData = (u8*)data;
	} else {
		bigEndianData = swapBuffer;
	}

	err = TRKReadBuffer(buffer, (void*)bigEndianData, sizeof(*data));

	if (!gTRKBigEndian && err == DS_NoError) {
		byteData = (u8*)data;

		byteData[0] = bigEndianData[3];
		byteData[1] = bigEndianData[2];
		byteData[2] = bigEndianData[1];
		byteData[3] = bigEndianData[0];
	}

	return err;
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BBA14
 * Size:	0000E8
 */
DSError TRKReadBuffer1_ui64(MessageBuffer* buffer, u64* data)
{
	DSError err;

	u8* bigEndianData;
	u8* byteData;
	u8 swapBuffer[sizeof(data)];

	if (gTRKBigEndian) {
		bigEndianData = (u8*)data;
	} else {
		bigEndianData = swapBuffer;
	}

	err = TRKReadBuffer(buffer, (void*)bigEndianData, sizeof(*data));

	if (!gTRKBigEndian && err == 0) {
		byteData = (u8*)data;

		byteData[0] = bigEndianData[7];
		byteData[1] = bigEndianData[6];
		byteData[2] = bigEndianData[5];
		byteData[3] = bigEndianData[4];
		byteData[4] = bigEndianData[3];
		byteData[5] = bigEndianData[2];
		byteData[6] = bigEndianData[1];
		byteData[7] = bigEndianData[0];
	}

	return err;
	// int i;
	// int j;
	// DSError result = DS_NoError;
	// u32 diff;
	// u32 byteCount;
	// u8* p;
	// u8 littleEndianBuffer[20];
	// p         = (gTRKBigEndian ? p2 : littleEndianBuffer);
	// result    = DS_NoError;
	// diff      = buffer->_08 - buffer->_0C;
	// byteCount = 8;
	// if (diff < 8) {
	// 	result    = TRKError302;
	// 	byteCount = diff;
	// }
	// TRK_memcpy(p, buffer->mBuffer + (buffer->_0C - 4), byteCount);
	// buffer->_0C += byteCount;
	// if (gTRKBigEndian == FALSE && result == DS_NoError) {
	// 	for (i = 7, j = 0; j < 8; j++, i--) {
	// 		p2[j] = littleEndianBuffer[i];
	// 	}
	// }
	// return result;
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r5, 0x804F
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r27, r3
	  mr        r30, r4
	  lwz       r0, 0x28A8(r5)
	  cmpwi     r0, 0
	  beq-      .loc_0x30
	  mr        r31, r30
	  b         .loc_0x34

	.loc_0x30:
	  addi      r31, r1, 0x8

	.loc_0x34:
	  lwz       r3, 0xC(r27)
	  li        r28, 0x8
	  lwz       r0, 0x8(r27)
	  li        r29, 0
	  sub       r0, r0, r3
	  cmplw     r28, r0
	  ble-      .loc_0x58
	  li        r29, 0x302
	  mr        r28, r0

	.loc_0x58:
	  addi      r4, r3, 0x10
	  mr        r3, r31
	  mr        r5, r28
	  add       r4, r27, r4
	  bl        -0xB894C
	  lwz       r0, 0xC(r27)
	  lis       r3, 0x804F
	  add       r0, r0, r28
	  stw       r0, 0xC(r27)
	  lwz       r0, 0x28A8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0xD0
	  cmpwi     r29, 0
	  bne-      .loc_0xD0
	  lbz       r0, 0x7(r31)
	  stb       r0, 0x0(r30)
	  lbz       r0, 0x6(r31)
	  stb       r0, 0x1(r30)
	  lbz       r0, 0x5(r31)
	  stb       r0, 0x2(r30)
	  lbz       r0, 0x4(r31)
	  stb       r0, 0x3(r30)
	  lbz       r0, 0x3(r31)
	  stb       r0, 0x4(r30)
	  lbz       r0, 0x2(r31)
	  stb       r0, 0x5(r30)
	  lbz       r0, 0x1(r31)
	  stb       r0, 0x6(r30)
	  lbz       r0, 0x0(r31)
	  stb       r0, 0x7(r30)

	.loc_0xD0:
	  mr        r3, r29
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000128
 */
void TRKReadBuffer1_ui128(MessageBuffer* buffer, u8* p2, int p3)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BB97C
 * Size:	000098
 */
DSError TRKReadBuffer_ui8(MessageBuffer* buffer, u8* data, int count)
{
	DSError err;
	int i;

	for (i = 0, err = DS_NoError; err == DS_NoError && i < count; i++) {
		err = TRKReadBuffer1_ui8(buffer, &(data[i]));
	}

	return err;
	// DSError result = DS_NoError;
	// int i;
	// u32 diff;
	// u32 byteCount;
	// for (i = 0; (result == DS_NoError && i < count); i++) {
	// 	result    = DS_NoError;
	// 	diff      = buffer->_08 - buffer->_0C;
	// 	byteCount = 1;
	// 	if (diff == 0) {
	// 		result    = TRKError302;
	// 		byteCount = diff;
	// 	}
	// 	TRK_memcpy(p2 + i, buffer->mBuffer + (buffer->_0C - 4), byteCount);
	// 	buffer->_0C += byteCount;
	// }
	// return result;
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r26, r3
	  mr        r27, r4
	  mr        r28, r5
	  li        r29, 0
	  li        r3, 0
	  b         .loc_0x74

	.loc_0x28:
	  lwz       r3, 0xC(r26)
	  li        r30, 0x1
	  lwz       r0, 0x8(r26)
	  li        r31, 0
	  sub       r0, r0, r3
	  cmplw     r30, r0
	  ble-      .loc_0x4C
	  li        r31, 0x302
	  mr        r30, r0

	.loc_0x4C:
	  addi      r4, r3, 0x10
	  mr        r5, r30
	  add       r3, r27, r29
	  add       r4, r26, r4
	  bl        -0xB88A8
	  lwz       r0, 0xC(r26)
	  mr        r3, r31
	  addi      r29, r29, 0x1
	  add       r0, r0, r30
	  stw       r0, 0xC(r26)

	.loc_0x74:
	  cmpwi     r3, 0
	  bne-      .loc_0x84
	  cmpw      r29, r28
	  blt+      .loc_0x28

	.loc_0x84:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void TRKReadBuffer_ui16(MessageBuffer* buffer, u8* p2, int p3)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BB88C
 * Size:	0000F0
 */
DSError TRKReadBuffer_ui32(MessageBuffer* buffer, u32* data, int count)
{
	DSError err;
	int i;

	for (i = 0, err = DS_NoError; err == DS_NoError && i < count; i++) {
		err = TRKReadBuffer1_ui32(buffer, &(data[i]));
	}

	return err;
	// DSError result = DS_NoError;
	// u32 diff;
	// int i;
	// u32 byteCount;
	// u8* p;
	// u8 littleEndianBuffer[4];
	// for (i = 0; (result == DS_NoError && i < count); i++) {
	// 	p         = (gTRKBigEndian ? p2 : littleEndianBuffer);
	// 	result    = DS_NoError;
	// 	diff      = buffer->_08 - buffer->_0C;
	// 	byteCount = 4;
	// 	if (diff < 4) {
	// 		result    = TRKError302;
	// 		byteCount = diff;
	// 	}
	// 	TRK_memcpy(p, buffer->mBuffer + (buffer->_0C - 4), byteCount);
	// 	buffer->_0C += byteCount;
	// 	if (gTRKBigEndian == FALSE && result == DS_NoError) {
	// 		p2[0] = littleEndianBuffer[3];
	// 		p2[1] = littleEndianBuffer[2];
	// 		p2[2] = littleEndianBuffer[1];
	// 		p2[3] = littleEndianBuffer[0];
	// 	}
	// 	p2 += 4;
	// }
	// return result;
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r6, 0x804F
	  stw       r0, 0x34(r1)
	  stmw      r24, 0x10(r1)
	  mr        r28, r3
	  mr        r29, r5
	  mr        r31, r4
	  addi      r27, r6, 0x28A8
	  li        r30, 0
	  li        r3, 0
	  b         .loc_0xCC

	.loc_0x30:
	  lwz       r0, 0x0(r27)
	  cmpwi     r0, 0
	  beq-      .loc_0x44
	  mr        r25, r31
	  b         .loc_0x48

	.loc_0x44:
	  addi      r25, r1, 0x8

	.loc_0x48:
	  lwz       r3, 0xC(r28)
	  li        r24, 0x4
	  lwz       r0, 0x8(r28)
	  li        r26, 0
	  sub       r0, r0, r3
	  cmplw     r24, r0
	  ble-      .loc_0x6C
	  li        r26, 0x302
	  mr        r24, r0

	.loc_0x6C:
	  addi      r4, r3, 0x10
	  mr        r3, r25
	  mr        r5, r24
	  add       r4, r28, r4
	  bl        -0xB87D8
	  lwz       r0, 0xC(r28)
	  add       r0, r0, r24
	  stw       r0, 0xC(r28)
	  lwz       r0, 0x0(r27)
	  cmpwi     r0, 0
	  bne-      .loc_0xC0
	  cmpwi     r26, 0
	  bne-      .loc_0xC0
	  lbz       r0, 0x3(r25)
	  stb       r0, 0x0(r31)
	  lbz       r0, 0x2(r25)
	  stb       r0, 0x1(r31)
	  lbz       r0, 0x1(r25)
	  stb       r0, 0x2(r31)
	  lbz       r0, 0x0(r25)
	  stb       r0, 0x3(r31)

	.loc_0xC0:
	  mr        r3, r26
	  addi      r31, r31, 0x4
	  addi      r30, r30, 0x1

	.loc_0xCC:
	  cmpwi     r3, 0
	  bne-      .loc_0xDC
	  cmpw      r30, r29
	  blt+      .loc_0x30

	.loc_0xDC:
	  lmw       r24, 0x10(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000110
 */
void TRKReadBuffer_ui64(MessageBuffer* buffer, u8* p2, int p3)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000150
 */
void TRKReadBuffer_ui128(MessageBuffer* buffer, u8* p2, int p3)
{
	// UNUSED FUNCTION
}
