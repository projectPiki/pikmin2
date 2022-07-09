#include "Dolphin/os.h"

/*
 * --INFO--
 * Address:	800F06D0
 * Size:	0000F4
 */
void __OSResetSWInterruptHandler(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  stw       r30, 0x20(r1)
	  stw       r29, 0x1C(r1)
	  bl        0x24C8
	  lis       r5, 0x8000
	  stw       r4, -0x702C(r13)
	  lwz       r0, 0xF8(r5)
	  lis       r4, 0x431C
	  subi      r4, r4, 0x217D
	  stw       r3, -0x7030(r13)
	  rlwinm    r0,r0,30,2,31
	  mulhwu    r0, r4, r0
	  rlwinm    r0,r0,17,15,31
	  mulli     r0, r0, 0x64
	  rlwinm    r29,r0,29,3,31
	  li        r30, 0
	  lis       r31, 0xCC00

	.loc_0x50:
	  bl        0x2490
	  lwz       r6, -0x702C(r13)
	  xoris     r5, r30, 0x8000
	  lwz       r0, -0x7030(r13)
	  subc      r4, r4, r6
	  subfe     r0, r0, r3
	  xoris     r3, r0, 0x8000
	  subc      r0, r4, r29
	  subfe     r5, r5, r3
	  subfe     r5, r3, r3
	  neg.      r5, r5
	  beq-      .loc_0x8C
	  lwz       r0, 0x3000(r31)
	  rlwinm.   r0,r0,0,15,15
	  beq+      .loc_0x50

	.loc_0x8C:
	  lis       r3, 0xCC00
	  lwz       r0, 0x3000(r3)
	  rlwinm.   r0,r0,0,15,15
	  bne-      .loc_0xCC
	  li        r0, 0x1
	  stw       r0, -0x7044(r13)
	  li        r3, 0x200
	  stw       r0, -0x7040(r13)
	  bl        -0x177C
	  lwz       r12, -0x7048(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0xCC
	  li        r0, 0
	  mtlr      r12
	  stw       r0, -0x7048(r13)
	  blrl

	.loc_0xCC:
	  li        r0, 0x2
	  lis       r3, 0xCC00
	  stw       r0, 0x3000(r3)
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
 * Address:	........
 * Size:	000074
 */
void OSSetResetCallback(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F07C4
 * Size:	000298
 */
void OSGetResetButtonState(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  stw       r29, 0xC(r1)
	  bl        -0x1BA4
	  mr        r30, r3
	  bl        0x23CC
	  lis       r5, 0xCC00
	  lwz       r0, 0x3000(r5)
	  rlwinm.   r0,r0,0,15,15
	  bne-      .loc_0x10C
	  lwz       r0, -0x7044(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0x7C
	  lwz       r0, -0x7038(r13)
	  li        r6, 0
	  lwz       r5, -0x7034(r13)
	  li        r7, 0x1
	  xor       r0, r0, r6
	  xor       r5, r5, r6
	  stw       r7, -0x7044(r13)
	  or.       r0, r5, r0
	  beq-      .loc_0x68
	  b         .loc_0x6C

	.loc_0x68:
	  mr        r7, r6

	.loc_0x6C:
	  stw       r4, -0x702C(r13)
	  mr        r29, r7
	  stw       r3, -0x7030(r13)
	  b         .loc_0x1C0

	.loc_0x7C:
	  lwz       r0, -0x7038(r13)
	  li        r9, 0
	  lwz       r5, -0x7034(r13)
	  li        r10, 0x1
	  xor       r0, r0, r9
	  xor       r5, r5, r9
	  or.       r0, r5, r0
	  bne-      .loc_0xF0
	  lis       r6, 0x8000
	  lwz       r5, -0x702C(r13)
	  lwz       r7, 0xF8(r6)
	  lis       r6, 0x431C
	  subi      r8, r6, 0x217D
	  lwz       r0, -0x7030(r13)
	  rlwinm    r6,r7,30,2,31
	  mulhwu    r6, r8, r6
	  rlwinm    r6,r6,17,15,31
	  mulli     r6, r6, 0x64
	  subc      r7, r4, r5
	  subfe     r0, r0, r3
	  rlwinm    r8,r6,29,3,31
	  xoris     r5, r0, 0x8000
	  xoris     r6, r9, 0x8000
	  subc      r0, r8, r7
	  subfe     r5, r5, r6
	  subfe     r5, r6, r6
	  neg.      r5, r5
	  bne-      .loc_0xF0
	  mr        r10, r9

	.loc_0xF0:
	  cmpwi     r10, 0
	  beq-      .loc_0x100
	  li        r0, 0x1
	  b         .loc_0x104

	.loc_0x100:
	  li        r0, 0

	.loc_0x104:
	  mr        r29, r0
	  b         .loc_0x1C0

	.loc_0x10C:
	  lwz       r0, -0x7044(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x148
	  lwz       r5, -0x7040(r13)
	  li        r0, 0
	  stw       r0, -0x7044(r13)
	  cmpwi     r5, 0
	  addi      r29, r5, 0
	  beq-      .loc_0x13C
	  stw       r4, -0x7034(r13)
	  stw       r3, -0x7038(r13)
	  b         .loc_0x1C0

	.loc_0x13C:
	  stw       r0, -0x7034(r13)
	  stw       r0, -0x7038(r13)
	  b         .loc_0x1C0

	.loc_0x148:
	  lwz       r6, -0x7038(r13)
	  li        r8, 0
	  lwz       r7, -0x7034(r13)
	  xor       r0, r6, r8
	  xor       r5, r7, r8
	  or.       r0, r5, r0
	  beq-      .loc_0x1B0
	  lis       r5, 0x8000
	  lwz       r0, 0xF8(r5)
	  lis       r5, 0x1062
	  addi      r5, r5, 0x4DD3
	  rlwinm    r0,r0,30,2,31
	  mulhwu    r0, r5, r0
	  rlwinm    r0,r0,26,6,31
	  mulli     r0, r0, 0x28
	  subc      r7, r4, r7
	  subfe     r5, r6, r3
	  xoris     r6, r5, 0x8000
	  xoris     r5, r8, 0x8000
	  subc      r0, r7, r0
	  subfe     r5, r5, r6
	  subfe     r5, r6, r6
	  neg.      r5, r5
	  beq-      .loc_0x1B0
	  li        r29, 0x1
	  b         .loc_0x1C0

	.loc_0x1B0:
	  li        r0, 0
	  stw       r0, -0x7034(r13)
	  li        r29, 0
	  stw       r0, -0x7038(r13)

	.loc_0x1C0:
	  lis       r5, 0x8000
	  stw       r29, -0x7040(r13)
	  lbz       r0, 0x30E3(r5)
	  rlwinm.   r0,r0,0,27,31
	  beq-      .loc_0x270
	  mulli     r10, r0, 0x3C
	  lwz       r0, 0xF8(r5)
	  lwz       r9, -0x70B4(r13)
	  lwz       r8, -0x70B8(r13)
	  rlwinm    r6,r0,30,2,31
	  srawi     r0, r10, 0x1F
	  mullw     r7, r0, r6
	  mulhwu    r0, r10, r6
	  mullw     r5, r10, r6
	  addc      r9, r9, r5
	  li        r31, 0
	  add       r7, r7, r0
	  mullw     r0, r10, r31
	  add       r0, r7, r0
	  adde      r8, r8, r0
	  xoris     r7, r8, 0x8000
	  xoris     r5, r3, 0x8000
	  subc      r0, r9, r4
	  subfe     r5, r5, r7
	  subfe     r5, r7, r7
	  neg.      r5, r5
	  beq-      .loc_0x270
	  subc      r4, r4, r9
	  subfe     r3, r8, r3
	  li        r5, 0
	  bl        -0x2EC38
	  li        r5, 0
	  li        r6, 0x2
	  bl        -0x2EC44
	  li        r0, 0x1
	  and       r4, r4, r0
	  and       r0, r3, r31
	  xor       r3, r4, r31
	  xor       r0, r0, r31
	  or.       r0, r3, r0
	  bne-      .loc_0x26C
	  li        r29, 0x1
	  b         .loc_0x270

	.loc_0x26C:
	  li        r29, 0

	.loc_0x270:
	  mr        r3, r30
	  bl        -0x1DD8
	  mr        r3, r29
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  lwz       r29, 0xC(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F0A5C
 * Size:	000020
 */
void OSGetResetSwitchState(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bl        -0x2A4
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void __OSSetResetButtonTimer(void)
{
	// UNUSED FUNCTION
}
