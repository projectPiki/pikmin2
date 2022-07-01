#include "Dolphin/card.h"

/*
 * --INFO--
 * Address:	800D9E48
 * Size:	0001B8
 */
int __CARDSeek(CARDFileInfo* fileInfo, unknown p2, unknown p3, CARDBlock** outBlock)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x30(r1)
	  stw       r31, 0x2C(r1)
	  addi      r31, r6, 0
	  stw       r30, 0x28(r1)
	  addi      r30, r5, 0
	  stw       r29, 0x24(r1)
	  addi      r29, r4, 0
	  addi      r4, r1, 0x18
	  stw       r28, 0x20(r1)
	  mr        r28, r3
	  lwz       r3, 0x0(r3)
	  bl        -0x48B0
	  cmpwi     r3, 0
	  bge-      .loc_0x44
	  b         .loc_0x198

	.loc_0x44:
	  lhz       r0, 0x10(r28)
	  cmplwi    r0, 0x5
	  blt-      .loc_0x74
	  lwz       r3, 0x18(r1)
	  lhz       r5, 0x10(r3)
	  cmplw     r0, r5
	  bge-      .loc_0x74
	  lwz       r4, 0xC(r3)
	  lwz       r0, 0x8(r28)
	  mullw     r4, r5, r4
	  cmpw      r4, r0
	  bgt-      .loc_0x84

	.loc_0x74:
	  lwz       r3, 0x18(r1)
	  li        r4, -0x80
	  bl        -0x4840
	  b         .loc_0x198

	.loc_0x84:
	  bl        -0x2D64
	  lwz       r0, 0x4(r28)
	  lwz       r5, 0x18(r1)
	  rlwinm    r0,r0,6,0,25
	  add       r4, r3, r0
	  lwz       r3, 0xC(r5)
	  lhz       r0, 0x38(r4)
	  mullw     r3, r0, r3
	  cmpw      r3, r30
	  ble-      .loc_0xB8
	  add       r0, r30, r29
	  cmpw      r3, r0
	  bge-      .loc_0xC8

	.loc_0xB8:
	  addi      r3, r5, 0
	  li        r4, -0xB
	  bl        -0x4884
	  b         .loc_0x198

	.loc_0xC8:
	  stw       r28, 0xC0(r5)
	  stw       r29, 0xC(r28)
	  lwz       r0, 0x8(r28)
	  cmpw      r30, r0
	  bge-      .loc_0x118
	  li        r0, 0
	  stw       r0, 0x8(r28)
	  lhz       r0, 0x36(r4)
	  sth       r0, 0x10(r28)
	  lhz       r4, 0x10(r28)
	  cmplwi    r4, 0x5
	  blt-      .loc_0x108
	  lwz       r3, 0x18(r1)
	  lhz       r0, 0x10(r3)
	  cmplw     r4, r0
	  blt-      .loc_0x118

	.loc_0x108:
	  lwz       r3, 0x18(r1)
	  li        r4, -0x6
	  bl        -0x48D4
	  b         .loc_0x198

	.loc_0x118:
	  lwz       r3, 0x18(r1)
	  bl        -0x3164
	  b         .loc_0x16C

	.loc_0x124:
	  lwz       r0, 0x8(r28)
	  add       r0, r0, r4
	  stw       r0, 0x8(r28)
	  lhz       r0, 0x10(r28)
	  rlwinm    r0,r0,1,0,30
	  lhzx      r0, r3, r0
	  sth       r0, 0x10(r28)
	  lhz       r5, 0x10(r28)
	  cmplwi    r5, 0x5
	  blt-      .loc_0x15C
	  lwz       r4, 0x18(r1)
	  lhz       r0, 0x10(r4)
	  cmplw     r5, r0
	  blt-      .loc_0x16C

	.loc_0x15C:
	  lwz       r3, 0x18(r1)
	  li        r4, -0x6
	  bl        -0x4928
	  b         .loc_0x198

	.loc_0x16C:
	  lwz       r4, 0x18(r1)
	  lwz       r5, 0x8(r28)
	  lwz       r4, 0xC(r4)
	  subi      r0, r4, 0x1
	  andc      r0, r30, r0
	  cmplw     r5, r0
	  blt+      .loc_0x124
	  stw       r30, 0x8(r28)
	  li        r3, 0
	  lwz       r0, 0x18(r1)
	  stw       r0, 0x0(r31)

	.loc_0x198:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DA000
 * Size:	000130
 */
