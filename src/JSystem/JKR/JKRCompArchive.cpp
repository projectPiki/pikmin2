#include "types.h"

/*
 * --INFO--
 * Address:	8001BBB8
 * Size:	0000B0
 */
JKRCompArchive::JKRCompArchive(long, JKRArchive::EMountDirection)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  li        r5, 0x4
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        -0x1724
	  lis       r4, 0x804A
	  mr        r3, r29
	  subi      r0, r4, 0x338
	  mr        r4, r30
	  stw       r0, 0x0(r29)
	  stw       r31, 0x60(r29)
	  bl        0x1BC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x58
	  mr        r3, r29
	  b         .loc_0x94

	.loc_0x58:
	  lis       r4, 0x5241
	  lis       r3, 0x8050
	  addi      r0, r4, 0x5243
	  stw       r0, 0x2C(r29)
	  addi      r4, r29, 0x18
	  addi      r3, r3, 0x6E24
	  lwz       r5, 0x48(r29)
	  lwz       r6, 0x54(r29)
	  lwz       r0, 0x4(r5)
	  add       r0, r6, r0
	  stw       r0, 0x28(r29)
	  bl        0xAD60
	  li        r0, 0x1
	  mr        r3, r29
	  stb       r0, 0x30(r29)

	.loc_0x94:
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
 * Address:	8001BC68
 * Size:	000150
 */
