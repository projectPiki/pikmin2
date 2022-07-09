#include "Dolphin/os.h"

/*
 * --INFO--
 * Address:	800ED6EC
 * Size:	000080
 */
void OSReport(const char*, ...)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x78(r1)
	  bne-      cr1, .loc_0x30
	  stfd      f1, 0x28(r1)
	  stfd      f2, 0x30(r1)
	  stfd      f3, 0x38(r1)
	  stfd      f4, 0x40(r1)
	  stfd      f5, 0x48(r1)
	  stfd      f6, 0x50(r1)
	  stfd      f7, 0x58(r1)
	  stfd      f8, 0x60(r1)

	.loc_0x30:
	  stw       r3, 0x8(r1)
	  lis       r0, 0x100
	  stw       r4, 0xC(r1)
	  addi      r4, r1, 0x6C
	  stw       r5, 0x10(r1)
	  stw       r6, 0x14(r1)
	  stw       r7, 0x18(r1)
	  stw       r8, 0x1C(r1)
	  stw       r9, 0x20(r1)
	  stw       r10, 0x24(r1)
	  stw       r0, 0x6C(r1)
	  addi      r0, r1, 0x80
	  stw       r0, 0x70(r1)
	  addi      r0, r1, 0x8
	  stw       r0, 0x74(r1)
	  bl        -0x26080
	  lwz       r0, 0x7C(r1)
	  addi      r1, r1, 0x78
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void OSVReport(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ED76C
 * Size:	00012C
 */
void OSPanic(const char* file, int line, const char* message, ...)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x90(r1)
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  stw       r29, 0x84(r1)
	  stw       r28, 0x80(r1)
	  bne-      cr1, .loc_0x40
	  stfd      f1, 0x28(r1)
	  stfd      f2, 0x30(r1)
	  stfd      f3, 0x38(r1)
	  stfd      f4, 0x40(r1)
	  stfd      f5, 0x48(r1)
	  stfd      f6, 0x50(r1)
	  stfd      f7, 0x58(r1)
	  stfd      f8, 0x60(r1)

	.loc_0x40:
	  stw       r3, 0x8(r1)
	  addi      r28, r3, 0
	  addi      r30, r4, 0
	  stw       r4, 0xC(r1)
	  addi      r29, r5, 0
	  stw       r5, 0x10(r1)
	  stw       r6, 0x14(r1)
	  lis       r6, 0x804B
	  subi      r31, r6, 0x7070
	  stw       r7, 0x18(r1)
	  stw       r8, 0x1C(r1)
	  stw       r9, 0x20(r1)
	  stw       r10, 0x24(r1)
	  bl        0x1458
	  lis       r0, 0x300
	  stw       r0, 0x74(r1)
	  addi      r0, r1, 0x98
	  addi      r4, r1, 0x74
	  stw       r0, 0x78(r1)
	  addi      r0, r1, 0x8
	  addi      r3, r29, 0
	  stw       r0, 0x7C(r1)
	  bl        -0x2612C
	  addi      r3, r31, 0
	  crclr     6, 0x6
	  addi      r4, r28, 0
	  addi      r5, r30, 0
	  bl        -0x12C
	  addi      r3, r31, 0x18
	  crclr     6, 0x6
	  bl        -0x138
	  li        r30, 0
	  bl        -0x6C8
	  mr        r29, r3
	  b         .loc_0xE8

	.loc_0xCC:
	  lwz       r5, 0x0(r29)
	  mr        r4, r29
	  lwz       r6, 0x4(r29)
	  addi      r3, r31, 0x40
	  crclr     6, 0x6
	  bl        -0x160
	  lwz       r29, 0x0(r29)

	.loc_0xE8:
	  cmplwi    r29, 0
	  beq-      .loc_0x108
	  addis     r0, r29, 0x1
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x108
	  cmplwi    r30, 0x10
	  addi      r30, r30, 0x1
	  blt+      .loc_0xCC

	.loc_0x108:
	  bl        -0x192DC
	  lwz       r0, 0x94(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r29, 0x84(r1)
	  lwz       r28, 0x80(r1)
	  addi      r1, r1, 0x90
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800ED898
 * Size:	000218
 */
void OSSetErrorHandler(void)
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
	  stw       r28, 0x20(r1)
	  addi      r28, r4, 0
	  bl        0x137C
	  lis       r4, 0x804F
	  rlwinm    r5,r29,2,14,29
	  addi      r0, r4, 0x6670
	  rlwinm    r6,r29,0,16,31
	  add       r4, r0, r5
	  lwz       r30, 0x0(r4)
	  cmplwi    r6, 0x10
	  mr        r29, r3
	  stw       r28, 0x0(r4)
	  bne-      .loc_0x1EC
	  bl        -0x19390
	  addi      r31, r3, 0
	  ori       r3, r31, 0x2000
	  bl        -0x19394
	  bl        -0x1931C
	  cmplwi    r28, 0
	  beq-      .loc_0x180
	  lis       r5, 0x8000
	  lis       r4, 0x6006
	  lwz       r6, 0xDC(r5)
	  subi      r4, r4, 0x701
	  b         .loc_0x164

	.loc_0x80:
	  lwz       r0, 0x19C(r6)
	  ori       r0, r0, 0x900
	  stw       r0, 0x19C(r6)
	  lhz       r5, 0x1A2(r6)
	  rlwinm.   r0,r5,0,31,31
	  bne-      .loc_0x140
	  ori       r5, r5, 0x1
	  li        r0, 0x4
	  sth       r5, 0x1A2(r6)
	  mtctr     r0
	  addi      r5, r6, 0

	.loc_0xAC:
	  li        r0, -0x1
	  stw       r0, 0x94(r5)
	  stw       r0, 0x90(r5)
	  stw       r0, 0x1CC(r5)
	  stw       r0, 0x1C8(r5)
	  stw       r0, 0x9C(r5)
	  stw       r0, 0x98(r5)
	  stw       r0, 0x1D4(r5)
	  stw       r0, 0x1D0(r5)
	  stw       r0, 0xA4(r5)
	  stw       r0, 0xA0(r5)
	  stw       r0, 0x1DC(r5)
	  stw       r0, 0x1D8(r5)
	  stw       r0, 0xAC(r5)
	  stw       r0, 0xA8(r5)
	  stw       r0, 0x1E4(r5)
	  stw       r0, 0x1E0(r5)
	  stw       r0, 0xB4(r5)
	  stw       r0, 0xB0(r5)
	  stw       r0, 0x1EC(r5)
	  stw       r0, 0x1E8(r5)
	  stw       r0, 0xBC(r5)
	  stw       r0, 0xB8(r5)
	  stw       r0, 0x1F4(r5)
	  stw       r0, 0x1F0(r5)
	  stw       r0, 0xC4(r5)
	  stw       r0, 0xC0(r5)
	  stw       r0, 0x1FC(r5)
	  stw       r0, 0x1F8(r5)
	  stw       r0, 0xCC(r5)
	  stw       r0, 0xC8(r5)
	  stw       r0, 0x204(r5)
	  stw       r0, 0x200(r5)
	  addi      r5, r5, 0x40
	  bdnz+     .loc_0xAC
	  li        r0, 0x4
	  stw       r0, 0x194(r6)

	.loc_0x140:
	  lwz       r0, -0x7C98(r13)
	  lwz       r5, 0x194(r6)
	  rlwinm    r0,r0,0,24,28
	  or        r0, r5, r0
	  stw       r0, 0x194(r6)
	  lwz       r0, 0x194(r6)
	  and       r0, r0, r4
	  stw       r0, 0x194(r6)
	  lwz       r6, 0x2FC(r6)

	.loc_0x164:
	  cmplwi    r6, 0
	  bne+      .loc_0x80
	  lwz       r0, -0x7C98(r13)
	  ori       r31, r31, 0x900
	  rlwinm    r0,r0,0,24,28
	  or        r3, r3, r0
	  b         .loc_0x1D4

	.loc_0x180:
	  lis       r5, 0x8000
	  lis       r4, 0x6006
	  lwz       r6, 0xDC(r5)
	  subi      r4, r4, 0x701
	  li        r5, -0x901
	  b         .loc_0x1C0

	.loc_0x198:
	  lwz       r0, 0x19C(r6)
	  and       r0, r0, r5
	  stw       r0, 0x19C(r6)
	  lwz       r0, 0x194(r6)
	  rlwinm    r0,r0,0,29,23
	  stw       r0, 0x194(r6)
	  lwz       r0, 0x194(r6)
	  and       r0, r0, r4
	  stw       r0, 0x194(r6)
	  lwz       r6, 0x2FC(r6)

	.loc_0x1C0:
	  cmplwi    r6, 0
	  bne+      .loc_0x198
	  li        r0, -0x901
	  rlwinm    r3,r3,0,29,23
	  and       r31, r31, r0

	.loc_0x1D4:
	  lis       r4, 0x6006
	  subi      r0, r4, 0x701
	  and       r3, r3, r0
	  bl        -0x1947C
	  mr        r3, r31
	  bl        -0x19520

	.loc_0x1EC:
	  mr        r3, r29
	  bl        0x11D8
	  mr        r3, r30
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
 * Address:	800EDAB0
 * Size:	0002E8
 */
void __OSUnhandledException(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r8, 0x804F
	  stw       r0, 0x4(r1)
	  lis       r7, 0x804B
	  stwu      r1, -0x40(r1)
	  stmw      r22, 0x18(r1)
	  addi      r24, r3, 0
	  addi      r25, r4, 0
	  addi      r26, r5, 0
	  addi      r27, r6, 0
	  addi      r30, r8, 0x6670
	  subi      r31, r7, 0x7070
	  bl        0x50B0
	  lwz       r5, 0x19C(r25)
	  addi      r28, r4, 0
	  addi      r29, r3, 0
	  rlwinm.   r0,r5,0,30,30
	  bne-      .loc_0x5C
	  addi      r3, r31, 0x5C
	  crclr     6, 0x6
	  rlwinm    r4,r24,0,24,31
	  bl        -0x418
	  b         .loc_0x1AC

	.loc_0x5C:
	  rlwinm    r0,r24,0,24,31
	  cmplwi    r0, 0x6
	  bne-      .loc_0x13C
	  rlwinm.   r0,r5,0,11,11
	  beq-      .loc_0x13C
	  lwz       r0, 0x40(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x13C
	  li        r24, 0x10
	  bl        -0x195D8
	  addi      r23, r3, 0
	  ori       r3, r23, 0x2000
	  bl        -0x195DC
	  lis       r3, 0x8000
	  lwz       r3, 0xD8(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xA4
	  bl        -0xBB4

	.loc_0xA4:
	  bl        -0x19578
	  lis       r4, 0x6006
	  subi      r22, r4, 0x701
	  and       r3, r3, r22
	  bl        -0x19568
	  mr        r3, r23
	  bl        -0x1960C
	  lis       r23, 0x8000
	  lwz       r0, 0xD8(r23)
	  cmplw     r0, r25
	  bne-      .loc_0x120
	  bl        0x3E84
	  lwz       r12, 0x40(r30)
	  addi      r4, r25, 0
	  addi      r5, r26, 0
	  crclr     6, 0x6
	  mtlr      r12
	  addi      r6, r27, 0
	  li        r3, 0x10
	  blrl
	  lwz       r3, 0x19C(r25)
	  li        r0, 0
	  rlwinm    r3,r3,0,19,17
	  stw       r3, 0x19C(r25)
	  stw       r0, 0xD8(r23)
	  lwz       r0, 0x194(r25)
	  and       r0, r0, r22
	  stw       r0, 0x194(r25)
	  bl        0x3E80
	  bl        0x4398
	  b         .loc_0x134

	.loc_0x120:
	  lwz       r3, 0x19C(r25)
	  li        r0, 0
	  rlwinm    r3,r3,0,19,17
	  stw       r3, 0x19C(r25)
	  stw       r0, 0xD8(r23)

	.loc_0x134:
	  mr        r3, r25
	  bl        -0xB5C

	.loc_0x13C:
	  rlwinm    r23,r24,0,24,31
	  rlwinm    r0,r24,2,22,29
	  add       r22, r30, r0
	  lwz       r0, 0x0(r22)
	  cmplwi    r0, 0
	  beq-      .loc_0x188
	  bl        0x3E00
	  lwz       r12, 0x0(r22)
	  addi      r3, r23, 0
	  addi      r4, r25, 0
	  crclr     6, 0x6
	  mtlr      r12
	  addi      r5, r26, 0
	  addi      r6, r27, 0
	  blrl
	  bl        0x3E1C
	  bl        0x4334
	  mr        r3, r25
	  bl        -0xBA8

	.loc_0x188:
	  rlwinm    r0,r24,0,24,31
	  cmplwi    r0, 0x8
	  bne-      .loc_0x19C
	  mr        r3, r25
	  bl        -0xBBC

	.loc_0x19C:
	  addi      r3, r31, 0x7C
	  crclr     6, 0x6
	  rlwinm    r4,r24,0,24,31
	  bl        -0x56C

	.loc_0x1AC:
	  subi      r3, r13, 0x7C94
	  crclr     6, 0x6
	  bl        -0x578
	  mr        r3, r25
	  bl        -0xA20
	  addi      r4, r26, 0
	  crclr     6, 0x6
	  addi      r5, r27, 0
	  addi      r3, r31, 0x94
	  bl        -0x594
	  addi      r6, r28, 0
	  crclr     6, 0x6
	  addi      r5, r29, 0
	  addi      r3, r31, 0xC8
	  bl        -0x5A8
	  rlwinm    r0,r24,0,24,31
	  cmplwi    r0, 0xF
	  bgt-      .loc_0x2B4
	  lis       r3, 0x804B
	  subi      r3, r3, 0x6D94
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lwz       r4, 0x198(r25)
	  addi      r5, r27, 0
	  addi      r3, r31, 0xD8
	  crclr     6, 0x6
	  bl        -0x5E0
	  b         .loc_0x2B4
	  lwz       r4, 0x198(r25)
	  addi      r3, r31, 0x138
	  crclr     6, 0x6
	  bl        -0x5F4
	  b         .loc_0x2B4
	  lwz       r4, 0x198(r25)
	  addi      r5, r27, 0
	  addi      r3, r31, 0x184
	  crclr     6, 0x6
	  bl        -0x60C
	  b         .loc_0x2B4
	  lwz       r4, 0x198(r25)
	  addi      r5, r27, 0
	  addi      r3, r31, 0x1E8
	  crclr     6, 0x6
	  bl        -0x624
	  b         .loc_0x2B4
	  subi      r3, r13, 0x7C94
	  crclr     6, 0x6
	  bl        -0x634
	  lis       r25, 0xCC00
	  crclr     6, 0x6
	  addi      r24, r25, 0x5000
	  lhz       r4, 0x5030(r25)
	  addi      r3, r31, 0x248
	  lhz       r5, 0x5032(r25)
	  bl        -0x650
	  lhz       r4, 0x20(r24)
	  addi      r3, r31, 0x268
	  lhz       r5, 0x22(r24)
	  crclr     6, 0x6
	  bl        -0x664
	  lwz       r4, 0x6014(r25)
	  crclr     6, 0x6
	  addi      r3, r31, 0x288
	  bl        -0x674

	.loc_0x2B4:
	  lha       r4, -0x7078(r13)
	  addi      r3, r31, 0x2A4
	  crclr     6, 0x6
	  lwz       r5, -0x707C(r13)
	  lwz       r7, -0x7070(r13)
	  lwz       r8, -0x706C(r13)
	  bl        -0x690
	  bl        -0x197E8
	  lmw       r22, 0x18(r1)
	  lwz       r0, 0x44(r1)
	  addi      r1, r1, 0x40
	  mtlr      r0
	  blr
	*/
}
