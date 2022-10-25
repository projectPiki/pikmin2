#include "Dolphin/card.h"
#include "Dolphin/dsp.h"

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void CARDRand(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void CARDSrand(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000174
 */
void exnor_1st(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000174
 */
void exnor(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D5920
 * Size:	00016C
 */
uint bitrev(uint)
{
	/*
	.loc_0x0:
	  li        r0, 0x8
	  mtctr     r0
	  rlwinm    r6,r3,1,31,31
	  li        r9, 0
	  li        r10, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r5, 0x1

	.loc_0x20:
	  cmplwi    r8, 0xF
	  ble-      .loc_0x50
	  cmplwi    r8, 0x1F
	  bne-      .loc_0x38
	  or        r7, r7, r6
	  b         .loc_0x6C

	.loc_0x38:
	  slw       r0, r5, r8
	  and       r0, r3, r0
	  srw       r0, r0, r10
	  or        r7, r7, r0
	  addi      r10, r10, 0x2
	  b         .loc_0x6C

	.loc_0x50:
	  slw       r4, r5, r8
	  subfic    r0, r8, 0x1F
	  sub       r0, r0, r9
	  and       r4, r3, r4
	  slw       r0, r4, r0
	  or        r7, r7, r0
	  addi      r9, r9, 0x1

	.loc_0x6C:
	  addi      r8, r8, 0x1
	  cmplwi    r8, 0xF
	  ble-      .loc_0xA0
	  cmplwi    r8, 0x1F
	  bne-      .loc_0x88
	  or        r7, r7, r6
	  b         .loc_0xBC

	.loc_0x88:
	  slw       r0, r5, r8
	  and       r0, r3, r0
	  srw       r0, r0, r10
	  or        r7, r7, r0
	  addi      r10, r10, 0x2
	  b         .loc_0xBC

	.loc_0xA0:
	  slw       r4, r5, r8
	  subfic    r0, r8, 0x1F
	  sub       r0, r0, r9
	  and       r4, r3, r4
	  slw       r0, r4, r0
	  or        r7, r7, r0
	  addi      r9, r9, 0x1

	.loc_0xBC:
	  addi      r8, r8, 0x1
	  cmplwi    r8, 0xF
	  ble-      .loc_0xF0
	  cmplwi    r8, 0x1F
	  bne-      .loc_0xD8
	  or        r7, r7, r6
	  b         .loc_0x10C

	.loc_0xD8:
	  slw       r0, r5, r8
	  and       r0, r3, r0
	  srw       r0, r0, r10
	  or        r7, r7, r0
	  addi      r10, r10, 0x2
	  b         .loc_0x10C

	.loc_0xF0:
	  slw       r4, r5, r8
	  subfic    r0, r8, 0x1F
	  sub       r0, r0, r9
	  and       r4, r3, r4
	  slw       r0, r4, r0
	  or        r7, r7, r0
	  addi      r9, r9, 0x1

	.loc_0x10C:
	  addi      r8, r8, 0x1
	  cmplwi    r8, 0xF
	  ble-      .loc_0x140
	  cmplwi    r8, 0x1F
	  bne-      .loc_0x128
	  or        r7, r7, r6
	  b         .loc_0x15C

	.loc_0x128:
	  slw       r0, r5, r8
	  and       r0, r3, r0
	  srw       r0, r0, r10
	  or        r7, r7, r0
	  addi      r10, r10, 0x2
	  b         .loc_0x15C

	.loc_0x140:
	  slw       r4, r5, r8
	  subfic    r0, r8, 0x1F
	  sub       r0, r0, r9
	  and       r4, r3, r4
	  slw       r0, r4, r0
	  or        r7, r7, r0
	  addi      r9, r9, 0x1

	.loc_0x15C:
	  addi      r8, r8, 0x1
	  bdnz+     .loc_0x20
	  mr        r3, r7
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D5A8C
 * Size:	000144
 */
void ReadArrayUnlock(int slotIndex, u32 p2, u8* buffer, int byteCount, unknown p5)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x40(r1)
	  stmw      r26, 0x28(r1)
	  addi      r29, r3, 0
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5AF0
	  mulli     r8, r29, 0x110
	  addi      r26, r4, 0
	  addi      r30, r5, 0
	  addi      r31, r6, 0
	  addi      r27, r7, 0
	  addi      r3, r29, 0
	  add       r28, r0, r8
	  li        r4, 0
	  li        r5, 0x4
	  bl        0xACE4
	  cmpwi     r3, 0
	  bne-      .loc_0x54
	  li        r3, -0x3
	  b         .loc_0x130

	.loc_0x54:
	  rlwinm    r26,r26,0,0,19
	  addi      r3, r1, 0x1C
	  li        r4, 0
	  li        r5, 0x5
	  bl        -0xD0A3C
	  li        r0, 0x52
	  cmpwi     r27, 0
	  stb       r0, 0x1C(r1)
	  bne-      .loc_0x9C
	  rlwinm    r0,r26,3,30,31
	  stb       r0, 0x1D(r1)
	  rlwinm    r0,r26,11,24,31
	  rlwinm    r3,r26,13,30,31
	  stb       r0, 0x1E(r1)
	  rlwinm    r0,r26,20,25,31
	  stb       r3, 0x1F(r1)
	  stb       r0, 0x20(r1)
	  b         .loc_0xAC

	.loc_0x9C:
	  rlwinm    r0,r26,8,24,31
	  stb       r0, 0x1D(r1)
	  rlwinm    r0,r26,16,24,31
	  stb       r0, 0x1E(r1)

	.loc_0xAC:
	  addi      r3, r29, 0
	  addi      r4, r1, 0x1C
	  li        r5, 0x5
	  li        r6, 0x1
	  bl        0xA35C
	  lwz       r4, 0x80(r28)
	  cntlzw    r0, r3
	  lwz       r5, 0x14(r28)
	  addi      r3, r29, 0
	  rlwinm    r28,r0,27,5,31
	  addi      r4, r4, 0x200
	  li        r6, 0x1
	  bl        0xA33C
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  addi      r3, r29, 0
	  addi      r4, r30, 0
	  addi      r5, r31, 0
	  or        r28, r28, r0
	  li        r6, 0
	  bl        0xA31C
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  addi      r3, r29, 0
	  or        r28, r28, r0
	  bl        0xAD40
	  cntlzw    r0, r3
	  rlwinm    r0,r0,27,5,31
	  or.       r28, r28, r0
	  beq-      .loc_0x12C
	  li        r3, -0x3
	  b         .loc_0x130

	.loc_0x12C:
	  li        r3, 0

	.loc_0x130:
	  lmw       r26, 0x28(r1)
	  lwz       r0, 0x44(r1)
	  addi      r1, r1, 0x40
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void GetInitVal(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D5BD0
 * Size:	0000C4
 */
int DummyLen(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  stw       r30, 0x20(r1)
	  li        r30, 0x1
	  stw       r29, 0x1C(r1)
	  li        r29, 0
	  bl        0x1CFB8
	  stw       r3, -0x7D70(r13)
	  lis       r3, 0x41C6
	  addi      r31, r3, 0x4E6D
	  lwz       r0, -0x7D70(r13)
	  mullw     r3, r0, r31
	  addi      r0, r3, 0x3039
	  stw       r0, -0x7D70(r13)
	  lwz       r0, -0x7D70(r13)
	  rlwinm    r3,r0,16,27,31
	  addi      r3, r3, 0x1
	  b         .loc_0x8C

	.loc_0x50:
	  bl        0x1CF88
	  slw       r0, r3, r30
	  addi      r30, r30, 0x1
	  cmplwi    r30, 0x10
	  ble-      .loc_0x68
	  li        r30, 0x1

	.loc_0x68:
	  stw       r0, -0x7D70(r13)
	  addi      r29, r29, 0x1
	  lwz       r0, -0x7D70(r13)
	  mullw     r3, r0, r31
	  addi      r0, r3, 0x3039
	  stw       r0, -0x7D70(r13)
	  lwz       r0, -0x7D70(r13)
	  rlwinm    r3,r0,16,27,31
	  addi      r3, r3, 0x1

	.loc_0x8C:
	  cmpwi     r3, 0x4
	  bge-      .loc_0x9C
	  cmplwi    r29, 0xA
	  blt+      .loc_0x50

	.loc_0x9C:
	  cmpwi     r3, 0x4
	  bge-      .loc_0xA8
	  li        r3, 0x4

	.loc_0xA8:
	  lwz       r0, 0x2C(r1)
	  lwz       r31, 0x24(r1)
	  lwz       r30, 0x20(r1)
	  lwz       r29, 0x1C(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D5C94
 * Size:	000B58
 */
int __CARDUnlock(int slotIndex, void* p2)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x120(r1)
	  stmw      r22, 0xF8(r1)
	  addi      r24, r3, 0
	  lis       r3, 0x804F
	  mulli     r5, r24, 0x110
	  addi      r0, r3, 0x5AF0
	  add       r31, r0, r5
	  addi      r23, r4, 0
	  addi      r30, r31, 0x30
	  lwz       r3, 0x80(r31)
	  addi      r0, r3, 0x2F
	  rlwinm    r28,r0,0,0,26
	  addi      r29, r3, 0
	  addi      r22, r28, 0x20
	  bl        0x1CED4
	  stw       r3, -0x7D70(r13)
	  lis       r3, 0x41C6
	  lis       r5, 0x7FED
	  lwz       r4, -0x7D70(r13)
	  addi      r0, r3, 0x4E6D
	  subi      r25, r5, 0x8000
	  mullw     r3, r4, r0
	  addi      r0, r3, 0x3039
	  stw       r0, -0x7D70(r13)
	  lwz       r0, -0x7D70(r13)
	  rlwinm    r0,r0,16,17,31
	  or        r25, r25, r0
	  rlwinm    r25,r25,0,0,19
	  bl        -0x13C
	  addi      r26, r3, 0
	  addi      r6, r26, 0
	  addi      r3, r24, 0
	  addi      r4, r25, 0
	  addi      r5, r1, 0xA4
	  li        r7, 0
	  bl        -0x29C
	  cmpwi     r3, 0
	  bge-      .loc_0xA8
	  li        r3, -0x3
	  b         .loc_0xB44

	.loc_0xA8:
	  rlwinm    r3,r26,3,0,28
	  addi      r4, r3, 0x1
	  cmplwi    r4, 0
	  li        r3, 0
	  ble-      .loc_0x220
	  cmplwi    r4, 0x8
	  subi      r5, r4, 0x8
	  ble-      .loc_0x1E8
	  addi      r0, r5, 0x7
	  rlwinm    r0,r0,29,3,31
	  cmplwi    r5, 0
	  mtctr     r0
	  ble-      .loc_0x1E8

	.loc_0xDC:
	  rlwinm    r0,r25,25,7,31
	  rlwinm    r5,r25,17,15,31
	  xor       r0, r25, r0
	  xor       r0, r5, r0
	  rlwinm    r6,r25,9,23,31
	  eqv       r0, r6, r0
	  rlwinm    r5,r25,31,1,31
	  rlwinm    r0,r0,30,1,1
	  or        r7, r5, r0
	  rlwinm    r0,r7,25,7,31
	  rlwinm    r5,r7,17,15,31
	  xor       r0, r7, r0
	  rlwinm    r6,r7,9,23,31
	  xor       r0, r5, r0
	  eqv       r0, r6, r0
	  rlwinm    r8,r0,30,1,1
	  rlwimi    r8,r7,31,2,31
	  rlwinm    r0,r8,25,7,31
	  rlwinm    r5,r8,17,15,31
	  xor       r0, r8, r0
	  rlwinm    r6,r8,9,23,31
	  xor       r0, r5, r0
	  eqv       r0, r6, r0
	  rlwinm    r7,r0,30,1,1
	  rlwimi    r7,r8,31,2,31
	  rlwinm    r0,r7,25,7,31
	  rlwinm    r5,r7,17,15,31
	  xor       r0, r7, r0
	  rlwinm    r6,r7,9,23,31
	  xor       r0, r5, r0
	  eqv       r0, r6, r0
	  rlwinm    r8,r0,30,1,1
	  rlwimi    r8,r7,31,2,31
	  rlwinm    r0,r8,25,7,31
	  rlwinm    r5,r8,17,15,31
	  xor       r0, r8, r0
	  rlwinm    r6,r8,9,23,31
	  xor       r0, r5, r0
	  eqv       r0, r6, r0
	  rlwinm    r7,r0,30,1,1
	  rlwimi    r7,r8,31,2,31
	  rlwinm    r0,r7,25,7,31
	  rlwinm    r5,r7,17,15,31
	  xor       r0, r7, r0
	  rlwinm    r6,r7,9,23,31
	  xor       r0, r5, r0
	  eqv       r0, r6, r0
	  rlwinm    r8,r0,30,1,1
	  rlwimi    r8,r7,31,2,31
	  rlwinm    r0,r8,25,7,31
	  rlwinm    r5,r8,17,15,31
	  xor       r0, r8, r0
	  rlwinm    r6,r8,9,23,31
	  xor       r0, r5, r0
	  eqv       r0, r6, r0
	  rlwinm    r7,r0,30,1,1
	  rlwimi    r7,r8,31,2,31
	  rlwinm    r0,r7,25,7,31
	  rlwinm    r5,r7,17,15,31
	  xor       r0, r7, r0
	  rlwinm    r6,r7,9,23,31
	  xor       r0, r5, r0
	  eqv       r0, r6, r0
	  rlwinm    r25,r0,30,1,1
	  rlwimi    r25,r7,31,2,31
	  addi      r3, r3, 0x8
	  bdnz+     .loc_0xDC

	.loc_0x1E8:
	  sub       r0, r4, r3
	  cmplw     r3, r4
	  mtctr     r0
	  bge-      .loc_0x220

	.loc_0x1F8:
	  rlwinm    r0,r25,25,7,31
	  rlwinm    r3,r25,17,15,31
	  xor       r0, r25, r0
	  rlwinm    r4,r25,9,23,31
	  xor       r0, r3, r0
	  eqv       r0, r4, r0
	  rlwinm    r3,r25,31,1,31
	  rlwinm    r0,r0,30,1,1
	  or        r25, r3, r0
	  bdnz+     .loc_0x1F8

	.loc_0x220:
	  rlwinm    r0,r25,25,7,31
	  rlwinm    r3,r25,17,15,31
	  xor       r0, r25, r0
	  rlwinm    r4,r25,9,23,31
	  xor       r0, r3, r0
	  eqv       r0, r4, r0
	  rlwinm    r0,r0,31,0,0
	  or        r0, r25, r0
	  stw       r0, 0x2C(r31)
	  lwz       r3, 0x2C(r31)
	  bl        -0x5BC
	  stw       r3, 0x2C(r31)
	  bl        -0x314
	  addi      r27, r3, 0
	  addi      r6, r27, 0x14
	  addi      r3, r24, 0
	  addi      r5, r1, 0xA4
	  li        r4, 0
	  li        r7, 0x1
	  bl        -0x474
	  cmpwi     r3, 0
	  bge-      .loc_0x280
	  li        r3, -0x3
	  b         .loc_0xB44

	.loc_0x280:
	  li        r3, 0x4
	  lwz       r7, 0x2C(r31)
	  lwz       r25, 0xA4(r1)
	  mtctr     r3
	  lwz       r26, 0xA8(r1)
	  lwz       r24, 0xAC(r1)
	  xor       r25, r25, r7
	  lwz       r0, 0xB0(r1)
	  lwz       r5, 0xB4(r1)

	.loc_0x2A4:
	  rlwinm    r3,r7,7,0,24
	  rlwinm    r4,r7,15,0,16
	  xor       r3, r7, r3
	  xor       r3, r4, r3
	  rlwinm    r6,r7,23,0,8
	  eqv       r3, r6, r3
	  rlwinm    r4,r7,1,0,30
	  rlwinm    r3,r3,2,30,30
	  or        r7, r4, r3
	  rlwinm    r3,r7,7,0,24
	  rlwinm    r4,r7,15,0,16
	  xor       r3, r7, r3
	  rlwinm    r6,r7,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r9,r3,2,30,30
	  rlwimi    r9,r7,1,0,29
	  rlwinm    r3,r9,7,0,24
	  rlwinm    r4,r9,15,0,16
	  xor       r3, r9, r3
	  rlwinm    r6,r9,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r8,r3,2,30,30
	  rlwimi    r8,r9,1,0,29
	  rlwinm    r3,r8,7,0,24
	  rlwinm    r4,r8,15,0,16
	  xor       r3, r8, r3
	  rlwinm    r6,r8,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r7,r3,2,30,30
	  rlwimi    r7,r8,1,0,29
	  rlwinm    r3,r7,7,0,24
	  rlwinm    r4,r7,15,0,16
	  xor       r3, r7, r3
	  rlwinm    r6,r7,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r8,r3,2,30,30
	  rlwimi    r8,r7,1,0,29
	  rlwinm    r3,r8,7,0,24
	  rlwinm    r4,r8,15,0,16
	  xor       r3, r8, r3
	  rlwinm    r6,r8,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r7,r3,2,30,30
	  rlwimi    r7,r8,1,0,29
	  rlwinm    r3,r7,7,0,24
	  rlwinm    r4,r7,15,0,16
	  xor       r3, r7, r3
	  rlwinm    r6,r7,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r8,r3,2,30,30
	  rlwimi    r8,r7,1,0,29
	  rlwinm    r3,r8,7,0,24
	  rlwinm    r4,r8,15,0,16
	  xor       r3, r8, r3
	  rlwinm    r6,r8,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r7,r3,2,30,30
	  rlwimi    r7,r8,1,0,29
	  bdnz+     .loc_0x2A4
	  rlwinm    r3,r7,7,0,24
	  rlwinm    r4,r7,15,0,16
	  xor       r3, r7, r3
	  rlwinm    r6,r7,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r3,r3,1,31,31
	  or        r3, r7, r3
	  stw       r3, 0x2C(r31)
	  li        r3, 0x4
	  mtctr     r3
	  lwz       r7, 0x2C(r31)
	  xor       r26, r26, r7

	.loc_0x3E0:
	  rlwinm    r3,r7,7,0,24
	  rlwinm    r4,r7,15,0,16
	  xor       r3, r7, r3
	  xor       r3, r4, r3
	  rlwinm    r6,r7,23,0,8
	  eqv       r3, r6, r3
	  rlwinm    r4,r7,1,0,30
	  rlwinm    r3,r3,2,30,30
	  or        r7, r4, r3
	  rlwinm    r3,r7,7,0,24
	  rlwinm    r4,r7,15,0,16
	  xor       r3, r7, r3
	  rlwinm    r6,r7,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r9,r3,2,30,30
	  rlwimi    r9,r7,1,0,29
	  rlwinm    r3,r9,7,0,24
	  rlwinm    r4,r9,15,0,16
	  xor       r3, r9, r3
	  rlwinm    r6,r9,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r8,r3,2,30,30
	  rlwimi    r8,r9,1,0,29
	  rlwinm    r3,r8,7,0,24
	  rlwinm    r4,r8,15,0,16
	  xor       r3, r8, r3
	  rlwinm    r6,r8,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r7,r3,2,30,30
	  rlwimi    r7,r8,1,0,29
	  rlwinm    r3,r7,7,0,24
	  rlwinm    r4,r7,15,0,16
	  xor       r3, r7, r3
	  rlwinm    r6,r7,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r8,r3,2,30,30
	  rlwimi    r8,r7,1,0,29
	  rlwinm    r3,r8,7,0,24
	  rlwinm    r4,r8,15,0,16
	  xor       r3, r8, r3
	  rlwinm    r6,r8,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r7,r3,2,30,30
	  rlwimi    r7,r8,1,0,29
	  rlwinm    r3,r7,7,0,24
	  rlwinm    r4,r7,15,0,16
	  xor       r3, r7, r3
	  rlwinm    r6,r7,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r8,r3,2,30,30
	  rlwimi    r8,r7,1,0,29
	  rlwinm    r3,r8,7,0,24
	  rlwinm    r4,r8,15,0,16
	  xor       r3, r8, r3
	  rlwinm    r6,r8,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r7,r3,2,30,30
	  rlwimi    r7,r8,1,0,29
	  bdnz+     .loc_0x3E0
	  rlwinm    r3,r7,7,0,24
	  rlwinm    r4,r7,15,0,16
	  xor       r3, r7, r3
	  rlwinm    r6,r7,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r3,r3,1,31,31
	  or        r3, r7, r3
	  stw       r3, 0x2C(r31)
	  li        r3, 0x4
	  mtctr     r3
	  lwz       r7, 0x2C(r31)
	  xor       r24, r24, r7

	.loc_0x51C:
	  rlwinm    r3,r7,7,0,24
	  rlwinm    r4,r7,15,0,16
	  xor       r3, r7, r3
	  xor       r3, r4, r3
	  rlwinm    r6,r7,23,0,8
	  eqv       r3, r6, r3
	  rlwinm    r4,r7,1,0,30
	  rlwinm    r3,r3,2,30,30
	  or        r7, r4, r3
	  rlwinm    r3,r7,7,0,24
	  rlwinm    r4,r7,15,0,16
	  xor       r3, r7, r3
	  rlwinm    r6,r7,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r9,r3,2,30,30
	  rlwimi    r9,r7,1,0,29
	  rlwinm    r3,r9,7,0,24
	  rlwinm    r4,r9,15,0,16
	  xor       r3, r9, r3
	  rlwinm    r6,r9,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r8,r3,2,30,30
	  rlwimi    r8,r9,1,0,29
	  rlwinm    r3,r8,7,0,24
	  rlwinm    r4,r8,15,0,16
	  xor       r3, r8, r3
	  rlwinm    r6,r8,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r7,r3,2,30,30
	  rlwimi    r7,r8,1,0,29
	  rlwinm    r3,r7,7,0,24
	  rlwinm    r4,r7,15,0,16
	  xor       r3, r7, r3
	  rlwinm    r6,r7,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r8,r3,2,30,30
	  rlwimi    r8,r7,1,0,29
	  rlwinm    r3,r8,7,0,24
	  rlwinm    r4,r8,15,0,16
	  xor       r3, r8, r3
	  rlwinm    r6,r8,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r7,r3,2,30,30
	  rlwimi    r7,r8,1,0,29
	  rlwinm    r3,r7,7,0,24
	  rlwinm    r4,r7,15,0,16
	  xor       r3, r7, r3
	  rlwinm    r6,r7,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r8,r3,2,30,30
	  rlwimi    r8,r7,1,0,29
	  rlwinm    r3,r8,7,0,24
	  rlwinm    r4,r8,15,0,16
	  xor       r3, r8, r3
	  rlwinm    r6,r8,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r7,r3,2,30,30
	  rlwimi    r7,r8,1,0,29
	  bdnz+     .loc_0x51C
	  rlwinm    r3,r7,7,0,24
	  rlwinm    r4,r7,15,0,16
	  xor       r3, r7, r3
	  rlwinm    r6,r7,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r3,r3,1,31,31
	  or        r3, r7, r3
	  stw       r3, 0x2C(r31)
	  li        r3, 0x4
	  mtctr     r3
	  lwz       r7, 0x2C(r31)
	  xor       r0, r0, r7

	.loc_0x658:
	  rlwinm    r3,r7,7,0,24
	  rlwinm    r4,r7,15,0,16
	  xor       r3, r7, r3
	  xor       r3, r4, r3
	  rlwinm    r6,r7,23,0,8
	  eqv       r3, r6, r3
	  rlwinm    r4,r7,1,0,30
	  rlwinm    r3,r3,2,30,30
	  or        r7, r4, r3
	  rlwinm    r3,r7,7,0,24
	  rlwinm    r4,r7,15,0,16
	  xor       r3, r7, r3
	  rlwinm    r6,r7,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r9,r3,2,30,30
	  rlwimi    r9,r7,1,0,29
	  rlwinm    r3,r9,7,0,24
	  rlwinm    r4,r9,15,0,16
	  xor       r3, r9, r3
	  rlwinm    r6,r9,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r8,r3,2,30,30
	  rlwimi    r8,r9,1,0,29
	  rlwinm    r3,r8,7,0,24
	  rlwinm    r4,r8,15,0,16
	  xor       r3, r8, r3
	  rlwinm    r6,r8,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r7,r3,2,30,30
	  rlwimi    r7,r8,1,0,29
	  rlwinm    r3,r7,7,0,24
	  rlwinm    r4,r7,15,0,16
	  xor       r3, r7, r3
	  rlwinm    r6,r7,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r8,r3,2,30,30
	  rlwimi    r8,r7,1,0,29
	  rlwinm    r3,r8,7,0,24
	  rlwinm    r4,r8,15,0,16
	  xor       r3, r8, r3
	  rlwinm    r6,r8,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r7,r3,2,30,30
	  rlwimi    r7,r8,1,0,29
	  rlwinm    r3,r7,7,0,24
	  rlwinm    r4,r7,15,0,16
	  xor       r3, r7, r3
	  rlwinm    r6,r7,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r8,r3,2,30,30
	  rlwimi    r8,r7,1,0,29
	  rlwinm    r3,r8,7,0,24
	  rlwinm    r4,r8,15,0,16
	  xor       r3, r8, r3
	  rlwinm    r6,r8,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r6, r3
	  rlwinm    r7,r3,2,30,30
	  rlwimi    r7,r8,1,0,29
	  bdnz+     .loc_0x658
	  rlwinm    r3,r7,7,0,24
	  rlwinm    r4,r7,15,0,16
	  xor       r3, r7, r3
	  xor       r3, r4, r3
	  rlwinm    r6,r7,23,0,8
	  eqv       r3, r6, r3
	  rlwinm    r3,r3,1,31,31
	  or        r3, r7, r3
	  stw       r3, 0x2C(r31)
	  rlwinm    r4,r27,3,0,28
	  cmplwi    r4, 0
	  lwz       r6, 0x2C(r31)
	  li        r3, 0
	  xor       r5, r5, r6
	  ble-      .loc_0x900
	  cmplwi    r4, 0x8
	  subi      r8, r4, 0x8
	  ble-      .loc_0x8C8
	  addi      r7, r8, 0x7
	  rlwinm    r7,r7,29,3,31
	  cmplwi    r8, 0
	  mtctr     r7
	  ble-      .loc_0x8C8

	.loc_0x7BC:
	  rlwinm    r7,r6,7,0,24
	  rlwinm    r8,r6,15,0,16
	  xor       r7, r6, r7
	  xor       r7, r8, r7
	  rlwinm    r9,r6,23,0,8
	  eqv       r7, r9, r7
	  rlwinm    r8,r6,1,0,30
	  rlwinm    r6,r7,2,30,30
	  or        r9, r8, r6
	  rlwinm    r6,r9,7,0,24
	  rlwinm    r7,r9,15,0,16
	  xor       r6, r9, r6
	  rlwinm    r8,r9,23,0,8
	  xor       r6, r7, r6
	  eqv       r6, r8, r6
	  rlwinm    r10,r6,2,30,30
	  rlwimi    r10,r9,1,0,29
	  rlwinm    r6,r10,7,0,24
	  rlwinm    r7,r10,15,0,16
	  xor       r6, r10, r6
	  rlwinm    r8,r10,23,0,8
	  xor       r6, r7, r6
	  eqv       r6, r8, r6
	  rlwinm    r9,r6,2,30,30
	  rlwimi    r9,r10,1,0,29
	  rlwinm    r6,r9,7,0,24
	  rlwinm    r7,r9,15,0,16
	  xor       r6, r9, r6
	  rlwinm    r8,r9,23,0,8
	  xor       r6, r7, r6
	  eqv       r6, r8, r6
	  rlwinm    r10,r6,2,30,30
	  rlwimi    r10,r9,1,0,29
	  rlwinm    r6,r10,7,0,24
	  rlwinm    r7,r10,15,0,16
	  xor       r6, r10, r6
	  rlwinm    r8,r10,23,0,8
	  xor       r6, r7, r6
	  eqv       r6, r8, r6
	  rlwinm    r9,r6,2,30,30
	  rlwimi    r9,r10,1,0,29
	  rlwinm    r6,r9,7,0,24
	  rlwinm    r7,r9,15,0,16
	  xor       r6, r9, r6
	  rlwinm    r8,r9,23,0,8
	  xor       r6, r7, r6
	  eqv       r6, r8, r6
	  rlwinm    r10,r6,2,30,30
	  rlwimi    r10,r9,1,0,29
	  rlwinm    r6,r10,7,0,24
	  rlwinm    r7,r10,15,0,16
	  xor       r6, r10, r6
	  rlwinm    r8,r10,23,0,8
	  xor       r6, r7, r6
	  eqv       r6, r8, r6
	  rlwinm    r9,r6,2,30,30
	  rlwimi    r9,r10,1,0,29
	  rlwinm    r6,r9,7,0,24
	  rlwinm    r7,r9,15,0,16
	  xor       r6, r9, r6
	  rlwinm    r8,r9,23,0,8
	  xor       r6, r7, r6
	  eqv       r6, r8, r6
	  rlwinm    r6,r6,2,30,30
	  rlwimi    r6,r9,1,0,29
	  addi      r3, r3, 0x8
	  bdnz+     .loc_0x7BC

	.loc_0x8C8:
	  sub       r7, r4, r3
	  cmplw     r3, r4
	  mtctr     r7
	  bge-      .loc_0x900

	.loc_0x8D8:
	  rlwinm    r3,r6,7,0,24
	  rlwinm    r4,r6,15,0,16
	  xor       r3, r6, r3
	  rlwinm    r7,r6,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r7, r3
	  rlwinm    r4,r6,1,0,30
	  rlwinm    r3,r3,2,30,30
	  or        r6, r4, r3
	  bdnz+     .loc_0x8D8

	.loc_0x900:
	  rlwinm    r3,r6,7,0,24
	  rlwinm    r4,r6,15,0,16
	  xor       r3, r6, r3
	  rlwinm    r7,r6,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r7, r3
	  rlwinm    r3,r3,1,31,31
	  or        r3, r6, r3
	  stw       r3, 0x2C(r31)
	  li        r3, 0x4
	  mtctr     r3
	  li        r3, 0
	  lwz       r4, 0x2C(r31)

	.loc_0x934:
	  rlwinm    r6,r4,7,0,24
	  rlwinm    r7,r4,15,0,16
	  xor       r6, r4, r6
	  xor       r6, r7, r6
	  rlwinm    r8,r4,23,0,8
	  eqv       r6, r8, r6
	  rlwinm    r7,r4,1,0,30
	  rlwinm    r4,r6,2,30,30
	  or        r8, r7, r4
	  rlwinm    r4,r8,7,0,24
	  rlwinm    r6,r8,15,0,16
	  xor       r4, r8, r4
	  rlwinm    r7,r8,23,0,8
	  xor       r4, r6, r4
	  eqv       r4, r7, r4
	  rlwinm    r9,r4,2,30,30
	  rlwimi    r9,r8,1,0,29
	  rlwinm    r4,r9,7,0,24
	  rlwinm    r6,r9,15,0,16
	  xor       r4, r9, r4
	  rlwinm    r7,r9,23,0,8
	  xor       r4, r6, r4
	  eqv       r4, r7, r4
	  rlwinm    r8,r4,2,30,30
	  rlwimi    r8,r9,1,0,29
	  rlwinm    r4,r8,7,0,24
	  rlwinm    r6,r8,15,0,16
	  xor       r4, r8, r4
	  rlwinm    r7,r8,23,0,8
	  xor       r4, r6, r4
	  eqv       r4, r7, r4
	  rlwinm    r9,r4,2,30,30
	  rlwimi    r9,r8,1,0,29
	  rlwinm    r4,r9,7,0,24
	  rlwinm    r6,r9,15,0,16
	  xor       r4, r9, r4
	  rlwinm    r7,r9,23,0,8
	  xor       r4, r6, r4
	  eqv       r4, r7, r4
	  rlwinm    r8,r4,2,30,30
	  rlwimi    r8,r9,1,0,29
	  rlwinm    r4,r8,7,0,24
	  rlwinm    r6,r8,15,0,16
	  xor       r4, r8, r4
	  rlwinm    r7,r8,23,0,8
	  xor       r4, r6, r4
	  eqv       r4, r7, r4
	  rlwinm    r9,r4,2,30,30
	  rlwimi    r9,r8,1,0,29
	  rlwinm    r4,r9,7,0,24
	  rlwinm    r6,r9,15,0,16
	  xor       r4, r9, r4
	  rlwinm    r7,r9,23,0,8
	  xor       r4, r6, r4
	  eqv       r4, r7, r4
	  rlwinm    r8,r4,2,30,30
	  rlwimi    r8,r9,1,0,29
	  rlwinm    r4,r8,7,0,24
	  rlwinm    r6,r8,15,0,16
	  xor       r4, r8, r4
	  rlwinm    r7,r8,23,0,8
	  xor       r4, r6, r4
	  eqv       r4, r7, r4
	  rlwinm    r4,r4,2,30,30
	  rlwimi    r4,r8,1,0,29
	  addi      r3, r3, 0x8
	  bdnz+     .loc_0x934
	  subfic    r6, r3, 0x21
	  cmplwi    r3, 0x21
	  mtctr     r6
	  bge-      .loc_0xA78

	.loc_0xA50:
	  rlwinm    r3,r4,7,0,24
	  rlwinm    r6,r4,15,0,16
	  xor       r3, r4, r3
	  rlwinm    r7,r4,23,0,8
	  xor       r3, r6, r3
	  eqv       r3, r7, r3
	  rlwinm    r4,r4,1,0,30
	  rlwinm    r3,r3,2,30,30
	  or        r4, r4, r3
	  bdnz+     .loc_0xA50

	.loc_0xA78:
	  rlwinm    r3,r4,7,0,24
	  rlwinm    r6,r4,15,0,16
	  xor       r3, r4, r3
	  rlwinm    r7,r4,23,0,8
	  xor       r3, r6, r3
	  eqv       r3, r7, r3
	  rlwinm    r3,r3,1,31,31
	  or        r3, r4, r3
	  stw       r3, 0x2C(r31)
	  li        r6, 0x8
	  li        r27, 0
	  stw       r0, 0x0(r28)
	  addi      r3, r28, 0
	  li        r4, 0x8
	  stw       r5, 0x4(r28)
	  stw       r28, 0x0(r29)
	  stw       r6, 0x4(r29)
	  stw       r22, 0xC(r29)
	  stw       r27, 0x8(r29)
	  bl        0x15FC0
	  addi      r3, r22, 0
	  li        r4, 0x4
	  bl        0x15F88
	  addi      r3, r29, 0
	  li        r4, 0x10
	  bl        0x15FA8
	  li        r0, 0xFF
	  lis       r3, 0x804A
	  stw       r0, 0x4(r30)
	  addi      r3, r3, 0x7780
	  subis     r0, r3, 0x8000
	  stw       r0, 0xC(r30)
	  li        r0, 0x160
	  lis       r4, 0x800D
	  stw       r0, 0x10(r30)
	  lis       r3, 0x800D
	  li        r5, 0x10
	  stw       r27, 0x14(r30)
	  addi      r4, r4, 0x67EC
	  addi      r0, r3, 0x685C
	  sth       r5, 0x24(r30)
	  mr        r3, r30
	  stw       r4, 0x28(r30)
	  stw       r27, 0x2C(r30)
	  stw       r0, 0x30(r30)
	  stw       r27, 0x34(r30)
	  bl        -0x2BBA4
	  stw       r25, 0x0(r23)
	  li        r3, 0
	  stw       r26, 0x4(r23)
	  stw       r24, 0x8(r23)

	.loc_0xB44:
	  lmw       r22, 0xF8(r1)
	  lwz       r0, 0x124(r1)
	  addi      r1, r1, 0x120
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D67EC
 * Size:	000070
 */
void InitCallback(DSPTask* dspTask)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x4(r1)
	  addi      r4, r4, 0x5AF0
	  addi      r0, r4, 0x30
	  stwu      r1, -0x18(r1)
	  cmplw     r0, r3
	  stw       r31, 0x14(r1)
	  beq-      .loc_0x30
	  addi      r0, r4, 0x140
	  cmplw     r0, r3
	  addi      r4, r4, 0x110

	.loc_0x30:
	  lwz       r31, 0x80(r4)
	  lis       r3, 0xFF00
	  bl        0x44C4

	.loc_0x3C:
	  bl        0x4488
	  cmplwi    r3, 0
	  bne+      .loc_0x3C
	  mr        r3, r31
	  bl        0x44B0

	.loc_0x50:
	  bl        0x4474
	  cmplwi    r3, 0
	  bne+      .loc_0x50
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D685C
 * Size:	000324
 */
void DoneCallback(DSPTask* dspTask)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x4(r1)
	  addi      r4, r4, 0x5AF0
	  addi      r0, r4, 0x30
	  stwu      r1, -0x88(r1)
	  cmplw     r0, r3
	  stw       r31, 0x84(r1)
	  li        r31, 0
	  stw       r30, 0x80(r1)
	  stw       r29, 0x7C(r1)
	  addi      r29, r4, 0
	  stw       r28, 0x78(r1)
	  beq-      .loc_0x54
	  addi      r0, r4, 0x140
	  cmplw     r0, r3
	  addi      r4, r4, 0x110
	  addi      r29, r4, 0
	  li        r31, 0x1
	  beq-      .loc_0x54
	  li        r31, 0x2

	.loc_0x54:
	  lwz       r3, 0x80(r29)
	  addi      r0, r3, 0x2F
	  rlwinm    r3,r0,0,0,26
	  lwz       r30, 0x20(r3)
	  bl        -0xCF0
	  lwz       r0, 0x2C(r29)
	  addi      r28, r3, 0
	  addi      r6, r28, 0
	  xor       r0, r30, r0
	  rlwinm    r4,r0,0,0,15
	  addi      r3, r31, 0
	  addi      r5, r1, 0x34
	  li        r7, 0x1
	  bl        -0xE58
	  cmpwi     r3, 0
	  bge-      .loc_0xAC
	  mr        r3, r31
	  bl        0xA770
	  addi      r3, r31, 0
	  li        r4, -0x3
	  bl        0x20C4
	  b         .loc_0x304

	.loc_0xAC:
	  lwz       r4, 0x14(r29)
	  li        r3, 0
	  lwz       r0, 0x2C(r29)
	  add       r4, r28, r4
	  addi      r4, r4, 0x4
	  rlwinm    r4,r4,3,0,28
	  addi      r4, r4, 0x1
	  cmplwi    r4, 0
	  ble-      .loc_0x234
	  cmplwi    r4, 0x8
	  subi      r6, r4, 0x8
	  ble-      .loc_0x1FC
	  addi      r5, r6, 0x7
	  rlwinm    r5,r5,29,3,31
	  cmplwi    r6, 0
	  mtctr     r5
	  ble-      .loc_0x1FC

	.loc_0xF0:
	  rlwinm    r5,r0,7,0,24
	  rlwinm    r6,r0,15,0,16
	  xor       r5, r0, r5
	  xor       r5, r6, r5
	  rlwinm    r7,r0,23,0,8
	  eqv       r5, r7, r5
	  rlwinm    r6,r0,1,0,30
	  rlwinm    r0,r5,2,30,30
	  or        r7, r6, r0
	  rlwinm    r0,r7,7,0,24
	  rlwinm    r5,r7,15,0,16
	  xor       r0, r7, r0
	  rlwinm    r6,r7,23,0,8
	  xor       r0, r5, r0
	  eqv       r0, r6, r0
	  rlwinm    r8,r0,2,30,30
	  rlwimi    r8,r7,1,0,29
	  rlwinm    r0,r8,7,0,24
	  rlwinm    r5,r8,15,0,16
	  xor       r0, r8, r0
	  rlwinm    r6,r8,23,0,8
	  xor       r0, r5, r0
	  eqv       r0, r6, r0
	  rlwinm    r7,r0,2,30,30
	  rlwimi    r7,r8,1,0,29
	  rlwinm    r0,r7,7,0,24
	  rlwinm    r5,r7,15,0,16
	  xor       r0, r7, r0
	  rlwinm    r6,r7,23,0,8
	  xor       r0, r5, r0
	  eqv       r0, r6, r0
	  rlwinm    r8,r0,2,30,30
	  rlwimi    r8,r7,1,0,29
	  rlwinm    r0,r8,7,0,24
	  rlwinm    r5,r8,15,0,16
	  xor       r0, r8, r0
	  rlwinm    r6,r8,23,0,8
	  xor       r0, r5, r0
	  eqv       r0, r6, r0
	  rlwinm    r7,r0,2,30,30
	  rlwimi    r7,r8,1,0,29
	  rlwinm    r0,r7,7,0,24
	  rlwinm    r5,r7,15,0,16
	  xor       r0, r7, r0
	  rlwinm    r6,r7,23,0,8
	  xor       r0, r5, r0
	  eqv       r0, r6, r0
	  rlwinm    r8,r0,2,30,30
	  rlwimi    r8,r7,1,0,29
	  rlwinm    r0,r8,7,0,24
	  rlwinm    r5,r8,15,0,16
	  xor       r0, r8, r0
	  rlwinm    r6,r8,23,0,8
	  xor       r0, r5, r0
	  eqv       r0, r6, r0
	  rlwinm    r7,r0,2,30,30
	  rlwimi    r7,r8,1,0,29
	  rlwinm    r0,r7,7,0,24
	  rlwinm    r5,r7,15,0,16
	  xor       r0, r7, r0
	  rlwinm    r6,r7,23,0,8
	  xor       r0, r5, r0
	  eqv       r0, r6, r0
	  rlwinm    r0,r0,2,30,30
	  rlwimi    r0,r7,1,0,29
	  addi      r3, r3, 0x8
	  bdnz+     .loc_0xF0

	.loc_0x1FC:
	  sub       r5, r4, r3
	  cmplw     r3, r4
	  mtctr     r5
	  bge-      .loc_0x234

	.loc_0x20C:
	  rlwinm    r3,r0,7,0,24
	  rlwinm    r4,r0,15,0,16
	  xor       r3, r0, r3
	  rlwinm    r5,r0,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r5, r3
	  rlwinm    r4,r0,1,0,30
	  rlwinm    r0,r3,2,30,30
	  or        r0, r4, r0
	  bdnz+     .loc_0x20C

	.loc_0x234:
	  rlwinm    r3,r0,7,0,24
	  rlwinm    r4,r0,15,0,16
	  xor       r3, r0, r3
	  rlwinm    r5,r0,23,0,8
	  xor       r3, r4, r3
	  eqv       r3, r5, r3
	  rlwinm    r3,r3,1,31,31
	  or        r0, r0, r3
	  stw       r0, 0x2C(r29)
	  bl        -0xEE4
	  lwz       r0, 0x2C(r29)
	  rlwinm    r4,r30,16,0,15
	  addi      r6, r3, 0
	  xor       r0, r4, r0
	  rlwinm    r4,r0,0,0,15
	  addi      r3, r31, 0
	  addi      r5, r1, 0x34
	  li        r7, 0x1
	  bl        -0x104C
	  cmpwi     r3, 0
	  bge-      .loc_0x2A0
	  mr        r3, r31
	  bl        0xA57C
	  addi      r3, r31, 0
	  li        r4, -0x3
	  bl        0x1ED0
	  b         .loc_0x304

	.loc_0x2A0:
	  addi      r3, r31, 0
	  addi      r4, r1, 0x30
	  bl        -0x2084
	  addi      r28, r3, 0
	  addi      r3, r31, 0
	  bl        0x99A4
	  cmpwi     r3, 0
	  bne-      .loc_0x2D8
	  mr        r3, r31
	  bl        0xA544
	  addi      r3, r31, 0
	  li        r4, -0x3
	  bl        0x1E98
	  b         .loc_0x304

	.loc_0x2D8:
	  cmpwi     r28, 0
	  bne-      .loc_0x2F8
	  lbz       r0, 0x30(r1)
	  rlwinm.   r0,r0,0,25,25
	  bne-      .loc_0x2F8
	  mr        r3, r31
	  bl        0xA518
	  li        r28, -0x5

	.loc_0x2F8:
	  addi      r3, r31, 0
	  addi      r4, r28, 0
	  bl        0x1E68

	.loc_0x304:
	  lwz       r0, 0x8C(r1)
	  lwz       r31, 0x84(r1)
	  lwz       r30, 0x80(r1)
	  lwz       r29, 0x7C(r1)
	  lwz       r28, 0x78(r1)
	  addi      r1, r1, 0x88
	  mtlr      r0
	  blr
	*/
}
