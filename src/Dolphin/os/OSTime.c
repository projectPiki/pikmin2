#include "Dolphin/os.h"

/*
 * --INFO--
 * Address:	800F2B90
 * Size:	000018
 */
u64 OSGetTime(void)
{
	/*
	.loc_0x0:
	  mftbu     r3
	  mftbl     r4
	  mftbu     r5
	  cmpw      r3, r5
	  bne+      .loc_0x0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F2BA8
 * Size:	000008
 */
void OSGetTick(void)
{
	/*
	.loc_0x0:
	  mftbl     r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void __SetTime(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void __OSSetTime(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F2BB0
 * Size:	000064
 */
void __OSGetSystemTime(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  bl        -0x3F90
	  mr        r31, r3
	  bl        -0x40
	  lis       r6, 0x8000
	  lwz       r5, 0x30DC(r6)
	  lwz       r0, 0x30D8(r6)
	  addc      r29, r5, r4
	  adde      r30, r0, r3
	  mr        r3, r31
	  bl        -0x3F8C
	  mr        r4, r29
	  mr        r3, r30
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
 * Address:	........
 * Size:	000058
 */
void __OSTimeToSystemTime(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void __OSSetTick(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void IsLeapYear(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void GetYearDays(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void GetLeapDays(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800F2C14
 * Size:	00019C
 */
void GetDates(void)
{
	/*
	.loc_0x0:
	  lis       r5, 0x9249
	  addi      r0, r5, 0x2493
	  addi      r7, r3, 0x6
	  mulhw     r6, r0, r7
	  lis       r5, 0xB38D
	  subi      r0, r5, 0x64F
	  mulhw     r0, r0, r3
	  add       r5, r6, r7
	  srawi     r5, r5, 0x2
	  rlwinm    r6,r5,1,31,31
	  add       r5, r5, r6
	  add       r0, r0, r3
	  mulli     r6, r5, 0x7
	  srawi     r0, r0, 0x8
	  rlwinm    r5,r0,1,31,31
	  add       r5, r0, r5
	  sub       r0, r7, r6
	  mulli     r11, r5, 0x16D
	  stw       r0, 0x18(r4)
	  b         .loc_0x50

	.loc_0x50:
	  lis       r6, 0x51EC
	  subi      r10, r6, 0x7AE1
	  b         .loc_0x5C

	.loc_0x5C:
	  b         .loc_0x68

	.loc_0x60:
	  subi      r11, r11, 0x16D
	  subi      r5, r5, 0x1

	.loc_0x68:
	  cmpwi     r5, 0x1
	  bge-      .loc_0x78
	  li        r0, 0
	  b         .loc_0xAC

	.loc_0x78:
	  subi      r0, r5, 0x1
	  mulhw     r0, r10, r0
	  srawi     r8, r0, 0x7
	  srawi     r6, r0, 0x5
	  addi      r0, r5, 0x3
	  rlwinm    r7,r6,1,31,31
	  srawi     r0, r0, 0x2
	  rlwinm    r9,r8,1,31,31
	  add       r6, r6, r7
	  addze     r0, r0
	  add       r7, r8, r9
	  sub       r0, r0, r6
	  add       r0, r7, r0

	.loc_0xAC:
	  add       r0, r11, r0
	  cmpw      r3, r0
	  blt+      .loc_0x60
	  srawi     r6, r5, 0x2
	  stw       r5, 0x14(r4)
	  addze     r6, r6
	  rlwinm    r6,r6,2,0,29
	  subc      r6, r5, r6
	  sub       r0, r3, r0
	  cmpwi     r6, 0
	  stw       r0, 0x1C(r4)
	  li        r7, 0x1
	  li        r8, 0
	  bne-      .loc_0x110
	  lis       r3, 0x51EC
	  subi      r3, r3, 0x7AE1
	  mulhw     r3, r3, r5
	  srawi     r3, r3, 0x5
	  rlwinm    r6,r3,1,31,31
	  add       r3, r3, r6
	  mulli     r3, r3, 0x64
	  sub       r3, r5, r3
	  cmpwi     r3, 0
	  beq-      .loc_0x110
	  mr        r8, r7

	.loc_0x110:
	  cmpwi     r8, 0
	  bne-      .loc_0x144
	  lis       r3, 0x51EC
	  subi      r3, r3, 0x7AE1
	  mulhw     r3, r3, r5
	  srawi     r3, r3, 0x7
	  rlwinm    r6,r3,1,31,31
	  add       r3, r3, r6
	  mulli     r3, r3, 0x190
	  sub       r3, r5, r3
	  cmpwi     r3, 0
	  beq-      .loc_0x144
	  li        r7, 0

	.loc_0x144:
	  cmpwi     r7, 0
	  beq-      .loc_0x158
	  lis       r3, 0x804B
	  subi      r6, r3, 0x61D0
	  b         .loc_0x160

	.loc_0x158:
	  lis       r3, 0x804B
	  subi      r6, r3, 0x6200

	.loc_0x160:
	  li        r7, 0xC
	  li        r3, 0x30
	  b         .loc_0x16C

	.loc_0x16C:
	  b         .loc_0x170

	.loc_0x170:
	  subi      r3, r3, 0x4
	  lwzx      r5, r6, r3
	  subi      r7, r7, 0x1
	  cmpw      r0, r5
	  blt+      .loc_0x170
	  stw       r7, 0x10(r4)
	  lwzx      r3, r6, r3
	  sub       r3, r0, r3
	  addi      r0, r3, 0x1
	  stw       r0, 0xC(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800F2DB0
 * Size:	000204
 */
void OSTicksToCalendarTime(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x38(r1)
	  stmw      r25, 0x1C(r1)
	  mr        r29, r3
	  mr        r30, r4
	  mr        r31, r5
	  lis       r27, 0x8000
	  lwz       r0, 0xF8(r27)
	  mr        r3, r29
	  mr        r4, r30
	  rlwinm    r6,r0,30,2,31
	  li        r5, 0
	  bl        -0x30E04
	  mr        r26, r3
	  li        r5, 0
	  mr        r25, r4
	  xoris     r4, r26, 0x8000
	  xoris     r3, r5, 0x8000
	  subc      r0, r25, r5
	  subfe     r3, r3, r4
	  subfe     r3, r4, r4
	  neg       r3, r3
	  cmpwi     r3, 0
	  beq-      .loc_0x74
	  lwz       r0, 0xF8(r27)
	  rlwinm    r0,r0,30,2,31
	  addc      r25, r25, r0
	  adde      r26, r26, r5

	.loc_0x74:
	  li        r4, 0x8
	  mullw     r3, r26, r4
	  mulhwu    r0, r25, r4
	  lis       r27, 0x8000
	  lwz       r6, 0xF8(r27)
	  lis       r5, 0x431C
	  subi      r5, r5, 0x217D
	  rlwinm    r6,r6,30,2,31
	  mulhwu    r5, r5, r6
	  rlwinm    r6,r5,17,15,31
	  li        r28, 0
	  add       r3, r3, r0
	  mullw     r0, r25, r28
	  mullw     r4, r25, r4
	  add       r3, r3, r0
	  li        r5, 0
	  bl        -0x310A0
	  li        r5, 0
	  li        r6, 0x3E8
	  bl        -0x30E90
	  stw       r4, 0x24(r31)
	  lis       r3, 0x1062
	  addi      r5, r3, 0x4DD3
	  lwz       r0, 0xF8(r27)
	  mr        r3, r26
	  mr        r4, r25
	  rlwinm    r0,r0,30,2,31
	  mulhwu    r0, r5, r0
	  rlwinm    r6,r0,26,6,31
	  li        r5, 0
	  bl        -0x310D8
	  li        r5, 0
	  li        r6, 0x3E8
	  bl        -0x30EC8
	  stw       r4, 0x20(r31)
	  subc      r30, r30, r25
	  subfe     r29, r26, r29
	  lwz       r0, 0xF8(r27)
	  lis       r5, 0x1
	  addi      r25, r5, 0x5180
	  mr        r3, r29
	  rlwinm    r6,r0,30,2,31
	  mr        r4, r30
	  li        r5, 0
	  bl        -0x31110
	  mr        r6, r25
	  li        r5, 0
	  bl        -0x3111C
	  lis       r5, 0xB
	  lwz       r0, 0xF8(r27)
	  addi      r5, r5, 0x2575
	  addc      r26, r4, r5
	  rlwinm    r6,r0,30,2,31
	  adde      r0, r3, r28
	  mr        r3, r29
	  mr        r4, r30
	  li        r5, 0
	  bl        -0x31144
	  mr        r6, r25
	  li        r5, 0
	  bl        -0x30F34
	  mr        r27, r4
	  cmpwi     r27, 0
	  bge-      .loc_0x180
	  addis     r27, r27, 0x1
	  subi      r26, r26, 0x1
	  addi      r27, r27, 0x5180

	.loc_0x180:
	  mr        r3, r26
	  mr        r4, r31
	  bl        -0x324
	  lis       r3, 0x8889
	  subi      r5, r3, 0x7777
	  mulhw     r0, r5, r27
	  add       r4, r0, r27
	  srawi     r0, r4, 0x5
	  rlwinm    r3,r0,1,31,31
	  add       r7, r0, r3
	  mulhw     r0, r5, r7
	  add       r0, r0, r7
	  srawi     r5, r0, 0x5
	  srawi     r0, r0, 0x5
	  rlwinm    r3,r0,1,31,31
	  add       r3, r0, r3
	  srawi     r0, r4, 0x5
	  rlwinm    r6,r5,1,31,31
	  mulli     r4, r3, 0x3C
	  rlwinm    r3,r0,1,31,31
	  add       r5, r5, r6
	  add       r0, r0, r3
	  stw       r5, 0x8(r31)
	  mulli     r0, r0, 0x3C
	  sub       r3, r7, r4
	  stw       r3, 0x4(r31)
	  sub       r0, r27, r0
	  stw       r0, 0x0(r31)
	  lmw       r25, 0x1C(r1)
	  lwz       r0, 0x3C(r1)
	  addi      r1, r1, 0x38
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002E0
 */
void OSCalendarTimeToTicks(void)
{
	// UNUSED FUNCTION
}
