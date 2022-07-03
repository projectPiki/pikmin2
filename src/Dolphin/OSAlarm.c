#include "Dolphin/os.h"

/*
 * --INFO--
 * Address:	........
 * Size:	000140
 */
void OSCheckAlarmQueue(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void SetTimer(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EBAB4
 * Size:	000058
 */
void OSInitAlarm(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  li        r3, 0x8
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bl        -0x1AC
	  lis       r4, 0x800F
	  subi      r4, r4, 0x3EE0
	  cmplw     r3, r4
	  beq-      .loc_0x48
	  li        r0, 0
	  subi      r3, r13, 0x70B0
	  stw       r0, 0x4(r3)
	  li        r3, 0x8
	  stw       r0, -0x70B0(r13)
	  bl        -0x1F0
	  lis       r3, 0x804B
	  subi      r3, r3, 0x7508
	  bl        0x47AC

	.loc_0x48:
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EBB0C
 * Size:	000010
 */
void OSCreateAlarm(OSAlarm* alarm)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  stw       r0, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EBB1C
 * Size:	000250
 */
void InsertAlarm(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x40(r1)
	  stmw      r25, 0x24(r1)
	  li        r28, 0
	  mr        r29, r3
	  xoris     r4, r28, 0x8000
	  addi      r25, r5, 0
	  addi      r30, r6, 0
	  addi      r31, r7, 0
	  lwz       r0, 0x18(r3)
	  lwz       r8, 0x1C(r3)
	  xoris     r3, r0, 0x8000
	  subc      r0, r28, r8
	  subfe     r3, r3, r4
	  subfe     r3, r4, r4
	  neg.      r3, r3
	  beq-      .loc_0xC0
	  bl        0x704C
	  lwz       r7, 0x20(r29)
	  xoris     r5, r3, 0x8000
	  lwz       r8, 0x24(r29)
	  xoris     r6, r7, 0x8000
	  subc      r0, r8, r4
	  subfe     r5, r5, r6
	  subfe     r5, r6, r6
	  neg.      r5, r5
	  addi      r30, r8, 0
	  addi      r25, r7, 0
	  beq-      .loc_0xC0
	  lwz       r27, 0x18(r29)
	  subc      r4, r4, r8
	  lwz       r26, 0x1C(r29)
	  subfe     r3, r7, r3
	  addi      r5, r27, 0
	  addi      r6, r26, 0
	  bl        -0x29DE8
	  li        r0, 0x1
	  addc      r5, r4, r0
	  mullw     r4, r27, r5
	  mulhwu    r0, r26, r5
	  adde      r3, r3, r28
	  add       r4, r4, r0
	  mullw     r0, r26, r3
	  mullw     r3, r26, r5
	  add       r0, r4, r0
	  addc      r30, r30, r3
	  adde      r25, r25, r0

	.loc_0xC0:
	  stw       r31, 0x0(r29)
	  xoris     r4, r25, 0x8000
	  stw       r30, 0xC(r29)
	  stw       r25, 0x8(r29)
	  lwz       r6, -0x70B0(r13)
	  b         .loc_0x198

	.loc_0xD8:
	  lwz       r0, 0x8(r6)
	  lwz       r5, 0xC(r6)
	  xoris     r3, r0, 0x8000
	  subc      r0, r30, r5
	  subfe     r3, r3, r4
	  subfe     r3, r4, r4
	  neg.      r3, r3
	  beq-      .loc_0x194
	  lwz       r0, 0x10(r6)
	  stw       r0, 0x10(r29)
	  stw       r29, 0x10(r6)
	  stw       r6, 0x14(r29)
	  lwz       r3, 0x10(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x11C
	  stw       r29, 0x14(r3)
	  b         .loc_0x23C

	.loc_0x11C:
	  stw       r29, -0x70B0(r13)
	  bl        0x6F74
	  lwz       r6, 0xC(r29)
	  li        r7, 0
	  lwz       r0, 0x8(r29)
	  xoris     r5, r7, 0x8000
	  subc      r8, r6, r4
	  subfe     r0, r3, r0
	  xoris     r6, r0, 0x8000
	  subc      r0, r8, r7
	  subfe     r5, r5, r6
	  subfe     r5, r6, r6
	  neg.      r5, r5
	  beq-      .loc_0x160
	  li        r3, 0
	  bl        -0x176EC
	  b         .loc_0x23C

	.loc_0x160:
	  lis       r4, 0x8000
	  xoris     r3, r7, 0x8000
	  subc      r0, r8, r4
	  subfe     r3, r3, r6
	  subfe     r3, r6, r6
	  neg.      r3, r3
	  beq-      .loc_0x188
	  mr        r3, r8
	  bl        -0x17714
	  b         .loc_0x23C

	.loc_0x188:
	  subi      r3, r4, 0x1
	  bl        -0x17720
	  b         .loc_0x23C

	.loc_0x194:
	  lwz       r6, 0x14(r6)

	.loc_0x198:
	  cmplwi    r6, 0
	  bne+      .loc_0xD8
	  li        r30, 0
	  stw       r30, 0x14(r29)
	  subi      r3, r13, 0x70B0
	  lwz       r4, 0x4(r3)
	  stwu      r29, 0x4(r3)
	  cmplwi    r4, 0
	  stw       r4, 0x10(r29)
	  beq-      .loc_0x1C8
	  stw       r29, 0x14(r4)
	  b         .loc_0x23C

	.loc_0x1C8:
	  stw       r29, 0x0(r3)
	  stw       r29, -0x70B0(r13)
	  bl        0x6EC4
	  lwz       r6, 0xC(r29)
	  xoris     r5, r30, 0x8000
	  lwz       r0, 0x8(r29)
	  subc      r7, r6, r4
	  subfe     r0, r3, r0
	  xoris     r6, r0, 0x8000
	  subc      r0, r7, r30
	  subfe     r5, r5, r6
	  subfe     r5, r6, r6
	  neg.      r5, r5
	  beq-      .loc_0x20C
	  li        r3, 0
	  bl        -0x17798
	  b         .loc_0x23C

	.loc_0x20C:
	  lis       r4, 0x8000
	  xoris     r3, r30, 0x8000
	  subc      r0, r7, r4
	  subfe     r3, r3, r6
	  subfe     r3, r6, r6
	  neg.      r3, r3
	  beq-      .loc_0x234
	  mr        r3, r7
	  bl        -0x177C0
	  b         .loc_0x23C

	.loc_0x234:
	  subi      r3, r4, 0x1
	  bl        -0x177CC

	.loc_0x23C:
	  lmw       r25, 0x24(r1)
	  lwz       r0, 0x44(r1)
	  addi      r1, r1, 0x40
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EBD6C
 * Size:	000068
 */
void OSSetAlarm(OSAlarm* alarm, unknown p2, unknown p3, u32 tickRateMaybe, AlarmCallback* handler)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x38(r1)
	  stmw      r27, 0x24(r1)
	  addi      r27, r3, 0
	  addi      r29, r5, 0
	  addi      r28, r6, 0
	  addi      r30, r7, 0
	  bl        0x2EAC
	  li        r0, 0
	  stw       r0, 0x1C(r27)
	  mr        r31, r3
	  stw       r0, 0x18(r27)
	  bl        0x6E10
	  addc      r6, r28, r4
	  adde      r5, r29, r3
	  addi      r3, r27, 0
	  addi      r7, r30, 0
	  bl        -0x298
	  mr        r3, r31
	  bl        0x2EA4
	  lmw       r27, 0x24(r1)
	  lwz       r0, 0x3C(r1)
	  addi      r1, r1, 0x38
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void OSSetAbsAlarm(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void OSSetPeriodicAlarm(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EBDD4
 * Size:	00011C
 */
void OSCancelAlarm(OSAlarm* alarm)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x20(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  bl        0x2E48
	  lwz       r0, 0x0(r30)
	  addi      r31, r3, 0
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  mr        r3, r31
	  bl        0x2E58
	  b         .loc_0x100

	.loc_0x3C:
	  lwz       r29, 0x14(r30)
	  cmplwi    r29, 0
	  bne-      .loc_0x58
	  lwz       r0, 0x10(r30)
	  subi      r3, r13, 0x70B0
	  stw       r0, 0x4(r3)
	  b         .loc_0x60

	.loc_0x58:
	  lwz       r0, 0x10(r30)
	  stw       r0, 0x10(r29)

	.loc_0x60:
	  lwz       r3, 0x10(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x74
	  stw       r29, 0x14(r3)
	  b         .loc_0xF0

	.loc_0x74:
	  cmplwi    r29, 0
	  stw       r29, -0x70B0(r13)
	  beq-      .loc_0xF0
	  bl        0x6D5C
	  lwz       r6, 0xC(r29)
	  li        r7, 0
	  lwz       r0, 0x8(r29)
	  xoris     r5, r7, 0x8000
	  subc      r8, r6, r4
	  subfe     r0, r3, r0
	  xoris     r6, r0, 0x8000
	  subc      r0, r8, r7
	  subfe     r5, r5, r6
	  subfe     r5, r6, r6
	  neg.      r5, r5
	  beq-      .loc_0xC0
	  li        r3, 0
	  bl        -0x17904
	  b         .loc_0xF0

	.loc_0xC0:
	  lis       r4, 0x8000
	  xoris     r3, r7, 0x8000
	  subc      r0, r8, r4
	  subfe     r3, r3, r6
	  subfe     r3, r6, r6
	  neg.      r3, r3
	  beq-      .loc_0xE8
	  mr        r3, r8
	  bl        -0x1792C
	  b         .loc_0xF0

	.loc_0xE8:
	  subi      r3, r4, 0x1
	  bl        -0x17938

	.loc_0xF0:
	  li        r0, 0
	  stw       r0, 0x0(r30)
	  mr        r3, r31
	  bl        0x2D90

	.loc_0x100:
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
 * Address:	800EBEF0
 * Size:	000230
 */
void DecrementerExceptionCallback(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x2F0(r1)
	  stw       r31, 0x2EC(r1)
	  stw       r30, 0x2E8(r1)
	  stw       r29, 0x2E4(r1)
	  mr        r29, r4
	  stw       r28, 0x2E0(r1)
	  bl        0x6CA0
	  lwz       r0, -0x70B0(r13)
	  addi      r28, r4, 0
	  addi      r30, r3, 0
	  cmplwi    r0, 0
	  mr        r31, r0
	  bne-      .loc_0x44
	  mr        r3, r29
	  bl        0x115C

	.loc_0x44:
	  lwz       r0, 0x8(r31)
	  xoris     r4, r30, 0x8000
	  lwz       r5, 0xC(r31)
	  xoris     r3, r0, 0x8000
	  subc      r0, r28, r5
	  subfe     r3, r3, r4
	  subfe     r3, r4, r4
	  neg.      r3, r3
	  beq-      .loc_0xE0
	  bl        0x6C58
	  lwz       r6, 0xC(r31)
	  li        r7, 0
	  lwz       r0, 0x8(r31)
	  xoris     r5, r7, 0x8000
	  subc      r8, r6, r4
	  subfe     r0, r3, r0
	  xoris     r6, r0, 0x8000
	  subc      r0, r8, r7
	  subfe     r5, r5, r6
	  subfe     r5, r6, r6
	  neg.      r5, r5
	  beq-      .loc_0xA8
	  li        r3, 0
	  bl        -0x17A08
	  b         .loc_0xD8

	.loc_0xA8:
	  lis       r4, 0x8000
	  xoris     r3, r7, 0x8000
	  subc      r0, r8, r4
	  subfe     r3, r3, r6
	  subfe     r3, r6, r6
	  neg.      r3, r3
	  beq-      .loc_0xD0
	  mr        r3, r8
	  bl        -0x17A30
	  b         .loc_0xD8

	.loc_0xD0:
	  subi      r3, r4, 0x1
	  bl        -0x17A3C

	.loc_0xD8:
	  mr        r3, r29
	  bl        0x10C0

	.loc_0xE0:
	  lwz       r3, 0x14(r31)
	  cmplwi    r3, 0
	  stw       r3, -0x70B0(r13)
	  bne-      .loc_0x100
	  li        r0, 0
	  subi      r3, r13, 0x70B0
	  stw       r0, 0x4(r3)
	  b         .loc_0x108

	.loc_0x100:
	  li        r0, 0
	  stw       r0, 0x10(r3)

	.loc_0x108:
	  lwz       r30, 0x0(r31)
	  li        r6, 0
	  xoris     r4, r6, 0x8000
	  stw       r6, 0x0(r31)
	  lwz       r0, 0x18(r31)
	  lwz       r5, 0x1C(r31)
	  xoris     r3, r0, 0x8000
	  subc      r0, r6, r5
	  subfe     r3, r3, r4
	  subfe     r3, r4, r4
	  neg.      r3, r3
	  beq-      .loc_0x14C
	  addi      r3, r31, 0
	  addi      r7, r30, 0
	  li        r6, 0
	  li        r5, 0
	  bl        -0x51C

	.loc_0x14C:
	  lwz       r28, -0x70B0(r13)
	  cmplwi    r28, 0
	  beq-      .loc_0x1C8
	  bl        0x6B68
	  lwz       r6, 0xC(r28)
	  li        r7, 0
	  lwz       r0, 0x8(r28)
	  xoris     r5, r7, 0x8000
	  subc      r8, r6, r4
	  subfe     r0, r3, r0
	  xoris     r6, r0, 0x8000
	  subc      r0, r8, r7
	  subfe     r5, r5, r6
	  subfe     r5, r6, r6
	  neg.      r5, r5
	  beq-      .loc_0x198
	  li        r3, 0
	  bl        -0x17AF8
	  b         .loc_0x1C8

	.loc_0x198:
	  lis       r4, 0x8000
	  xoris     r3, r7, 0x8000
	  subc      r0, r8, r4
	  subfe     r3, r3, r6
	  subfe     r3, r6, r6
	  neg.      r3, r3
	  beq-      .loc_0x1C0
	  mr        r3, r8
	  bl        -0x17B20
	  b         .loc_0x1C8

	.loc_0x1C0:
	  subi      r3, r4, 0x1
	  bl        -0x17B2C

	.loc_0x1C8:
	  bl        0x594C
	  addi      r3, r1, 0x18
	  bl        0x10AC
	  addi      r3, r1, 0x18
	  bl        0xEDC
	  addi      r12, r30, 0
	  mtlr      r12
	  addi      r3, r31, 0
	  addi      r4, r29, 0
	  blrl
	  addi      r3, r1, 0x18
	  bl        0x1088
	  mr        r3, r29
	  bl        0xEB8
	  bl        0x5954
	  bl        0x5E6C
	  mr        r3, r29
	  bl        0xF90
	  lwz       r0, 0x2F4(r1)
	  lwz       r31, 0x2EC(r1)
	  lwz       r30, 0x2E8(r1)
	  lwz       r29, 0x2E4(r1)
	  lwz       r28, 0x2E0(r1)
	  addi      r1, r1, 0x2F0
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EC120
 * Size:	000050
 */
void DecrementerExceptionHandler(void)
{
	/*
	.loc_0x0:
	  stw       r0, 0x0(r4)
	  stw       r1, 0x4(r4)
	  stw       r2, 0x8(r4)
	  stmw      r6, 0x18(r4)
	  mfspr     r0, 0x391
	  stw       r0, 0x1A8(r4)
	  mfspr     r0, 0x392
	  stw       r0, 0x1AC(r4)
	  mfspr     r0, 0x393
	  stw       r0, 0x1B0(r4)
	  mfspr     r0, 0x394
	  stw       r0, 0x1B4(r4)
	  mfspr     r0, 0x395
	  stw       r0, 0x1B8(r4)
	  mfspr     r0, 0x396
	  stw       r0, 0x1BC(r4)
	  mfspr     r0, 0x397
	  stw       r0, 0x1C0(r4)
	  stwu      r1, -0x8(r1)
	  b         -0x27C
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void OSSetAlarmTag(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void OSCancelAlarms(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EC170
 * Size:	0000A0
 */
void OnReset(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  cmpwi     r3, 0
	  beq-      .loc_0x84
	  lwz       r0, -0x70B0(r13)
	  cmplwi    r0, 0
	  mr        r31, r0
	  beq-      .loc_0x34
	  lwz       r0, 0x14(r31)
	  b         .loc_0x38

	.loc_0x34:
	  li        r0, 0

	.loc_0x38:
	  mr        r30, r0
	  b         .loc_0x40

	.loc_0x40:
	  b         .loc_0x44

	.loc_0x44:
	  b         .loc_0x7C

	.loc_0x48:
	  mr        r3, r31
	  bl        -0xCD98
	  cmpwi     r3, 0
	  bne-      .loc_0x60
	  mr        r3, r31
	  bl        -0x3F8

	.loc_0x60:
	  cmplwi    r30, 0
	  mr        r31, r30
	  beq-      .loc_0x74
	  lwz       r0, 0x14(r30)
	  b         .loc_0x78

	.loc_0x74:
	  li        r0, 0

	.loc_0x78:
	  mr        r30, r0

	.loc_0x7C:
	  cmplwi    r31, 0
	  bne+      .loc_0x48

	.loc_0x84:
	  li        r3, 0x1
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}
