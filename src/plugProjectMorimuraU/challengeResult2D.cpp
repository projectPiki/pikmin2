#include "types.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80393348
 * Size:	000020
 */
void Morimura::TChallengeResultScreen::create((char const*, unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0xE07C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80393368
 * Size:	000118
 */
void Morimura::TChallengeResultScreen::createAnimPane((char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0xC4(r1)
	  li        r0, 0x13
	  addi      r5, r5, 0x4780
	  addi      r6, r1, 0x4
	  stmw      r27, 0xAC(r1)
	  mr        r31, r4
	  mr        r30, r3
	  subi      r4, r5, 0x4
	  mtctr     r0

	.loc_0x30:
	  lwz       r3, 0x4(r4)
	  lwzu      r0, 0x8(r4)
	  stw       r3, 0x4(r6)
	  stwu      r0, 0x8(r6)
	  bdnz+     .loc_0x30
	  li        r0, 0x13
	  stw       r0, 0x18(r30)
	  lwz       r0, 0x18(r30)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x36F410
	  stw       r3, 0x1C(r30)
	  addi      r28, r1, 0x8
	  li        r27, 0
	  li        r29, 0
	  b         .loc_0xB8

	.loc_0x6C:
	  li        r3, 0x44
	  bl        -0x36F534
	  mr.       r0, r3
	  beq-      .loc_0x84
	  bl        -0x8E26C
	  mr        r0, r3

	.loc_0x84:
	  lwz       r3, 0x1C(r30)
	  mr        r9, r31
	  stwx      r0, r3, r29
	  lwz       r3, 0x1C(r30)
	  lwz       r4, 0xC(r30)
	  lwzx      r3, r3, r29
	  lwz       r5, 0x8(r30)
	  lwz       r7, 0x0(r28)
	  lwz       r8, 0x4(r28)
	  bl        -0x8E1F8
	  addi      r29, r29, 0x4
	  addi      r28, r28, 0x8
	  addi      r27, r27, 0x1

	.loc_0xB8:
	  lwz       r0, 0x18(r30)
	  cmpw      r27, r0
	  blt+      .loc_0x6C
	  li        r3, 0x44
	  bl        -0x36F58C
	  mr.       r0, r3
	  beq-      .loc_0xDC
	  bl        -0x8E2C4
	  mr        r0, r3

	.loc_0xDC:
	  stw       r0, 0x2C(r30)
	  lis       r4, 0x5F30
	  lis       r5, 0x4E55
	  mr        r9, r31
	  lwz       r3, 0x2C(r30)
	  addi      r8, r4, 0x3031
	  lwz       r4, 0xC(r30)
	  addi      r7, r5, 0x4C4C
	  lwz       r5, 0x8(r30)
	  bl        -0x8E250
	  lmw       r27, 0xAC(r1)
	  lwz       r0, 0xC4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80393480
 * Size:	000054
 */
void Morimura::TChallengeResultScreen::updateBckPane(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x6108
	  lwz       r3, 0x2C(r31)
	  bl        -0x8E68C
	  lwz       r3, 0x2C(r31)
	  lfs       f0, 0xD20(r2)
	  lfs       f1, 0x18(r3)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x40
	  lfs       f0, 0xD24(r2)
	  stfs      f0, 0x18(r3)

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void Morimura::TChallengeResultDemoScreen::__ct((JKRArchive*, int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803934D4
 * Size:	0000F8
 */
void Morimura::TChallengeResultDemoScreen::create((char const*, unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0xDEE8
	  li        r3, 0x44
	  bl        -0x36F64C
	  mr.       r0, r3
	  beq-      .loc_0x30
	  bl        -0x8E384
	  mr        r0, r3

	.loc_0x30:
	  stw       r0, 0x18(r31)
	  lis       r3, 0x8049
	  addi      r9, r3, 0x4818
	  lis       r7, 0x5F30
	  lis       r6, 0x4E55
	  lwz       r3, 0x18(r31)
	  addi      r8, r7, 0x3031
	  lwz       r4, 0xC(r31)
	  lwz       r5, 0x8(r31)
	  addi      r7, r6, 0x4C4C
	  bl        -0x8E314
	  li        r3, 0x44
	  bl        -0x36F690
	  mr.       r0, r3
	  beq-      .loc_0x74
	  bl        -0x8E3C8
	  mr        r0, r3

	.loc_0x74:
	  stw       r0, 0x1C(r31)
	  lis       r3, 0x8049
	  addi      r9, r3, 0x4818
	  lis       r7, 0x626F
	  lis       r6, 0x4E
	  lwz       r3, 0x1C(r31)
	  addi      r8, r7, 0x6E73
	  lwz       r4, 0xC(r31)
	  lwz       r5, 0x8(r31)
	  addi      r7, r6, 0x7269
	  bl        -0x8E358
	  li        r3, 0x44
	  bl        -0x36F6D4
	  mr.       r0, r3
	  beq-      .loc_0xB8
	  bl        -0x8E40C
	  mr        r0, r3

	.loc_0xB8:
	  stw       r0, 0x20(r31)
	  lis       r3, 0x8049
	  addi      r9, r3, 0x4818
	  lis       r7, 0x6F6E
	  lis       r6, 0x4E72
	  lwz       r3, 0x20(r31)
	  addi      r8, r7, 0x7332
	  lwz       r4, 0xC(r31)
	  lwz       r5, 0x8(r31)
	  addi      r7, r6, 0x6962
	  bl        -0x8E39C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803935CC
 * Size:	0000E4
 */
void Morimura::TChallengeResultDemoScreen::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x8(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xC0
	  lbz       r0, 0x24(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0xC0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lfs       f31, 0xD28(r2)
	  li        r30, 0
	  li        r31, 0
	  b         .loc_0x94

	.loc_0x5C:
	  lwz       r3, 0x4(r29)
	  lwzx      r3, r3, r31
	  bl        -0x8E820
	  cmpwi     r30, 0
	  bne-      .loc_0x8C
	  lwz       r3, 0x4(r29)
	  lwz       r3, 0x0(r3)
	  lfs       f0, 0x18(r3)
	  fcmpo     cr0, f0, f31
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x8C
	  stfs      f31, 0x18(r3)

	.loc_0x8C:
	  addi      r31, r31, 0x4
	  addi      r30, r30, 0x1

	.loc_0x94:
	  lwz       r0, 0x10(r29)
	  cmpw      r30, r0
	  blt+      .loc_0x5C
	  lwz       r3, 0x18(r29)
	  bl        -0x8E860
	  lwz       r3, 0x1C(r29)
	  bl        -0x8E868
	  lwz       r3, 0x20(r29)
	  bl        -0x8E870
	  lwz       r3, 0x8(r29)
	  bl        -0x352B5C

	.loc_0xC0:
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803936B0
 * Size:	00002C
 */
void Morimura::TChallengeResultDemoScreen::draw((Graphics&, J2DPerspGraph*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1C
	  bl        0xDED0

	.loc_0x1C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void Morimura::TChallengeResultDemoScreen::startDemo(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void Morimura::TChallengeResultDemoScreen::setComplete((bool))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void Morimura::TChallengeResultDemoScreen::reset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void Morimura::TMovePane::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803936DC
 * Size:	00007C
 */
void Morimura::TMovePane::setPane((J2DPane*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x4850
	  li        r4, 0x10F
	  addi      r5, r5, 0x4868
	  crclr     6, 0x6
	  bl        -0x3690D4

	.loc_0x3C:
	  stw       r31, 0x0(r30)
	  li        r4, 0x4
	  lwz       r3, 0x0(r30)
	  bl        -0x35AA68
	  lfs       f1, 0xD8(r31)
	  mr        r3, r30
	  lfs       f0, 0xD4(r31)
	  stfs      f0, 0x10(r30)
	  stfs      f1, 0x14(r30)
	  bl        0x720
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80393758
 * Size:	0000FC
 */
void Morimura::TMovePane::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x3C(r3)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x54
	  bge-      .loc_0x34
	  cmpwi     r0, 0x1
	  beq-      .loc_0x44
	  bge-      .loc_0x4C
	  b         .loc_0x78

	.loc_0x34:
	  cmpwi     r0, 0x5
	  beq-      .loc_0x74
	  bge-      .loc_0x78
	  b         .loc_0x6C

	.loc_0x44:
	  bl        .loc_0xFC
	  b         .loc_0x78

	.loc_0x4C:
	  bl        0x21C
	  b         .loc_0x78

	.loc_0x54:
	  bl        0x31C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x78
	  li        r0, 0
	  stw       r0, 0x3C(r31)
	  b         .loc_0x78

	.loc_0x6C:
	  bl        0x538
	  b         .loc_0x78

	.loc_0x74:
	  bl        0x500

	.loc_0x78:
	  lwz       r3, 0x0(r31)
	  lfs       f1, 0x1C(r31)
	  lfs       f0, 0x18(r31)
	  stfs      f0, 0xD4(r3)
	  stfs      f1, 0xD8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xD2C(r2)
	  lfs       f0, 0x38(r31)
	  fsubs     f1, f1, f0
	  bl        0x7E3D0
	  lfs       f0, 0xD30(r2)
	  lwz       r3, 0x0(r31)
	  fmuls     f1, f0, f1
	  lfs       f0, 0xD2C(r2)
	  fdivs     f0, f1, f0
	  stfs      f0, 0xC0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x40(r31)
	  cmpwi     r3, 0
	  ble-      .loc_0xE8
	  addi      r0, r3, 0x1
	  stw       r0, 0x40(r31)

	.loc_0xE8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0xFC:
	*/
}

/*
 * --INFO--
 * Address:	80393854
 * Size:	00016C
 */
void Morimura::TMovePane::move(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  bl        .loc_0x16C
	  lfs       f3, 0x38(r31)
	  lfs       f0, 0xD24(r2)
	  lfs       f2, -0x79F0(r13)
	  fcmpo     cr0, f3, f0
	  lfs       f1, -0x7A08(r13)
	  bge-      .loc_0x5C
	  lfs       f0, 0xD34(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x80

	.loc_0x5C:
	  lfs       f0, 0xD38(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f3, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x80:
	  fmuls     f1, f1, f0
	  lfs       f0, 0xD24(r2)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x28(r31)
	  lfs       f2, 0x38(r31)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0xA0
	  fneg      f2, f2

	.loc_0xA0:
	  lfs       f0, 0xD38(r2)
	  lis       r3, 0x8050
	  addi      r4, r3, 0x71A0
	  lfs       f1, -0x7A08(r13)
	  fmuls     f0, f2, f0
	  lfs       f2, -0x79F0(r13)
	  mr        r3, r31
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r4, r4, r0
	  lfs       f0, 0x4(r4)
	  fneg      f0, f0
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  stfs      f0, 0x2C(r31)
	  lfs       f0, 0x28(r31)
	  lfs       f5, 0x20(r31)
	  lfs       f1, 0x2C(r31)
	  lfs       f3, 0x24(r31)
	  fsubs     f0, f0, f5
	  lfs       f2, -0x79FC(r13)
	  fsubs     f1, f1, f3
	  lfs       f4, -0x79F0(r13)
	  fmuls     f0, f0, f2
	  fmuls     f1, f1, f2
	  fmuls     f0, f0, f4
	  fmuls     f2, f1, f4
	  fadds     f1, f5, f0
	  fadds     f0, f3, f2
	  stfs      f1, 0x20(r31)
	  stfs      f0, 0x24(r31)
	  lfs       f1, 0x18(r31)
	  lfs       f0, 0x20(r31)
	  fadds     f0, f1, f0
	  stfs      f0, 0x18(r31)
	  lfs       f1, 0x1C(r31)
	  lfs       f0, 0x24(r31)
	  fadds     f0, f1, f0
	  stfs      f0, 0x1C(r31)
	  bl        0x490
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x158
	  li        r0, 0x3
	  stw       r0, 0x3C(r31)

	.loc_0x158:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x16C:
	*/
}

/*
 * --INFO--
 * Address:	803939C0
 * Size:	00008C
 */
void Morimura::TMovePane::turn(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        .loc_0x8C
	  lfs       f0, -0x7A04(r13)
	  lfs       f4, -0x79F0(r13)
	  fmuls     f3, f0, f1
	  lfs       f0, -0x7A00(r13)
	  lfs       f1, 0xD40(r2)
	  fmuls     f0, f0, f4
	  lfs       f2, 0xD3C(r2)
	  fmuls     f3, f4, f3
	  fmuls     f0, f1, f0
	  fabs      f1, f3
	  fmuls     f2, f2, f0
	  frsp      f0, f1
	  fcmpo     cr0, f0, f2
	  ble-      .loc_0x68
	  lfs       f0, 0xD24(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x64
	  fmr       f3, f2
	  b         .loc_0x68

	.loc_0x64:
	  fneg      f3, f2

	.loc_0x68:
	  lfs       f0, 0x38(r31)
	  fadds     f1, f0, f3
	  bl        0x7E1A0
	  stfs      f1, 0x38(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x8C:
	*/
}

/*
 * --INFO--
 * Address:	80393A4C
 * Size:	00007C
 */
void Morimura::TMovePane::getAngDist(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, 0xD24(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lfs       f2, 0x8(r3)
	  lfs       f1, 0x18(r3)
	  fsubs     f1, f2, f1
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x30
	  lfs       f1, 0xD44(r2)

	.loc_0x30:
	  lfs       f3, 0xC(r31)
	  lfs       f2, 0x1C(r31)
	  lfs       f0, 0xD24(r2)
	  fsubs     f2, f3, f2
	  fcmpu     cr0, f0, f2
	  bne-      .loc_0x4C
	  lfs       f2, 0xD44(r2)

	.loc_0x4C:
	  fneg      f2, f2
	  lis       r3, 0x8051
	  subi      r3, r3, 0x2E20
	  bl        -0x35E99C
	  bl        0x7E128
	  lfs       f2, 0x38(r31)
	  bl        0x7E14C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80393AC8
 * Size:	000204
 */
void Morimura::TMovePane::hosei(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, 0xD24(r2)
	  stw       r0, 0x14(r1)
	  lfs       f2, 0xD48(r2)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  stfs      f0, 0x28(r3)
	  stfs      f0, 0x2C(r3)
	  stfs      f0, 0x20(r3)
	  stfs      f0, 0x24(r3)
	  lfs       f0, -0x79F0(r13)
	  lfs       f3, 0x8(r3)
	  lfs       f1, 0x18(r3)
	  fmuls     f4, f2, f0
	  lfs       f0, 0x18(r3)
	  fsubs     f5, f3, f1
	  lfs       f3, 0xC(r3)
	  lfs       f1, 0x1C(r3)
	  fmuls     f5, f5, f4
	  fsubs     f3, f3, f1
	  fadds     f0, f0, f5
	  fabs      f1, f5
	  fmuls     f3, f3, f4
	  stfs      f0, 0x18(r3)
	  frsp      f0, f1
	  lfs       f1, 0x1C(r3)
	  fadds     f1, f1, f3
	  fcmpo     cr0, f0, f2
	  stfs      f1, 0x1C(r3)
	  bge-      .loc_0xA8
	  fabs      f0, f3
	  frsp      f0, f0
	  fcmpo     cr0, f0, f2
	  bge-      .loc_0xA8
	  lfs       f0, 0x8(r30)
	  li        r31, 0x1
	  stfs      f0, 0x18(r30)
	  lfs       f0, 0xC(r30)
	  stfs      f0, 0x1C(r30)

	.loc_0xA8:
	  lfs       f2, 0xC(r30)
	  lfs       f1, 0xD4C(r2)
	  lfs       f0, 0xD24(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0xC(r30)
	  lfs       f2, 0x8(r30)
	  lfs       f1, 0x18(r30)
	  fsubs     f1, f2, f1
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0xD4
	  lfs       f1, 0xD44(r2)

	.loc_0xD4:
	  lfs       f3, 0xC(r30)
	  lfs       f2, 0x1C(r30)
	  lfs       f0, 0xD24(r2)
	  fsubs     f2, f3, f2
	  fcmpu     cr0, f0, f2
	  bne-      .loc_0xF0
	  lfs       f2, 0xD44(r2)

	.loc_0xF0:
	  fneg      f2, f2
	  lis       r3, 0x8051
	  subi      r3, r3, 0x2E20
	  bl        -0x35EABC
	  bl        0x7E008
	  lfs       f2, 0x38(r30)
	  bl        0x7E02C
	  lfs       f0, -0x7A04(r13)
	  lfs       f4, -0x79F0(r13)
	  fmuls     f3, f0, f1
	  lfs       f0, -0x7A00(r13)
	  lfs       f1, 0xD40(r2)
	  fmuls     f0, f0, f4
	  lfs       f2, 0xD3C(r2)
	  fmuls     f3, f4, f3
	  fmuls     f0, f1, f0
	  fabs      f4, f3
	  fmuls     f1, f2, f0
	  frsp      f0, f4
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x15C
	  lfs       f0, 0xD24(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x158
	  fmr       f3, f1
	  b         .loc_0x15C

	.loc_0x158:
	  fneg      f3, f1

	.loc_0x15C:
	  lfs       f0, 0x38(r30)
	  fadds     f1, f0, f3
	  bl        0x7DFA4
	  stfs      f1, 0x38(r30)
	  lfs       f0, 0xD24(r2)
	  lfs       f2, 0x8(r30)
	  lfs       f1, 0x18(r30)
	  fsubs     f1, f2, f1
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x188
	  lfs       f1, 0xD44(r2)

	.loc_0x188:
	  lfs       f3, 0xC(r30)
	  lfs       f2, 0x1C(r30)
	  lfs       f0, 0xD24(r2)
	  fsubs     f2, f3, f2
	  fcmpu     cr0, f0, f2
	  bne-      .loc_0x1A4
	  lfs       f2, 0xD44(r2)

	.loc_0x1A4:
	  fneg      f2, f2
	  lis       r3, 0x8051
	  subi      r3, r3, 0x2E20
	  bl        -0x35EB70
	  bl        0x7DF54
	  lfs       f2, 0x38(r30)
	  bl        0x7DF78
	  fabs      f1, f1
	  lfs       f0, 0xD50(r2)
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1D8
	  li        r31, 0

	.loc_0x1D8:
	  lfs       f1, 0xC(r30)
	  mr        r3, r31
	  lfs       f0, 0xD4C(r2)
	  fadds     f0, f1, f0
	  stfs      f0, 0xC(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80393CCC
 * Size:	000030
 */
void Morimura::TMovePane::rolling(void)
{
	/*
	.loc_0x0:
	  lfs       f3, 0xD54(r2)
	  lfs       f2, -0x79F0(r13)
	  lfs       f1, 0x38(r3)
	  lfs       f0, 0xD2C(r2)
	  fmadds    f1, f3, f2, f1
	  stfs      f1, 0x38(r3)
	  lfs       f1, 0x38(r3)
	  fcmpo     cr0, f1, f0
	  blelr-
	  fsubs     f0, f1, f0
	  stfs      f0, 0x38(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80393CFC
 * Size:	00012C
 */
void Morimura::TMovePane::stick(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, 0xD24(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lfs       f2, 0x8(r3)
	  lfs       f1, 0x18(r3)
	  fsubs     f1, f2, f1
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x30
	  lfs       f1, 0xD44(r2)

	.loc_0x30:
	  lfs       f3, 0xC(r31)
	  lfs       f2, 0x1C(r31)
	  lfs       f0, 0xD24(r2)
	  fsubs     f2, f3, f2
	  fcmpu     cr0, f0, f2
	  bne-      .loc_0x4C
	  lfs       f2, 0xD44(r2)

	.loc_0x4C:
	  fneg      f2, f2
	  lis       r3, 0x8051
	  subi      r3, r3, 0x2E20
	  bl        -0x35EC4C
	  bl        0x7DE78
	  lfs       f2, 0x38(r31)
	  bl        0x7DE9C
	  lfs       f0, -0x7A04(r13)
	  lfs       f4, -0x79F0(r13)
	  fmuls     f3, f0, f1
	  lfs       f0, -0x7A00(r13)
	  lfs       f1, 0xD40(r2)
	  fmuls     f0, f0, f4
	  lfs       f2, 0xD3C(r2)
	  fmuls     f3, f4, f3
	  fmuls     f0, f1, f0
	  fabs      f4, f3
	  fmuls     f1, f2, f0
	  frsp      f0, f4
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0xB8
	  lfs       f0, 0xD24(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0xB4
	  fmr       f3, f1
	  b         .loc_0xB8

	.loc_0xB4:
	  fneg      f3, f1

	.loc_0xB8:
	  lfs       f0, 0x38(r31)
	  fadds     f1, f0, f3
	  bl        0x7DE14
	  stfs      f1, 0x38(r31)
	  lwz       r0, 0x4(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xF0
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x4850
	  li        r4, 0x1BD
	  addi      r5, r5, 0x4874
	  crclr     6, 0x6
	  bl        -0x3697A8

	.loc_0xF0:
	  lwz       r3, 0x4(r31)
	  lfs       f1, 0x30(r31)
	  lfs       f0, 0x8C(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x18(r31)
	  lwz       r3, 0x4(r31)
	  lfs       f1, 0x34(r31)
	  lfs       f0, 0x9C(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x1C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void Morimura::TMovePane::forceTurn(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void Morimura::TMovePane::startStick((J2DPane*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80393E28
 * Size:	000034
 */
void Morimura::TMovePane::isReachToGoal(void)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x1C(r3)
	  lfs       f0, 0xC(r3)
	  lfs       f2, 0x18(r3)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x8(r3)
	  lfs       f0, 0xD58(r2)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r3,r0,1,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80393E5C
 * Size:	0000D0
 */
void Morimura::TMovePane::reset(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, 0xD24(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stfs      f1, 0x20(r3)
	  stfs      f1, 0x24(r3)
	  lfs       f0, 0x20(r3)
	  stfs      f0, 0x28(r3)
	  lfs       f0, 0x24(r3)
	  stfs      f0, 0x2C(r3)
	  lfs       f0, 0x10(r3)
	  stfs      f0, 0x18(r3)
	  lfs       f0, 0x14(r3)
	  stfs      f0, 0x1C(r3)
	  lfs       f0, 0x18(r3)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x1C(r3)
	  stfs      f0, 0xC(r3)
	  stw       r0, 0x3C(r3)
	  stw       r0, 0x40(r3)
	  stfs      f1, 0x38(r3)
	  lwz       r3, 0x0(r3)
	  lfs       f1, 0x1C(r31)
	  lfs       f0, 0x18(r31)
	  stfs      f0, 0xD4(r3)
	  stfs      f1, 0xD8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xD2C(r2)
	  lfs       f0, 0x38(r31)
	  fsubs     f1, f1, f0
	  bl        0x7DCE4
	  lfs       f0, 0xD30(r2)
	  lwz       r3, 0x0(r31)
	  fmuls     f1, f0, f1
	  lfs       f0, 0xD2C(r2)
	  fdivs     f0, f1, f0
	  stfs      f0, 0xC0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80393F2C
 * Size:	000100
 */
void Morimura::setTCounterRV(P2DScreen::Mgr*, unsigned long long,
                             unsigned long long, unsigned long long,
                             unsigned long*, unsigned short, unsigned short,
                             JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r20, 0x10(r1)
	  mr        r24, r3
	  lwz       r31, 0x48(r1)
	  mr        r26, r5
	  lhz       r20, 0x4E(r1)
	  mr        r25, r6
	  lhz       r21, 0x52(r1)
	  mr        r28, r7
	  lwz       r22, 0x54(r1)
	  mr        r27, r8
	  mr        r30, r9
	  mr        r29, r10
	  li        r3, 0xB4
	  bl        -0x3700C8
	  mr.       r23, r3
	  beq-      .loc_0x68
	  lis       r4, 0x804D
	  mr        r5, r20
	  addi      r4, r4, 0x7E18
	  mr        r6, r21
	  mr        r7, r22
	  bl        .loc_0x100
	  mr        r23, r3

	.loc_0x68:
	  cmplwi    r23, 0
	  bne-      .loc_0x8C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x4850
	  li        r4, 0x206
	  addi      r5, r5, 0x4868
	  crclr     6, 0x6
	  bl        -0x369974

	.loc_0x8C:
	  stw       r31, 0x8(r1)
	  li        r0, 0x1
	  mr        r3, r23
	  mr        r4, r24
	  stw       r0, 0xC(r1)
	  mr        r6, r25
	  mr        r5, r26
	  mr        r8, r27
	  lwz       r12, 0x0(r23)
	  mr        r7, r28
	  mr        r10, r29
	  mr        r9, r30
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r23
	  li        r4, 0
	  bl        -0x88824
	  mr        r3, r24
	  mr        r6, r25
	  mr        r5, r26
	  mr        r7, r23
	  bl        0xA0B14
	  mr        r3, r23
	  lmw       r20, 0x10(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr

	.loc_0x100:
	*/
}

/*
 * --INFO--
 * Address:	8039402C
 * Size:	000130
 */
void Morimura::TCounterRV::__ct((char**, unsigned short, unsigned short,
                                 JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  bl        -0x88B1C
	  lis       r4, 0x804E
	  li        r3, 0
	  addi      r4, r4, 0x52C4
	  li        r0, 0xFF
	  stw       r4, 0x0(r27)
	  stw       r3, 0xAC(r27)
	  stb       r3, 0xB0(r27)
	  stb       r3, 0xB1(r27)
	  stb       r0, 0xAB(r27)
	  stb       r0, 0xAA(r27)
	  stb       r0, 0xA9(r27)
	  stb       r0, 0xA8(r27)
	  lhz       r0, 0x2E(r27)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x3700D0
	  lis       r5, 0x804E
	  lis       r4, 0x804E
	  addi      r5, r5, 0x7420
	  stw       r3, 0xAC(r27)
	  addi      r3, r4, 0x7610
	  li        r28, 0
	  addi      r30, r5, 0x18
	  li        r31, 0
	  addi      r29, r3, 0x18
	  b         .loc_0x100

	.loc_0x7C:
	  li        r3, 0x18
	  bl        -0x370208
	  cmplwi    r3, 0
	  beq-      .loc_0xF0
	  lis       r5, 0x804C
	  lis       r4, 0x804C
	  addi      r0, r5, 0x14F0
	  lis       r6, 0x804A
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x14D8
	  lis       r5, 0x804E
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  li        r8, 0
	  subi      r7, r6, 0x1D84
	  addi      r6, r5, 0x7420
	  stb       r8, 0x4(r3)
	  li        r5, 0x8
	  addi      r0, r4, 0x7610
	  lfs       f0, 0xD5C(r2)
	  stb       r8, 0x5(r3)
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r30, 0x8(r3)
	  sth       r5, 0xC(r3)
	  stw       r8, 0x10(r3)
	  stw       r0, 0x0(r3)
	  stw       r29, 0x8(r3)
	  stfs      f0, 0x14(r3)

	.loc_0xF0:
	  lwz       r4, 0xAC(r27)
	  addi      r28, r28, 0x1
	  stwx      r3, r4, r31
	  addi      r31, r31, 0x4

	.loc_0x100:
	  lhz       r0, 0x2E(r27)
	  cmpw      r28, r0
	  blt+      .loc_0x7C
	  mr        r3, r27
	  li        r4, 0
	  bl        -0x88968
	  mr        r3, r27
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8039415C
 * Size:	0000DC
 */
void Morimura::TCounterRV::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  stw       r28, 0x20(r1)
	  mr        r28, r3
	  bl        -0x87D00
	  li        r29, 0
	  li        r30, 0
	  b         .loc_0xB0

	.loc_0x30:
	  lwz       r3, 0x7C(r28)
	  lwzx      r3, r3, r30
	  lwz       r31, 0x0(r3)
	  cmplwi    r31, 0
	  bne-      .loc_0x60
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x4850
	  li        r4, 0x22D
	  addi      r5, r5, 0x4868
	  crclr     6, 0x6
	  bl        -0x369B78

	.loc_0x60:
	  lwz       r0, 0xA8(r28)
	  mr        r3, r31
	  addi      r4, r1, 0x10
	  stw       r0, 0x8(r1)
	  lbz       r7, 0x8(r1)
	  lbz       r6, 0x9(r1)
	  lbz       r5, 0xA(r1)
	  lbz       r0, 0xB(r1)
	  stb       r7, 0xC(r1)
	  stb       r6, 0xD(r1)
	  stb       r5, 0xE(r1)
	  stb       r0, 0xF(r1)
	  lwz       r0, 0xC(r1)
	  stw       r0, 0x10(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x12C(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x4
	  addi      r29, r29, 0x1

	.loc_0xB0:
	  lhz       r0, 0x2E(r28)
	  cmpw      r29, r0
	  blt+      .loc_0x30
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
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
 * Address:	80394238
 * Size:	0000D8
 */
void Morimura::TCounterRV::setValue((bool, bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stfd      f30, 0x30(r1)
	  psq_st    f30,0x38(r1),0,0
	  stmw      r27, 0x1C(r1)
	  mr        r27, r3
	  lbz       r0, 0xB0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xB0
	  li        r0, 0
	  li        r4, 0x1
	  stb       r0, 0xB0(r27)
	  bl        -0x88A9C
	  lwz       r3, 0x24(r27)
	  bl        -0x918BC
	  lfs       f30, 0xD48(r2)
	  rlwinm    r29,r3,0,16,31
	  lfd       f31, 0xD70(r2)
	  li        r28, 0
	  li        r30, 0
	  lis       r31, 0x4330
	  b         .loc_0xA4

	.loc_0x64:
	  sub       r0, r29, r28
	  lwz       r3, 0x7C(r27)
	  xoris     r0, r0, 0x8000
	  stw       r31, 0x8(r1)
	  lwzx      r3, r3, r30
	  stw       r0, 0xC(r1)
	  lwz       r3, 0x8(r3)
	  lfd       f0, 0x8(r1)
	  lfs       f1, 0xD60(r2)
	  fsubs     f0, f0, f31
	  lfs       f2, 0xD64(r2)
	  lfs       f3, 0xD68(r2)
	  fmuls     f4, f30, f0
	  bl        -0x6B3F8
	  addi      r30, r30, 0x4
	  addi      r28, r28, 0x1

	.loc_0xA4:
	  cmpw      r28, r29
	  blt+      .loc_0x64
	  b         .loc_0xB4

	.loc_0xB0:
	  bl        -0x88264

	.loc_0xB4:
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000150
 */
void Morimura::TCounterRV::createKiraEffect((float, int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void Morimura::TCounterRV::fadeKiraEffect(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void Morimura::TCounterRV::startScaleAnim(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void Morimura::TCounterRV::reset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void Morimura::TChallengeResultCounter::__ct((unsigned long*, int, int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000138
 */
void Morimura::TChallengeResultCounter::start(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void Morimura::TChallengeResultCounter::stop(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void Morimura::TChallengeResultCounter::getFillRate(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001B0
 */
void Morimura::TChallengeResultCounter::update(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void Morimura::TClearTexture::resetTexture(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void Morimura::TClearTexture::changeTexture((bool))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
void getPosition__Q28Morimura13TClearTextureFR10Vector2<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000AC
 */
void getEffectPosition__Q28Morimura13TClearTextureFR10Vector2<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80394310
 * Size:	0002F0
 */
void Morimura::TChallengeResult::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x14(r1)
	  addi      r4, r4, 0x4884
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x4B164
	  lis       r4, 0x804E
	  li        r0, 0
	  addi      r4, r4, 0x5210
	  lis       r3, 0x8038
	  stw       r4, 0x0(r31)
	  addi      r5, r4, 0x10
	  subi      r4, r3, 0x2F48
	  addi      r3, r31, 0xF0
	  stw       r5, 0x18(r31)
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x3
	  stw       r0, 0x7C(r31)
	  stw       r0, 0x80(r31)
	  stw       r0, 0x84(r31)
	  stw       r0, 0x88(r31)
	  stw       r0, 0x8C(r31)
	  stw       r0, 0x90(r31)
	  stw       r0, 0x94(r31)
	  stw       r0, 0x98(r31)
	  stw       r0, 0x9C(r31)
	  stw       r0, 0xA0(r31)
	  stw       r0, 0xBC(r31)
	  stw       r0, 0xC0(r31)
	  stw       r0, 0xC4(r31)
	  stw       r0, 0xC8(r31)
	  stw       r0, 0xCC(r31)
	  stw       r0, 0xD0(r31)
	  stw       r0, 0xD4(r31)
	  bl        -0x2D2B68
	  lis       r4, 0x8038
	  addi      r3, r31, 0x108
	  subi      r4, r4, 0x2F48
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x3
	  bl        -0x2D2B84
	  lis       r4, 0x8039
	  addi      r3, r31, 0x128
	  addi      r4, r4, 0x4600
	  li        r5, 0
	  li        r6, 0x10
	  li        r7, 0x4
	  bl        -0x2D2BA0
	  li        r9, 0
	  li        r5, 0x6
	  stw       r9, 0x1A0(r31)
	  li        r4, 0x1
	  li        r3, -0x1
	  lfs       f1, 0xD24(r2)
	  stw       r9, 0x1A4(r31)
	  li        r0, 0x3
	  mr        r10, r9
	  mr        r11, r9
	  stw       r9, 0x1A8(r31)
	  stw       r9, 0x1AC(r31)
	  stw       r9, 0x1B0(r31)
	  stb       r9, 0x1C4(r31)
	  stb       r9, 0x1C5(r31)
	  stb       r9, 0x1C6(r31)
	  stb       r9, 0x1C7(r31)
	  sth       r5, 0x1DC(r31)
	  sth       r4, 0x1DE(r31)
	  stb       r9, 0x1E0(r31)
	  stw       r3, 0x1E4(r31)
	  stb       r9, 0x1E8(r31)
	  stb       r9, 0x1E9(r31)
	  stfs      f1, 0x1EC(r31)
	  stfs      f1, 0x1F4(r31)
	  stw       r9, 0x1F8(r31)
	  lfs       f0, -0x79F0(r13)
	  stfs      f0, 0x1F0(r31)
	  mtctr     r0

	.loc_0x144:
	  addi      r0, r10, 0xA4
	  addi      r3, r10, 0xB0
	  stwx      r9, r31, r0
	  addi      r0, r10, 0x17C
	  addi      r8, r10, 0x1B8
	  addi      r7, r11, 0xF0
	  stwx      r9, r31, r3
	  addi      r6, r11, 0xF4
	  addi      r5, r11, 0x108
	  addi      r4, r11, 0x10C
	  stwx      r9, r31, r0
	  addi      r3, r10, 0xD8
	  addi      r0, r10, 0xE4
	  addi      r10, r10, 0x4
	  stwx      r9, r31, r8
	  addi      r11, r11, 0x8
	  stfsx     f1, r31, r7
	  stfsx     f1, r31, r6
	  stfsx     f1, r31, r5
	  stfsx     f1, r31, r4
	  stwx      r9, r31, r3
	  stwx      r9, r31, r0
	  bdnz+     .loc_0x144
	  stw       r9, 0x17C(r31)
	  li        r3, 0x14
	  lfs       f0, 0xD24(r2)
	  stw       r9, 0x180(r31)
	  lfs       f12, 0xD90(r2)
	  stw       r9, 0x184(r31)
	  lfs       f11, 0xD94(r2)
	  stw       r9, 0x188(r31)
	  lfs       f10, 0xD98(r2)
	  stw       r9, 0x18C(r31)
	  lfs       f9, 0xD9C(r2)
	  stw       r9, 0x190(r31)
	  lfs       f8, 0xDA0(r2)
	  stw       r9, 0x194(r31)
	  lfs       f7, 0xDA4(r2)
	  stw       r9, 0x198(r31)
	  lfs       f6, 0xDA8(r2)
	  stw       r9, 0x19C(r31)
	  lfs       f5, 0xDAC(r2)
	  stfs      f0, 0x120(r31)
	  lfs       f4, 0xDB0(r2)
	  stfs      f0, 0x124(r31)
	  lfs       f3, 0xDB4(r2)
	  stfs      f0, 0x178(r31)
	  lfs       f2, 0xDB8(r2)
	  stfs      f0, 0x1D4(r31)
	  lfs       f1, 0xDBC(r2)
	  stfs      f0, 0x1D8(r31)
	  lfs       f0, 0xDC0(r2)
	  stfs      f12, 0x128(r31)
	  stfs      f11, 0x12C(r31)
	  stfs      f10, 0x130(r31)
	  stfs      f11, 0x134(r31)
	  stfs      f9, 0x138(r31)
	  stfs      f11, 0x13C(r31)
	  stfs      f8, 0x140(r31)
	  stfs      f11, 0x144(r31)
	  stfs      f7, 0x148(r31)
	  stfs      f11, 0x14C(r31)
	  stfs      f6, 0x150(r31)
	  stfs      f11, 0x154(r31)
	  stfs      f5, 0x158(r31)
	  stfs      f4, 0x15C(r31)
	  stfs      f3, 0x160(r31)
	  stfs      f4, 0x164(r31)
	  stfs      f2, 0x168(r31)
	  stfs      f1, 0x16C(r31)
	  stfs      f0, 0x170(r31)
	  stfs      f1, 0x174(r31)
	  bl        -0x3706D0
	  cmplwi    r3, 0
	  beq-      .loc_0x2D4
	  lis       r5, 0x804C
	  lis       r4, 0x804C
	  addi      r0, r5, 0x14F0
	  lis       r6, 0x804A
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x14D8
	  lis       r5, 0x804E
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  li        r9, 0
	  addi      r7, r5, 0x7420
	  addi      r4, r4, 0x528C
	  stb       r9, 0x4(r3)
	  subi      r8, r6, 0x1D84
	  addi      r6, r7, 0x18
	  li        r5, 0xC
	  stb       r9, 0x5(r3)
	  addi      r0, r4, 0x18
	  stw       r8, 0x8(r3)
	  stw       r7, 0x0(r3)
	  stw       r6, 0x8(r3)
	  sth       r5, 0xC(r3)
	  stw       r9, 0x10(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x8(r3)

	.loc_0x2D4:
	  stw       r3, 0x1A4(r31)
	  mr        r3, r31
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80394600
 * Size:	000004
 */
void Morimura::TChallengeResult::VectorUnit::__ct(void) { }

/*
 * --INFO--
 * Address:	80394604
 * Size:	0000F4
 */
void Morimura::TChallengeResult::__dt(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0xD8
	  lis       r3, 0x804E
	  addi      r3, r3, 0x5210
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x10
	  stw       r0, 0x18(r30)
	  lwz       r0, -0x6660(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  lwz       r3, 0x8C(r30)
	  lwz       r3, 0xC(r3)
	  bl        -0x370F1C
	  lwz       r3, -0x6660(r13)
	  bl        -0x3710A0

	.loc_0x54:
	  li        r0, 0
	  cmplwi    r30, 0
	  stw       r0, -0x6660(r13)
	  beq-      .loc_0xC8
	  lis       r3, 0x804E
	  subi      r3, r3, 0x4708
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x10
	  stw       r0, 0x18(r30)
	  beq-      .loc_0xC8
	  lis       r3, 0x804F
	  subi      r3, r3, 0x28A8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x10
	  stw       r0, 0x18(r30)
	  beq-      .loc_0xC8
	  lis       r4, 0x804E
	  mr        r3, r30
	  subi      r4, r4, 0x7DC0
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x10
	  stw       r0, 0x18(r30)
	  bl        0x7CF20
	  addi      r3, r30, 0x18
	  li        r4, 0
	  bl        -0x377688
	  mr        r3, r30
	  li        r4, 0
	  bl        0x7CEC0

	.loc_0xC8:
	  extsh.    r0, r31
	  ble-      .loc_0xD8
	  mr        r3, r30
	  bl        -0x370624

	.loc_0xD8:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void Morimura::TChallengeResult::setDebugHeapParent((JKRHeap*))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803946F8
 * Size:	001854
 */
void Morimura::TChallengeResult::doCreate((JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x480(r1)
	  mflr      r0
	  stw       r0, 0x484(r1)
	  stmw      r23, 0x45C(r1)
	  mr        r28, r4
	  lis       r4, 0x8049
	  mr        r27, r3
	  addi      r31, r4, 0x4720
	  stw       r28, 0x78(r3)
	  bl        0xBF88C
	  lis       r4, 0x4D52
	  lis       r6, 0x5355
	  lis       r5, 0x4348
	  mr        r25, r3
	  addi      r4, r4, 0x4D52
	  addi      r6, r6, 0x4C54
	  addi      r5, r5, 0x5245
	  bl        -0x85420
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x58
	  stw       r25, 0x8C(r27)
	  b         .loc_0x60

	.loc_0x58:
	  li        r0, 0x1
	  stb       r0, -0x6760(r13)

	.loc_0x60:
	  lbz       r0, -0x6760(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x194
	  lwz       r4, -0x6664(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0xFC
	  lis       r3, 0x10
	  li        r5, 0x1
	  bl        -0x3748B0
	  cmplwi    r3, 0
	  stw       r3, -0x6660(r13)
	  bne-      .loc_0xA4
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x3CF
	  crclr     6, 0x6
	  bl        -0x36A158

	.loc_0xA4:
	  lwz       r4, -0x6660(r13)
	  li        r3, 0x14
	  li        r5, 0
	  bl        -0x370868
	  cmplwi    r3, 0
	  beq-      .loc_0xE8
	  lis       r5, 0x804B
	  lis       r4, 0x804C
	  addi      r0, r5, 0x1148
	  li        r5, 0
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0xFF8
	  stw       r5, 0x4(r3)
	  stw       r0, 0x0(r3)
	  stw       r5, 0x8(r3)
	  stw       r5, 0xC(r3)
	  stw       r5, 0x10(r3)

	.loc_0xE8:
	  stw       r3, 0x8C(r27)
	  lwz       r0, -0x6660(r13)
	  lwz       r3, 0x8C(r27)
	  stw       r0, 0xC(r3)
	  b         .loc_0x110

	.loc_0xFC:
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x188
	  li        r4, 0x3D6
	  crclr     6, 0x6
	  bl        -0x36A1C4

	.loc_0x110:
	  li        r3, 0x94
	  bl        -0x370968
	  mr.       r0, r3
	  beq-      .loc_0x128
	  bl        -0x166F54
	  mr        r0, r3

	.loc_0x128:
	  stw       r0, 0x1F8(r27)
	  li        r0, 0
	  addi      r3, r31, 0x1B0
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0x2
	  li        r9, 0
	  li        r10, 0
	  bl        -0x3756C4
	  cmplwi    r3, 0
	  beq-      .loc_0x194
	  mr        r4, r3
	  addi      r3, r1, 0x38
	  li        r5, -0x1
	  bl        0x81094
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x44(r1)
	  bne-      .loc_0x188
	  li        r0, 0
	  stw       r0, 0x44C(r1)

	.loc_0x188:
	  lwz       r3, 0x1F8(r27)
	  addi      r4, r1, 0x38
	  bl        -0x166EB0

	.loc_0x194:
	  mr        r3, r27
	  bl        0xBF7B0
	  stw       r3, 0x88(r27)
	  lwz       r0, 0x88(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x1C0
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x3EE
	  crclr     6, 0x6
	  bl        -0x36A274

	.loc_0x1C0:
	  lwz       r3, 0x78(r27)
	  addi      r4, r31, 0x1D4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  stw       r3, -0x665C(r13)
	  bne-      .loc_0x1F8
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x3F2
	  crclr     6, 0x6
	  bl        -0x36A2AC

	.loc_0x1F8:
	  lwz       r3, 0x78(r27)
	  addi      r4, r31, 0x1E8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  stw       r3, -0x6658(r13)
	  bne-      .loc_0x230
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x3F5
	  crclr     6, 0x6
	  bl        -0x36A2E4

	.loc_0x230:
	  lwz       r3, 0x78(r27)
	  addi      r4, r31, 0x200
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  stw       r3, -0x6654(r13)
	  bne-      .loc_0x268
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x3F8
	  crclr     6, 0x6
	  bl        -0x36A31C

	.loc_0x268:
	  bl        0x47F10
	  stw       r3, 0x84(r27)
	  lwz       r25, 0x84(r27)
	  addi      r3, r25, 0x18
	  bl        0x49044
	  lwz       r24, -0x77D4(r13)
	  addi      r3, r25, 0x100
	  mr        r4, r24
	  bl        0x2D930
	  lwz       r3, -0x6514(r13)
	  mr        r4, r24
	  lwz       r3, 0x5C(r3)
	  bl        0xAE23C
	  lwz       r3, 0x8C(r27)
	  lwz       r30, -0x77D4(r13)
	  lwz       r3, 0xC(r3)
	  bl        -0x3713FC
	  li        r3, 0x30
	  bl        -0x370B04
	  mr.       r25, r3
	  beq-      .loc_0x2DC
	  mr        r4, r28
	  li        r5, 0x7
	  bl        -0x7CF4
	  lis       r3, 0x804E
	  li        r0, 0
	  addi      r3, r3, 0x5308
	  stw       r3, 0x0(r25)
	  stw       r0, 0x2C(r25)

	.loc_0x2DC:
	  stw       r25, 0x7C(r27)
	  addi      r4, r31, 0x218
	  lis       r5, 0x104
	  lwz       r3, 0x7C(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x7C(r27)
	  addi      r4, r31, 0x234
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x7C(r27)
	  addi      r4, r31, 0x234
	  bl        0xCA4C
	  lwz       r3, 0x7C(r27)
	  addi      r4, r31, 0x250
	  bl        0xCA40
	  lwz       r3, 0x7C(r27)
	  addi      r4, r31, 0x26C
	  bl        0xCA34
	  lwz       r3, 0x7C(r27)
	  addi      r4, r31, 0x288
	  bl        0xCA28
	  lwz       r3, 0x7C(r27)
	  addi      r4, r31, 0x2A4
	  bl        0xCA1C
	  lwz       r3, 0x7C(r27)
	  addi      r4, r31, 0x2C0
	  bl        0xCA10
	  lwz       r3, 0x7C(r27)
	  addi      r4, r31, 0x2E0
	  bl        0xCA04
	  lfd       f1, 0x178(r31)
	  li        r3, 0x18
	  lfd       f0, 0x180(r31)
	  stfd      f1, 0x28(r1)
	  stfd      f0, 0x30(r1)
	  bl        -0x370BD0
	  mr.       r0, r3
	  beq-      .loc_0x3A8
	  lis       r6, 0x305F
	  lis       r5, 0x34
	  addi      r4, r1, 0x28
	  li        r7, 0x2
	  addi      r6, r6, 0x3030
	  addi      r5, r5, 0x3930
	  bl        0xC64C
	  mr        r0, r3

	.loc_0x3A8:
	  stw       r0, 0x1A0(r27)
	  lis       r4, 0x6665
	  lis       r3, 0x50
	  lwz       r7, 0x7C(r27)
	  addi      r6, r4, 0x6374
	  addi      r5, r3, 0x6566
	  lwz       r29, 0x8(r7)
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  lis       r5, 0x6563
	  stb       r0, 0xB0(r3)
	  mr        r3, r29
	  lis       r4, 0x5065
	  addi      r6, r5, 0x7431
	  lwz       r12, 0x0(r29)
	  addi      r5, r4, 0x6666
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  lis       r4, 0x7965
	  stb       r0, 0xB0(r3)
	  mr        r3, r29
	  addi      r6, r4, 0x6C31
	  li        r5, 0x54
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC0(r27)
	  lwz       r0, 0xC0(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x450
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x422
	  crclr     6, 0x6
	  bl        -0x36A504

	.loc_0x450:
	  mr        r3, r29
	  lis       r4, 0x7965
	  lwz       r12, 0x0(r29)
	  addi      r6, r4, 0x6C32
	  li        r5, 0x54
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC4(r27)
	  lwz       r0, 0xC4(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x494
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x425
	  crclr     6, 0x6
	  bl        -0x36A548

	.loc_0x494:
	  mr        r3, r29
	  lis       r4, 0x7965
	  lwz       r12, 0x0(r29)
	  addi      r6, r4, 0x6C33
	  li        r5, 0x54
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC8(r27)
	  lwz       r0, 0xC8(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x4D8
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x428
	  crclr     6, 0x6
	  bl        -0x36A58C

	.loc_0x4D8:
	  mr        r3, r29
	  lis       r4, 0x7965
	  lwz       r12, 0x0(r29)
	  addi      r6, r4, 0x6C34
	  li        r5, 0x54
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xCC(r27)
	  lwz       r0, 0xCC(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x51C
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x42B
	  crclr     6, 0x6
	  bl        -0x36A5D0

	.loc_0x51C:
	  li        r3, 0x4C
	  bl        -0x370D74
	  cmplwi    r3, 0
	  beq-      .loc_0x550
	  li        r0, 0
	  lfs       f0, 0xD24(r2)
	  stw       r0, 0x0(r3)
	  stw       r0, 0x4(r3)
	  stfs      f0, 0x38(r3)
	  stw       r0, 0x3C(r3)
	  stw       r0, 0x40(r3)
	  stw       r0, 0x44(r3)
	  stw       r0, 0x48(r3)

	.loc_0x550:
	  stw       r3, 0xD8(r27)
	  mr        r3, r29
	  lis       r4, 0x4E52
	  li        r5, 0
	  lwz       r12, 0x0(r29)
	  addi      r6, r4, 0x4544
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xE4(r27)
	  li        r3, 0x4C
	  bl        -0x370DD0
	  cmplwi    r3, 0
	  beq-      .loc_0x5AC
	  li        r0, 0
	  lfs       f0, 0xD24(r2)
	  stw       r0, 0x0(r3)
	  stw       r0, 0x4(r3)
	  stfs      f0, 0x38(r3)
	  stw       r0, 0x3C(r3)
	  stw       r0, 0x40(r3)
	  stw       r0, 0x44(r3)
	  stw       r0, 0x48(r3)

	.loc_0x5AC:
	  stw       r3, 0xDC(r27)
	  mr        r3, r29
	  lis       r5, 0x4C4C
	  lis       r4, 0x4E
	  lwz       r12, 0x0(r29)
	  addi      r6, r5, 0x4F57
	  addi      r5, r4, 0x5945
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xE8(r27)
	  li        r3, 0x4C
	  bl        -0x370E30
	  cmplwi    r3, 0
	  beq-      .loc_0x60C
	  li        r0, 0
	  lfs       f0, 0xD24(r2)
	  stw       r0, 0x0(r3)
	  stw       r0, 0x4(r3)
	  stfs      f0, 0x38(r3)
	  stw       r0, 0x3C(r3)
	  stw       r0, 0x40(r3)
	  stw       r0, 0x44(r3)
	  stw       r0, 0x48(r3)

	.loc_0x60C:
	  stw       r3, 0xE0(r27)
	  mr        r3, r29
	  lis       r4, 0x424C
	  li        r5, 0x4E
	  lwz       r12, 0x0(r29)
	  addi      r6, r4, 0x5545
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xEC(r27)
	  mr        r25, r27
	  li        r24, 0

	.loc_0x63C:
	  lwz       r0, 0xD8(r25)
	  cmplwi    r0, 0
	  bne-      .loc_0x65C
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x439
	  crclr     6, 0x6
	  bl        -0x36A710

	.loc_0x65C:
	  lwz       r3, 0xD8(r25)
	  lwz       r4, 0xE4(r25)
	  bl        -0x1680
	  addi      r24, r24, 0x1
	  addi      r25, r25, 0x4
	  cmpwi     r24, 0x3
	  blt+      .loc_0x63C
	  li        r3, 0x10
	  bl        -0x370ED0
	  mr.       r26, r3
	  beq-      .loc_0x724
	  mr        r3, r29
	  lis       r5, 0x5F30
	  lwz       r12, 0x0(r29)
	  lis       r4, 0x5049
	  addi      r6, r5, 0x3434
	  lwz       r12, 0x3C(r12)
	  addi      r5, r4, 0x4354
	  mtctr     r12
	  bctrl
	  mr        r25, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lis       r5, 0x5F30
	  lis       r4, 0x5049
	  lwz       r12, 0x3C(r12)
	  addi      r6, r5, 0x3433
	  addi      r5, r4, 0x4354
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x78(r27)
	  li        r0, 0
	  cmplwi    r3, 0
	  stb       r0, 0x0(r26)
	  stw       r4, 0x4(r26)
	  stw       r3, 0x8(r26)
	  stw       r25, 0xC(r26)
	  bne-      .loc_0x708
	  addi      r3, r31, 0x300
	  addi      r5, r31, 0x148
	  li        r4, 0x129
	  crclr     6, 0x6
	  bl        -0x36A7BC

	.loc_0x708:
	  cmplwi    r25, 0
	  bne-      .loc_0x724
	  addi      r3, r31, 0x300
	  addi      r5, r31, 0x148
	  li        r4, 0x12A
	  crclr     6, 0x6
	  bl        -0x36A7D8

	.loc_0x724:
	  stw       r26, 0x18C(r27)
	  li        r3, 0x10
	  bl        -0x370F80
	  mr.       r26, r3
	  beq-      .loc_0x7D4
	  mr        r3, r29
	  lis       r5, 0x5F30
	  lwz       r12, 0x0(r29)
	  lis       r4, 0x5049
	  addi      r6, r5, 0x3432
	  lwz       r12, 0x3C(r12)
	  addi      r5, r4, 0x4354
	  mtctr     r12
	  bctrl
	  mr        r25, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lis       r5, 0x5F30
	  lis       r4, 0x5049
	  lwz       r12, 0x3C(r12)
	  addi      r6, r5, 0x3431
	  addi      r5, r4, 0x4354
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x78(r27)
	  li        r0, 0
	  cmplwi    r3, 0
	  stb       r0, 0x0(r26)
	  stw       r4, 0x4(r26)
	  stw       r3, 0x8(r26)
	  stw       r25, 0xC(r26)
	  bne-      .loc_0x7B8
	  addi      r3, r31, 0x300
	  addi      r5, r31, 0x148
	  li        r4, 0x129
	  crclr     6, 0x6
	  bl        -0x36A86C

	.loc_0x7B8:
	  cmplwi    r25, 0
	  bne-      .loc_0x7D4
	  addi      r3, r31, 0x300
	  addi      r5, r31, 0x148
	  li        r4, 0x12A
	  crclr     6, 0x6
	  bl        -0x36A888

	.loc_0x7D4:
	  stw       r26, 0x190(r27)
	  li        r3, 0x10
	  bl        -0x371030
	  mr.       r26, r3
	  beq-      .loc_0x884
	  mr        r3, r29
	  lis       r5, 0x5F30
	  lwz       r12, 0x0(r29)
	  lis       r4, 0x5049
	  addi      r6, r5, 0x3139
	  lwz       r12, 0x3C(r12)
	  addi      r5, r4, 0x4354
	  mtctr     r12
	  bctrl
	  mr        r25, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lis       r5, 0x5F30
	  lis       r4, 0x5049
	  lwz       r12, 0x3C(r12)
	  addi      r6, r5, 0x3138
	  addi      r5, r4, 0x4354
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x78(r27)
	  li        r0, 0
	  cmplwi    r3, 0
	  stb       r0, 0x0(r26)
	  stw       r4, 0x4(r26)
	  stw       r3, 0x8(r26)
	  stw       r25, 0xC(r26)
	  bne-      .loc_0x868
	  addi      r3, r31, 0x300
	  addi      r5, r31, 0x148
	  li        r4, 0x129
	  crclr     6, 0x6
	  bl        -0x36A91C

	.loc_0x868:
	  cmplwi    r25, 0
	  bne-      .loc_0x884
	  addi      r3, r31, 0x300
	  addi      r5, r31, 0x148
	  li        r4, 0x12A
	  crclr     6, 0x6
	  bl        -0x36A938

	.loc_0x884:
	  stw       r26, 0x194(r27)
	  li        r3, 0x10
	  bl        -0x3710E0
	  mr.       r26, r3
	  beq-      .loc_0x934
	  mr        r3, r29
	  lis       r5, 0x5F30
	  lwz       r12, 0x0(r29)
	  lis       r4, 0x5049
	  addi      r6, r5, 0x3438
	  lwz       r12, 0x3C(r12)
	  addi      r5, r4, 0x4354
	  mtctr     r12
	  bctrl
	  mr        r25, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lis       r5, 0x5F30
	  lis       r4, 0x5049
	  lwz       r12, 0x3C(r12)
	  addi      r6, r5, 0x3437
	  addi      r5, r4, 0x4354
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x78(r27)
	  li        r0, 0
	  cmplwi    r3, 0
	  stb       r0, 0x0(r26)
	  stw       r4, 0x4(r26)
	  stw       r3, 0x8(r26)
	  stw       r25, 0xC(r26)
	  bne-      .loc_0x918
	  addi      r3, r31, 0x300
	  addi      r5, r31, 0x148
	  li        r4, 0x129
	  crclr     6, 0x6
	  bl        -0x36A9CC

	.loc_0x918:
	  cmplwi    r25, 0
	  bne-      .loc_0x934
	  addi      r3, r31, 0x300
	  addi      r5, r31, 0x148
	  li        r4, 0x12A
	  crclr     6, 0x6
	  bl        -0x36A9E8

	.loc_0x934:
	  stw       r26, 0x198(r27)
	  li        r3, 0x10
	  bl        -0x371190
	  mr.       r25, r3
	  beq-      .loc_0x9E4
	  mr        r3, r29
	  lis       r5, 0x5F30
	  lwz       r12, 0x0(r29)
	  lis       r4, 0x5049
	  addi      r6, r5, 0x3436
	  lwz       r12, 0x3C(r12)
	  addi      r5, r4, 0x4354
	  mtctr     r12
	  bctrl
	  mr        r26, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lis       r5, 0x5F30
	  lis       r4, 0x5049
	  lwz       r12, 0x3C(r12)
	  addi      r6, r5, 0x3435
	  addi      r5, r4, 0x4354
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x78(r27)
	  li        r0, 0
	  cmplwi    r3, 0
	  stb       r0, 0x0(r25)
	  stw       r4, 0x4(r25)
	  stw       r3, 0x8(r25)
	  stw       r26, 0xC(r25)
	  bne-      .loc_0x9C8
	  addi      r3, r31, 0x300
	  addi      r5, r31, 0x148
	  li        r4, 0x129
	  crclr     6, 0x6
	  bl        -0x36AA7C

	.loc_0x9C8:
	  cmplwi    r26, 0
	  bne-      .loc_0x9E4
	  addi      r3, r31, 0x300
	  addi      r5, r31, 0x148
	  li        r4, 0x12A
	  crclr     6, 0x6
	  bl        -0x36AA98

	.loc_0x9E4:
	  stw       r25, 0x19C(r27)
	  lis       r4, 0x6B6F
	  addi      r0, r27, 0x1A8
	  lis       r3, 0x50
	  stw       r0, 0x8(r1)
	  addi      r5, r3, 0x706F
	  li        r0, 0x5
	  mr        r3, r29
	  stw       r0, 0xC(r1)
	  mr        r7, r5
	  mr        r9, r5
	  addi      r6, r4, 0x3030
	  stw       r0, 0x10(r1)
	  addi      r8, r4, 0x3031
	  addi      r10, r4, 0x3034
	  lwz       r0, 0x78(r27)
	  stw       r0, 0x14(r1)
	  bl        -0x11F4
	  stw       r3, 0x94(r27)
	  lwz       r3, 0x94(r27)
	  bl        -0x8996C
	  li        r0, 0
	  lis       r4, 0x6B6F
	  stb       r0, 0xB0(r3)
	  addi      r5, r27, 0x1A8
	  lis       r3, 0x50
	  li        r0, 0x5
	  stw       r5, 0x8(r1)
	  addi      r5, r3, 0x706F
	  mr        r3, r29
	  addi      r6, r4, 0x3030
	  stw       r0, 0xC(r1)
	  mr        r7, r5
	  mr        r9, r5
	  addi      r8, r4, 0x3031
	  stw       r0, 0x10(r1)
	  addi      r10, r4, 0x3034
	  lwz       r0, 0x78(r27)
	  stw       r0, 0x14(r1)
	  bl        -0x124C
	  stw       r3, 0x90(r27)
	  mr        r3, r29
	  lis       r5, 0x6B6F
	  lis       r4, 0x50
	  lwz       r12, 0x0(r29)
	  addi      r6, r5, 0x3032
	  addi      r5, r4, 0x706F
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0xAC8
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x44F
	  crclr     6, 0x6
	  bl        -0x36AB7C

	.loc_0xAC8:
	  li        r0, 0
	  lis       r5, 0x6B6F
	  stb       r0, 0xB0(r26)
	  mr        r3, r29
	  lis       r4, 0x50
	  addi      r6, r5, 0x3033
	  lwz       r12, 0x0(r29)
	  addi      r5, r4, 0x706F
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0xB10
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x453
	  crclr     6, 0x6
	  bl        -0x36ABC4

	.loc_0xB10:
	  li        r0, 0
	  lis       r5, 0x6B6F
	  stb       r0, 0xB0(r26)
	  mr        r3, r29
	  lis       r4, 0x50
	  addi      r6, r5, 0x3034
	  lwz       r12, 0x0(r29)
	  addi      r5, r4, 0x706F
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0xB58
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x457
	  crclr     6, 0x6
	  bl        -0x36AC0C

	.loc_0xB58:
	  li        r0, 0
	  lis       r4, 0x7374
	  stb       r0, 0xB0(r26)
	  addi      r5, r27, 0x1A8
	  li        r0, 0x5
	  mr        r3, r29
	  stw       r5, 0x8(r1)
	  addi      r6, r4, 0x3031
	  addi      r8, r4, 0x3032
	  addi      r10, r4, 0x3035
	  stw       r0, 0xC(r1)
	  li        r5, 0x5031
	  li        r7, 0x5031
	  li        r9, 0x5031
	  stw       r0, 0x10(r1)
	  lwz       r0, 0x78(r27)
	  stw       r0, 0x14(r1)
	  bl        -0x1368
	  stw       r3, 0xB0(r27)
	  lwz       r3, 0xB0(r27)
	  bl        -0x89AE0
	  li        r0, 0
	  lis       r4, 0x6E64
	  stb       r0, 0xB0(r3)
	  addi      r5, r27, 0x1A8
	  li        r0, 0x5
	  mr        r3, r29
	  stw       r5, 0x8(r1)
	  addi      r6, r4, 0x3031
	  addi      r8, r4, 0x3032
	  addi      r10, r4, 0x3035
	  stw       r0, 0xC(r1)
	  li        r5, 0x5032
	  li        r7, 0x5032
	  li        r9, 0x5032
	  stw       r0, 0x10(r1)
	  lwz       r0, 0x78(r27)
	  stw       r0, 0x14(r1)
	  bl        -0x13BC
	  stw       r3, 0xB4(r27)
	  lwz       r3, 0xB4(r27)
	  bl        -0x89B34
	  li        r0, 0
	  lis       r4, 0x7264
	  stb       r0, 0xB0(r3)
	  addi      r5, r27, 0x1A8
	  li        r0, 0x5
	  mr        r3, r29
	  stw       r5, 0x8(r1)
	  addi      r6, r4, 0x3031
	  addi      r8, r4, 0x3032
	  addi      r10, r4, 0x3035
	  stw       r0, 0xC(r1)
	  li        r5, 0x5033
	  li        r7, 0x5033
	  li        r9, 0x5033
	  stw       r0, 0x10(r1)
	  lwz       r0, 0x78(r27)
	  stw       r0, 0x14(r1)
	  bl        -0x1410
	  stw       r3, 0xB8(r27)
	  lwz       r3, 0xB8(r27)
	  bl        -0x89B88
	  li        r0, 0
	  lis       r5, 0x6563
	  stb       r0, 0xB0(r3)
	  mr        r3, r29
	  lis       r4, 0x5065
	  addi      r6, r5, 0x7431
	  lwz       r12, 0x0(r29)
	  addi      r5, r4, 0x6666
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xD4(r27)
	  lwz       r0, 0xD4(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0xCA4
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x466
	  crclr     6, 0x6
	  bl        -0x36AD58

	.loc_0xCA4:
	  li        r3, 0x1B8
	  bl        -0x3714FC
	  mr.       r26, r3
	  beq-      .loc_0xCC4
	  bl        -0x3408BC
	  lis       r3, 0x804E
	  addi      r0, r3, 0x56F0
	  stw       r0, 0x0(r26)

	.loc_0xCC4:
	  stw       r26, 0xBC(r27)
	  lwz       r3, 0xB8(r27)
	  bl        -0x89C04
	  bl        -0x35C2E8
	  lwz       r4, 0xBC(r27)
	  bl        -0x35DD0C
	  addi      r0, r27, 0x1B8
	  lis       r4, 0x7374
	  stw       r0, 0x8(r1)
	  li        r0, 0x5
	  mr        r3, r29
	  addi      r6, r4, 0x3031
	  stw       r0, 0xC(r1)
	  addi      r8, r4, 0x3032
	  addi      r10, r4, 0x3035
	  li        r5, 0x5031
	  stw       r0, 0x10(r1)
	  li        r7, 0x5031
	  li        r9, 0x5031
	  lwz       r0, 0x78(r27)
	  stw       r0, 0x14(r1)
	  bl        -0x14E4
	  stw       r3, 0xA4(r27)
	  mr        r3, r29
	  lis       r4, 0x7374
	  li        r5, 0x5031
	  lwz       r12, 0x0(r29)
	  addi      r6, r4, 0x3031
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0xD5C
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x46F
	  crclr     6, 0x6
	  bl        -0x36AE10

	.loc_0xD5C:
	  li        r0, 0
	  lis       r4, 0x7374
	  stb       r0, 0xB0(r26)
	  mr        r3, r29
	  addi      r6, r4, 0x3032
	  li        r5, 0x5031
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0xDA0
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x473
	  crclr     6, 0x6
	  bl        -0x36AE54

	.loc_0xDA0:
	  li        r0, 0
	  lis       r4, 0x7374
	  stb       r0, 0xB0(r26)
	  mr        r3, r29
	  addi      r6, r4, 0x3033
	  li        r5, 0x5031
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0xDE4
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x477
	  crclr     6, 0x6
	  bl        -0x36AE98

	.loc_0xDE4:
	  li        r0, 0
	  lis       r4, 0x7374
	  stb       r0, 0xB0(r26)
	  mr        r3, r29
	  addi      r6, r4, 0x3034
	  li        r5, 0x5031
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0xE28
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x47B
	  crclr     6, 0x6
	  bl        -0x36AEDC

	.loc_0xE28:
	  li        r0, 0
	  lis       r4, 0x7374
	  stb       r0, 0xB0(r26)
	  mr        r3, r29
	  addi      r6, r4, 0x3035
	  li        r5, 0x5031
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0xE6C
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x47F
	  crclr     6, 0x6
	  bl        -0x36AF20

	.loc_0xE6C:
	  li        r0, 0
	  lis       r4, 0x6E64
	  stb       r0, 0xB0(r26)
	  addi      r5, r27, 0x1BC
	  li        r0, 0x5
	  mr        r3, r29
	  stw       r5, 0x8(r1)
	  addi      r6, r4, 0x3031
	  addi      r8, r4, 0x3032
	  addi      r10, r4, 0x3035
	  stw       r0, 0xC(r1)
	  li        r5, 0x5032
	  li        r7, 0x5032
	  li        r9, 0x5032
	  stw       r0, 0x10(r1)
	  lwz       r0, 0x78(r27)
	  stw       r0, 0x14(r1)
	  bl        -0x167C
	  stw       r3, 0xA8(r27)
	  mr        r3, r29
	  lis       r4, 0x6E64
	  li        r5, 0x5032
	  lwz       r12, 0x0(r29)
	  addi      r6, r4, 0x3031
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0xEF4
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x486
	  crclr     6, 0x6
	  bl        -0x36AFA8

	.loc_0xEF4:
	  li        r0, 0
	  lis       r4, 0x6E64
	  stb       r0, 0xB0(r26)
	  mr        r3, r29
	  addi      r6, r4, 0x3032
	  li        r5, 0x5032
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0xF38
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x48A
	  crclr     6, 0x6
	  bl        -0x36AFEC

	.loc_0xF38:
	  li        r0, 0
	  lis       r4, 0x6E64
	  stb       r0, 0xB0(r26)
	  mr        r3, r29
	  addi      r6, r4, 0x3033
	  li        r5, 0x5032
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0xF7C
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x48E
	  crclr     6, 0x6
	  bl        -0x36B030

	.loc_0xF7C:
	  li        r0, 0
	  lis       r4, 0x6E64
	  stb       r0, 0xB0(r26)
	  mr        r3, r29
	  addi      r6, r4, 0x3034
	  li        r5, 0x5032
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0xFC0
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x492
	  crclr     6, 0x6
	  bl        -0x36B074

	.loc_0xFC0:
	  li        r0, 0
	  lis       r4, 0x6E64
	  stb       r0, 0xB0(r26)
	  mr        r3, r29
	  addi      r6, r4, 0x3035
	  li        r5, 0x5032
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0x1004
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x496
	  crclr     6, 0x6
	  bl        -0x36B0B8

	.loc_0x1004:
	  li        r0, 0
	  lis       r4, 0x7264
	  stb       r0, 0xB0(r26)
	  addi      r5, r27, 0x1C0
	  li        r0, 0x5
	  mr        r3, r29
	  stw       r5, 0x8(r1)
	  addi      r6, r4, 0x3031
	  addi      r8, r4, 0x3032
	  addi      r10, r4, 0x3035
	  stw       r0, 0xC(r1)
	  li        r5, 0x5033
	  li        r7, 0x5033
	  li        r9, 0x5033
	  stw       r0, 0x10(r1)
	  lwz       r0, 0x78(r27)
	  stw       r0, 0x14(r1)
	  bl        -0x1814
	  stw       r3, 0xAC(r27)
	  lis       r4, 0x7264
	  lfs       f0, 0xDBC(r2)
	  mr        r3, r29
	  addi      r6, r4, 0x3031
	  li        r5, 0x5033
	  stfs      f0, 0x1CC(r27)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0x1094
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x49D
	  crclr     6, 0x6
	  bl        -0x36B148

	.loc_0x1094:
	  li        r0, 0
	  lis       r4, 0x7264
	  stb       r0, 0xB0(r26)
	  mr        r3, r29
	  addi      r6, r4, 0x3032
	  li        r5, 0x5033
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0x10D8
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x4A1
	  crclr     6, 0x6
	  bl        -0x36B18C

	.loc_0x10D8:
	  li        r0, 0
	  lis       r4, 0x7264
	  stb       r0, 0xB0(r26)
	  mr        r3, r29
	  addi      r6, r4, 0x3033
	  li        r5, 0x5033
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0x111C
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x4A5
	  crclr     6, 0x6
	  bl        -0x36B1D0

	.loc_0x111C:
	  li        r0, 0
	  lis       r4, 0x7264
	  stb       r0, 0xB0(r26)
	  mr        r3, r29
	  addi      r6, r4, 0x3034
	  li        r5, 0x5033
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0x1160
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x4A9
	  crclr     6, 0x6
	  bl        -0x36B214

	.loc_0x1160:
	  li        r0, 0
	  lis       r4, 0x7264
	  stb       r0, 0xB0(r26)
	  mr        r3, r29
	  addi      r6, r4, 0x3035
	  li        r5, 0x5033
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0x11A4
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x4AD
	  crclr     6, 0x6
	  bl        -0x36B258

	.loc_0x11A4:
	  li        r0, 0
	  li        r3, 0x1B8
	  stb       r0, 0xB0(r26)
	  bl        -0x371A04
	  mr.       r25, r3
	  beq-      .loc_0x11CC
	  bl        -0x340DC4
	  lis       r3, 0x804E
	  addi      r0, r3, 0x56F0
	  stw       r0, 0x0(r25)

	.loc_0x11CC:
	  lfs       f2, 0xD24(r2)
	  lfs       f1, 0xDC4(r2)
	  stfs      f2, 0x18(r1)
	  lfs       f0, 0xDC8(r2)
	  stfs      f2, 0x1C(r1)
	  lwz       r3, 0x18(r1)
	  stfs      f1, 0x20(r1)
	  lwz       r0, 0x1C(r1)
	  stw       r3, 0x1A8(r25)
	  lwz       r3, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  stw       r0, 0x1AC(r25)
	  lwz       r0, 0x24(r1)
	  stw       r3, 0x1B0(r25)
	  stw       r0, 0x1B4(r25)
	  lwz       r3, 0xAC(r27)
	  bl        -0x8A144
	  bl        -0x35C828
	  mr        r4, r25
	  bl        -0x35E24C
	  addi      r0, r27, 0x1AC
	  lis       r4, 0x7365
	  stw       r0, 0x8(r1)
	  li        r5, 0x5
	  lis       r3, 0x50
	  li        r0, 0
	  stw       r5, 0xC(r1)
	  addi      r5, r3, 0x6B61
	  mr        r3, r29
	  addi      r6, r4, 0x3031
	  stw       r0, 0x10(r1)
	  mr        r7, r5
	  mr        r9, r5
	  addi      r8, r4, 0x3032
	  lwz       r0, 0x78(r27)
	  addi      r10, r4, 0x3034
	  stw       r0, 0x14(r1)
	  bl        -0x1A2C
	  stw       r3, 0x98(r27)
	  mr        r3, r29
	  lis       r5, 0x7365
	  lis       r4, 0x50
	  lwz       r12, 0x0(r29)
	  addi      r6, r5, 0x3031
	  addi      r5, r4, 0x6B61
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0x12A8
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x4B8
	  crclr     6, 0x6
	  bl        -0x36B35C

	.loc_0x12A8:
	  li        r0, 0
	  lis       r5, 0x7365
	  stb       r0, 0xB0(r26)
	  mr        r3, r29
	  lis       r4, 0x50
	  addi      r6, r5, 0x3032
	  lwz       r12, 0x0(r29)
	  addi      r5, r4, 0x6B61
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0x12F0
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x4BC
	  crclr     6, 0x6
	  bl        -0x36B3A4

	.loc_0x12F0:
	  li        r0, 0
	  lis       r5, 0x7365
	  stb       r0, 0xB0(r26)
	  mr        r3, r29
	  lis       r4, 0x50
	  addi      r6, r5, 0x3033
	  lwz       r12, 0x0(r29)
	  addi      r5, r4, 0x6B61
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0x1338
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x4C0
	  crclr     6, 0x6
	  bl        -0x36B3EC

	.loc_0x1338:
	  li        r0, 0
	  lis       r5, 0x7365
	  stb       r0, 0xB0(r26)
	  mr        r3, r29
	  lis       r4, 0x50
	  addi      r6, r5, 0x3034
	  lwz       r12, 0x0(r29)
	  addi      r5, r4, 0x6B61
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0x1380
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x4C4
	  crclr     6, 0x6
	  bl        -0x36B434

	.loc_0x1380:
	  li        r10, 0
	  lis       r4, 0x6B69
	  stb       r10, 0xB0(r26)
	  addi      r5, r27, 0x1B4
	  lis       r3, 0x50
	  li        r0, 0x4
	  stw       r5, 0x8(r1)
	  addi      r5, r3, 0x7069
	  mr        r3, r29
	  addi      r6, r4, 0x3031
	  stw       r0, 0xC(r1)
	  mr        r7, r5
	  mr        r9, r5
	  addi      r8, r4, 0x3032
	  stw       r10, 0x10(r1)
	  addi      r10, r4, 0x3033
	  lwz       r0, 0x78(r27)
	  stw       r0, 0x14(r1)
	  bl        -0x1B94
	  stw       r3, 0xA0(r27)
	  mr        r3, r29
	  lis       r5, 0x6B69
	  lis       r4, 0x50
	  lwz       r12, 0x0(r29)
	  addi      r6, r5, 0x3031
	  addi      r5, r4, 0x7069
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0x1410
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x4CB
	  crclr     6, 0x6
	  bl        -0x36B4C4

	.loc_0x1410:
	  li        r0, 0
	  lis       r5, 0x6B69
	  stb       r0, 0xB0(r26)
	  mr        r3, r29
	  lis       r4, 0x50
	  addi      r6, r5, 0x3032
	  lwz       r12, 0x0(r29)
	  addi      r5, r4, 0x7069
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0x1458
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x4CF
	  crclr     6, 0x6
	  bl        -0x36B50C

	.loc_0x1458:
	  li        r0, 0
	  lis       r5, 0x6B69
	  stb       r0, 0xB0(r26)
	  mr        r3, r29
	  lis       r4, 0x50
	  addi      r6, r5, 0x3033
	  lwz       r12, 0x0(r29)
	  addi      r5, r4, 0x7069
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0x14A0
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x4D3
	  crclr     6, 0x6
	  bl        -0x36B554

	.loc_0x14A0:
	  li        r10, 0
	  lis       r4, 0x6D65
	  stb       r10, 0xB0(r26)
	  addi      r5, r27, 0x1B0
	  lis       r3, 0x50
	  li        r0, 0x5
	  stw       r5, 0x8(r1)
	  addi      r5, r3, 0x7469
	  mr        r3, r29
	  addi      r6, r4, 0x3031
	  stw       r0, 0xC(r1)
	  mr        r7, r5
	  mr        r9, r5
	  addi      r8, r4, 0x3032
	  stw       r10, 0x10(r1)
	  addi      r10, r4, 0x3033
	  lwz       r0, 0x78(r27)
	  stw       r0, 0x14(r1)
	  bl        -0x1CB4
	  stw       r3, 0x9C(r27)
	  mr        r3, r29
	  lis       r5, 0x6D65
	  lis       r4, 0x50
	  lwz       r12, 0x0(r29)
	  addi      r6, r5, 0x3031
	  addi      r5, r4, 0x7469
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0x1530
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x4DA
	  crclr     6, 0x6
	  bl        -0x36B5E4

	.loc_0x1530:
	  li        r0, 0
	  lis       r5, 0x6D65
	  stb       r0, 0xB0(r26)
	  mr        r3, r29
	  lis       r4, 0x50
	  addi      r6, r5, 0x3032
	  lwz       r12, 0x0(r29)
	  addi      r5, r4, 0x7469
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0x1578
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x4DE
	  crclr     6, 0x6
	  bl        -0x36B62C

	.loc_0x1578:
	  li        r0, 0
	  lis       r5, 0x6D65
	  stb       r0, 0xB0(r26)
	  mr        r3, r29
	  lis       r4, 0x50
	  addi      r6, r5, 0x3033
	  lwz       r12, 0x0(r29)
	  addi      r5, r4, 0x7469
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r26, r3
	  bne-      .loc_0x15C0
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x4E2
	  crclr     6, 0x6
	  bl        -0x36B674

	.loc_0x15C0:
	  li        r0, 0
	  li        r3, 0x28
	  stb       r0, 0xB0(r26)
	  bl        -0x371E20
	  mr.       r26, r3
	  beq-      .loc_0x1618
	  addi      r0, r27, 0x1AC
	  li        r5, 0
	  stw       r0, 0x0(r26)
	  li        r4, 0x5
	  li        r0, 0x4
	  li        r3, 0x14
	  lwz       r6, 0x1AC(r27)
	  stw       r6, 0x4(r26)
	  stw       r5, 0x8(r26)
	  stw       r5, 0xC(r26)
	  stw       r5, 0x1C(r26)
	  stw       r5, 0x20(r26)
	  stw       r4, 0x14(r26)
	  stw       r0, 0x18(r26)
	  bl        -0x371D5C
	  stw       r3, 0x24(r26)

	.loc_0x1618:
	  stw       r26, 0x17C(r27)
	  li        r3, 0x28
	  bl        -0x371E74
	  mr.       r26, r3
	  beq-      .loc_0x166C
	  addi      r0, r27, 0x1B4
	  li        r5, 0
	  stw       r0, 0x0(r26)
	  li        r4, 0x4
	  li        r0, 0x3
	  li        r3, 0x10
	  lwz       r6, 0x1B4(r27)
	  stw       r6, 0x4(r26)
	  stw       r5, 0x8(r26)
	  stw       r5, 0xC(r26)
	  stw       r5, 0x1C(r26)
	  stw       r5, 0x20(r26)
	  stw       r4, 0x14(r26)
	  stw       r0, 0x18(r26)
	  bl        -0x371DB0
	  stw       r3, 0x24(r26)

	.loc_0x166C:
	  stw       r26, 0x180(r27)
	  li        r3, 0x28
	  bl        -0x371EC8
	  mr.       r26, r3
	  beq-      .loc_0x16C0
	  addi      r0, r27, 0x1B0
	  li        r5, 0
	  stw       r0, 0x0(r26)
	  li        r4, 0x5
	  li        r0, 0x3
	  li        r3, 0x14
	  lwz       r6, 0x1B0(r27)
	  stw       r6, 0x4(r26)
	  stw       r5, 0x8(r26)
	  stw       r5, 0xC(r26)
	  stw       r5, 0x1C(r26)
	  stw       r5, 0x20(r26)
	  stw       r4, 0x14(r26)
	  stw       r0, 0x18(r26)
	  bl        -0x371E04
	  stw       r3, 0x24(r26)

	.loc_0x16C0:
	  stw       r26, 0x184(r27)
	  li        r3, 0x28
	  bl        -0x371F1C
	  mr.       r26, r3
	  beq-      .loc_0x1710
	  addi      r0, r27, 0x1A8
	  li        r4, 0
	  stw       r0, 0x0(r26)
	  li        r0, 0x5
	  li        r3, 0x14
	  lwz       r5, 0x1A8(r27)
	  stw       r5, 0x4(r26)
	  stw       r4, 0x8(r26)
	  stw       r4, 0xC(r26)
	  stw       r4, 0x1C(r26)
	  stw       r4, 0x20(r26)
	  stw       r0, 0x14(r26)
	  stw       r0, 0x18(r26)
	  bl        -0x371E54
	  stw       r3, 0x24(r26)

	.loc_0x1710:
	  stw       r26, 0x188(r27)
	  mr        r25, r27
	  mr        r24, r27
	  li        r23, 0

	.loc_0x1720:
	  lwz       r3, 0xA4(r25)
	  bl        -0x8A65C
	  mr.       r26, r3
	  bne-      .loc_0x1744
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x4EF
	  crclr     6, 0x6
	  bl        -0x36B7F8

	.loc_0x1744:
	  lfs       f0, 0xD4(r26)
	  addi      r23, r23, 0x1
	  cmpwi     r23, 0x3
	  addi      r25, r25, 0x4
	  stfs      f0, 0xF0(r24)
	  lfs       f0, 0xD8(r26)
	  stfs      f0, 0xF4(r24)
	  addi      r24, r24, 0x8
	  blt+      .loc_0x1720
	  mr        r3, r29
	  lis       r4, 0x6162
	  lwz       r12, 0x0(r29)
	  addi      r6, r4, 0x746E
	  li        r5, 0x4E
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xD0(r27)
	  lwz       r0, 0xD0(r27)
	  cmplwi    r0, 0
	  bne-      .loc_0x17AC
	  addi      r3, r31, 0x130
	  addi      r5, r31, 0x148
	  li        r4, 0x4F6
	  crclr     6, 0x6
	  bl        -0x36B860

	.loc_0x17AC:
	  lwz       r3, 0xD0(r27)
	  li        r4, 0
	  li        r5, 0
	  bl        -0x35D104
	  li        r3, 0x28
	  bl        -0x372014
	  mr.       r29, r3
	  beq-      .loc_0x17F8
	  mr        r4, r28
	  li        r5, 0x2
	  bl        0xB4DC
	  lis       r3, 0x804E
	  li        r0, 0
	  addi      r3, r3, 0x52F4
	  stw       r3, 0x0(r29)
	  stw       r0, 0x18(r29)
	  stw       r0, 0x1C(r29)
	  stw       r0, 0x20(r29)
	  stb       r0, 0x24(r29)

	.loc_0x17F8:
	  stw       r29, 0x80(r27)
	  addi      r4, r31, 0x314
	  lis       r5, 0x2
	  lwz       r3, 0x80(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x80(r27)
	  addi      r4, r31, 0xF8
	  bl        0xB548
	  lwz       r3, 0x80(r27)
	  addi      r4, r31, 0x334
	  bl        0xB53C
	  mr        r3, r30
	  bl        -0x372988
	  mr        r3, r27
	  bl        0xB94
	  lmw       r23, 0x45C(r1)
	  lwz       r0, 0x484(r1)
	  mtlr      r0
	  addi      r1, r1, 0x480
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80395F4C
 * Size:	0009C0
 */
void Morimura::TChallengeResult::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  stw       r0, 0xF4(r1)
	  stfd      f31, 0xE0(r1)
	  psq_st    f31,0xE8(r1),0,0
	  stfd      f30, 0xD0(r1)
	  psq_st    f30,0xD8(r1),0,0
	  stfd      f29, 0xC0(r1)
	  psq_st    f29,0xC8(r1),0,0
	  stmw      r23, 0x9C(r1)
	  lbz       r0, -0x6760(r13)
	  mr        r24, r3
	  cmplwi    r0, 0
	  beq-      .loc_0x58
	  lbz       r0, -0x6668(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x58
	  li        r0, 0
	  stb       r0, -0x6668(r13)
	  bl        0xB30
	  mr        r3, r24
	  bl        0x33B4

	.loc_0x58:
	  lwz       r3, 0x84(r24)
	  bl        0x46DEC
	  lbz       r0, 0x1E0(r24)
	  cmplwi    r0, 0
	  bne-      .loc_0x80
	  lwz       r3, 0x7C(r24)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x80:
	  lbz       r0, 0x1E0(r24)
	  cmplwi    r0, 0
	  bne-      .loc_0xA0
	  lwz       r3, 0x80(r24)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA0:
	  lwz       r4, 0xD4(r24)
	  addi      r3, r1, 0x28
	  li        r5, 0
	  bl        -0x35D060
	  lfs       f29, 0x28(r1)
	  addi      r3, r1, 0x1C
	  lfs       f30, 0x2C(r1)
	  li        r5, 0x3
	  lwz       r4, 0xD4(r24)
	  bl        -0x35D078
	  stfs      f29, 0x40(r1)
	  lfs       f1, 0x20(r1)
	  stfs      f30, 0x44(r1)
	  lfs       f0, 0x1C(r1)
	  lwz       r4, 0xBC(r24)
	  lwz       r3, 0x40(r1)
	  stfs      f0, 0x48(r1)
	  lwz       r0, 0x44(r1)
	  stw       r3, 0x1A8(r4)
	  lwz       r3, 0x48(r1)
	  stfs      f1, 0x4C(r1)
	  stw       r0, 0x1AC(r4)
	  lwz       r0, 0x4C(r1)
	  stw       r3, 0x1B0(r4)
	  stw       r0, 0x1B4(r4)
	  lbz       r0, 0x1E0(r24)
	  cmplwi    r0, 0
	  beq-      .loc_0x218
	  lwz       r3, 0x84(r24)
	  bl        0x46C80
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x218
	  lwz       r3, 0x84(r24)
	  lwz       r0, 0x474(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x1D8
	  lbz       r0, -0x79F7(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x1CC
	  bl        0x8D19C
	  lhz       r23, 0x6(r3)
	  bl        0x8D194
	  lhz       r4, 0x4(r3)
	  lis       r5, 0x4330
	  lis       r3, 0x804C
	  stw       r5, 0x50(r1)
	  addi      r0, r3, 0x1514
	  lfd       f2, 0xD88(r2)
	  stw       r4, 0x54(r1)
	  addi      r4, r1, 0x34
	  lfs       f3, 0xD54(r2)
	  lfd       f0, 0x50(r1)
	  stw       r23, 0x5C(r1)
	  fsubs     f1, f0, f2
	  stw       r5, 0x58(r1)
	  lfd       f0, 0x58(r1)
	  fmuls     f1, f3, f1
	  stw       r0, 0x3C(r1)
	  fsubs     f0, f0, f2
	  stfs      f1, 0xC(r1)
	  fmuls     f0, f3, f0
	  lwz       r0, 0xC(r1)
	  stw       r0, 0x14(r1)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x14(r1)
	  lwz       r0, 0x10(r1)
	  stfs      f0, 0x34(r1)
	  stw       r0, 0x18(r1)
	  lfs       f0, 0x18(r1)
	  stfs      f0, 0x38(r1)
	  lwz       r3, 0x1A4(r24)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1CC:
	  li        r0, 0
	  stb       r0, 0x1E0(r24)
	  b         .loc_0x218

	.loc_0x1D8:
	  lbz       r0, -0x6760(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x1F0
	  li        r0, 0
	  stb       r0, 0x1E0(r24)
	  b         .loc_0x218

	.loc_0x1F0:
	  lwz       r4, 0x8C(r24)
	  li        r0, 0x1
	  mr        r3, r24
	  stw       r0, 0x10(r4)
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  li        r4, 0
	  bl        0xBBE30

	.loc_0x218:
	  lbz       r0, 0x45(r24)
	  cmplwi    r0, 0
	  beq-      .loc_0x34C
	  lwz       r4, 0x8C(r24)
	  lwz       r0, 0x10(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x34C
	  lwz       r0, 0x1C8(r24)
	  cmpwi     r0, 0x6
	  bne-      .loc_0x31C
	  lwz       r3, 0x88(r24)
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x34C
	  lis       r3, 0x8051
	  addi      r3, r3, 0x41FC
	  lwz       r0, 0x238(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x270
	  lwz       r0, 0x1C8(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x2A0

	.loc_0x270:
	  li        r0, 0x1
	  mr        r3, r24
	  stw       r0, 0x10(r4)
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  li        r4, 0
	  bl        0xBBDB4
	  li        r0, 0
	  stb       r0, 0x45(r24)
	  b         .loc_0x34C

	.loc_0x2A0:
	  lbz       r0, 0x1E0(r24)
	  cmplwi    r0, 0
	  bne-      .loc_0x34C
	  li        r0, 0x1
	  mr        r3, r24
	  stb       r0, 0x1E0(r24)
	  bl        0xBDE3C
	  lwz       r4, 0x84(r24)
	  li        r0, 0x1
	  stw       r3, 0x3D0(r4)
	  stw       r3, 0x24(r4)
	  stw       r3, 0x104(r4)
	  lwz       r3, 0x84(r24)
	  stw       r0, 0x470(r3)
	  lwz       r3, 0x84(r24)
	  stb       r0, 0x478(r3)
	  lwz       r3, 0x84(r24)
	  bl        0x469CC
	  lwz       r3, 0x84(r24)
	  bl        0x46B5C
	  lbz       r0, -0x79F7(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x310
	  lwz       r3, 0x1A4(r24)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x310:
	  mr        r3, r24
	  bl        0x3270
	  b         .loc_0x34C

	.loc_0x31C:
	  lwz       r3, 0x88(r24)
	  lwz       r0, 0x18(r3)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x338
	  lfs       f0, -0x79EC(r13)
	  stfs      f0, -0x79F0(r13)
	  b         .loc_0x34C

	.loc_0x338:
	  lfs       f0, -0x79F0(r13)
	  lfs       f1, 0x1F0(r24)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x34C
	  stfs      f1, -0x79F0(r13)

	.loc_0x34C:
	  mr        r23, r24
	  mr        r25, r24
	  li        r26, 0

	.loc_0x358:
	  lfs       f3, 0xF4(r23)
	  lfs       f2, 0x10C(r23)
	  lfs       f1, 0xF0(r23)
	  lfs       f0, 0x108(r23)
	  fadds     f30, f3, f2
	  lwz       r3, 0xA4(r25)
	  fadds     f29, f1, f0
	  bl        -0x8AB00
	  stfs      f29, 0xD4(r3)
	  stfs      f30, 0xD8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xD8(r25)
	  bl        -0x2B88
	  addi      r26, r26, 0x1
	  addi      r25, r25, 0x4
	  cmpwi     r26, 0x3
	  addi      r23, r23, 0x8
	  blt+      .loc_0x358
	  li        r25, 0
	  mr        r26, r24

	.loc_0x3B4:
	  lwz       r28, 0x17C(r26)
	  lwz       r0, 0x8(r28)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x530
	  li        r29, 0
	  lfd       f31, 0xD70(r2)
	  mr        r30, r29
	  lis       r31, 0x4330
	  mr        r27, r29
	  b         .loc_0x4B8

	.loc_0x3DC:
	  xoris     r0, r30, 0x8000
	  stw       r31, 0x58(r1)
	  lfd       f1, 0xD78(r2)
	  stw       r0, 0x5C(r1)
	  lfd       f0, 0x58(r1)
	  fsub      f2, f0, f31
	  bl        -0x2C6934
	  fctiwz    f0, f1
	  lwz       r0, 0xC(r28)
	  cmpw      r0, r30
	  stfd      f0, 0x50(r1)
	  lwz       r23, 0x54(r1)
	  ble-      .loc_0x424
	  lwz       r3, 0x24(r28)
	  lwzx      r0, r3, r27
	  mullw     r0, r23, r0
	  add       r29, r29, r0
	  b         .loc_0x4B0

	.loc_0x424:
	  bl        -0x2CCDD0
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x5C(r1)
	  xoris     r0, r23, 0x8000
	  lfd       f5, 0xD70(r2)
	  stw       r4, 0x58(r1)
	  lfs       f1, 0xD80(r2)
	  lfd       f2, 0x58(r1)
	  lfs       f0, 0xD84(r2)
	  fsubs     f2, f2, f5
	  stw       r4, 0x68(r1)
	  lfs       f3, 0xD5C(r2)
	  stw       r0, 0x54(r1)
	  fdivs     f2, f2, f1
	  lfd       f1, 0xD88(r2)
	  stw       r4, 0x50(r1)
	  lfd       f4, 0x50(r1)
	  stw       r29, 0x74(r1)
	  stw       r4, 0x70(r1)
	  fmuls     f2, f0, f2
	  lfd       f0, 0x70(r1)
	  fsubs     f4, f4, f5
	  fsubs     f0, f0, f1
	  fctiwz    f1, f2
	  stfd      f1, 0x60(r1)
	  lwz       r0, 0x64(r1)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x6C(r1)
	  lfd       f1, 0x68(r1)
	  fsubs     f1, f1, f5
	  fadds     f1, f3, f1
	  fmadds    f1, f4, f1, f0
	  bl        -0x2D48A8
	  mr        r29, r3

	.loc_0x4B0:
	  addi      r27, r27, 0x4
	  addi      r30, r30, 0x1

	.loc_0x4B8:
	  lwz       r0, 0x10(r28)
	  cmpw      r30, r0
	  blt+      .loc_0x3DC
	  lwz       r3, 0x0(r28)
	  stw       r29, 0x0(r3)
	  lwz       r3, 0x20(r28)
	  cmpwi     r3, 0
	  ble-      .loc_0x530
	  subi      r0, r3, 0x1
	  stw       r0, 0x20(r28)
	  lwz       r0, 0x20(r28)
	  cmpwi     r0, 0
	  bne-      .loc_0x530
	  lwz       r0, 0x8(r28)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x528
	  lwz       r3, 0xC(r28)
	  addi      r0, r3, 0x1
	  stw       r0, 0xC(r28)
	  lwz       r3, 0xC(r28)
	  lwz       r0, 0x10(r28)
	  cmpw      r3, r0
	  blt-      .loc_0x528
	  lwz       r4, 0x4(r28)
	  li        r0, 0x2
	  lwz       r3, 0x0(r28)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x8(r28)

	.loc_0x528:
	  lwz       r0, 0x1C(r28)
	  stw       r0, 0x20(r28)

	.loc_0x530:
	  addi      r25, r25, 0x1
	  addi      r26, r26, 0x4
	  cmpwi     r25, 0x4
	  blt+      .loc_0x3B4
	  lfs       f1, 0x120(r24)
	  lfs       f0, 0x178(r24)
	  lfs       f30, 0x124(r24)
	  fadds     f29, f1, f0
	  lwz       r3, 0x94(r24)
	  bl        -0x8ACE0
	  stfs      f29, 0xD4(r3)
	  stfs      f30, 0xD8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x178(r24)
	  lfs       f0, 0xD24(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x590
	  lfs       f1, 0xD28(r2)
	  lfs       f0, -0x79F0(r13)
	  fmadds    f0, f1, f0, f2
	  stfs      f0, 0x178(r24)

	.loc_0x590:
	  lfs       f1, 0x178(r24)
	  lfs       f0, 0xD58(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x688
	  lfs       f29, 0xD28(r2)
	  mr        r23, r24
	  lfs       f30, 0xD24(r2)
	  li        r25, 0
	  lfs       f31, 0xD4C(r2)
	  li        r26, 0

	.loc_0x5B8:
	  cmpwi     r26, 0
	  bne-      .loc_0x5D4
	  lfs       f1, 0xD24(r2)
	  lfs       f0, 0x108(r23)
	  fcmpu     cr0, f1, f0
	  beq-      .loc_0x5D4
	  li        r25, 0x1

	.loc_0x5D4:
	  lfs       f1, -0x79F0(r13)
	  lfs       f0, 0x108(r23)
	  fnmsubs   f0, f29, f1, f0
	  stfs      f0, 0x108(r23)
	  lfs       f0, 0x108(r23)
	  fcmpo     cr0, f0, f30
	  bge-      .loc_0x5F4
	  stfs      f30, 0x108(r23)

	.loc_0x5F4:
	  rlwinm.   r0,r25,0,24,31
	  beq-      .loc_0x61C
	  lfs       f1, 0xD24(r2)
	  lfs       f0, 0x108(r23)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x61C
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x182F
	  li        r5, 0
	  bl        -0x5DF34

	.loc_0x61C:
	  lfs       f0, 0x108(r23)
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0x678
	  lwz       r0, 0x1E4(r24)
	  cmpw      r26, r0
	  blt-      .loc_0x678
	  lfs       f2, 0xDCC(r2)
	  fmr       f3, f31
	  lfs       f1, -0x79F0(r13)
	  cmpwi     r26, 0x2
	  lfs       f0, 0x10C(r23)
	  fmadds    f0, f2, f1, f0
	  stfs      f0, 0x10C(r23)
	  bge-      .loc_0x658
	  lfs       f3, 0x1CC(r24)

	.loc_0x658:
	  lfs       f0, 0x10C(r23)
	  fcmpo     cr0, f0, f3
	  ble-      .loc_0x678
	  cmpwi     r26, 0x2
	  stfs      f3, 0x10C(r23)
	  bne-      .loc_0x678
	  li        r0, 0x1
	  stb       r0, 0x1C7(r24)

	.loc_0x678:
	  addi      r26, r26, 0x1
	  addi      r23, r23, 0x8
	  cmpwi     r26, 0x3
	  blt+      .loc_0x5B8

	.loc_0x688:
	  mr        r23, r24
	  mr        r25, r24
	  li        r26, 0

	.loc_0x694:
	  lfs       f1, 0xF4(r23)
	  lfs       f0, 0x10C(r23)
	  lfs       f29, 0xF0(r23)
	  fadds     f30, f1, f0
	  lwz       r3, 0xA4(r25)
	  bl        -0x8AE34
	  stfs      f29, 0xD4(r3)
	  stfs      f30, 0xD8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xF0(r23)
	  lfs       f0, 0x108(r23)
	  lfs       f30, 0xF4(r23)
	  fadds     f29, f1, f0
	  lwz       r3, 0xB0(r25)
	  bl        -0x8AE64
	  stfs      f29, 0xD4(r3)
	  stfs      f30, 0xD8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  addi      r26, r26, 0x1
	  addi      r25, r25, 0x4
	  cmpwi     r26, 0x3
	  addi      r23, r23, 0x8
	  blt+      .loc_0x694
	  lbz       r0, 0x1C7(r24)
	  cmplwi    r0, 0
	  beq-      .loc_0x890
	  lfs       f1, 0x1EC(r24)
	  lfs       f0, 0xD5C(r2)
	  fadds     f0, f1, f0
	  stfs      f0, 0x1EC(r24)
	  lfs       f1, 0x1EC(r24)
	  lfs       f0, -0x79F4(r13)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x73C
	  lfs       f0, 0xD24(r2)
	  stfs      f0, 0x1EC(r24)

	.loc_0x73C:
	  lfs       f1, 0x1EC(r24)
	  lfs       f0, -0x79F4(r13)
	  lfs       f2, 0xD2C(r2)
	  fdivs     f1, f1, f0
	  lfs       f0, 0xD24(r2)
	  fmuls     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x788
	  lfs       f0, 0xD34(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x70(r1)
	  lwz       r0, 0x74(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x7AC

	.loc_0x788:
	  lfs       f0, 0xD38(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x68(r1)
	  lwz       r0, 0x6C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x7AC:
	  fabs      f0, f0
	  lbz       r6, -0x79E8(r13)
	  lis       r5, 0x4330
	  subi      r3, r13, 0x79E8
	  lbz       r4, 0x1(r3)
	  li        r0, 0xFF
	  lbz       r3, 0x2(r3)
	  frsp      f2, f0
	  lfs       f1, 0xD5C(r2)
	  lfs       f0, 0xDD0(r2)
	  stw       r6, 0x64(r1)
	  fsubs     f5, f1, f2
	  lfd       f3, 0xD88(r2)
	  fmuls     f4, f0, f2
	  stw       r5, 0x60(r1)
	  lwz       r6, 0x90(r24)
	  lfd       f0, 0x60(r1)
	  stw       r4, 0x54(r1)
	  fsubs     f1, f0, f3
	  stw       r5, 0x50(r1)
	  lfd       f0, 0x50(r1)
	  fmadds    f2, f1, f5, f4
	  stw       r3, 0x84(r1)
	  fsubs     f1, f0, f3
	  stw       r5, 0x80(r1)
	  fctiwz    f2, f2
	  lfd       f0, 0x80(r1)
	  fmadds    f1, f1, f5, f4
	  stfd      f2, 0x58(r1)
	  fsubs     f0, f0, f3
	  fctiwz    f1, f1
	  lwz       r4, 0x5C(r1)
	  fmadds    f0, f0, f5, f4
	  stb       r4, 0xA8(r6)
	  stfd      f1, 0x78(r1)
	  fctiwz    f0, f0
	  lwz       r5, 0x7C(r1)
	  stfd      f0, 0x88(r1)
	  stb       r5, 0xA9(r6)
	  lwz       r7, 0x8C(r1)
	  stb       r7, 0xAA(r6)
	  stb       r0, 0xAB(r6)
	  lwz       r3, 0xB0(r24)
	  stb       r4, 0xA8(r3)
	  stb       r5, 0xA9(r3)
	  stb       r7, 0xAA(r3)
	  stb       r0, 0xAB(r3)
	  lwz       r3, 0xB4(r24)
	  stb       r4, 0xA8(r3)
	  stb       r5, 0xA9(r3)
	  stb       r7, 0xAA(r3)
	  stb       r0, 0xAB(r3)
	  lwz       r3, 0xB8(r24)
	  stb       r4, 0xA8(r3)
	  stb       r5, 0xA9(r3)
	  stb       r7, 0xAA(r3)
	  stb       r0, 0xAB(r3)

	.loc_0x890:
	  lwz       r0, 0x1C8(r24)
	  cmpwi     r0, 0x6
	  bne-      .loc_0x968
	  lwz       r3, 0xD0(r24)
	  li        r0, 0x1
	  lfs       f1, 0xD5C(r2)
	  stb       r0, 0xB0(r3)
	  lfs       f2, 0x1F4(r24)
	  fcmpo     cr0, f2, f1
	  bge-      .loc_0x8D4
	  lfs       f0, 0xD44(r2)
	  fadds     f0, f2, f0
	  stfs      f0, 0x1F4(r24)
	  lfs       f0, 0x1F4(r24)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x8D4
	  stfs      f1, 0x1F4(r24)

	.loc_0x8D4:
	  lwz       r23, 0x7C(r24)
	  lwz       r0, 0x10(r23)
	  cmpwi     r0, 0x1
	  bge-      .loc_0x8FC
	  lis       r3, 0x8049
	  li        r4, 0x58
	  addi      r3, r3, 0x4A74
	  li        r5, 0
	  crclr     6, 0x6
	  bl        -0x36C204

	.loc_0x8FC:
	  lwz       r3, 0x4(r23)
	  addi      r5, r1, 0x8
	  li        r4, 0
	  lwz       r3, 0x4(r3)
	  lwz       r3, 0x14(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lbz       r4, 0xB(r1)
	  lis       r0, 0x4330
	  lwz       r3, 0xD0(r24)
	  stw       r4, 0x8C(r1)
	  lwz       r12, 0x0(r3)
	  stw       r0, 0x88(r1)
	  lfd       f1, 0xD88(r2)
	  lfd       f0, 0x88(r1)
	  lfs       f2, 0x1F4(r24)
	  fsubs     f0, f0, f1
	  lwz       r12, 0x24(r12)
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x80(r1)
	  lwz       r4, 0x84(r1)
	  mtctr     r12
	  bctrl
	  b         .loc_0x97C

	.loc_0x968:
	  lfs       f0, 0xD24(r2)
	  li        r0, 0
	  stfs      f0, 0x1F4(r24)
	  lwz       r3, 0xD0(r24)
	  stb       r0, 0xB0(r3)

	.loc_0x97C:
	  lwz       r0, 0x1C8(r24)
	  cmpwi     r0, 0
	  beq-      .loc_0x990
	  mr        r3, r24
	  bl        0x10CC

	.loc_0x990:
	  li        r3, 0
	  psq_l     f31,0xE8(r1),0,0
	  lfd       f31, 0xE0(r1)
	  psq_l     f30,0xD8(r1),0,0
	  lfd       f30, 0xD0(r1)
	  psq_l     f29,0xC8(r1),0,0
	  lfd       f29, 0xC0(r1)
	  lmw       r23, 0x9C(r1)
	  lwz       r0, 0xF4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8039690C
 * Size:	000160
 */
void Morimura::TChallengeResult::doDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  mr        r30, r4
	  addi      r31, r30, 0x190
	  stw       r29, 0x44(r1)
	  mr        r29, r3
	  mr        r5, r31
	  lwz       r3, 0x7C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x80(r29)
	  mr        r4, r30
	  mr        r5, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x1E0(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x6C
	  lwz       r3, 0x84(r29)
	  bl        0x464B8

	.loc_0x6C:
	  addi      r3, r30, 0x190
	  lwz       r12, 0x190(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lbz       r3, 0x44(r29)
	  li        r0, -0x1
	  stw       r0, 0x1C(r1)
	  li        r0, 0
	  subfic    r8, r3, 0xFF
	  mr        r3, r31
	  stb       r0, 0x1C(r1)
	  addi      r4, r1, 0xC
	  addi      r5, r1, 0x10
	  addi      r6, r1, 0x14
	  stb       r0, 0x1D(r1)
	  addi      r7, r1, 0x18
	  stb       r0, 0x1E(r1)
	  stb       r8, 0x1F(r1)
	  lwz       r0, 0x1C(r1)
	  stw       r0, 0x8(r1)
	  stw       r0, 0x18(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0xC(r1)
	  bl        -0x360350
	  li        r3, 0
	  bl        -0x2AD88C
	  bl        0x8C83C
	  lhz       r30, 0x6(r3)
	  bl        0x8C834
	  lhz       r4, 0x4(r3)
	  lis       r0, 0x4330
	  lfs       f3, 0xD24(r2)
	  mr        r3, r31
	  stw       r4, 0x34(r1)
	  addi      r4, r1, 0x20
	  lfd       f2, 0xD88(r2)
	  stw       r0, 0x30(r1)
	  lfd       f0, 0x30(r1)
	  stw       r30, 0x3C(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x38(r1)
	  lfd       f0, 0x38(r1)
	  fadds     f1, f3, f1
	  stfs      f3, 0x20(r1)
	  fsubs     f0, f0, f2
	  stfs      f3, 0x24(r1)
	  fadds     f0, f3, f0
	  stfs      f1, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  bl        -0x360270
	  li        r3, 0x1
	  bl        -0x2AD8F4
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80396A6C
 * Size:	00005C
 */
void Morimura::TChallengeResult::doUpdateFadeoutFinish(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x8C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x4850
	  li        r4, 0x61E
	  addi      r5, r5, 0x4868
	  crclr     6, 0x6
	  bl        -0x36C464

	.loc_0x3C:
	  lwz       r3, 0x8C(r31)
	  li        r0, 0x2
	  stw       r0, 0x10(r3)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80396AC8
 * Size:	000EDC
 */
void Morimura::TChallengeResult::setInfo(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xE0(r1)
	  mflr      r0
	  stw       r0, 0xE4(r1)
	  stfd      f31, 0xD0(r1)
	  psq_st    f31,0xD8(r1),0,0
	  stfd      f30, 0xC0(r1)
	  psq_st    f30,0xC8(r1),0,0
	  stfd      f29, 0xB0(r1)
	  psq_st    f29,0xB8(r1),0,0
	  stmw      r23, 0x8C(r1)
	  mr        r31, r3
	  li        r3, 0
	  stw       r3, 0x1C8(r31)
	  lis       r4, 0x8049
	  li        r0, 0xFF
	  mr        r24, r31
	  stb       r3, 0x1E0(r31)
	  addi      r30, r4, 0x4720
	  li        r23, 0
	  lwz       r3, 0xB0(r31)
	  stb       r0, 0xA8(r3)
	  stb       r0, 0xA9(r3)
	  stb       r0, 0xAA(r3)
	  stb       r0, 0xAB(r3)
	  lwz       r3, 0xB4(r31)
	  stb       r0, 0xA8(r3)
	  stb       r0, 0xA9(r3)
	  stb       r0, 0xAA(r3)
	  stb       r0, 0xAB(r3)
	  lwz       r3, 0xB8(r31)
	  stb       r0, 0xA8(r3)
	  stb       r0, 0xA9(r3)
	  stb       r0, 0xAA(r3)
	  stb       r0, 0xAB(r3)
	  lwz       r3, 0x90(r31)
	  stb       r0, 0xA8(r3)
	  stb       r0, 0xA9(r3)
	  stb       r0, 0xAA(r3)
	  stb       r0, 0xAB(r3)

	.loc_0x9C:
	  lwz       r26, 0x18C(r24)
	  li        r5, 0
	  lwz       r4, -0x665C(r13)
	  lwz       r3, 0x8(r26)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x110(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r26)
	  li        r4, 0x4
	  bl        -0x35DED0
	  lwz       r3, 0xC(r26)
	  li        r5, 0
	  lwz       r4, -0x665C(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x110(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r26)
	  li        r4, 0x4
	  bl        -0x35DEF8
	  addi      r23, r23, 0x1
	  li        r0, 0
	  cmpwi     r23, 0x5
	  stb       r0, 0x0(r26)
	  addi      r24, r24, 0x4
	  blt+      .loc_0x9C
	  stb       r0, 0x1C7(r31)
	  lwz       r3, 0xD0(r31)
	  stb       r0, 0xB0(r3)
	  bl        -0x2CD63C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x54(r1)
	  lfd       f3, 0xD70(r2)
	  stw       r0, 0x50(r1)
	  lfs       f1, 0xD80(r2)
	  lfd       f2, 0x50(r1)
	  lfs       f0, 0xDD4(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x58(r1)
	  lwz       r0, 0x5C(r1)
	  cmpwi     r0, 0x5
	  blt-      .loc_0x15C
	  li        r0, 0x5

	.loc_0x15C:
	  mulli     r0, r0, 0xC
	  addi      r29, r30, 0x14
	  lfs       f31, 0xD24(r2)
	  mr        r28, r31
	  lfs       f29, 0xD2C(r2)
	  mr        r27, r31
	  lfs       f30, 0xD30(r2)
	  add       r29, r29, r0
	  li        r26, 0

	.loc_0x180:
	  lwz       r0, 0x0(r29)
	  lwz       r25, 0xD8(r28)
	  rlwinm    r3,r0,2,0,29
	  addi      r0, r3, 0xE4
	  lwzx      r24, r31, r0
	  cmplwi    r24, 0
	  bne-      .loc_0x1B0
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x148
	  li        r4, 0x10F
	  crclr     6, 0x6
	  bl        -0x36C634

	.loc_0x1B0:
	  stw       r24, 0x0(r25)
	  li        r4, 0x4
	  lwz       r3, 0x0(r25)
	  bl        -0x35DFC8
	  lfs       f1, 0xD8(r24)
	  li        r0, 0
	  lfs       f0, 0xD4(r24)
	  stfs      f0, 0x10(r25)
	  stfs      f1, 0x14(r25)
	  stfs      f31, 0x20(r25)
	  stfs      f31, 0x24(r25)
	  lfs       f0, 0x20(r25)
	  stfs      f0, 0x28(r25)
	  lfs       f0, 0x24(r25)
	  stfs      f0, 0x2C(r25)
	  lfs       f0, 0x10(r25)
	  stfs      f0, 0x18(r25)
	  lfs       f0, 0x14(r25)
	  stfs      f0, 0x1C(r25)
	  lfs       f0, 0x18(r25)
	  stfs      f0, 0x8(r25)
	  lfs       f0, 0x1C(r25)
	  stfs      f0, 0xC(r25)
	  stw       r0, 0x3C(r25)
	  stw       r0, 0x40(r25)
	  stfs      f31, 0x38(r25)
	  lwz       r3, 0x0(r25)
	  lfs       f1, 0x1C(r25)
	  lfs       f0, 0x18(r25)
	  stfs      f0, 0xD4(r3)
	  stfs      f1, 0xD8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x38(r25)
	  fsubs     f1, f29, f0
	  bl        0x7AEC4
	  fmuls     f0, f30, f1
	  lwz       r3, 0x0(r25)
	  fdivs     f0, f0, f29
	  stfs      f0, 0xC0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  stfs      f31, 0x108(r27)
	  stfs      f31, 0x10C(r27)
	  lwz       r3, 0xB0(r28)
	  bl        -0x8B57C
	  li        r0, 0
	  li        r4, 0
	  stb       r0, 0xB0(r3)
	  lwz       r24, 0xB0(r28)
	  stb       r0, 0xB0(r24)
	  mr        r3, r24
	  stb       r0, 0xB1(r24)
	  bl        -0x8B584
	  li        r25, 0
	  mr        r23, r25
	  b         .loc_0x2E8

	.loc_0x2A4:
	  lwz       r3, 0xAC(r24)
	  lwzx      r0, r3, r23
	  cmplwi    r0, 0
	  bne-      .loc_0x2C8
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x148
	  li        r4, 0x26B
	  crclr     6, 0x6
	  bl        -0x36C74C

	.loc_0x2C8:
	  lwz       r3, 0xAC(r24)
	  lwzx      r3, r3, r23
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r23, r23, 0x4
	  addi      r25, r25, 0x1

	.loc_0x2E8:
	  lhz       r0, 0x2E(r24)
	  cmpw      r25, r0
	  blt+      .loc_0x2A4
	  lwz       r24, 0xD8(r28)
	  li        r0, 0
	  stfs      f31, 0x20(r24)
	  stfs      f31, 0x24(r24)
	  lfs       f0, 0x20(r24)
	  stfs      f0, 0x28(r24)
	  lfs       f0, 0x24(r24)
	  stfs      f0, 0x2C(r24)
	  lfs       f0, 0x10(r24)
	  stfs      f0, 0x18(r24)
	  lfs       f0, 0x14(r24)
	  stfs      f0, 0x1C(r24)
	  lfs       f0, 0x18(r24)
	  stfs      f0, 0x8(r24)
	  lfs       f0, 0x1C(r24)
	  stfs      f0, 0xC(r24)
	  stw       r0, 0x3C(r24)
	  stw       r0, 0x40(r24)
	  stfs      f31, 0x38(r24)
	  lwz       r3, 0x0(r24)
	  lfs       f1, 0x1C(r24)
	  lfs       f0, 0x18(r24)
	  stfs      f0, 0xD4(r3)
	  stfs      f1, 0xD8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x38(r24)
	  fsubs     f1, f29, f0
	  bl        0x7AD9C
	  fmuls     f0, f30, f1
	  lwz       r3, 0x0(r24)
	  fdivs     f0, f0, f29
	  stfs      f0, 0xC0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  stfs      f31, 0x108(r27)
	  mr        r3, r31
	  stfs      f31, 0x10C(r27)
	  bl        0x266C
	  addi      r26, r26, 0x1
	  addi      r28, r28, 0x4
	  cmpwi     r26, 0x3
	  addi      r27, r27, 0x8
	  addi      r29, r29, 0x4
	  blt+      .loc_0x180
	  lwz       r24, 0x90(r31)
	  li        r0, 0
	  li        r4, 0
	  stb       r0, 0xB0(r24)
	  mr        r3, r24
	  stb       r0, 0xB1(r24)
	  bl        -0x8B6C0
	  li        r25, 0
	  mr        r23, r25
	  b         .loc_0x424

	.loc_0x3E0:
	  lwz       r3, 0xAC(r24)
	  lwzx      r0, r3, r23
	  cmplwi    r0, 0
	  bne-      .loc_0x404
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x148
	  li        r4, 0x26B
	  crclr     6, 0x6
	  bl        -0x36C888

	.loc_0x404:
	  lwz       r3, 0xAC(r24)
	  lwzx      r3, r3, r23
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r23, r23, 0x4
	  addi      r25, r25, 0x1

	.loc_0x424:
	  lhz       r0, 0x2E(r24)
	  cmpw      r25, r0
	  blt+      .loc_0x3E0
	  lwz       r24, 0x98(r31)
	  li        r0, 0
	  li        r4, 0
	  stb       r0, 0xB0(r24)
	  mr        r3, r24
	  stb       r0, 0xB1(r24)
	  bl        -0x8B738
	  li        r25, 0
	  mr        r23, r25
	  b         .loc_0x49C

	.loc_0x458:
	  lwz       r3, 0xAC(r24)
	  lwzx      r0, r3, r23
	  cmplwi    r0, 0
	  bne-      .loc_0x47C
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x148
	  li        r4, 0x26B
	  crclr     6, 0x6
	  bl        -0x36C900

	.loc_0x47C:
	  lwz       r3, 0xAC(r24)
	  lwzx      r3, r3, r23
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r23, r23, 0x4
	  addi      r25, r25, 0x1

	.loc_0x49C:
	  lhz       r0, 0x2E(r24)
	  cmpw      r25, r0
	  blt+      .loc_0x458
	  lwz       r24, 0x9C(r31)
	  li        r0, 0
	  li        r4, 0
	  stb       r0, 0xB0(r24)
	  mr        r3, r24
	  stb       r0, 0xB1(r24)
	  bl        -0x8B7B0
	  li        r25, 0
	  mr        r23, r25
	  b         .loc_0x514

	.loc_0x4D0:
	  lwz       r3, 0xAC(r24)
	  lwzx      r0, r3, r23
	  cmplwi    r0, 0
	  bne-      .loc_0x4F4
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x148
	  li        r4, 0x26B
	  crclr     6, 0x6
	  bl        -0x36C978

	.loc_0x4F4:
	  lwz       r3, 0xAC(r24)
	  lwzx      r3, r3, r23
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r23, r23, 0x4
	  addi      r25, r25, 0x1

	.loc_0x514:
	  lhz       r0, 0x2E(r24)
	  cmpw      r25, r0
	  blt+      .loc_0x4D0
	  lwz       r24, 0xA0(r31)
	  li        r0, 0
	  li        r4, 0
	  stb       r0, 0xB0(r24)
	  mr        r3, r24
	  stb       r0, 0xB1(r24)
	  bl        -0x8B828
	  li        r25, 0
	  mr        r23, r25
	  b         .loc_0x58C

	.loc_0x548:
	  lwz       r3, 0xAC(r24)
	  lwzx      r0, r3, r23
	  cmplwi    r0, 0
	  bne-      .loc_0x56C
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x148
	  li        r4, 0x26B
	  crclr     6, 0x6
	  bl        -0x36C9F0

	.loc_0x56C:
	  lwz       r3, 0xAC(r24)
	  lwzx      r3, r3, r23
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r23, r23, 0x4
	  addi      r25, r25, 0x1

	.loc_0x58C:
	  lhz       r0, 0x2E(r24)
	  cmpw      r25, r0
	  blt+      .loc_0x548
	  lwz       r3, 0x94(r31)
	  bl        -0x8B8A4
	  li        r0, 0
	  li        r4, 0
	  stb       r0, 0xB0(r3)
	  lwz       r24, 0x94(r31)
	  stb       r0, 0xB0(r24)
	  mr        r3, r24
	  stb       r0, 0xB1(r24)
	  bl        -0x8B8AC
	  li        r25, 0
	  mr        r23, r25
	  b         .loc_0x610

	.loc_0x5CC:
	  lwz       r3, 0xAC(r24)
	  lwzx      r0, r3, r23
	  cmplwi    r0, 0
	  bne-      .loc_0x5F0
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x148
	  li        r4, 0x26B
	  crclr     6, 0x6
	  bl        -0x36CA74

	.loc_0x5F0:
	  lwz       r3, 0xAC(r24)
	  lwzx      r3, r3, r23
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r23, r23, 0x4
	  addi      r25, r25, 0x1

	.loc_0x610:
	  lhz       r0, 0x2E(r24)
	  cmpw      r25, r0
	  blt+      .loc_0x5CC
	  lfs       f0, 0xD24(r2)
	  li        r4, 0
	  mr        r5, r4
	  stfs      f0, 0x178(r31)
	  stb       r4, 0x1C4(r31)
	  stb       r4, 0x1C5(r31)
	  stb       r4, 0x1C6(r31)
	  lwz       r24, 0x80(r31)
	  b         .loc_0x654

	.loc_0x640:
	  lwz       r3, 0x4(r24)
	  addi      r4, r4, 0x1
	  lwzx      r3, r3, r5
	  addi      r5, r5, 0x4
	  stfs      f0, 0x18(r3)

	.loc_0x654:
	  lwz       r0, 0x10(r24)
	  cmpw      r4, r0
	  blt+      .loc_0x640
	  mr        r3, r24
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  mr        r23, r31
	  stb       r0, 0x24(r24)
	  li        r24, 0

	.loc_0x684:
	  lwz       r3, 0xA4(r23)
	  li        r4, 0
	  bl        -0x8B96C
	  addi      r24, r24, 0x1
	  addi      r23, r23, 0x4
	  cmpwi     r24, 0x3
	  blt+      .loc_0x684
	  lbz       r0, -0x6760(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x998
	  lha       r0, -0x79F6(r13)
	  stw       r0, 0x1E4(r31)
	  bl        -0x2CDBDC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x5C(r1)
	  lfd       f3, 0xD70(r2)
	  stw       r0, 0x58(r1)
	  lfs       f1, 0xD80(r2)
	  lfd       f2, 0x58(r1)
	  lfs       f0, 0xD54(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x6F4
	  lbz       r0, 0x1C4(r31)
	  ori       r0, r0, 0x1
	  stb       r0, 0x1C4(r31)

	.loc_0x6F4:
	  lbz       r0, -0x79F8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x728
	  lbz       r0, -0x79F7(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x71C
	  lbz       r0, 0x1C4(r31)
	  ori       r0, r0, 0x4
	  stb       r0, 0x1C4(r31)
	  b         .loc_0x728

	.loc_0x71C:
	  lbz       r0, 0x1C4(r31)
	  ori       r0, r0, 0x2
	  stb       r0, 0x1C4(r31)

	.loc_0x728:
	  bl        -0x2CDC50
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x5C(r1)
	  lfd       f3, 0xD70(r2)
	  stw       r0, 0x58(r1)
	  lfs       f2, 0xD80(r2)
	  lfd       f0, 0x58(r1)
	  lfs       f1, 0xDDC(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, 0xDD8(r2)
	  fdivs     f2, f3, f2
	  fmadds    f1, f1, f2, f0
	  bl        -0x2D56D8
	  stw       r3, 0x1B8(r31)
	  bl        -0x2CDC8C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x54(r1)
	  lfd       f3, 0xD70(r2)
	  stw       r0, 0x50(r1)
	  lfs       f2, 0xD80(r2)
	  lfd       f0, 0x50(r1)
	  lfs       f1, 0xDE0(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, 0xD4C(r2)
	  fdivs     f2, f3, f2
	  fmadds    f1, f1, f2, f0
	  bl        -0x2D5714
	  stw       r3, 0x1BC(r31)
	  bl        -0x2CDCC8
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x64(r1)
	  lfd       f3, 0xD70(r2)
	  stw       r0, 0x60(r1)
	  lfs       f2, 0xD80(r2)
	  lfd       f0, 0x60(r1)
	  lfs       f1, 0xDE8(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, 0xDE4(r2)
	  fdivs     f2, f3, f2
	  fmadds    f1, f1, f2, f0
	  bl        -0x2D5750
	  stw       r3, 0x1C0(r31)
	  bl        -0x2CDD04
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x6C(r1)
	  lfd       f3, 0xD70(r2)
	  stw       r0, 0x68(r1)
	  lfs       f2, 0xD80(r2)
	  lfd       f0, 0x68(r1)
	  lfs       f1, 0xDDC(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, 0xD4C(r2)
	  fdivs     f2, f3, f2
	  fmadds    f1, f1, f2, f0
	  bl        -0x2D578C
	  stw       r3, 0x1A8(r31)
	  lha       r0, 0x1DE(r31)
	  stw       r0, 0x1AC(r31)
	  bl        -0x2CDD48
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x74(r1)
	  lfd       f3, 0xD70(r2)
	  stw       r0, 0x70(r1)
	  lfs       f2, 0xD80(r2)
	  lfd       f0, 0x70(r1)
	  lfs       f1, 0xDE8(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, 0xDD8(r2)
	  fdivs     f2, f3, f2
	  fmadds    f1, f1, f2, f0
	  bl        -0x2D57D0
	  stw       r3, 0x1B0(r31)
	  bl        -0x2CDD84
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x7C(r1)
	  lfd       f3, 0xD70(r2)
	  stw       r0, 0x78(r1)
	  lfs       f1, 0xD80(r2)
	  lfd       f2, 0x78(r1)
	  lfs       f0, 0xDEC(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f1, f0, f1
	  bl        -0x2D5808
	  stw       r3, 0x1B4(r31)
	  bl        -0x2CDDBC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x84(r1)
	  lfd       f3, 0xD70(r2)
	  stw       r0, 0x80(r1)
	  lfs       f1, 0xD80(r2)
	  lfd       f2, 0x80(r1)
	  lfs       f0, 0xD44(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x8F0
	  li        r24, 0
	  mr        r23, r31

	.loc_0x8D0:
	  lwz       r3, 0xA4(r23)
	  li        r4, 0
	  bl        -0x8BBB8
	  addi      r24, r24, 0x1
	  addi      r23, r23, 0x4
	  cmpwi     r24, 0x3
	  blt+      .loc_0x8D0
	  b         .loc_0x930

	.loc_0x8F0:
	  lfs       f0, 0xDF0(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x918
	  lwz       r3, 0xA8(r31)
	  li        r4, 0x1
	  bl        -0x8BBE4
	  lwz       r3, 0xAC(r31)
	  li        r4, 0x1
	  bl        -0x8BBF0
	  b         .loc_0x930

	.loc_0x918:
	  lfs       f0, 0xD60(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x930
	  lwz       r3, 0xAC(r31)
	  li        r4, 0x1
	  bl        -0x8BC0C

	.loc_0x930:
	  bl        -0x2CDE58
	  lwz       r3, 0x1F8(r31)
	  lbz       r4, -0x6667(r13)
	  bl        -0x169920
	  mr.       r26, r3
	  bne-      .loc_0x95C
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x148
	  li        r4, 0x693
	  crclr     6, 0x6
	  bl        -0x36CDE0

	.loc_0x95C:
	  lwz       r4, 0x74(r26)
	  lwz       r3, 0x1A0(r31)
	  subi      r23, r4, 0x1
	  mr        r4, r23
	  bl        0x9DD8
	  lwz       r5, 0xC0(r31)
	  stw       r4, 0x1C(r5)
	  mr        r4, r23
	  stw       r3, 0x18(r5)
	  lwz       r3, 0x1A0(r31)
	  bl        0x9DC0
	  lwz       r5, 0xC4(r31)
	  stw       r4, 0x1C(r5)
	  stw       r3, 0x18(r5)
	  b         .loc_0xA64

	.loc_0x998:
	  lwz       r3, 0x8C(r31)
	  mr        r23, r31
	  li        r25, 0
	  lwz       r24, 0x8(r3)
	  lbz       r0, 0x0(r24)
	  stb       r0, 0x1C4(r31)
	  lwz       r0, 0x14(r24)
	  stw       r0, 0x1A8(r31)
	  lwz       r0, 0xC(r24)
	  stw       r0, 0x1AC(r31)
	  lwz       r0, 0x8(r24)
	  stw       r0, 0x1B0(r31)
	  lwz       r0, 0x10(r24)
	  stw       r0, 0x1B4(r31)

	.loc_0x9D0:
	  lwz       r3, 0x1C(r24)
	  mr        r4, r25
	  bl        -0x163754
	  cmpwi     r3, -0x1
	  bne-      .loc_0x9F4
	  lwz       r3, 0xA4(r23)
	  li        r4, 0x1
	  bl        -0x8BCCC
	  b         .loc_0xA04

	.loc_0x9F4:
	  lwz       r3, 0x1C(r24)
	  mr        r4, r25
	  bl        -0x163778
	  stw       r3, 0x1B8(r23)

	.loc_0xA04:
	  addi      r25, r25, 0x1
	  addi      r23, r23, 0x4
	  cmpwi     r25, 0x3
	  blt+      .loc_0x9D0
	  lwz       r3, 0x1C(r24)
	  lwz       r4, 0x14(r24)
	  bl        -0x163710
	  stw       r3, 0x1E4(r31)
	  lwz       r4, 0x18(r24)
	  lwz       r3, 0x1A0(r31)
	  subi      r4, r4, 0x1
	  bl        0x9D14
	  lwz       r5, 0xC0(r31)
	  stw       r4, 0x1C(r5)
	  stw       r3, 0x18(r5)
	  lwz       r4, 0x18(r24)
	  lwz       r3, 0x1A0(r31)
	  subi      r4, r4, 0x1
	  bl        0x9CF8
	  lwz       r5, 0xC4(r31)
	  stw       r4, 0x1C(r5)
	  stw       r3, 0x18(r5)
	  mr        r3, r31
	  bl        0x1E2C

	.loc_0xA64:
	  lis       r3, 0xF
	  lwz       r6, 0x1B8(r31)
	  addi      r0, r3, 0x4240
	  cmplw     r6, r0
	  blt-      .loc_0xA8C
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x360
	  li        r4, 0x6B1
	  crclr     6, 0x6
	  bl        -0x36CF10

	.loc_0xA8C:
	  lis       r3, 0xF
	  lwz       r6, 0x1BC(r31)
	  addi      r0, r3, 0x4240
	  cmplw     r6, r0
	  blt-      .loc_0xAB4
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x370
	  li        r4, 0x6B2
	  crclr     6, 0x6
	  bl        -0x36CF38

	.loc_0xAB4:
	  lis       r3, 0xF
	  lwz       r6, 0x1C0(r31)
	  addi      r0, r3, 0x4240
	  cmplw     r6, r0
	  blt-      .loc_0xADC
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x380
	  li        r4, 0x6B3
	  crclr     6, 0x6
	  bl        -0x36CF60

	.loc_0xADC:
	  lis       r3, 0xF
	  lwz       r6, 0x1A8(r31)
	  addi      r0, r3, 0x4240
	  cmplw     r6, r0
	  blt-      .loc_0xB04
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x390
	  li        r4, 0x6B4
	  crclr     6, 0x6
	  bl        -0x36CF88

	.loc_0xB04:
	  lis       r3, 0x2
	  lwz       r6, 0x1B0(r31)
	  subi      r0, r3, 0x7960
	  cmplw     r6, r0
	  blt-      .loc_0xB2C
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x39C
	  li        r4, 0x6B5
	  crclr     6, 0x6
	  bl        -0x36CFB0

	.loc_0xB2C:
	  lis       r3, 0x2
	  lwz       r6, 0x1AC(r31)
	  subi      r0, r3, 0x7960
	  cmplw     r6, r0
	  blt-      .loc_0xB54
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x3AC
	  li        r4, 0x6B6
	  crclr     6, 0x6
	  bl        -0x36CFD8

	.loc_0xB54:
	  lwz       r6, 0x1B4(r31)
	  cmplwi    r6, 0x2710
	  blt-      .loc_0xB74
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x3B8
	  li        r4, 0x6B7
	  crclr     6, 0x6
	  bl        -0x36CFF8

	.loc_0xB74:
	  lbz       r0, 0x1C4(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xBAC
	  lis       r4, 0x315F
	  lwz       r3, 0xC8(r31)
	  addi      r5, r4, 0x3030
	  lis       r4, 0x34
	  stw       r5, 0x1C(r3)
	  addi      r0, r4, 0x3836
	  stw       r0, 0x18(r3)
	  lwz       r3, 0xCC(r31)
	  stw       r5, 0x1C(r3)
	  stw       r0, 0x18(r3)
	  b         .loc_0xBD4

	.loc_0xBAC:
	  lis       r4, 0x305F
	  lwz       r3, 0xC8(r31)
	  addi      r5, r4, 0x3030
	  lis       r4, 0x34
	  stw       r5, 0x1C(r3)
	  addi      r0, r4, 0x3837
	  stw       r0, 0x18(r3)
	  lwz       r3, 0xCC(r31)
	  stw       r5, 0x1C(r3)
	  stw       r0, 0x18(r3)

	.loc_0xBD4:
	  lwz       r25, 0x80(r31)
	  li        r24, 0
	  lis       r4, 0x315F
	  lis       r3, 0x34
	  stb       r24, 0x24(r25)
	  addi      r23, r1, 0x38
	  addi      r27, r4, 0x3030
	  addi      r26, r3, 0x3837
	  lfd       f2, 0x118(r30)
	  lfd       f1, 0x120(r30)
	  lfd       f0, 0x128(r30)
	  stb       r24, -0x79F7(r13)
	  stfd      f2, 0x38(r1)
	  stfd      f1, 0x40(r1)
	  stfd      f0, 0x48(r1)

	.loc_0xC10:
	  lwz       r3, 0x8(r25)
	  lwz       r5, 0x0(r23)
	  lwz       r12, 0x0(r3)
	  lwz       r6, 0x4(r23)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r28, r3
	  bne-      .loc_0xC48
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x148
	  li        r4, 0xE0
	  crclr     6, 0x6
	  bl        -0x36D0CC

	.loc_0xC48:
	  stw       r27, 0x1C(r28)
	  addi      r24, r24, 0x1
	  cmpwi     r24, 0x3
	  addi      r23, r23, 0x8
	  stw       r26, 0x18(r28)
	  blt+      .loc_0xC10
	  lbz       r3, 0x1C4(r31)
	  rlwinm.   r0,r3,0,27,27
	  beq-      .loc_0xCC4
	  li        r25, 0
	  mr        r23, r31

	.loc_0xC74:
	  lwz       r24, 0x18C(r23)
	  li        r5, 0
	  lwz       r4, -0x6654(r13)
	  lwz       r3, 0x8(r24)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x110(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r24)
	  li        r5, 0
	  lwz       r4, -0x6654(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x110(r12)
	  mtctr     r12
	  bctrl
	  addi      r25, r25, 0x1
	  addi      r23, r23, 0x4
	  cmpwi     r25, 0x5
	  blt+      .loc_0xC74
	  b         .loc_0xDD8

	.loc_0xCC4:
	  rlwinm.   r0,r3,0,29,29
	  beq-      .loc_0xD64
	  lwz       r25, 0x80(r31)
	  li        r24, 0
	  lis       r4, 0x325F
	  lis       r3, 0x34
	  stb       r24, 0x24(r25)
	  li        r0, 0x1
	  addi      r23, r1, 0x20
	  addi      r27, r4, 0x3030
	  lfd       f2, 0x118(r30)
	  addi      r26, r3, 0x3837
	  lfd       f1, 0x120(r30)
	  lfd       f0, 0x128(r30)
	  stb       r0, -0x79F7(r13)
	  stfd      f2, 0x20(r1)
	  stfd      f1, 0x28(r1)
	  stfd      f0, 0x30(r1)

	.loc_0xD0C:
	  lwz       r3, 0x8(r25)
	  lwz       r5, 0x0(r23)
	  lwz       r12, 0x0(r3)
	  lwz       r6, 0x4(r23)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r28, r3
	  bne-      .loc_0xD44
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x148
	  li        r4, 0xE0
	  crclr     6, 0x6
	  bl        -0x36D1C8

	.loc_0xD44:
	  stw       r27, 0x1C(r28)
	  addi      r24, r24, 0x1
	  cmpwi     r24, 0x3
	  addi      r23, r23, 0x8
	  stw       r26, 0x18(r28)
	  blt+      .loc_0xD0C
	  li        r0, 0x1
	  stb       r0, 0x1C5(r31)

	.loc_0xD64:
	  lbz       r3, 0x1C4(r31)
	  rlwinm.   r0,r3,0,28,28
	  beq-      .loc_0xDC8
	  li        r25, 0
	  mr        r23, r31

	.loc_0xD78:
	  lwz       r24, 0x18C(r23)
	  li        r5, 0
	  lwz       r4, -0x6658(r13)
	  lwz       r3, 0x8(r24)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x110(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r24)
	  li        r5, 0
	  lwz       r4, -0x6658(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x110(r12)
	  mtctr     r12
	  bctrl
	  addi      r25, r25, 0x1
	  addi      r23, r23, 0x4
	  cmpwi     r25, 0x5
	  blt+      .loc_0xD78
	  b         .loc_0xDD8

	.loc_0xDC8:
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0xDD8
	  li        r0, 0x1
	  stb       r0, 0x1C5(r31)

	.loc_0xDD8:
	  lbz       r0, 0x1C5(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xE90
	  lbz       r3, 0x1C4(r31)
	  rlwinm.   r0,r3,0,27,27
	  beq-      .loc_0xE90
	  rlwinm.   r0,r3,0,29,29
	  beq-      .loc_0xE90
	  lwz       r25, 0x80(r31)
	  li        r24, 0
	  lis       r4, 0x325F
	  lis       r3, 0x34
	  stb       r24, 0x24(r25)
	  li        r0, 0x1
	  addi      r23, r1, 0x8
	  addi      r27, r4, 0x3030
	  lfd       f2, 0x118(r30)
	  addi      r26, r3, 0x3837
	  lfd       f1, 0x120(r30)
	  lfd       f0, 0x128(r30)
	  stb       r0, -0x79F7(r13)
	  stfd      f2, 0x8(r1)
	  stfd      f1, 0x10(r1)
	  stfd      f0, 0x18(r1)

	.loc_0xE38:
	  lwz       r3, 0x8(r25)
	  lwz       r5, 0x0(r23)
	  lwz       r12, 0x0(r3)
	  lwz       r6, 0x4(r23)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r28, r3
	  bne-      .loc_0xE70
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x148
	  li        r4, 0xE0
	  crclr     6, 0x6
	  bl        -0x36D2F4

	.loc_0xE70:
	  stw       r27, 0x1C(r28)
	  addi      r24, r24, 0x1
	  cmpwi     r24, 0x3
	  addi      r23, r23, 0x8
	  stw       r26, 0x18(r28)
	  blt+      .loc_0xE38
	  li        r0, 0x1
	  stb       r0, 0x1C6(r31)

	.loc_0xE90:
	  lbz       r0, -0x79F7(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xEB0
	  lwz       r3, 0x1A4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0xEB0:
	  psq_l     f31,0xD8(r1),0,0
	  lfd       f31, 0xD0(r1)
	  psq_l     f30,0xC8(r1),0,0
	  lfd       f30, 0xC0(r1)
	  psq_l     f29,0xB8(r1),0,0
	  lfd       f29, 0xB0(r1)
	  lmw       r23, 0x8C(r1)
	  lwz       r0, 0xE4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803979A4
 * Size:	001250
 */
void Morimura::TChallengeResult::updateDemo(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x160(r1)
	  mflr      r0
	  stw       r0, 0x164(r1)
	  stfd      f31, 0x150(r1)
	  psq_st    f31,0x158(r1),0,0
	  stfd      f30, 0x140(r1)
	  psq_st    f30,0x148(r1),0,0
	  stmw      r24, 0x120(r1)
	  mr        r31, r3
	  lis       r3, 0x8049
	  lwz       r0, 0x1C8(r31)
	  addi      r30, r3, 0x4720
	  cmpwi     r0, 0x4
	  beq-      .loc_0xC04
	  bge-      .loc_0x54
	  cmpwi     r0, 0x2
	  beq-      .loc_0x650
	  bge-      .loc_0x828
	  cmpwi     r0, 0x1
	  bge-      .loc_0x64
	  b         .loc_0x1220

	.loc_0x54:
	  cmpwi     r0, 0x6
	  beq-      .loc_0x11E4
	  bge-      .loc_0x1220
	  b         .loc_0xF78

	.loc_0x64:
	  lwz       r0, 0x1D0(r31)
	  cmpwi     r0, 0xA
	  bne-      .loc_0xB4
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x182C
	  li        r5, 0
	  bl        -0x5F3F0
	  lwz       r3, 0xD8(r31)
	  li        r4, 0x1
	  li        r0, 0
	  stw       r4, 0x3C(r3)
	  lwz       r3, 0xD8(r31)
	  lfs       f0, 0x128(r31)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x12C(r31)
	  stfs      f0, 0xC(r3)
	  lwz       r3, 0xD8(r31)
	  stw       r4, 0x40(r3)
	  lwz       r3, 0xD8(r31)
	  stw       r0, 0x48(r3)

	.loc_0xB4:
	  lwz       r0, 0x1D0(r31)
	  cmpwi     r0, 0x1E
	  bne-      .loc_0x100
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x182C
	  li        r5, 0
	  bl        -0x5F440
	  lwz       r3, 0xDC(r31)
	  li        r0, 0x1
	  stw       r0, 0x3C(r3)
	  lwz       r3, 0xDC(r31)
	  lfs       f0, 0x138(r31)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x13C(r31)
	  stfs      f0, 0xC(r3)
	  lwz       r3, 0xDC(r31)
	  stw       r0, 0x40(r3)
	  lwz       r3, 0xDC(r31)
	  stw       r0, 0x48(r3)

	.loc_0x100:
	  lwz       r0, 0x1D0(r31)
	  cmpwi     r0, 0x32
	  bne-      .loc_0x150
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x182C
	  li        r5, 0
	  bl        -0x5F48C
	  lwz       r3, 0xE0(r31)
	  li        r4, 0x1
	  li        r0, 0x2
	  stw       r4, 0x3C(r3)
	  lwz       r3, 0xE0(r31)
	  lfs       f0, 0x148(r31)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x14C(r31)
	  stfs      f0, 0xC(r3)
	  lwz       r3, 0xE0(r31)
	  stw       r4, 0x40(r3)
	  lwz       r3, 0xE0(r31)
	  stw       r0, 0x48(r3)

	.loc_0x150:
	  mr        r28, r31
	  li        r26, 0x1
	  li        r25, 0

	.loc_0x15C:
	  lwz       r3, 0xD8(r28)
	  li        r0, 0
	  lwz       r29, 0x48(r3)
	  lwz       r24, 0x3C(r3)
	  cmpwi     r29, 0x3
	  bgt-      .loc_0x180
	  cmpwi     r29, 0
	  blt-      .loc_0x180
	  li        r0, 0x1

	.loc_0x180:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x19C
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x148
	  li        r4, 0x715
	  crclr     6, 0x6
	  bl        -0x36D4FC

	.loc_0x19C:
	  rlwinm    r3,r29,2,0,29
	  addi      r27, r3, 0x17C
	  lwzx      r3, r31, r27
	  lwz       r0, 0x8(r3)
	  subfic    r0, r0, 0x2
	  cntlzw    r0, r0
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x384
	  lwz       r26, 0xD8(r28)
	  lwz       r0, 0x40(r26)
	  cmpwi     r0, 0
	  ble-      .loc_0x37C
	  cmpwi     r24, 0
	  bne-      .loc_0x27C
	  li        r0, 0x2
	  lis       r3, 0x4330
	  stw       r0, 0x3C(r26)
	  rlwinm    r0,r29,4,0,27
	  add       r5, r31, r0
	  lfd       f2, 0xD70(r2)
	  lwzx      r4, r31, r27
	  stw       r3, 0x100(r1)
	  lwz       r6, 0x10(r4)
	  lwz       r0, 0x18(r4)
	  xoris     r4, r6, 0x8000
	  stw       r3, 0x108(r1)
	  xoris     r0, r0, 0x8000
	  lfs       f3, 0x128(r5)
	  stw       r4, 0x104(r1)
	  cmpwi     r6, 0x1
	  lfs       f0, 0x130(r5)
	  stw       r0, 0x10C(r1)
	  lfd       f1, 0x100(r1)
	  fsubs     f4, f3, f0
	  lfd       f0, 0x108(r1)
	  fsubs     f1, f1, f2
	  fsubs     f0, f0, f2
	  fdivs     f2, f1, f0
	  bne-      .loc_0x240
	  lfs       f0, 0xD48(r2)
	  fadds     f2, f2, f0

	.loc_0x240:
	  lfs       f1, 0xD44(r2)
	  lfs       f0, 0xD5C(r2)
	  fadds     f2, f2, f1
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x258
	  fmr       f2, f0

	.loc_0x258:
	  fnmsubs   f0, f4, f2, f3
	  lfs       f1, 0x134(r5)
	  lwz       r3, 0xD8(r28)
	  li        r0, 0x1
	  stfs      f0, 0x8(r3)
	  stfs      f1, 0xC(r3)
	  lwz       r3, 0xD8(r28)
	  stw       r0, 0x40(r3)
	  b         .loc_0x37C

	.loc_0x27C:
	  cmpwi     r24, 0x2
	  bne-      .loc_0x37C
	  lfs       f2, 0x8(r26)
	  lfs       f1, 0x18(r26)
	  lfs       f0, 0xD24(r2)
	  fsubs     f1, f2, f1
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x2A0
	  lfs       f1, 0xD44(r2)

	.loc_0x2A0:
	  lfs       f3, 0xC(r26)
	  lfs       f2, 0x1C(r26)
	  lfs       f0, 0xD24(r2)
	  fsubs     f2, f3, f2
	  fcmpu     cr0, f0, f2
	  bne-      .loc_0x2BC
	  lfs       f2, 0xD44(r2)

	.loc_0x2BC:
	  fneg      f2, f2
	  lis       r3, 0x8051
	  subi      r3, r3, 0x2E20
	  bl        -0x362B64
	  bl        0x79F60
	  lfs       f2, 0x38(r26)
	  bl        0x79F84
	  fabs      f1, f1
	  lfs       f0, 0xD48(r2)
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x37C
	  lfs       f1, 0xDF4(r2)
	  lis       r0, 0x4330
	  lfs       f0, -0x79F0(r13)
	  lwz       r3, 0xD8(r28)
	  fdivs     f0, f1, f0
	  stw       r0, 0x108(r1)
	  lwz       r0, 0x40(r3)
	  lfd       f2, 0xD70(r2)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x10C(r1)
	  lfd       f1, 0x108(r1)
	  fsubs     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x37C
	  li        r0, 0x1
	  li        r4, 0x182E
	  stw       r0, 0x3C(r3)
	  li        r5, 0
	  lwz       r3, -0x67A8(r13)
	  bl        -0x5F6AC
	  lha       r3, 0x1DC(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x108(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f2, 0xD70(r2)
	  stw       r0, 0x10C(r1)
	  lfs       f0, -0x79F0(r13)
	  lfd       f1, 0x108(r1)
	  lwzx      r3, r31, r27
	  fsubs     f1, f1, f2
	  fdivs     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x100(r1)
	  lwz       r0, 0x104(r1)
	  stw       r0, 0x20(r3)
	  stw       r0, 0x1C(r3)

	.loc_0x37C:
	  li        r26, 0
	  b         .loc_0x474

	.loc_0x384:
	  cmpwi     r29, 0x1
	  beq-      .loc_0x3C8
	  bge-      .loc_0x39C
	  cmpwi     r29, 0
	  bge-      .loc_0x3A8
	  b         .loc_0x404

	.loc_0x39C:
	  cmpwi     r29, 0x3
	  bge-      .loc_0x404
	  b         .loc_0x3E8

	.loc_0x3A8:
	  lwz       r3, 0x98(r31)
	  lbz       r0, 0xB1(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x404
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)
	  stb       r0, 0xB1(r3)
	  b         .loc_0x404

	.loc_0x3C8:
	  lwz       r3, 0xA0(r31)
	  lbz       r0, 0xB1(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x404
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)
	  stb       r0, 0xB1(r3)
	  b         .loc_0x404

	.loc_0x3E8:
	  lwz       r3, 0x9C(r31)
	  lbz       r0, 0xB1(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x404
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)
	  stb       r0, 0xB1(r3)

	.loc_0x404:
	  lbz       r0, 0x1E8(r31)
	  cmpw      r25, r0
	  bne-      .loc_0x474
	  lwz       r3, 0xD8(r28)
	  lwz       r0, 0x48(r3)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x474
	  li        r0, 0x1
	  li        r4, 0x182F
	  stw       r0, 0x3C(r3)
	  li        r5, 0
	  lwz       r3, -0x67A8(r13)
	  bl        -0x5F7A8
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1828
	  li        r5, 0
	  bl        -0x5F7B8
	  lwz       r3, 0xD8(r28)
	  li        r4, 0x1
	  lfs       f0, 0x158(r31)
	  li        r0, 0x3
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x15C(r31)
	  stfs      f0, 0xC(r3)
	  lwz       r3, 0xD8(r28)
	  stw       r4, 0x40(r3)
	  lwz       r3, 0xD8(r28)
	  stw       r0, 0x48(r3)

	.loc_0x474:
	  addi      r25, r25, 0x1
	  addi      r28, r28, 0x4
	  cmpwi     r25, 0x3
	  blt+      .loc_0x15C
	  rlwinm.   r0,r26,0,24,31
	  beq-      .loc_0x63C
	  lwz       r3, 0x188(r31)
	  lwz       r0, 0x8(r3)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x1220
	  lwz       r3, 0x90(r31)
	  lbz       r0, 0xB1(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x4B8
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)
	  stb       r0, 0xB1(r3)

	.loc_0x4B8:
	  lwz       r0, 0x1E4(r31)
	  cmpwi     r0, 0
	  blt-      .loc_0x630
	  li        r0, 0x2
	  stw       r0, 0x1C8(r31)
	  bl        -0x2CE8D0
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x10C(r1)
	  lfd       f3, 0xD70(r2)
	  stw       r0, 0x108(r1)
	  lfs       f1, 0xD80(r2)
	  lfd       f2, 0x108(r1)
	  lfs       f0, 0xDD4(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x100(r1)
	  lwz       r0, 0x104(r1)
	  cmpwi     r0, 0x5
	  blt-      .loc_0x514
	  li        r0, 0x5

	.loc_0x514:
	  mulli     r6, r0, 0xC
	  lis       r0, 0x4330
	  addi      r3, r30, 0x14
	  lfs       f0, 0x158(r31)
	  li        r4, 0x1
	  stw       r0, 0x110(r1)
	  lwzx      r3, r3, r6
	  stw       r0, 0x118(r1)
	  rlwinm    r0,r3,2,0,29
	  lfd       f2, 0xD70(r2)
	  add       r5, r31, r0
	  lwz       r3, 0xD8(r5)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x15C(r31)
	  stfs      f0, 0xC(r3)
	  lwz       r3, 0xD8(r5)
	  stw       r4, 0x3C(r3)
	  lwz       r3, 0xD8(r5)
	  stw       r4, 0x40(r3)
	  lwz       r3, 0x188(r31)
	  lfs       f3, 0x158(r31)
	  lwz       r4, 0x10(r3)
	  lwz       r0, 0x18(r3)
	  xoris     r3, r4, 0x8000
	  lfs       f0, 0x160(r31)
	  xoris     r0, r0, 0x8000
	  stw       r3, 0x114(r1)
	  cmpwi     r4, 0x1
	  fsubs     f4, f3, f0
	  stw       r0, 0x11C(r1)
	  lfd       f1, 0x110(r1)
	  lfd       f0, 0x118(r1)
	  fsubs     f1, f1, f2
	  fsubs     f0, f0, f2
	  fdivs     f2, f1, f0
	  bne-      .loc_0x5AC
	  lfs       f0, 0xD48(r2)
	  fadds     f2, f2, f0

	.loc_0x5AC:
	  lfs       f1, 0xD44(r2)
	  lfs       f0, 0xD5C(r2)
	  fadds     f2, f2, f1
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x5C4
	  fmr       f2, f0

	.loc_0x5C4:
	  addi      r0, r30, 0x14
	  fnmsubs   f0, f4, f2, f3
	  add       r3, r0, r6
	  lfs       f1, 0x164(r31)
	  lwz       r0, 0x4(r3)
	  li        r5, 0x1
	  lwz       r3, 0x8(r3)
	  rlwinm    r4,r0,2,0,29
	  li        r0, 0
	  add       r6, r31, r4
	  rlwinm    r3,r3,2,0,29
	  lwz       r4, 0xD8(r6)
	  add       r3, r31, r3
	  stfs      f0, 0x8(r4)
	  stfs      f1, 0xC(r4)
	  lwz       r4, 0xD8(r6)
	  stw       r5, 0x3C(r4)
	  lwz       r4, 0xD8(r6)
	  stw       r5, 0x40(r4)
	  lwz       r3, 0xD8(r3)
	  stw       r5, 0x3C(r3)
	  lfs       f0, 0x10(r3)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x14(r3)
	  stfs      f0, 0xC(r3)
	  stw       r0, 0x40(r3)
	  b         .loc_0x1220

	.loc_0x630:
	  mr        r3, r31
	  bl        .loc_0x1250
	  b         .loc_0x1220

	.loc_0x63C:
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1031
	  li        r5, 0
	  bl        -0x5F9BC
	  b         .loc_0x1220

	.loc_0x650:
	  mr        r3, r31
	  li        r5, 0x1
	  li        r6, 0
	  b         .loc_0x688

	.loc_0x660:
	  lwz       r4, 0xD8(r3)
	  lwz       r0, 0x40(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0x680
	  lwz       r0, 0x3C(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0x680
	  li        r5, 0

	.loc_0x680:
	  addi      r3, r3, 0x4
	  addi      r6, r6, 0x1

	.loc_0x688:
	  cmpwi     r6, 0x3
	  bgt+      .loc_0x660
	  rlwinm.   r0,r5,0,24,31
	  mr        r26, r5
	  beq-      .loc_0x774
	  li        r27, 0
	  mr        r24, r31

	.loc_0x6A4:
	  lwz       r3, 0xD8(r24)
	  lwz       r0, 0x40(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x764
	  lwz       r4, 0x3C(r3)
	  cmpwi     r4, 0
	  bne-      .loc_0x6E4
	  li        r0, 0x2
	  lfs       f0, 0xDF8(r2)
	  stw       r0, 0x3C(r3)
	  lfs       f1, 0x158(r31)
	  lfs       f2, 0x15C(r31)
	  fadds     f1, f1, f0
	  lwz       r3, 0xD8(r24)
	  stfs      f1, 0x8(r3)
	  stfs      f2, 0xC(r3)

	.loc_0x6E4:
	  cntlzw    r0, r4
	  rlwinm    r0,r0,27,24,31
	  cmplwi    r0, 0x2
	  beq-      .loc_0x760
	  lwz       r25, 0xD8(r24)
	  lfs       f0, 0xD24(r2)
	  lfs       f2, 0x8(r25)
	  lfs       f1, 0x18(r25)
	  fsubs     f1, f2, f1
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x714
	  lfs       f1, 0xD44(r2)

	.loc_0x714:
	  lfs       f3, 0xC(r25)
	  lfs       f2, 0x1C(r25)
	  lfs       f0, 0xD24(r2)
	  fsubs     f2, f3, f2
	  fcmpu     cr0, f0, f2
	  bne-      .loc_0x730
	  lfs       f2, 0xD44(r2)

	.loc_0x730:
	  fneg      f2, f2
	  lis       r3, 0x8051
	  subi      r3, r3, 0x2E20
	  bl        -0x362FD8
	  bl        0x79AEC
	  lfs       f2, 0x38(r25)
	  bl        0x79B10
	  fabs      f1, f1
	  lfs       f0, 0xD50(r2)
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x764

	.loc_0x760:
	  li        r26, 0

	.loc_0x764:
	  addi      r27, r27, 0x1
	  addi      r24, r24, 0x4
	  cmpwi     r27, 0x3
	  blt+      .loc_0x6A4

	.loc_0x774:
	  rlwinm.   r0,r26,0,24,31
	  beq-      .loc_0x1220
	  li        r27, 0
	  mr        r25, r31

	.loc_0x784:
	  lwz       r26, 0xD8(r25)
	  lwz       r0, 0x40(r26)
	  cmpwi     r0, 0
	  ble-      .loc_0x7F4
	  lwz       r3, 0x94(r31)
	  li        r0, 0x4
	  lwz       r3, 0x7C(r3)
	  lwz       r3, 0x0(r3)
	  lwz       r24, 0x0(r3)
	  cmplwi    r24, 0
	  stw       r0, 0x3C(r26)
	  bne-      .loc_0x7C8
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x148
	  li        r4, 0x1D7
	  crclr     6, 0x6
	  bl        -0x36DB28

	.loc_0x7C8:
	  stw       r24, 0x4(r26)
	  lwz       r3, 0x4(r26)
	  lfs       f1, 0x18(r26)
	  lfs       f0, 0x8C(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x30(r26)
	  lwz       r3, 0x4(r26)
	  lfs       f1, 0x1C(r26)
	  lfs       f0, 0x9C(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x34(r26)

	.loc_0x7F4:
	  addi      r27, r27, 0x1
	  addi      r25, r25, 0x4
	  cmpwi     r27, 0x3
	  blt+      .loc_0x784
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x182C
	  li        r5, 0
	  bl        -0x5FB84
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x1C8(r31)
	  bl        0xF70
	  b         .loc_0x1220

	.loc_0x828:
	  lfs       f1, 0x178(r31)
	  lfs       f0, 0xDFC(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xA9C
	  lwz       r3, 0xD8(r31)
	  li        r25, 0
	  lfs       f1, 0xD24(r2)
	  lwz       r0, 0x40(r3)
	  cmpwi     r0, 0
	  ble-      .loc_0x864
	  lfs       f0, 0x18(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x864
	  li        r25, 0
	  fmr       f1, f0

	.loc_0x864:
	  lwz       r3, 0xDC(r31)
	  lwz       r0, 0x40(r3)
	  cmpwi     r0, 0
	  ble-      .loc_0x888
	  lfs       f0, 0x18(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x888
	  li        r25, 0x1
	  fmr       f1, f0

	.loc_0x888:
	  lwz       r3, 0xE0(r31)
	  lwz       r0, 0x40(r3)
	  cmpwi     r0, 0
	  ble-      .loc_0x8A8
	  lfs       f0, 0x18(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x8A8
	  li        r25, 0x2

	.loc_0x8A8:
	  li        r26, 0
	  mr        r28, r31

	.loc_0x8B0:
	  lwz       r3, 0xD8(r28)
	  lwz       r0, 0x40(r3)
	  cmpwi     r0, 0
	  ble-      .loc_0xA8C
	  lwz       r0, 0x1E4(r31)
	  cmpwi     r0, 0
	  bge-      .loc_0x8E0
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x148
	  li        r4, 0x7B9
	  crclr     6, 0x6
	  bl        -0x36DC40

	.loc_0x8E0:
	  lwz       r0, 0x1E4(r31)
	  lfs       f3, 0xDD8(r2)
	  rlwinm    r3,r0,2,0,29
	  lfs       f2, 0x16C(r31)
	  addi      r0, r3, 0xB0
	  lwz       r4, 0xD8(r28)
	  lwzx      r3, r31, r0
	  lfs       f0, 0xD24(r2)
	  lwz       r3, 0x7C(r3)
	  lwz       r3, 0x0(r3)
	  lwz       r29, 0x0(r3)
	  lfs       f4, 0x8C(r29)
	  lfs       f1, 0x9C(r29)
	  fsubs     f3, f4, f3
	  fadds     f31, f2, f1
	  stfs      f3, 0x8(r4)
	  stfs      f31, 0xC(r4)
	  lwz       r27, 0xD8(r28)
	  lfs       f2, 0x8(r27)
	  lfs       f1, 0x18(r27)
	  fsubs     f1, f2, f1
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x940
	  lfs       f1, 0xD44(r2)

	.loc_0x940:
	  lfs       f3, 0xC(r27)
	  lfs       f2, 0x1C(r27)
	  lfs       f0, 0xD24(r2)
	  fsubs     f2, f3, f2
	  fcmpu     cr0, f0, f2
	  bne-      .loc_0x95C
	  lfs       f2, 0xD44(r2)

	.loc_0x95C:
	  fneg      f2, f2
	  lis       r3, 0x8051
	  subi      r3, r3, 0x2E20
	  bl        -0x363204
	  bl        0x798C0
	  lfs       f2, 0x38(r27)
	  bl        0x798E4
	  lfs       f0, 0x38(r27)
	  fadds     f1, f0, f1
	  bl        0x798AC
	  cmpw      r26, r25
	  stfs      f1, 0x38(r27)
	  bne-      .loc_0x9AC
	  lfs       f1, 0x168(r31)
	  lfs       f0, 0x8C(r29)
	  lwz       r3, 0xD8(r28)
	  fadds     f0, f1, f0
	  stfs      f0, 0x18(r3)
	  stfs      f31, 0x1C(r3)
	  b         .loc_0xA2C

	.loc_0x9AC:
	  lwz       r4, 0x188(r31)
	  lis       r3, 0x4330
	  stw       r3, 0x118(r1)
	  lwz       r5, 0x10(r4)
	  lwz       r0, 0x18(r4)
	  xoris     r4, r5, 0x8000
	  stw       r3, 0x110(r1)
	  xoris     r0, r0, 0x8000
	  lfd       f2, 0xD70(r2)
	  stw       r4, 0x11C(r1)
	  cmpwi     r5, 0x1
	  stw       r0, 0x114(r1)
	  lfd       f1, 0x118(r1)
	  lfd       f0, 0x110(r1)
	  fsubs     f1, f1, f2
	  fsubs     f0, f0, f2
	  fdivs     f2, f1, f0
	  bne-      .loc_0x9FC
	  lfs       f0, 0xD48(r2)
	  fadds     f2, f2, f0

	.loc_0x9FC:
	  lfs       f1, 0xD44(r2)
	  lfs       f0, 0xD5C(r2)
	  fadds     f2, f2, f1
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0xA14
	  fmr       f2, f0

	.loc_0xA14:
	  lfs       f1, 0x170(r31)
	  lfs       f0, 0x8C(r29)
	  lwz       r3, 0xD8(r28)
	  fmadds    f0, f1, f2, f0
	  stfs      f0, 0x18(r3)
	  stfs      f31, 0x1C(r3)

	.loc_0xA2C:
	  lwz       r27, 0xD8(r28)
	  li        r0, 0x4
	  cmplwi    r29, 0
	  stw       r0, 0x3C(r27)
	  bne-      .loc_0xA54
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x148
	  li        r4, 0x1D7
	  crclr     6, 0x6
	  bl        -0x36DDB4

	.loc_0xA54:
	  stw       r29, 0x4(r27)
	  li        r0, 0
	  lwz       r3, 0x4(r27)
	  lfs       f1, 0x18(r27)
	  lfs       f0, 0x8C(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x30(r27)
	  lwz       r3, 0x4(r27)
	  lfs       f1, 0x1C(r27)
	  lfs       f0, 0x9C(r3)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x34(r27)
	  lwz       r3, 0xD8(r28)
	  stw       r0, 0x40(r3)

	.loc_0xA8C:
	  addi      r26, r26, 0x1
	  addi      r28, r28, 0x4
	  cmpwi     r26, 0x3
	  blt+      .loc_0x8B0

	.loc_0xA9C:
	  lbz       r0, 0x1C7(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x1220
	  lwz       r0, 0x1E4(r31)
	  lwz       r4, 0x3C4(r30)
	  lwz       r3, 0x3C8(r30)
	  cmpwi     r0, 0
	  lwz       r0, 0x3CC(r30)
	  stw       r4, 0xF4(r1)
	  stw       r3, 0xF8(r1)
	  stw       r0, 0xFC(r1)
	  bge-      .loc_0xAE0
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x148
	  li        r4, 0x7D2
	  crclr     6, 0x6
	  bl        -0x36DE40

	.loc_0xAE0:
	  lwz       r0, 0x1E4(r31)
	  li        r27, 0
	  lwz       r6, 0x188(r31)
	  lis       r3, 0x804C
	  rlwinm    r0,r0,2,0,29
	  addi      r5, r1, 0xF4
	  add       r4, r31, r0
	  lwz       r24, 0x10(r6)
	  lfsx      f30, r5, r0
	  mr        r29, r27
	  lwz       r28, 0xB0(r4)
	  addi      r25, r3, 0x1514
	  lfs       f31, 0xD54(r2)
	  b         .loc_0xBF0

	.loc_0xB18:
	  lwz       r3, 0x7C(r28)
	  lwzx      r3, r3, r29
	  lwz       r26, 0x0(r3)
	  cmplwi    r26, 0
	  bne-      .loc_0xB40
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x148
	  li        r4, 0x255
	  crclr     6, 0x6
	  bl        -0x36DEA0

	.loc_0xB40:
	  mr        r3, r26
	  li        r4, 0x4
	  bl        -0x35F830
	  mr        r4, r26
	  addi      r3, r1, 0xA4
	  li        r5, 0
	  bl        -0x35F564
	  lfs       f1, 0x28(r26)
	  mr        r4, r26
	  lfs       f0, 0x20(r26)
	  addi      r3, r1, 0xB0
	  lfs       f2, 0xA4(r1)
	  li        r5, 0
	  fsubs     f0, f1, f0
	  fmadds    f0, f31, f0, f2
	  stfs      f0, 0x8(r1)
	  bl        -0x35F58C
	  lfs       f1, 0x2C(r26)
	  addi      r4, r1, 0x98
	  lfs       f0, 0x24(r26)
	  lwz       r0, 0x8(r1)
	  fsubs     f0, f1, f0
	  lfs       f1, 0xB4(r1)
	  stw       r0, 0x10(r1)
	  fmadds    f1, f31, f0, f1
	  lfs       f0, 0x10(r1)
	  stw       r25, 0xA0(r1)
	  stfs      f1, 0xC(r1)
	  lwz       r0, 0xC(r1)
	  stfs      f0, 0x98(r1)
	  stw       r0, 0x14(r1)
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x9C(r1)
	  lwz       r3, 0xAC(r28)
	  lwzx      r3, r3, r29
	  stfs      f30, 0x14(r3)
	  lwz       r3, 0xAC(r28)
	  lwzx      r3, r3, r29
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r29, r29, 0x4
	  addi      r27, r27, 0x1

	.loc_0xBF0:
	  cmpw      r27, r24
	  blt+      .loc_0xB18
	  mr        r3, r31
	  bl        .loc_0x1250
	  b         .loc_0x1220

	.loc_0xC04:
	  li        r25, 0
	  mr        r28, r31

	.loc_0xC0C:
	  lwz       r4, 0xD8(r28)
	  lwz       r0, 0x3C(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0xC48
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x182D
	  li        r5, 0
	  bl        -0x5FF9C
	  lwz       r3, 0xD8(r28)
	  li        r4, 0x5
	  li        r0, 0x1
	  stw       r4, 0x3C(r3)
	  lwz       r3, 0xD8(r28)
	  stw       r0, 0x40(r3)
	  b         .loc_0xF64

	.loc_0xC48:
	  cmpwi     r0, 0x5
	  bne-      .loc_0xF64
	  lfs       f1, 0xD64(r2)
	  lis       r0, 0x4330
	  lfs       f0, -0x79F0(r13)
	  lwz       r3, 0x40(r4)
	  fdivs     f0, f1, f0
	  stw       r0, 0x118(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f2, 0xD70(r2)
	  stw       r0, 0x11C(r1)
	  lfd       f1, 0x118(r1)
	  fsubs     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xF64
	  lbz       r0, 0x1C4(r31)
	  li        r5, 0
	  lwz       r3, 0x44(r4)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0xC9C
	  li        r5, 0x1

	.loc_0xC9C:
	  rlwinm    r3,r3,2,0,29
	  rlwinm.   r0,r5,0,24,31
	  addi      r24, r3, 0x18C
	  lwzx      r26, r31, r24
	  beq-      .loc_0xCEC
	  lwz       r3, 0x8(r26)
	  li        r5, 0
	  lwz       r4, -0x6654(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x110(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r26)
	  li        r5, 0
	  lwz       r4, -0x6654(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x110(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xD24

	.loc_0xCEC:
	  lwz       r3, 0x8(r26)
	  li        r5, 0
	  lwz       r4, -0x6658(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x110(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r26)
	  li        r5, 0
	  lwz       r4, -0x6658(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x110(r12)
	  mtctr     r12
	  bctrl

	.loc_0xD24:
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1830
	  li        r5, 0
	  bl        -0x600A4
	  lwzx      r26, r31, r24
	  addi      r3, r1, 0x8C
	  li        r5, 0
	  lwz       r24, 0x8(r26)
	  mr        r4, r24
	  bl        -0x35F754
	  lfs       f1, 0x2C(r24)
	  addi      r3, r1, 0x80
	  lfs       f0, 0x24(r24)
	  li        r5, 0
	  lwz       r24, 0x8(r26)
	  fsubs     f0, f1, f0
	  lfs       f2, 0x90(r1)
	  lfs       f1, 0xD54(r2)
	  mr        r4, r24
	  fmadds    f30, f1, f0, f2
	  bl        -0x35F780
	  lfs       f1, 0x28(r24)
	  lis       r3, 0x804C
	  lfs       f0, 0x20(r24)
	  li        r7, 0
	  stfs      f30, 0x34(r1)
	  addi      r0, r3, 0x14F0
	  fsubs     f0, f1, f0
	  lfs       f2, 0x80(r1)
	  lfs       f1, 0xD54(r2)
	  lis       r5, 0x804C
	  lwz       r3, 0x34(r1)
	  lis       r4, 0x804E
	  fmadds    f1, f1, f0, f2
	  stw       r3, 0x24(r1)
	  lis       r6, 0x804C
	  lis       r3, 0x804E
	  lfs       f0, 0x24(r1)
	  addi      r9, r6, 0x1514
	  stfs      f1, 0x30(r1)
	  addi      r8, r5, 0x14D8
	  li        r5, 0x7
	  addi      r6, r4, 0x7488
	  stw       r0, 0xD8(r1)
	  addi      r0, r3, 0x3DC4
	  lwz       r10, 0x30(r1)
	  addi      r3, r1, 0xD8
	  stw       r8, 0xD8(r1)
	  addi      r4, r1, 0xE8
	  stw       r10, 0x20(r1)
	  stw       r6, 0xD8(r1)
	  lfs       f1, 0x20(r1)
	  stw       r9, 0xF0(r1)
	  stfs      f1, 0xE8(r1)
	  stfs      f0, 0xEC(r1)
	  stb       r7, 0xDC(r1)
	  stb       r7, 0xDD(r1)
	  sth       r5, 0xE0(r1)
	  stw       r7, 0xE4(r1)
	  stw       r0, 0xD8(r1)
	  bl        0x21078
	  lwz       r24, 0x198(r31)
	  lbz       r0, 0x0(r24)
	  cmplwi    r0, 0
	  bne-      .loc_0xEA8
	  lwz       r26, 0x8(r24)
	  addi      r3, r1, 0x74
	  li        r5, 0
	  mr        r4, r26
	  bl        -0x35F844
	  lfs       f1, 0x2C(r26)
	  addi      r3, r1, 0x68
	  lfs       f0, 0x24(r26)
	  li        r5, 0
	  lwz       r24, 0x8(r24)
	  fsubs     f0, f1, f0
	  lfs       f1, 0x78(r1)
	  mr        r4, r24
	  fadds     f30, f1, f0
	  bl        -0x35F86C
	  lfs       f1, 0x28(r24)
	  li        r4, 0x1
	  lfs       f0, 0x20(r24)
	  li        r0, 0x3
	  lfs       f2, 0x68(r1)
	  fsubs     f0, f1, f0
	  lwz       r3, 0x198(r31)
	  stb       r4, 0x0(r3)
	  fadds     f0, f2, f0
	  lwz       r3, 0xD8(r28)
	  stfs      f0, 0x8(r3)
	  stfs      f30, 0xC(r3)
	  lwz       r3, 0xD8(r28)
	  stw       r0, 0x44(r3)
	  lwz       r3, 0xD8(r28)
	  stw       r4, 0x3C(r3)
	  b         .loc_0xF64

	.loc_0xEA8:
	  lwz       r24, 0x19C(r31)
	  lbz       r0, 0x0(r24)
	  cmplwi    r0, 0
	  bne-      .loc_0xF38
	  lwz       r26, 0x8(r24)
	  addi      r3, r1, 0x5C
	  li        r5, 0
	  mr        r4, r26
	  bl        -0x35F8D4
	  lfs       f1, 0x2C(r26)
	  addi      r3, r1, 0x50
	  lfs       f0, 0x24(r26)
	  li        r5, 0
	  lwz       r24, 0x8(r24)
	  fsubs     f0, f1, f0
	  lfs       f1, 0x60(r1)
	  mr        r4, r24
	  fadds     f30, f1, f0
	  bl        -0x35F8FC
	  lfs       f1, 0x28(r24)
	  li        r4, 0x1
	  lfs       f0, 0x20(r24)
	  li        r0, 0x4
	  lfs       f2, 0x50(r1)
	  fsubs     f0, f1, f0
	  lwz       r3, 0x19C(r31)
	  stb       r4, 0x0(r3)
	  fadds     f0, f2, f0
	  lwz       r3, 0xD8(r28)
	  stfs      f0, 0x8(r3)
	  stfs      f30, 0xC(r3)
	  lwz       r3, 0xD8(r28)
	  stw       r0, 0x44(r3)
	  lwz       r3, 0xD8(r28)
	  stw       r4, 0x3C(r3)
	  b         .loc_0xF64

	.loc_0xF38:
	  lwz       r5, 0xD8(r28)
	  li        r4, 0x1
	  li        r3, 0
	  li        r0, 0x5
	  stw       r4, 0x3C(r5)
	  lfs       f0, 0x10(r5)
	  stfs      f0, 0x8(r5)
	  lfs       f0, 0x14(r5)
	  stfs      f0, 0xC(r5)
	  stw       r3, 0x40(r5)
	  stw       r0, 0x1C8(r31)

	.loc_0xF64:
	  addi      r25, r25, 0x1
	  addi      r28, r28, 0x4
	  cmpwi     r25, 0x3
	  blt+      .loc_0xC0C
	  b         .loc_0x1220

	.loc_0xF78:
	  mr        r28, r31
	  li        r25, 0x1
	  li        r26, 0

	.loc_0xF84:
	  lwz       r4, 0xD8(r28)
	  lwz       r3, 0x40(r4)
	  cmpwi     r3, 0
	  beq-      .loc_0x11C0
	  lwz       r0, 0x3C(r4)
	  li        r25, 0
	  cmpwi     r0, 0
	  bne-      .loc_0xFD0
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x182D
	  li        r5, 0
	  bl        -0x60324
	  lwz       r3, 0xD8(r28)
	  li        r4, 0x5
	  li        r0, 0x1
	  stw       r4, 0x3C(r3)
	  lwz       r3, 0xD8(r28)
	  stw       r0, 0x40(r3)
	  b         .loc_0x11C0

	.loc_0xFD0:
	  cmpwi     r0, 0x5
	  bne-      .loc_0x11C0
	  lfs       f1, 0xD64(r2)
	  xoris     r3, r3, 0x8000
	  lfs       f0, -0x79F0(r13)
	  lis       r0, 0x4330
	  stw       r3, 0x11C(r1)
	  fdivs     f0, f1, f0
	  lfd       f2, 0xD70(r2)
	  stw       r0, 0x118(r1)
	  lfd       f1, 0x118(r1)
	  fsubs     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x11C0
	  lbz       r0, 0x1C4(r31)
	  li        r5, 0
	  lwz       r3, 0x44(r4)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x1020
	  li        r5, 0x1

	.loc_0x1020:
	  rlwinm    r3,r3,2,0,29
	  rlwinm.   r0,r5,0,24,31
	  addi      r24, r3, 0x18C
	  lwzx      r27, r31, r24
	  beq-      .loc_0x1070
	  lwz       r3, 0x8(r27)
	  li        r5, 0
	  lwz       r4, -0x6654(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x110(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r27)
	  li        r5, 0
	  lwz       r4, -0x6654(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x110(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x10A8

	.loc_0x1070:
	  lwz       r3, 0x8(r27)
	  li        r5, 0
	  lwz       r4, -0x6658(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x110(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r27)
	  li        r5, 0
	  lwz       r4, -0x6658(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x110(r12)
	  mtctr     r12
	  bctrl

	.loc_0x10A8:
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1830
	  li        r5, 0
	  bl        -0x60428
	  lwzx      r27, r31, r24
	  addi      r3, r1, 0x44
	  li        r5, 0
	  lwz       r24, 0x8(r27)
	  mr        r4, r24
	  bl        -0x35FAD8
	  lfs       f1, 0x2C(r24)
	  addi      r3, r1, 0x38
	  lfs       f0, 0x24(r24)
	  li        r5, 0
	  lwz       r24, 0x8(r27)
	  fsubs     f0, f1, f0
	  lfs       f2, 0x48(r1)
	  lfs       f1, 0xD54(r2)
	  mr        r4, r24
	  fmadds    f30, f1, f0, f2
	  bl        -0x35FB04
	  lfs       f1, 0x28(r24)
	  lis       r3, 0x804C
	  lfs       f0, 0x20(r24)
	  li        r7, 0
	  stfs      f30, 0x2C(r1)
	  addi      r0, r3, 0x14F0
	  fsubs     f0, f1, f0
	  lfs       f2, 0x38(r1)
	  lfs       f1, 0xD54(r2)
	  lis       r5, 0x804C
	  lwz       r3, 0x2C(r1)
	  lis       r4, 0x804E
	  fmadds    f1, f1, f0, f2
	  stw       r3, 0x1C(r1)
	  lis       r6, 0x804C
	  lis       r3, 0x804E
	  lfs       f0, 0x1C(r1)
	  addi      r9, r6, 0x1514
	  stfs      f1, 0x28(r1)
	  addi      r8, r5, 0x14D8
	  li        r5, 0x7
	  addi      r6, r4, 0x7488
	  stw       r0, 0xBC(r1)
	  addi      r0, r3, 0x3DC4
	  lwz       r10, 0x28(r1)
	  addi      r3, r1, 0xBC
	  stw       r8, 0xBC(r1)
	  addi      r4, r1, 0xCC
	  stw       r10, 0x18(r1)
	  stw       r6, 0xBC(r1)
	  lfs       f1, 0x18(r1)
	  stw       r9, 0xD4(r1)
	  stfs      f1, 0xCC(r1)
	  stfs      f0, 0xD0(r1)
	  stb       r7, 0xC0(r1)
	  stb       r7, 0xC1(r1)
	  sth       r5, 0xC4(r1)
	  stw       r7, 0xC8(r1)
	  stw       r0, 0xBC(r1)
	  bl        0x20CF4
	  lwz       r4, 0xD8(r28)
	  li        r3, 0x1
	  li        r0, 0
	  stw       r3, 0x3C(r4)
	  lfs       f0, 0x10(r4)
	  stfs      f0, 0x8(r4)
	  lfs       f0, 0x14(r4)
	  stfs      f0, 0xC(r4)
	  stw       r0, 0x40(r4)

	.loc_0x11C0:
	  addi      r26, r26, 0x1
	  addi      r28, r28, 0x4
	  cmpwi     r26, 0x3
	  blt+      .loc_0xF84
	  rlwinm.   r0,r25,0,24,31
	  beq-      .loc_0x1220
	  li        r0, 0x6
	  stw       r0, 0x1C8(r31)
	  b         .loc_0x1220

	.loc_0x11E4:
	  lwz       r0, 0x1E4(r31)
	  cmpwi     r0, 0
	  blt-      .loc_0x1220
	  lwz       r3, 0x7C(r31)
	  bl        -0xB75C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1220
	  lwz       r3, 0x90(r31)
	  li        r4, 0x1
	  stb       r4, 0xB0(r3)
	  lwz       r0, 0x1E4(r31)
	  rlwinm    r0,r0,2,0,29
	  add       r3, r31, r0
	  lwz       r3, 0xB0(r3)
	  stb       r4, 0xB0(r3)

	.loc_0x1220:
	  lwz       r3, 0x1D0(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x1D0(r31)
	  psq_l     f31,0x158(r1),0,0
	  lfd       f31, 0x150(r1)
	  psq_l     f30,0x148(r1),0,0
	  lfd       f30, 0x140(r1)
	  lmw       r24, 0x120(r1)
	  lwz       r0, 0x164(r1)
	  mtlr      r0
	  addi      r1, r1, 0x160
	  blr

	.loc_0x1250:
	*/
}

/*
 * --INFO--
 * Address:	80398BF4
 * Size:	000540
 */
void Morimura::TChallengeResult::changeAnimDemo(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  stw       r0, 0xF4(r1)
	  stfd      f31, 0xE0(r1)
	  psq_st    f31,0xE8(r1),0,0
	  stmw      r26, 0xC8(r1)
	  mr        r29, r3
	  lbz       r0, 0x1C5(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x2F8
	  li        r0, 0x4
	  stw       r0, 0x1C8(r29)
	  lbz       r0, -0x79F7(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x1A0
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1835
	  li        r5, 0
	  bl        -0x6060C
	  bl        0x8A5E4
	  lhz       r28, 0x6(r3)
	  bl        0x8A5DC
	  lhz       r4, 0x4(r3)
	  lis       r5, 0x4330
	  lis       r3, 0x804C
	  stw       r5, 0xB8(r1)
	  addi      r0, r3, 0x1514
	  lfd       f2, 0xD88(r2)
	  stw       r4, 0xBC(r1)
	  addi      r4, r1, 0x84
	  lfs       f3, 0xD54(r2)
	  lfd       f0, 0xB8(r1)
	  stw       r28, 0xC4(r1)
	  fsubs     f1, f0, f2
	  stw       r5, 0xC0(r1)
	  lfd       f0, 0xC0(r1)
	  fmuls     f1, f3, f1
	  stw       r0, 0x8C(r1)
	  fsubs     f0, f0, f2
	  stfs      f1, 0x38(r1)
	  fmuls     f0, f3, f0
	  lwz       r0, 0x38(r1)
	  stw       r0, 0x40(r1)
	  stfs      f0, 0x3C(r1)
	  lfs       f0, 0x40(r1)
	  lwz       r0, 0x3C(r1)
	  stfs      f0, 0x84(r1)
	  stw       r0, 0x44(r1)
	  lfs       f0, 0x44(r1)
	  stfs      f0, 0x88(r1)
	  lwz       r3, 0x1A4(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x80(r29)
	  lis       r3, 0x6962
	  addi      r6, r3, 0x6F6E
	  li        r5, 0x4E72
	  lwz       r3, 0x8(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xE00(r2)
	  li        r8, 0
	  lfs       f0, 0xD4C(r2)
	  lis       r3, 0x804C
	  stfs      f1, 0x28(r1)
	  addi      r0, r3, 0x14F0
	  lis       r3, 0x804C
	  lis       r4, 0x804E
	  stfs      f0, 0x2C(r1)
	  lis       r5, 0x804C
	  lwz       r6, 0x28(r1)
	  addi      r9, r3, 0x14D8
	  stw       r0, 0xA4(r1)
	  lis       r3, 0x804E
	  lwz       r0, 0x2C(r1)
	  addi      r7, r4, 0x7470
	  stw       r6, 0x30(r1)
	  addi      r10, r5, 0x1514
	  li        r6, 0xA
	  li        r5, 0xB
	  stw       r0, 0x34(r1)
	  addi      r0, r3, 0x51F8
	  lfs       f1, 0x30(r1)
	  addi      r3, r1, 0xA4
	  stw       r9, 0xA4(r1)
	  addi      r4, r1, 0x78
	  lfs       f0, 0x34(r1)
	  stw       r7, 0xA4(r1)
	  stw       r10, 0x80(r1)
	  stfs      f1, 0x78(r1)
	  stfs      f0, 0x7C(r1)
	  stb       r8, 0xA8(r1)
	  stb       r8, 0xA9(r1)
	  sth       r6, 0xAC(r1)
	  sth       r5, 0xAE(r1)
	  stw       r8, 0xB0(r1)
	  stw       r8, 0xB4(r1)
	  stw       r0, 0xA4(r1)
	  bl        0x20B3C
	  b         .loc_0x1B0

	.loc_0x1A0:
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1834
	  li        r5, 0
	  bl        -0x60770

	.loc_0x1B0:
	  lwz       r5, 0x80(r29)
	  li        r0, 0x1
	  li        r4, 0
	  lfs       f0, 0xD24(r2)
	  stb       r0, 0x24(r5)
	  mr        r6, r4
	  b         .loc_0x1E0

	.loc_0x1CC:
	  lwz       r3, 0x4(r5)
	  addi      r4, r4, 0x1
	  lwzx      r3, r3, r6
	  addi      r6, r6, 0x4
	  stfs      f0, 0x18(r3)

	.loc_0x1E0:
	  lwz       r0, 0x10(r5)
	  cmpw      r4, r0
	  blt+      .loc_0x1CC
	  bl        -0x2CF840
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC4(r1)
	  lfd       f3, 0xD70(r2)
	  stw       r0, 0xC0(r1)
	  lfs       f1, 0xD80(r2)
	  lfd       f2, 0xC0(r1)
	  lfs       f0, 0xDD4(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0xB8(r1)
	  lwz       r0, 0xBC(r1)
	  cmpwi     r0, 0x5
	  blt-      .loc_0x234
	  li        r0, 0x5

	.loc_0x234:
	  mulli     r4, r0, 0xC
	  lis       r3, 0x8049
	  mr        r31, r29
	  addi      r0, r3, 0x4734
	  add       r27, r0, r4
	  li        r30, 0

	.loc_0x24C:
	  lwz       r0, 0x0(r27)
	  addi      r3, r1, 0x54
	  li        r5, 0
	  rlwinm    r4,r0,2,0,29
	  addi      r0, r4, 0x18C
	  lwzx      r28, r29, r0
	  lwz       r26, 0x8(r28)
	  mr        r4, r26
	  bl        -0x35FEC8
	  lfs       f1, 0x2C(r26)
	  addi      r3, r1, 0x48
	  lfs       f0, 0x24(r26)
	  li        r5, 0
	  lwz       r26, 0x8(r28)
	  fsubs     f0, f1, f0
	  lfs       f1, 0x58(r1)
	  mr        r4, r26
	  fadds     f31, f1, f0
	  bl        -0x35FEF0
	  lwz       r4, 0x0(r27)
	  addi      r30, r30, 0x1
	  lfs       f2, 0x48(r1)
	  li        r5, 0x1
	  rlwinm    r3,r4,2,0,29
	  lfs       f1, 0x28(r26)
	  addi      r0, r3, 0x18C
	  lfs       f0, 0x20(r26)
	  lwzx      r3, r29, r0
	  cmpwi     r30, 0x3
	  fsubs     f0, f1, f0
	  addi      r27, r27, 0x4
	  stb       r5, 0x0(r3)
	  lwz       r3, 0xD8(r31)
	  fadds     f0, f2, f0
	  stw       r4, 0x44(r3)
	  lwz       r3, 0xD8(r31)
	  stfs      f0, 0x8(r3)
	  stfs      f31, 0xC(r3)
	  lwz       r3, 0xD8(r31)
	  addi      r31, r31, 0x4
	  stw       r5, 0x3C(r3)
	  blt+      .loc_0x24C
	  b         .loc_0x524

	.loc_0x2F8:
	  lbz       r0, 0x1C6(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0x4C0
	  lbz       r0, -0x79F7(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x474
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1835
	  li        r5, 0
	  bl        -0x608E0
	  bl        0x8A310
	  lhz       r28, 0x6(r3)
	  bl        0x8A308
	  lhz       r4, 0x4(r3)
	  lis       r5, 0x4330
	  lis       r3, 0x804C
	  stw       r5, 0xC0(r1)
	  addi      r0, r3, 0x1514
	  lfd       f2, 0xD88(r2)
	  stw       r4, 0xC4(r1)
	  addi      r4, r1, 0x6C
	  lfs       f3, 0xD54(r2)
	  lfd       f0, 0xC0(r1)
	  stw       r28, 0xBC(r1)
	  fsubs     f1, f0, f2
	  stw       r5, 0xB8(r1)
	  lfd       f0, 0xB8(r1)
	  fmuls     f1, f3, f1
	  stw       r0, 0x74(r1)
	  fsubs     f0, f0, f2
	  stfs      f1, 0x18(r1)
	  fmuls     f0, f3, f0
	  lwz       r0, 0x18(r1)
	  stw       r0, 0x20(r1)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0x20(r1)
	  lwz       r0, 0x1C(r1)
	  stfs      f0, 0x6C(r1)
	  stw       r0, 0x24(r1)
	  lfs       f0, 0x24(r1)
	  stfs      f0, 0x70(r1)
	  lwz       r3, 0x1A4(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x80(r29)
	  lis       r3, 0x6962
	  addi      r6, r3, 0x6F6E
	  li        r5, 0x4E72
	  lwz       r3, 0x8(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xE00(r2)
	  li        r8, 0
	  lfs       f0, 0xD4C(r2)
	  lis       r3, 0x804C
	  stfs      f1, 0x8(r1)
	  addi      r0, r3, 0x14F0
	  lis       r3, 0x804C
	  lis       r4, 0x804E
	  stfs      f0, 0xC(r1)
	  lis       r5, 0x804C
	  lwz       r6, 0x8(r1)
	  addi      r9, r3, 0x14D8
	  stw       r0, 0x90(r1)
	  lis       r3, 0x804E
	  lwz       r0, 0xC(r1)
	  addi      r7, r4, 0x7470
	  stw       r6, 0x10(r1)
	  addi      r10, r5, 0x1514
	  li        r6, 0xA
	  li        r5, 0xB
	  stw       r0, 0x14(r1)
	  addi      r0, r3, 0x51F8
	  lfs       f1, 0x10(r1)
	  addi      r3, r1, 0x90
	  stw       r9, 0x90(r1)
	  addi      r4, r1, 0x60
	  lfs       f0, 0x14(r1)
	  stw       r7, 0x90(r1)
	  stw       r10, 0x68(r1)
	  stfs      f1, 0x60(r1)
	  stfs      f0, 0x64(r1)
	  stb       r8, 0x94(r1)
	  stb       r8, 0x95(r1)
	  sth       r6, 0x98(r1)
	  sth       r5, 0x9A(r1)
	  stw       r8, 0x9C(r1)
	  stw       r8, 0xA0(r1)
	  stw       r0, 0x90(r1)
	  bl        0x20868
	  b         .loc_0x484

	.loc_0x474:
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1834
	  li        r5, 0
	  bl        -0x60A44

	.loc_0x484:
	  lwz       r5, 0x80(r29)
	  li        r0, 0x1
	  li        r4, 0
	  lfs       f0, 0xD24(r2)
	  stb       r0, 0x24(r5)
	  mr        r6, r4
	  b         .loc_0x4B4

	.loc_0x4A0:
	  lwz       r3, 0x4(r5)
	  addi      r4, r4, 0x1
	  lwzx      r3, r3, r6
	  addi      r6, r6, 0x4
	  stfs      f0, 0x18(r3)

	.loc_0x4B4:
	  lwz       r0, 0x10(r5)
	  cmpw      r4, r0
	  blt+      .loc_0x4A0

	.loc_0x4C0:
	  li        r0, 0x6
	  li        r3, 0x1
	  stw       r0, 0x1C8(r29)
	  li        r0, 0
	  lwz       r4, 0xD8(r29)
	  stw       r3, 0x3C(r4)
	  lfs       f0, 0x10(r4)
	  stfs      f0, 0x8(r4)
	  lfs       f0, 0x14(r4)
	  stfs      f0, 0xC(r4)
	  stw       r0, 0x40(r4)
	  lwz       r4, 0xDC(r29)
	  stw       r3, 0x3C(r4)
	  lfs       f0, 0x10(r4)
	  stfs      f0, 0x8(r4)
	  lfs       f0, 0x14(r4)
	  stfs      f0, 0xC(r4)
	  stw       r0, 0x40(r4)
	  lwz       r4, 0xE0(r29)
	  stw       r3, 0x3C(r4)
	  lfs       f0, 0x10(r4)
	  stfs      f0, 0x8(r4)
	  lfs       f0, 0x14(r4)
	  stfs      f0, 0xC(r4)
	  stw       r0, 0x40(r4)

	.loc_0x524:
	  psq_l     f31,0xE8(r1),0,0
	  lfd       f31, 0xE0(r1)
	  lmw       r26, 0xC8(r1)
	  lwz       r0, 0xF4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80399134
 * Size:	000220
 */
void Morimura::TChallengeResult::startRankInDemo(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stfd      f30, 0x80(r1)
	  psq_st    f30,0x88(r1),0,0
	  stfd      f29, 0x70(r1)
	  psq_st    f29,0x78(r1),0,0
	  stfd      f28, 0x60(r1)
	  psq_st    f28,0x68(r1),0,0
	  stmw      r25, 0x44(r1)
	  mr        r27, r3
	  lwz       r0, 0x1E4(r3)
	  cmpwi     r0, 0
	  blt-      .loc_0x1EC
	  lfs       f0, 0xD5C(r2)
	  stfs      f0, 0x178(r27)
	  lwz       r3, 0x94(r27)
	  bl        -0x8D9C0
	  li        r0, 0x1
	  li        r31, 0
	  stb       r0, 0xB0(r3)
	  lis       r3, 0x804C
	  lfs       f31, 0xD54(r2)
	  mr        r28, r31
	  lwz       r4, 0x188(r27)
	  addi      r26, r3, 0x1514
	  lwz       r30, 0x94(r27)
	  lwz       r29, 0x10(r4)
	  lfs       f30, 0xD5C(r2)
	  b         .loc_0x160

	.loc_0x80:
	  lwz       r3, 0x7C(r30)
	  lwzx      r3, r3, r28
	  lwz       r25, 0x0(r3)
	  cmplwi    r25, 0
	  bne-      .loc_0xB0
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x4850
	  li        r4, 0x255
	  addi      r5, r5, 0x4868
	  crclr     6, 0x6
	  bl        -0x36EBA0

	.loc_0xB0:
	  mr        r3, r25
	  li        r4, 0x4
	  bl        -0x360530
	  mr        r4, r25
	  addi      r3, r1, 0x24
	  li        r5, 0
	  bl        -0x360264
	  lfs       f1, 0x28(r25)
	  mr        r4, r25
	  lfs       f0, 0x20(r25)
	  addi      r3, r1, 0x30
	  lfs       f2, 0x24(r1)
	  li        r5, 0
	  fsubs     f0, f1, f0
	  fmadds    f0, f31, f0, f2
	  stfs      f0, 0x8(r1)
	  bl        -0x36028C
	  lfs       f1, 0x2C(r25)
	  addi      r4, r1, 0x18
	  lfs       f0, 0x24(r25)
	  lwz       r0, 0x8(r1)
	  fsubs     f0, f1, f0
	  lfs       f1, 0x34(r1)
	  stw       r0, 0x10(r1)
	  fmadds    f1, f31, f0, f1
	  lfs       f0, 0x10(r1)
	  stw       r26, 0x20(r1)
	  stfs      f1, 0xC(r1)
	  lwz       r0, 0xC(r1)
	  stfs      f0, 0x18(r1)
	  stw       r0, 0x14(r1)
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x1C(r1)
	  lwz       r3, 0xAC(r30)
	  lwzx      r3, r3, r28
	  stfs      f30, 0x14(r3)
	  lwz       r3, 0xAC(r30)
	  lwzx      r3, r3, r28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x4
	  addi      r31, r31, 0x1

	.loc_0x160:
	  cmpw      r31, r29
	  blt+      .loc_0x80
	  lfs       f30, 0xE04(r2)
	  mr        r25, r27
	  lfs       f31, 0xD24(r2)
	  mr        r26, r27
	  li        r28, 0

	.loc_0x17C:
	  lwz       r0, 0x1E4(r27)
	  cmpw      r28, r0
	  bne-      .loc_0x198
	  lwz       r3, 0xB0(r25)
	  bl        -0x8DB00
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)

	.loc_0x198:
	  stfs      f30, 0x108(r26)
	  stfs      f31, 0x10C(r26)
	  lfs       f1, 0xF0(r26)
	  lfs       f0, 0x108(r26)
	  lfs       f28, 0xF4(r26)
	  fadds     f29, f1, f0
	  lwz       r3, 0xB0(r25)
	  bl        -0x8DB28
	  stfs      f29, 0xD4(r3)
	  stfs      f28, 0xD8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1
	  addi      r26, r26, 0x8
	  cmpwi     r28, 0x3
	  addi      r25, r25, 0x4
	  blt+      .loc_0x17C
	  lfs       f0, 0xD24(r2)
	  stfs      f0, 0x1EC(r27)

	.loc_0x1EC:
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  psq_l     f28,0x68(r1),0,0
	  lfd       f28, 0x60(r1)
	  lmw       r25, 0x44(r1)
	  lwz       r0, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80399354
 * Size:	00017C
 */
void Morimura::TChallengeResult::startDemo(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stmw      r24, 0x20(r1)
	  mr        r27, r3
	  lfs       f0, 0x1F0(r3)
	  stfs      f0, -0x79F0(r13)
	  lwz       r0, 0x1C8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x158
	  li        r0, 0x1
	  mr        r29, r27
	  stw       r0, 0x1C8(r27)
	  li        r28, 0

	.loc_0x40:
	  lwz       r30, 0x17C(r29)
	  lwz       r0, 0x8(r30)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x148
	  lwz       r3, 0x0(r30)
	  li        r4, 0
	  li        r0, 0x1
	  lwz       r3, 0x0(r3)
	  mr        r5, r4
	  mr        r6, r4
	  stw       r3, 0x4(r30)
	  stw       r4, 0xC(r30)
	  stw       r4, 0x20(r30)
	  stw       r4, 0x1C(r30)
	  stw       r0, 0x8(r30)
	  b         .loc_0x90

	.loc_0x80:
	  lwz       r3, 0x24(r30)
	  addi      r5, r5, 0x1
	  stwx      r4, r3, r6
	  addi      r6, r6, 0x4

	.loc_0x90:
	  lwz       r0, 0x14(r30)
	  cmpw      r5, r0
	  blt+      .loc_0x80
	  lwz       r5, 0x0(r30)
	  lis       r3, 0x6666
	  addi      r4, r3, 0x6667
	  li        r31, 0x1
	  lwz       r0, 0x0(r5)
	  b         .loc_0xC8

	.loc_0xB4:
	  mulhw     r0, r4, r0
	  addi      r31, r31, 0x1
	  srawi     r0, r0, 0x2
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3

	.loc_0xC8:
	  cmpwi     r0, 0xA
	  bge+      .loc_0xB4
	  stw       r31, 0x10(r30)
	  rlwinm    r25,r31,2,0,29
	  lfd       f31, 0xD70(r2)
	  lis       r26, 0x4330
	  lwz       r3, 0x0(r30)
	  lwz       r24, 0x0(r3)
	  b         .loc_0x138

	.loc_0xEC:
	  subi      r0, r31, 0x1
	  stw       r26, 0x8(r1)
	  xoris     r0, r0, 0x8000
	  lfd       f1, 0xD78(r2)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsub      f2, f0, f31
	  bl        -0x2C9A50
	  fctiwz    f0, f1
	  subi      r0, r25, 0x4
	  lwz       r3, 0x24(r30)
	  subi      r25, r25, 0x4
	  subi      r31, r31, 0x1
	  stfd      f0, 0x10(r1)
	  lwz       r4, 0x14(r1)
	  divw      r5, r24, r4
	  mullw     r4, r5, r4
	  stwx      r5, r3, r0
	  sub       r24, r24, r4

	.loc_0x138:
	  cmpwi     r31, 0x1
	  bgt+      .loc_0xEC
	  lwz       r3, 0x24(r30)
	  stw       r24, 0x0(r3)

	.loc_0x148:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r28, 0x4
	  blt+      .loc_0x40

	.loc_0x158:
	  li        r0, 0
	  stw       r0, 0x1D0(r27)
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  lmw       r24, 0x20(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803994D0
 * Size:	000120
 */
void Morimura::TChallengeResult::fadeEffect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r25, r3
	  li        r29, 0
	  lis       r3, 0x8049
	  mr        r27, r29
	  addi      r31, r4, 0x4850
	  addi      r30, r3, 0x4868
	  lwz       r28, 0x94(r25)
	  b         .loc_0x78

	.loc_0x34:
	  lwz       r3, 0xAC(r28)
	  lwzx      r0, r3, r27
	  cmplwi    r0, 0
	  bne-      .loc_0x58
	  mr        r3, r31
	  mr        r5, r30
	  li        r4, 0x26B
	  crclr     6, 0x6
	  bl        -0x36EEE4

	.loc_0x58:
	  lwz       r3, 0xAC(r28)
	  lwzx      r3, r3, r27
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r27, r27, 0x4
	  addi      r29, r29, 0x1

	.loc_0x78:
	  lhz       r0, 0x2E(r28)
	  cmpw      r29, r0
	  blt+      .loc_0x34
	  lis       r4, 0x8049
	  lis       r3, 0x8049
	  mr        r26, r25
	  li        r25, 0
	  addi      r30, r4, 0x4850
	  addi      r31, r3, 0x4868

	.loc_0x9C:
	  li        r28, 0
	  lwz       r29, 0xB0(r26)
	  mr        r27, r28
	  b         .loc_0xF0

	.loc_0xAC:
	  lwz       r3, 0xAC(r29)
	  lwzx      r0, r3, r27
	  cmplwi    r0, 0
	  bne-      .loc_0xD0
	  mr        r3, r30
	  mr        r5, r31
	  li        r4, 0x26B
	  crclr     6, 0x6
	  bl        -0x36EF5C

	.loc_0xD0:
	  lwz       r3, 0xAC(r29)
	  lwzx      r3, r3, r27
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r27, r27, 0x4
	  addi      r28, r28, 0x1

	.loc_0xF0:
	  lhz       r0, 0x2E(r29)
	  cmpw      r28, r0
	  blt+      .loc_0xAC
	  addi      r25, r25, 0x1
	  addi      r26, r26, 0x4
	  cmpwi     r25, 0x3
	  blt+      .loc_0x9C
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803995F0
 * Size:	0000B0
 */
void
    Morimura::TChallengeResultScene::doUserCallBackFunc((Resource::MgrCommand*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  addi      r30, r4, 0x4720
	  addi      r4, r30, 0x3D0
	  stw       r29, 0x44(r1)
	  mr        r29, r3
	  addi      r3, r29, 0x4
	  bl        -0x816D0
	  addi      r3, r1, 0x8
	  addi      r4, r29, 0x4
	  bl        0xB2FB0
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x8
	  bl        0xB30E0
	  mr.       r31, r3
	  bne-      .loc_0x64
	  addi      r3, r30, 0x130
	  addi      r5, r30, 0x148
	  li        r4, 0x929
	  crclr     6, 0x6
	  bl        -0x36F010

	.loc_0x64:
	  lwz       r30, 0x34(r31)
	  li        r3, 0x1FC
	  bl        -0x3757B8
	  mr.       r31, r3
	  beq-      .loc_0x80
	  bl        -0x5358
	  mr        r31, r3

	.loc_0x80:
	  mr        r3, r29
	  mr        r4, r31
	  mr        r5, r30
	  bl        0xB86F8
	  stw       r31, 0x220(r29)
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803996A0
 * Size:	000008
 */
void Morimura::TChallengeResultScene::getResName( const
{
	/*
	.loc_0x0:
	  addi      r3, r2, 0xE08
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803996A8
 * Size:	000004
 */
void Morimura::TChallengeResultScene::doCreateObj( (JKRArchive *))
{
}

/*
 * --INFO--
 * Address:	803996AC
 * Size:	000008
 */
void Morimura::TChallengeResultScene::getSceneType(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x2738
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803996B4
 * Size:	00000C
 */
void Morimura::TChallengeResultScene::getOwnerID(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x4D52
	  addi      r3, r3, 0x4D52
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803996C0
 * Size:	000014
 */
void Morimura::TChallengeResultScene::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x5355
	  lis       r3, 0x4348
	  addi      r4, r4, 0x4C54
	  addi      r3, r3, 0x5245
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803996D4
 * Size:	000034
 */
void Morimura::TChallengeResult::getDispMemberBase(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, -0x6760(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x20
	  lwz       r3, 0x8C(r3)
	  b         .loc_0x24

	.loc_0x20:
	  bl        0xBA8B4

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80399708
 * Size:	000084
 */
void efx2d::T2DCavecompLoop::__dt(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x68
	  lis       r3, 0x804E
	  addi      r3, r3, 0x528C
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x18
	  stw       r0, 0x8(r30)
	  beq-      .loc_0x58
	  lis       r4, 0x804E
	  addi      r3, r30, 0x8
	  addi      r5, r4, 0x7420
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x18
	  stw       r0, 0x8(r30)
	  bl        -0x309AC0

	.loc_0x58:
	  extsh.    r0, r31
	  ble-      .loc_0x68
	  mr        r3, r30
	  bl        -0x3756B8

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8039978C
 * Size:	000090
 */
void Morimura::TCounterRV::__dt(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x74
	  lis       r4, 0x804E
	  addi      r0, r4, 0x52C4
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x64
	  lis       r4, 0x804E
	  subi      r0, r4, 0x7E38
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x64
	  lis       r4, 0x804D
	  addi      r0, r4, 0x7F2C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x64
	  lis       r5, 0x804D
	  li        r4, 0
	  addi      r0, r5, 0x7B0C
	  stw       r0, 0x0(r30)
	  bl        0x77D9C

	.loc_0x64:
	  extsh.    r0, r31
	  ble-      .loc_0x74
	  mr        r3, r30
	  bl        -0x375748

	.loc_0x74:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8039981C
 * Size:	000008
 */
void @8@efx2d::T2DCavecompLoop::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x8
	  b         -0x118
	*/
}

/*
 * --INFO--
 * Address:	80399824
 * Size:	000008
 */
void @24@Morimura::TChallengeResult::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x5224
	*/
}
