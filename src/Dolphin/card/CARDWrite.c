#include "Dolphin/card.h"

/*
 * --INFO--
 * Address:	800DA2BC
 * Size:	000170
 */
void WriteCallback(int slotIndex, int resultCode)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  addi      r30, r3, 0
	  lis       r3, 0x804F
	  stw       r29, 0x14(r1)
	  mulli     r5, r30, 0x110
	  stw       r28, 0x10(r1)
	  addi      r0, r3, 0x5AF0
	  mr.       r28, r4
	  add       r31, r0, r5
	  blt-      .loc_0x124
	  lwz       r29, 0xC0(r31)
	  lwz       r3, 0xC(r29)
	  cmpwi     r3, 0
	  bge-      .loc_0x50
	  li        r28, -0xE
	  b         .loc_0x124

	.loc_0x50:
	  lwz       r0, 0xC(r31)
	  sub       r0, r3, r0
	  stw       r0, 0xC(r29)
	  lwz       r0, 0xC(r29)
	  cmpwi     r0, 0
	  bgt-      .loc_0xB8
	  mr        r3, r31
	  bl        -0x31C0
	  lwz       r5, 0x4(r29)
	  lis       r4, 0x8000
	  lwz       r0, 0xF8(r4)
	  rlwinm    r4,r5,6,0,25
	  add       r28, r3, r4
	  rlwinm    r29,r0,30,2,31
	  bl        0x1884C
	  addi      r6, r29, 0
	  li        r5, 0
	  bl        -0x1858C
	  stw       r4, 0x28(r28)
	  li        r0, 0
	  addi      r3, r30, 0
	  lwz       r4, 0xD0(r31)
	  stw       r0, 0xD0(r31)
	  bl        -0x3060
	  mr        r28, r3
	  b         .loc_0x11C

	.loc_0xB8:
	  mr        r3, r31
	  bl        -0x3578
	  lwz       r4, 0x8(r29)
	  lwz       r0, 0xC(r31)
	  add       r0, r4, r0
	  stw       r0, 0x8(r29)
	  lhz       r0, 0x10(r29)
	  rlwinm    r0,r0,1,0,30
	  lhzx      r0, r3, r0
	  sth       r0, 0x10(r29)
	  lhz       r4, 0x10(r29)
	  cmplwi    r4, 0x5
	  blt-      .loc_0xF8
	  lhz       r0, 0x10(r31)
	  cmplw     r4, r0
	  blt-      .loc_0x100

	.loc_0xF8:
	  li        r28, -0x6
	  b         .loc_0x124

	.loc_0x100:
	  lwz       r0, 0xC(r31)
	  lis       r3, 0x800E
	  subi      r5, r3, 0x5BD4
	  mullw     r4, r0, r4
	  addi      r3, r30, 0
	  bl        -0x4FD0
	  mr        r28, r3

	.loc_0x11C:
	  cmpwi     r28, 0
	  bge-      .loc_0x150

	.loc_0x124:
	  lwz       r29, 0xD0(r31)
	  li        r0, 0
	  addi      r3, r31, 0
	  stw       r0, 0xD0(r31)
	  mr        r4, r28
	  bl        -0x4D70
	  addi      r12, r29, 0
	  mtlr      r12
	  addi      r3, r30, 0
	  addi      r4, r28, 0
	  blrl

	.loc_0x150:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DA42C
 * Size:	0000B0
 */
