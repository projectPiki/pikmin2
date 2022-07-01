#include "Dolphin/card.h"

/*
 * --INFO--
 * Address:	800D7168
 * Size:	000008
 */
CARDDirectoryBlock* __CARDGetDirBlock(CARDBlock* block)
{
	return block->_084;
	/*
	.loc_0x0:
	  lwz       r3, 0x84(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D7170
 * Size:	0000D0
 */
void WriteCallback(int slotIndex, int p2)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr.       r30, r4
	  stw       r29, 0x14(r1)
	  addi      r29, r3, 0
	  mulli     r5, r29, 0x110
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5AF0
	  add       r31, r0, r5
	  blt-      .loc_0x74
	  lwz       r3, 0x80(r31)
	  lwz       r0, 0x84(r31)
	  addi      r4, r3, 0x2000
	  cmplw     r0, r4
	  addi      r0, r3, 0x4000
	  bne-      .loc_0x60
	  stw       r0, 0x84(r31)
	  mr        r3, r0
	  li        r5, 0x2000
	  bl        -0xD202C
	  b         .loc_0x74

	.loc_0x60:
	  stw       r4, 0x84(r31)
	  addi      r3, r4, 0
	  mr        r4, r0
	  li        r5, 0x2000
	  bl        -0xD2044

	.loc_0x74:
	  lwz       r0, 0xD0(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x8C
	  addi      r3, r31, 0
	  addi      r4, r30, 0
	  bl        -0x1B74

	.loc_0x8C:
	  lwz       r0, 0xD8(r31)
	  cmplwi    r0, 0
	  mr        r12, r0
	  beq-      .loc_0xB4
	  li        r0, 0
	  mtlr      r12
	  stw       r0, 0xD8(r31)
	  addi      r3, r29, 0
	  addi      r4, r30, 0
	  blrl

	.loc_0xB4:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D7240
 * Size:	0000C8
 */
void EraseCallback(int slotIndex, int p2)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  addi      r31, r3, 0
	  lis       r3, 0x804F
	  stw       r30, 0x20(r1)
	  mulli     r5, r31, 0x110
	  stw       r29, 0x1C(r1)
	  addi      r0, r3, 0x5AF0
	  mr.       r29, r4
	  add       r30, r0, r5
	  blt-      .loc_0x6C
	  lwz       r5, 0x84(r30)
	  lis       r3, 0x800D
	  lwz       r0, 0x80(r30)
	  addi      r7, r3, 0x7170
	  lwz       r3, 0xC(r30)
	  sub       r0, r5, r0
	  rlwinm    r0,r0,19,13,31
	  mullw     r4, r3, r0
	  addi      r6, r5, 0
	  addi      r3, r31, 0
	  li        r5, 0x2000
	  bl        -0x504
	  mr.       r29, r3
	  bge-      .loc_0xAC

	.loc_0x6C:
	  lwz       r0, 0xD0(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x84
	  addi      r3, r30, 0
	  addi      r4, r29, 0
	  bl        -0x1C3C

	.loc_0x84:
	  lwz       r0, 0xD8(r30)
	  cmplwi    r0, 0
	  mr        r12, r0
	  beq-      .loc_0xAC
	  li        r0, 0
	  mtlr      r12
	  stw       r0, 0xD8(r30)
	  addi      r3, r31, 0
	  addi      r4, r29, 0
	  blrl

	.loc_0xAC:
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
 * Address:	800D7308
 * Size:	0000C4
 */
int __CARDUpdateDir(int slotIndex, CARDBlockD8Callback* d8Callback)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  stw       r30, 0x20(r1)
	  stw       r29, 0x1C(r1)
	  addi      r29, r4, 0
	  stw       r28, 0x18(r1)
	  addi      r28, r3, 0
	  mulli     r5, r28, 0x110
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5AF0
	  add       r30, r0, r5
	  lwz       r0, 0x0(r30)
	  cmpwi     r0, 0
	  bne-      .loc_0x48
	  li        r3, -0x3
	  b         .loc_0xA4

	.loc_0x48:
	  lwz       r31, 0x84(r30)
	  li        r4, 0x1FFC
	  lha       r5, 0x1FFA(r31)
	  addi      r6, r31, 0x1FC0
	  addi      r3, r31, 0
	  addi      r0, r5, 0x1
	  sth       r0, 0x1FFA(r31)
	  addi      r5, r6, 0x3C
	  addi      r6, r6, 0x3E
	  bl        .loc_0xC4
	  addi      r3, r31, 0
	  li        r4, 0x2000
	  bl        0x153C8
	  stw       r29, 0xD8(r30)
	  lis       r3, 0x800D
	  addi      r5, r3, 0x7240
	  lwz       r0, 0x80(r30)
	  mr        r3, r28
	  lwz       r4, 0xC(r30)
	  sub       r0, r31, r0
	  rlwinm    r0,r0,19,13,31
	  mullw     r4, r4, r0
	  bl        -0x1FA8

	.loc_0xA4:
	  lwz       r0, 0x2C(r1)
	  lwz       r31, 0x24(r1)
	  lwz       r30, 0x20(r1)
	  lwz       r29, 0x1C(r1)
	  lwz       r28, 0x18(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr

	.loc_0xC4:
	*/
}
