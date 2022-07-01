#include "Dolphin/trk.h"

/*
 * --INFO--
 * Address:	........
 * Size:	000150
 */
void TRKReadBuffer_ui128(TRKBuffer* buffer, u8* p2, int p3)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000110
 */
void TRKReadBuffer_ui64(TRKBuffer* buffer, u8* p2, int p3)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BB88C
 * Size:	0000F0
 */
TRKResult TRKReadBuffer_ui32(TRKBuffer* buffer, u8* p2, int count)
{
	TRKResult result = TRKSuccess;
	u32 diff;
	int i;
	u32 byteCount;
	u8* p;
	u8 littleEndianBuffer[4];
	for (i = 0; (result == TRKSuccess && i < count); i++) {
		p         = (gTRKBigEndian ? p2 : littleEndianBuffer);
		result    = TRKSuccess;
		diff      = buffer->_08 - buffer->_0C;
		byteCount = 4;
		if (diff < 4) {
			result    = TRKError302;
			byteCount = diff;
		}
		TRK_memcpy(p, buffer->m_buffer + (buffer->_0C - 4), byteCount);
		buffer->_0C += byteCount;
		if (gTRKBigEndian == FALSE && result == TRKSuccess) {
			p2[0] = littleEndianBuffer[3];
			p2[1] = littleEndianBuffer[2];
			p2[2] = littleEndianBuffer[1];
			p2[3] = littleEndianBuffer[0];
		}
		p2 += 4;
	}
	return result;
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
 * Size:	0000E0
 */
void TRKReadBuffer_ui16(TRKBuffer* buffer, u8* p2, int p3)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BB97C
 * Size:	000098
 */
TRKResult TRKReadBuffer_ui8(TRKBuffer* buffer, u8* p2, int count)
{
	TRKResult result = TRKSuccess;
	int i;
	u32 diff;
	u32 byteCount;
	for (i = 0; (result == TRKSuccess && i < count); i++) {
		result    = TRKSuccess;
		diff      = buffer->_08 - buffer->_0C;
		byteCount = 1;
		if (diff == 0) {
			result    = TRKError302;
			byteCount = diff;
		}
		TRK_memcpy(p2 + i, buffer->m_buffer + (buffer->_0C - 4), byteCount);
		buffer->_0C += byteCount;
	}
	return result;
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
 * Size:	000128
 */
void TRKReadBuffer1_ui128(TRKBuffer* buffer, u8* p2, int p3)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BBA14
 * Size:	0000E8
 */
TRKResult TRKReadBuffer1_ui64(TRKBuffer* buffer, u8* p2)
{
	int i;
	int j;
	TRKResult result = TRKSuccess;
	u32 diff;
	u32 byteCount;
	u8* p;
	u8 littleEndianBuffer[20];
	p         = (gTRKBigEndian ? p2 : littleEndianBuffer);
	result    = TRKSuccess;
	diff      = buffer->_08 - buffer->_0C;
	byteCount = 8;
	if (diff < 8) {
		result    = TRKError302;
		byteCount = diff;
	}
	TRK_memcpy(p, buffer->m_buffer + (buffer->_0C - 4), byteCount);
	buffer->_0C += byteCount;
	if (gTRKBigEndian == FALSE && result == TRKSuccess) {
		for (i = 7, j = 0; j < 8; j++, i--) {
			p2[j] = littleEndianBuffer[i];
		}
	}
	return result;
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
 * Size:	0000C8
 */
void TRKReadBuffer1_ui32(void)
{
	// UNUSED FUNCTION
}

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
 * Size:	000080
 */
void TRKReadBuffer1_ui8(void)
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
 * Size:	000124
 */
void TRKAppendBuffer_ui64(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800BBAFC
 * Size:	0000FC
 */
void TRKAppendBuffer_ui32(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r6, 0x804F
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r27, r3
	  mr        r28, r5
	  mr        r30, r4
	  addi      r31, r6, 0x28A8
	  li        r29, 0
	  li        r3, 0
	  b         .loc_0xD8

	.loc_0x30:
	  lwz       r0, 0x0(r31)
	  lwz       r3, 0x0(r30)
	  cmpwi     r0, 0
	  stw       r3, 0x8(r1)
	  beq-      .loc_0x4C
	  addi      r4, r1, 0x8
	  b         .loc_0x70

	.loc_0x4C:
	  lbz       r6, 0xB(r1)
	  addi      r4, r1, 0xC
	  lbz       r5, 0xA(r1)
	  lbz       r3, 0x9(r1)
	  lbz       r0, 0x8(r1)
	  stb       r6, 0xC(r1)
	  stb       r5, 0xD(r1)
	  stb       r3, 0xE(r1)
	  stb       r0, 0xF(r1)

	.loc_0x70:
	  lwz       r5, 0xC(r27)
	  li        r25, 0x4
	  li        r26, 0
	  subfic    r0, r5, 0x880
	  cmplwi    r0, 0x4
	  bge-      .loc_0x90
	  li        r26, 0x301
	  mr        r25, r0

	.loc_0x90:
	  cmplwi    r25, 0x1
	  bne-      .loc_0xA8
	  lbz       r3, 0x0(r4)
	  addi      r0, r5, 0x10
	  stbx      r3, r27, r0
	  b         .loc_0xB8

	.loc_0xA8:
	  addi      r3, r5, 0x10
	  mr        r5, r25
	  add       r3, r27, r3
	  bl        -0xB8A80

	.loc_0xB8:
	  lwz       r0, 0xC(r27)
	  mr        r3, r26
	  addi      r30, r30, 0x4
	  addi      r29, r29, 0x1
	  add       r0, r0, r25
	  stw       r0, 0xC(r27)
	  lwz       r0, 0xC(r27)
	  stw       r0, 0x8(r27)

	.loc_0xD8:
	  cmpwi     r3, 0
	  bne-      .loc_0xE8
	  cmpw      r29, r28
	  blt+      .loc_0x30

	.loc_0xE8:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
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
 * Address:	800BBBF8
 * Size:	000068
 */
TRKResult TRKAppendBuffer_ui8(TRKBuffer* buffer, u8* p2, int p3)
{
	/*
	.loc_0x0:
	  li        r9, 0
	  li        r0, 0
	  b         .loc_0x50

	.loc_0xC:
	  lwz       r7, 0xC(r3)
	  lbz       r8, 0x0(r4)
	  cmplwi    r7, 0x880
	  blt-      .loc_0x24
	  li        r7, 0x301
	  b         .loc_0x44

	.loc_0x24:
	  addi      r6, r7, 0x1
	  addi      r0, r7, 0x10
	  stw       r6, 0xC(r3)
	  li        r7, 0
	  stbx      r8, r3, r0
	  lwz       r6, 0x8(r3)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r3)

	.loc_0x44:
	  mr        r0, r7
	  addi      r9, r9, 0x1
	  addi      r4, r4, 0x1

	.loc_0x50:
	  cmpwi     r0, 0
	  bne-      .loc_0x60
	  cmpw      r9, r5
	  blt+      .loc_0xC

	.loc_0x60:
	  mr        r3, r0
	  blr
	*/
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
 * Address:	800BBC60
 * Size:	0000FC
 */
void TRKAppendBuffer1_ui64(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  lwz       r0, 0x28A8(r4)
	  stw       r5, 0x8(r1)
	  cmpwi     r0, 0
	  stw       r6, 0xC(r1)
	  beq-      .loc_0x3C
	  addi      r4, r1, 0x8
	  b         .loc_0x80

	.loc_0x3C:
	  lbz       r10, 0xF(r1)
	  addi      r4, r1, 0x10
	  lbz       r9, 0xE(r1)
	  lbz       r8, 0xD(r1)
	  lbz       r7, 0xC(r1)
	  lbz       r6, 0xB(r1)
	  lbz       r5, 0xA(r1)
	  lbz       r3, 0x9(r1)
	  lbz       r0, 0x8(r1)
	  stb       r10, 0x10(r1)
	  stb       r9, 0x11(r1)
	  stb       r8, 0x12(r1)
	  stb       r7, 0x13(r1)
	  stb       r6, 0x14(r1)
	  stb       r5, 0x15(r1)
	  stb       r3, 0x16(r1)
	  stb       r0, 0x17(r1)

	.loc_0x80:
	  lwz       r3, 0xC(r31)
	  li        r29, 0x8
	  li        r30, 0
	  subfic    r0, r3, 0x880
	  cmplwi    r0, 0x8
	  bge-      .loc_0xA0
	  li        r30, 0x301
	  mr        r29, r0

	.loc_0xA0:
	  cmplwi    r29, 0x1
	  bne-      .loc_0xB8
	  lbz       r0, 0x0(r4)
	  add       r3, r31, r3
	  stb       r0, 0x10(r3)
	  b         .loc_0xC8

	.loc_0xB8:
	  addi      r3, r3, 0x10
	  mr        r5, r29
	  add       r3, r31, r3
	  bl        -0xB8BF4

	.loc_0xC8:
	  lwz       r0, 0xC(r31)
	  mr        r3, r30
	  add       r0, r0, r29
	  stw       r0, 0xC(r31)
	  lwz       r0, 0xC(r31)
	  stw       r0, 0x8(r31)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D8
 */
void TRKAppendBuffer1_ui32(void)
{
	// UNUSED FUNCTION
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
 * Address:	800BBD5C
 * Size:	00008C
 */
void TRKReadBuffer(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr.       r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r3, r4
	  bne-      .loc_0x34
	  li        r3, 0
	  b         .loc_0x70

	.loc_0x34:
	  lwz       r4, 0xC(r29)
	  lwz       r0, 0x8(r29)
	  sub       r0, r0, r4
	  cmplw     r30, r0
	  ble-      .loc_0x50
	  li        r31, 0x302
	  mr        r30, r0

	.loc_0x50:
	  addi      r4, r4, 0x10
	  mr        r5, r30
	  add       r4, r29, r4
	  bl        -0xB8C88
	  lwz       r0, 0xC(r29)
	  mr        r3, r31
	  add       r0, r0, r30
	  stw       r0, 0xC(r29)

	.loc_0x70:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BBDE8
 * Size:	0000A4
 */
void TRKAppendBuffer(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr.       r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bne-      .loc_0x30
	  li        r3, 0
	  b         .loc_0x88

	.loc_0x30:
	  lwz       r3, 0xC(r29)
	  subfic    r0, r3, 0x880
	  cmplw     r0, r30
	  bge-      .loc_0x48
	  li        r31, 0x301
	  mr        r30, r0

	.loc_0x48:
	  cmplwi    r30, 0x1
	  bne-      .loc_0x60
	  lbz       r0, 0x0(r4)
	  add       r3, r29, r3
	  stb       r0, 0x10(r3)
	  b         .loc_0x70

	.loc_0x60:
	  addi      r3, r3, 0x10
	  mr        r5, r30
	  add       r3, r29, r3
	  bl        -0xB8D24

	.loc_0x70:
	  lwz       r0, 0xC(r29)
	  mr        r3, r31
	  add       r0, r0, r30
	  stw       r0, 0xC(r29)
	  lwz       r0, 0xC(r29)
	  stw       r0, 0x8(r29)

	.loc_0x88:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BBE8C
 * Size:	000030
 */
TRKResult TRKSetBufferPosition(TRKBuffer* buffer, u32 p2)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0x880
	  li        r5, 0
	  ble-      .loc_0x14
	  li        r5, 0x301
	  b         .loc_0x28

	.loc_0x14:
	  stw       r4, 0xC(r3)
	  lwz       r0, 0x8(r3)
	  cmplw     r4, r0
	  ble-      .loc_0x28
	  stw       r4, 0x8(r3)

	.loc_0x28:
	  mr        r3, r5
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BBEBC
 * Size:	000040
 */
void TRKResetBuffer(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r4, 0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0x8(r3)
	  stw       r0, 0xC(r3)
	  bne-      .loc_0x30
	  addi      r3, r3, 0x10
	  li        r4, 0
	  li        r5, 0x880
	  bl        -0xB8DE8

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BBEFC
 * Size:	000064
 */
void TRKReleaseBuffer(int p1)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r3, -0x1
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  beq-      .loc_0x50
	  cmpwi     r3, 0
	  blt-      .loc_0x50
	  cmpwi     r3, 0x3
	  bge-      .loc_0x50
	  mulli     r4, r3, 0x890
	  lis       r3, 0x804F
	  addi      r0, r3, 0x28B0
	  add       r31, r0, r4
	  mr        r3, r31
	  bl        0x1DD8
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x4(r31)
	  bl        0x1DC0

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BBF60
 * Size:	00002C
 */
void* TRKGetBuffer(int p1)
{
	/*
	.loc_0x0:
	  cmpwi     r3, 0
	  li        r0, 0
	  blt-      .loc_0x24
	  cmpwi     r3, 0x3
	  bge-      .loc_0x24
	  mulli     r4, r3, 0x890
	  lis       r3, 0x804F
	  addi      r0, r3, 0x28B0
	  add       r0, r0, r4

	.loc_0x24:
	  mr        r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BBF8C
 * Size:	0000C8
 */
void TRKGetFreeBuffer(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stmw      r27, 0xC(r1)
	  mr        r28, r4
	  mr        r27, r3
	  li        r30, 0x300
	  li        r29, 0
	  stw       r0, 0x0(r4)
	  b         .loc_0x94

	.loc_0x2C:
	  cmpwi     r29, 0
	  li        r31, 0
	  blt-      .loc_0x50
	  cmpwi     r29, 0x3
	  bge-      .loc_0x50
	  mulli     r4, r29, 0x890
	  lis       r3, 0x804F
	  addi      r0, r3, 0x28B0
	  add       r31, r0, r4

	.loc_0x50:
	  mr        r3, r31
	  bl        0x1D30
	  lwz       r0, 0x4(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x88
	  li        r3, 0
	  li        r0, 0x1
	  stw       r3, 0x8(r31)
	  li        r30, 0
	  stw       r3, 0xC(r31)
	  stw       r0, 0x4(r31)
	  stw       r31, 0x0(r28)
	  stw       r29, 0x0(r27)
	  li        r29, 0x3

	.loc_0x88:
	  mr        r3, r31
	  bl        0x1CF0
	  addi      r29, r29, 0x1

	.loc_0x94:
	  cmpwi     r29, 0x3
	  blt+      .loc_0x2C
	  cmpwi     r30, 0x300
	  bne-      .loc_0xB0
	  lis       r3, 0x8048
	  subi      r3, r3, 0x68E0
	  bl        0x34C

	.loc_0xB0:
	  mr        r3, r30
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800BC054
 * Size:	000074
 */
TRKResult TRKInitializeMessageBuffers(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r3, 0x804F
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  addi      r30, r3, 0x28B0
	  stw       r29, 0x14(r1)
	  li        r29, 0

	.loc_0x28:
	  mr        r3, r30
	  bl        0x1C98
	  mr        r3, r30
	  bl        0x1C88
	  stw       r31, 0x4(r30)
	  mr        r3, r30
	  bl        0x1C74
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x890
	  cmpwi     r29, 0x3
	  blt+      .loc_0x28
	  lwz       r0, 0x24(r1)
	  li        r3, 0
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void TRKSetBufferUsed(void)
{
	// UNUSED FUNCTION
}
