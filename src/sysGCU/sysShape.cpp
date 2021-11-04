#include "types.h"

namespace SysShape {

/*
 * --INFO--
 * Address:	80428C50
 * Size:	000038
 */
void Model::clearAnimatorAll(void)
{
	/*
	.loc_0x0:
	  li        r6, 0
	  li        r5, 0
	  b         .loc_0x28

	.loc_0xC:
	  lwz       r4, 0x8(r3)
	  rlwinm    r0,r6,2,14,29
	  addi      r6, r6, 0x1
	  lwz       r4, 0x4(r4)
	  lwz       r4, 0x28(r4)
	  lwzx      r4, r4, r0
	  stw       r5, 0x54(r4)

	.loc_0x28:
	  lwz       r0, 0xC(r3)
	  cmpw      r6, r0
	  blt+      .loc_0xC
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void Model::setAnimatorAll(SysShape::BaseAnimator&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80428C88
 * Size:	0000C8
 */
void Animator::startAnim(int, SysShape::MotionListener*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x10(r3)
	  lwz       r3, 0x2C(r3)
	  b         .loc_0x3C

	.loc_0x28:
	  lha       r0, 0x20(r3)
	  cmpw      r4, r0
	  bne-      .loc_0x38
	  b         .loc_0x48

	.loc_0x38:
	  lwz       r3, 0x4(r3)

	.loc_0x3C:
	  cmplwi    r3, 0
	  bne+      .loc_0x28
	  li        r3, 0

	.loc_0x48:
	  stw       r3, 0xC(r30)
	  lwz       r0, 0xC(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x7C
	  lwz       r3, 0x10(r30)
	  bl        0xF84
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x6390
	  li        r4, 0xDC
	  subi      r5, r5, 0x6380
	  crclr     6, 0x6
	  bl        -0x3FE6C0

	.loc_0x7C:
	  lfs       f1, 0x21C8(r2)
	  stfs      f1, 0x8(r30)
	  lwz       r3, 0xC(r30)
	  bl        0xBB0
	  cmplwi    r31, 0
	  stw       r3, 0x14(r30)
	  beq-      .loc_0xA0
	  stw       r31, 0x4(r30)
	  b         .loc_0xA8

	.loc_0xA0:
	  li        r0, 0
	  stw       r0, 0x4(r30)

	.loc_0xA8:
	  li        r0, 0
	  stb       r0, 0x18(r30)
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
 * Address:	80428D50
 * Size:	000068
 */
void Animator::startExAnim(SysShape::AnimInfo*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, 0x21C8(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r4, 0xC(r3)
	  stfs      f0, 0x8(r3)
	  stw       r0, 0x4(r3)
	  stb       r0, 0x18(r3)
	  stw       r0, 0x14(r3)
	  lbz       r0, 0x18(r3)
	  ori       r0, r0, 0x80
	  stb       r0, 0x18(r3)
	  lbz       r0, -0x64D8(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x58
	  lis       r3, 0x804A
	  li        r4, 0xFC
	  subi      r3, r3, 0x6390
	  addi      r5, r2, 0x21CC
	  crclr     6, 0x6
	  bl        -0x3FE764

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80428DB8
 * Size:	000008
 */
u32 Animator::assertValid(SysShape::Model*) { return 0x1; }

/*
 * --INFO--
 * Address:	80428DC0
 * Size:	000040
 */
void Animator::setCurrFrame(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stfs      f1, 0x8(r3)
	  lwz       r3, 0xC(r3)
	  bl        0xAE4
	  stw       r3, 0x14(r31)
	  li        r0, 0
	  stb       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80428E00
 * Size:	000100
 */
void Animator::setFrameByKeyType(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  lbz       r0, 0x18(r3)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x48
	  lis       r3, 0x804A
	  lis       r4, 0x804A
	  subi      r5, r4, 0x6370
	  mr        r6, r30
	  subi      r3, r3, 0x6390
	  li        r4, 0x12C
	  crclr     6, 0x6
	  bl        -0x3FE804

	.loc_0x48:
	  cmplwi    r30, 0x3E8
	  bne-      .loc_0x9C
	  lwz       r3, 0xC(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x18(r3)
	  lfd       f2, 0x21D8(r2)
	  lha       r0, 0x6(r3)
	  lfs       f0, 0x21D4(r2)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fsubs     f1, f1, f0
	  stfs      f1, 0x8(r31)
	  lwz       r3, 0xC(r31)
	  bl        0xA38
	  stw       r3, 0x14(r31)
	  li        r0, 0
	  stb       r0, 0x18(r31)
	  b         .loc_0xE8

	.loc_0x9C:
	  lwz       r3, 0xC(r31)
	  mr        r4, r30
	  bl        0xAB0
	  cmplwi    r3, 0
	  beq-      .loc_0xE8
	  lwz       r3, 0x18(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f1, 0x21D8(r2)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f1, f0, f1
	  stfs      f1, 0x8(r31)
	  lwz       r3, 0xC(r31)
	  bl        0x9E8
	  stw       r3, 0x14(r31)
	  li        r0, 0
	  stb       r0, 0x18(r31)

	.loc_0xE8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80428F00
 * Size:	000078
 */
void Animator::setLastFrame(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r3, 0xC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x64
	  lwz       r3, 0x18(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  lha       r0, 0x6(r3)
	  lfd       f2, 0x21D8(r2)
	  xoris     r0, r0, 0x8000
	  lfs       f0, 0x21D4(r2)
	  stw       r0, 0xC(r1)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fsubs     f1, f1, f0
	  stfs      f1, 0x8(r31)
	  lwz       r3, 0xC(r31)
	  bl        0x96C
	  stw       r3, 0x14(r31)
	  li        r0, 0
	  stb       r0, 0x18(r31)

	.loc_0x64:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80428F78
 * Size:	0002AC
 */
void Animator::animate(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  stw       r30, 0x48(r1)
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x294
	  lfs       f0, 0x8(r31)
	  li        r30, 0
	  fadds     f0, f0, f1
	  stfs      f0, 0x8(r31)
	  b         .loc_0xFC

	.loc_0x38:
	  lwz       r0, 0x4(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x68
	  lwz       r3, 0xC(r31)
	  lha       r0, 0x20(r3)
	  sth       r0, 0x20(r4)
	  lwz       r3, 0x4(r31)
	  lwz       r4, 0x14(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x68:
	  lwz       r4, 0x14(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x12C
	  lwz       r0, 0x1C(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x84
	  b         .loc_0xF0

	.loc_0x84:
	  lbz       r0, 0x18(r31)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0xF0
	  lwz       r3, 0xC(r31)
	  bl        0x920
	  cmplwi    r3, 0
	  beq-      .loc_0xC8
	  lwz       r3, 0x18(r3)
	  lis       r0, 0x4330
	  stw       r0, 0x30(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f1, 0x21D8(r2)
	  stw       r0, 0x34(r1)
	  lfd       f0, 0x30(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x8(r31)
	  b         .loc_0xEC

	.loc_0xC8:
	  lfs       f0, 0x21C8(r2)
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  li        r4, 0x171
	  stfs      f0, 0x8(r31)
	  subi      r3, r3, 0x6390
	  subi      r5, r5, 0x634C
	  crclr     6, 0x6
	  bl        -0x3FEA20

	.loc_0xEC:
	  li        r30, 0x1

	.loc_0xF0:
	  lwz       r3, 0x14(r31)
	  lwz       r0, 0x4(r3)
	  stw       r0, 0x14(r31)

	.loc_0xFC:
	  rlwinm.   r0,r30,0,24,31
	  bne-      .loc_0x12C
	  lwz       r4, 0x14(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x12C
	  lfs       f0, 0x8(r31)
	  lwz       r3, 0x18(r4)
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  cmpw      r3, r0
	  blt+      .loc_0x38

	.loc_0x12C:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x144
	  lwz       r3, 0xC(r31)
	  lfs       f1, 0x8(r31)
	  bl        0x80C
	  stw       r3, 0x14(r31)

	.loc_0x144:
	  lwz       r3, 0xC(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x30(r1)
	  lwz       r3, 0x18(r3)
	  lfd       f2, 0x21D8(r2)
	  lha       r3, 0x6(r3)
	  lfs       f1, 0x8(r31)
	  xoris     r3, r3, 0x8000
	  stw       r3, 0x34(r1)
	  lfd       f0, 0x30(r1)
	  fsubs     f0, f0, f2
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x25C
	  stw       r3, 0x34(r1)
	  lfs       f0, 0x21D4(r2)
	  stw       r0, 0x30(r1)
	  lfd       f1, 0x30(r1)
	  fsubs     f1, f1, f2
	  fsubs     f0, f1, f0
	  stfs      f0, 0x8(r31)
	  lwz       r0, 0x4(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x25C
	  lbz       r0, 0x18(r31)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x25C
	  addi      r3, r1, 0x8
	  bl        -0x17D9C
	  lis       r3, 0x804B
	  li        r6, 0
	  subi      r0, r3, 0x59A4
	  li        r5, -0x1
	  stw       r0, 0x8(r1)
	  lis       r3, 0x4330
	  lfd       f1, 0x21D8(r2)
	  li        r0, 0x3E8
	  stw       r6, 0x20(r1)
	  addi      r4, r1, 0x8
	  stw       r6, 0x24(r1)
	  sth       r5, 0x28(r1)
	  lwz       r5, 0xC(r31)
	  stw       r3, 0x30(r1)
	  lwz       r3, 0x18(r5)
	  lha       r3, 0x6(r3)
	  xoris     r3, r3, 0x8000
	  stw       r0, 0x24(r1)
	  stw       r3, 0x34(r1)
	  lfd       f0, 0x30(r1)
	  fsubs     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  stw       r0, 0x20(r1)
	  lha       r0, 0x20(r5)
	  sth       r0, 0x28(r1)
	  lbz       r0, 0x18(r31)
	  ori       r0, r0, 0x1
	  stb       r0, 0x18(r31)
	  lwz       r3, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804B
	  addi      r3, r1, 0x8
	  subi      r0, r4, 0x59A4
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  bl        -0x17C48

	.loc_0x25C:
	  lfs       f0, 0x8(r31)
	  lis       r0, 0x4330
	  lwz       r3, 0xC(r31)
	  fctiwz    f0, f0
	  stw       r0, 0x30(r1)
	  lfd       f1, 0x21D8(r2)
	  lwz       r3, 0x18(r3)
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x34(r1)
	  lfd       f0, 0x30(r1)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x8(r3)

	.loc_0x294:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80429224
 * Size:	000080
 */
BlendAnimator::BlendAnimator(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  subi      r0, r4, 0x4678
	  lis       r4, 0x8018
	  li        r6, 0x1C
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x804F
	  subi      r4, r4, 0x5E90
	  stw       r0, 0x0(r31)
	  subi      r0, r3, 0x420C
	  addi      r3, r31, 0x4
	  li        r7, 0x2
	  stw       r0, 0x0(r31)
	  bl        -0x367A2C
	  li        r0, 0
	  lfs       f0, 0x21C8(r2)
	  stw       r0, 0x4C(r31)
	  mr        r3, r31
	  stfs      f0, 0x3C(r31)
	  stfs      f0, 0x40(r31)
	  stw       r0, 0x44(r31)
	  stb       r0, 0x49(r31)
	  stb       r0, 0x48(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804292A4
 * Size:	000154
 */
void BlendAnimator::setAnimMgr(SysShape::AnimMgr*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stmw      r27, 0xC(r1)
	  mr        r31, r3
	  li        r0, 0
	  lis       r3, 0x804A
	  stb       r0, 0x48(r31)
	  lfs       f31, 0x21C8(r2)
	  mr        r27, r4
	  mr        r29, r31
	  subi      r30, r3, 0x63A8
	  li        r28, 0

	.loc_0x3C:
	  stw       r27, 0x14(r29)
	  lwz       r3, 0x14(r29)
	  lwz       r3, 0x2C(r3)
	  b         .loc_0x60

	.loc_0x4C:
	  lha       r0, 0x20(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x5C
	  b         .loc_0x6C

	.loc_0x5C:
	  lwz       r3, 0x4(r3)

	.loc_0x60:
	  cmplwi    r3, 0
	  bne+      .loc_0x4C
	  li        r3, 0

	.loc_0x6C:
	  stw       r3, 0x10(r29)
	  lwz       r0, 0x10(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x98
	  lwz       r3, 0x14(r29)
	  bl        0x944
	  addi      r3, r30, 0x18
	  addi      r5, r30, 0x28
	  li        r4, 0xDC
	  crclr     6, 0x6
	  bl        -0x3FECF8

	.loc_0x98:
	  stfs      f31, 0xC(r29)
	  fmr       f1, f31
	  lwz       r3, 0x10(r29)
	  bl        0x578
	  stw       r3, 0x18(r29)
	  li        r0, 0
	  addi      r28, r28, 0x1
	  stw       r0, 0x8(r29)
	  cmpwi     r28, 0x2
	  stbu      r0, 0x1C(r29)
	  blt+      .loc_0x3C
	  lwz       r29, 0x2C(r27)
	  b         .loc_0xE0

	.loc_0xCC:
	  lha       r0, 0x20(r29)
	  cmpwi     r0, 0
	  bne-      .loc_0xDC
	  b         .loc_0xEC

	.loc_0xDC:
	  lwz       r29, 0x4(r29)

	.loc_0xE0:
	  cmplwi    r29, 0
	  bne+      .loc_0xCC
	  li        r29, 0

	.loc_0xEC:
	  cmplwi    r29, 0
	  bne-      .loc_0x108
	  addi      r3, r30, 0x18
	  addi      r5, r30, 0x7C
	  li        r4, 0x1BA
	  crclr     6, 0x6
	  bl        -0x3FED68

	.loc_0x108:
	  lwz       r3, 0x18(r27)
	  li        r6, 0
	  lwz       r4, 0x18(r29)
	  li        r7, 0
	  lwz       r3, 0x8(r3)
	  li        r8, 0
	  mr        r5, r4
	  lwz       r3, 0x4(r3)
	  lwz       r0, 0x18(r3)
	  rlwinm    r3,r0,0,28,31
	  bl        -0x4135E4
	  stw       r3, 0x4C(r31)
	  psq_l     f31,0x28(r1),0,0
	  lfd       f31, 0x20(r1)
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void BlendAnimator::setWeight(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804293F8
 * Size:	00015C
 */
void BlendAnimator::startBlend(SysShape::BlendFunction*, float,
                               SysShape::MotionListener*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r5, 0x44(r3)
	  mr        r31, r3
	  lfs       f0, 0x21C8(r2)
	  mr        r3, r4
	  stfs      f0, 0x3C(r31)
	  stfs      f1, 0x40(r31)
	  fmr       f1, f0
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmr       f31, f1
	  lfs       f0, 0x21C8(r2)
	  li        r0, 0
	  fcmpo     cr0, f0, f31
	  cror      2, 0, 0x2
	  bne-      .loc_0x70
	  lfs       f0, 0x21D4(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x70
	  li        r0, 0x1

	.loc_0x70:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x94
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x6390
	  li        r4, 0x1C6
	  subi      r5, r5, 0x62FC
	  crclr     6, 0x6
	  bl        -0x3FEE48

	.loc_0x94:
	  lwz       r3, 0x10(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xA8
	  lwz       r5, 0x18(r3)
	  b         .loc_0xAC

	.loc_0xA8:
	  li        r5, 0

	.loc_0xAC:
	  lwz       r3, 0x4C(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4C(r31)
	  li        r4, 0
	  lfs       f0, 0x21D4(r2)
	  lwz       r12, 0x0(r3)
	  fsubs     f1, f0, f31
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xF8
	  lwz       r5, 0x18(r3)
	  b         .loc_0xFC

	.loc_0xF8:
	  li        r5, 0

	.loc_0xFC:
	  lwz       r3, 0x4C(r31)
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4C(r31)
	  fmr       f1, f31
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0
	  li        r0, 0x1
	  stb       r3, 0x49(r31)
	  stb       r0, 0x48(r31)
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80429554
 * Size:	000018
 */
void BlendAnimator::endBlend(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  lfs       f0, 0x21C8(r2)
	  stb       r0, 0x48(r3)
	  stb       r0, 0x49(r3)
	  stfs      f0, 0x3C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042956C
 * Size:	000278
 */
void BlendAnimator::animate(SysShape::BlendFunction*, float, float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stfd      f30, 0x40(r1)
	  psq_st    f30,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  lbz       r0, 0x48(r3)
	  fmr       f30, f1
	  fmr       f31, f3
	  mr        r31, r3
	  cmplwi    r0, 0
	  mr        r30, r4
	  beq-      .loc_0x238
	  addi      r3, r31, 0x4
	  fmr       f1, f2
	  lwz       r12, 0x4(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x20
	  fmr       f1, f31
	  lwz       r12, 0x20(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x3C(r31)
	  fadds     f0, f0, f30
	  stfs      f0, 0x3C(r31)
	  lfs       f0, 0x3C(r31)
	  lfs       f1, 0x40(r31)
	  fcmpo     cr0, f0, f1
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x128
	  stfs      f1, 0x3C(r31)
	  lbz       r0, 0x49(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x128
	  li        r0, 0x1
	  stb       r0, 0x49(r31)
	  lwz       r0, 0x44(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x128
	  addi      r3, r1, 0x8
	  bl        -0x18294
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x59A4
	  li        r3, -0x1
	  stw       r0, 0x8(r1)
	  li        r0, 0x7D0
	  addi      r4, r1, 0x8
	  stw       r5, 0x20(r1)
	  stw       r5, 0x24(r1)
	  sth       r3, 0x28(r1)
	  lfs       f0, 0x40(r31)
	  fctiwz    f0, f0
	  stw       r0, 0x24(r1)
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  stw       r0, 0x20(r1)
	  lwz       r3, 0x44(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x804B
	  addi      r3, r1, 0x8
	  subi      r0, r4, 0x59A4
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  bl        -0x18108

	.loc_0x128:
	  lfs       f1, 0x3C(r31)
	  mr        r3, r30
	  lfs       f0, 0x40(r31)
	  lwz       r12, 0x0(r30)
	  fdivs     f1, f1, f0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmr       f31, f1
	  lfs       f0, 0x21C8(r2)
	  li        r0, 0
	  fcmpo     cr0, f0, f31
	  cror      2, 0, 0x2
	  bne-      .loc_0x174
	  lfs       f0, 0x21D4(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x174
	  li        r0, 0x1

	.loc_0x174:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x198
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x6390
	  li        r4, 0x1C6
	  subi      r5, r5, 0x62FC
	  crclr     6, 0x6
	  bl        -0x3FF0C0

	.loc_0x198:
	  lwz       r3, 0x10(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x1AC
	  lwz       r5, 0x18(r3)
	  b         .loc_0x1B0

	.loc_0x1AC:
	  li        r5, 0

	.loc_0x1B0:
	  lwz       r3, 0x4C(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4C(r31)
	  li        r4, 0
	  lfs       f0, 0x21D4(r2)
	  lwz       r12, 0x0(r3)
	  fsubs     f1, f0, f31
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x1FC
	  lwz       r5, 0x18(r3)
	  b         .loc_0x200

	.loc_0x1FC:
	  li        r5, 0

	.loc_0x200:
	  lwz       r3, 0x4C(r31)
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4C(r31)
	  fmr       f1, f31
	  li        r4, 0x1
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x250

	.loc_0x238:
	  addi      r3, r31, 0x4
	  fmr       f1, f2
	  lwz       r12, 0x4(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x250:
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804297E4
 * Size:	000040
 */
void BlendAnimator::getCalc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x48(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x20
	  lwz       r3, 0x4C(r3)
	  b         .loc_0x30

	.loc_0x20:
	  lwzu      r12, 0x4(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80429824
 * Size:	00007C
 */
void Joint::init(unsigned short, SysShape::Model*, J3DJoint*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  sth       r4, 0x38(r3)
	  stw       r5, 0x34(r3)
	  stw       r6, 0x18(r3)
	  lfs       f0, 0x3C(r6)
	  stfs      f0, 0x1C(r3)
	  lfs       f0, 0x40(r6)
	  stfs      f0, 0x20(r3)
	  lfs       f0, 0x44(r6)
	  stfs      f0, 0x24(r3)
	  lfs       f0, 0x48(r6)
	  stfs      f0, 0x28(r3)
	  lfs       f0, 0x4C(r6)
	  stfs      f0, 0x2C(r3)
	  lfs       f0, 0x50(r6)
	  stfs      f0, 0x30(r3)
	  lwz       r3, 0x8(r5)
	  lhz       r4, 0x38(r31)
	  lwz       r3, 0x4(r3)
	  lwz       r3, 0x54(r3)
	  bl        -0x3FAA68
	  stw       r3, 0x14(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804298A0
 * Size:	000020
 */
void Joint::getWorldMatrix(void)
{
	/*
	.loc_0x0:
	  lwz       r4, 0x34(r3)
	  lhz       r0, 0x38(r3)
	  lwz       r3, 0x8(r4)
	  mulli     r0, r0, 0x30
	  lwz       r3, 0x84(r3)
	  lwz       r3, 0xC(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void Joint::setCallback(SysShape::JointCallback*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void JointCallback::calc(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void AnimInfo::attach(SysShape::Model*, void*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804298C0
 * Size:	00006C
 */
void AnimInfo::getLowestAnimKey(float)
{
	/*
	.loc_0x0:
	  fctiwz    f0, f1
	  stwu      r1, -0x10(r1)
	  lfs       f2, 0x21E0(r2)
	  lis       r0, 0x4330
	  lwz       r7, 0x38(r3)
	  li        r3, 0
	  stfd      f0, 0x8(r1)
	  lfd       f1, 0x21D8(r2)
	  lwz       r6, 0xC(r1)
	  b         .loc_0x5C

	.loc_0x28:
	  lwz       r5, 0x18(r7)
	  stw       r0, 0x8(r1)
	  xoris     r4, r5, 0x8000
	  cmpw      r5, r6
	  stw       r4, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  blt-      .loc_0x58
	  fcmpo     cr0, f0, f2
	  bge-      .loc_0x58
	  fmr       f2, f0
	  mr        r3, r7

	.loc_0x58:
	  lwz       r7, 0x4(r7)

	.loc_0x5C:
	  cmplwi    r7, 0
	  bne+      .loc_0x28
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void AnimInfo::dump(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void AnimInfo::getLastLoopStart(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042992C
 * Size:	000028
 */
void AnimInfo::getLastLoopStart(SysShape::KeyEvent*)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x8(r4)
	  b         .loc_0x18

	.loc_0x8:
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0
	  beqlr-
	  lwz       r3, 0x8(r3)

	.loc_0x18:
	  cmplwi    r3, 0
	  bne+      .loc_0x8
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80429954
 * Size:	000028
 */
void AnimInfo::getAnimKeyByType(unsigned long)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x38(r3)
	  b         .loc_0x18

	.loc_0x8:
	  lwz       r0, 0x1C(r3)
	  cmplw     r0, r4
	  beqlr-
	  lwz       r3, 0x4(r3)

	.loc_0x18:
	  cmplwi    r3, 0
	  bne+      .loc_0x8
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8042997C
 * Size:	000020
 */
void AnimInfo::read(Stream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        .loc_0x20
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x20:
	*/
}

/*
 * --INFO--
 * Address:	8042999C
 * Size:	00010C
 */
void AnimInfo::readEditor(Stream&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  li        r4, 0
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r3, r29
	  bl        -0x148F8
	  stw       r3, 0x4C(r28)
	  mr        r3, r29
	  li        r4, 0
	  li        r5, 0
	  bl        -0x1490C
	  stw       r3, 0x14(r28)
	  b         .loc_0xB4

	.loc_0x50:
	  mr        r3, r29
	  bl        -0x14F60
	  mr        r31, r3
	  cmpwi     r31, -0x1
	  beq-      .loc_0xEC
	  li        r3, 0x24
	  bl        -0x405B60
	  mr.       r30, r3
	  beq-      .loc_0x98
	  bl        -0x18680
	  lis       r4, 0x804B
	  li        r3, 0
	  subi      r4, r4, 0x59A4
	  li        r0, -0x1
	  stw       r4, 0x0(r30)
	  stw       r3, 0x18(r30)
	  stw       r3, 0x1C(r30)
	  sth       r0, 0x20(r30)

	.loc_0x98:
	  stw       r31, 0x18(r30)
	  mr        r3, r29
	  bl        -0x14FAC
	  stw       r3, 0x1C(r30)
	  mr        r4, r30
	  addi      r3, r28, 0x28
	  bl        -0x18644

	.loc_0xB4:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x50
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x6390
	  li        r4, 0x349
	  subi      r5, r5, 0x62F0
	  crclr     6, 0x6
	  bl        -0x3FF444

	.loc_0xEC:
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
 * Address:	80429AA8
 * Size:	00013C
 */
void AnimMgr::load(char*, J3DModelData*, JKRFileLoader*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x450(r1)
	  mflr      r0
	  li        r6, 0
	  li        r8, 0x2
	  stw       r0, 0x454(r1)
	  li        r0, 0
	  li        r9, 0
	  li        r10, 0
	  stmw      r26, 0x438(r1)
	  mr        r28, r4
	  mr        r29, r5
	  li        r4, 0
	  li        r5, 0
	  stw       r0, 0x8(r1)
	  lwz       r7, -0x77D8(r13)
	  bl        -0x40A95C
	  mr.       r30, r3
	  bne-      .loc_0x50
	  li        r3, 0
	  b         .loc_0x128

	.loc_0x50:
	  mr        r4, r30
	  addi      r3, r1, 0x10
	  li        r5, -0x1
	  bl        -0x1420C
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x1C(r1)
	  bne-      .loc_0x78
	  li        r0, 0
	  stw       r0, 0x424(r1)

	.loc_0x78:
	  li        r3, 0x74
	  bl        -0x405C80
	  mr.       r31, r3
	  beq-      .loc_0x104
	  bl        -0x187A0
	  lis       r3, 0x804F
	  addi      r27, r31, 0x1C
	  subi      r0, r3, 0x421C
	  stw       r0, 0x0(r31)
	  mr        r3, r27
	  bl        -0x187B8
	  lis       r3, 0x804F
	  addi      r26, r27, 0x28
	  subi      r0, r3, 0x422C
	  stw       r0, 0x0(r27)
	  mr        r3, r26
	  bl        -0x187D0
	  lis       r4, 0x804B
	  li        r3, 0
	  subi      r4, r4, 0x59A4
	  li        r0, -0x1
	  stw       r4, 0x0(r26)
	  stw       r3, 0x18(r26)
	  stw       r3, 0x1C(r26)
	  sth       r0, 0x20(r26)
	  stw       r3, 0x18(r27)
	  stw       r3, 0x1C(r27)
	  stw       r3, 0x50(r27)
	  stw       r3, 0x24(r27)
	  sth       r3, 0x70(r31)
	  stw       r3, 0x18(r31)
	  stw       r3, 0x2C(r31)
	  stw       r3, 0x28(r31)
	  stw       r3, 0x24(r31)
	  stw       r3, 0x20(r31)

	.loc_0x104:
	  mr        r3, r31
	  mr        r5, r28
	  mr        r6, r29
	  addi      r4, r1, 0x10
	  li        r7, 0
	  bl        0x142BC
	  mr        r3, r30
	  bl        -0x405AF0
	  mr        r3, r31

	.loc_0x128:
	  lmw       r26, 0x438(r1)
	  lwz       r0, 0x454(r1)
	  mtlr      r0
	  addi      r1, r1, 0x450
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80429BE4
 * Size:	000084
 */
AnimInfo::~AnimInfo(void)
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
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x28
	  subi      r0, r3, 0x422C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x4C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x28
	  subi      r0, r4, 0x59A4
	  li        r4, 0
	  stw       r0, 0x28(r30)
	  bl        -0x186A4

	.loc_0x4C:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x186B0
	  extsh.    r0, r31
	  ble-      .loc_0x68
	  mr        r3, r30
	  bl        -0x405B94

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
 * Address:	80429C68
 * Size:	000080
 */
void AnimMgr::dump(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  b         .loc_0x5C

	.loc_0x20:
	  lwz       r3, 0x2C(r30)
	  b         .loc_0x3C

	.loc_0x28:
	  lha       r0, 0x20(r3)
	  cmpw      r31, r0
	  bne-      .loc_0x38
	  b         .loc_0x48

	.loc_0x38:
	  lwz       r3, 0x4(r3)

	.loc_0x3C:
	  cmplwi    r3, 0
	  bne+      .loc_0x28
	  li        r3, 0

	.loc_0x48:
	  lwzu      r12, 0x28(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r31, r31, 0x1

	.loc_0x5C:
	  lhz       r0, 0x70(r30)
	  cmpw      r31, r0
	  blt+      .loc_0x20
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
 * Address:	........
 * Size:	0000CC
 */
void AnimMgr::load(Stream&, SysShape::Model*, JKRFileLoader*, char*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80429CE8
 * Size:	0000A0
 */
AnimMgr::~AnimMgr(void)
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
	  beq-      .loc_0x84
	  lis       r3, 0x804F
	  addic.    r0, r30, 0x1C
	  subi      r0, r3, 0x421C
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x68
	  lis       r4, 0x804F
	  addic.    r3, r30, 0x44
	  subi      r0, r4, 0x422C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x5C
	  lis       r4, 0x804B
	  subi      r0, r4, 0x59A4
	  stw       r0, 0x44(r30)
	  li        r4, 0
	  bl        -0x187B8

	.loc_0x5C:
	  addi      r3, r30, 0x1C
	  li        r4, 0
	  bl        -0x187C4

	.loc_0x68:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x187D0
	  extsh.    r0, r31
	  ble-      .loc_0x84
	  mr        r3, r30
	  bl        -0x405CB4

	.loc_0x84:
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
 * Size:	00005C
 */
JointCallback::~JointCallback(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void JointCallback::init(Vec const&, float const (&)[3][4])
{
	// UNUSED FUNCTION
}

} // namespace SysShape

/*
 * --INFO--
 * Address:	80429D88
 * Size:	000028
 */
void __sinit_sysShape_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804F
	  stw       r0, -0x64E0(r13)
	  stfsu     f0, -0x4238(r3)
	  stfs      f0, -0x64DC(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