JKRCompArchive::~JKRCompArchive()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr.       r30, r3
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  beq-      .loc_0x12C
	  lis       r3, 0x804A
	  subi      r0, r3, 0x338
	  stw       r0, 0x0(r30)
	  lwz       r0, 0x44(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x94
	  lwz       r29, 0x4C(r30)
	  li        r28, 0
	  b         .loc_0x74

	.loc_0x4C:
	  lwz       r0, 0x4(r29)
	  rlwinm.   r0,r0,8,27,27
	  bne-      .loc_0x6C
	  lwz       r3, 0x10(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  lwz       r4, 0x38(r30)
	  bl        0x799C

	.loc_0x6C:
	  addi      r29, r29, 0x14
	  addi      r28, r28, 0x1

	.loc_0x74:
	  lwz       r3, 0x44(r30)
	  lwz       r0, 0x8(r3)
	  cmplw     r28, r0
	  blt+      .loc_0x4C
	  lwz       r4, 0x38(r30)
	  bl        0x797C
	  li        r0, 0
	  stw       r0, 0x44(r30)

	.loc_0x94:
	  lwz       r3, 0x68(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xB8
	  beq-      .loc_0xB8
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB8:
	  lwz       r3, 0x50(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xD4
	  li        r4, 0
	  bl        0x793C
	  li        r0, 0
	  stw       r0, 0x50(r30)

	.loc_0xD4:
	  lwz       r3, 0x70(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xF8
	  beq-      .loc_0xF8
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF8:
	  lis       r3, 0x8050
	  addi      r4, r30, 0x18
	  addi      r3, r3, 0x6E24
	  bl        0xAEB8
	  li        r0, 0
	  mr        r3, r30
	  stb       r0, 0x30(r30)
	  li        r4, 0
	  bl        -0x181C
	  extsh.    r0, r31
	  ble-      .loc_0x12C
	  mr        r3, r30
	  bl        0x8324

	.loc_0x12C:
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001BDB8
 * Size:	00057C
 */
void JKRCompArchive::open(long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x34(r1)
	  li        r0, 0
	  stmw      r25, 0x14(r1)
	  mr        r31, r3
	  mr        r27, r4
	  stw       r0, 0x44(r3)
	  li        r3, 0xF8
	  stw       r0, 0x64(r31)
	  stw       r0, 0x68(r31)
	  stw       r0, 0x6C(r31)
	  stw       r0, 0x74(r31)
	  stw       r0, 0x78(r31)
	  stw       r0, 0x7C(r31)
	  stw       r0, 0x48(r31)
	  stw       r0, 0x4C(r31)
	  stw       r0, 0x54(r31)
	  lwz       r4, -0x77D8(r13)
	  bl        0x8138
	  mr.       r0, r3
	  beq-      .loc_0x68
	  mr        r4, r27
	  bl        0x13C4
	  mr        r0, r3

	.loc_0x68:
	  stw       r0, 0x70(r31)
	  lwz       r0, 0x70(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x88
	  li        r0, 0
	  li        r3, 0
	  stb       r0, 0x3C(r31)
	  b         .loc_0x568

	.loc_0x88:
	  lwz       r3, -0x77D8(r13)
	  li        r4, 0x20
	  li        r5, -0x20
	  bl        0x77F4
	  mr.       r29, r3
	  bne-      .loc_0xAC
	  li        r0, 0
	  stb       r0, 0x3C(r31)
	  b         .loc_0x518

	.loc_0xAC:
	  li        r0, 0
	  mr        r3, r27
	  stw       r0, 0x8(r1)
	  mr        r4, r29
	  addi      r10, r31, 0x5C
	  li        r5, 0x1
	  li        r6, 0x20
	  li        r7, 0
	  li        r8, 0x1
	  li        r9, 0
	  bl        0x33B0
	  mr        r3, r29
	  li        r4, 0x20
	  bl        0xD0854
	  lwz       r0, 0x14(r29)
	  stw       r0, 0x74(r31)
	  lwz       r0, 0x18(r29)
	  stw       r0, 0x78(r31)
	  lwz       r0, 0x5C(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x25C
	  bge-      .loc_0x110
	  cmpwi     r0, 0
	  bge-      .loc_0x118
	  b         .loc_0x464

	.loc_0x110:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x464

	.loc_0x118:
	  lwz       r0, 0x60(r31)
	  li        r4, -0x20
	  cmpwi     r0, 0x1
	  bne-      .loc_0x12C
	  li        r4, 0x20

	.loc_0x12C:
	  lwz       r3, 0xC(r29)
	  mr        r30, r4
	  lwz       r0, 0x74(r31)
	  lwz       r5, 0x38(r31)
	  add       r3, r3, r0
	  bl        0x76E8
	  stw       r3, 0x44(r31)
	  lwz       r4, 0x44(r31)
	  cmplwi    r4, 0
	  bne-      .loc_0x160
	  li        r0, 0
	  stb       r0, 0x3C(r31)
	  b         .loc_0x464

	.loc_0x160:
	  li        r0, 0
	  mr        r3, r27
	  stw       r0, 0x8(r1)
	  li        r5, 0x1
	  li        r7, 0
	  li        r8, 0x1
	  lwz       r6, 0xC(r29)
	  li        r9, 0x20
	  lwz       r0, 0x74(r31)
	  li        r10, 0
	  add       r6, r6, r0
	  bl        0x32F8
	  lwz       r4, 0xC(r29)
	  lwz       r0, 0x74(r31)
	  lwz       r3, 0x44(r31)
	  add       r4, r4, r0
	  bl        0xD0794
	  lwz       r3, 0x44(r31)
	  lwz       r0, 0xC(r29)
	  add       r0, r3, r0
	  stw       r0, 0x64(r31)
	  lwz       r4, 0x78(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x218
	  lwz       r3, -0x78E0(r13)
	  li        r5, 0
	  lwz       r3, 0x94(r3)
	  bl        -0x273C
	  stw       r3, 0x68(r31)
	  lwz       r9, 0x68(r31)
	  cmplwi    r9, 0
	  bne-      .loc_0x1EC
	  li        r0, 0
	  stb       r0, 0x3C(r31)
	  b         .loc_0x464

	.loc_0x1EC:
	  lwz       r4, 0x74(r31)
	  mr        r3, r27
	  lwz       r0, 0xC(r29)
	  li        r5, 0x1
	  lwz       r8, 0x8(r29)
	  li        r7, 0
	  add       r6, r0, r4
	  lwz       r4, 0x14(r9)
	  add       r6, r8, r6
	  li        r8, 0
	  bl        0x17C0

	.loc_0x218:
	  lwz       r3, 0x44(r31)
	  lwz       r0, 0x4(r3)
	  add       r0, r3, r0
	  stw       r0, 0x48(r31)
	  lwz       r3, 0x44(r31)
	  lwz       r0, 0xC(r3)
	  add       r0, r3, r0
	  stw       r0, 0x4C(r31)
	  lwz       r3, 0x44(r31)
	  lwz       r0, 0x14(r3)
	  add       r0, r3, r0
	  stw       r0, 0x54(r31)
	  lwz       r3, 0x8(r29)
	  lwz       r0, 0xC(r29)
	  add       r0, r3, r0
	  stw       r0, 0x6C(r31)
	  b         .loc_0x464

	.loc_0x25C:
	  lwz       r3, 0x70(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x60(r31)
	  addi      r3, r3, 0x1F
	  rlwinm    r25,r3,0,0,26
	  li        r30, -0x20
	  cmpwi     r0, 0x1
	  bne-      .loc_0x28C
	  li        r30, 0x20

	.loc_0x28C:
	  neg       r26, r30
	  lwz       r3, -0x77D8(r13)
	  mr        r4, r25
	  mr        r5, r26
	  bl        0x75EC
	  mr.       r28, r3
	  bne-      .loc_0x2B4
	  li        r0, 0
	  stb       r0, 0x3C(r31)
	  b         .loc_0x424

	.loc_0x2B4:
	  li        r0, 0
	  mr        r3, r27
	  stw       r0, 0x8(r1)
	  mr        r4, r28
	  mr        r6, r25
	  li        r5, 0x2
	  li        r7, 0
	  li        r8, 0x1
	  li        r9, 0
	  li        r10, 0
	  bl        0x31A8
	  mr        r3, r28
	  mr        r4, r25
	  bl        0xD064C
	  lbz       r0, 0x5(r28)
	  mr        r4, r26
	  lbz       r3, 0x4(r28)
	  rlwinm    r0,r0,16,0,15
	  lbz       r6, 0x6(r28)
	  rlwimi    r0,r3,24,0,7
	  lbz       r7, 0x7(r28)
	  rlwimi    r0,r6,8,16,23
	  lwz       r5, 0x38(r31)
	  or        r3, r7, r0
	  addi      r0, r3, 0x1F
	  rlwinm    r25,r0,0,0,26
	  mr        r3, r25
	  bl        0x7508
	  mr.       r27, r3
	  bne-      .loc_0x338
	  li        r0, 0
	  stb       r0, 0x3C(r31)
	  b         .loc_0x424

	.loc_0x338:
	  mr        r29, r27
	  mr        r3, r28
	  mr        r4, r27
	  mr        r5, r25
	  li        r6, 0
	  bl        0xA38
	  lwz       r3, -0x77D8(r13)
	  mr        r4, r28
	  bl        0x75A4
	  lwz       r3, 0xC(r29)
	  mr        r4, r30
	  lwz       r0, 0x74(r31)
	  lwz       r5, 0x38(r31)
	  add       r3, r3, r0
	  bl        0x74B8
	  stw       r3, 0x44(r31)
	  lwz       r3, 0x44(r31)
	  cmplwi    r3, 0
	  bne-      .loc_0x390
	  li        r0, 0
	  stb       r0, 0x3C(r31)
	  b         .loc_0x424

	.loc_0x390:
	  lwz       r5, 0xC(r29)
	  addi      r4, r29, 0x20
	  lwz       r0, 0x74(r31)
	  add       r5, r5, r0
	  bl        0x7C6C
	  lwz       r3, 0x44(r31)
	  lwz       r0, 0xC(r29)
	  add       r0, r3, r0
	  stw       r0, 0x64(r31)
	  lwz       r4, 0x78(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x424
	  lwz       r3, -0x78E0(r13)
	  li        r5, 0
	  lwz       r3, 0x94(r3)
	  bl        -0x293C
	  stw       r3, 0x68(r31)
	  lwz       r5, 0x68(r31)
	  cmplwi    r5, 0
	  bne-      .loc_0x3EC
	  li        r0, 0
	  stb       r0, 0x3C(r31)
	  b         .loc_0x424

	.loc_0x3EC:
	  lwz       r4, 0x8(r29)
	  li        r6, 0
	  lwz       r3, 0xC(r29)
	  li        r7, 0
	  lwz       r0, 0x74(r31)
	  li        r8, 0
	  add       r3, r4, r3
	  lwz       r4, 0x14(r5)
	  add       r3, r3, r0
	  lwz       r5, 0x78(r31)
	  add       r3, r27, r3
	  li        r9, -0x1
	  li        r10, 0
	  bl        -0x4518

	.loc_0x424:
	  lwz       r3, 0x44(r31)
	  lwz       r0, 0x4(r3)
	  add       r0, r3, r0
	  stw       r0, 0x48(r31)
	  lwz       r3, 0x44(r31)
	  lwz       r0, 0xC(r3)
	  add       r0, r3, r0
	  stw       r0, 0x4C(r31)
	  lwz       r3, 0x44(r31)
	  lwz       r0, 0x14(r3)
	  add       r0, r3, r0
	  stw       r0, 0x54(r31)
	  lwz       r3, 0x8(r29)
	  lwz       r0, 0xC(r29)
	  add       r0, r3, r0
	  stw       r0, 0x6C(r31)

	.loc_0x464:
	  li        r0, 0
	  li        r4, 0
	  stw       r0, 0x50(r31)
	  lwz       r3, 0x44(r31)
	  lwz       r5, 0x4C(r31)
	  lwz       r0, 0x8(r3)
	  mtctr     r0
	  cmplwi    r0, 0
	  ble-      .loc_0x4B4

	.loc_0x488:
	  lwz       r3, 0x4(r5)
	  rlwinm.   r0,r3,8,31,31
	  rlwinm    r3,r3,8,24,31
	  beq-      .loc_0x4AC
	  rlwinm.   r0,r3,0,27,27
	  bne-      .loc_0x4AC
	  rlwinm    r0,r3,0,29,29
	  or        r0, r4, r0
	  rlwinm    r4,r0,0,24,31

	.loc_0x4AC:
	  addi      r5, r5, 0x14
	  bdnz+     .loc_0x488

	.loc_0x4B4:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0x518
	  mr        r3, r30
	  bl        0xA9ED8
	  lwz       r4, 0x44(r31)
	  lwz       r5, 0x38(r31)
	  lwz       r0, 0x8(r4)
	  mr        r4, r3
	  rlwinm    r3,r0,2,0,29
	  bl        0x7350
	  stw       r3, 0x50(r31)
	  lwz       r3, 0x50(r31)
	  cmplwi    r3, 0
	  bne-      .loc_0x504
	  lwz       r3, -0x77D8(r13)
	  lwz       r4, 0x44(r31)
	  bl        0x7408
	  li        r0, 0
	  stb       r0, 0x3C(r31)
	  b         .loc_0x518

	.loc_0x504:
	  lwz       r5, 0x44(r31)
	  li        r4, 0
	  lwz       r0, 0x8(r5)
	  rlwinm    r5,r0,2,0,29
	  bl        -0x17218

	.loc_0x518:
	  cmplwi    r29, 0
	  beq-      .loc_0x52C
	  lwz       r3, -0x77D8(r13)
	  mr        r4, r29
	  bl        0x73D4

	.loc_0x52C:
	  lbz       r0, 0x3C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x564
	  lwz       r3, 0x70(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x55C
	  beq-      .loc_0x55C
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x55C:
	  li        r3, 0
	  b         .loc_0x568

	.loc_0x564:
	  li        r3, 0x1

	.loc_0x568:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001C334
 * Size:	000190
 */
void JKRCompArchive::fetchResource(JKRArchive::SDIFileEntry*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r5
	  stw       r29, 0x24(r1)
	  mr        r29, r4
	  stw       r28, 0x20(r1)
	  mr        r28, r3
	  lwz       r3, 0x4(r4)
	  lwz       r5, 0xC(r4)
	  rlwinm.   r0,r3,8,29,29
	  rlwinm    r3,r3,8,24,31
	  mr        r4, r5
	  bne-      .loc_0x48
	  li        r31, 0
	  b         .loc_0x5C

	.loc_0x48:
	  rlwinm.   r0,r3,0,24,24
	  beq-      .loc_0x58
	  li        r31, 0x2
	  b         .loc_0x5C

	.loc_0x58:
	  li        r31, 0x1

	.loc_0x5C:
	  cmplwi    r30, 0
	  bne-      .loc_0x68
	  addi      r30, r1, 0x10

	.loc_0x68:
	  lwz       r0, 0x10(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x160
	  rlwinm.   r0,r3,0,27,27
	  beq-      .loc_0x94
	  lwz       r3, 0x64(r28)
	  lwz       r0, 0x8(r29)
	  add       r0, r3, r0
	  stw       r0, 0x10(r29)
	  stw       r4, 0x0(r30)
	  b         .loc_0x16C

	.loc_0x94:
	  rlwinm.   r0,r3,0,26,26
	  beq-      .loc_0xF8
	  lwz       r3, 0x68(r28)
	  mr        r6, r31
	  lwz       r5, 0x8(r29)
	  addi      r7, r1, 0xC
	  lwz       r0, 0x14(r3)
	  lwz       r3, 0x74(r28)
	  add       r0, r5, r0
	  lwz       r5, 0x38(r28)
	  sub       r3, r0, r3
	  bl        -0x3230
	  stw       r3, 0x0(r30)
	  cmpwi     r31, 0x2
	  lwz       r0, 0xC(r1)
	  stw       r0, 0x10(r29)
	  bne-      .loc_0x16C
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  lwz       r5, 0x0(r30)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x16C

	.loc_0xF8:
	  rlwinm.   r0,r3,0,25,25
	  beq-      .loc_0x16C
	  lwz       r4, 0x6C(r28)
	  mr        r7, r31
	  lwz       r0, 0x8(r29)
	  addi      r9, r1, 0x8
	  lwz       r3, 0x40(r28)
	  lwz       r6, 0x38(r28)
	  add       r4, r4, r0
	  lwz       r8, 0x5C(r28)
	  bl        0x29D4
	  cmplwi    r30, 0
	  beq-      .loc_0x130
	  stw       r3, 0x0(r30)

	.loc_0x130:
	  lwz       r0, 0x8(r1)
	  cmpwi     r31, 0x2
	  stw       r0, 0x10(r29)
	  bne-      .loc_0x16C
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  lwz       r5, 0x0(r30)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x16C

	.loc_0x160:
	  cmplwi    r30, 0
	  beq-      .loc_0x16C
	  stw       r5, 0x0(r30)

	.loc_0x16C:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r3, 0x10(r29)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001C4C4
 * Size:	000194
 */
void JKRCompArchive::fetchResource(void*, unsigned long,
                                   JKRArchive::SDIFileEntry*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r9, r3
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r30, r6
	  mr        r28, r4
	  mr        r29, r5
	  mr        r31, r7
	  li        r27, 0
	  lwz       r3, 0x4(r6)
	  lwz       r26, 0xC(r6)
	  rlwinm.   r0,r3,8,29,29
	  rlwinm    r3,r3,8,24,31
	  addi      r0, r26, 0x1F
	  rlwinm    r4,r0,0,0,26
	  bne-      .loc_0x4C
	  li        r7, 0
	  b         .loc_0x60

	.loc_0x4C:
	  rlwinm.   r0,r3,0,24,24
	  beq-      .loc_0x5C
	  li        r7, 0x2
	  b         .loc_0x60

	.loc_0x5C:
	  li        r7, 0x1

	.loc_0x60:
	  lwz       r0, 0x10(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xBC
	  cmpwi     r7, 0x2
	  bne-      .loc_0x98
	  mr        r3, r9
	  mr        r4, r30
	  lwz       r12, 0x0(r9)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x98
	  mr        r26, r3

	.loc_0x98:
	  cmplw     r26, r29
	  ble-      .loc_0xA4
	  mr        r26, r29

	.loc_0xA4:
	  lwz       r4, 0x10(r30)
	  mr        r3, r28
	  mr        r5, r26
	  bl        0x7850
	  mr        r27, r26
	  b         .loc_0x170

	.loc_0xBC:
	  rlwinm.   r0,r3,0,27,27
	  beq-      .loc_0xE4
	  lwz       r3, 0x64(r9)
	  mr        r5, r28
	  lwz       r0, 0x8(r30)
	  rlwinm    r6,r29,0,0,26
	  add       r3, r3, r0
	  bl        0x8670
	  mr        r27, r3
	  b         .loc_0x170

	.loc_0xE4:
	  rlwinm.   r0,r3,0,26,26
	  beq-      .loc_0x118
	  lwz       r3, 0x68(r9)
	  mr        r5, r28
	  lwz       r8, 0x8(r30)
	  rlwinm    r6,r29,0,0,26
	  lwz       r0, 0x14(r3)
	  lwz       r3, 0x74(r9)
	  add       r0, r8, r0
	  sub       r3, r0, r3
	  bl        -0x34C8
	  mr        r27, r3
	  b         .loc_0x170

	.loc_0x118:
	  rlwinm.   r0,r3,0,25,25
	  beq-      .loc_0x150
	  lwz       r10, 0x6C(r9)
	  mr        r5, r4
	  lwz       r0, 0x8(r30)
	  mr        r6, r28
	  lwz       r3, 0x40(r9)
	  mr        r8, r7
	  lwz       r9, 0x5C(r9)
	  add       r4, r10, r0
	  rlwinm    r7,r29,0,0,26
	  bl        0x2620
	  mr        r27, r3
	  b         .loc_0x170

	.loc_0x150:
	  lis       r3, 0x8047
	  lis       r5, 0x8047
	  addi      r6, r5, 0x35DC
	  li        r4, 0x308
	  addi      r3, r3, 0x35C8
	  subi      r5, r2, 0x7E78
	  crclr     6, 0x6
	  bl        0xE010

	.loc_0x170:
	  cmplwi    r31, 0
	  beq-      .loc_0x17C
	  stw       r27, 0x0(r31)

	.loc_0x17C:
	  mr        r3, r28
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001C658
 * Size:	0000A4
 */
void JKRCompArchive::removeResourceAll()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r0, 0x44(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x84
	  lbz       r0, 0x3C(r28)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x84
	  lwz       r30, 0x4C(r28)
	  li        r29, 0
	  li        r31, 0
	  b         .loc_0x74

	.loc_0x48:
	  lwz       r3, 0x10(r30)
	  lwz       r0, 0x4(r30)
	  cmplwi    r3, 0
	  rlwinm    r0,r0,8,24,31
	  beq-      .loc_0x70
	  rlwinm.   r0,r0,0,27,27
	  bne-      .loc_0x6C
	  lwz       r4, 0x38(r28)
	  bl        0x6FAC

	.loc_0x6C:
	  stw       r31, 0x10(r30)

	.loc_0x70:
	  addi      r29, r29, 0x1

	.loc_0x74:
	  lwz       r3, 0x44(r28)
	  lwz       r0, 0x8(r3)
	  cmplw     r29, r0
	  blt+      .loc_0x48

	.loc_0x84:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8001C6FC
 * Size:	000074
 */
void JKRCompArchive::removeResource(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        -0x189C
	  mr.       r31, r3
	  bne-      .loc_0x34
	  li        r3, 0
	  b         .loc_0x58

	.loc_0x34:
	  lwz       r0, 0x4(r31)
	  rlwinm.   r0,r0,8,27,27
	  bne-      .loc_0x4C
	  lwz       r4, 0x38(r29)
	  mr        r3, r30
	  bl        0x6F28

	.loc_0x4C:
	  li        r0, 0
	  li        r3, 0x1
	  stw       r0, 0x10(r31)

	.loc_0x58:
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
 * Address:	8001C770
 * Size:	0001C4
 */
void JKRCompArchive::getExpandedResSize(const void*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  lwz       r0, 0x50(r3)
	  stw       r31, 0x5C(r1)
	  cmplwi    r0, 0
	  stw       r30, 0x58(r1)
	  mr        r30, r4
	  stw       r29, 0x54(r1)
	  mr        r29, r3
	  bne-      .loc_0x40
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1A8

	.loc_0x40:
	  bl        -0x1930
	  mr.       r31, r3
	  bne-      .loc_0x54
	  li        r3, -0x1
	  b         .loc_0x1A8

	.loc_0x54:
	  lwz       r3, 0x4(r31)
	  rlwinm.   r0,r3,8,29,29
	  rlwinm    r4,r3,8,24,31
	  bne-      .loc_0x80
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1A8

	.loc_0x80:
	  rlwinm.   r0,r4,0,27,27
	  beq-      .loc_0xAC
	  lbz       r0, 0x5(r30)
	  lbz       r3, 0x4(r30)
	  rlwinm    r0,r0,16,0,15
	  lbz       r4, 0x6(r30)
	  rlwimi    r0,r3,24,0,7
	  lbz       r5, 0x7(r30)
	  rlwimi    r0,r4,8,16,23
	  or        r3, r5, r0
	  b         .loc_0x1A8

	.loc_0xAC:
	  rlwinm.   r0,r4,0,26,26
	  addi      r3, r1, 0x2F
	  rlwinm    r30,r3,0,0,26
	  beq-      .loc_0xFC
	  lwz       r3, 0x68(r29)
	  mr        r4, r30
	  lwz       r9, 0x8(r31)
	  li        r5, 0x20
	  lwz       r0, 0x14(r3)
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0
	  add       r3, r9, r0
	  li        r9, -0x1
	  li        r10, 0
	  bl        -0x490C
	  mr        r3, r30
	  li        r4, 0x20
	  bl        0xCFE88
	  b         .loc_0x168

	.loc_0xFC:
	  rlwinm.   r0,r4,0,25,25
	  beq-      .loc_0x148
	  li        r0, 0
	  lwz       r9, 0x6C(r29)
	  stw       r0, 0x8(r1)
	  mr        r4, r30
	  lwz       r3, 0x40(r29)
	  li        r5, 0x2
	  lwz       r0, 0x8(r31)
	  li        r6, 0x20
	  li        r7, 0
	  li        r8, 0x1
	  add       r9, r9, r0
	  li        r10, 0
	  bl        0x2998
	  mr        r3, r30
	  li        r4, 0x20
	  bl        0xCFE3C
	  b         .loc_0x168

	.loc_0x148:
	  lis       r3, 0x8047
	  lis       r5, 0x8047
	  addi      r6, r5, 0x35F0
	  li        r4, 0x3AF
	  addi      r3, r3, 0x35C8
	  subi      r5, r2, 0x7E78
	  crclr     6, 0x6
	  bl        0xDD6C

	.loc_0x168:
	  lbz       r0, 0x5(r30)
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  mr        r4, r31
	  lbz       r5, 0x4(r30)
	  rlwinm    r0,r0,16,0,15
	  lbz       r6, 0x6(r30)
	  rlwimi    r0,r5,24,0,7
	  lbz       r5, 0x7(r30)
	  rlwimi    r0,r6,8,16,23
	  lwz       r12, 0x48(r12)
	  or        r29, r5, r0
	  mr        r5, r29
	  mtctr     r12
	  bctrl
	  mr        r3, r29

	.loc_0x1A8:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}
