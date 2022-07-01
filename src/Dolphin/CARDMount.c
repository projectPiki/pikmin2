#include "Dolphin/card.h"

/*
 * --INFO--
 * Address:	800D8334
 * Size:	0000CC
 */
BOOL IsCard(unknown p1)
{
	/*
	.loc_0x0:
	  rlwinm.   r0,r3,0,0,15
	  beq-      .loc_0x28
	  subis     r0, r3, 0x8000
	  cmplwi    r0, 0x4
	  bne-      .loc_0x20
	  lhz       r0, -0x7D68(r13)
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x28

	.loc_0x20:
	  li        r3, 0
	  blr

	.loc_0x28:
	  rlwinm.   r0,r3,0,30,31
	  beq-      .loc_0x38
	  li        r3, 0
	  blr

	.loc_0x38:
	  rlwinm    r5,r3,0,24,29
	  cmpwi     r5, 0x20
	  beq-      .loc_0x88
	  bge-      .loc_0x6C
	  cmpwi     r5, 0x8
	  beq-      .loc_0x88
	  bge-      .loc_0x60
	  cmpwi     r5, 0x4
	  beq-      .loc_0x88
	  b         .loc_0x80

	.loc_0x60:
	  cmpwi     r5, 0x10
	  beq-      .loc_0x88
	  b         .loc_0x80

	.loc_0x6C:
	  cmpwi     r5, 0x80
	  beq-      .loc_0x88
	  bge-      .loc_0x80
	  cmpwi     r5, 0x40
	  beq-      .loc_0x88

	.loc_0x80:
	  li        r3, 0
	  blr

	.loc_0x88:
	  lis       r4, 0x804A
	  rlwinm    r3,r3,23,27,29
	  addi      r0, r4, 0x78E0
	  add       r3, r0, r3
	  lwz       r3, 0x0(r3)
	  cmpwi     r3, 0
	  bne-      .loc_0xAC
	  li        r3, 0
	  blr

	.loc_0xAC:
	  rlwinm    r0,r5,17,3,14
	  divwu     r0, r0, r3
	  cmplwi    r0, 0x8
	  bge-      .loc_0xC4
	  li        r3, 0
	  blr

	.loc_0xC4:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void __CARDDisable(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D8400
 * Size:	000038
 */
int CARDProbe(int slotIndex)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x8000
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  lbz       r0, 0x30E3(r4)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x24
	  li        r3, 0
	  b         .loc_0x28

	.loc_0x24:
	  bl        0x8090

	.loc_0x28:
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D8438
 * Size:	00017C
 */
int CARDProbeEx(int slotIndex, unknown p2, unknown p3)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x30(r1)
	  stmw      r27, 0x1C(r1)
	  mr.       r27, r3
	  addi      r28, r4, 0
	  addi      r31, r5, 0
	  blt-      .loc_0x28
	  cmpwi     r27, 0x2
	  blt-      .loc_0x30

	.loc_0x28:
	  li        r3, -0x80
	  b         .loc_0x168

	.loc_0x30:
	  lis       r3, 0x8000
	  lbz       r0, 0x30E3(r3)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x48
	  li        r3, -0x3
	  b         .loc_0x168

	.loc_0x48:
	  mulli     r4, r27, 0x110
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5AF0
	  add       r30, r0, r4
	  bl        0x167A8
	  addi      r29, r3, 0
	  addi      r3, r27, 0
	  bl        0x8098
	  cmpwi     r3, -0x1
	  bne-      .loc_0x78
	  li        r30, -0x3
	  b         .loc_0x15C

	.loc_0x78:
	  cmpwi     r3, 0
	  bne-      .loc_0x88
	  li        r30, -0x1
	  b         .loc_0x15C

	.loc_0x88:
	  lwz       r0, 0x0(r30)
	  cmpwi     r0, 0
	  beq-      .loc_0xD0
	  lwz       r0, 0x24(r30)
	  cmpwi     r0, 0x1
	  bge-      .loc_0xA8
	  li        r30, -0x1
	  b         .loc_0x15C

	.loc_0xA8:
	  cmplwi    r28, 0
	  beq-      .loc_0xB8
	  lhz       r0, 0x8(r30)
	  stw       r0, 0x0(r28)

	.loc_0xB8:
	  cmplwi    r31, 0
	  beq-      .loc_0xC8
	  lwz       r0, 0xC(r30)
	  stw       r0, 0x0(r31)

	.loc_0xC8:
	  li        r30, 0
	  b         .loc_0x15C

	.loc_0xD0:
	  mr        r3, r27
	  bl        0x8C34
	  rlwinm.   r0,r3,0,28,28
	  beq-      .loc_0xE8
	  li        r30, -0x2
	  b         .loc_0x15C

	.loc_0xE8:
	  addi      r3, r27, 0
	  addi      r5, r1, 0x14
	  li        r4, 0
	  bl        0x8C54
	  cmpwi     r3, 0
	  bne-      .loc_0x108
	  li        r30, -0x1
	  b         .loc_0x15C

	.loc_0x108:
	  lwz       r3, 0x14(r1)
	  bl        -0x210
	  cmpwi     r3, 0
	  beq-      .loc_0x158
	  cmplwi    r28, 0
	  beq-      .loc_0x12C
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,0,24,29
	  stw       r0, 0x0(r28)

	.loc_0x12C:
	  cmplwi    r31, 0
	  beq-      .loc_0x150
	  lwz       r4, 0x14(r1)
	  lis       r3, 0x804A
	  addi      r0, r3, 0x78E0
	  rlwinm    r3,r4,23,27,29
	  add       r3, r0, r3
	  lwz       r0, 0x0(r3)
	  stw       r0, 0x0(r31)

	.loc_0x150:
	  li        r30, 0
	  b         .loc_0x15C

	.loc_0x158:
	  li        r30, -0x2

	.loc_0x15C:
	  mr        r3, r29
	  bl        0x166C8
	  mr        r3, r30

	.loc_0x168:
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D85B4
 * Size:	000410
 */
int DoMount(int slotIndex)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x30(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  addi      r29, r3, 0
	  mulli     r4, r29, 0x110
	  stw       r28, 0x20(r1)
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5AF0
	  add       r3, r0, r4
	  lwz       r0, 0x24(r3)
	  addi      r31, r3, 0
	  cmpwi     r0, 0
	  bne-      .loc_0x2E8
	  addi      r3, r29, 0
	  addi      r5, r1, 0x18
	  li        r4, 0
	  bl        0x8B80
	  cmpwi     r3, 0
	  bne-      .loc_0x60
	  li        r30, -0x3
	  b         .loc_0x7C

	.loc_0x60:
	  lwz       r3, 0x18(r1)
	  bl        -0x2E4
	  cmpwi     r3, 0
	  beq-      .loc_0x78
	  li        r30, 0
	  b         .loc_0x7C

	.loc_0x78:
	  li        r30, -0x2

	.loc_0x7C:
	  cmpwi     r30, 0
	  blt-      .loc_0x3C4
	  lwz       r0, 0x18(r1)
	  lis       r4, 0x804A
	  addi      r4, r4, 0x78E0
	  stw       r0, 0x108(r31)
	  lis       r3, 0x804A
	  addi      r0, r3, 0x7900
	  lwz       r5, 0x18(r1)
	  addi      r3, r29, 0
	  rlwinm    r5,r5,0,24,29
	  sth       r5, 0x8(r31)
	  lwz       r5, 0x18(r1)
	  rlwinm    r5,r5,23,27,29
	  add       r4, r4, r5
	  lwz       r4, 0x0(r4)
	  stw       r4, 0xC(r31)
	  lhz       r5, 0x8(r31)
	  lwz       r4, 0xC(r31)
	  rlwinm    r5,r5,20,0,11
	  srawi     r5, r5, 0x3
	  addze     r5, r5
	  divw      r4, r5, r4
	  sth       r4, 0x10(r31)
	  lwz       r4, 0x18(r1)
	  rlwinm    r4,r4,26,27,29
	  add       r4, r0, r4
	  lwz       r0, 0x0(r4)
	  stw       r0, 0x14(r31)
	  bl        -0x3B34
	  mr.       r30, r3
	  blt-      .loc_0x3C4
	  addi      r3, r29, 0
	  addi      r4, r1, 0x14
	  bl        -0x3C38
	  mr.       r30, r3
	  blt-      .loc_0x3C4
	  mr        r3, r29
	  bl        0x7DEC
	  cmpwi     r3, 0
	  bne-      .loc_0x128
	  li        r30, -0x3
	  b         .loc_0x3C4

	.loc_0x128:
	  lbz       r0, 0x14(r1)
	  rlwinm.   r0,r0,0,25,25
	  bne-      .loc_0x244
	  addi      r3, r29, 0
	  addi      r4, r31, 0x18
	  bl        -0x2A5C
	  mr.       r30, r3
	  blt-      .loc_0x3C4
	  bl        0x18690
	  mulli     r0, r29, 0xC
	  add       r4, r3, r0
	  lbz       r0, 0x18(r31)
	  addi      r5, r31, 0x18
	  stb       r0, 0x0(r4)
	  addi      r8, r5, 0x2
	  addi      r9, r5, 0x3
	  lbz       r7, 0x18(r31)
	  addi      r10, r5, 0x4
	  lbz       r0, 0x19(r31)
	  addi      r11, r5, 0x5
	  addi      r12, r5, 0x6
	  stb       r0, 0x1(r4)
	  addi      r28, r5, 0x7
	  li        r5, 0x8
	  lbz       r0, 0x19(r31)
	  lbz       r6, 0x0(r8)
	  add       r0, r7, r0
	  stb       r6, 0x2(r4)
	  lbz       r7, 0x0(r8)
	  lbz       r6, 0x0(r9)
	  add       r0, r0, r7
	  stb       r6, 0x3(r4)
	  lbz       r7, 0x0(r9)
	  lbz       r6, 0x0(r10)
	  add       r0, r0, r7
	  stb       r6, 0x4(r4)
	  lbz       r7, 0x0(r10)
	  lbz       r6, 0x0(r11)
	  add       r0, r0, r7
	  stb       r6, 0x5(r4)
	  lbz       r7, 0x0(r11)
	  lbz       r6, 0x0(r12)
	  add       r0, r0, r7
	  stb       r6, 0x6(r4)
	  lbz       r7, 0x0(r12)
	  lbz       r6, 0x0(r28)
	  add       r0, r0, r7
	  stb       r6, 0x7(r4)
	  lbz       r6, 0x0(r28)
	  add       r0, r0, r6
	  b         .loc_0x3E0

	.loc_0x1F4:
	  subfic    r4, r5, 0xC
	  cmpwi     r5, 0xC
	  mtctr     r4
	  bge-      .loc_0x228

	.loc_0x204:
	  addi      r7, r5, 0x18
	  add       r7, r31, r7
	  lbz       r4, 0x0(r7)
	  addi      r5, r5, 0x1
	  stb       r4, 0x0(r6)
	  addi      r6, r6, 0x1
	  lbz       r4, 0x0(r7)
	  add       r0, r0, r4
	  bdnz+     .loc_0x204

	.loc_0x228:
	  add       r3, r3, r29
	  not       r0, r0
	  stb       r0, 0x26(r3)
	  li        r3, 0x1
	  bl        0x1895C
	  mr        r3, r30
	  b         .loc_0x3F0

	.loc_0x244:
	  li        r0, 0x1
	  stw       r0, 0x24(r31)
	  bl        0x1858C
	  mulli     r0, r29, 0xC
	  addi      r30, r3, 0
	  add       r5, r30, r0
	  lbz       r4, 0x0(r5)
	  li        r6, 0x8
	  lbz       r0, 0x1(r5)
	  lbz       r3, 0x2(r5)
	  add       r28, r4, r0
	  lbz       r0, 0x3(r5)
	  add       r28, r28, r3
	  lbz       r3, 0x4(r5)
	  add       r28, r28, r0
	  lbz       r0, 0x5(r5)
	  add       r28, r28, r3
	  lbz       r3, 0x6(r5)
	  add       r28, r28, r0
	  lbz       r0, 0x7(r5)
	  add       r28, r28, r3
	  add       r28, r28, r0
	  b         .loc_0x3E8

	.loc_0x2A0:
	  subfic    r0, r6, 0xC
	  cmpwi     r6, 0xC
	  mtctr     r0
	  bge-      .loc_0x2C0

	.loc_0x2B0:
	  lbz       r0, 0x0(r3)
	  addi      r3, r3, 0x1
	  add       r28, r28, r0
	  bdnz+     .loc_0x2B0

	.loc_0x2C0:
	  li        r3, 0
	  bl        0x188D0
	  add       r3, r30, r29
	  not       r0, r28
	  lbz       r3, 0x26(r3)
	  rlwinm    r0,r0,0,24,31
	  cmplw     r3, r0
	  beq-      .loc_0x2E8
	  li        r30, -0x5
	  b         .loc_0x3C4

	.loc_0x2E8:
	  lwz       r0, 0x24(r31)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x378
	  lwz       r3, 0x108(r31)
	  subis     r0, r3, 0x8000
	  cmplwi    r0, 0x4
	  bne-      .loc_0x334
	  bl        0x184D4
	  mulli     r0, r29, 0xC
	  lhzx      r28, r3, r0
	  li        r3, 0
	  bl        0x18880
	  lhz       r0, -0x7D68(r13)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x32C
	  cmplw     r28, r0
	  beq-      .loc_0x334

	.loc_0x32C:
	  li        r30, -0x2
	  b         .loc_0x3C4

	.loc_0x334:
	  li        r0, 0x2
	  stw       r0, 0x24(r31)
	  addi      r3, r29, 0
	  li        r4, 0x1
	  bl        -0x3F38
	  mr.       r30, r3
	  blt-      .loc_0x3C4
	  lis       r3, 0x800D
	  addi      r4, r3, 0x477C
	  addi      r3, r29, 0
	  bl        0x79B4
	  mr        r3, r29
	  bl        0x874C
	  lis       r4, 0x1
	  lwz       r3, 0x80(r31)
	  subi      r4, r4, 0x6000
	  bl        0x13DC4

	.loc_0x378:
	  lwz       r4, 0x24(r31)
	  lis       r3, 0x800E
	  lwz       r0, 0xC(r31)
	  subi      r7, r3, 0x763C
	  subi      r3, r4, 0x2
	  mullw     r4, r0, r3
	  lwz       r5, 0x80(r31)
	  rlwinm    r0,r3,13,0,18
	  add       r6, r5, r0
	  addi      r3, r29, 0
	  li        r5, 0x2000
	  bl        -0x1CFC
	  mr.       r28, r3
	  bge-      .loc_0x3BC
	  addi      r3, r31, 0
	  addi      r4, r28, 0
	  bl        -0x32E8

	.loc_0x3BC:
	  mr        r3, r28
	  b         .loc_0x3F0

	.loc_0x3C4:
	  mr        r3, r29
	  bl        0x86E8
	  addi      r3, r29, 0
	  addi      r4, r30, 0
	  bl        0x35C
	  mr        r3, r30
	  b         .loc_0x3F0

	.loc_0x3E0:
	  addi      r6, r4, 0x8
	  b         .loc_0x1F4

	.loc_0x3E8:
	  addi      r3, r5, 0x8
	  b         .loc_0x2A0

	.loc_0x3F0:
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
 * Address:	800D89C4
 * Size:	000138
 */
void __CARDMountCallback(int slotIndex, int p2)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  addi      r29, r4, 0
	  cmpwi     r29, -0x3
	  stw       r28, 0x10(r1)
	  addi      r28, r3, 0
	  mulli     r5, r28, 0x110
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5AF0
	  add       r31, r0, r5
	  beq-      .loc_0xE0
	  bge-      .loc_0x4C
	  cmpwi     r29, -0x5
	  beq-      .loc_0xE0
	  b         .loc_0xEC

	.loc_0x4C:
	  cmpwi     r29, 0x1
	  beq-      .loc_0x9C
	  bge-      .loc_0xEC
	  cmpwi     r29, 0
	  bge-      .loc_0x64
	  b         .loc_0xEC

	.loc_0x64:
	  lwz       r3, 0x24(r31)
	  addi      r0, r3, 0x1
	  cmpwi     r0, 0x7
	  stw       r0, 0x24(r31)
	  bge-      .loc_0x8C
	  mr        r3, r28
	  bl        -0x48C
	  mr.       r29, r3
	  blt-      .loc_0xEC
	  b         .loc_0x118

	.loc_0x8C:
	  mr        r3, r31
	  bl        -0xD90
	  mr        r29, r3
	  b         .loc_0xEC

	.loc_0x9C:
	  lis       r3, 0x800E
	  subi      r0, r3, 0x763C
	  lis       r3, 0x800D
	  stw       r0, 0xDC(r31)
	  addi      r5, r3, 0x493C
	  addi      r3, r28, 0
	  li        r4, 0
	  bl        0x84F4
	  cmpwi     r3, 0
	  beq-      .loc_0x118
	  li        r0, 0
	  stw       r0, 0xDC(r31)
	  mr        r3, r28
	  bl        -0x4E0
	  mr.       r29, r3
	  blt-      .loc_0xEC
	  b         .loc_0x118

	.loc_0xE0:
	  addi      r3, r28, 0
	  addi      r4, r29, 0
	  bl        0x238

	.loc_0xEC:
	  lwz       r30, 0xD0(r31)
	  li        r0, 0
	  addi      r3, r31, 0
	  stw       r0, 0xD0(r31)
	  mr        r4, r29
	  bl        -0x3440
	  addi      r12, r30, 0
	  mtlr      r12
	  addi      r3, r28, 0
	  addi      r4, r29, 0
	  blrl

	.loc_0x118:
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
 * Address:	800D8AFC
 * Size:	0001A0
 */
int CARDMountAsync(int slotIndex, CARDMemoryCard* memoryCard, CARDBlockC4Callback* c4Callback, CARDSyncCallback* syncCallback)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x30(r1)
	  stmw      r26, 0x18(r1)
	  mr.       r30, r3
	  addi      r26, r4, 0
	  addi      r27, r5, 0
	  addi      r29, r6, 0
	  blt-      .loc_0x2C
	  cmpwi     r30, 0x2
	  blt-      .loc_0x34

	.loc_0x2C:
	  li        r3, -0x80
	  b         .loc_0x18C

	.loc_0x34:
	  lis       r3, 0x8000
	  lbz       r0, 0x30E3(r3)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x4C
	  li        r3, -0x3
	  b         .loc_0x18C

	.loc_0x4C:
	  mulli     r4, r30, 0x110
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5AF0
	  add       r31, r0, r4
	  bl        0x160E0
	  lwz       r0, 0x4(r31)
	  addi      r28, r3, 0
	  cmpwi     r0, -0x1
	  bne-      .loc_0x80
	  mr        r3, r28
	  bl        0x160F0
	  li        r3, -0x1
	  b         .loc_0x18C

	.loc_0x80:
	  lwz       r0, 0x0(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0xAC
	  mr        r3, r30
	  bl        0x85B4
	  rlwinm.   r0,r3,0,28,28
	  beq-      .loc_0xAC
	  mr        r3, r28
	  bl        0x160C4
	  li        r3, -0x2
	  b         .loc_0x18C

	.loc_0xAC:
	  li        r0, -0x1
	  stw       r0, 0x4(r31)
	  cmplwi    r29, 0
	  stw       r26, 0x80(r31)
	  stw       r27, 0xC4(r31)
	  beq-      .loc_0xCC
	  mr        r0, r29
	  b         .loc_0xD4

	.loc_0xCC:
	  lis       r3, 0x800D
	  addi      r0, r3, 0x466C

	.loc_0xD4:
	  stw       r0, 0xD0(r31)
	  li        r0, 0
	  stw       r0, 0xCC(r31)
	  lwz       r0, 0x0(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x11C
	  lis       r3, 0x800D
	  addi      r4, r3, 0x46A4
	  addi      r3, r30, 0
	  bl        0x79F4
	  cmpwi     r3, 0
	  bne-      .loc_0x11C
	  li        r0, -0x3
	  stw       r0, 0x4(r31)
	  mr        r3, r28
	  bl        0x16054
	  li        r3, -0x3
	  b         .loc_0x18C

	.loc_0x11C:
	  li        r29, 0
	  stw       r29, 0x24(r31)
	  li        r0, 0x1
	  addi      r3, r30, 0
	  stw       r0, 0x0(r31)
	  li        r4, 0
	  bl        0x7694
	  addi      r3, r31, 0xE0
	  bl        0x1319C
	  stw       r29, 0x84(r31)
	  mr        r3, r28
	  stw       r29, 0x88(r31)
	  bl        0x16018
	  lis       r3, 0x800E
	  subi      r0, r3, 0x763C
	  lis       r3, 0x800D
	  stw       r0, 0xDC(r31)
	  addi      r5, r3, 0x493C
	  addi      r3, r30, 0
	  li        r4, 0
	  bl        0x8308
	  cmpwi     r3, 0
	  bne-      .loc_0x180
	  li        r3, 0
	  b         .loc_0x18C

	.loc_0x180:
	  stw       r29, 0xDC(r31)
	  mr        r3, r30
	  bl        -0x6D0

	.loc_0x18C:
	  lmw       r26, 0x18(r1)
	  lwz       r0, 0x34(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D8C9C
 * Size:	000048
 */
void CARDMount(int slotIndex, CARDMemoryCard* memoryCard, CARDBlockC4Callback* c4Callback)
{
	if (-1 < CARDMountAsync(slotIndex, memoryCard, c4Callback, __CARDSyncCallback)) {
		__CARDSync(slotIndex);
	}
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r6, 0x800D
	  stw       r0, 0x4(r1)
	  addi      r6, r6, 0x4670
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r3, 0
	  bl        -0x1BC
	  cmpwi     r3, 0
	  bge-      .loc_0x2C
	  b         .loc_0x34

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x3494

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
 * Address:	800D8CE4
 * Size:	00009C
 */
void DoUnmount(int slotIndex, int p2)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  addi      r29, r4, 0
	  stw       r28, 0x10(r1)
	  addi      r28, r3, 0
	  mulli     r5, r28, 0x110
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5AF0
	  add       r31, r0, r5
	  bl        0x15F20
	  lwz       r0, 0x0(r31)
	  addi      r30, r3, 0
	  cmpwi     r0, 0
	  beq-      .loc_0x74
	  addi      r3, r28, 0
	  li        r4, 0
	  bl        0x7590
	  mr        r3, r28
	  bl        0x79B8
	  addi      r3, r31, 0xE0
	  bl        0x13090
	  li        r0, 0
	  stw       r0, 0x0(r31)
	  stw       r29, 0x4(r31)
	  stw       r0, 0x24(r31)

	.loc_0x74:
	  mr        r3, r30
	  bl        0x15F04
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
 * Address:	800D8D80
 * Size:	0000AC
 */
int CARDUnmount(int slotIndex)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  addi      r4, r1, 0xC
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  addi      r29, r3, 0
	  bl        -0x37D4
	  cmpwi     r3, 0
	  bge-      .loc_0x30
	  b         .loc_0x90

	.loc_0x30:
	  mulli     r4, r29, 0x110
	  lis       r3, 0x804F
	  addi      r0, r3, 0x5AF0
	  add       r30, r0, r4
	  bl        0x15E78
	  lwz       r0, 0x0(r30)
	  addi      r31, r3, 0
	  cmpwi     r0, 0
	  beq-      .loc_0x84
	  addi      r3, r29, 0
	  li        r4, 0
	  bl        0x74E8
	  mr        r3, r29
	  bl        0x7910
	  addi      r3, r30, 0xE0
	  bl        0x12FE8
	  li        r3, 0
	  stw       r3, 0x0(r30)
	  li        r0, -0x3
	  stw       r0, 0x4(r30)
	  stw       r3, 0x24(r30)

	.loc_0x84:
	  mr        r3, r31
	  bl        0x15E58
	  li        r3, 0

	.loc_0x90:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  addi      r1, r1, 0x20
	  mtlr      r0
	  blr
	*/
}