void ReadCallback(int slotIndex, int p2)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stmw      r27, 0x14(r1)
	  addi      r29, r3, 0
	  lis       r3, 0x804F
	  mulli     r5, r29, 0x110
	  addi      r0, r3, 0x5AF0
	  mr.       r30, r4
	  add       r31, r0, r5
	  blt-      .loc_0xF0
	  lwz       r28, 0xC0(r31)
	  lwz       r4, 0xC(r28)
	  cmpwi     r4, 0
	  bge-      .loc_0x44
	  li        r30, -0xE
	  b         .loc_0xF0

	.loc_0x44:
	  lwz       r5, 0xC(r31)
	  lwz       r6, 0x8(r28)
	  subi      r0, r5, 0x1
	  not       r3, r0
	  add       r0, r6, r5
	  and       r0, r3, r0
	  sub       r27, r0, r6
	  sub       r0, r4, r27
	  stw       r0, 0xC(r28)
	  lwz       r0, 0xC(r28)
	  cmpwi     r0, 0
	  ble-      .loc_0xF0
	  mr        r3, r31
	  bl        -0x3278
	  lwz       r0, 0x8(r28)
	  add       r0, r0, r27
	  stw       r0, 0x8(r28)
	  lhz       r0, 0x10(r28)
	  rlwinm    r0,r0,1,0,30
	  lhzx      r0, r3, r0
	  sth       r0, 0x10(r28)
	  lhz       r3, 0x10(r28)
	  cmplwi    r3, 0x5
	  blt-      .loc_0xB0
	  lhz       r0, 0x10(r31)
	  cmplw     r3, r0
	  blt-      .loc_0xB8

	.loc_0xB0:
	  li        r30, -0x6
	  b         .loc_0xF0

	.loc_0xB8:
	  lwz       r5, 0xC(r28)
	  lwz       r0, 0xC(r31)
	  cmpw      r5, r0
	  bge-      .loc_0xCC
	  b         .loc_0xD0

	.loc_0xCC:
	  mr        r5, r0

	.loc_0xD0:
	  mullw     r4, r0, r3
	  lwz       r6, 0xB4(r31)
	  lis       r3, 0x800E
	  subi      r7, r3, 0x6000
	  addi      r3, r29, 0
	  bl        -0x3488
	  mr.       r30, r3
	  bge-      .loc_0x11C

	.loc_0xF0:
	  lwz       r27, 0xD0(r31)
	  li        r0, 0
	  addi      r3, r31, 0
	  stw       r0, 0xD0(r31)
	  mr        r4, r30
	  bl        -0x4A80
	  addi      r12, r27, 0
	  mtlr      r12
	  addi      r3, r29, 0
	  addi      r4, r30, 0
	  blrl

	.loc_0x11C:
	  lmw       r27, 0x14(r1)
	  lwz       r0, 0x2C(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DA130
 * Size:	000144
 */
void CARDReadAsync(CARDFileInfo* fileInfo, unknown p2, unknown p3, unknown p4, unknown p5)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  rlwinm.   r0,r6,0,23,31
	  stwu      r1, -0x30(r1)
	  stw       r31, 0x2C(r1)
	  addi      r31, r5, 0
	  stw       r30, 0x28(r1)
	  addi      r30, r4, 0
	  stw       r29, 0x24(r1)
	  addi      r29, r3, 0
	  stw       r28, 0x20(r1)
	  addi      r28, r7, 0
	  bne-      .loc_0x3C
	  rlwinm.   r0,r31,0,23,31
	  beq-      .loc_0x44

	.loc_0x3C:
	  li        r3, -0x80
	  b         .loc_0x124

	.loc_0x44:
	  addi      r3, r29, 0
	  addi      r4, r31, 0
	  addi      r5, r6, 0
	  addi      r6, r1, 0x1C
	  bl        -0x33C
	  cmpwi     r3, 0
	  bge-      .loc_0x64
	  b         .loc_0x124

	.loc_0x64:
	  lwz       r3, 0x1C(r1)
	  bl        -0x3030
	  lwz       r0, 0x4(r29)
	  rlwinm    r0,r0,6,0,25
	  add       r4, r3, r0
	  lwz       r3, 0x1C(r1)
	  bl        -0x960
	  mr.       r4, r3
	  bge-      .loc_0x94
	  lwz       r3, 0x1C(r1)
	  bl        -0x4B38
	  b         .loc_0x124

	.loc_0x94:
	  addi      r3, r30, 0
	  addi      r4, r31, 0
	  bl        0x12520
	  cmplwi    r28, 0
	  beq-      .loc_0xB0
	  mr        r0, r28
	  b         .loc_0xB8

	.loc_0xB0:
	  lis       r3, 0x800D
	  addi      r0, r3, 0x466C

	.loc_0xB8:
	  lwz       r3, 0x1C(r1)
	  stw       r0, 0xD0(r3)
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0x8(r29)
	  lwz       r5, 0xC(r3)
	  subi      r0, r5, 0x1
	  and       r8, r4, r0
	  sub       r3, r5, r8
	  cmpw      r31, r3
	  bge-      .loc_0xE4
	  mr        r3, r31

	.loc_0xE4:
	  lhz       r0, 0x10(r29)
	  lis       r4, 0x800E
	  addi      r31, r3, 0
	  lwz       r3, 0x0(r29)
	  mullw     r0, r5, r0
	  subi      r7, r4, 0x6000
	  addi      r5, r31, 0
	  addi      r6, r30, 0
	  add       r4, r8, r0
	  bl        -0x35DC
	  mr.       r29, r3
	  bge-      .loc_0x120
	  lwz       r3, 0x1C(r1)
	  mr        r4, r29
	  bl        -0x4BC8

	.loc_0x120:
	  mr        r3, r29

	.loc_0x124:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DA274
 * Size:	000048
 */
void CARDRead(CARDFileInfo* fileInfo, unknown p2, unknown p3, unknown p4)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r7, 0x800D
	  stw       r0, 0x4(r1)
	  addi      r7, r7, 0x4670
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r3, 0
	  bl        -0x160
	  cmpwi     r3, 0
	  bge-      .loc_0x2C
	  b         .loc_0x34

	.loc_0x2C:
	  lwz       r3, 0x0(r31)
	  bl        -0x4A6C

	.loc_0x34:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void CARDCancel(void)
{
	// UNUSED FUNCTION
}