void EraseCallback(int slotIndex, int p2)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr.       r29, r4
	  stw       r28, 0x10(r1)
	  addi      r28, r3, 0
	  mulli     r5, r28, 0x110
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5AF0
	  add       r31, r0, r5
	  blt-      .loc_0x64
	  lwz       r4, 0xC0(r31)
	  lis       r3, 0x800E
	  subi      r7, r3, 0x5D44
	  lwz       r5, 0xC(r31)
	  lhz       r0, 0x10(r4)
	  lwz       r6, 0xB4(r31)
	  addi      r3, r28, 0
	  mullw     r4, r5, r0
	  bl        -0x36E8
	  mr.       r29, r3
	  bge-      .loc_0x90

	.loc_0x64:
	  lwz       r30, 0xD0(r31)
	  li        r0, 0
	  addi      r3, r31, 0
	  stw       r0, 0xD0(r31)
	  mr        r4, r29
	  bl        -0x4E20
	  addi      r12, r30, 0
	  mtlr      r12
	  addi      r3, r28, 0
	  addi      r4, r29, 0
	  blrl

	.loc_0x90:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DA4DC
 * Size:	000114
 */
void CARDWriteAsync(CARDFileInfo* fileInfo, unknown p2, unknown p3, unknown p4, CARDSyncCallback* syncCallback)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x38(r1)
	  stmw      r27, 0x24(r1)
	  addi      r28, r6, 0
	  addi      r27, r5, 0
	  addi      r31, r4, 0
	  addi      r30, r3, 0
	  addi      r29, r7, 0
	  addi      r4, r27, 0
	  addi      r5, r28, 0
	  addi      r6, r1, 0x1C
	  bl        -0x6C4
	  cmpwi     r3, 0
	  bge-      .loc_0x40
	  b         .loc_0x100

	.loc_0x40:
	  lwz       r3, 0x1C(r1)
	  lwz       r4, 0xC(r3)
	  subi      r4, r4, 0x1
	  and.      r0, r28, r4
	  bne-      .loc_0x5C
	  and.      r0, r27, r4
	  beq-      .loc_0x68

	.loc_0x5C:
	  li        r4, -0x80
	  bl        -0x4EB8
	  b         .loc_0x100

	.loc_0x68:
	  bl        -0x33DC
	  lwz       r0, 0x4(r30)
	  rlwinm    r0,r0,6,0,25
	  add       r4, r3, r0
	  lwz       r3, 0x1C(r1)
	  bl        -0xE40
	  mr.       r4, r3
	  bge-      .loc_0x94
	  lwz       r3, 0x1C(r1)
	  bl        -0x4EE4
	  b         .loc_0x100

	.loc_0x94:
	  addi      r3, r31, 0
	  addi      r4, r27, 0
	  bl        0x121D0
	  cmplwi    r29, 0
	  beq-      .loc_0xB0
	  mr        r0, r29
	  b         .loc_0xB8

	.loc_0xB0:
	  lis       r3, 0x800D
	  addi      r0, r3, 0x466C

	.loc_0xB8:
	  lwz       r4, 0x1C(r1)
	  lis       r3, 0x800E
	  subi      r5, r3, 0x5BD4
	  stw       r0, 0xD0(r4)
	  lwz       r3, 0x1C(r1)
	  stw       r31, 0xB4(r3)
	  lwz       r3, 0x1C(r1)
	  lhz       r0, 0x10(r30)
	  lwz       r4, 0xC(r3)
	  lwz       r3, 0x0(r30)
	  mullw     r4, r4, r0
	  bl        -0x51C0
	  mr.       r30, r3
	  bge-      .loc_0xFC
	  lwz       r3, 0x1C(r1)
	  mr        r4, r30
	  bl        -0x4F50

	.loc_0xFC:
	  mr        r3, r30

	.loc_0x100:
	  lmw       r27, 0x24(r1)
	  lwz       r0, 0x3C(r1)
	  addi      r1, r1, 0x38
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800DA5F0
 * Size:	000048
 */
void CARDWrite(CARDFileInfo* fileInfo, unknown p2, unknown p3, unknown p4)
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
	  bl        -0x130
	  cmpwi     r3, 0
	  bge-      .loc_0x2C
	  b         .loc_0x34

	.loc_0x2C:
	  lwz       r3, 0x0(r31)
	  bl        -0x4DE8

	.loc_0x34:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}
