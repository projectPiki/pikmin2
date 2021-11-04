#include "types.h"

/*
 * --INFO--
 * Address:	80119BFC
 * Size:	000034
 */
LifeGauge::LifeGauge()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x20
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        .loc_0x34
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x34:
	*/
}

/*
 * --INFO--
 * Address:	80119C30
 * Size:	000014
 */
void LifeGauge::init(unsigned char)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x6838(r2)
	  stfs      f0, 0x0(r3)
	  stb       r4, 0x9(r3)
	  stb       r4, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80119C44
 * Size:	0001CC
 */
void LifeGauge::update(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lis       r0, 0x4330
	  lfd       f3, -0x6820(r2)
	  lbz       r6, 0x9(r3)
	  stw       r0, 0x8(r1)
	  lfs       f0, -0x6838(r2)
	  stw       r6, 0xC(r1)
	  lfd       f2, 0x8(r1)
	  fsubs     f2, f2, f3
	  fmuls     f2, f2, f1
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x40
	  lfs       f0, -0x6834(r2)
	  fadds     f0, f0, f2
	  b         .loc_0x48

	.loc_0x40:
	  lfs       f0, -0x6834(r2)
	  fsubs     f0, f2, f0

	.loc_0x48:
	  fctiwz    f0, f0
	  lbz       r4, 0x8(r3)
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r7,r0,0,24,31
	  cmplw     r4, r7
	  beq-      .loc_0x15C
	  sub       r4, r7, r4
	  lis       r0, 0x4330
	  xoris     r5, r4, 0x8000
	  lwz       r4, -0x6514(r13)
	  stw       r5, 0x14(r1)
	  lfd       f2, -0x6818(r2)
	  stw       r0, 0x10(r1)
	  lfd       f5, -0x6820(r2)
	  lfd       f0, 0x10(r1)
	  stw       r6, 0xC(r1)
	  fsubs     f6, f0, f2
	  lfs       f2, -0x6830(r2)
	  stw       r0, 0x8(r1)
	  lfs       f0, 0x54(r4)
	  lfd       f4, 0x8(r1)
	  fmuls     f3, f2, f0
	  lfs       f0, -0x682C(r2)
	  fsubs     f2, f4, f5
	  fdivs     f2, f6, f2
	  fabs      f2, f2
	  frsp      f2, f2
	  fmuls     f3, f3, f2
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0xC8
	  fmr       f3, f0

	.loc_0xC8:
	  lfs       f2, 0x0(r3)
	  lfs       f0, -0x6828(r2)
	  fadds     f2, f2, f3
	  stfs      f2, 0x0(r3)
	  lfs       f2, 0x0(r3)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x13C
	  fctiwz    f0, f2
	  lbz       r0, 0x8(r3)
	  cmplw     r7, r0
	  stfd      f0, 0x10(r1)
	  lwz       r4, 0x14(r1)
	  rlwinm    r0,r4,0,24,31
	  neg       r6, r0
	  ble-      .loc_0x108
	  mr        r6, r0

	.loc_0x108:
	  rlwinm    r4,r4,0,24,31
	  lis       r0, 0x4330
	  lbz       r5, 0x8(r3)
	  stw       r4, 0xC(r1)
	  add       r4, r5, r6
	  lfd       f2, -0x6820(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  stb       r4, 0x8(r3)
	  fsubs     f0, f0, f2
	  lfs       f2, 0x0(r3)
	  fsubs     f0, f2, f0
	  stfs      f0, 0x0(r3)

	.loc_0x13C:
	  lbz       r0, 0x8(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x15C
	  lfs       f0, -0x6838(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x15C
	  li        r0, 0x1
	  stb       r0, 0x8(r3)

	.loc_0x15C:
	  lfs       f0, -0x6824(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x184
	  li        r4, 0xFF
	  li        r0, 0
	  stb       r4, 0x4(r3)
	  stb       r0, 0x5(r3)
	  stb       r0, 0x6(r3)
	  stb       r4, 0x7(r3)
	  b         .loc_0x1C4

	.loc_0x184:
	  lfs       f0, -0x6834(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1AC
	  li        r4, 0xFF
	  li        r0, 0
	  stb       r4, 0x4(r3)
	  stb       r4, 0x5(r3)
	  stb       r0, 0x6(r3)
	  stb       r4, 0x7(r3)
	  b         .loc_0x1C4

	.loc_0x1AC:
	  li        r4, 0
	  li        r0, 0xFF
	  stb       r4, 0x4(r3)
	  stb       r0, 0x5(r3)
	  stb       r4, 0x6(r3)
	  stb       r0, 0x7(r3)

	.loc_0x1C4:
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80119E10
 * Size:	0001BC
 */
void LifeGauge::draw(float, float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stfd      f31, 0xB0(r1)
	  psq_st    f31,0xB8(r1),0,0
	  stfd      f30, 0xA0(r1)
	  psq_st    f30,0xA8(r1),0,0
	  stfd      f29, 0x90(r1)
	  psq_st    f29,0x98(r1),0,0
	  stfd      f28, 0x80(r1)
	  psq_st    f28,0x88(r1),0,0
	  stfd      f27, 0x70(r1)
	  psq_st    f27,0x78(r1),0,0
	  stfd      f26, 0x60(r1)
	  psq_st    f26,0x68(r1),0,0
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  stw       r29, 0x54(r1)
	  lfs       f0, -0x6838(r2)
	  fmr       f27, f1
	  stfs      f2, 0x8(r1)
	  mr        r29, r3
	  lfs       f28, -0x680C(r2)
	  li        r30, 0
	  stfs      f3, 0xC(r1)
	  lfd       f29, -0x6818(r2)
	  lis       r31, 0x4330
	  stfs      f0, 0x10(r1)
	  lfd       f30, -0x6820(r2)
	  lfs       f31, -0x6810(r2)
	  b         .loc_0x164

	.loc_0x7C:
	  lbz       r0, 0x9(r29)
	  xoris     r3, r30, 0x8000
	  stw       r3, 0x34(r1)
	  stw       r31, 0x30(r1)
	  lfd       f0, 0x30(r1)
	  stw       r0, 0x3C(r1)
	  fsubs     f1, f0, f29
	  stw       r31, 0x38(r1)
	  lfd       f0, 0x38(r1)
	  fsubs     f0, f0, f30
	  fdivs     f0, f1, f0
	  fnmsubs   f26, f28, f0, f31
	  fmr       f1, f26
	  bl        -0x4AC0C
	  frsp      f2, f1
	  lfs       f0, 0x8(r1)
	  fmr       f1, f26
	  fmadds    f0, f27, f2, f0
	  stfs      f0, 0x14(r1)
	  bl        -0x4A6BC
	  frsp      f2, f1
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  addi      r0, r30, 0x1
	  xoris     r0, r0, 0x8000
	  stw       r31, 0x40(r1)
	  fmadds    f1, f27, f2, f1
	  stw       r0, 0x44(r1)
	  stfs      f0, 0x1C(r1)
	  lfd       f0, 0x40(r1)
	  stfs      f1, 0x18(r1)
	  fsubs     f1, f0, f29
	  lbz       r0, 0x9(r29)
	  stw       r31, 0x48(r1)
	  stw       r0, 0x4C(r1)
	  lfd       f0, 0x48(r1)
	  fsubs     f0, f0, f30
	  fdivs     f0, f1, f0
	  fnmsubs   f26, f28, f0, f31
	  fmr       f1, f26
	  bl        -0x4AC78
	  frsp      f2, f1
	  lfs       f0, 0x8(r1)
	  fmr       f1, f26
	  fmadds    f0, f27, f2, f0
	  stfs      f0, 0x20(r1)
	  bl        -0x4A728
	  frsp      f2, f1
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  mr        r3, r29
	  addi      r4, r1, 0x8
	  addi      r5, r29, 0x4
	  fmadds    f1, f27, f2, f1
	  stfs      f0, 0x28(r1)
	  stfs      f1, 0x24(r1)
	  bl        0x170
	  addi      r30, r30, 0x1

	.loc_0x164:
	  lbz       r0, 0x8(r29)
	  cmpw      r30, r0
	  blt+      .loc_0x7C
	  psq_l     f31,0xB8(r1),0,0
	  lfd       f31, 0xB0(r1)
	  psq_l     f30,0xA8(r1),0,0
	  lfd       f30, 0xA0(r1)
	  psq_l     f29,0x98(r1),0,0
	  lfd       f29, 0x90(r1)
	  psq_l     f28,0x88(r1),0,0
	  lfd       f28, 0x80(r1)
	  psq_l     f27,0x78(r1),0,0
	  lfd       f27, 0x70(r1)
	  psq_l     f26,0x68(r1),0,0
	  lfd       f26, 0x60(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r0, 0xC4(r1)
	  lwz       r29, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80119FCC
 * Size:	000110
 */
void LifeGauge::initLifeGaugeDraw()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  li        r3, 0
	  stw       r0, 0x44(r1)
	  bl        -0x31C64
	  li        r3, 0x1
	  bl        -0x33180
	  li        r3, 0x1
	  bl        -0x31434
	  li        r3, 0
	  li        r4, 0x4
	  bl        -0x31B7C
	  li        r3, 0
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0x4
	  bl        -0x315F0
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        -0x3318C
	  bl        -0x35960
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        -0x35DB8
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        -0x35DC4
	  li        r3, 0xD
	  li        r4, 0
	  bl        -0x35DD0
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        -0x35964
	  li        r3, 0
	  li        r4, 0xB
	  li        r5, 0x1
	  li        r6, 0x5
	  li        r7, 0
	  bl        -0x3597C
	  li        r3, 0x1
	  li        r4, 0x4
	  li        r5, 0x5
	  li        r6, 0xF
	  bl        -0x30FC0
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x30F24
	  li        r3, 0
	  bl        -0x30A98
	  addi      r3, r1, 0x8
	  bl        -0x2FE18
	  addi      r3, r1, 0x8
	  li        r4, 0x1E
	  li        r5, 0x1
	  bl        -0x30A7C
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8011A0DC
 * Size:	0000F0
 */
void LifeGauge::drawOneTri(Vector3f*, Color4&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0xA0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  li        r5, 0x3
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  li        r4, 0
	  bl        -0x3477C
	  lfs       f2, 0x8(r30)
	  lis       r6, 0xCC01
	  lfs       f1, 0x4(r30)
	  lfs       f0, 0x0(r30)
	  stfs      f0, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  lbz       r5, 0x3(r31)
	  lbz       r4, 0x2(r31)
	  lbz       r3, 0x1(r31)
	  lbz       r0, 0x0(r31)
	  stb       r0, -0x8000(r6)
	  stb       r3, -0x8000(r6)
	  stb       r4, -0x8000(r6)
	  stb       r5, -0x8000(r6)
	  lfs       f2, 0x14(r30)
	  lfs       f1, 0x10(r30)
	  lfs       f0, 0xC(r30)
	  stfs      f0, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  lbz       r5, 0x3(r31)
	  lbz       r4, 0x2(r31)
	  lbz       r3, 0x1(r31)
	  lbz       r0, 0x0(r31)
	  stb       r0, -0x8000(r6)
	  stb       r3, -0x8000(r6)
	  stb       r4, -0x8000(r6)
	  stb       r5, -0x8000(r6)
	  lfs       f2, 0x20(r30)
	  lfs       f1, 0x1C(r30)
	  lfs       f0, 0x18(r30)
	  stfs      f0, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  stfs      f2, -0x8000(r6)
	  lbz       r5, 0x3(r31)
	  lbz       r4, 0x2(r31)
	  lbz       r3, 0x1(r31)
	  lbz       r0, 0x0(r31)
	  stb       r0, -0x8000(r6)
	  stb       r3, -0x8000(r6)
	  stb       r4, -0x8000(r6)
	  stb       r5, -0x8000(r6)
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
 * Address:	8011A1CC
 * Size:	000604
 */
void LifeGaugeList::draw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x180(r1)
	  mflr      r0
	  stw       r0, 0x184(r1)
	  stfd      f31, 0x170(r1)
	  psq_st    f31,0x178(r1),0,0
	  stfd      f30, 0x160(r1)
	  psq_st    f30,0x168(r1),0,0
	  stfd      f29, 0x150(r1)
	  psq_st    f29,0x158(r1),0,0
	  stfd      f28, 0x140(r1)
	  psq_st    f28,0x148(r1),0,0
	  stfd      f27, 0x130(r1)
	  psq_st    f27,0x138(r1),0,0
	  stfd      f26, 0x120(r1)
	  psq_st    f26,0x128(r1),0,0
	  stw       r31, 0x11C(r1)
	  stw       r30, 0x118(r1)
	  stw       r29, 0x114(r1)
	  stw       r28, 0x110(r1)
	  mr        r31, r3
	  lbz       r0, 0x38(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x5B4
	  lfs       f1, -0x6808(r2)
	  lfs       f0, 0x34(r31)
	  lwz       r28, 0x25C(r4)
	  li        r4, 0x1
	  fmuls     f26, f1, f0
	  mr        r3, r28
	  bl        0x30AF1C
	  lfs       f0, 0x0(r3)
	  li        r4, 0x1
	  stfs      f0, 0xBC(r1)
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0xCC(r1)
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0xDC(r1)
	  lfs       f0, 0x10(r3)
	  fneg      f0, f0
	  stfs      f0, 0xC0(r1)
	  lfs       f0, 0x14(r3)
	  fneg      f0, f0
	  stfs      f0, 0xD0(r1)
	  lfs       f0, 0x18(r3)
	  fneg      f0, f0
	  stfs      f0, 0xE0(r1)
	  lfs       f0, 0x20(r3)
	  stfs      f0, 0xC4(r1)
	  lfs       f0, 0x24(r3)
	  stfs      f0, 0xD4(r1)
	  lfs       f0, 0x28(r3)
	  mr        r3, r28
	  stfs      f0, 0xE4(r1)
	  lfs       f0, 0x24(r31)
	  stfs      f0, 0xC8(r1)
	  lfs       f0, 0x28(r31)
	  stfs      f0, 0xD8(r1)
	  lfs       f0, 0x2C(r31)
	  stfs      f0, 0xE8(r1)
	  bl        0x30AEA4
	  addi      r4, r1, 0xBC
	  addi      r5, r1, 0x8C
	  bl        -0x2FFC4
	  addi      r3, r1, 0x8C
	  li        r4, 0
	  bl        -0x30D58
	  li        r3, 0x1
	  bl        -0x33474
	  li        r3, 0
	  bl        -0x31F68
	  li        r3, 0x1
	  bl        -0x31730
	  li        r3, 0
	  li        r4, 0
	  bl        -0x31E78
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x4
	  bl        -0x318EC
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        -0x33488
	  bl        -0x35C5C
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        -0x360B4
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        -0x360C0
	  li        r3, 0xD
	  li        r4, 0x1
	  bl        -0x360CC
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        -0x35C60
	  li        r3, 0
	  li        r4, 0xB
	  li        r5, 0x1
	  li        r6, 0x5
	  li        r7, 0
	  bl        -0x35C78
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0
	  li        r7, 0
	  bl        -0x35C90
	  li        r3, 0x1
	  li        r4, 0x4
	  li        r5, 0x5
	  li        r6, 0xF
	  bl        -0x312D4
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x31238
	  li        r3, 0
	  bl        -0x30DAC
	  li        r3, 0x1
	  bl        -0x35430
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0xC
	  li        r6, 0x3C
	  li        r7, 0
	  li        r8, 0x7D
	  bl        -0x356CC
	  addi      r3, r1, 0x5C
	  bl        -0x30150
	  addi      r3, r1, 0x5C
	  li        r4, 0x1E
	  li        r5, 0x1
	  bl        -0x30DB4
	  li        r3, 0x98
	  li        r4, 0
	  li        r5, 0x4
	  bl        -0x34A88
	  fneg      f1, f26
	  lis       r6, 0xCC01
	  lfs       f0, -0x6838(r2)
	  li        r5, 0xFF
	  li        r4, 0
	  li        r0, 0x1
	  stfs      f1, -0x8000(r6)
	  li        r3, 0
	  stfs      f26, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stb       r5, -0x8000(r6)
	  stb       r5, -0x8000(r6)
	  stb       r5, -0x8000(r6)
	  stb       r5, -0x8000(r6)
	  stb       r4, -0x8000(r6)
	  stb       r4, -0x8000(r6)
	  stfs      f26, -0x8000(r6)
	  stfs      f26, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stb       r5, -0x8000(r6)
	  stb       r5, -0x8000(r6)
	  stb       r5, -0x8000(r6)
	  stb       r5, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r4, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stb       r5, -0x8000(r6)
	  stb       r5, -0x8000(r6)
	  stb       r5, -0x8000(r6)
	  stb       r5, -0x8000(r6)
	  stb       r4, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stfs      f26, -0x8000(r6)
	  stfs      f1, -0x8000(r6)
	  stfs      f0, -0x8000(r6)
	  stb       r5, -0x8000(r6)
	  stb       r5, -0x8000(r6)
	  stb       r5, -0x8000(r6)
	  stb       r5, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  stb       r0, -0x8000(r6)
	  bl        -0x32148
	  li        r3, 0x1
	  bl        -0x33664
	  li        r3, 0x1
	  bl        -0x31918
	  li        r3, 0
	  li        r4, 0x4
	  bl        -0x32060
	  li        r3, 0
	  li        r4, 0xFF
	  li        r5, 0xFF
	  li        r6, 0x4
	  bl        -0x31AD4
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        -0x33670
	  bl        -0x35E44
	  li        r3, 0x9
	  li        r4, 0x1
	  bl        -0x3629C
	  li        r3, 0xB
	  li        r4, 0x1
	  bl        -0x362A8
	  li        r3, 0xD
	  li        r4, 0
	  bl        -0x362B4
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        -0x35E48
	  li        r3, 0
	  li        r4, 0xB
	  li        r5, 0x1
	  li        r6, 0x5
	  li        r7, 0
	  bl        -0x35E60
	  li        r3, 0x1
	  li        r4, 0x4
	  li        r5, 0x5
	  li        r6, 0xF
	  bl        -0x314A4
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x31408
	  li        r3, 0
	  bl        -0x30F7C
	  addi      r3, r1, 0x2C
	  bl        -0x302FC
	  addi      r3, r1, 0x2C
	  li        r4, 0x1E
	  li        r5, 0x1
	  bl        -0x30F60
	  lfs       f0, -0x6838(r2)
	  li        r28, 0
	  lfs       f27, 0x34(r31)
	  lis       r30, 0xCC01
	  stfs      f0, 0x8(r1)
	  lis       r29, 0x4330
	  lfs       f28, -0x680C(r2)
	  stfs      f0, 0xC(r1)
	  lfd       f29, -0x6818(r2)
	  stfs      f0, 0x10(r1)
	  lfd       f30, -0x6820(r2)
	  lfs       f31, -0x6810(r2)
	  b         .loc_0x5A8

	.loc_0x418:
	  lbz       r0, 0x45(r31)
	  xoris     r3, r28, 0x8000
	  stw       r3, 0xF4(r1)
	  stw       r29, 0xF0(r1)
	  lfd       f0, 0xF0(r1)
	  stw       r0, 0xFC(r1)
	  fsubs     f1, f0, f29
	  stw       r29, 0xF8(r1)
	  lfd       f0, 0xF8(r1)
	  fsubs     f0, f0, f30
	  fdivs     f0, f1, f0
	  fnmsubs   f26, f28, f0, f31
	  fmr       f1, f26
	  bl        -0x4B364
	  frsp      f2, f1
	  lfs       f0, 0x8(r1)
	  fmr       f1, f26
	  fmadds    f0, f27, f2, f0
	  stfs      f0, 0x14(r1)
	  bl        -0x4AE14
	  addi      r3, r28, 0x1
	  lbz       r0, 0x45(r31)
	  xoris     r3, r3, 0x8000
	  lfs       f2, 0x10(r1)
	  stw       r3, 0x104(r1)
	  frsp      f1, f1
	  lfs       f0, 0xC(r1)
	  stw       r29, 0x100(r1)
	  fmadds    f3, f27, f1, f0
	  lfd       f0, 0x100(r1)
	  stw       r0, 0x10C(r1)
	  fsubs     f1, f0, f29
	  stw       r29, 0x108(r1)
	  lfd       f0, 0x108(r1)
	  stfs      f3, 0x18(r1)
	  fsubs     f0, f0, f30
	  stfs      f2, 0x1C(r1)
	  fdivs     f0, f1, f0
	  fnmsubs   f26, f28, f0, f31
	  fmr       f1, f26
	  bl        -0x4B3D0
	  frsp      f2, f1
	  lfs       f0, 0x8(r1)
	  fmr       f1, f26
	  fmadds    f0, f27, f2, f0
	  stfs      f0, 0x20(r1)
	  bl        -0x4AE80
	  frsp      f2, f1
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  li        r3, 0xA0
	  li        r4, 0
	  li        r5, 0x3
	  fmadds    f1, f27, f2, f1
	  stfs      f0, 0x28(r1)
	  stfs      f1, 0x24(r1)
	  bl        -0x34D3C
	  lfs       f0, 0x8(r1)
	  addi      r28, r28, 0x1
	  lfs       f1, 0xC(r1)
	  stfs      f0, -0x8000(r30)
	  lfs       f2, 0x10(r1)
	  stfs      f1, -0x8000(r30)
	  lfs       f0, 0x14(r1)
	  stfs      f2, -0x8000(r30)
	  lfs       f1, 0x18(r1)
	  lbz       r5, 0x43(r31)
	  lbz       r4, 0x42(r31)
	  lbz       r3, 0x41(r31)
	  lbz       r0, 0x40(r31)
	  lfs       f2, 0x1C(r1)
	  stb       r0, -0x8000(r30)
	  stb       r3, -0x8000(r30)
	  stb       r4, -0x8000(r30)
	  stb       r5, -0x8000(r30)
	  stfs      f0, -0x8000(r30)
	  lfs       f0, 0x20(r1)
	  stfs      f1, -0x8000(r30)
	  lfs       f1, 0x24(r1)
	  stfs      f2, -0x8000(r30)
	  lfs       f2, 0x28(r1)
	  lbz       r5, 0x43(r31)
	  lbz       r4, 0x42(r31)
	  lbz       r3, 0x41(r31)
	  lbz       r0, 0x40(r31)
	  stb       r0, -0x8000(r30)
	  stb       r3, -0x8000(r30)
	  stb       r4, -0x8000(r30)
	  stb       r5, -0x8000(r30)
	  stfs      f0, -0x8000(r30)
	  stfs      f1, -0x8000(r30)
	  stfs      f2, -0x8000(r30)
	  lbz       r5, 0x43(r31)
	  lbz       r4, 0x42(r31)
	  lbz       r3, 0x41(r31)
	  lbz       r0, 0x40(r31)
	  stb       r0, -0x8000(r30)
	  stb       r3, -0x8000(r30)
	  stb       r4, -0x8000(r30)
	  stb       r5, -0x8000(r30)

	.loc_0x5A8:
	  lbz       r0, 0x44(r31)
	  cmpw      r28, r0
	  blt+      .loc_0x418

	.loc_0x5B4:
	  psq_l     f31,0x178(r1),0,0
	  lfd       f31, 0x170(r1)
	  psq_l     f30,0x168(r1),0,0
	  lfd       f30, 0x160(r1)
	  psq_l     f29,0x158(r1),0,0
	  lfd       f29, 0x150(r1)
	  psq_l     f28,0x148(r1),0,0
	  lfd       f28, 0x140(r1)
	  psq_l     f27,0x138(r1),0,0
	  lfd       f27, 0x130(r1)
	  psq_l     f26,0x128(r1),0,0
	  lfd       f26, 0x120(r1)
	  lwz       r31, 0x11C(r1)
	  lwz       r30, 0x118(r1)
	  lwz       r29, 0x114(r1)
	  lwz       r0, 0x184(r1)
	  lwz       r28, 0x110(r1)
	  mtlr      r0
	  addi      r1, r1, 0x180
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8011A7D0
 * Size:	0000DC
 */
LifeGaugeMgr::LifeGaugeMgr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r0, r30
	  stw       r29, 0x14(r1)
	  mr        r31, r0
	  bl        -0xFD828
	  lis       r3, 0x804B
	  addi      r29, r30, 0x48
	  subi      r0, r3, 0x3CEC
	  li        r4, 0
	  stw       r0, 0x0(r31)
	  li        r0, 0x20
	  lfs       f0, -0x6838(r2)
	  mr        r3, r29
	  stb       r4, 0x38(r31)
	  stfs      f0, 0x3C(r31)
	  stb       r0, 0x45(r31)
	  stb       r0, 0x44(r31)
	  stw       r4, 0x20(r31)
	  stw       r4, 0x1C(r31)
	  stw       r4, 0x18(r31)
	  stb       r4, 0x38(r31)
	  stfs      f0, 0x3C(r31)
	  stb       r0, 0x45(r31)
	  stb       r0, 0x44(r31)
	  bl        -0xFD878
	  lis       r3, 0x804B
	  li        r4, 0
	  subi      r0, r3, 0x3CEC
	  lfs       f0, -0x6838(r2)
	  stw       r0, 0x0(r29)
	  li        r0, 0x20
	  mr        r3, r30
	  stb       r4, 0x38(r29)
	  stfs      f0, 0x3C(r29)
	  stb       r0, 0x45(r29)
	  stb       r0, 0x44(r29)
	  stw       r4, 0x20(r29)
	  stw       r4, 0x1C(r29)
	  stw       r4, 0x18(r29)
	  stb       r4, 0x38(r29)
	  stfs      f0, 0x3C(r29)
	  stb       r0, 0x45(r29)
	  stb       r0, 0x44(r29)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8011A8AC
 * Size:	000098
 */
LifeGaugeList::~LifeGaugeList()
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
	  beq-      .loc_0x7C
	  lis       r3, 0x804B
	  subi      r0, r3, 0x3CEC
	  stw       r0, 0x0(r30)
	  lwz       r3, 0x18(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x40
	  lwz       r0, 0x1C(r30)
	  stw       r0, 0x1C(r3)

	.loc_0x40:
	  lwz       r3, 0x1C(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x54
	  lwz       r0, 0x18(r30)
	  stw       r0, 0x18(r3)

	.loc_0x54:
	  li        r0, 0
	  mr        r3, r30
	  stw       r0, 0x1C(r30)
	  li        r4, 0
	  stw       r0, 0x18(r30)
	  bl        -0xFD8E0
	  extsh.    r0, r31
	  ble-      .loc_0x7C
	  mr        r3, r30
	  bl        -0xF6870

	.loc_0x7C:
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
 * Address:	8011A944
 * Size:	000150
 */
void LifeGaugeMgr::createLifeGauge(Game::Creature*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  lwz       r3, 0x1C(r3)
	  b         .loc_0x3C

	.loc_0x28:
	  lwz       r0, 0x20(r3)
	  cmplw     r0, r29
	  bne-      .loc_0x38
	  b         .loc_0x48

	.loc_0x38:
	  lwz       r3, 0x1C(r3)

	.loc_0x3C:
	  cmplwi    r3, 0
	  bne+      .loc_0x28
	  li        r3, 0

	.loc_0x48:
	  cmplwi    r3, 0
	  bne-      .loc_0x134
	  lwz       r3, 0x64(r31)
	  b         .loc_0x6C

	.loc_0x58:
	  lwz       r0, 0x20(r3)
	  cmplw     r0, r29
	  bne-      .loc_0x68
	  b         .loc_0x78

	.loc_0x68:
	  lwz       r3, 0x1C(r3)

	.loc_0x6C:
	  cmplwi    r3, 0
	  bne+      .loc_0x58
	  li        r3, 0

	.loc_0x78:
	  cmplwi    r3, 0
	  bne-      .loc_0x134
	  li        r3, 0x48
	  bl        -0xF6B24
	  mr.       r30, r3
	  beq-      .loc_0xD8
	  bl        -0xFDA08
	  lis       r4, 0x804B
	  li        r3, 0
	  subi      r0, r4, 0x3CEC
	  lfs       f0, -0x6838(r2)
	  stw       r0, 0x0(r30)
	  li        r0, 0x20
	  stb       r3, 0x38(r30)
	  stfs      f0, 0x3C(r30)
	  stb       r0, 0x45(r30)
	  stb       r0, 0x44(r30)
	  stw       r29, 0x20(r30)
	  stw       r3, 0x1C(r30)
	  stw       r3, 0x18(r30)
	  stb       r3, 0x38(r30)
	  stfs      f0, 0x3C(r30)
	  stb       r0, 0x45(r30)
	  stb       r0, 0x44(r30)

	.loc_0xD8:
	  lwz       r4, 0x18(r30)
	  mr        r3, r30
	  cmplwi    r4, 0
	  beq-      .loc_0xF0
	  lwz       r0, 0x1C(r30)
	  stw       r0, 0x1C(r4)

	.loc_0xF0:
	  lwz       r4, 0x1C(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x104
	  lwz       r0, 0x18(r30)
	  stw       r0, 0x18(r4)

	.loc_0x104:
	  li        r4, 0
	  addi      r0, r31, 0x48
	  stw       r4, 0x1C(r30)
	  stw       r4, 0x18(r30)
	  stw       r0, 0x18(r30)
	  lwz       r0, 0x64(r31)
	  stw       r0, 0x1C(r30)
	  lwz       r4, 0x64(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x130
	  stw       r30, 0x18(r4)

	.loc_0x130:
	  stw       r30, 0x64(r31)

	.loc_0x134:
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
 * Address:	8011AA94
 * Size:	0000E4
 */
void LifeGaugeMgr::activeLifeGauge(Game::Creature*, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lwz       r5, 0x64(r3)
	  b         .loc_0x20

	.loc_0xC:
	  lwz       r0, 0x20(r5)
	  cmplw     r0, r4
	  bne-      .loc_0x1C
	  b         .loc_0x2C

	.loc_0x1C:
	  lwz       r5, 0x1C(r5)

	.loc_0x20:
	  cmplwi    r5, 0
	  bne+      .loc_0xC
	  li        r5, 0

	.loc_0x2C:
	  cmplwi    r5, 0
	  beq-      .loc_0xDC
	  lbz       r4, 0x45(r5)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  lfd       f3, -0x6820(r2)
	  stw       r4, 0xC(r1)
	  lfs       f0, -0x6838(r2)
	  lfd       f2, 0x8(r1)
	  fsubs     f2, f2, f3
	  fmuls     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x70
	  lfs       f0, -0x6834(r2)
	  fadds     f0, f0, f1
	  b         .loc_0x78

	.loc_0x70:
	  lfs       f0, -0x6834(r2)
	  fsubs     f0, f1, f0

	.loc_0x78:
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  stb       r0, 0x44(r5)
	  lwz       r4, 0x18(r5)
	  cmplwi    r4, 0
	  beq-      .loc_0x9C
	  lwz       r0, 0x1C(r5)
	  stw       r0, 0x1C(r4)

	.loc_0x9C:
	  lwz       r4, 0x1C(r5)
	  cmplwi    r4, 0
	  beq-      .loc_0xB0
	  lwz       r0, 0x18(r5)
	  stw       r0, 0x18(r4)

	.loc_0xB0:
	  li        r0, 0
	  stw       r0, 0x1C(r5)
	  stw       r0, 0x18(r5)
	  stw       r3, 0x18(r5)
	  lwz       r0, 0x1C(r3)
	  stw       r0, 0x1C(r5)
	  lwz       r4, 0x1C(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0xD8
	  stw       r5, 0x18(r4)

	.loc_0xD8:
	  stw       r5, 0x1C(r3)

	.loc_0xDC:
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8011AB78
 * Size:	0000A8
 */
void LifeGaugeMgr::inactiveLifeGauge(Game::Creature*)
{
	/*
	.loc_0x0:
	  lwz       r5, 0x1C(r3)
	  b         .loc_0x1C

	.loc_0x8:
	  lwz       r0, 0x20(r5)
	  cmplw     r0, r4
	  bne-      .loc_0x18
	  b         .loc_0x28

	.loc_0x18:
	  lwz       r5, 0x1C(r5)

	.loc_0x1C:
	  cmplwi    r5, 0
	  bne+      .loc_0x8
	  li        r5, 0

	.loc_0x28:
	  cmplwi    r5, 0
	  beqlr-
	  li        r0, 0
	  lfs       f0, -0x6838(r2)
	  stb       r0, 0x38(r5)
	  li        r0, 0x20
	  stfs      f0, 0x3C(r5)
	  stb       r0, 0x45(r5)
	  stb       r0, 0x44(r5)
	  lwz       r4, 0x18(r5)
	  cmplwi    r4, 0
	  beq-      .loc_0x60
	  lwz       r0, 0x1C(r5)
	  stw       r0, 0x1C(r4)

	.loc_0x60:
	  lwz       r4, 0x1C(r5)
	  cmplwi    r4, 0
	  beq-      .loc_0x74
	  lwz       r0, 0x18(r5)
	  stw       r0, 0x18(r4)

	.loc_0x74:
	  li        r4, 0
	  addi      r0, r3, 0x48
	  stw       r4, 0x1C(r5)
	  stw       r4, 0x18(r5)
	  stw       r0, 0x18(r5)
	  lwz       r0, 0x64(r3)
	  stw       r0, 0x1C(r5)
	  lwz       r4, 0x64(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0xA0
	  stw       r5, 0x18(r4)

	.loc_0xA0:
	  stw       r5, 0x64(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8011AC20
 * Size:	000270
 */
void LifeGaugeMgr::update()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  lwz       r31, 0x1C(r3)
	  lfs       f31, -0x6828(r2)
	  b         .loc_0x24C

	.loc_0x24:
	  lwz       r3, 0x20(r31)
	  addi      r4, r31, 0x24
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x13C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x38(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x234
	  lfs       f1, 0x30(r31)
	  lfs       f0, -0x6828(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x60
	  stfs      f0, 0x30(r31)
	  b         .loc_0x70

	.loc_0x60:
	  lfs       f0, -0x6838(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x70
	  stfs      f0, 0x30(r31)

	.loc_0x70:
	  lbz       r6, 0x45(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  lfd       f3, -0x6820(r2)
	  stw       r6, 0xC(r1)
	  lfs       f0, 0x30(r31)
	  lfd       f2, 0x8(r1)
	  lfs       f1, -0x6838(r2)
	  fsubs     f2, f2, f3
	  fmuls     f2, f2, f0
	  fcmpo     cr0, f2, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0xB0
	  lfs       f1, -0x6834(r2)
	  fadds     f1, f1, f2
	  b         .loc_0xB8

	.loc_0xB0:
	  lfs       f1, -0x6834(r2)
	  fsubs     f1, f2, f1

	.loc_0xB8:
	  fctiwz    f1, f1
	  lbz       r3, 0x44(r31)
	  stfd      f1, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r5,r0,0,24,31
	  cmplw     r3, r5
	  beq-      .loc_0x1CC
	  sub       r3, r5, r3
	  lis       r0, 0x4330
	  xoris     r4, r3, 0x8000
	  lwz       r3, -0x6514(r13)
	  stw       r4, 0x14(r1)
	  lfd       f2, -0x6818(r2)
	  stw       r0, 0x10(r1)
	  lfd       f5, -0x6820(r2)
	  lfd       f1, 0x10(r1)
	  stw       r6, 0xC(r1)
	  fsubs     f6, f1, f2
	  lfs       f2, -0x6830(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, 0x54(r3)
	  lfd       f4, 0x8(r1)
	  fmuls     f3, f2, f1
	  lfs       f1, -0x682C(r2)
	  fsubs     f2, f4, f5
	  fdivs     f2, f6, f2
	  fabs      f2, f2
	  frsp      f2, f2
	  fmuls     f3, f3, f2
	  fcmpo     cr0, f3, f1
	  bge-      .loc_0x138
	  fmr       f3, f1

	.loc_0x138:
	  lfs       f2, 0x3C(r31)
	  lfs       f1, -0x6828(r2)
	  fadds     f2, f2, f3
	  stfs      f2, 0x3C(r31)
	  lfs       f2, 0x3C(r31)
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0x1AC
	  fctiwz    f1, f2
	  lbz       r0, 0x44(r31)
	  cmplw     r5, r0
	  stfd      f1, 0x10(r1)
	  lwz       r3, 0x14(r1)
	  rlwinm    r0,r3,0,24,31
	  neg       r5, r0
	  ble-      .loc_0x178
	  mr        r5, r0

	.loc_0x178:
	  rlwinm    r3,r3,0,24,31
	  lis       r0, 0x4330
	  lbz       r4, 0x44(r31)
	  stw       r3, 0xC(r1)
	  add       r3, r4, r5
	  lfd       f2, -0x6820(r2)
	  stw       r0, 0x8(r1)
	  lfd       f1, 0x8(r1)
	  stb       r3, 0x44(r31)
	  fsubs     f1, f1, f2
	  lfs       f2, 0x3C(r31)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x3C(r31)

	.loc_0x1AC:
	  lbz       r0, 0x44(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1CC
	  lfs       f1, -0x6838(r2)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x1CC
	  li        r0, 0x1
	  stb       r0, 0x44(r31)

	.loc_0x1CC:
	  lfs       f1, -0x6824(r2)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x1F4
	  li        r3, 0xFF
	  li        r0, 0
	  stb       r3, 0x40(r31)
	  stb       r0, 0x41(r31)
	  stb       r0, 0x42(r31)
	  stb       r3, 0x43(r31)
	  b         .loc_0x234

	.loc_0x1F4:
	  lfs       f1, -0x6834(r2)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x21C
	  li        r3, 0xFF
	  li        r0, 0
	  stb       r3, 0x40(r31)
	  stb       r3, 0x41(r31)
	  stb       r0, 0x42(r31)
	  stb       r3, 0x43(r31)
	  b         .loc_0x234

	.loc_0x21C:
	  li        r3, 0
	  li        r0, 0xFF
	  stb       r3, 0x40(r31)
	  stb       r0, 0x41(r31)
	  stb       r3, 0x42(r31)
	  stb       r0, 0x43(r31)

	.loc_0x234:
	  lfs       f0, 0x30(r31)
	  fcmpu     cr0, f31, f0
	  bne-      .loc_0x248
	  li        r0, 0
	  stb       r0, 0x38(r31)

	.loc_0x248:
	  lwz       r31, 0x1C(r31)

	.loc_0x24C:
	  cmplwi    r31, 0
	  bne+      .loc_0x24
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8011AE90
 * Size:	000080
 */
void LifeGaugeMgr::draw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lwz       r5, -0x64AC(r13)
	  cmplwi    r5, 0
	  beq-      .loc_0x30
	  lwz       r0, 0x1F0(r5)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x68

	.loc_0x30:
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x68
	  lwz       r3, 0x90(r3)
	  mr        r31, r0
	  li        r4, 0
	  bl        -0xE78A8
	  b         .loc_0x60

	.loc_0x50:
	  mr        r3, r31
	  mr        r4, r30
	  bl        -0xD1C
	  lwz       r31, 0x1C(r31)

	.loc_0x60:
	  cmplwi    r31, 0
	  bne+      .loc_0x50

	.loc_0x68:
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
 * Address:	8011AF10
 * Size:	000098
 */
void LifeGaugeMgr::loadResource()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  li        r6, 0x1
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  subi      r3, r4, 0x4DC8
	  li        r4, 0x1
	  bl        -0xFFE10
	  lis       r5, 0x8048
	  mr        r4, r3
	  subi      r3, r5, 0x4DA8
	  bl        -0xF7F38
	  mr        r30, r3
	  li        r3, 0x40
	  bl        -0xF70B8
	  mr.       r31, r3
	  beq-      .loc_0x78
	  li        r0, 0
	  mr        r4, r30
	  stw       r0, 0x28(r31)
	  li        r5, 0
	  bl        -0xE7EF4
	  lbz       r0, 0x3B(r31)
	  rlwinm    r0,r0,0,30,30
	  stb       r0, 0x3B(r31)

	.loc_0x78:
	  stw       r31, 0x90(r29)
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
 * Address:	8011AFA8
 * Size:	000028
 */
void __sinit_lifeGaugeMgr_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804B
	  stw       r0, -0x6E00(r13)
	  stfsu     f0, -0x3CF8(r3)
	  stfs      f0, -0x6DFC(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
