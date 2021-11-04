#include "types.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000D8
 */
Morimura::TChallengePiki::TChallengePiki(J2DPane*, J2DPane*, J2DPane*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8038C488
 * Size:	000004
 */
Morimura::TChallengePiki::posInfo::posInfo(void) { }

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
void Morimura::TChallengePiki::reset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002D8
 */
void Morimura::TChallengePiki::jumpStart(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8038C48C
 * Size:	00046C
 */
void Morimura::TChallengePiki::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  mr        r29, r3
	  lwz       r0, 0x72C(r3)
	  cmpwi     r0, 0
	  ble-      .loc_0x64
	  li        r31, 0
	  mr        r30, r29

	.loc_0x30:
	  lwz       r3, 0x0(r30)
	  lfs       f1, 0x730(r29)
	  lfs       f2, 0xD8(r3)
	  fadds     f1, f1, f2
	  stfs      f1, 0xD8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  addi      r31, r31, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r31, 0x3
	  blt+      .loc_0x30

	.loc_0x64:
	  mr        r31, r29
	  li        r30, 0
	  b         .loc_0x444

	.loc_0x70:
	  cmpwi     r30, 0x32
	  bge-      .loc_0x43C
	  lfs       f1, 0x28(r31)
	  li        r0, 0
	  lfs       f0, 0xC28(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x90
	  li        r0, 0x1

	.loc_0x90:
	  lfs       f1, 0x28(r31)
	  rlwinm.   r0,r0,0,24,31
	  lfs       f0, -0x7A18(r13)
	  fadds     f0, f1, f0
	  stfs      f0, 0x28(r31)
	  beq-      .loc_0x118
	  lfs       f1, 0x28(r31)
	  lfs       f0, 0xC28(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x118
	  lwz       r0, -0x6E38(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xE0
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x3FF8
	  li        r4, 0x89
	  addi      r5, r5, 0x3FEC
	  crclr     6, 0x6
	  bl        -0x361F28

	.loc_0xE0:
	  lwz       r3, -0x6E38(r13)
	  li        r4, 0x282F
	  li        r5, 0
	  lwz       r3, 0x18(r3)
	  bl        -0x4CC0C
	  cmplwi    r3, 0
	  beq-      .loc_0x118
	  lwz       r12, 0x10(r3)
	  li        r4, 0
	  lfs       f1, 0xC58(r2)
	  li        r5, 0
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x118:
	  lfs       f1, 0x28(r31)
	  lfs       f0, 0xC5C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x130
	  fsubs     f0, f1, f0
	  stfs      f0, 0x28(r31)

	.loc_0x130:
	  lwz       r0, 0x24(r31)
	  cmpwi     r0, 0x3
	  beq-      .loc_0x27C
	  bge-      .loc_0x150
	  cmpwi     r0, 0x1
	  beq-      .loc_0x43C
	  bge-      .loc_0x160
	  b         .loc_0x43C

	.loc_0x150:
	  cmpwi     r0, 0x5
	  beq-      .loc_0x398
	  bge-      .loc_0x43C
	  b         .loc_0x2C0

	.loc_0x160:
	  lfs       f1, 0x28(r31)
	  lfs       f0, 0xC28(r2)
	  fcmpo     cr0, f1, f0
	  blt-      .loc_0x43C
	  lfs       f0, 0xC60(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x184
	  li        r0, 0x3
	  stw       r0, 0x24(r31)

	.loc_0x184:
	  lfs       f1, 0x28(r31)
	  lfs       f0, 0xC28(r2)
	  lfs       f2, 0x40(r31)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1C4
	  lfs       f0, 0xC64(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f1, f0
	  b         .loc_0x1E8

	.loc_0x1C4:
	  lfs       f0, 0xC68(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0x1E8:
	  lfs       f0, 0x38(r31)
	  lfs       f3, 0xC6C(r2)
	  fnmsubs   f1, f2, f1, f0
	  lfs       f0, 0xC28(r2)
	  stfs      f1, 0x30(r31)
	  lfs       f2, 0x28(r31)
	  lfs       f1, 0x44(r31)
	  fmuls     f2, f3, f2
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x23C
	  lfs       f0, 0xC64(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x260

	.loc_0x23C:
	  lfs       f0, 0xC68(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x260:
	  fmuls     f0, f1, f0
	  lfs       f1, 0x3C(r31)
	  fabs      f0, f0
	  frsp      f0, f0
	  fsubs     f0, f1, f0
	  stfs      f0, 0x34(r31)
	  b         .loc_0x43C

	.loc_0x27C:
	  lfs       f1, 0x34(r31)
	  lfs       f0, -0x7A1C(r13)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x29C
	  lfs       f0, -0x7A14(r13)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x34(r31)
	  b         .loc_0x43C

	.loc_0x29C:
	  li        r0, 0x4
	  lfs       f0, 0xC28(r2)
	  stw       r0, 0x24(r31)
	  lfs       f1, 0x30(r31)
	  stfs      f1, 0x38(r31)
	  lfs       f1, 0x34(r31)
	  stfs      f1, 0x3C(r31)
	  stfs      f0, 0x28(r31)
	  b         .loc_0x43C

	.loc_0x2C0:
	  lfs       f1, 0x28(r31)
	  lfs       f0, 0xC70(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x2DC
	  li        r0, 0x5
	  stw       r0, 0x24(r31)
	  stfs      f0, 0x28(r31)

	.loc_0x2DC:
	  lwz       r0, 0x2C(r31)
	  lfs       f6, 0xC28(r2)
	  cmpwi     r0, 0
	  bne-      .loc_0x2F0
	  lfs       f6, 0xC74(r2)

	.loc_0x2F0:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x2FC
	  lfs       f6, 0xC78(r2)

	.loc_0x2FC:
	  lfs       f5, 0x38(r31)
	  lfs       f0, 0xC(r29)
	  lfs       f4, 0x28(r31)
	  fsubs     f3, f0, f5
	  lfs       f1, 0xC70(r2)
	  lfs       f0, 0xC28(r2)
	  lfs       f2, 0xC7C(r2)
	  fadds     f3, f6, f3
	  fmuls     f3, f4, f3
	  fdivs     f1, f3, f1
	  fadds     f1, f5, f1
	  stfs      f1, 0x30(r31)
	  lfs       f1, 0x28(r31)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x364
	  lfs       f0, 0xC64(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f1, f0
	  b         .loc_0x388

	.loc_0x364:
	  lfs       f0, 0xC68(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0

	.loc_0x388:
	  lfs       f0, 0x3C(r31)
	  fnmsubs   f0, f2, f1, f0
	  stfs      f0, 0x34(r31)
	  b         .loc_0x43C

	.loc_0x398:
	  lfs       f1, 0x10(r29)
	  lfs       f0, 0xC80(r2)
	  lfs       f2, 0x34(r31)
	  fsubs     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x3C0
	  lfs       f0, -0x7A14(r13)
	  fadds     f0, f2, f0
	  stfs      f0, 0x34(r31)
	  b         .loc_0x43C

	.loc_0x3C0:
	  lwz       r0, -0x6E38(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x3E8
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x3FF8
	  li        r4, 0x89
	  addi      r5, r5, 0x3FEC
	  crclr     6, 0x6
	  bl        -0x362230

	.loc_0x3E8:
	  lwz       r3, -0x6E38(r13)
	  li        r4, 0x2817
	  li        r5, 0
	  lwz       r3, 0x18(r3)
	  bl        -0x4CF14
	  cmplwi    r3, 0
	  beq-      .loc_0x420
	  lwz       r12, 0x10(r3)
	  li        r4, 0
	  lfs       f1, 0xC84(r2)
	  li        r5, 0
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x420:
	  lfs       f0, 0xC88(r2)
	  li        r0, 0
	  stfs      f0, 0x34(r31)
	  lwz       r3, -0x667C(r13)
	  addi      r3, r3, 0x1
	  stw       r3, -0x667C(r13)
	  stw       r0, 0x24(r31)

	.loc_0x43C:
	  addi      r31, r31, 0x24
	  addi      r30, r30, 0x1

	.loc_0x444:
	  lwz       r0, 0x72C(r29)
	  cmpw      r30, r0
	  blt+      .loc_0x70
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00019C
 */
void Morimura::TChallengePiki::draw(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void setGoalPos__Q28Morimura14TChallengePikiFR10Vector2<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void Morimura::TChallengePiki::isDemoEnd(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
Morimura::TChallengeDoping::TChallengeDoping(J2DPane*, J2DPane*, J2DPane*,
                                             J2DPane*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void Morimura::TChallengeDoping::setLevel(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000120
 */
void Morimura::TChallengeDoping::update(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000110
 */
Morimura::TChallengePanel::TChallengePanel(J2DPictureEx*, J2DPane*, J2DPane*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void Morimura::TChallengePanel::stateInitialize(JKRArchive*, int, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void Morimura::TChallengePanel::changeState(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00016C
 */
void Morimura::TChallengePanel::addAlpha(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void Morimura::TChallengePanel::decAlpha(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void Morimura::TChallengePanel::alphaUpdate(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void Morimura::TChallengePanel::canSelect(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8038C8F8
 * Size:	0003D0
 */
void Morimura::TChallengePanel::update(int, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stfd      f31, 0x20(r1)
	  psq_st    f31,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  rlwinm.   r0,r5,0,24,31
	  mr        r31, r3
	  beq-      .loc_0x2C
	  lfs       f0, 0xC28(r2)
	  stfs      f0, 0x34(r31)

	.loc_0x2C:
	  lfs       f2, 0x34(r31)
	  lfs       f1, -0x7A20(r13)
	  lfs       f0, 0xC5C(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x34(r31)
	  lfs       f1, 0x34(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x54
	  fsubs     f0, f1, f0
	  stfs      f0, 0x34(r31)

	.loc_0x54:
	  lis       r3, 0x6666
	  lwz       r8, 0x30(r31)
	  addi      r0, r3, 0x6667
	  mulhw     r3, r0, r4
	  cmpw      r4, r8
	  srawi     r6, r3, 0x1
	  srawi     r3, r3, 0x1
	  mulhw     r0, r0, r8
	  rlwinm    r7,r6,1,31,31
	  rlwinm    r5,r3,1,31,31
	  add       r6, r6, r7
	  add       r7, r3, r5
	  srawi     r3, r0, 0x1
	  rlwinm    r5,r3,1,31,31
	  srawi     r0, r0, 0x1
	  add       r5, r3, r5
	  mulli     r6, r6, 0x5
	  rlwinm    r3,r0,1,31,31
	  add       r9, r0, r3
	  mulli     r0, r5, 0x5
	  sub       r3, r4, r6
	  sub       r0, r8, r0
	  beq-      .loc_0x230
	  cmpw      r3, r0
	  bne-      .loc_0x160
	  cmpw      r7, r9
	  lfs       f3, 0xC90(r2)
	  bge-      .loc_0xC8
	  lfs       f3, 0xC40(r2)

	.loc_0xC8:
	  lfs       f1, 0x34(r31)
	  lfs       f0, 0xC28(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x104
	  lfs       f0, 0xC64(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x128

	.loc_0x104:
	  lfs       f0, 0xC68(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x128:
	  fabs      f1, f0
	  lfs       f0, -0x7A24(r13)
	  lfs       f2, 0x2C(r31)
	  fmuls     f3, f0, f3
	  lfs       f4, 0xCA8(r2)
	  frsp      f1, f1
	  lfs       f0, 0xCAC(r2)
	  fmsubs    f1, f3, f1, f2
	  fmadds    f1, f4, f1, f2
	  stfs      f1, 0x2C(r31)
	  lfs       f1, 0x28(r31)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x28(r31)
	  b         .loc_0x24C

	.loc_0x160:
	  cmpw      r7, r9
	  bne-      .loc_0x210
	  cmpw      r3, r0
	  lfs       f3, 0xC90(r2)
	  bge-      .loc_0x178
	  lfs       f3, 0xC40(r2)

	.loc_0x178:
	  lfs       f1, 0x34(r31)
	  lfs       f0, 0xC28(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1B4
	  lfs       f0, 0xC64(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x1D8

	.loc_0x1B4:
	  lfs       f0, 0xC68(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x1D8:
	  fabs      f1, f0
	  lfs       f0, -0x7A24(r13)
	  lfs       f2, 0x28(r31)
	  fmuls     f3, f0, f3
	  lfs       f4, 0xCA8(r2)
	  frsp      f1, f1
	  lfs       f0, 0xCAC(r2)
	  fmsubs    f1, f3, f1, f2
	  fmadds    f1, f4, f1, f2
	  stfs      f1, 0x28(r31)
	  lfs       f1, 0x2C(r31)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x2C(r31)
	  b         .loc_0x24C

	.loc_0x210:
	  lfs       f0, 0x28(r31)
	  lfs       f1, 0xCAC(r2)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x28(r31)
	  lfs       f0, 0x2C(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x2C(r31)
	  b         .loc_0x24C

	.loc_0x230:
	  lfs       f0, 0x28(r31)
	  lfs       f1, 0xCAC(r2)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x28(r31)
	  lfs       f0, 0x2C(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x2C(r31)

	.loc_0x24C:
	  lwz       r3, 0x10(r31)
	  bl        -0x63BC4
	  lwz       r3, 0x4(r31)
	  fmr       f31, f1
	  lfs       f1, 0x28(r31)
	  lfs       f0, 0xD4(r3)
	  lfs       f3, 0xD8(r3)
	  lfs       f2, 0x2C(r31)
	  fadds     f0, f1, f0
	  fadds     f1, f2, f3
	  stfs      f0, 0xD4(r3)
	  stfs      f1, 0xD8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x4(r31)
	  li        r4, 0x4
	  bl        -0x353ED0
	  lwz       r3, 0x4(r31)
	  lfs       f2, 0x14(r31)
	  lfs       f0, 0xCC(r3)
	  lfs       f1, 0xD0(r3)
	  fmuls     f0, f31, f0
	  fmuls     f1, f31, f1
	  fmuls     f0, f2, f0
	  fmuls     f1, f2, f1
	  stfs      f0, 0xCC(r3)
	  stfs      f1, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r31)
	  lfs       f1, 0x28(r31)
	  lfs       f0, 0xD4(r3)
	  lfs       f3, 0xD8(r3)
	  lfs       f2, 0x2C(r31)
	  fadds     f0, f1, f0
	  fadds     f1, f2, f3
	  stfs      f0, 0xD4(r3)
	  stfs      f1, 0xD8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r31)
	  li        r4, 0x4
	  bl        -0x353F48
	  lwz       r3, 0x8(r31)
	  lfs       f0, 0xCC(r3)
	  lfs       f2, 0xD0(r3)
	  fmuls     f1, f31, f0
	  fmuls     f0, f31, f2
	  stfs      f1, 0xCC(r3)
	  stfs      f0, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r31)
	  lfs       f1, 0x28(r31)
	  lfs       f0, 0xD4(r3)
	  lfs       f3, 0xD8(r3)
	  lfs       f2, 0x2C(r31)
	  fadds     f0, f1, f0
	  fadds     f1, f2, f3
	  stfs      f0, 0xD4(r3)
	  stfs      f1, 0xD8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r31)
	  li        r4, 0x4
	  bl        -0x353FB4
	  lwz       r3, 0xC(r31)
	  lfs       f2, 0x14(r31)
	  lfs       f0, 0xCC(r3)
	  lfs       f1, 0xD0(r3)
	  fmuls     f0, f31, f0
	  fmuls     f1, f31, f1
	  fmuls     f0, f2, f0
	  fmuls     f1, f2, f1
	  stfs      f0, 0xCC(r3)
	  stfs      f1, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	........
 * Size:	000034
 */
void Morimura::TChallengePanel::startScaleUp(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8038CCC8
 * Size:	0000A0
 */
Morimura::TChallengeScreen::TChallengeScreen(JKRArchive*, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  bl        0x146CC
	  lis       r3, 0x804E
	  li        r0, 0
	  addi      r3, r3, 0x5188
	  stw       r3, 0x0(r31)
	  stw       r0, 0x18(r31)
	  stw       r0, 0x20(r31)
	  stb       r0, 0x28(r31)
	  bl        -0x2C375C
	  xoris     r0, r3, 0x8000
	  lis       r4, 0x4330
	  stw       r0, 0xC(r1)
	  mr        r3, r31
	  lha       r0, -0x7A30(r13)
	  stw       r4, 0x8(r1)
	  lfd       f2, 0xC50(r2)
	  xoris     r0, r0, 0x8000
	  lfd       f1, 0x8(r1)
	  lfs       f0, 0xC30(r2)
	  fsubs     f1, f1, f2
	  stw       r0, 0x14(r1)
	  stw       r4, 0x10(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  stw       r0, 0x24(r31)
	  lwz       r31, 0x2C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038CD68
 * Size:	0003C0
 */
void Morimura::TChallengeScreen::create(char const*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  li        r3, 0x148
	  stw       r29, 0x34(r1)
	  mr        r29, r5
	  bl        -0x368EEC
	  mr.       r0, r3
	  beq-      .loc_0x3C
	  bl        0xA8010
	  mr        r0, r3

	.loc_0x3C:
	  stw       r0, 0x8(r30)
	  mr        r4, r31
	  mr        r5, r29
	  lwz       r3, 0x8(r30)
	  lwz       r6, 0xC(r30)
	  bl        -0x34D794
	  li        r3, 0x2C
	  bl        -0x368F1C
	  mr.       r31, r3
	  beq-      .loc_0xA8
	  bl        0x845C4
	  lis       r3, 0x804D
	  lis       r4, 0x804D
	  addi      r0, r3, 0x7B0C
	  lis       r3, 0x804E
	  stw       r0, 0x0(r31)
	  li        r5, 0
	  addi      r4, r4, 0x7F2C
	  addi      r0, r3, 0x58A4
	  stw       r5, 0x18(r31)
	  lfs       f0, 0xC28(r2)
	  stw       r4, 0x0(r31)
	  stw       r0, 0x0(r31)
	  stfs      f0, 0x1C(r31)
	  stfs      f0, 0x20(r31)
	  stfs      f0, 0x24(r31)
	  stfs      f0, 0x28(r31)

	.loc_0xA8:
	  lfs       f0, 0xCB4(r2)
	  lis       r4, 0x7074
	  lfs       f1, 0xC7C(r2)
	  lis       r3, 0x54
	  stfs      f0, 0x18(r1)
	  addi      r6, r4, 0x6933
	  lfs       f0, 0xCB8(r2)
	  addi      r5, r3, 0x6D61
	  stfs      f1, 0x1C(r1)
	  lwz       r0, 0x18(r1)
	  stfs      f0, 0x20(r1)
	  lfs       f0, 0xCBC(r2)
	  stw       r0, 0x1C(r31)
	  lwz       r0, 0x1C(r1)
	  stfs      f0, 0x24(r1)
	  lwz       r3, 0x20(r1)
	  stw       r0, 0x20(r31)
	  lwz       r0, 0x24(r1)
	  stw       r3, 0x24(r31)
	  stw       r0, 0x28(r31)
	  lwz       r3, 0x8(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0x130
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x3FD4
	  li        r4, 0x238
	  addi      r5, r5, 0x3FEC
	  crclr     6, 0x6
	  bl        -0x362854

	.loc_0x130:
	  lis       r5, 0x7074
	  lis       r4, 0x54
	  lwz       r3, 0x8(r30)
	  mr        r7, r31
	  addi      r6, r5, 0x6933
	  addi      r5, r4, 0x6D61
	  bl        0xA7C74
	  li        r3, 0x48
	  bl        -0x369014
	  mr.       r31, r3
	  beq-      .loc_0x164
	  bl        -0x838B0
	  mr        r31, r3

	.loc_0x164:
	  lwz       r3, 0x8(r30)
	  lis       r4, 0x7965
	  addi      r6, r4, 0x6C32
	  li        r5, 0x54
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0x1A8
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x3FD4
	  li        r4, 0x240
	  addi      r5, r5, 0x3FEC
	  crclr     6, 0x6
	  bl        -0x3628CC

	.loc_0x1A8:
	  lis       r4, 0x7965
	  lwz       r3, 0x8(r30)
	  mr        r7, r31
	  li        r5, 0x54
	  addi      r6, r4, 0x6C32
	  bl        0xA7C00
	  li        r3, 0x48
	  bl        -0x369088
	  mr.       r31, r3
	  beq-      .loc_0x1D8
	  bl        -0x83924
	  mr        r31, r3

	.loc_0x1D8:
	  lwz       r3, 0x8(r30)
	  lis       r4, 0x7965
	  addi      r6, r4, 0x6C31
	  li        r5, 0x54
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0x21C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x3FD4
	  li        r4, 0x245
	  addi      r5, r5, 0x3FEC
	  crclr     6, 0x6
	  bl        -0x362940

	.loc_0x21C:
	  lis       r4, 0x7965
	  lwz       r3, 0x8(r30)
	  mr        r7, r31
	  li        r5, 0x54
	  addi      r6, r4, 0x6C31
	  bl        0xA7B8C
	  li        r3, 0x2C
	  bl        -0x3690FC
	  mr.       r31, r3
	  beq-      .loc_0x288
	  bl        0x843E4
	  lis       r3, 0x804D
	  lis       r4, 0x804D
	  addi      r0, r3, 0x7B0C
	  lis       r3, 0x804E
	  stw       r0, 0x0(r31)
	  li        r5, 0
	  addi      r4, r4, 0x7F2C
	  addi      r0, r3, 0x58A4
	  stw       r5, 0x18(r31)
	  lfs       f0, 0xC28(r2)
	  stw       r4, 0x0(r31)
	  stw       r0, 0x0(r31)
	  stfs      f0, 0x1C(r31)
	  stfs      f0, 0x20(r31)
	  stfs      f0, 0x24(r31)
	  stfs      f0, 0x28(r31)

	.loc_0x288:
	  lfs       f2, 0xC28(r2)
	  lis       r3, 0x7965
	  lfs       f1, 0xCC0(r2)
	  mr        r7, r31
	  stfs      f2, 0x8(r1)
	  addi      r6, r3, 0x6C31
	  lfs       f0, 0xCC4(r2)
	  li        r5, 0x54
	  stfs      f2, 0xC(r1)
	  lwz       r3, 0x8(r1)
	  stfs      f1, 0x10(r1)
	  lwz       r0, 0xC(r1)
	  stw       r3, 0x1C(r31)
	  lwz       r3, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  stw       r0, 0x20(r31)
	  lwz       r0, 0x14(r1)
	  stw       r3, 0x24(r31)
	  stw       r0, 0x28(r31)
	  lwz       r3, 0x8(r30)
	  bl        0xA7AE4
	  lwz       r3, 0x8(r30)
	  lis       r4, 0x7965
	  addi      r6, r4, 0x6C31
	  li        r5, 0x54
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  lwz       r3, 0x8(r30)
	  lis       r4, 0x7965
	  li        r5, 0x54
	  lwz       r12, 0x0(r3)
	  mr        r31, r0
	  addi      r6, r4, 0x6C32
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  mr        r3, r31
	  mr        r29, r0
	  bl        -0x353FB8
	  cmplwi    r3, 0
	  beq-      .loc_0x34C
	  mr        r3, r31
	  bl        -0x353FC8
	  mr        r4, r31
	  bl        -0x35587C

	.loc_0x34C:
	  mr        r3, r29
	  bl        -0x353FD8
	  cmplwi    r3, 0
	  beq-      .loc_0x36C
	  mr        r3, r29
	  bl        -0x353FE8
	  mr        r4, r29
	  bl        -0x35589C

	.loc_0x36C:
	  lwz       r3, 0x8(r30)
	  bl        -0x832D8
	  lwz       r3, 0x8(r30)
	  mr        r4, r29
	  bl        -0x355A20
	  lwz       r3, 0x8(r30)
	  mr        r4, r31
	  bl        -0x355A2C
	  lwz       r0, 0x10(r30)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x369150
	  stw       r3, 0x4(r30)
	  lwz       r3, 0x8(r30)
	  bl        -0x89DF4
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038D128
 * Size:	0000D8
 */
void Morimura::TChallengeScreen::createAnimPane(char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0xA4(r1)
	  li        r0, 0x10
	  addi      r5, r5, 0x4008
	  addi      r6, r1, 0x4
	  stmw      r27, 0x8C(r1)
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
	  li        r0, 0xF
	  stw       r0, 0x18(r30)
	  lwz       r0, 0x18(r30)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x3691D0
	  stw       r3, 0x1C(r30)
	  addi      r28, r1, 0x8
	  li        r27, 0
	  li        r29, 0
	  b         .loc_0xB8

	.loc_0x6C:
	  li        r3, 0x44
	  bl        -0x3692F4
	  mr.       r0, r3
	  beq-      .loc_0x84
	  bl        -0x8802C
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
	  bl        -0x87FB8
	  addi      r29, r29, 0x4
	  addi      r28, r28, 0x8
	  addi      r27, r27, 0x1

	.loc_0xB8:
	  lwz       r0, 0x18(r30)
	  cmpw      r27, r0
	  blt+      .loc_0x6C
	  lmw       r27, 0x8C(r1)
	  lwz       r0, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038D200
 * Size:	00018C
 */
void Morimura::TChallengeScreen::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  lwz       r3, 0x8(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x170
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  li        r29, 0
	  li        r30, 0
	  b         .loc_0x84

	.loc_0x44:
	  cmpwi     r29, 0x1
	  beq-      .loc_0x5C
	  lwz       r3, 0x4(r31)
	  lwzx      r3, r3, r30
	  bl        -0x88444
	  b         .loc_0x7C

	.loc_0x5C:
	  lwz       r3, 0x4(r31)
	  lwz       r4, 0x0(r3)
	  lwzx      r3, r3, r30
	  lfs       f0, 0x18(r4)
	  stfs      f0, 0x18(r3)
	  lwz       r3, 0x4(r31)
	  lwzx      r3, r3, r30
	  bl        -0x88468

	.loc_0x7C:
	  addi      r30, r30, 0x4
	  addi      r29, r29, 0x1

	.loc_0x84:
	  lwz       r0, 0x10(r31)
	  cmpw      r29, r0
	  blt+      .loc_0x44
	  lbz       r0, 0x28(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x154
	  lwz       r3, 0x20(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x20(r31)
	  lwz       r3, 0x20(r31)
	  lwz       r0, 0x24(r31)
	  cmpw      r3, r0
	  ble-      .loc_0x154
	  li        r4, 0
	  lfs       f0, 0xC28(r2)
	  stw       r4, 0x20(r31)
	  li        r5, 0
	  b         .loc_0xE0

	.loc_0xCC:
	  lwz       r3, 0x1C(r31)
	  addi      r5, r5, 0x1
	  lwzx      r3, r3, r4
	  addi      r4, r4, 0x4
	  stfs      f0, 0x18(r3)

	.loc_0xE0:
	  lwz       r0, 0x18(r31)
	  cmpw      r5, r0
	  blt+      .loc_0xCC
	  li        r0, 0x1
	  stb       r0, 0x28(r31)
	  bl        -0x2C3D54
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0xC(r1)
	  lha       r0, -0x7A30(r13)
	  stw       r4, 0x8(r1)
	  lfd       f3, 0xC50(r2)
	  xoris     r0, r0, 0x8000
	  lfd       f1, 0x8(r1)
	  lfs       f0, 0xC30(r2)
	  fsubs     f2, f1, f3
	  stw       r0, 0x14(r1)
	  lfs       f1, 0xCAC(r2)
	  stw       r4, 0x10(r1)
	  fdivs     f4, f2, f0
	  lfs       f0, 0xC34(r2)
	  lfd       f2, 0x10(r1)
	  fsubs     f2, f2, f3
	  fmadds    f0, f1, f4, f0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  stw       r0, 0x24(r31)

	.loc_0x154:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x8(r31)
	  bl        -0x34C840

	.loc_0x170:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038D38C
 * Size:	0000B0
 */
void Morimura::TChallengeScreen::updateBckPane(void)
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
	  stw       r28, 0x10(r1)
	  li        r30, 0
	  lfs       f31, 0xCC8(r2)
	  mr        r28, r3
	  li        r29, 0
	  mr        r31, r30
	  b         .loc_0x7C

	.loc_0x3C:
	  lwz       r3, 0x1C(r28)
	  lwzx      r3, r3, r30
	  bl        -0x885C0
	  lwz       r3, 0x1C(r28)
	  lwzx      r3, r3, r30
	  lfs       f0, 0x18(r3)
	  fcmpo     cr0, f0, f31
	  cror      2, 0x1, 0x2
	  beq-      .loc_0x6C
	  lbz       r0, 0x28(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x74

	.loc_0x6C:
	  stfs      f31, 0x18(r3)
	  stb       r31, 0x28(r28)

	.loc_0x74:
	  addi      r30, r30, 0x4
	  addi      r29, r29, 0x1

	.loc_0x7C:
	  lwz       r0, 0x18(r28)
	  cmpw      r29, r0
	  blt+      .loc_0x3C
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038D43C
 * Size:	000020
 */
void Morimura::TChallengeScreen::isRandAnimStart(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x1C(r3)
	  lfs       f1, 0xC6C(r2)
	  lwz       r3, 0x0(r3)
	  lfs       f0, 0x18(r3)
	  fcmpu     cr0, f1, f0
	  mfcr      r0
	  rlwinm    r3,r0,3,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038D45C
 * Size:	000128
 */
Morimura::TChallengePlayModeScreen::TChallengePlayModeScreen(JKRArchive*, int)
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
	  stfd      f29, 0x30(r1)
	  psq_st    f29,0x38(r1),0,0
	  stmw      r27, 0x1C(r1)
	  mr        r27, r3
	  bl        0x13F20
	  lis       r3, 0x804E
	  li        r30, 0
	  addi      r0, r3, 0x5174
	  lfs       f1, 0xC28(r2)
	  stw       r0, 0x0(r27)
	  mr        r29, r27
	  lfs       f0, 0xCCC(r2)
	  li        r28, 0
	  stw       r30, 0x20(r27)
	  lis       r31, 0x4330
	  lfd       f29, 0xC50(r2)
	  stw       r30, 0x2C(r27)
	  lfs       f30, 0xC30(r2)
	  stw       r30, 0x54(r27)
	  lfs       f31, 0xC5C(r2)
	  stw       r30, 0x58(r27)
	  stw       r30, 0x5C(r27)
	  stw       r30, 0x80(r27)
	  stb       r30, 0x84(r27)
	  stfs      f1, 0x88(r27)
	  stfs      f1, 0x8C(r27)
	  stfs      f1, 0x90(r27)
	  stfs      f0, 0x94(r27)
	  stw       r30, 0x18(r27)
	  stw       r30, 0x3C(r27)
	  stw       r30, 0x24(r27)
	  stfs      f1, 0x98(r27)
	  stw       r30, 0x1C(r27)
	  stw       r30, 0x40(r27)
	  stw       r30, 0x28(r27)
	  stfs      f1, 0x9C(r27)

	.loc_0xAC:
	  stw       r30, 0x30(r29)
	  bl        -0x2C3F6C
	  xoris     r0, r3, 0x8000
	  addi      r28, r28, 0x1
	  stw       r0, 0xC(r1)
	  cmpwi     r28, 0x3
	  stw       r31, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f29
	  fdivs     f0, f0, f30
	  fmuls     f0, f31, f0
	  stfs      f0, 0xA0(r29)
	  addi      r29, r29, 0x4
	  blt+      .loc_0xAC
	  li        r0, 0
	  mr        r3, r27
	  stw       r0, 0x44(r27)
	  stw       r0, 0x48(r27)
	  stw       r0, 0x4C(r27)
	  stw       r0, 0x50(r27)
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  psq_l     f29,0x38(r1),0,0
	  lfd       f29, 0x30(r1)
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038D584
 * Size:	000598
 */
void Morimura::TChallengePlayModeScreen::create(char const*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r6, 0x8049
	  stw       r0, 0x44(r1)
	  stmw      r27, 0x2C(r1)
	  mr        r30, r3
	  addi      r31, r6, 0x3FC0
	  bl        0x13E30
	  lwz       r3, 0x8(r30)
	  lis       r4, 0x696C
	  addi      r6, r4, 0x3030
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lis       r4, 0x6972
	  stb       r0, 0xB0(r3)
	  addi      r6, r4, 0x3030
	  li        r5, 0
	  lwz       r3, 0x8(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lis       r4, 0x696C
	  stb       r0, 0xB0(r3)
	  addi      r6, r4, 0x3031
	  li        r5, 0
	  lwz       r3, 0x8(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lis       r4, 0x6972
	  stb       r0, 0xB0(r3)
	  addi      r6, r4, 0x3031
	  li        r5, 0
	  lwz       r3, 0x8(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0xB0(r3)
	  li        r3, 0x1C
	  bl        -0x3697A4
	  cmplwi    r3, 0
	  beq-      .loc_0x154
	  lis       r5, 0x804C
	  lis       r4, 0x804C
	  addi      r0, r5, 0x14F0
	  lis       r6, 0x804A
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x14D8
	  lis       r5, 0x804E
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  li        r10, 0
	  addi      r9, r5, 0x7420
	  addi      r7, r4, 0x73CC
	  stb       r10, 0x4(r3)
	  lis       r4, 0x804E
	  addi      r4, r4, 0x7648
	  subi      r0, r6, 0x1D84
	  stb       r10, 0x5(r3)
	  addi      r8, r9, 0x18
	  addi      r6, r7, 0x18
	  addi      r5, r30, 0x68
	  stw       r0, 0x8(r3)
	  addi      r0, r4, 0x18
	  lfs       f0, 0xC90(r2)
	  stw       r9, 0x0(r3)
	  stw       r8, 0x8(r3)
	  sth       r10, 0xC(r3)
	  stw       r10, 0x10(r3)
	  stw       r7, 0x0(r3)
	  stw       r6, 0x8(r3)
	  stw       r5, 0x14(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x8(r3)
	  stfs      f0, 0x18(r3)

	.loc_0x154:
	  stw       r3, 0x5C(r30)
	  li        r3, 0x1C
	  bl        -0x36983C
	  cmplwi    r3, 0
	  beq-      .loc_0x1EC
	  lis       r5, 0x804C
	  lis       r4, 0x804C
	  addi      r0, r5, 0x14F0
	  lis       r6, 0x804A
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x14D8
	  lis       r5, 0x804E
	  lis       r4, 0x804E
	  stw       r0, 0x0(r3)
	  li        r10, 0
	  addi      r9, r5, 0x7420
	  addi      r7, r4, 0x73CC
	  stb       r10, 0x4(r3)
	  lis       r4, 0x804E
	  addi      r4, r4, 0x7648
	  subi      r0, r6, 0x1D84
	  stb       r10, 0x5(r3)
	  addi      r8, r9, 0x18
	  addi      r6, r7, 0x18
	  addi      r5, r30, 0x60
	  stw       r0, 0x8(r3)
	  addi      r0, r4, 0x18
	  lfs       f0, 0xC90(r2)
	  stw       r9, 0x0(r3)
	  stw       r8, 0x8(r3)
	  sth       r10, 0xC(r3)
	  stw       r10, 0x10(r3)
	  stw       r7, 0x0(r3)
	  stw       r6, 0x8(r3)
	  stw       r5, 0x14(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x8(r3)
	  stfs      f0, 0x18(r3)

	.loc_0x1EC:
	  stw       r3, 0x58(r30)
	  lis       r3, 0x755F
	  addi      r6, r3, 0x3031
	  li        r5, 0x6E
	  lwz       r3, 0x8(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x18(r30)
	  lwz       r0, 0x18(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x234
	  addi      r3, r31, 0x14
	  addi      r5, r31, 0x2C
	  li        r4, 0x2FC
	  crclr     6, 0x6
	  bl        -0x363174

	.loc_0x234:
	  lwz       r3, 0x8(r30)
	  lis       r4, 0x755F
	  addi      r6, r4, 0x3032
	  li        r5, 0x6E
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x1C(r30)
	  lwz       r0, 0x1C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x278
	  addi      r3, r31, 0x14
	  addi      r5, r31, 0x2C
	  li        r4, 0x2FF
	  crclr     6, 0x6
	  bl        -0x3631B8

	.loc_0x278:
	  li        r28, 0
	  mr        r29, r30

	.loc_0x280:
	  li        r3, 0x1C
	  bl        -0x369964
	  mr.       r0, r3
	  beq-      .loc_0x298
	  bl        -0x64A10
	  mr        r0, r3

	.loc_0x298:
	  addi      r28, r28, 0x1
	  stw       r0, 0x3C(r29)
	  cmpwi     r28, 0x2
	  addi      r29, r29, 0x4
	  blt+      .loc_0x280
	  lis       r5, 0x6B6F
	  lis       r4, 0x6675
	  lwz       r3, 0x8(r30)
	  addi      r6, r5, 0x3030
	  addi      r5, r4, 0x7269
	  bl        -0x635D4
	  stw       r3, 0x54(r30)
	  lwz       r0, 0x54(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x2E8
	  addi      r3, r31, 0x14
	  addi      r5, r31, 0x2C
	  li        r4, 0x308
	  crclr     6, 0x6
	  bl        -0x363228

	.loc_0x2E8:
	  lwz       r3, 0x54(r30)
	  bl        -0x63958
	  lfd       f3, 0xC8(r31)
	  mr        r28, r30
	  lfd       f2, 0xD0(r31)
	  addi      r29, r1, 0x8
	  lfd       f1, 0xD8(r31)
	  li        r27, 0
	  lfd       f0, 0xE0(r31)
	  stfd      f3, 0x8(r1)
	  stfd      f2, 0x10(r1)
	  stfd      f1, 0x18(r1)
	  stfd      f0, 0x20(r1)

	.loc_0x31C:
	  cmpwi     r27, 0
	  bne-      .loc_0x340
	  lwz       r3, 0xC(r30)
	  lwz       r4, 0x8(r30)
	  lwz       r5, 0x0(r29)
	  lwz       r6, 0x4(r29)
	  bl        -0x84E90
	  stw       r3, 0x44(r28)
	  b         .loc_0x37C

	.loc_0x340:
	  cmpwi     r27, 0x3
	  bne-      .loc_0x364
	  lwz       r3, 0xC(r30)
	  lwz       r4, 0x8(r30)
	  lwz       r5, 0x0(r29)
	  lwz       r6, 0x4(r29)
	  bl        -0x85124
	  stw       r3, 0x44(r28)
	  b         .loc_0x37C

	.loc_0x364:
	  lwz       r3, 0xC(r30)
	  lwz       r4, 0x8(r30)
	  lwz       r5, 0x0(r29)
	  lwz       r6, 0x4(r29)
	  bl        -0x8500C
	  stw       r3, 0x44(r28)

	.loc_0x37C:
	  lwz       r0, 0x44(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x39C
	  addi      r3, r31, 0x14
	  addi      r5, r31, 0x2C
	  li        r4, 0x312
	  crclr     6, 0x6
	  bl        -0x3632DC

	.loc_0x39C:
	  lwz       r3, 0x44(r28)
	  bl        -0x844E8
	  addi      r27, r27, 0x1
	  addi      r28, r28, 0x4
	  cmpwi     r27, 0x4
	  addi      r29, r29, 0x8
	  blt+      .loc_0x31C
	  lfs       f1, 0xC90(r2)
	  lis       r4, 0x7269
	  lfs       f0, 0x88(r30)
	  lis       r3, 0x50
	  lwz       r7, 0x44(r30)
	  addi      r6, r4, 0x6D61
	  fsubs     f0, f1, f0
	  addi      r5, r3, 0x316F
	  stfs      f0, 0x6C(r7)
	  lfs       f0, 0x88(r30)
	  lwz       r3, 0x50(r30)
	  stfs      f0, 0x6C(r3)
	  lwz       r3, 0x8(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r30)
	  lwz       r0, 0x24(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x420
	  addi      r3, r31, 0x14
	  addi      r5, r31, 0x2C
	  li        r4, 0x31B
	  crclr     6, 0x6
	  bl        -0x363360

	.loc_0x420:
	  lwz       r3, 0x8(r30)
	  lis       r5, 0x7269
	  lis       r4, 0x50
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x5F6C
	  addi      r5, r4, 0x316F
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x30(r30)
	  lwz       r0, 0x30(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x468
	  addi      r3, r31, 0x14
	  addi      r5, r31, 0x2C
	  li        r4, 0x31D
	  crclr     6, 0x6
	  bl        -0x3633A8

	.loc_0x468:
	  lwz       r3, 0x8(r30)
	  lis       r5, 0x7269
	  lis       r4, 0x50
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x6D61
	  addi      r5, r4, 0x326F
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x28(r30)
	  lwz       r0, 0x28(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x4B0
	  addi      r3, r31, 0x14
	  addi      r5, r31, 0x2C
	  li        r4, 0x320
	  crclr     6, 0x6
	  bl        -0x3633F0

	.loc_0x4B0:
	  lwz       r3, 0x8(r30)
	  lis       r5, 0x7269
	  lis       r4, 0x50
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x5F6C
	  addi      r5, r4, 0x326F
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r30)
	  lwz       r0, 0x34(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x4F8
	  addi      r3, r31, 0x14
	  addi      r5, r31, 0x2C
	  li        r4, 0x322
	  crclr     6, 0x6
	  bl        -0x363438

	.loc_0x4F8:
	  lwz       r3, 0x8(r30)
	  lis       r4, 0x506C
	  addi      r6, r4, 0x7569
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r30)
	  lwz       r0, 0x2C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x53C
	  addi      r3, r31, 0x14
	  addi      r5, r31, 0x2C
	  li        r4, 0x326
	  crclr     6, 0x6
	  bl        -0x36347C

	.loc_0x53C:
	  lwz       r3, 0x8(r30)
	  lis       r5, 0x7569
	  lis       r4, 0x50
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x5F6C
	  addi      r5, r4, 0x326C
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x38(r30)
	  lwz       r0, 0x38(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x584
	  addi      r3, r31, 0x14
	  addi      r5, r31, 0x2C
	  li        r4, 0x328
	  crclr     6, 0x6
	  bl        -0x3634C4

	.loc_0x584:
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038DB1C
 * Size:	0007FC
 */
void Morimura::TChallengePlayModeScreen::update(void)
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
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  mr        r31, r3
	  lis       r4, 0x696C
	  lwz       r3, 0x8(r3)
	  addi      r6, r4, 0x3030
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8C(r3)
	  lis       r3, 0x6972
	  addi      r6, r3, 0x3030
	  li        r5, 0
	  stfs      f0, 0x70(r31)
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x9C(r3)
	  lis       r3, 0x6972
	  addi      r6, r3, 0x3030
	  li        r5, 0
	  stfs      f0, 0x74(r31)
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8C(r3)
	  lis       r3, 0x6972
	  addi      r6, r3, 0x3031
	  li        r5, 0
	  stfs      f0, 0x78(r31)
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x9C(r3)
	  lfs       f0, 0xC6C(r2)
	  stfs      f1, 0x7C(r31)
	  lfs       f2, 0x70(r31)
	  lfs       f1, 0x60(r31)
	  fsubs     f3, f2, f1
	  fabs      f1, f3
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xF8
	  stfs      f2, 0x60(r31)
	  lfs       f2, 0xC28(r2)
	  b         .loc_0x100

	.loc_0xF8:
	  lfs       f0, 0xC84(r2)
	  fmuls     f2, f3, f0

	.loc_0x100:
	  lfs       f1, 0x60(r31)
	  lfs       f0, 0xC6C(r2)
	  fadds     f1, f1, f2
	  stfs      f1, 0x60(r31)
	  lfs       f2, 0x78(r31)
	  lfs       f1, 0x68(r31)
	  fsubs     f3, f2, f1
	  fabs      f1, f3
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x138
	  stfs      f2, 0x68(r31)
	  lfs       f1, 0xC28(r2)
	  b         .loc_0x140

	.loc_0x138:
	  lfs       f0, 0xC84(r2)
	  fmuls     f1, f3, f0

	.loc_0x140:
	  lfs       f0, 0x68(r31)
	  fadds     f0, f0, f1
	  stfs      f0, 0x68(r31)
	  lbz       r0, -0x7A38(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x1EC
	  lfs       f2, 0x98(r31)
	  lfs       f1, 0xC34(r2)
	  lfs       f0, 0xC90(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x98(r31)
	  lfs       f1, 0x98(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x17C
	  stfs      f0, 0x98(r31)

	.loc_0x17C:
	  lfs       f2, 0x9C(r31)
	  lfs       f1, 0xC34(r2)
	  lfs       f0, 0xC28(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x9C(r31)
	  lfs       f1, 0x9C(r31)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1A0
	  stfs      f0, 0x9C(r31)

	.loc_0x1A0:
	  lfs       f2, 0x74(r31)
	  lfs       f1, 0x6C(r31)
	  lfs       f0, 0xC6C(r2)
	  fsubs     f3, f2, f1
	  fabs      f1, f3
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1CC
	  stfs      f2, 0x6C(r31)
	  lfs       f1, 0xC28(r2)
	  b         .loc_0x1D4

	.loc_0x1CC:
	  lfs       f0, 0xC84(r2)
	  fmuls     f1, f3, f0

	.loc_0x1D4:
	  lfs       f0, 0x6C(r31)
	  fadds     f0, f0, f1
	  stfs      f0, 0x6C(r31)
	  lfs       f0, 0x6C(r31)
	  stfs      f0, 0x64(r31)
	  b         .loc_0x2B0

	.loc_0x1EC:
	  lbz       r0, -0x7A28(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x220
	  lfs       f2, 0x9C(r31)
	  lfs       f1, 0xC34(r2)
	  lfs       f0, 0xC90(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x9C(r31)
	  lfs       f1, 0x9C(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x244
	  stfs      f0, 0x9C(r31)
	  b         .loc_0x244

	.loc_0x220:
	  lfs       f2, 0x9C(r31)
	  lfs       f1, 0xC34(r2)
	  lfs       f0, 0xC28(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x9C(r31)
	  lfs       f1, 0x9C(r31)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x244
	  stfs      f0, 0x9C(r31)

	.loc_0x244:
	  lfs       f2, 0x98(r31)
	  lfs       f1, 0xC34(r2)
	  lfs       f0, 0xC28(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x98(r31)
	  lfs       f1, 0x98(r31)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x268
	  stfs      f0, 0x98(r31)

	.loc_0x268:
	  lfs       f2, 0x7C(r31)
	  lfs       f1, 0x6C(r31)
	  lfs       f0, 0xC6C(r2)
	  fsubs     f3, f2, f1
	  fabs      f1, f3
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x294
	  stfs      f2, 0x6C(r31)
	  lfs       f1, 0xC28(r2)
	  b         .loc_0x29C

	.loc_0x294:
	  lfs       f0, 0xC84(r2)
	  fmuls     f1, f3, f0

	.loc_0x29C:
	  lfs       f0, 0x6C(r31)
	  fadds     f0, f0, f1
	  stfs      f0, 0x6C(r31)
	  lfs       f0, 0x6C(r31)
	  stfs      f0, 0x64(r31)

	.loc_0x2B0:
	  lfs       f31, 0xC90(r2)
	  mr        r30, r31
	  lfs       f30, 0xCD4(r2)
	  li        r29, 0

	.loc_0x2C0:
	  cmpwi     r29, 0
	  lfs       f0, 0xC28(r2)
	  bne-      .loc_0x2D4
	  lfs       f3, 0x98(r31)
	  b         .loc_0x2D8

	.loc_0x2D4:
	  lfs       f3, 0x9C(r31)

	.loc_0x2D8:
	  fcmpu     cr0, f31, f3
	  bne-      .loc_0x378
	  lfs       f2, 0xA0(r30)
	  lfs       f1, 0xCA8(r2)
	  lfs       f0, 0xC5C(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0xA0(r30)
	  lfs       f1, 0xA0(r30)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x308
	  fsubs     f0, f1, f0
	  stfs      f0, 0xA0(r30)

	.loc_0x308:
	  lfs       f2, 0xA0(r30)
	  lfs       f0, 0xC28(r2)
	  lfs       f1, 0xCD0(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x348
	  lfs       f0, 0xC64(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x36C

	.loc_0x348:
	  lfs       f0, 0xC68(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x36C:
	  fmuls     f0, f1, f0
	  fabs      f0, f0
	  frsp      f0, f0

	.loc_0x378:
	  fmsubs    f0, f30, f3, f0
	  lwz       r3, 0x30(r30)
	  lwz       r12, 0x0(r3)
	  fctiwz    f0, f0
	  lwz       r12, 0x24(r12)
	  stfd      f0, 0x10(r1)
	  lwz       r4, 0x14(r1)
	  mtctr     r12
	  bctrl
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r29, 0x3
	  blt+      .loc_0x2C0
	  lwz       r0, 0x80(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x3D8
	  lwz       r3, 0x54(r31)
	  bl        -0x63FC0
	  lfs       f1, 0xCD8(r2)
	  lfs       f0, 0xC28(r2)
	  stfs      f1, 0x94(r31)
	  stfs      f0, 0x8C(r31)
	  stfs      f0, 0x90(r31)
	  b         .loc_0x7D0

	.loc_0x3D8:
	  lwz       r3, 0x8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x7D0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  li        r29, 0
	  li        r30, 0
	  b         .loc_0x414

	.loc_0x400:
	  lwz       r3, 0x4(r31)
	  lwzx      r3, r3, r30
	  bl        -0x89114
	  addi      r30, r30, 0x4
	  addi      r29, r29, 0x1

	.loc_0x414:
	  lwz       r0, 0x10(r31)
	  cmpw      r29, r0
	  blt+      .loc_0x400
	  lwz       r0, 0x80(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x68C
	  bge-      .loc_0x440
	  cmpwi     r0, 0
	  beq-      .loc_0x68C
	  bge-      .loc_0x44C
	  b         .loc_0x68C

	.loc_0x440:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x68C
	  b         .loc_0x644

	.loc_0x44C:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x8C(r31)
	  lfs       f0, 0x54(r3)
	  lfs       f2, 0xC84(r2)
	  fadds     f0, f1, f0
	  stfs      f0, 0x8C(r31)
	  lfs       f1, 0x8C(r31)
	  bl        -0x8B8E8
	  lfs       f0, 0xC90(r2)
	  lfs       f2, 0xCCC(r2)
	  fsubs     f1, f0, f1
	  lfs       f0, 0xC28(r2)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x94(r31)
	  lfs       f1, 0x94(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x68C
	  lwz       r3, -0x6514(r13)
	  lfs       f2, 0x90(r31)
	  lfs       f1, 0x54(r3)
	  lfs       f0, 0xC3C(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x90(r31)
	  lfs       f1, 0x90(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x68C
	  li        r0, 0x2
	  stw       r0, 0x80(r31)
	  lbz       r0, -0x7A38(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x570
	  lwz       r3, 0x8(r31)
	  lis       r4, 0x6972
	  addi      r6, r4, 0x3030
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f30, 0x9C(r3)
	  lis       r4, 0x6972
	  lwz       r3, 0x8(r31)
	  addi      r6, r4, 0x3030
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8C(r3)
	  lis       r3, 0x696C
	  addi      r6, r3, 0x3030
	  li        r5, 0
	  stfs      f0, 0x68(r31)
	  stfs      f30, 0x6C(r31)
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f30, 0x9C(r3)
	  lis       r4, 0x696C
	  lwz       r3, 0x8(r31)
	  addi      r6, r4, 0x3030
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8C(r3)
	  stfs      f0, 0x60(r31)
	  stfs      f30, 0x64(r31)
	  b         .loc_0x610

	.loc_0x570:
	  lwz       r3, 0x8(r31)
	  lis       r4, 0x6972
	  addi      r6, r4, 0x3031
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f30, 0x9C(r3)
	  lis       r4, 0x6972
	  lwz       r3, 0x8(r31)
	  addi      r6, r4, 0x3031
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8C(r3)
	  lis       r3, 0x696C
	  addi      r6, r3, 0x3031
	  li        r5, 0
	  stfs      f0, 0x68(r31)
	  stfs      f30, 0x6C(r31)
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f30, 0x9C(r3)
	  lis       r4, 0x696C
	  lwz       r3, 0x8(r31)
	  addi      r6, r4, 0x3031
	  li        r5, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8C(r3)
	  stfs      f0, 0x60(r31)
	  stfs      f30, 0x64(r31)

	.loc_0x610:
	  lwz       r3, 0x58(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x5C(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x68C

	.loc_0x644:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x8C(r31)
	  lfs       f0, 0x54(r3)
	  lfs       f2, 0xC84(r2)
	  fadds     f0, f1, f0
	  stfs      f0, 0x8C(r31)
	  lfs       f1, 0x8C(r31)
	  bl        -0x8BAE0
	  lfs       f2, 0xCDC(r2)
	  lfs       f0, 0xC84(r2)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x94(r31)
	  lfs       f1, 0x8C(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x68C
	  li        r0, 0
	  stw       r0, 0x80(r31)

	.loc_0x68C:
	  lbz       r0, -0x7A28(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x6C0
	  lwz       r3, 0x1C(r31)
	  li        r4, 0xFF
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xC90(r2)
	  lwz       r3, 0x4C(r31)
	  stfs      f0, 0x6C(r3)
	  b         .loc_0x6E4

	.loc_0x6C0:
	  lwz       r3, 0x1C(r31)
	  li        r4, 0x80
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xC3C(r2)
	  lwz       r3, 0x4C(r31)
	  stfs      f0, 0x6C(r3)

	.loc_0x6E4:
	  lwz       r3, 0x8(r31)
	  bl        -0x34D6D8
	  lbz       r0, 0x84(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x720
	  lfs       f2, 0x88(r31)
	  lfs       f1, 0xCA8(r2)
	  lfs       f0, 0xC90(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x88(r31)
	  lfs       f1, 0x88(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x744
	  stfs      f0, 0x88(r31)
	  b         .loc_0x744

	.loc_0x720:
	  lfs       f2, 0x88(r31)
	  lfs       f1, 0xCA8(r2)
	  lfs       f0, 0xC28(r2)
	  fsubs     f1, f2, f1
	  stfs      f1, 0x88(r31)
	  lfs       f1, 0x88(r31)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x744
	  stfs      f0, 0x88(r31)

	.loc_0x744:
	  lfs       f1, 0xC90(r2)
	  lfs       f0, 0x88(r31)
	  lwz       r3, 0x44(r31)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x6C(r3)
	  lfs       f0, 0x88(r31)
	  lwz       r3, 0x50(r31)
	  stfs      f0, 0x6C(r3)
	  lwz       r0, 0x80(r31)
	  cmpwi     r0, 0x2
	  blt-      .loc_0x7AC
	  li        r29, 0
	  mr        r30, r31

	.loc_0x778:
	  lwz       r3, 0x3C(r30)
	  bl        -0x65314
	  lwz       r3, 0x18(r30)
	  stfs      f1, 0xCC(r3)
	  stfs      f1, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r29, 0x2
	  blt+      .loc_0x778

	.loc_0x7AC:
	  lfs       f3, 0x94(r31)
	  lfs       f2, 0x243C(r2)
	  lfs       f1, 0xC28(r2)
	  lfs       f0, 0x2440(r2)
	  fadds     f2, f3, f2
	  lwz       r3, 0x8(r31)
	  fadds     f0, f1, f0
	  stfs      f2, 0x140(r3)
	  stfs      f0, 0x144(r3)

	.loc_0x7D0:
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038E318
 * Size:	000660
 */
void Morimura::TChallengePlayModeScreen::draw(Graphics&, J2DPerspGraph*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stmw      r24, 0x50(r1)
	  mr        r29, r3
	  mr        r30, r4
	  lwz       r0, 0x80(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x644
	  bl        0x13254
	  addi      r3, r30, 0xBC
	  lwz       r12, 0xBC(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r26, 0x20(r29)
	  lwz       r25, 0x24(r29)
	  lfs       f1, 0x2C(r26)
	  lfs       f0, 0x24(r26)
	  lfs       f31, 0xD0(r25)
	  fsubs     f0, f1, f0
	  lfs       f1, 0xCE0(r2)
	  fmuls     f0, f0, f31
	  fmuls     f1, f1, f0
	  bl        -0x2CC834
	  lfs       f2, 0x28(r26)
	  mr        r28, r3
	  lfs       f1, 0x20(r26)
	  lfs       f0, 0xCC(r25)
	  fsubs     f1, f2, f1
	  lfs       f2, 0xCE0(r2)
	  fmuls     f0, f1, f0
	  fmuls     f1, f2, f0
	  bl        -0x2CC858
	  lfs       f1, 0x2C(r26)
	  subi      r31, r13, 0x6678
	  lfs       f0, 0x24(r26)
	  mr        r27, r3
	  lfs       f4, 0xC90(r2)
	  fsubs     f0, f1, f0
	  lfs       f2, 0x98(r29)
	  lfs       f3, 0xCE0(r2)
	  lfs       f1, 0x4(r31)
	  fsubs     f4, f4, f2
	  fmuls     f2, f0, f31
	  lfs       f0, 0x9C(r25)
	  fmuls     f2, f3, f2
	  fadds     f0, f1, f0
	  fmadds    f1, f4, f2, f0
	  bl        -0x2CC898
	  lfs       f1, -0x6678(r13)
	  mr        r26, r3
	  lfs       f0, 0x8C(r25)
	  fadds     f1, f1, f0
	  bl        -0x2CC8AC
	  mr        r4, r26
	  mr        r5, r27
	  mr        r6, r28
	  bl        -0x2A4C30
	  lwz       r3, 0x20(r29)
	  li        r4, 0
	  lwz       r7, 0x24(r29)
	  li        r5, 0
	  lfs       f3, 0x28(r3)
	  li        r6, 0
	  lfs       f2, 0x20(r3)
	  lfs       f1, 0x2C(r3)
	  lfs       f0, 0x24(r3)
	  fsubs     f3, f3, f2
	  lfs       f2, 0xCC(r7)
	  fsubs     f0, f1, f0
	  lfs       f5, 0xD0(r7)
	  lwz       r12, 0x0(r3)
	  fmuls     f1, f3, f2
	  lfs       f4, 0xCE0(r2)
	  fmuls     f0, f0, f5
	  fmuls     f3, f4, f1
	  lfs       f7, -0x6678(r13)
	  lfs       f6, 0x8C(r7)
	  lfs       f5, 0x4(r31)
	  fmuls     f4, f4, f0
	  lfs       f2, 0x9C(r7)
	  lwz       r12, 0xEC(r12)
	  fadds     f1, f7, f6
	  fadds     f2, f5, f2
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x20(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r25, 0x20(r29)
	  lwz       r24, 0x2C(r29)
	  lfs       f1, 0x2C(r25)
	  lfs       f0, 0x24(r25)
	  lfs       f31, 0xD0(r24)
	  fsubs     f0, f1, f0
	  lfs       f1, 0xCE0(r2)
	  fmuls     f0, f0, f31
	  fmuls     f1, f1, f0
	  bl        -0x2CC968
	  lfs       f2, 0x28(r25)
	  mr        r28, r3
	  lfs       f1, 0x20(r25)
	  lfs       f0, 0xCC(r24)
	  fsubs     f1, f2, f1
	  lfs       f2, 0xCE0(r2)
	  lfs       f3, 0xC6C(r2)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f1, f3, f0
	  bl        -0x2CC994
	  lfs       f1, 0x2C(r25)
	  mr        r27, r3
	  lfs       f0, 0x24(r25)
	  lfs       f4, 0xC90(r2)
	  fsubs     f0, f1, f0
	  lfs       f2, 0x9C(r29)
	  lfs       f3, 0xCE0(r2)
	  lfs       f1, 0x4(r31)
	  fsubs     f4, f4, f2
	  fmuls     f2, f0, f31
	  lfs       f0, 0x9C(r24)
	  fmuls     f2, f3, f2
	  fadds     f0, f1, f0
	  fmadds    f1, f4, f2, f0
	  bl        -0x2CC9D0
	  lfs       f1, -0x6678(r13)
	  mr        r26, r3
	  lfs       f0, 0x8C(r24)
	  fadds     f1, f1, f0
	  bl        -0x2CC9E4
	  mr        r4, r26
	  mr        r5, r27
	  mr        r6, r28
	  bl        -0x2A4D68
	  lwz       r3, 0x20(r29)
	  li        r4, 0
	  lwz       r7, 0x2C(r29)
	  li        r5, 0
	  lfs       f3, 0x28(r3)
	  li        r6, 0
	  lfs       f2, 0x20(r3)
	  lfs       f1, 0x2C(r3)
	  lfs       f0, 0x24(r3)
	  fsubs     f3, f3, f2
	  lfs       f2, 0xCC(r7)
	  fsubs     f0, f1, f0
	  lfs       f5, 0xD0(r7)
	  lwz       r12, 0x0(r3)
	  fmuls     f1, f3, f2
	  lfs       f4, 0xCE0(r2)
	  fmuls     f0, f0, f5
	  fmuls     f3, f4, f1
	  lfs       f7, -0x6678(r13)
	  lfs       f6, 0x8C(r7)
	  lfs       f5, 0x4(r31)
	  fmuls     f4, f4, f0
	  lfs       f2, 0x9C(r7)
	  lwz       r12, 0xEC(r12)
	  fadds     f1, f7, f6
	  fadds     f2, f5, f2
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x20(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0x280
	  li        r6, 0x1E0
	  bl        -0x2A4E00
	  lwz       r3, 0x8(r29)
	  lis       r5, 0x696D
	  lis       r4, 0x5032
	  lwz       r12, 0x0(r3)
	  addi      r6, r5, 0x6146
	  addi      r5, r4, 0x6F72
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r24, r3
	  lwz       r4, 0x1C(r29)
	  lwz       r12, 0x24(r12)
	  lbz       r4, 0xB2(r4)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x28(r24)
	  mr        r4, r24
	  lfs       f0, 0x20(r24)
	  addi      r3, r1, 0x38
	  li        r5, 0x1
	  fsubs     f31, f1, f0
	  bl        -0x35569C
	  mr        r4, r24
	  addi      r3, r1, 0x44
	  li        r5, 0
	  bl        -0x3556AC
	  lfs       f0, 0x44(r1)
	  fneg      f3, f31
	  lwz       r12, 0x0(r24)
	  mr        r3, r24
	  fadds     f1, f0, f31
	  lfs       f2, 0x2C(r24)
	  lfs       f0, 0x24(r24)
	  lwz       r12, 0xEC(r12)
	  li        r4, 0
	  fsubs     f4, f2, f0
	  lfs       f2, 0x3C(r1)
	  li        r5, 0
	  li        r6, 0
	  mtctr     r12
	  bctrl
	  mr        r3, r24
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r24
	  li        r4, 0
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r24, 0x28(r29)
	  lwz       r4, 0x1C(r29)
	  mr        r3, r24
	  lwz       r12, 0x0(r24)
	  lbz       r4, 0xB2(r4)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x28(r24)
	  mr        r4, r24
	  lfs       f0, 0x20(r24)
	  addi      r3, r1, 0x20
	  li        r5, 0x1
	  fsubs     f31, f1, f0
	  bl        -0x355750
	  mr        r4, r24
	  addi      r3, r1, 0x2C
	  li        r5, 0
	  bl        -0x355760
	  lfs       f0, 0x2C(r1)
	  fneg      f3, f31
	  lwz       r12, 0x0(r24)
	  mr        r3, r24
	  fadds     f1, f0, f31
	  lfs       f2, 0x2C(r24)
	  lfs       f0, 0x24(r24)
	  lwz       r12, 0xEC(r12)
	  li        r4, 0
	  fsubs     f4, f2, f0
	  lfs       f2, 0x24(r1)
	  li        r5, 0
	  li        r6, 0
	  mtctr     r12
	  bctrl
	  mr        r3, r24
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r24
	  li        r4, 0
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x34(r29)
	  lwz       r12, 0x0(r3)
	  mr        r24, r3
	  lbz       r4, 0xB2(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x28(r24)
	  mr        r4, r24
	  lfs       f0, 0x20(r24)
	  addi      r3, r1, 0x8
	  li        r5, 0x1
	  fsubs     f31, f1, f0
	  bl        -0x355800
	  mr        r4, r24
	  addi      r3, r1, 0x14
	  li        r5, 0
	  bl        -0x355810
	  lfs       f0, 0x14(r1)
	  fneg      f3, f31
	  lwz       r12, 0x0(r24)
	  mr        r3, r24
	  fadds     f1, f0, f31
	  lfs       f2, 0x2C(r24)
	  lfs       f0, 0x24(r24)
	  lwz       r12, 0xEC(r12)
	  li        r4, 0
	  fsubs     f4, f2, f0
	  lfs       f2, 0xC(r1)
	  li        r5, 0
	  li        r6, 0
	  mtctr     r12
	  bctrl
	  mr        r3, r24
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r24, 0x20(r29)
	  lwz       r25, 0x2C(r29)
	  lfs       f1, 0x2C(r24)
	  lfs       f0, 0x24(r24)
	  lfs       f31, 0xD0(r25)
	  fsubs     f0, f1, f0
	  lfs       f1, 0xCE0(r2)
	  fmuls     f0, f0, f31
	  fmuls     f1, f1, f0
	  bl        -0x2CCCD4
	  lfs       f2, 0x28(r24)
	  mr        r26, r3
	  lfs       f1, 0x20(r24)
	  lfs       f0, 0xCC(r25)
	  fsubs     f1, f2, f1
	  lfs       f2, 0xCE0(r2)
	  lfs       f3, 0xC6C(r2)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fmuls     f1, f3, f0
	  bl        -0x2CCD00
	  lfs       f1, 0x2C(r24)
	  mr        r27, r3
	  lfs       f0, 0x24(r24)
	  lfs       f4, 0xC90(r2)
	  fsubs     f0, f1, f0
	  lfs       f2, 0x9C(r29)
	  lfs       f3, 0xCE0(r2)
	  lfs       f1, 0x4(r31)
	  fsubs     f4, f4, f2
	  fmuls     f2, f0, f31
	  lfs       f0, 0x9C(r25)
	  fmuls     f2, f3, f2
	  fadds     f0, f1, f0
	  fmadds    f1, f4, f2, f0
	  bl        -0x2CCD3C
	  lfs       f1, -0x6678(r13)
	  mr        r28, r3
	  lfs       f0, 0x8C(r25)
	  fadds     f1, f1, f0
	  bl        -0x2CCD50
	  mr        r4, r28
	  mr        r5, r27
	  mr        r6, r26
	  bl        -0x2A50D4
	  lwz       r3, 0x20(r29)
	  li        r4, 0
	  lwz       r7, 0x28(r29)
	  li        r5, 0
	  lfs       f3, 0x28(r3)
	  li        r6, 0
	  lfs       f2, 0x20(r3)
	  lfs       f1, 0x2C(r3)
	  lfs       f0, 0x24(r3)
	  fsubs     f3, f3, f2
	  lfs       f2, 0xCC(r7)
	  fsubs     f0, f1, f0
	  lfs       f5, 0xD0(r7)
	  lwz       r12, 0x0(r3)
	  fmuls     f1, f3, f2
	  lfs       f4, 0xCE0(r2)
	  fmuls     f0, f0, f5
	  fmuls     f3, f4, f1
	  lfs       f7, -0x6678(r13)
	  lfs       f6, 0x8C(r7)
	  lfs       f5, 0x4(r31)
	  fmuls     f4, f4, f0
	  lfs       f2, 0x9C(r7)
	  lwz       r12, 0xEC(r12)
	  fadds     f1, f7, f6
	  fadds     f2, f5, f2
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x20(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0x280
	  li        r6, 0x1E0
	  bl        -0x2A516C
	  addi      r3, r30, 0x190
	  lwz       r12, 0x190(r30)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x644:
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  lmw       r24, 0x50(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000124
 */
void Morimura::TChallengePlayModeScreen::setState(
    (Morimura::TChallengePlayModeScreen::PlayModeScreenState))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void Morimura::TChallengePlayModeScreen::setBlink(float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void Morimura::TChallengePlayModeScreen::reset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void Morimura::TChallengePlayModeScreen::createMetPicture(ResTIMG const*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8038E978
 * Size:	00003C
 */
void Morimura::TChallengeSelectExplanationWindow::create(char const*,
                                                         unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x12A44
	  lfs       f1, 0xCCC(r2)
	  lfs       f0, 0xC28(r2)
	  stfs      f1, 0x1C(r31)
	  stfs      f0, 0x20(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038E9B4
 * Size:	000004
 */
void Morimura::TChallengeSelectExplanationWindow::screenScaleUp(void) { }

/*
 * --INFO--
 * Address:	8038E9B8
 * Size:	00013C
 */
Morimura::TChallengeSelect::TChallengeSelect(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x14(r1)
	  addi      r4, r4, 0x40A8
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x4580C
	  lis       r3, 0x804E
	  li        r5, 0
	  addi      r3, r3, 0x50E0
	  li        r4, 0x1
	  stw       r3, 0x0(r31)
	  addi      r3, r3, 0x10
	  lfs       f1, 0xC28(r2)
	  li        r0, -0x1
	  stw       r3, 0x18(r31)
	  mr        r3, r31
	  lfs       f0, 0xC90(r2)
	  stw       r5, 0x7C(r31)
	  stw       r5, 0x80(r31)
	  stw       r5, 0x84(r31)
	  stw       r5, 0x88(r31)
	  stw       r5, 0x8C(r31)
	  stw       r5, 0x90(r31)
	  stw       r5, 0x94(r31)
	  stw       r5, 0xDC(r31)
	  stw       r5, 0xE8(r31)
	  stw       r5, 0xEC(r31)
	  stw       r5, 0xF0(r31)
	  stw       r5, 0xFC(r31)
	  stw       r5, 0x124(r31)
	  stb       r5, 0x128(r31)
	  stw       r5, 0x12C(r31)
	  stb       r4, 0x134(r31)
	  stb       r5, 0x135(r31)
	  stb       r5, 0x136(r31)
	  stfs      f1, 0x138(r31)
	  stfs      f0, 0x13C(r31)
	  stw       r0, 0x140(r31)
	  stb       r5, 0x144(r31)
	  stfs      f1, 0x148(r31)
	  stfs      f0, 0x14C(r31)
	  stw       r5, -0x6688(r13)
	  stw       r5, -0x6684(r13)
	  stb       r4, -0x7A38(r13)
	  stw       r5, -0x667C(r13)
	  stw       r5, 0x9C(r31)
	  stw       r5, 0xC0(r31)
	  stw       r5, 0x108(r31)
	  stw       r5, 0xA0(r31)
	  stw       r5, 0xC4(r31)
	  stw       r5, 0x10C(r31)
	  stw       r5, 0xA4(r31)
	  stw       r5, 0xC8(r31)
	  stw       r5, 0x110(r31)
	  stw       r5, 0xA8(r31)
	  stw       r5, 0xCC(r31)
	  stw       r5, 0x114(r31)
	  stw       r5, 0xAC(r31)
	  stw       r5, 0xD0(r31)
	  stw       r5, 0x118(r31)
	  stw       r5, 0xB8(r31)
	  stw       r5, 0x100(r31)
	  stw       r5, 0xE0(r31)
	  stw       r5, 0xD4(r31)
	  stw       r5, 0x11C(r31)
	  stw       r5, 0xB0(r31)
	  stw       r5, 0xBC(r31)
	  stw       r5, 0x104(r31)
	  stw       r5, 0xE4(r31)
	  stw       r5, 0xD8(r31)
	  stw       r5, 0x120(r31)
	  stw       r5, 0xB4(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8038EAF4
 * Size:	0000F4
 */
Morimura::TChallengeSelect::~TChallengeSelect(void)
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
	  addi      r3, r3, 0x50E0
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x10
	  stw       r0, 0x18(r30)
	  lwz       r0, -0x666C(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  lwz       r3, 0x90(r30)
	  lwz       r3, 0xC(r3)
	  bl        -0x36B40C
	  lwz       r3, -0x666C(r13)
	  bl        -0x36B590

	.loc_0x54:
	  li        r0, 0
	  cmplwi    r30, 0
	  stw       r0, -0x666C(r13)
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
	  bl        0x82A30
	  addi      r3, r30, 0x18
	  li        r4, 0
	  bl        -0x371B78
	  mr        r3, r30
	  li        r4, 0
	  bl        0x829D0

	.loc_0xC8:
	  extsh.    r0, r31
	  ble-      .loc_0xD8
	  mr        r3, r30
	  bl        -0x36AB14

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
void Morimura::TChallengeSelect::setDebugHeapParent(JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8038EBE8
 * Size:	001B98
 */
void Morimura::TChallengeSelect::doCreate(JKRArchive*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x7A0(r1)
	  mflr      r0
	  stw       r0, 0x7A4(r1)
	  stmw      r21, 0x774(r1)
	  mr        r29, r4
	  lis       r4, 0x8049
	  mr        r31, r3
	  addi      r30, r4, 0x3FC0
	  li        r28, 0
	  stw       r29, 0x78(r3)
	  bl        0xC5398
	  lis       r4, 0x4D52
	  lis       r6, 0x4C45
	  lis       r5, 0x4348
	  mr        r21, r3
	  addi      r4, r4, 0x4D52
	  addi      r6, r6, 0x4354
	  addi      r5, r5, 0x5345
	  bl        -0x7F914
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x64
	  stw       r21, 0x90(r31)
	  lwz       r3, 0x90(r31)
	  lwz       r28, 0x14(r3)
	  b         .loc_0x6C

	.loc_0x64:
	  li        r0, 0x1
	  stb       r0, -0x6760(r13)

	.loc_0x6C:
	  lbz       r0, -0x6760(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x240
	  lwz       r4, -0x6670(r13)
	  cmplwi    r4, 0
	  beq-      .loc_0x1A8
	  lis       r3, 0x10
	  li        r5, 0x1
	  bl        -0x36EDAC
	  cmplwi    r3, 0
	  stw       r3, -0x666C(r13)
	  bne-      .loc_0xB0
	  addi      r3, r30, 0x14
	  addi      r5, r30, 0x2C
	  li        r4, 0x53B
	  crclr     6, 0x6
	  bl        -0x364654

	.loc_0xB0:
	  lwz       r4, -0x666C(r13)
	  li        r3, 0x24
	  li        r5, 0
	  bl        -0x36AD64
	  cmplwi    r3, 0
	  beq-      .loc_0x108
	  lis       r5, 0x804B
	  lis       r4, 0x804C
	  addi      r0, r5, 0x1148
	  li        r5, 0
	  stw       r0, 0x0(r3)
	  addi      r4, r4, 0xE28
	  li        r0, -0x1
	  stw       r5, 0x4(r3)
	  stw       r4, 0x0(r3)
	  stw       r5, 0x8(r3)
	  stw       r5, 0xC(r3)
	  stw       r0, 0x10(r3)
	  stw       r5, 0x14(r3)
	  stw       r5, 0x18(r3)
	  stw       r5, 0x1C(r3)
	  stw       r5, 0x20(r3)

	.loc_0x108:
	  stw       r3, 0x90(r31)
	  li        r3, 0x28
	  lwz       r0, -0x666C(r13)
	  lwz       r4, 0x90(r31)
	  stw       r0, 0xC(r4)
	  bl        -0x36AE60
	  cmplwi    r3, 0
	  beq-      .loc_0x180
	  lis       r4, 0x804B
	  lis       r7, 0x804E
	  addi      r0, r4, 0x1148
	  lis       r6, 0x305F
	  stw       r0, 0x0(r3)
	  li        r8, 0
	  lis       r5, 0x34
	  lis       r4, 0x315F
	  stw       r8, 0x4(r3)
	  subi      r0, r7, 0x61F8
	  addi      r6, r6, 0x3030
	  addi      r5, r5, 0x3731
	  stw       r0, 0x0(r3)
	  addi      r4, r4, 0x3030
	  li        r0, 0xB4
	  stw       r8, 0x8(r3)
	  stw       r6, 0x14(r3)
	  stw       r5, 0x10(r3)
	  stw       r4, 0x1C(r3)
	  stw       r5, 0x18(r3)
	  stb       r0, 0x20(r3)
	  stb       r8, 0x21(r3)

	.loc_0x180:
	  lwz       r4, 0x90(r31)
	  stw       r3, 0x20(r4)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x90(r31)
	  bl        0xC3338
	  b         .loc_0x1BC

	.loc_0x1A8:
	  addi      r3, r30, 0x14
	  addi      r5, r30, 0x470
	  li        r4, 0x545
	  crclr     6, 0x6
	  bl        -0x364760

	.loc_0x1BC:
	  li        r3, 0x94
	  bl        -0x36AF04
	  mr.       r0, r3
	  beq-      .loc_0x1D4
	  bl        -0x1614F0
	  mr        r0, r3

	.loc_0x1D4:
	  stw       r0, 0x7C(r31)
	  li        r0, 0
	  addi      r3, r30, 0x498
	  li        r4, 0
	  stw       r0, 0x8(r1)
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0x2
	  li        r9, 0
	  li        r10, 0
	  bl        -0x36FC60
	  cmplwi    r3, 0
	  beq-      .loc_0x240
	  mr        r4, r3
	  addi      r3, r1, 0x328
	  li        r5, -0x1
	  bl        0x86AF8
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x334(r1)
	  bne-      .loc_0x234
	  li        r0, 0
	  stw       r0, 0x73C(r1)

	.loc_0x234:
	  lwz       r3, 0x7C(r31)
	  addi      r4, r1, 0x328
	  bl        -0x16144C

	.loc_0x240:
	  lbz       r0, -0x6760(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x2BC
	  li        r3, 0x28
	  bl        -0x36AF94
	  cmplwi    r3, 0
	  beq-      .loc_0x2B4
	  lis       r4, 0x804B
	  lis       r7, 0x804E
	  addi      r0, r4, 0x1148
	  lis       r6, 0x305F
	  stw       r0, 0x0(r3)
	  li        r8, 0
	  lis       r5, 0x34
	  lis       r4, 0x315F
	  stw       r8, 0x4(r3)
	  subi      r0, r7, 0x61F8
	  addi      r6, r6, 0x3030
	  addi      r5, r5, 0x3731
	  stw       r0, 0x0(r3)
	  addi      r4, r4, 0x3030
	  li        r0, 0xB4
	  stw       r8, 0x8(r3)
	  stw       r6, 0x14(r3)
	  stw       r5, 0x10(r3)
	  stw       r4, 0x1C(r3)
	  stw       r5, 0x18(r3)
	  stb       r0, 0x20(r3)
	  stb       r8, 0x21(r3)

	.loc_0x2B4:
	  lwz       r4, 0x90(r31)
	  stw       r3, 0x20(r4)

	.loc_0x2BC:
	  lbz       r0, -0x6760(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x634
	  bl        -0x2C5910
	  xoris     r0, r3, 0x8000
	  lis       r3, 0x4330
	  stw       r0, 0x74C(r1)
	  lbz       r0, -0x667F(r13)
	  stw       r3, 0x748(r1)
	  lfd       f2, 0xC50(r2)
	  cmplwi    r0, 0
	  lfd       f0, 0x748(r1)
	  lfs       f1, 0xC30(r2)
	  fsubs     f2, f0, f2
	  lfs       f0, 0xC38(r2)
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x750(r1)
	  lwz       r25, 0x754(r1)
	  beq-      .loc_0x314
	  li        r25, 0x1E

	.loc_0x314:
	  bl        -0x2C595C
	  xoris     r0, r3, 0x8000
	  lis       r4, 0x4330
	  stw       r0, 0x75C(r1)
	  xoris     r0, r25, 0x8000
	  lfd       f2, 0xC50(r2)
	  li        r3, 0x78
	  stw       r4, 0x758(r1)
	  lfs       f0, 0xC30(r2)
	  lfd       f1, 0x758(r1)
	  stw       r0, 0x764(r1)
	  fsubs     f1, f1, f2
	  stw       r4, 0x760(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x760(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x768(r1)
	  lwz       r28, 0x76C(r1)
	  bl        -0x36AFA0
	  stw       r3, 0x98(r31)
	  li        r24, 0
	  li        r26, 0

	.loc_0x374:
	  li        r3, 0x2C
	  bl        -0x36B0BC
	  lwz       r4, 0x98(r31)
	  li        r0, 0
	  cmpw      r24, r25
	  stwx      r3, r4, r26
	  lwz       r3, 0x98(r31)
	  lwzx      r3, r3, r26
	  stb       r0, 0x3(r3)
	  lwz       r3, 0x98(r31)
	  lwzx      r3, r3, r26
	  stb       r0, 0x2(r3)
	  lwz       r3, 0x98(r31)
	  lwzx      r3, r3, r26
	  stb       r0, 0x1(r3)
	  lwz       r3, 0x98(r31)
	  lwzx      r3, r3, r26
	  stb       r0, 0x0(r3)
	  bgt-      .loc_0x624
	  bl        -0x2C5A08
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x76C(r1)
	  lfd       f3, 0xC50(r2)
	  stw       r0, 0x768(r1)
	  lfs       f1, 0xC30(r2)
	  lfd       f2, 0x768(r1)
	  lfs       f0, 0xCA8(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x408
	  lwz       r3, 0x98(r31)
	  li        r0, 0x1
	  lwzx      r3, r3, r26
	  stb       r0, 0x3(r3)
	  b         .loc_0x438

	.loc_0x408:
	  lfs       f0, 0xC3C(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x428
	  lwz       r3, 0x98(r31)
	  li        r0, 0x1
	  lwzx      r3, r3, r26
	  stb       r0, 0x2(r3)
	  b         .loc_0x438

	.loc_0x428:
	  lwz       r3, 0x98(r31)
	  li        r0, 0x1
	  lwzx      r3, r3, r26
	  stb       r0, 0x0(r3)

	.loc_0x438:
	  lwz       r3, 0x98(r31)
	  lwzx      r3, r3, r26
	  lbz       r0, 0x3(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x490
	  bl        -0x2C5A94
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x76C(r1)
	  lfd       f3, 0xC50(r2)
	  stw       r0, 0x768(r1)
	  lfs       f1, 0xC30(r2)
	  lfd       f2, 0x768(r1)
	  lfs       f0, 0xC3C(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x490
	  lwz       r3, 0x98(r31)
	  li        r0, 0x1
	  lwzx      r3, r3, r26
	  stb       r0, 0x1(r3)

	.loc_0x490:
	  lwz       r3, 0x7C(r31)
	  mr        r4, r24
	  bl        -0x16159C
	  mr.       r27, r3
	  beq-      .loc_0x624
	  lwz       r4, 0x98(r31)
	  li        r0, 0x64
	  lwz       r6, 0x6C(r27)
	  addi      r3, r27, 0x18
	  lwzx      r5, r4, r26
	  li        r4, 0
	  stw       r6, 0x4(r5)
	  lwz       r5, 0x98(r31)
	  lwz       r6, 0x64(r27)
	  lwzx      r5, r5, r26
	  stw       r6, 0xC(r5)
	  lwz       r5, 0x98(r31)
	  lwz       r6, 0x68(r27)
	  lwzx      r5, r5, r26
	  stw       r6, 0x8(r5)
	  lwz       r5, 0x98(r31)
	  lwzx      r5, r5, r26
	  stw       r0, 0x10(r5)
	  bl        -0x19DB24
	  lwz       r5, 0x98(r31)
	  li        r4, 0x2
	  lwzx      r5, r5, r26
	  stw       r3, 0x14(r5)
	  addi      r3, r27, 0x18
	  bl        -0x19DB3C
	  lwz       r5, 0x98(r31)
	  li        r4, 0x4
	  lwzx      r5, r5, r26
	  stw       r3, 0x18(r5)
	  addi      r3, r27, 0x18
	  bl        -0x19DB54
	  lwz       r5, 0x98(r31)
	  li        r4, 0x3
	  lwzx      r5, r5, r26
	  stw       r3, 0x1C(r5)
	  addi      r3, r27, 0x18
	  bl        -0x19DB6C
	  lwz       r4, 0x98(r31)
	  li        r0, -0x1
	  lwzx      r4, r4, r26
	  stw       r3, 0x20(r4)
	  lwz       r3, 0x98(r31)
	  lwzx      r3, r3, r26
	  stw       r0, 0x24(r3)
	  lwz       r3, 0x98(r31)
	  lwzx      r3, r3, r26
	  stw       r0, 0x28(r3)
	  bl        -0x2C5BA8
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x76C(r1)
	  lfd       f3, 0xC50(r2)
	  stw       r0, 0x768(r1)
	  lfs       f1, 0xC30(r2)
	  lfd       f2, 0x768(r1)
	  lfs       f0, 0xC3C(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x624
	  bl        -0x2C5BDC
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x76C(r1)
	  lwz       r3, 0x98(r31)
	  stw       r0, 0x768(r1)
	  lfd       f2, 0xC50(r2)
	  lfd       f0, 0x768(r1)
	  lfs       f1, 0xC30(r2)
	  fsubs     f2, f0, f2
	  lfs       f0, 0xCF4(r2)
	  lwzx      r3, r3, r26
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x760(r1)
	  lwz       r0, 0x764(r1)
	  stw       r0, 0x24(r3)
	  bl        -0x2C5C24
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x75C(r1)
	  lwz       r3, 0x98(r31)
	  stw       r0, 0x758(r1)
	  lfd       f2, 0xC50(r2)
	  lfd       f0, 0x758(r1)
	  lfs       f1, 0xC30(r2)
	  fsubs     f2, f0, f2
	  lfs       f0, 0xCF4(r2)
	  lwzx      r3, r3, r26
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x750(r1)
	  lwz       r0, 0x754(r1)
	  stw       r0, 0x28(r3)

	.loc_0x624:
	  addi      r24, r24, 0x1
	  addi      r26, r26, 0x4
	  cmpwi     r24, 0x1E
	  blt+      .loc_0x374

	.loc_0x634:
	  lis       r3, 0x6666
	  stw       r28, 0xFC(r31)
	  addi      r0, r3, 0x6667
	  li        r3, 0x18
	  mulhw     r0, r0, r28
	  lfd       f1, 0xF8(r30)
	  lfd       f0, 0x100(r30)
	  stfd      f1, 0x20(r1)
	  stfd      f0, 0x28(r1)
	  srawi     r5, r0, 0x1
	  srawi     r0, r0, 0x1
	  rlwinm    r4,r0,1,31,31
	  rlwinm    r6,r5,1,31,31
	  add       r0, r0, r4
	  mulli     r0, r0, 0x5
	  add       r4, r5, r6
	  stw       r4, -0x6684(r13)
	  sub       r0, r28, r0
	  stw       r0, -0x6688(r13)
	  bl        -0x36B3C4
	  mr.       r0, r3
	  beq-      .loc_0x6AC
	  lis       r6, 0x305F
	  lis       r5, 0x34
	  addi      r4, r1, 0x20
	  li        r7, 0x2
	  addi      r6, r6, 0x3030
	  addi      r5, r5, 0x3930
	  bl        0x11E58
	  mr        r0, r3

	.loc_0x6AC:
	  stw       r0, 0xEC(r31)
	  mr        r3, r31
	  bl        0xC4DA4
	  stw       r3, 0x8C(r31)
	  lis       r3, 0x804E
	  addi      r22, r3, 0x5030
	  addi      r21, r1, 0x10
	  lwz       r5, 0x164(r30)
	  li        r23, 0
	  lwz       r4, 0x168(r30)
	  lwz       r3, 0x16C(r30)
	  lwz       r0, 0x170(r30)
	  stw       r5, 0x10(r1)
	  stw       r4, 0x14(r1)
	  stw       r3, 0x18(r1)
	  stw       r0, 0x1C(r1)

	.loc_0x6EC:
	  lwz       r3, 0x78(r31)
	  lwz       r4, 0x0(r21)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x0(r22)
	  lwz       r0, 0x0(r22)
	  cmplwi    r0, 0
	  bne-      .loc_0x728
	  addi      r3, r30, 0x14
	  addi      r5, r30, 0x2C
	  li        r4, 0x5B8
	  crclr     6, 0x6
	  bl        -0x364CCC

	.loc_0x728:
	  addi      r23, r23, 0x1
	  addi      r22, r22, 0x4
	  cmpwi     r23, 0x4
	  addi      r21, r21, 0x4
	  blt+      .loc_0x6EC
	  li        r3, 0xAC
	  bl        -0x36B484
	  mr.       r0, r3
	  beq-      .loc_0x75C
	  mr        r4, r29
	  li        r5, 0
	  bl        -0x1EE0
	  mr        r0, r3

	.loc_0x75C:
	  stw       r0, 0x84(r31)
	  addi      r4, r30, 0x4BC
	  lis       r5, 0x2
	  lwz       r3, 0x84(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  li        r3, 0x30
	  bl        -0x36B4C4
	  mr.       r21, r3
	  beq-      .loc_0x7A4
	  mr        r4, r29
	  li        r5, 0x5
	  bl        0x14490
	  lis       r3, 0x804E
	  addi      r0, r3, 0x515C
	  stw       r0, 0x0(r21)

	.loc_0x7A4:
	  stw       r21, 0x88(r31)
	  addi      r4, r30, 0x4D8
	  lis       r5, 0x104
	  lwz       r3, 0x88(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x88(r31)
	  addi      r4, r30, 0x4F4
	  bl        0x120AC
	  lwz       r3, 0x88(r31)
	  addi      r4, r30, 0x510
	  bl        0x120A0
	  lwz       r3, 0x88(r31)
	  addi      r4, r30, 0x530
	  bl        0x12094
	  lwz       r3, 0x88(r31)
	  addi      r4, r30, 0x550
	  bl        0x12088
	  lwz       r3, 0x88(r31)
	  addi      r4, r30, 0x570
	  bl        0x1207C
	  li        r3, 0x14
	  bl        -0x36B548
	  cmplwi    r3, 0
	  beq-      .loc_0x874
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
	  addi      r4, r4, 0x50A8
	  stb       r9, 0x4(r3)
	  subi      r8, r6, 0x1D84
	  addi      r6, r7, 0x18
	  li        r5, 0x5
	  stb       r9, 0x5(r3)
	  addi      r0, r4, 0x18
	  stw       r8, 0x8(r3)
	  stw       r7, 0x0(r3)
	  stw       r6, 0x8(r3)
	  sth       r5, 0xC(r3)
	  stw       r9, 0x10(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0x8(r3)

	.loc_0x874:
	  stw       r3, 0xF0(r31)
	  lwz       r3, 0x90(r31)
	  lwz       r28, -0x77D4(r13)
	  lwz       r3, 0xC(r3)
	  bl        -0x36BEC8
	  li        r3, 0x2C
	  bl        -0x36B5D0
	  mr.       r21, r3
	  beq-      .loc_0x914
	  mr        r4, r29
	  li        r5, 0xA
	  bl        0x11F20
	  lis       r3, 0x804E
	  li        r0, 0
	  addi      r3, r3, 0x5188
	  stw       r3, 0x0(r21)
	  stw       r0, 0x18(r21)
	  stw       r0, 0x20(r21)
	  stb       r0, 0x28(r21)
	  bl        -0x2C5F08
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x76C(r1)
	  lha       r0, -0x7A30(r13)
	  stw       r4, 0x768(r1)
	  lfd       f2, 0xC50(r2)
	  xoris     r0, r0, 0x8000
	  lfd       f1, 0x768(r1)
	  lfs       f0, 0xC30(r2)
	  fsubs     f1, f1, f2
	  stw       r0, 0x764(r1)
	  stw       r4, 0x760(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x760(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x758(r1)
	  lwz       r0, 0x75C(r1)
	  stw       r0, 0x24(r21)

	.loc_0x914:
	  stw       r21, 0x80(r31)
	  addi      r4, r30, 0x590
	  lis       r5, 0x104
	  lwz       r3, 0x80(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x80(r31)
	  addi      r4, r30, 0x5AC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x80(r31)
	  addi      r4, r30, 0x5AC
	  bl        0x11F24
	  lwz       r3, 0x80(r31)
	  addi      r4, r30, 0x5C8
	  bl        0x11F18
	  lwz       r3, 0x80(r31)
	  addi      r4, r30, 0x5E4
	  bl        0x11F0C
	  lwz       r3, 0x80(r31)
	  addi      r4, r30, 0x600
	  bl        0x11F00
	  lwz       r3, 0x80(r31)
	  addi      r4, r30, 0x61C
	  bl        0x11EF4
	  lwz       r3, 0x80(r31)
	  addi      r4, r30, 0x638
	  bl        0x11EE8
	  lwz       r3, 0x80(r31)
	  addi      r4, r30, 0x654
	  bl        0x11EDC
	  lwz       r3, 0x80(r31)
	  addi      r4, r30, 0x670
	  bl        0x11ED0
	  lwz       r3, 0x80(r31)
	  addi      r4, r30, 0x68C
	  bl        0x11EC4
	  lwz       r3, 0x80(r31)
	  addi      r4, r30, 0x6A8
	  bl        0x11EB8
	  lwz       r4, 0x80(r31)
	  li        r3, 0x734
	  lwz       r29, 0x8(r4)
	  bl        -0x36B714
	  mr.       r26, r3
	  beq-      .loc_0xBC8
	  mr        r3, r29
	  lis       r4, 0x725F
	  lwz       r12, 0x0(r29)
	  addi      r6, r4, 0x6677
	  li        r5, 0x50
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r27, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lis       r5, 0x706B
	  lis       r4, 0x50
	  lwz       r12, 0x3C(r12)
	  addi      r6, r5, 0x5F72
	  addi      r5, r4, 0x725F
	  mtctr     r12
	  bctrl
	  mr        r22, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lis       r5, 0x706B
	  lis       r4, 0x50
	  lwz       r12, 0x3C(r12)
	  addi      r6, r5, 0x5F6C
	  addi      r5, r4, 0x725F
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8038
	  mr        r21, r3
	  subi      r4, r4, 0x2F48
	  addi      r3, r26, 0x14
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x2
	  bl        -0x2CDE14
	  lis       r4, 0x8039
	  addi      r3, r26, 0x24
	  subi      r4, r4, 0x3B78
	  li        r5, 0
	  li        r6, 0x24
	  li        r7, 0x32
	  bl        -0x2CDE30
	  li        r23, 0
	  mr        r24, r26
	  stw       r23, 0x72C(r26)
	  stw       r21, 0x0(r26)
	  stw       r22, 0x4(r26)
	  stw       r27, 0x8(r26)

	.loc_0xAA0:
	  lwz       r0, 0x0(r24)
	  cmplwi    r0, 0
	  bne-      .loc_0xAC0
	  addi      r3, r30, 0x14
	  addi      r5, r30, 0x2C
	  li        r4, 0x48
	  crclr     6, 0x6
	  bl        -0x365064

	.loc_0xAC0:
	  addi      r23, r23, 0x1
	  addi      r24, r24, 0x4
	  cmpwi     r23, 0x3
	  blt+      .loc_0xAA0
	  lfs       f0, 0xC28(r2)
	  li        r5, 0x30
	  mulli     r3, r5, 0x24
	  li        r4, 0
	  stfs      f0, 0xC(r26)
	  subfic    r0, r5, 0x32
	  stfs      f0, 0x10(r26)
	  add       r3, r26, r3
	  stfs      f0, 0x730(r26)
	  stw       r4, 0x24(r26)
	  stw       r4, 0x48(r26)
	  stw       r4, 0x6C(r26)
	  stw       r4, 0x90(r26)
	  stw       r4, 0xB4(r26)
	  stw       r4, 0xD8(r26)
	  stw       r4, 0xFC(r26)
	  stw       r4, 0x120(r26)
	  stw       r4, 0x144(r26)
	  stw       r4, 0x168(r26)
	  stw       r4, 0x18C(r26)
	  stw       r4, 0x1B0(r26)
	  stw       r4, 0x1D4(r26)
	  stw       r4, 0x1F8(r26)
	  stw       r4, 0x21C(r26)
	  stw       r4, 0x240(r26)
	  stw       r4, 0x264(r26)
	  stw       r4, 0x288(r26)
	  stw       r4, 0x2AC(r26)
	  stw       r4, 0x2D0(r26)
	  stw       r4, 0x2F4(r26)
	  stw       r4, 0x318(r26)
	  stw       r4, 0x33C(r26)
	  stw       r4, 0x360(r26)
	  stw       r4, 0x384(r26)
	  stw       r4, 0x3A8(r26)
	  stw       r4, 0x3CC(r26)
	  stw       r4, 0x3F0(r26)
	  stw       r4, 0x414(r26)
	  stw       r4, 0x438(r26)
	  stw       r4, 0x45C(r26)
	  stw       r4, 0x480(r26)
	  stw       r4, 0x4A4(r26)
	  stw       r4, 0x4C8(r26)
	  stw       r4, 0x4EC(r26)
	  stw       r4, 0x510(r26)
	  stw       r4, 0x534(r26)
	  stw       r4, 0x558(r26)
	  stw       r4, 0x57C(r26)
	  stw       r4, 0x5A0(r26)
	  stw       r4, 0x5C4(r26)
	  stw       r4, 0x5E8(r26)
	  stw       r4, 0x60C(r26)
	  stw       r4, 0x630(r26)
	  stw       r4, 0x654(r26)
	  stw       r4, 0x678(r26)
	  stw       r4, 0x69C(r26)
	  stw       r4, 0x6C0(r26)
	  mtctr     r0
	  cmpwi     r5, 0x32
	  bge-      .loc_0xBC8

	.loc_0xBC0:
	  stwu      r4, 0x24(r3)
	  bdnz+     .loc_0xBC0

	.loc_0xBC8:
	  stw       r26, 0x9C(r31)
	  li        r3, 0x734
	  bl        -0x36B914
	  mr.       r26, r3
	  beq-      .loc_0xDC8
	  mr        r3, r29
	  lis       r4, 0x795F
	  lwz       r12, 0x0(r29)
	  addi      r6, r4, 0x6677
	  li        r5, 0x50
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r27, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lis       r5, 0x706B
	  lis       r4, 0x50
	  lwz       r12, 0x3C(r12)
	  addi      r6, r5, 0x5F72
	  addi      r5, r4, 0x795F
	  mtctr     r12
	  bctrl
	  mr        r22, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lis       r5, 0x706B
	  lis       r4, 0x50
	  lwz       r12, 0x3C(r12)
	  addi      r6, r5, 0x5F6C
	  addi      r5, r4, 0x795F
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8038
	  mr        r21, r3
	  subi      r4, r4, 0x2F48
	  addi      r3, r26, 0x14
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x2
	  bl        -0x2CE014
	  lis       r4, 0x8039
	  addi      r3, r26, 0x24
	  subi      r4, r4, 0x3B78
	  li        r5, 0
	  li        r6, 0x24
	  li        r7, 0x32
	  bl        -0x2CE030
	  li        r23, 0
	  mr        r24, r26
	  stw       r23, 0x72C(r26)
	  stw       r21, 0x0(r26)
	  stw       r22, 0x4(r26)
	  stw       r27, 0x8(r26)

	.loc_0xCA0:
	  lwz       r0, 0x0(r24)
	  cmplwi    r0, 0
	  bne-      .loc_0xCC0
	  addi      r3, r30, 0x14
	  addi      r5, r30, 0x2C
	  li        r4, 0x48
	  crclr     6, 0x6
	  bl        -0x365264

	.loc_0xCC0:
	  addi      r23, r23, 0x1
	  addi      r24, r24, 0x4
	  cmpwi     r23, 0x3
	  blt+      .loc_0xCA0
	  lfs       f0, 0xC28(r2)
	  li        r5, 0x30
	  mulli     r3, r5, 0x24
	  li        r4, 0
	  stfs      f0, 0xC(r26)
	  subfic    r0, r5, 0x32
	  stfs      f0, 0x10(r26)
	  add       r3, r26, r3
	  stfs      f0, 0x730(r26)
	  stw       r4, 0x24(r26)
	  stw       r4, 0x48(r26)
	  stw       r4, 0x6C(r26)
	  stw       r4, 0x90(r26)
	  stw       r4, 0xB4(r26)
	  stw       r4, 0xD8(r26)
	  stw       r4, 0xFC(r26)
	  stw       r4, 0x120(r26)
	  stw       r4, 0x144(r26)
	  stw       r4, 0x168(r26)
	  stw       r4, 0x18C(r26)
	  stw       r4, 0x1B0(r26)
	  stw       r4, 0x1D4(r26)
	  stw       r4, 0x1F8(r26)
	  stw       r4, 0x21C(r26)
	  stw       r4, 0x240(r26)
	  stw       r4, 0x264(r26)
	  stw       r4, 0x288(r26)
	  stw       r4, 0x2AC(r26)
	  stw       r4, 0x2D0(r26)
	  stw       r4, 0x2F4(r26)
	  stw       r4, 0x318(r26)
	  stw       r4, 0x33C(r26)
	  stw       r4, 0x360(r26)
	  stw       r4, 0x384(r26)
	  stw       r4, 0x3A8(r26)
	  stw       r4, 0x3CC(r26)
	  stw       r4, 0x3F0(r26)
	  stw       r4, 0x414(r26)
	  stw       r4, 0x438(r26)
	  stw       r4, 0x45C(r26)
	  stw       r4, 0x480(r26)
	  stw       r4, 0x4A4(r26)
	  stw       r4, 0x4C8(r26)
	  stw       r4, 0x4EC(r26)
	  stw       r4, 0x510(r26)
	  stw       r4, 0x534(r26)
	  stw       r4, 0x558(r26)
	  stw       r4, 0x57C(r26)
	  stw       r4, 0x5A0(r26)
	  stw       r4, 0x5C4(r26)
	  stw       r4, 0x5E8(r26)
	  stw       r4, 0x60C(r26)
	  stw       r4, 0x630(r26)
	  stw       r4, 0x654(r26)
	  stw       r4, 0x678(r26)
	  stw       r4, 0x69C(r26)
	  stw       r4, 0x6C0(r26)
	  mtctr     r0
	  cmpwi     r5, 0x32
	  bge-      .loc_0xDC8

	.loc_0xDC0:
	  stwu      r4, 0x24(r3)
	  bdnz+     .loc_0xDC0

	.loc_0xDC8:
	  stw       r26, 0xA0(r31)
	  li        r3, 0x734
	  bl        -0x36BB14
	  mr.       r26, r3
	  beq-      .loc_0xFC8
	  mr        r3, r29
	  lis       r4, 0x625F
	  lwz       r12, 0x0(r29)
	  addi      r6, r4, 0x6677
	  li        r5, 0x50
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r27, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lis       r5, 0x706B
	  lis       r4, 0x50
	  lwz       r12, 0x3C(r12)
	  addi      r6, r5, 0x5F72
	  addi      r5, r4, 0x625F
	  mtctr     r12
	  bctrl
	  mr        r22, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lis       r5, 0x706B
	  lis       r4, 0x50
	  lwz       r12, 0x3C(r12)
	  addi      r6, r5, 0x5F6C
	  addi      r5, r4, 0x625F
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8038
	  mr        r21, r3
	  subi      r4, r4, 0x2F48
	  addi      r3, r26, 0x14
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x2
	  bl        -0x2CE214
	  lis       r4, 0x8039
	  addi      r3, r26, 0x24
	  subi      r4, r4, 0x3B78
	  li        r5, 0
	  li        r6, 0x24
	  li        r7, 0x32
	  bl        -0x2CE230
	  li        r23, 0
	  mr        r24, r26
	  stw       r23, 0x72C(r26)
	  stw       r21, 0x0(r26)
	  stw       r22, 0x4(r26)
	  stw       r27, 0x8(r26)

	.loc_0xEA0:
	  lwz       r0, 0x0(r24)
	  cmplwi    r0, 0
	  bne-      .loc_0xEC0
	  addi      r3, r30, 0x14
	  addi      r5, r30, 0x2C
	  li        r4, 0x48
	  crclr     6, 0x6
	  bl        -0x365464

	.loc_0xEC0:
	  addi      r23, r23, 0x1
	  addi      r24, r24, 0x4
	  cmpwi     r23, 0x3
	  blt+      .loc_0xEA0
	  lfs       f0, 0xC28(r2)
	  li        r5, 0x30
	  mulli     r3, r5, 0x24
	  li        r4, 0
	  stfs      f0, 0xC(r26)
	  subfic    r0, r5, 0x32
	  stfs      f0, 0x10(r26)
	  add       r3, r26, r3
	  stfs      f0, 0x730(r26)
	  stw       r4, 0x24(r26)
	  stw       r4, 0x48(r26)
	  stw       r4, 0x6C(r26)
	  stw       r4, 0x90(r26)
	  stw       r4, 0xB4(r26)
	  stw       r4, 0xD8(r26)
	  stw       r4, 0xFC(r26)
	  stw       r4, 0x120(r26)
	  stw       r4, 0x144(r26)
	  stw       r4, 0x168(r26)
	  stw       r4, 0x18C(r26)
	  stw       r4, 0x1B0(r26)
	  stw       r4, 0x1D4(r26)
	  stw       r4, 0x1F8(r26)
	  stw       r4, 0x21C(r26)
	  stw       r4, 0x240(r26)
	  stw       r4, 0x264(r26)
	  stw       r4, 0x288(r26)
	  stw       r4, 0x2AC(r26)
	  stw       r4, 0x2D0(r26)
	  stw       r4, 0x2F4(r26)
	  stw       r4, 0x318(r26)
	  stw       r4, 0x33C(r26)
	  stw       r4, 0x360(r26)
	  stw       r4, 0x384(r26)
	  stw       r4, 0x3A8(r26)
	  stw       r4, 0x3CC(r26)
	  stw       r4, 0x3F0(r26)
	  stw       r4, 0x414(r26)
	  stw       r4, 0x438(r26)
	  stw       r4, 0x45C(r26)
	  stw       r4, 0x480(r26)
	  stw       r4, 0x4A4(r26)
	  stw       r4, 0x4C8(r26)
	  stw       r4, 0x4EC(r26)
	  stw       r4, 0x510(r26)
	  stw       r4, 0x534(r26)
	  stw       r4, 0x558(r26)
	  stw       r4, 0x57C(r26)
	  stw       r4, 0x5A0(r26)
	  stw       r4, 0x5C4(r26)
	  stw       r4, 0x5E8(r26)
	  stw       r4, 0x60C(r26)
	  stw       r4, 0x630(r26)
	  stw       r4, 0x654(r26)
	  stw       r4, 0x678(r26)
	  stw       r4, 0x69C(r26)
	  stw       r4, 0x6C0(r26)
	  mtctr     r0
	  cmpwi     r5, 0x32
	  bge-      .loc_0xFC8

	.loc_0xFC0:
	  stwu      r4, 0x24(r3)
	  bdnz+     .loc_0xFC0

	.loc_0xFC8:
	  stw       r26, 0xA4(r31)
	  li        r3, 0x734
	  bl        -0x36BD14
	  mr.       r26, r3
	  beq-      .loc_0x11C8
	  mr        r3, r29
	  lis       r4, 0x775F
	  lwz       r12, 0x0(r29)
	  addi      r6, r4, 0x6677
	  li        r5, 0x50
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r27, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lis       r5, 0x5F30
	  lis       r4, 0x5049
	  lwz       r12, 0x3C(r12)
	  addi      r6, r5, 0x3230
	  addi      r5, r4, 0x4354
	  mtctr     r12
	  bctrl
	  mr        r22, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lis       r5, 0x706B
	  lis       r4, 0x50
	  lwz       r12, 0x3C(r12)
	  addi      r6, r5, 0x5F72
	  addi      r5, r4, 0x775F
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8038
	  mr        r21, r3
	  subi      r4, r4, 0x2F48
	  addi      r3, r26, 0x14
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x2
	  bl        -0x2CE414
	  lis       r4, 0x8039
	  addi      r3, r26, 0x24
	  subi      r4, r4, 0x3B78
	  li        r5, 0
	  li        r6, 0x24
	  li        r7, 0x32
	  bl        -0x2CE430
	  li        r23, 0
	  mr        r24, r26
	  stw       r23, 0x72C(r26)
	  stw       r21, 0x0(r26)
	  stw       r22, 0x4(r26)
	  stw       r27, 0x8(r26)

	.loc_0x10A0:
	  lwz       r0, 0x0(r24)
	  cmplwi    r0, 0
	  bne-      .loc_0x10C0
	  addi      r3, r30, 0x14
	  addi      r5, r30, 0x2C
	  li        r4, 0x48
	  crclr     6, 0x6
	  bl        -0x365664

	.loc_0x10C0:
	  addi      r23, r23, 0x1
	  addi      r24, r24, 0x4
	  cmpwi     r23, 0x3
	  blt+      .loc_0x10A0
	  lfs       f0, 0xC28(r2)
	  li        r5, 0x30
	  mulli     r3, r5, 0x24
	  li        r4, 0
	  stfs      f0, 0xC(r26)
	  subfic    r0, r5, 0x32
	  stfs      f0, 0x10(r26)
	  add       r3, r26, r3
	  stfs      f0, 0x730(r26)
	  stw       r4, 0x24(r26)
	  stw       r4, 0x48(r26)
	  stw       r4, 0x6C(r26)
	  stw       r4, 0x90(r26)
	  stw       r4, 0xB4(r26)
	  stw       r4, 0xD8(r26)
	  stw       r4, 0xFC(r26)
	  stw       r4, 0x120(r26)
	  stw       r4, 0x144(r26)
	  stw       r4, 0x168(r26)
	  stw       r4, 0x18C(r26)
	  stw       r4, 0x1B0(r26)
	  stw       r4, 0x1D4(r26)
	  stw       r4, 0x1F8(r26)
	  stw       r4, 0x21C(r26)
	  stw       r4, 0x240(r26)
	  stw       r4, 0x264(r26)
	  stw       r4, 0x288(r26)
	  stw       r4, 0x2AC(r26)
	  stw       r4, 0x2D0(r26)
	  stw       r4, 0x2F4(r26)
	  stw       r4, 0x318(r26)
	  stw       r4, 0x33C(r26)
	  stw       r4, 0x360(r26)
	  stw       r4, 0x384(r26)
	  stw       r4, 0x3A8(r26)
	  stw       r4, 0x3CC(r26)
	  stw       r4, 0x3F0(r26)
	  stw       r4, 0x414(r26)
	  stw       r4, 0x438(r26)
	  stw       r4, 0x45C(r26)
	  stw       r4, 0x480(r26)
	  stw       r4, 0x4A4(r26)
	  stw       r4, 0x4C8(r26)
	  stw       r4, 0x4EC(r26)
	  stw       r4, 0x510(r26)
	  stw       r4, 0x534(r26)
	  stw       r4, 0x558(r26)
	  stw       r4, 0x57C(r26)
	  stw       r4, 0x5A0(r26)
	  stw       r4, 0x5C4(r26)
	  stw       r4, 0x5E8(r26)
	  stw       r4, 0x60C(r26)
	  stw       r4, 0x630(r26)
	  stw       r4, 0x654(r26)
	  stw       r4, 0x678(r26)
	  stw       r4, 0x69C(r26)
	  stw       r4, 0x6C0(r26)
	  mtctr     r0
	  cmpwi     r5, 0x32
	  bge-      .loc_0x11C8

	.loc_0x11C0:
	  stwu      r4, 0x24(r3)
	  bdnz+     .loc_0x11C0

	.loc_0x11C8:
	  stw       r26, 0xA8(r31)
	  li        r3, 0x734
	  bl        -0x36BF14
	  mr.       r26, r3
	  beq-      .loc_0x13C8
	  mr        r3, r29
	  lis       r4, 0x6C5F
	  lwz       r12, 0x0(r29)
	  addi      r6, r4, 0x6677
	  li        r5, 0x5062
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r27, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lis       r5, 0x706B
	  lis       r4, 0x5062
	  lwz       r12, 0x3C(r12)
	  addi      r6, r5, 0x5F72
	  addi      r5, r4, 0x6C5F
	  mtctr     r12
	  bctrl
	  mr        r22, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lis       r5, 0x706B
	  lis       r4, 0x5062
	  lwz       r12, 0x3C(r12)
	  addi      r6, r5, 0x5F6C
	  addi      r5, r4, 0x6C5F
	  mtctr     r12
	  bctrl
	  lis       r4, 0x8038
	  mr        r21, r3
	  subi      r4, r4, 0x2F48
	  addi      r3, r26, 0x14
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x2
	  bl        -0x2CE614
	  lis       r4, 0x8039
	  addi      r3, r26, 0x24
	  subi      r4, r4, 0x3B78
	  li        r5, 0
	  li        r6, 0x24
	  li        r7, 0x32
	  bl        -0x2CE630
	  li        r23, 0
	  mr        r24, r26
	  stw       r23, 0x72C(r26)
	  stw       r21, 0x0(r26)
	  stw       r22, 0x4(r26)
	  stw       r27, 0x8(r26)

	.loc_0x12A0:
	  lwz       r0, 0x0(r24)
	  cmplwi    r0, 0
	  bne-      .loc_0x12C0
	  addi      r3, r30, 0x14
	  addi      r5, r30, 0x2C
	  li        r4, 0x48
	  crclr     6, 0x6
	  bl        -0x365864

	.loc_0x12C0:
	  addi      r23, r23, 0x1
	  addi      r24, r24, 0x4
	  cmpwi     r23, 0x3
	  blt+      .loc_0x12A0
	  lfs       f0, 0xC28(r2)
	  li        r5, 0x30
	  mulli     r3, r5, 0x24
	  li        r4, 0
	  stfs      f0, 0xC(r26)
	  subfic    r0, r5, 0x32
	  stfs      f0, 0x10(r26)
	  add       r3, r26, r3
	  stfs      f0, 0x730(r26)
	  stw       r4, 0x24(r26)
	  stw       r4, 0x48(r26)
	  stw       r4, 0x6C(r26)
	  stw       r4, 0x90(r26)
	  stw       r4, 0xB4(r26)
	  stw       r4, 0xD8(r26)
	  stw       r4, 0xFC(r26)
	  stw       r4, 0x120(r26)
	  stw       r4, 0x144(r26)
	  stw       r4, 0x168(r26)
	  stw       r4, 0x18C(r26)
	  stw       r4, 0x1B0(r26)
	  stw       r4, 0x1D4(r26)
	  stw       r4, 0x1F8(r26)
	  stw       r4, 0x21C(r26)
	  stw       r4, 0x240(r26)
	  stw       r4, 0x264(r26)
	  stw       r4, 0x288(r26)
	  stw       r4, 0x2AC(r26)
	  stw       r4, 0x2D0(r26)
	  stw       r4, 0x2F4(r26)
	  stw       r4, 0x318(r26)
	  stw       r4, 0x33C(r26)
	  stw       r4, 0x360(r26)
	  stw       r4, 0x384(r26)
	  stw       r4, 0x3A8(r26)
	  stw       r4, 0x3CC(r26)
	  stw       r4, 0x3F0(r26)
	  stw       r4, 0x414(r26)
	  stw       r4, 0x438(r26)
	  stw       r4, 0x45C(r26)
	  stw       r4, 0x480(r26)
	  stw       r4, 0x4A4(r26)
	  stw       r4, 0x4C8(r26)
	  stw       r4, 0x4EC(r26)
	  stw       r4, 0x510(r26)
	  stw       r4, 0x534(r26)
	  stw       r4, 0x558(r26)
	  stw       r4, 0x57C(r26)
	  stw       r4, 0x5A0(r26)
	  stw       r4, 0x5C4(r26)
	  stw       r4, 0x5E8(r26)
	  stw       r4, 0x60C(r26)
	  stw       r4, 0x630(r26)
	  stw       r4, 0x654(r26)
	  stw       r4, 0x678(r26)
	  stw       r4, 0x69C(r26)
	  stw       r4, 0x6C0(r26)
	  mtctr     r0
	  cmpwi     r5, 0x32
	  bge-      .loc_0x13C8

	.loc_0x13C0:
	  stwu      r4, 0x24(r3)
	  bdnz+     .loc_0x13C0

	.loc_0x13C8:
	  stw       r26, 0xAC(r31)
	  mr        r3, r29
	  lis       r4, 0x7965
	  li        r5, 0x54
	  lwz       r12, 0x0(r29)
	  addi      r6, r4, 0x6C31
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xE0(r31)
	  mr        r3, r29
	  lis       r4, 0x7965
	  li        r5, 0x54
	  lwz       r12, 0x0(r29)
	  addi      r6, r4, 0x6C32
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xE4(r31)
	  mr        r21, r31
	  li        r22, 0

	.loc_0x141C:
	  lwz       r0, 0xE0(r21)
	  cmplwi    r0, 0
	  bne-      .loc_0x143C
	  addi      r3, r30, 0x14
	  addi      r5, r30, 0x2C
	  li        r4, 0x5F5
	  crclr     6, 0x6
	  bl        -0x3659E0

	.loc_0x143C:
	  addi      r22, r22, 0x1
	  addi      r21, r21, 0x4
	  cmpwi     r22, 0x2
	  blt+      .loc_0x141C
	  li        r3, 0x18
	  bl        -0x36C194
	  mr.       r26, r3
	  beq-      .loc_0x1578
	  mr        r3, r29
	  lis       r5, 0x5F30
	  lwz       r12, 0x0(r29)
	  lis       r4, 0x5049
	  addi      r6, r5, 0x3234
	  lwz       r12, 0x3C(r12)
	  addi      r5, r4, 0x4354
	  mtctr     r12
	  bctrl
	  mr        r23, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lis       r5, 0x5F30
	  lis       r4, 0x5049
	  lwz       r12, 0x3C(r12)
	  addi      r6, r5, 0x3232
	  addi      r5, r4, 0x4354
	  mtctr     r12
	  bctrl
	  mr        r22, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lis       r5, 0x5F30
	  lis       r4, 0x5049
	  lwz       r12, 0x3C(r12)
	  addi      r6, r5, 0x3233
	  addi      r5, r4, 0x4354
	  mtctr     r12
	  bctrl
	  mr        r21, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lis       r5, 0x5F30
	  lis       r4, 0x5049
	  lwz       r12, 0x3C(r12)
	  addi      r6, r5, 0x3133
	  addi      r5, r4, 0x4354
	  mtctr     r12
	  bctrl
	  stw       r3, 0x0(r26)
	  lfs       f0, 0xC28(r2)
	  stfs      f0, 0x10(r26)
	  stfs      f0, 0x14(r26)
	  lwz       r0, 0x0(r26)
	  cmplwi    r0, 0
	  bne-      .loc_0x1528
	  addi      r3, r30, 0x14
	  addi      r5, r30, 0x2C
	  li        r4, 0x11C
	  crclr     6, 0x6
	  bl        -0x365ACC

	.loc_0x1528:
	  lwz       r3, 0x0(r26)
	  li        r4, 0x7
	  bl        -0x35745C
	  stw       r21, 0x4(r26)
	  mr        r24, r26
	  li        r21, 0
	  stw       r22, 0x8(r26)
	  stw       r23, 0xC(r26)

	.loc_0x1548:
	  lwz       r0, 0x4(r24)
	  cmplwi    r0, 0
	  bne-      .loc_0x1568
	  addi      r3, r30, 0x14
	  addi      r5, r30, 0x2C
	  li        r4, 0x122
	  crclr     6, 0x6
	  bl        -0x365B0C

	.loc_0x1568:
	  addi      r21, r21, 0x1
	  addi      r24, r24, 0x4
	  cmpwi     r21, 0x3
	  blt+      .loc_0x1548

	.loc_0x1578:
	  stw       r26, 0xB0(r31)
	  li        r3, 0x18
	  bl        -0x36C2C4
	  mr.       r26, r3
	  beq-      .loc_0x16A8
	  mr        r3, r29
	  lis       r5, 0x5F30
	  lwz       r12, 0x0(r29)
	  lis       r4, 0x5049
	  addi      r6, r5, 0x3237
	  lwz       r12, 0x3C(r12)
	  addi      r5, r4, 0x4354
	  mtctr     r12
	  bctrl
	  mr        r23, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lis       r5, 0x5F30
	  lis       r4, 0x5049
	  lwz       r12, 0x3C(r12)
	  addi      r6, r5, 0x3235
	  addi      r5, r4, 0x4354
	  mtctr     r12
	  bctrl
	  mr        r22, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lis       r5, 0x5F30
	  lis       r4, 0x5049
	  lwz       r12, 0x3C(r12)
	  addi      r6, r5, 0x3236
	  addi      r5, r4, 0x4354
	  mtctr     r12
	  bctrl
	  mr        r21, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lis       r5, 0x5F30
	  lis       r4, 0x5049
	  lwz       r12, 0x3C(r12)
	  addi      r6, r5, 0x3037
	  addi      r5, r4, 0x4354
	  mtctr     r12
	  bctrl
	  stw       r3, 0x0(r26)
	  lfs       f0, 0xC28(r2)
	  stfs      f0, 0x10(r26)
	  stfs      f0, 0x14(r26)
	  lwz       r0, 0x0(r26)
	  cmplwi    r0, 0
	  bne-      .loc_0x1658
	  addi      r3, r30, 0x14
	  addi      r5, r30, 0x2C
	  li        r4, 0x11C
	  crclr     6, 0x6
	  bl        -0x365BFC

	.loc_0x1658:
	  lwz       r3, 0x0(r26)
	  li        r4, 0x7
	  bl        -0x35758C
	  stw       r21, 0x4(r26)
	  mr        r24, r26
	  li        r21, 0
	  stw       r22, 0x8(r26)
	  stw       r23, 0xC(r26)

	.loc_0x1678:
	  lwz       r0, 0x4(r24)
	  cmplwi    r0, 0
	  bne-      .loc_0x1698
	  addi      r3, r30, 0x14
	  addi      r5, r30, 0x2C
	  li        r4, 0x122
	  crclr     6, 0x6
	  bl        -0x365C3C

	.loc_0x1698:
	  addi      r21, r21, 0x1
	  addi      r24, r24, 0x4
	  cmpwi     r21, 0x3
	  blt+      .loc_0x1678

	.loc_0x16A8:
	  stw       r26, 0xB4(r31)
	  mr        r3, r29
	  lis       r5, 0x6665
	  lis       r4, 0x50
	  lwz       r12, 0x0(r29)
	  addi      r6, r5, 0x6374
	  addi      r5, r4, 0x6566
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r21, r3
	  bne-      .loc_0x16EC
	  addi      r3, r30, 0x14
	  addi      r5, r30, 0x2C
	  li        r4, 0x600
	  crclr     6, 0x6
	  bl        -0x365C90

	.loc_0x16EC:
	  li        r0, 0x1
	  lis       r5, 0x6563
	  stb       r0, 0xB0(r21)
	  mr        r3, r29
	  lis       r4, 0x5073
	  addi      r6, r5, 0x3030
	  lwz       r12, 0x0(r29)
	  addi      r5, r4, 0x656C
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xE8(r31)
	  lwz       r0, 0xE8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x173C
	  addi      r3, r30, 0x14
	  addi      r5, r30, 0x2C
	  li        r4, 0x605
	  crclr     6, 0x6
	  bl        -0x365CE0

	.loc_0x173C:
	  lis       r4, 0x7331
	  lwz       r9, 0x78(r31)
	  mr        r3, r29
	  addi      r7, r31, 0x100
	  addi      r6, r4, 0x7031
	  li        r5, 0x5068
	  li        r8, 0x5
	  bl        0x1191C
	  stw       r3, 0xB8(r31)
	  lis       r4, 0x7332
	  mr        r3, r29
	  addi      r7, r31, 0x104
	  lwz       r9, 0x78(r31)
	  addi      r6, r4, 0x7031
	  li        r5, 0x5068
	  li        r8, 0x5
	  bl        0x118F8
	  stw       r3, 0xBC(r31)
	  mr        r21, r31
	  addi      r22, r1, 0x30
	  li        r23, 0
	  lfd       f4, 0x178(r30)
	  lfd       f3, 0x180(r30)
	  lfd       f2, 0x188(r30)
	  lfd       f1, 0x190(r30)
	  lfd       f0, 0x198(r30)
	  stfd      f4, 0x30(r1)
	  stfd      f3, 0x38(r1)
	  stfd      f2, 0x40(r1)
	  stfd      f1, 0x48(r1)
	  stfd      f0, 0x50(r1)

	.loc_0x17B8:
	  lwz       r5, 0x0(r22)
	  mr        r3, r29
	  lwz       r6, 0x4(r22)
	  addi      r7, r21, 0x108
	  lwz       r9, 0x78(r31)
	  li        r8, 0x3
	  bl        0x118A4
	  addi      r23, r23, 0x1
	  stw       r3, 0xC0(r21)
	  cmpwi     r23, 0x5
	  addi      r21, r21, 0x4
	  addi      r22, r22, 0x8
	  blt+      .loc_0x17B8
	  lis       r5, 0x735F
	  lis       r4, 0x5065
	  lwz       r9, 0x78(r31)
	  mr        r3, r29
	  addi      r6, r5, 0x7031
	  addi      r5, r4, 0x6B69
	  addi      r7, r31, 0x11C
	  li        r8, 0x2
	  bl        0x11868
	  stw       r3, 0xD4(r31)
	  lis       r5, 0x735F
	  lis       r4, 0x5065
	  mr        r3, r29
	  lwz       r9, 0x78(r31)
	  addi      r6, r5, 0x7231
	  addi      r5, r4, 0x6B69
	  addi      r7, r31, 0x120
	  li        r8, 0x2
	  bl        0x11840
	  stw       r3, 0xD8(r31)
	  lis       r5, 0x6F6F
	  lis       r4, 0x50
	  mr        r3, r29
	  lwz       r9, 0x78(r31)
	  addi      r6, r5, 0x7231
	  addi      r5, r4, 0x666C
	  addi      r7, r31, 0x124
	  li        r8, 0x2
	  bl        0x11818
	  li        r0, 0x5A
	  stw       r3, 0xDC(r31)
	  addi      r5, r1, 0x54
	  addi      r4, r30, 0x19C
	  mtctr     r0

	.loc_0x1874:
	  lwz       r3, 0x4(r4)
	  lwzu      r0, 0x8(r4)
	  stw       r3, 0x4(r5)
	  stwu      r0, 0x8(r5)
	  bdnz+     .loc_0x1874
	  li        r3, 0x78
	  bl        -0x36C4C8
	  lis       r4, 0x804E
	  stw       r3, 0x94(r31)
	  addi      r26, r1, 0x58
	  li        r24, 0
	  addi      r25, r4, 0x5030
	  li        r27, 0

	.loc_0x18A8:
	  li        r3, 0x38
	  bl        -0x36C5F0
	  mr.       r21, r3
	  beq-      .loc_0x19C8
	  mr        r3, r29
	  lwz       r5, 0x10(r26)
	  lwz       r12, 0x0(r29)
	  lwz       r6, 0x14(r26)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r22, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r5, 0x8(r26)
	  lwz       r12, 0x3C(r12)
	  lwz       r6, 0xC(r26)
	  mtctr     r12
	  bctrl
	  mr        r23, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r5, 0x0(r26)
	  lwz       r12, 0x3C(r12)
	  lwz       r6, 0x4(r26)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  lfs       f1, 0xC90(r2)
	  stw       r0, 0x0(r21)
	  cmplwi    r3, 0
	  lfs       f0, 0xC28(r2)
	  stw       r3, 0x4(r21)
	  stw       r23, 0x8(r21)
	  stw       r22, 0xC(r21)
	  stw       r0, 0x10(r21)
	  stfs      f1, 0x14(r21)
	  stfs      f0, 0x18(r21)
	  stw       r0, 0x1C(r21)
	  stw       r0, 0x20(r21)
	  stb       r0, 0x24(r21)
	  stfs      f0, 0x34(r21)
	  bne-      .loc_0x1968
	  addi      r3, r30, 0x14
	  addi      r5, r30, 0x2C
	  li        r4, 0x166
	  crclr     6, 0x6
	  bl        -0x365F0C

	.loc_0x1968:
	  cmplwi    r23, 0
	  bne-      .loc_0x1984
	  addi      r3, r30, 0x14
	  addi      r5, r30, 0x2C
	  li        r4, 0x167
	  crclr     6, 0x6
	  bl        -0x365F28

	.loc_0x1984:
	  cmplwi    r22, 0
	  bne-      .loc_0x19A0
	  addi      r3, r30, 0x14
	  addi      r5, r30, 0x2C
	  li        r4, 0x168
	  crclr     6, 0x6
	  bl        -0x365F44

	.loc_0x19A0:
	  li        r3, 0x1C
	  bl        -0x36C6E8
	  mr.       r0, r3
	  beq-      .loc_0x19B8
	  bl        -0x67794
	  mr        r0, r3

	.loc_0x19B8:
	  stw       r0, 0x10(r21)
	  lfs       f0, 0xC28(r2)
	  stfs      f0, 0x28(r21)
	  stfs      f0, 0x2C(r21)

	.loc_0x19C8:
	  lwz       r5, 0x94(r31)
	  mr        r3, r31
	  mr        r4, r24
	  stwx      r21, r5, r27
	  bl        0x20E0
	  lwz       r4, 0x94(r31)
	  mr        r23, r3
	  lwz       r3, 0x78(r31)
	  rlwinm    r0,r23,2,0,29
	  lwzx      r21, r4, r27
	  li        r5, 0
	  stw       r3, 0x0(r21)
	  lwz       r3, 0x4(r21)
	  lwzx      r4, r25, r0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x110(r12)
	  mtctr     r12
	  bctrl
	  stw       r23, 0x1C(r21)
	  mr        r3, r31
	  mr        r4, r24
	  stw       r24, 0x30(r21)
	  bl        0x21C4
	  lwz       r4, 0x94(r31)
	  addi      r24, r24, 0x1
	  cmpwi     r24, 0x1E
	  addi      r26, r26, 0x18
	  lwzx      r4, r4, r27
	  addi      r27, r27, 0x4
	  stw       r3, 0x20(r4)
	  blt+      .loc_0x18A8
	  mr        r3, r31
	  bl        0x2324
	  stw       r3, 0x130(r31)
	  lwz       r3, 0x130(r31)
	  cmpwi     r3, 0
	  ble-      .loc_0x1A64
	  subi      r0, r3, 0x1
	  stw       r0, 0x130(r31)

	.loc_0x1A64:
	  lwz       r4, 0xFC(r31)
	  mr        r3, r31
	  bl        0x1B84
	  lwz       r4, 0xFC(r31)
	  mr        r3, r31
	  bl        0x1F70
	  li        r22, 0
	  li        r21, 0
	  li        r24, 0x1
	  b         .loc_0x1AC0

	.loc_0x1A8C:
	  mr        r3, r31
	  mr        r4, r22
	  bl        0x21F4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1AB8
	  lwz       r3, 0x94(r31)
	  lwzx      r3, r3, r21
	  lwz       r0, 0x1C(r3)
	  cmpwi     r0, 0x3
	  bge-      .loc_0x1AB8
	  stb       r24, 0x24(r3)

	.loc_0x1AB8:
	  addi      r21, r21, 0x4
	  addi      r22, r22, 0x1

	.loc_0x1AC0:
	  lwz       r0, 0x130(r31)
	  cmpw      r22, r0
	  ble+      .loc_0x1A8C
	  lis       r3, 0x8050
	  li        r0, 0x1
	  addi      r3, r3, 0x7008
	  stb       r0, -0x7A38(r13)
	  lbz       r0, 0x16(r3)
	  extsb     r4, r0
	  subfic    r3, r4, -0x1
	  addi      r0, r4, 0x1
	  or        r0, r3, r0
	  rlwinm    r0,r0,1,31,31
	  stb       r0, -0x7A28(r13)
	  lwz       r3, 0x90(r31)
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x1B10
	  li        r0, 0
	  stb       r0, -0x7A38(r13)

	.loc_0x1B10:
	  lbz       r0, -0x7A28(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x1B24
	  li        r0, 0x1
	  stb       r0, -0x7A38(r13)

	.loc_0x1B24:
	  lwz       r3, 0x78(r31)
	  addi      r4, r30, 0x6C4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr.       r22, r3
	  lwz       r21, 0x84(r31)
	  bne-      .loc_0x1B5C
	  addi      r3, r30, 0x14
	  addi      r5, r30, 0x2C
	  li        r4, 0x4B7
	  crclr     6, 0x6
	  bl        -0x366100

	.loc_0x1B5C:
	  li        r3, 0x168
	  bl        -0x36C8A4
	  mr.       r0, r3
	  beq-      .loc_0x1B78
	  mr        r4, r22
	  bl        -0x3564E0
	  mr        r0, r3

	.loc_0x1B78:
	  stw       r0, 0x20(r21)
	  mr        r3, r28
	  bl        -0x36D1C4
	  lmw       r21, 0x774(r1)
	  lwz       r0, 0x7A4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x7A0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80390780
 * Size:	0014CC
 */
void Morimura::TChallengeSelect::doUpdate(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x100(r1)
	  mflr      r0
	  stw       r0, 0x104(r1)
	  stfd      f31, 0xF0(r1)
	  psq_st    f31,0xF8(r1),0,0
	  stfd      f30, 0xE0(r1)
	  psq_st    f30,0xE8(r1),0,0
	  stfd      f29, 0xD0(r1)
	  psq_st    f29,0xD8(r1),0,0
	  stfd      f28, 0xC0(r1)
	  psq_st    f28,0xC8(r1),0,0
	  stfd      f27, 0xB0(r1)
	  psq_st    f27,0xB8(r1),0,0
	  stmw      r25, 0x94(r1)
	  lwz       r4, 0x84(r3)
	  mr        r31, r3
	  lwz       r0, 0x80(r4)
	  subfic    r0, r0, 0x2
	  cntlzw    r0, r0
	  rlwinm.   r0,r0,27,24,31
	  beq-      .loc_0x94
	  lis       r3, 0x8050
	  addi      r3, r3, 0x7008
	  lbz       r0, 0x16(r3)
	  extsb     r0, r0
	  cmpwi     r0, -0x1
	  bne-      .loc_0x78
	  li        r0, 0
	  stb       r0, -0x7A28(r13)
	  b         .loc_0x94

	.loc_0x78:
	  lbz       r0, -0x7A28(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x8C
	  li        r0, 0
	  stb       r0, 0x84(r4)

	.loc_0x8C:
	  li        r0, 0x1
	  stb       r0, -0x7A28(r13)

	.loc_0x94:
	  lwz       r3, 0x88(r31)
	  li        r29, 0
	  li        r28, 0
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0xB0
	  li        r28, 0x1

	.loc_0xB0:
	  lbz       r0, 0x45(r31)
	  lwz       r27, 0x140(r31)
	  cmplwi    r0, 0
	  lwz       r26, 0xFC(r31)
	  beq-      .loc_0x9F8
	  lwz       r3, 0x90(r31)
	  lwz       r0, 0x1C(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x9F8
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x224(r3)
	  lbz       r0, 0xD4(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x9F8
	  lwz       r5, 0x8C(r31)
	  lwz       r4, 0x1C(r5)
	  rlwinm.   r0,r4,0,27,27
	  beq-      .loc_0x168
	  lwz       r3, 0x84(r31)
	  lwz       r0, 0x80(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x168
	  lwz       r3, 0x88(r31)
	  lfs       f0, 0xC28(r2)
	  lfs       f1, 0x24(r3)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x14C
	  mr        r3, r31
	  bl        0x226C
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1811
	  li        r5, 0
	  bl        -0x58294
	  b         .loc_0x9F8

	.loc_0x14C:
	  mr        r3, r31
	  bl        0x2274
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1811
	  li        r5, 0
	  bl        -0x582B0
	  b         .loc_0x9F8

	.loc_0x168:
	  andi.     r0, r4, 0x1100
	  beq-      .loc_0x444
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x444
	  lwz       r30, 0x84(r31)
	  lwz       r3, 0x80(r30)
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm.   r0,r0,1,31,31
	  beq-      .loc_0x30C
	  cmpwi     r3, 0x2
	  bne-      .loc_0x9F8
	  lbz       r3, -0x7A38(r13)
	  cmplwi    r3, 0
	  bne-      .loc_0x1B8
	  lbz       r0, -0x7A28(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x2F0
	  cmplwi    r3, 0
	  bne-      .loc_0x2F0

	.loc_0x1B8:
	  li        r0, 0x3
	  stw       r0, 0x80(r30)
	  lwz       r0, 0x80(r30)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x284
	  bge-      .loc_0x1DC
	  cmpwi     r0, 0x1
	  bge-      .loc_0x1E8
	  b         .loc_0x284

	.loc_0x1DC:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x284
	  b         .loc_0x234

	.loc_0x1E8:
	  lfs       f0, 0xC28(r2)
	  li        r25, 0
	  lfs       f28, 0xC34(r2)
	  lis       r28, 0x4330
	  stfs      f0, 0x8C(r30)
	  lfd       f27, 0xC50(r2)

	.loc_0x200:
	  xoris     r0, r25, 0x8000
	  stw       r28, 0x80(r1)
	  lwz       r3, 0x44(r30)
	  stw       r0, 0x84(r1)
	  lfd       f0, 0x80(r1)
	  fsubs     f0, f0, f27
	  fmadds    f1, f28, f0, f28
	  bl        -0x87548
	  addi      r25, r25, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r25, 0x4
	  blt+      .loc_0x200
	  b         .loc_0x284

	.loc_0x234:
	  lfs       f0, 0xC28(r2)
	  mr        r25, r30
	  li        r28, 0
	  stfs      f0, 0x8C(r30)

	.loc_0x244:
	  lwz       r3, 0x44(r25)
	  bl        -0x87538
	  addi      r28, r28, 0x1
	  addi      r25, r25, 0x4
	  cmpwi     r28, 0x4
	  blt+      .loc_0x244
	  lwz       r3, 0x58(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x5C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x284:
	  lbz       r0, -0x6760(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x2AC
	  li        r0, 0x1
	  mr        r3, r31
	  stb       r0, 0x134(r31)
	  bl        0x228C
	  lwz       r3, 0x90(r31)
	  li        r0, 0x1
	  stw       r0, 0x1C(r3)

	.loc_0x2AC:
	  lwz       r4, 0xFC(r31)
	  li        r0, 0
	  lwz       r3, 0x90(r31)
	  stw       r4, 0x10(r3)
	  lwz       r3, 0x90(r31)
	  stw       r0, 0x18(r3)
	  lbz       r0, -0x7A38(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x2DC
	  lwz       r3, 0x90(r31)
	  li        r0, 0x1
	  stw       r0, 0x18(r3)

	.loc_0x2DC:
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1800
	  li        r5, 0
	  bl        -0x58438
	  b         .loc_0x9F8

	.loc_0x2F0:
	  li        r0, 0x1
	  li        r4, 0x1807
	  stb       r0, 0x84(r30)
	  li        r5, 0
	  lwz       r3, -0x67A8(r13)
	  bl        -0x58454
	  b         .loc_0x9F8

	.loc_0x30C:
	  lbz       r0, -0x7A38(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x33C
	  lwz       r3, 0x48(r30)
	  lfs       f1, -0x7A2C(r13)
	  lfs       f2, 0xC28(r2)
	  bl        -0x875CC
	  lfs       f1, 0xC28(r2)
	  lwz       r3, 0x4C(r30)
	  fmr       f2, f1
	  bl        -0x875DC
	  b         .loc_0x35C

	.loc_0x33C:
	  lfs       f1, 0xC28(r2)
	  lwz       r3, 0x48(r30)
	  fmr       f2, f1
	  bl        -0x875F0
	  lwz       r3, 0x4C(r30)
	  lfs       f1, -0x7A2C(r13)
	  lfs       f2, 0xC28(r2)
	  bl        -0x87600

	.loc_0x35C:
	  lwz       r3, 0x84(r31)
	  li        r25, 0
	  li        r0, 0x1
	  stb       r25, 0x84(r3)
	  lwz       r30, 0x84(r31)
	  stw       r0, 0x80(r30)
	  lwz       r0, 0x80(r30)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x430
	  bge-      .loc_0x390
	  cmpwi     r0, 0x1
	  bge-      .loc_0x39C
	  b         .loc_0x430

	.loc_0x390:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x430
	  b         .loc_0x3E4

	.loc_0x39C:
	  lfs       f0, 0xC28(r2)
	  lis       r28, 0x4330
	  lfs       f28, 0xC34(r2)
	  stfs      f0, 0x8C(r30)
	  lfd       f27, 0xC50(r2)

	.loc_0x3B0:
	  xoris     r0, r25, 0x8000
	  stw       r28, 0x80(r1)
	  lwz       r3, 0x44(r30)
	  stw       r0, 0x84(r1)
	  lfd       f0, 0x80(r1)
	  fsubs     f0, f0, f27
	  fmadds    f1, f28, f0, f28
	  bl        -0x876F8
	  addi      r25, r25, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r25, 0x4
	  blt+      .loc_0x3B0
	  b         .loc_0x430

	.loc_0x3E4:
	  lfs       f0, 0xC28(r2)
	  mr        r28, r30
	  stfs      f0, 0x8C(r30)

	.loc_0x3F0:
	  lwz       r3, 0x44(r28)
	  bl        -0x876E4
	  addi      r25, r25, 0x1
	  addi      r28, r28, 0x4
	  cmpwi     r25, 0x4
	  blt+      .loc_0x3F0
	  lwz       r3, 0x58(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x5C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x430:
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1811
	  li        r5, 0
	  bl        -0x5858C
	  b         .loc_0x9F8

	.loc_0x444:
	  rlwinm.   r0,r4,0,22,22
	  beq-      .loc_0x5A8
	  lwz       r30, 0x84(r31)
	  lwz       r3, 0x80(r30)
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm.   r0,r0,1,31,31
	  beq-      .loc_0x54C
	  cmpwi     r3, 0x2
	  bne-      .loc_0x9F8
	  li        r0, 0x3
	  stw       r0, 0x80(r30)
	  lwz       r0, 0x80(r30)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x538
	  bge-      .loc_0x490
	  cmpwi     r0, 0x1
	  bge-      .loc_0x49C
	  b         .loc_0x538

	.loc_0x490:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x538
	  b         .loc_0x4E8

	.loc_0x49C:
	  lfs       f0, 0xC28(r2)
	  li        r25, 0
	  lfs       f28, 0xC34(r2)
	  lis       r28, 0x4330
	  stfs      f0, 0x8C(r30)
	  lfd       f27, 0xC50(r2)

	.loc_0x4B4:
	  xoris     r0, r25, 0x8000
	  stw       r28, 0x80(r1)
	  lwz       r3, 0x44(r30)
	  stw       r0, 0x84(r1)
	  lfd       f0, 0x80(r1)
	  fsubs     f0, f0, f27
	  fmadds    f1, f28, f0, f28
	  bl        -0x877FC
	  addi      r25, r25, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r25, 0x4
	  blt+      .loc_0x4B4
	  b         .loc_0x538

	.loc_0x4E8:
	  lfs       f0, 0xC28(r2)
	  mr        r28, r30
	  li        r25, 0
	  stfs      f0, 0x8C(r30)

	.loc_0x4F8:
	  lwz       r3, 0x44(r28)
	  bl        -0x877EC
	  addi      r25, r25, 0x1
	  addi      r28, r28, 0x4
	  cmpwi     r25, 0x4
	  blt+      .loc_0x4F8
	  lwz       r3, 0x58(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x5C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x538:
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1811
	  li        r5, 0
	  bl        -0x58694
	  b         .loc_0x9F8

	.loc_0x54C:
	  rlwinm.   r0,r28,0,24,31
	  bne-      .loc_0x570
	  mr        r3, r31
	  bl        0x1E6C
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1811
	  li        r5, 0
	  bl        -0x586B8
	  b         .loc_0x9F8

	.loc_0x570:
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x128(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x224(r3)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x9F8

	.loc_0x5A8:
	  lwz       r30, 0x84(r31)
	  lwz       r3, 0x80(r30)
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm.   r0,r0,1,31,31
	  bne-      .loc_0x834
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x9F8
	  lwz       r3, 0x18(r5)
	  rlwinm.   r0,r3,0,5,5
	  bne-      .loc_0x5DC
	  rlwinm.   r0,r3,0,29,29
	  beq-      .loc_0x664

	.loc_0x5DC:
	  lwz       r0, 0x12C(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x654
	  lwz       r0, 0x140(r31)
	  cmpwi     r0, 0
	  bge-      .loc_0x5FC
	  li        r0, 0x1
	  stw       r0, 0x140(r31)

	.loc_0x5FC:
	  lis       r3, 0x6666
	  lwz       r5, 0x130(r31)
	  addi      r0, r3, 0x6667
	  lwz       r4, -0x6684(r13)
	  mulhw     r0, r0, r5
	  srawi     r0, r0, 0x1
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3
	  cmpw      r4, r0
	  bge-      .loc_0x648
	  addi      r3, r4, 0x1
	  lwz       r4, -0x6688(r13)
	  mulli     r0, r3, 0x5
	  add       r0, r4, r0
	  cmpw      r0, r5
	  bgt-      .loc_0x648
	  stw       r3, -0x6684(r13)
	  li        r29, 0x1
	  b         .loc_0x654

	.loc_0x648:
	  li        r0, 0
	  li        r29, 0x1
	  stw       r0, -0x6684(r13)

	.loc_0x654:
	  lwz       r3, 0x12C(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x12C(r31)
	  b         .loc_0x9F8

	.loc_0x664:
	  rlwinm.   r0,r3,0,4,4
	  bne-      .loc_0x674
	  rlwinm.   r0,r3,0,28,28
	  beq-      .loc_0x704

	.loc_0x674:
	  lwz       r0, 0x12C(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x6F4
	  lwz       r0, 0x140(r31)
	  cmpwi     r0, 0
	  bge-      .loc_0x694
	  li        r0, 0
	  stw       r0, 0x140(r31)

	.loc_0x694:
	  lwz       r3, -0x6684(r13)
	  cmpwi     r3, 0
	  ble-      .loc_0x6B0
	  subi      r0, r3, 0x1
	  li        r29, 0x1
	  stw       r0, -0x6684(r13)
	  b         .loc_0x6F4

	.loc_0x6B0:
	  lis       r3, 0x6666
	  lwz       r0, 0x130(r31)
	  addi      r3, r3, 0x6667
	  lwz       r4, -0x6688(r13)
	  mulhw     r0, r3, r0
	  li        r29, 0x1
	  srawi     r0, r0, 0x1
	  rlwinm    r3,r0,1,31,31
	  add       r5, r0, r3
	  stw       r5, -0x6684(r13)
	  mulli     r3, r5, 0x5
	  lwz       r0, 0x130(r31)
	  add       r3, r4, r3
	  cmpw      r3, r0
	  ble-      .loc_0x6F4
	  subi      r0, r5, 0x1
	  stw       r0, -0x6684(r13)

	.loc_0x6F4:
	  lwz       r3, 0x12C(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x12C(r31)
	  b         .loc_0x9F8

	.loc_0x704:
	  rlwinm.   r0,r3,0,6,6
	  bne-      .loc_0x714
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0x784

	.loc_0x714:
	  lwz       r0, 0x12C(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x774
	  lwz       r0, 0x140(r31)
	  cmpwi     r0, 0
	  bge-      .loc_0x734
	  li        r0, 0x3
	  stw       r0, 0x140(r31)

	.loc_0x734:
	  lwz       r4, -0x6688(r13)
	  cmpwi     r4, 0x4
	  bge-      .loc_0x768
	  lwz       r3, -0x6684(r13)
	  lwz       r0, 0x130(r31)
	  mulli     r3, r3, 0x5
	  add       r3, r4, r3
	  cmpw      r3, r0
	  bge-      .loc_0x768
	  addi      r0, r4, 0x1
	  li        r29, 0x1
	  stw       r0, -0x6688(r13)
	  b         .loc_0x774

	.loc_0x768:
	  li        r0, 0
	  li        r29, 0x1
	  stw       r0, -0x6688(r13)

	.loc_0x774:
	  lwz       r3, 0x12C(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x12C(r31)
	  b         .loc_0x9F8

	.loc_0x784:
	  rlwinm.   r0,r3,0,7,7
	  bne-      .loc_0x794
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x7EC

	.loc_0x794:
	  lwz       r0, 0x12C(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x7DC
	  lwz       r0, 0x140(r31)
	  cmpwi     r0, 0
	  bge-      .loc_0x7B4
	  li        r0, 0x2
	  stw       r0, 0x140(r31)

	.loc_0x7B4:
	  lwz       r3, -0x6688(r13)
	  cmpwi     r3, 0
	  ble-      .loc_0x7D0
	  subi      r0, r3, 0x1
	  li        r29, 0x1
	  stw       r0, -0x6688(r13)
	  b         .loc_0x7DC

	.loc_0x7D0:
	  li        r0, 0x4
	  li        r29, 0x1
	  stw       r0, -0x6688(r13)

	.loc_0x7DC:
	  lwz       r3, 0x12C(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x12C(r31)
	  b         .loc_0x9F8

	.loc_0x7EC:
	  li        r0, 0
	  lfs       f0, 0xC90(r2)
	  stw       r0, 0x12C(r31)
	  lfs       f1, 0x14C(r31)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x808
	  stfs      f0, 0x14C(r31)

	.loc_0x808:
	  lfs       f2, 0x14C(r31)
	  lfs       f1, 0xCA8(r2)
	  lfs       f0, 0xC6C(r2)
	  fadds     f1, f2, f1
	  stfs      f1, 0x14C(r31)
	  lfs       f1, 0x14C(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x9F8
	  stfs      f0, 0x14C(r31)
	  b         .loc_0x9F8

	.loc_0x834:
	  lwz       r3, 0x18(r5)
	  rlwinm.   r0,r3,0,5,5
	  bne-      .loc_0x848
	  rlwinm.   r0,r3,0,29,29
	  beq-      .loc_0x914

	.loc_0x848:
	  lbz       r0, -0x7A38(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x908
	  lfs       f27, -0x7A2C(r13)
	  bne-      .loc_0x898
	  lwz       r3, 0x3C(r30)
	  lfs       f1, 0xCE4(r2)
	  lfs       f2, 0xCE8(r2)
	  lfs       f3, 0xCEC(r2)
	  lfs       f4, 0xC28(r2)
	  bl        -0x68118
	  fmr       f1, f27
	  lwz       r3, 0x48(r30)
	  lfs       f2, 0xC28(r2)
	  bl        -0x87B28
	  lfs       f1, 0xC28(r2)
	  lwz       r3, 0x4C(r30)
	  fmr       f2, f1
	  bl        -0x87B38
	  b         .loc_0x8F8

	.loc_0x898:
	  lfs       f1, 0xC28(r2)
	  lwz       r3, 0x48(r30)
	  fmr       f2, f1
	  bl        -0x87B4C
	  fmr       f1, f27
	  lwz       r3, 0x4C(r30)
	  lfs       f2, 0xC28(r2)
	  bl        -0x87B5C
	  lbz       r0, -0x7A28(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x8E0
	  lwz       r3, 0x40(r30)
	  lfs       f1, 0xCE4(r2)
	  lfs       f2, 0xCE8(r2)
	  lfs       f3, 0xCEC(r2)
	  lfs       f4, 0xC28(r2)
	  bl        -0x68180
	  b         .loc_0x8F8

	.loc_0x8E0:
	  lwz       r3, 0x40(r30)
	  lfs       f1, 0xCF0(r2)
	  lfs       f2, 0xC44(r2)
	  lfs       f3, 0xC84(r2)
	  lfs       f4, 0xC28(r2)
	  bl        -0x6819C

	.loc_0x8F8:
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1802
	  li        r5, 0
	  bl        -0x58A54

	.loc_0x908:
	  li        r0, 0
	  stb       r0, -0x7A38(r13)
	  b         .loc_0x9F8

	.loc_0x914:
	  rlwinm.   r0,r3,0,4,4
	  bne-      .loc_0x924
	  rlwinm.   r0,r3,0,28,28
	  beq-      .loc_0x9F8

	.loc_0x924:
	  lbz       r0, -0x7A38(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x9E4
	  lfs       f27, -0x7A2C(r13)
	  bne-      .loc_0x974
	  lwz       r3, 0x3C(r30)
	  lfs       f1, 0xCE4(r2)
	  lfs       f2, 0xCE8(r2)
	  lfs       f3, 0xCEC(r2)
	  lfs       f4, 0xC28(r2)
	  bl        -0x681F4
	  fmr       f1, f27
	  lwz       r3, 0x48(r30)
	  lfs       f2, 0xC28(r2)
	  bl        -0x87C04
	  lfs       f1, 0xC28(r2)
	  lwz       r3, 0x4C(r30)
	  fmr       f2, f1
	  bl        -0x87C14
	  b         .loc_0x9D4

	.loc_0x974:
	  lfs       f1, 0xC28(r2)
	  lwz       r3, 0x48(r30)
	  fmr       f2, f1
	  bl        -0x87C28
	  fmr       f1, f27
	  lwz       r3, 0x4C(r30)
	  lfs       f2, 0xC28(r2)
	  bl        -0x87C38
	  lbz       r0, -0x7A28(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x9BC
	  lwz       r3, 0x40(r30)
	  lfs       f1, 0xCE4(r2)
	  lfs       f2, 0xCE8(r2)
	  lfs       f3, 0xCEC(r2)
	  lfs       f4, 0xC28(r2)
	  bl        -0x6825C
	  b         .loc_0x9D4

	.loc_0x9BC:
	  lwz       r3, 0x40(r30)
	  lfs       f1, 0xCF0(r2)
	  lfs       f2, 0xC44(r2)
	  lfs       f3, 0xC84(r2)
	  lfs       f4, 0xC28(r2)
	  bl        -0x68278

	.loc_0x9D4:
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1802
	  li        r5, 0
	  bl        -0x58B30

	.loc_0x9E4:
	  li        r3, 0x1
	  li        r0, 0
	  stb       r3, -0x7A38(r13)
	  lwz       r3, 0x84(r31)
	  stb       r0, 0x84(r3)

	.loc_0x9F8:
	  lwz       r3, 0x90(r31)
	  lwz       r3, 0x20(r3)
	  lwz       r0, 0x8(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xA48
	  lbz       r0, -0x6760(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xA48
	  li        r3, 0
	  li        r0, 0x1
	  stb       r3, 0x134(r31)
	  mr        r3, r31
	  lwz       r4, 0x90(r31)
	  stw       r0, 0x1C(r4)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  li        r4, 0
	  bl        0xC0DCC

	.loc_0xA48:
	  lwz       r0, -0x6684(r13)
	  lwz       r3, -0x6688(r13)
	  mulli     r0, r0, 0x5
	  lwz       r4, 0x130(r31)
	  add       r0, r3, r0
	  cmpw      r0, r4
	  blt-      .loc_0xADC
	  lis       r3, 0x6666
	  addi      r5, r3, 0x6667
	  mulhw     r0, r5, r4
	  srawi     r0, r0, 0x1
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3
	  stw       r0, -0x6684(r13)
	  lwz       r4, 0x130(r31)
	  mulhw     r0, r5, r4
	  srawi     r0, r0, 0x1
	  rlwinm    r3,r0,1,31,31
	  add       r0, r0, r3
	  mulli     r0, r0, 0x5
	  sub       r0, r4, r0
	  stw       r0, -0x6688(r13)
	  lwz       r3, 0x130(r31)
	  cmpw      r0, r3
	  blt-      .loc_0xAB0
	  stw       r3, -0x6688(r13)

	.loc_0xAB0:
	  lwz       r0, -0x6684(r13)
	  lwz       r3, -0x6688(r13)
	  mulli     r0, r0, 0x5
	  add       r0, r3, r0
	  stw       r0, 0xFC(r31)
	  lwz       r3, 0xFC(r31)
	  lwz       r0, 0x130(r31)
	  cmpw      r3, r0
	  ble-      .loc_0xADC
	  li        r0, 0
	  stw       r0, 0xFC(r31)

	.loc_0xADC:
	  cmpwi     r27, 0
	  blt-      .loc_0xB00
	  lwz       r0, 0x140(r31)
	  cmpw      r27, r0
	  beq-      .loc_0xB00
	  li        r0, 0
	  lfs       f0, 0xC6C(r2)
	  stw       r0, 0x12C(r31)
	  stfs      f0, 0x14C(r31)

	.loc_0xB00:
	  lwz       r3, 0x12C(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x80(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f3, 0xC50(r2)
	  stw       r0, 0x84(r1)
	  lfs       f1, 0xC78(r2)
	  lfd       f2, 0x80(r1)
	  lfs       f0, 0x14C(r31)
	  fsubs     f2, f2, f3
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0xB60
	  li        r0, 0
	  lfs       f1, 0xC58(r2)
	  stw       r0, 0x12C(r31)
	  lfs       f0, 0xCE4(r2)
	  lfs       f2, 0x14C(r31)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x14C(r31)
	  lfs       f1, 0x14C(r31)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xB60
	  stfs      f0, 0x14C(r31)

	.loc_0xB60:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0xBE8
	  lwz       r0, -0x6684(r13)
	  lwz       r3, -0x6688(r13)
	  mulli     r0, r0, 0x5
	  add       r0, r3, r0
	  stw       r0, 0xFC(r31)
	  lwz       r0, 0xFC(r31)
	  cmpw      r26, r0
	  beq-      .loc_0xBD8
	  li        r0, 0x1
	  mr        r3, r31
	  stb       r0, 0x136(r31)
	  lwz       r4, 0xFC(r31)
	  bl        0xEC0
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1802
	  li        r5, 0
	  bl        -0x58CF8
	  lwz       r0, 0xFC(r31)
	  lwz       r3, 0x94(r31)
	  rlwinm    r0,r0,2,0,29
	  lfs       f1, 0xC84(r2)
	  lwzx      r3, r3, r0
	  lfs       f2, 0xC38(r2)
	  lwz       r3, 0x10(r3)
	  lfs       f3, 0xCB0(r2)
	  lfs       f4, 0xC28(r2)
	  bl        -0x68478
	  b         .loc_0xBE8

	.loc_0xBD8:
	  li        r0, 0
	  lfs       f0, 0xC6C(r2)
	  stw       r0, 0x12C(r31)
	  stfs      f0, 0x14C(r31)

	.loc_0xBE8:
	  lwz       r3, 0x80(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x84(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x88(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r25, 0x80(r31)
	  lwz       r0, 0x10(r25)
	  cmpwi     r0, 0x1
	  bge-      .loc_0xC4C
	  lis       r3, 0x8049
	  li        r4, 0x58
	  addi      r3, r3, 0x4694
	  li        r5, 0
	  crclr     6, 0x6
	  bl        -0x366D88

	.loc_0xC4C:
	  lwz       r3, 0x4(r25)
	  addi      r5, r1, 0x8
	  li        r4, 0
	  lwz       r3, 0x4(r3)
	  lwz       r3, 0x14(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lbz       r3, 0xB(r1)
	  stb       r3, -0x6680(r13)
	  lbz       r0, 0x135(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xC94
	  cmplwi    r3, 0x96
	  bge-      .loc_0xC94
	  li        r0, 0x96
	  stb       r0, -0x6680(r13)

	.loc_0xC94:
	  lfd       f28, 0xCA0(r2)
	  li        r26, 0
	  lfs       f27, 0xC90(r2)
	  li        r30, 0
	  lis       r28, 0x4330

	.loc_0xCA8:
	  lwz       r3, 0x94(r31)
	  mr        r5, r29
	  lwz       r4, 0xFC(r31)
	  lwzx      r27, r3, r30
	  mr        r3, r27
	  bl        -0x4B44
	  lwz       r0, 0xFC(r31)
	  cmpw      r26, r0
	  beq-      .loc_0xCD8
	  lbz       r0, 0x24(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0xE30

	.loc_0xCD8:
	  lfs       f0, -0x7A10(r13)
	  stfs      f0, 0x14(r27)
	  lfs       f0, 0x14(r27)
	  lfs       f1, -0x7A10(r13)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0xCF4
	  stfs      f1, 0x14(r27)

	.loc_0xCF4:
	  lfs       f1, 0x18(r27)
	  lfs       f2, -0x7A34(r13)
	  lfs       f0, 0xC90(r2)
	  fadds     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xD14
	  stfs      f1, 0x18(r27)
	  b         .loc_0xE78

	.loc_0xD14:
	  lbz       r0, 0x24(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0xE24
	  lwz       r3, 0x10(r27)
	  lfs       f1, 0xC84(r2)
	  lfs       f2, 0xC38(r2)
	  lfs       f3, 0xCB0(r2)
	  lfs       f4, 0xC28(r2)
	  bl        -0x685DC
	  li        r0, 0
	  stb       r0, 0x24(r27)
	  lwz       r0, 0x1C(r27)
	  cmpwi     r0, 0x3
	  bge-      .loc_0xE24
	  lwz       r0, 0x20(r27)
	  li        r4, 0x1830
	  li        r5, 0
	  stw       r0, 0x1C(r27)
	  lwz       r3, -0x67A8(r13)
	  bl        -0x58EB0
	  lwz       r3, 0x4(r27)
	  lis       r4, 0x804E
	  lwz       r0, 0x1C(r27)
	  addi      r4, r4, 0x5030
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  rlwinm    r0,r0,2,0,29
	  lwz       r12, 0x110(r12)
	  lwzx      r4, r4, r0
	  mtctr     r12
	  bctrl
	  lwz       r7, 0x4(r27)
	  lis       r3, 0x804C
	  lis       r6, 0x804C
	  lis       r4, 0x804E
	  lfs       f1, 0x8C(r7)
	  lis       r5, 0x804C
	  lfs       f0, 0x9C(r7)
	  li        r7, 0
	  stfs      f1, 0xC(r1)
	  addi      r0, r3, 0x14F0
	  lis       r3, 0x804E
	  addi      r9, r5, 0x1514
	  stfs      f0, 0x10(r1)
	  li        r5, 0x7
	  lwz       r11, 0xC(r1)
	  addi      r8, r6, 0x14D8
	  stw       r0, 0x48(r1)
	  addi      r6, r4, 0x7488
	  lwz       r10, 0x10(r1)
	  addi      r0, r3, 0x3DC4
	  stw       r11, 0x14(r1)
	  addi      r3, r1, 0x48
	  addi      r4, r1, 0x3C
	  stw       r10, 0x18(r1)
	  lfs       f1, 0x14(r1)
	  stw       r8, 0x48(r1)
	  lfs       f0, 0x18(r1)
	  stw       r6, 0x48(r1)
	  stw       r9, 0x44(r1)
	  stfs      f1, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  stb       r7, 0x4C(r1)
	  stb       r7, 0x4D(r1)
	  sth       r5, 0x50(r1)
	  stw       r7, 0x54(r1)
	  stw       r0, 0x48(r1)
	  bl        0x28290

	.loc_0xE24:
	  lfs       f0, 0xC90(r2)
	  stfs      f0, 0x18(r27)
	  b         .loc_0xE78

	.loc_0xE30:
	  lfs       f2, 0x14(r27)
	  lfs       f1, 0xC98(r2)
	  lfs       f0, 0xC90(r2)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x14(r27)
	  lfs       f1, 0x14(r27)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xE54
	  stfs      f0, 0x14(r27)

	.loc_0xE54:
	  lfs       f0, 0x18(r27)
	  lfs       f1, -0x7A34(r13)
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0xE70
	  fsubs     f0, f0, f1
	  stfs      f0, 0x18(r27)
	  b         .loc_0xE78

	.loc_0xE70:
	  lfs       f0, 0xC28(r2)
	  stfs      f0, 0x18(r27)

	.loc_0xE78:
	  lbz       r0, -0x6680(r13)
	  lfs       f0, 0x18(r27)
	  stw       r0, 0x84(r1)
	  lwz       r3, 0x8(r27)
	  fmuls     f0, f27, f0
	  stw       r28, 0x80(r1)
	  lwz       r12, 0x0(r3)
	  lfd       f1, 0x80(r1)
	  lwz       r12, 0x24(r12)
	  fsubs     f1, f1, f28
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x88(r1)
	  lwz       r4, 0x8C(r1)
	  mtctr     r12
	  bctrl
	  addi      r26, r26, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r26, 0x1E
	  blt+      .loc_0xCA8
	  li        r26, 0
	  mr        r25, r31

	.loc_0xED0:
	  lwz       r3, 0x9C(r25)
	  bl        -0x51C8
	  addi      r26, r26, 0x1
	  addi      r25, r25, 0x4
	  cmpwi     r26, 0x5
	  blt+      .loc_0xED0
	  lbz       r0, 0x136(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xF84
	  lfs       f2, 0x13C(r31)
	  lfs       f1, 0xCF8(r2)
	  lfs       f0, 0xCA8(r2)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x13C(r31)
	  lfs       f1, 0x13C(r31)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1008
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x136(r31)
	  lwz       r4, 0xFC(r31)
	  bl        0xF2C
	  lwz       r0, 0x140(r31)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xF6C
	  bge-      .loc_0xF48
	  cmpwi     r0, 0
	  beq-      .loc_0xF54
	  bge-      .loc_0xF60
	  b         .loc_0x1008

	.loc_0xF48:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x1008
	  b         .loc_0xF78

	.loc_0xF54:
	  li        r0, 0x1
	  stw       r0, 0x140(r31)
	  b         .loc_0x1008

	.loc_0xF60:
	  li        r0, 0
	  stw       r0, 0x140(r31)
	  b         .loc_0x1008

	.loc_0xF6C:
	  li        r0, 0x3
	  stw       r0, 0x140(r31)
	  b         .loc_0x1008

	.loc_0xF78:
	  li        r0, 0x2
	  stw       r0, 0x140(r31)
	  b         .loc_0x1008

	.loc_0xF84:
	  lwz       r3, 0x12C(r31)
	  lis       r0, 0x4330
	  stw       r0, 0x88(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f1, 0xC50(r2)
	  stw       r0, 0x8C(r1)
	  lfs       f2, 0xC28(r2)
	  lfd       f0, 0x88(r1)
	  fsubs     f0, f0, f1
	  fcmpu     cr0, f2, f0
	  bne-      .loc_0x1008
	  lfs       f1, 0xC6C(r2)
	  lfs       f0, 0x14C(r31)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x1008
	  lfs       f1, 0x13C(r31)
	  lfs       f0, 0xCE4(r2)
	  fadds     f0, f1, f0
	  stfs      f0, 0x13C(r31)
	  lwz       r0, 0x140(r31)
	  cmpwi     r0, 0x1
	  ble-      .loc_0xFEC
	  lfs       f1, 0x13C(r31)
	  lfs       f0, 0xCF0(r2)
	  fadds     f0, f1, f0
	  stfs      f0, 0x13C(r31)

	.loc_0xFEC:
	  lfs       f1, 0x13C(r31)
	  lfs       f0, 0xC90(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1008
	  stfs      f0, 0x13C(r31)
	  li        r0, -0x1
	  stw       r0, 0x140(r31)

	.loc_0x1008:
	  lfs       f31, 0xC94(r2)
	  mr        r26, r31
	  lfs       f27, 0xC28(r2)
	  li        r27, 0
	  lfs       f28, 0xC90(r2)
	  lfs       f29, 0xC8C(r2)
	  lfs       f30, 0xC6C(r2)

	.loc_0x1024:
	  lwz       r25, 0xB0(r26)
	  lfs       f1, 0x10(r25)
	  lfs       f0, 0x14(r25)
	  fsubs     f1, f1, f0
	  fabs      f0, f1
	  frsp      f0, f0
	  fcmpo     cr0, f0, f31
	  ble-      .loc_0x104C
	  lfs       f0, 0xC34(r2)
	  fmuls     f1, f1, f0

	.loc_0x104C:
	  lfs       f0, 0x14(r25)
	  fadds     f0, f0, f1
	  stfs      f0, 0x14(r25)
	  lfs       f0, 0x14(r25)
	  fcmpo     cr0, f0, f27
	  bge-      .loc_0x1068
	  stfs      f27, 0x14(r25)

	.loc_0x1068:
	  lfs       f0, 0x14(r25)
	  fcmpo     cr0, f0, f28
	  ble-      .loc_0x1078
	  stfs      f28, 0x14(r25)

	.loc_0x1078:
	  lwz       r3, 0x0(r25)
	  lfs       f0, 0x14(r25)
	  stfs      f28, 0xCC(r3)
	  stfs      f0, 0xD0(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x14(r25)
	  li        r0, 0
	  lwz       r3, 0x4(r25)
	  fmuls     f0, f29, f0
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x8(r25)
	  fcmpo     cr0, f0, f29
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0xC(r25)
	  stb       r0, 0xB0(r3)
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x10D4
	  lwz       r3, 0x4(r25)
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)

	.loc_0x10D4:
	  fcmpo     cr0, f0, f30
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x10EC
	  lwz       r3, 0x8(r25)
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)

	.loc_0x10EC:
	  fcmpo     cr0, f0, f28
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1104
	  lwz       r3, 0xC(r25)
	  li        r0, 0x1
	  stb       r0, 0xB0(r3)

	.loc_0x1104:
	  lwz       r3, 0xE0(r26)
	  li        r4, 0xFF
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0xC28(r2)
	  lfs       f0, 0x13C(r31)
	  lwz       r0, 0x140(r31)
	  fmr       f6, f5
	  fsubs     f7, f28, f0
	  cmpwi     r0, 0x2
	  beq-      .loc_0x1168
	  bge-      .loc_0x114C
	  cmpwi     r0, 0
	  beq-      .loc_0x1158
	  bge-      .loc_0x1160
	  b         .loc_0x1174

	.loc_0x114C:
	  cmpwi     r0, 0x4
	  bge-      .loc_0x1174
	  b         .loc_0x1170

	.loc_0x1158:
	  lfs       f6, 0xCFC(r2)
	  b         .loc_0x1174

	.loc_0x1160:
	  lfs       f6, 0xD00(r2)
	  b         .loc_0x1174

	.loc_0x1168:
	  lfs       f5, 0xD04(r2)
	  b         .loc_0x1174

	.loc_0x1170:
	  lfs       f5, 0xD08(r2)

	.loc_0x1174:
	  lwz       r3, 0xE0(r26)
	  lfs       f1, 0x28(r3)
	  lfs       f0, 0x20(r3)
	  lfs       f3, 0x2C(r3)
	  fsubs     f0, f1, f0
	  lfs       f2, 0x24(r3)
	  lfs       f1, 0xD4(r3)
	  fsubs     f3, f3, f2
	  lfs       f4, 0xD8(r3)
	  fmuls     f2, f5, f0
	  fmuls     f0, f6, f3
	  fmadds    f1, f7, f2, f1
	  fmadds    f0, f7, f0, f4
	  stfs      f1, 0xD4(r3)
	  stfs      f0, 0xD8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  addi      r27, r27, 0x1
	  addi      r26, r26, 0x4
	  cmpwi     r27, 0x2
	  blt+      .loc_0x1024
	  lbz       r0, 0x135(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x1224
	  lfs       f0, 0x138(r31)
	  lis       r0, 0x4330
	  lfs       f4, 0xD0C(r2)
	  stw       r0, 0x88(r1)
	  fadds     f0, f0, f4
	  lfd       f3, 0xC50(r2)
	  lfs       f1, 0xD10(r2)
	  stfs      f0, 0x138(r31)
	  lwz       r0, -0x6684(r13)
	  lfs       f0, 0x138(r31)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0x8C(r1)
	  lfd       f2, 0x88(r1)
	  fsubs     f2, f2, f3
	  fnmsubs   f1, f4, f2, f1
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x1224
	  stfs      f1, 0x138(r31)

	.loc_0x1224:
	  lwz       r0, 0xFC(r31)
	  lwz       r3, 0x94(r31)
	  rlwinm    r0,r0,2,0,29
	  lfs       f0, 0x138(r31)
	  lwzx      r3, r3, r0
	  lwz       r3, 0x8(r3)
	  stfs      f0, 0xB8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x135(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x13DC
	  mr        r4, r31
	  li        r5, 0x1
	  li        r6, 0

	.loc_0x1268:
	  lwz       r3, 0x9C(r4)
	  lwz       r0, 0x72C(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x1280
	  li        r0, 0x1
	  b         .loc_0x12B8

	.loc_0x1280:
	  cmpwi     r0, 0x32
	  ble-      .loc_0x128C
	  li        r0, 0x32

	.loc_0x128C:
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x12B4

	.loc_0x1298:
	  lwz       r0, 0x24(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x12AC
	  li        r0, 0
	  b         .loc_0x12B8

	.loc_0x12AC:
	  addi      r3, r3, 0x24
	  bdnz+     .loc_0x1298

	.loc_0x12B4:
	  li        r0, 0x1

	.loc_0x12B8:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x12C4
	  li        r5, 0

	.loc_0x12C4:
	  addi      r6, r6, 0x1
	  addi      r4, r4, 0x4
	  cmpwi     r6, 0x5
	  blt+      .loc_0x1268
	  rlwinm.   r0,r5,0,24,31
	  beq-      .loc_0x13DC
	  lwz       r3, 0xF0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, -0x667C(r13)
	  cmpwi     r0, 0
	  ble-      .loc_0x13A0
	  lwz       r0, 0xFC(r31)
	  lis       r6, 0x804C
	  lwz       r3, 0x94(r31)
	  lis       r5, 0x804C
	  rlwinm    r0,r0,2,0,29
	  lis       r4, 0x804E
	  lwzx      r8, r3, r0
	  lis       r7, 0x804C
	  lis       r3, 0x804E
	  addi      r9, r6, 0x14F0
	  lwz       r11, 0x8(r8)
	  addi      r8, r5, 0x14D8
	  addi      r6, r4, 0x7488
	  addi      r10, r7, 0x1514
	  lfs       f1, 0x8C(r11)
	  addi      r0, r3, 0x5090
	  lfs       f0, 0x9C(r11)
	  li        r7, 0
	  stfs      f1, 0x34(r1)
	  li        r5, 0x6
	  addi      r3, r1, 0x64
	  addi      r4, r1, 0x74
	  stfs      f0, 0x38(r1)
	  lwz       r11, 0x34(r1)
	  stw       r9, 0x64(r1)
	  lwz       r9, 0x38(r1)
	  stw       r11, 0x24(r1)
	  stw       r9, 0x28(r1)
	  lfs       f1, 0x24(r1)
	  stw       r8, 0x64(r1)
	  lfs       f0, 0x28(r1)
	  stw       r6, 0x64(r1)
	  stw       r10, 0x7C(r1)
	  stfs      f1, 0x74(r1)
	  stfs      f0, 0x78(r1)
	  stb       r7, 0x68(r1)
	  stb       r7, 0x69(r1)
	  sth       r5, 0x6C(r1)
	  stw       r7, 0x70(r1)
	  stw       r0, 0x64(r1)
	  bl        0x27D14

	.loc_0x13A0:
	  li        r0, 0
	  stb       r0, 0x135(r31)
	  lbz       r0, -0x6760(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x13C0
	  mr        r3, r31
	  bl        0x1030
	  b         .loc_0x13DC

	.loc_0x13C0:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  li        r4, 0
	  bl        0xC0438

	.loc_0x13DC:
	  lwz       r0, -0x667C(r13)
	  cmpwi     r0, 0
	  beq-      .loc_0x1464
	  lbz       r0, 0x144(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1464
	  li        r0, 0x1
	  lis       r3, 0x804C
	  stb       r0, 0x144(r31)
	  addi      r0, r3, 0x1514
	  addi      r4, r1, 0x58
	  lwz       r3, 0xFC(r31)
	  lwz       r5, 0x94(r31)
	  rlwinm    r3,r3,2,0,29
	  lwzx      r3, r5, r3
	  lwz       r3, 0x8(r3)
	  lfs       f1, 0x8C(r3)
	  lfs       f0, 0x9C(r3)
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x30(r1)
	  lwz       r5, 0x2C(r1)
	  lwz       r3, 0x30(r1)
	  stw       r5, 0x1C(r1)
	  stw       r3, 0x20(r1)
	  lfs       f1, 0x1C(r1)
	  lfs       f0, 0x20(r1)
	  stw       r0, 0x60(r1)
	  stfs      f1, 0x58(r1)
	  stfs      f0, 0x5C(r1)
	  lwz       r3, 0xF0(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1464:
	  lbz       r0, -0x6760(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x148C
	  lbz       r0, -0x667E(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x148C
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, -0x667E(r13)
	  bl        0x10A0

	.loc_0x148C:
	  li        r3, 0
	  psq_l     f31,0xF8(r1),0,0
	  lfd       f31, 0xF0(r1)
	  psq_l     f30,0xE8(r1),0,0
	  lfd       f30, 0xE0(r1)
	  psq_l     f29,0xD8(r1),0,0
	  lfd       f29, 0xD0(r1)
	  psq_l     f28,0xC8(r1),0,0
	  lfd       f28, 0xC0(r1)
	  psq_l     f27,0xB8(r1),0,0
	  lfd       f27, 0xB0(r1)
	  lmw       r25, 0x94(r1)
	  lwz       r0, 0x104(r1)
	  mtlr      r0
	  addi      r1, r1, 0x100
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80391C4C
 * Size:	000514
 */
void Morimura::TChallengeSelect::doDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stmw      r23, 0x6C(r1)
	  mr        r28, r3
	  mr        r29, r4
	  addi      r31, r29, 0x190
	  mr        r5, r31
	  lwz       r3, 0x80(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r29, 0xBC
	  lwz       r12, 0xBC(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  li        r23, 0
	  mr        r24, r28

	.loc_0x50:
	  lwz       r26, 0x9C(r24)
	  lwz       r3, 0x72C(r26)
	  cmpwi     r3, 0x32
	  ble-      .loc_0x64
	  li        r3, 0x32

	.loc_0x64:
	  subi      r27, r3, 0x1
	  mulli     r0, r27, 0x24
	  add       r25, r26, r0
	  b         .loc_0x1A8

	.loc_0x74:
	  lwz       r30, 0x0(r26)
	  li        r4, 0
	  lfs       f1, 0x30(r25)
	  li        r5, 0
	  mr        r3, r30
	  lfs       f4, 0x28(r30)
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lfs       f3, 0x20(r30)
	  lfs       f2, 0x2C(r30)
	  lfs       f0, 0x24(r30)
	  fsubs     f3, f4, f3
	  lwz       r12, 0xEC(r12)
	  fsubs     f4, f2, f0
	  lfs       f2, 0x34(r25)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r30, 0x4(r26)
	  li        r4, 0
	  lfs       f4, 0x30(r25)
	  li        r5, 0
	  lfs       f1, 0x28(r30)
	  mr        r3, r30
	  lfs       f0, 0x20(r30)
	  li        r6, 0
	  lwz       r12, 0x0(r30)
	  fsubs     f3, f1, f0
	  lfs       f0, 0x14(r26)
	  lfs       f5, 0x34(r25)
	  lfs       f2, 0x18(r26)
	  fsubs     f1, f4, f0
	  lfs       f4, 0x2C(r30)
	  lfs       f0, 0x24(r30)
	  fsubs     f2, f5, f2
	  lwz       r12, 0xEC(r12)
	  fneg      f3, f3
	  fsubs     f4, f4, f0
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r30, 0x8(r26)
	  li        r4, 0
	  lfs       f1, 0x30(r25)
	  li        r5, 0
	  mr        r3, r30
	  lfs       f0, 0x1C(r26)
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lfs       f2, 0x34(r25)
	  fsubs     f1, f1, f0
	  lfs       f0, 0x20(r26)
	  lfs       f5, 0x28(r30)
	  lfs       f3, 0x20(r30)
	  fsubs     f2, f2, f0
	  lfs       f4, 0x2C(r30)
	  lfs       f0, 0x24(r30)
	  fsubs     f3, f5, f3
	  lwz       r12, 0xEC(r12)
	  fsubs     f4, f4, f0
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  subi      r25, r25, 0x24
	  subi      r27, r27, 0x1

	.loc_0x1A8:
	  cmpwi     r27, 0
	  bge+      .loc_0x74
	  addi      r23, r23, 0x1
	  addi      r24, r24, 0x4
	  cmpwi     r23, 0x5
	  blt+      .loc_0x50
	  mr        r3, r28
	  li        r30, 0
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x224(r3)
	  lbz       r0, 0xD4(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x258
	  mr        r3, r28
	  li        r30, 0x1
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x224(r3)
	  lbz       r0, 0xD5(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x234
	  lbz       r3, 0x128(r28)
	  addi      r0, r3, 0x14
	  stb       r0, 0x128(r28)
	  lbz       r0, 0x128(r28)
	  cmplwi    r0, 0xC8
	  ble-      .loc_0x320
	  li        r0, 0xC8
	  stb       r0, 0x128(r28)
	  b         .loc_0x320

	.loc_0x234:
	  lbz       r3, 0x128(r28)
	  cmplwi    r3, 0x14
	  ble-      .loc_0x24C
	  subi      r0, r3, 0x14
	  stb       r0, 0x128(r28)
	  b         .loc_0x320

	.loc_0x24C:
	  li        r0, 0
	  stb       r0, 0x128(r28)
	  b         .loc_0x320

	.loc_0x258:
	  lwz       r3, 0x88(r28)
	  lwz       r0, 0x18(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0x2BC
	  cmpwi     r0, 0x3
	  li        r30, 0x1
	  bne-      .loc_0x298
	  lbz       r3, 0x128(r28)
	  cmplwi    r3, 0x19
	  ble-      .loc_0x28C
	  subi      r0, r3, 0x19
	  stb       r0, 0x128(r28)
	  b         .loc_0x320

	.loc_0x28C:
	  li        r0, 0
	  stb       r0, 0x128(r28)
	  b         .loc_0x320

	.loc_0x298:
	  lbz       r3, 0x128(r28)
	  addi      r0, r3, 0x14
	  stb       r0, 0x128(r28)
	  lbz       r0, 0x128(r28)
	  cmplwi    r0, 0xC8
	  ble-      .loc_0x320
	  li        r0, 0xC8
	  stb       r0, 0x128(r28)
	  b         .loc_0x320

	.loc_0x2BC:
	  lwz       r3, 0x84(r28)
	  lwz       r3, 0x80(r3)
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x320
	  cmpwi     r3, 0x3
	  li        r30, 0x1
	  bne-      .loc_0x300
	  lbz       r3, 0x128(r28)
	  cmplwi    r3, 0x1E
	  ble-      .loc_0x2F4
	  subi      r0, r3, 0x1E
	  stb       r0, 0x128(r28)
	  b         .loc_0x320

	.loc_0x2F4:
	  li        r0, 0
	  stb       r0, 0x128(r28)
	  b         .loc_0x320

	.loc_0x300:
	  lbz       r3, 0x128(r28)
	  addi      r0, r3, 0x14
	  stb       r0, 0x128(r28)
	  lbz       r0, 0x128(r28)
	  cmplwi    r0, 0xC8
	  ble-      .loc_0x320
	  li        r0, 0xC8
	  stb       r0, 0x128(r28)

	.loc_0x320:
	  addi      r3, r29, 0x190
	  lwz       r12, 0x190(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x404
	  li        r0, -0x1
	  li        r9, 0
	  stw       r0, 0x34(r1)
	  li        r8, 0x50
	  lbz       r0, 0x128(r28)
	  mr        r3, r31
	  stb       r9, 0x37(r1)
	  addi      r4, r1, 0x20
	  addi      r5, r1, 0x24
	  addi      r6, r1, 0x28
	  stb       r9, 0x34(r1)
	  addi      r7, r1, 0x2C
	  stb       r9, 0x35(r1)
	  stb       r8, 0x36(r1)
	  stb       r0, 0x37(r1)
	  lwz       r0, 0x34(r1)
	  stw       r0, 0xC(r1)
	  stw       r0, 0x2C(r1)
	  stw       r0, 0x28(r1)
	  stw       r0, 0x24(r1)
	  stw       r0, 0x20(r1)
	  bl        -0x35B950
	  li        r3, 0
	  bl        -0x2A8E8C
	  bl        0x9123C
	  lhz       r26, 0x6(r3)
	  bl        0x91234
	  lhz       r4, 0x4(r3)
	  lis       r0, 0x4330
	  lfs       f3, 0xC28(r2)
	  mr        r3, r31
	  stw       r4, 0x5C(r1)
	  addi      r4, r1, 0x48
	  lfd       f2, 0xCA0(r2)
	  stw       r0, 0x58(r1)
	  lfd       f0, 0x58(r1)
	  stw       r26, 0x64(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x60(r1)
	  lfd       f0, 0x60(r1)
	  fadds     f1, f3, f1
	  stfs      f3, 0x48(r1)
	  fsubs     f0, f0, f2
	  stfs      f3, 0x4C(r1)
	  fadds     f0, f3, f0
	  stfs      f1, 0x50(r1)
	  stfs      f0, 0x54(r1)
	  bl        -0x35B870
	  li        r3, 0x1
	  bl        -0x2A8EF4

	.loc_0x404:
	  lwz       r3, 0x84(r28)
	  mr        r4, r29
	  mr        r5, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x88(r28)
	  mr        r4, r29
	  mr        r5, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lbz       r3, 0x44(r28)
	  li        r0, -0x1
	  stw       r0, 0x30(r1)
	  li        r0, 0
	  subfic    r8, r3, 0xFF
	  mr        r3, r31
	  stb       r0, 0x30(r1)
	  addi      r4, r1, 0x10
	  addi      r5, r1, 0x14
	  addi      r6, r1, 0x18
	  stb       r0, 0x31(r1)
	  addi      r7, r1, 0x1C
	  stb       r0, 0x32(r1)
	  stb       r8, 0x33(r1)
	  lwz       r0, 0x30(r1)
	  stw       r0, 0x8(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x18(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0x10(r1)
	  bl        -0x35BA4C
	  li        r3, 0
	  bl        -0x2A8F88
	  bl        0x91140
	  lhz       r26, 0x6(r3)
	  bl        0x91138
	  lhz       r4, 0x4(r3)
	  lis       r0, 0x4330
	  lfs       f3, 0xC28(r2)
	  mr        r3, r31
	  stw       r4, 0x64(r1)
	  addi      r4, r1, 0x38
	  lfd       f2, 0xCA0(r2)
	  stw       r0, 0x60(r1)
	  lfd       f0, 0x60(r1)
	  stw       r26, 0x5C(r1)
	  fsubs     f1, f0, f2
	  stw       r0, 0x58(r1)
	  lfd       f0, 0x58(r1)
	  fadds     f1, f3, f1
	  stfs      f3, 0x38(r1)
	  fsubs     f0, f0, f2
	  stfs      f3, 0x3C(r1)
	  fadds     f0, f3, f0
	  stfs      f1, 0x40(r1)
	  stfs      f0, 0x44(r1)
	  bl        -0x35B96C
	  li        r3, 0x1
	  bl        -0x2A8FF0
	  lmw       r23, 0x6C(r1)
	  lwz       r0, 0x94(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80392160
 * Size:	000078
 */
void Morimura::TChallengeSelect::doUpdateFadeoutFinish(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x90(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x3FD4
	  li        r4, 0x8AA
	  addi      r5, r5, 0x3FEC
	  crclr     6, 0x6
	  bl        -0x367B58

	.loc_0x3C:
	  lbz       r0, 0x134(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x58
	  lwz       r3, 0x90(r31)
	  li        r0, 0x3
	  stw       r0, 0x1C(r3)
	  b         .loc_0x64

	.loc_0x58:
	  lwz       r3, 0x90(r31)
	  li        r0, 0x2
	  stw       r0, 0x1C(r3)

	.loc_0x64:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803921D8
 * Size:	0003F8
 */
void Morimura::TChallengeSelect::setInfo(int)
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
	  stfd      f29, 0x20(r1)
	  psq_st    f29,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  lis       r4, 0x8049
	  cmpwi     r28, 0x1E
	  mr        r30, r3
	  addi      r31, r4, 0x3FC0
	  blt-      .loc_0x60
	  addi      r3, r31, 0x14
	  addi      r5, r31, 0x2C
	  li        r4, 0x8B6
	  crclr     6, 0x6
	  bl        -0x367BF4

	.loc_0x60:
	  lbz       r0, -0x6760(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x114
	  lwz       r3, 0x98(r30)
	  rlwinm    r0,r28,2,0,29
	  lwzx      r29, r3, r0
	  lwz       r0, 0x10(r29)
	  stw       r0, 0x108(r30)
	  lwz       r0, 0x18(r29)
	  stw       r0, 0x10C(r30)
	  lwz       r0, 0x14(r29)
	  stw       r0, 0x110(r30)
	  lwz       r0, 0x1C(r29)
	  stw       r0, 0x114(r30)
	  lwz       r0, 0x20(r29)
	  stw       r0, 0x118(r30)
	  lwz       r0, 0xC(r29)
	  stw       r0, 0x11C(r30)
	  lwz       r0, 0x8(r29)
	  stw       r0, 0x120(r30)
	  lwz       r0, 0x4(r29)
	  stw       r0, 0x124(r30)
	  lwz       r0, 0x24(r29)
	  cmpwi     r0, -0x1
	  bne-      .loc_0xD4
	  lwz       r3, 0xB8(r30)
	  li        r4, 0x1
	  bl        -0x86ABC
	  b         .loc_0xE4

	.loc_0xD4:
	  stw       r0, 0x100(r30)
	  li        r4, 0
	  lwz       r3, 0xB8(r30)
	  bl        -0x86AD0

	.loc_0xE4:
	  lwz       r0, 0x28(r29)
	  cmpwi     r0, -0x1
	  bne-      .loc_0x100
	  lwz       r3, 0xBC(r30)
	  li        r4, 0x1
	  bl        -0x86AE8
	  b         .loc_0x210

	.loc_0x100:
	  stw       r0, 0x104(r30)
	  li        r4, 0
	  lwz       r3, 0xBC(r30)
	  bl        -0x86AFC
	  b         .loc_0x210

	.loc_0x114:
	  lwz       r3, 0x90(r30)
	  mr        r4, r28
	  lwz       r3, 0x8(r3)
	  bl        -0x15D1C4
	  mr        r29, r3
	  li        r4, 0x1
	  lwz       r3, 0x10(r3)
	  bl        -0x1A0D58
	  stw       r3, 0x108(r30)
	  li        r4, 0x2
	  lwz       r3, 0x10(r29)
	  bl        -0x1A0D68
	  stw       r3, 0x10C(r30)
	  li        r4, 0
	  lwz       r3, 0x10(r29)
	  bl        -0x1A0D78
	  stw       r3, 0x110(r30)
	  li        r4, 0x4
	  lwz       r3, 0x10(r29)
	  bl        -0x1A0D88
	  stw       r3, 0x114(r30)
	  li        r4, 0x3
	  lwz       r3, 0x10(r29)
	  bl        -0x1A0D98
	  stw       r3, 0x118(r30)
	  li        r4, 0
	  lwz       r0, 0x4(r29)
	  stw       r0, 0x11C(r30)
	  lwz       r0, 0x8(r29)
	  stw       r0, 0x120(r30)
	  lwz       r0, 0x0(r29)
	  stw       r0, 0x124(r30)
	  lwz       r3, 0x14(r29)
	  bl        -0x15E624
	  cmpwi     r3, -0x1
	  bne-      .loc_0x1B4
	  lwz       r3, 0xB8(r30)
	  li        r4, 0x1
	  bl        -0x86B9C
	  b         .loc_0x1D0

	.loc_0x1B4:
	  lwz       r3, 0x14(r29)
	  li        r4, 0
	  bl        -0x15E648
	  stw       r3, 0x100(r30)
	  li        r4, 0
	  lwz       r3, 0xB8(r30)
	  bl        -0x86BBC

	.loc_0x1D0:
	  lwz       r3, 0x18(r29)
	  li        r4, 0
	  bl        -0x15E664
	  cmpwi     r3, -0x1
	  bne-      .loc_0x1F4
	  lwz       r3, 0xBC(r30)
	  li        r4, 0x1
	  bl        -0x86BDC
	  b         .loc_0x210

	.loc_0x1F4:
	  lwz       r3, 0x18(r29)
	  li        r4, 0
	  bl        -0x15E688
	  stw       r3, 0x104(r30)
	  li        r4, 0
	  lwz       r3, 0xBC(r30)
	  bl        -0x86BFC

	.loc_0x210:
	  lis       r3, 0xF
	  lwz       r6, 0x100(r30)
	  addi      r0, r3, 0x4240
	  cmplw     r6, r0
	  ble-      .loc_0x238
	  addi      r3, r31, 0x14
	  addi      r5, r31, 0x6E0
	  li        r4, 0x8F7
	  crclr     6, 0x6
	  bl        -0x367DCC

	.loc_0x238:
	  lis       r3, 0xF
	  lwz       r6, 0x104(r30)
	  addi      r0, r3, 0x4240
	  cmplw     r6, r0
	  ble-      .loc_0x260
	  addi      r3, r31, 0x14
	  addi      r5, r31, 0x6F0
	  li        r4, 0x8F8
	  crclr     6, 0x6
	  bl        -0x367DF4

	.loc_0x260:
	  li        r28, 0
	  mr        r29, r30

	.loc_0x268:
	  lwz       r7, 0x108(r29)
	  cmplwi    r7, 0x64
	  ble-      .loc_0x28C
	  mr        r6, r28
	  addi      r3, r31, 0x14
	  addi      r5, r31, 0x700
	  li        r4, 0x8FA
	  crclr     6, 0x6
	  bl        -0x367E20

	.loc_0x28C:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r28, 0x5
	  blt+      .loc_0x268
	  li        r28, 0
	  mr        r29, r30

	.loc_0x2A4:
	  lwz       r7, 0x11C(r29)
	  cmplwi    r7, 0x64
	  ble-      .loc_0x2C8
	  mr        r6, r28
	  addi      r3, r31, 0x14
	  addi      r5, r31, 0x710
	  li        r4, 0x8FE
	  crclr     6, 0x6
	  bl        -0x367E5C

	.loc_0x2C8:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r28, 0x2
	  blt+      .loc_0x2A4
	  lwz       r6, 0x124(r30)
	  cmplwi    r6, 0x64
	  ble-      .loc_0x2F8
	  addi      r3, r31, 0x14
	  addi      r5, r31, 0x724
	  li        r4, 0x901
	  crclr     6, 0x6
	  bl        -0x367E8C

	.loc_0x2F8:
	  lfd       f29, 0xC50(r2)
	  mr        r29, r30
	  lfs       f30, 0xC8C(r2)
	  li        r28, 0
	  lfs       f31, 0xC90(r2)
	  lis       r31, 0x4330

	.loc_0x310:
	  lwz       r3, 0xB8(r29)
	  li        r4, 0x1
	  bl        0xF6CC
	  lwz       r3, 0xD4(r29)
	  li        r4, 0x1
	  bl        0xF6C0
	  lwz       r0, 0x11C(r29)
	  li        r4, 0
	  lwz       r5, 0xB0(r29)
	  xoris     r0, r0, 0x8000
	  stw       r31, 0x8(r1)
	  lfs       f1, 0x10(r5)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  stfs      f1, 0x14(r5)
	  fsubs     f0, f0, f29
	  lwz       r3, 0x4(r5)
	  fdivs     f0, f0, f30
	  stb       r4, 0xB0(r3)
	  lwz       r3, 0x8(r5)
	  stb       r4, 0xB0(r3)
	  lwz       r3, 0xC(r5)
	  stb       r4, 0xB0(r3)
	  stfs      f0, 0x10(r5)
	  lfs       f0, 0x10(r5)
	  fcmpo     cr0, f0, f31
	  ble-      .loc_0x380
	  stfs      f31, 0x10(r5)

	.loc_0x380:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r28, 0x2
	  blt+      .loc_0x310
	  li        r28, 0
	  mr        r29, r30

	.loc_0x398:
	  lwz       r3, 0xC0(r29)
	  li        r4, 0x1
	  bl        0xF644
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r28, 0x5
	  blt+      .loc_0x398
	  lwz       r3, 0xDC(r30)
	  li        r4, 0x1
	  bl        0xF628
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  psq_l     f29,0x28(r1),0,0
	  lfd       f29, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803925D0
 * Size:	0000D0
 */
void Morimura::TChallengeSelect::setStageName(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lbz       r0, -0x6760(r13)
	  lwz       r30, 0xE0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  lwz       r3, 0x7C(r29)
	  bl        -0x164B1C
	  mr        r31, r3
	  lwz       r3, 0xEC(r29)
	  lwz       r4, 0x74(r31)
	  subi      r4, r4, 0x1
	  bl        0xEBF8
	  stw       r4, 0x1C(r30)
	  stw       r3, 0x18(r30)
	  lwz       r4, 0x74(r31)
	  lwz       r31, 0xE4(r29)
	  lwz       r3, 0xEC(r29)
	  subi      r4, r4, 0x1
	  bl        0xEBDC
	  stw       r4, 0x1C(r31)
	  stw       r3, 0x18(r31)
	  b         .loc_0xB4

	.loc_0x70:
	  lwz       r3, 0x90(r29)
	  lwz       r3, 0x8(r3)
	  bl        -0x15D514
	  mr        r31, r3
	  lwz       r3, 0xEC(r29)
	  lwz       r4, 0x1C(r31)
	  subi      r4, r4, 0x1
	  bl        0xEBB0
	  stw       r4, 0x1C(r30)
	  stw       r3, 0x18(r30)
	  lwz       r4, 0x1C(r31)
	  lwz       r31, 0xE4(r29)
	  lwz       r3, 0xEC(r29)
	  subi      r4, r4, 0x1
	  bl        0xEB94
	  stw       r4, 0x1C(r31)
	  stw       r3, 0x18(r31)

	.loc_0xB4:
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
 * Address:	803926A0
 * Size:	00012C
 */
void Morimura::TChallengeSelect::getState(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  cmpwi     r31, 0x1E
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  blt-      .loc_0x40
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x3FD4
	  li        r4, 0x937
	  addi      r5, r5, 0x3FEC
	  crclr     6, 0x6
	  bl        -0x36809C

	.loc_0x40:
	  lbz       r0, -0x6760(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x94
	  lwz       r3, 0x98(r30)
	  rlwinm    r0,r31,2,0,29
	  lwzx      r3, r3, r0
	  lbz       r0, 0x3(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x6C
	  li        r3, 0x3
	  b         .loc_0x114

	.loc_0x6C:
	  lbz       r0, 0x2(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x80
	  li        r3, 0x2
	  b         .loc_0x114

	.loc_0x80:
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x110
	  li        r3, 0x1
	  b         .loc_0x114

	.loc_0x94:
	  lwz       r3, 0x90(r30)
	  mr        r4, r31
	  lwz       r3, 0x8(r3)
	  bl        -0x15D60C
	  lbz       r3, 0x20(r3)
	  rlwinm.   r0,r3,0,26,26
	  beq-      .loc_0xC0
	  rlwinm    r0,r3,28,31,31
	  neg       r3, r0
	  addi      r3, r3, 0x2
	  b         .loc_0x114

	.loc_0xC0:
	  rlwinm.   r0,r3,0,27,27
	  beq-      .loc_0xD0
	  li        r3, 0x1
	  b         .loc_0x114

	.loc_0xD0:
	  rlwinm.   r0,r3,0,28,28
	  beq-      .loc_0xE0
	  li        r3, 0
	  b         .loc_0x114

	.loc_0xE0:
	  rlwinm.   r0,r3,0,29,29
	  beq-      .loc_0xF0
	  li        r3, 0x3
	  b         .loc_0x114

	.loc_0xF0:
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0x100
	  li        r3, 0x2
	  b         .loc_0x114

	.loc_0x100:
	  rlwinm.   r0,r3,0,31,31
	  beq-      .loc_0x110
	  li        r3, 0x1
	  b         .loc_0x114

	.loc_0x110:
	  li        r3, 0

	.loc_0x114:
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
 * Address:	803927CC
 * Size:	0000A4
 */
void Morimura::TChallengeSelect::getAfterState(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  cmpwi     r31, 0x1E
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  blt-      .loc_0x40
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x3FD4
	  li        r4, 0x969
	  addi      r5, r5, 0x3FEC
	  crclr     6, 0x6
	  bl        -0x3681C8

	.loc_0x40:
	  lbz       r0, -0x6760(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  li        r3, 0x3
	  b         .loc_0x8C

	.loc_0x54:
	  lwz       r3, 0x90(r30)
	  mr        r4, r31
	  lwz       r3, 0x8(r3)
	  bl        -0x15D6F8
	  lbz       r3, 0x20(r3)
	  rlwinm.   r0,r3,0,29,29
	  beq-      .loc_0x78
	  li        r3, 0x3
	  b         .loc_0x8C

	.loc_0x78:
	  rlwinm.   r0,r3,0,30,30
	  beq-      .loc_0x88
	  li        r3, 0x2
	  b         .loc_0x8C

	.loc_0x88:
	  rlwinm    r3,r3,0,31,31

	.loc_0x8C:
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
 * Address:	80392870
 * Size:	0000E4
 */
void Morimura::TChallengeSelect::isChangeState(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  cmpwi     r30, 0x1E
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  blt-      .loc_0x44
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x3FD4
	  li        r4, 0x983
	  addi      r5, r5, 0x3FEC
	  crclr     6, 0x6
	  bl        -0x368270

	.loc_0x44:
	  lbz       r0, -0x6760(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  lwz       r3, 0x98(r29)
	  rlwinm    r0,r30,2,0,29
	  lwzx      r3, r3, r0
	  lbz       r0, 0x1(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xC4
	  li        r3, 0x1
	  b         .loc_0xC8

	.loc_0x70:
	  lwz       r3, 0x90(r29)
	  mr        r4, r30
	  lwz       r3, 0x8(r3)
	  bl        -0x15D7B8
	  mr        r31, r3
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x25C
	  lbz       r3, 0x20(r31)
	  rlwinm.   r0,r3,0,28,28
	  beq-      .loc_0xA4
	  li        r3, 0x1
	  b         .loc_0xC8

	.loc_0xA4:
	  rlwinm.   r0,r3,0,27,27
	  beq-      .loc_0xB4
	  li        r3, 0x1
	  b         .loc_0xC8

	.loc_0xB4:
	  rlwinm.   r0,r3,0,26,26
	  beq-      .loc_0xC4
	  li        r3, 0x1
	  b         .loc_0xC8

	.loc_0xC4:
	  li        r3, 0

	.loc_0xC8:
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
 * Address:	80392954
 * Size:	0001CC
 */
void Morimura::TChallengeSelect::getIndexMax(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lbz       r0, -0x6760(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x15C
	  li        r0, 0x3
	  li        r3, 0
	  li        r6, 0
	  mtctr     r0

	.loc_0x38:
	  lwz       r5, 0x94(r29)
	  lwzx      r4, r5, r6
	  lwz       r0, 0x1C(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x50
	  b         .loc_0x1B0

	.loc_0x50:
	  addi      r6, r6, 0x4
	  addi      r3, r3, 0x1
	  lwzx      r4, r5, r6
	  lwz       r0, 0x1C(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x6C
	  b         .loc_0x1B0

	.loc_0x6C:
	  addi      r6, r6, 0x4
	  addi      r3, r3, 0x1
	  lwzx      r4, r5, r6
	  lwz       r0, 0x1C(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x88
	  b         .loc_0x1B0

	.loc_0x88:
	  addi      r6, r6, 0x4
	  addi      r3, r3, 0x1
	  lwzx      r4, r5, r6
	  lwz       r0, 0x1C(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0xA4
	  b         .loc_0x1B0

	.loc_0xA4:
	  addi      r6, r6, 0x4
	  addi      r3, r3, 0x1
	  lwzx      r4, r5, r6
	  lwz       r0, 0x1C(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0xC0
	  b         .loc_0x1B0

	.loc_0xC0:
	  addi      r6, r6, 0x4
	  addi      r3, r3, 0x1
	  lwzx      r4, r5, r6
	  lwz       r0, 0x1C(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0xDC
	  b         .loc_0x1B0

	.loc_0xDC:
	  addi      r6, r6, 0x4
	  addi      r3, r3, 0x1
	  lwzx      r4, r5, r6
	  lwz       r0, 0x1C(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0xF8
	  b         .loc_0x1B0

	.loc_0xF8:
	  addi      r6, r6, 0x4
	  addi      r3, r3, 0x1
	  lwzx      r4, r5, r6
	  lwz       r0, 0x1C(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x114
	  b         .loc_0x1B0

	.loc_0x114:
	  addi      r6, r6, 0x4
	  addi      r3, r3, 0x1
	  lwzx      r4, r5, r6
	  lwz       r0, 0x1C(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x130
	  b         .loc_0x1B0

	.loc_0x130:
	  addi      r6, r6, 0x4
	  addi      r3, r3, 0x1
	  lwzx      r4, r5, r6
	  lwz       r0, 0x1C(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x14C
	  b         .loc_0x1B0

	.loc_0x14C:
	  addi      r6, r6, 0x4
	  addi      r3, r3, 0x1
	  bdnz+     .loc_0x38
	  b         .loc_0x1AC

	.loc_0x15C:
	  li        r30, 0
	  li        r31, 0

	.loc_0x164:
	  lwz       r3, 0x90(r29)
	  mr        r4, r30
	  lwz       r3, 0x8(r3)
	  bl        -0x15D990
	  lwz       r4, 0x94(r29)
	  lwzx      r4, r4, r31
	  lwz       r0, 0x1C(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x19C
	  lbz       r0, 0x20(r3)
	  rlwinm.   r0,r0,0,28,28
	  bne-      .loc_0x19C
	  mr        r3, r30
	  b         .loc_0x1B0

	.loc_0x19C:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x1E
	  blt+      .loc_0x164

	.loc_0x1AC:
	  li        r3, 0x1E

	.loc_0x1B0:
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
 * Address:	80392B20
 * Size:	000024
 */
void Morimura::TChallengeSelect::openWindow(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x88(r3)
	  bl        0x10F10
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80392B44
 * Size:	000024
 */
void Morimura::TChallengeSelect::closeWindow(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x88(r3)
	  bl        0x10F00
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80392B68
 * Size:	000140
 */
void Morimura::TChallengeSelect::reset(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  lfs       f0, 0xC28(r2)
	  stb       r0, 0x135(r3)
	  mr        r8, r3
	  li        r9, 0
	  stfs      f0, 0x138(r3)

	.loc_0x18:
	  lwz       r7, 0x9C(r8)
	  li        r6, 0x30
	  mulli     r4, r6, 0x24
	  li        r5, 0
	  stfs      f0, 0xC(r7)
	  subfic    r0, r6, 0x32
	  stfs      f0, 0x10(r7)
	  add       r4, r7, r4
	  stfs      f0, 0x730(r7)
	  stw       r5, 0x24(r7)
	  stw       r5, 0x48(r7)
	  stw       r5, 0x6C(r7)
	  stw       r5, 0x90(r7)
	  stw       r5, 0xB4(r7)
	  stw       r5, 0xD8(r7)
	  stw       r5, 0xFC(r7)
	  stw       r5, 0x120(r7)
	  stw       r5, 0x144(r7)
	  stw       r5, 0x168(r7)
	  stw       r5, 0x18C(r7)
	  stw       r5, 0x1B0(r7)
	  stw       r5, 0x1D4(r7)
	  stw       r5, 0x1F8(r7)
	  stw       r5, 0x21C(r7)
	  stw       r5, 0x240(r7)
	  stw       r5, 0x264(r7)
	  stw       r5, 0x288(r7)
	  stw       r5, 0x2AC(r7)
	  stw       r5, 0x2D0(r7)
	  stw       r5, 0x2F4(r7)
	  stw       r5, 0x318(r7)
	  stw       r5, 0x33C(r7)
	  stw       r5, 0x360(r7)
	  stw       r5, 0x384(r7)
	  stw       r5, 0x3A8(r7)
	  stw       r5, 0x3CC(r7)
	  stw       r5, 0x3F0(r7)
	  stw       r5, 0x414(r7)
	  stw       r5, 0x438(r7)
	  stw       r5, 0x45C(r7)
	  stw       r5, 0x480(r7)
	  stw       r5, 0x4A4(r7)
	  stw       r5, 0x4C8(r7)
	  stw       r5, 0x4EC(r7)
	  stw       r5, 0x510(r7)
	  stw       r5, 0x534(r7)
	  stw       r5, 0x558(r7)
	  stw       r5, 0x57C(r7)
	  stw       r5, 0x5A0(r7)
	  stw       r5, 0x5C4(r7)
	  stw       r5, 0x5E8(r7)
	  stw       r5, 0x60C(r7)
	  stw       r5, 0x630(r7)
	  stw       r5, 0x654(r7)
	  stw       r5, 0x678(r7)
	  stw       r5, 0x69C(r7)
	  stw       r5, 0x6C0(r7)
	  mtctr     r0
	  cmpwi     r6, 0x32
	  bge-      .loc_0x114

	.loc_0x108:
	  stwu      r5, 0x24(r4)
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0x108

	.loc_0x114:
	  addi      r9, r9, 0x1
	  lwz       r0, 0x108(r8)
	  lwz       r4, 0x9C(r8)
	  cmpwi     r9, 0x5
	  addi      r8, r8, 0x4
	  stw       r0, 0x72C(r4)
	  blt+      .loc_0x18
	  li        r0, 0
	  stw       r0, -0x667C(r13)
	  stb       r0, 0x144(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000374
 */
void Morimura::TChallengeSelect::jumpStart(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80392CA8
 * Size:	0004C0
 */
void Morimura::TChallengeSelect::demoStart(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x1A0(r1)
	  mflr      r0
	  stw       r0, 0x1A4(r1)
	  stfd      f31, 0x190(r1)
	  psq_st    f31,0x198(r1),0,0
	  stfd      f30, 0x180(r1)
	  psq_st    f30,0x188(r1),0,0
	  stfd      f29, 0x170(r1)
	  psq_st    f29,0x178(r1),0,0
	  stfd      f28, 0x160(r1)
	  psq_st    f28,0x168(r1),0,0
	  stfd      f27, 0x150(r1)
	  psq_st    f27,0x158(r1),0,0
	  stfd      f26, 0x140(r1)
	  psq_st    f26,0x148(r1),0,0
	  stfd      f25, 0x130(r1)
	  psq_st    f25,0x138(r1),0,0
	  stfd      f24, 0x120(r1)
	  psq_st    f24,0x128(r1),0,0
	  stfd      f23, 0x110(r1)
	  psq_st    f23,0x118(r1),0,0
	  stfd      f22, 0x100(r1)
	  psq_st    f22,0x108(r1),0,0
	  stfd      f21, 0xF0(r1)
	  psq_st    f21,0xF8(r1),0,0
	  stfd      f20, 0xE0(r1)
	  psq_st    f20,0xE8(r1),0,0
	  stfd      f19, 0xD0(r1)
	  psq_st    f19,0xD8(r1),0,0
	  stfd      f18, 0xC0(r1)
	  psq_st    f18,0xC8(r1),0,0
	  stmw      r25, 0xA4(r1)
	  li        r6, 0
	  lfs       f0, 0xC28(r2)
	  stb       r6, 0x135(r3)
	  mr        r9, r3
	  stfs      f0, 0x138(r3)

	.loc_0x94:
	  lwz       r8, 0x9C(r9)
	  li        r7, 0x30
	  mulli     r4, r7, 0x24
	  li        r5, 0
	  stfs      f0, 0xC(r8)
	  subfic    r0, r7, 0x32
	  stfs      f0, 0x10(r8)
	  add       r4, r8, r4
	  stfs      f0, 0x730(r8)
	  stw       r5, 0x24(r8)
	  stw       r5, 0x48(r8)
	  stw       r5, 0x6C(r8)
	  stw       r5, 0x90(r8)
	  stw       r5, 0xB4(r8)
	  stw       r5, 0xD8(r8)
	  stw       r5, 0xFC(r8)
	  stw       r5, 0x120(r8)
	  stw       r5, 0x144(r8)
	  stw       r5, 0x168(r8)
	  stw       r5, 0x18C(r8)
	  stw       r5, 0x1B0(r8)
	  stw       r5, 0x1D4(r8)
	  stw       r5, 0x1F8(r8)
	  stw       r5, 0x21C(r8)
	  stw       r5, 0x240(r8)
	  stw       r5, 0x264(r8)
	  stw       r5, 0x288(r8)
	  stw       r5, 0x2AC(r8)
	  stw       r5, 0x2D0(r8)
	  stw       r5, 0x2F4(r8)
	  stw       r5, 0x318(r8)
	  stw       r5, 0x33C(r8)
	  stw       r5, 0x360(r8)
	  stw       r5, 0x384(r8)
	  stw       r5, 0x3A8(r8)
	  stw       r5, 0x3CC(r8)
	  stw       r5, 0x3F0(r8)
	  stw       r5, 0x414(r8)
	  stw       r5, 0x438(r8)
	  stw       r5, 0x45C(r8)
	  stw       r5, 0x480(r8)
	  stw       r5, 0x4A4(r8)
	  stw       r5, 0x4C8(r8)
	  stw       r5, 0x4EC(r8)
	  stw       r5, 0x510(r8)
	  stw       r5, 0x534(r8)
	  stw       r5, 0x558(r8)
	  stw       r5, 0x57C(r8)
	  stw       r5, 0x5A0(r8)
	  stw       r5, 0x5C4(r8)
	  stw       r5, 0x5E8(r8)
	  stw       r5, 0x60C(r8)
	  stw       r5, 0x630(r8)
	  stw       r5, 0x654(r8)
	  stw       r5, 0x678(r8)
	  stw       r5, 0x69C(r8)
	  stw       r5, 0x6C0(r8)
	  mtctr     r0
	  cmpwi     r7, 0x32
	  bge-      .loc_0x190

	.loc_0x184:
	  stwu      r5, 0x24(r4)
	  addi      r7, r7, 0x1
	  bdnz+     .loc_0x184

	.loc_0x190:
	  addi      r6, r6, 0x1
	  lwz       r0, 0x108(r9)
	  lwz       r4, 0x9C(r9)
	  cmpwi     r6, 0x5
	  addi      r9, r9, 0x4
	  stw       r0, 0x72C(r4)
	  blt+      .loc_0x94
	  li        r30, 0
	  lis       r4, 0x5555
	  stw       r30, -0x667C(r13)
	  li        r0, 0x1
	  mr        r26, r3
	  lfs       f21, 0xC48(r2)
	  stb       r30, 0x144(r3)
	  addi      r25, r4, 0x5556
	  lfd       f28, 0xC50(r2)
	  lis       r31, 0x4330
	  stb       r0, 0x135(r3)
	  lfs       f29, 0xC30(r2)
	  lwz       r0, 0xFC(r3)
	  lwz       r3, 0x94(r3)
	  rlwinm    r0,r0,2,0,29
	  lfs       f30, 0xC34(r2)
	  lwzx      r3, r3, r0
	  lfs       f31, 0xC38(r2)
	  lwz       r3, 0x8(r3)
	  lfs       f20, 0xC3C(r2)
	  lfs       f0, 0x8C(r3)
	  lfs       f24, 0x9C(r3)
	  fsubs     f25, f0, f21
	  lfs       f22, 0xC44(r2)
	  lfs       f26, 0xD14(r2)
	  lfs       f27, 0xC2C(r2)

	.loc_0x214:
	  xoris     r0, r30, 0x8000
	  lwz       r4, 0x9C(r26)
	  stw       r0, 0x84(r1)
	  addi      r3, r1, 0x2C
	  li        r5, 0x1
	  stw       r31, 0x80(r1)
	  stfs      f25, 0xC(r4)
	  lfd       f0, 0x80(r1)
	  stfs      f24, 0x10(r4)
	  fsubs     f0, f0, f28
	  lwz       r28, 0x9C(r26)
	  fmuls     f23, f26, f0
	  lwz       r4, 0x4(r28)
	  bl        -0x359F58
	  lfs       f19, 0x30(r1)
	  addi      r3, r1, 0x20
	  lwz       r4, 0x0(r28)
	  li        r5, 0
	  bl        -0x359F6C
	  lfs       f0, 0x24(r1)
	  addi      r3, r1, 0x14
	  lwz       r4, 0x4(r28)
	  li        r5, 0x1
	  fsubs     f18, f0, f19
	  bl        -0x359F84
	  lfs       f19, 0x14(r1)
	  addi      r3, r1, 0x8
	  lwz       r4, 0x0(r28)
	  li        r5, 0
	  bl        -0x359F98
	  lfs       f0, 0x8(r1)
	  addi      r3, r1, 0x5C
	  li        r5, 0
	  fsubs     f0, f0, f19
	  stfs      f0, 0x14(r28)
	  stfs      f18, 0x18(r28)
	  lwz       r4, 0x8(r28)
	  bl        -0x359FB8
	  lfs       f19, 0x60(r1)
	  addi      r3, r1, 0x50
	  lwz       r4, 0x0(r28)
	  li        r5, 0
	  bl        -0x359FCC
	  lfs       f0, 0x54(r1)
	  addi      r3, r1, 0x44
	  lwz       r4, 0x8(r28)
	  li        r5, 0
	  fsubs     f18, f0, f19
	  bl        -0x359FE4
	  lfs       f19, 0x44(r1)
	  addi      r3, r1, 0x38
	  lwz       r4, 0x0(r28)
	  li        r5, 0
	  bl        -0x359FF8
	  lfs       f0, 0x38(r1)
	  mr        r27, r28
	  li        r29, 0
	  fsubs     f0, f0, f19
	  stfs      f0, 0x1C(r28)
	  stfs      f18, 0x20(r28)
	  stfs      f27, 0x730(r28)

	.loc_0x308:
	  bl        -0x2C9A10
	  xoris     r3, r3, 0x8000
	  xoris     r0, r29, 0x8000
	  stw       r3, 0x84(r1)
	  addi      r3, r1, 0x74
	  li        r5, 0
	  stw       r31, 0x80(r1)
	  lfd       f0, 0x80(r1)
	  stw       r0, 0x8C(r1)
	  fsubs     f0, f0, f28
	  stw       r31, 0x88(r1)
	  fdivs     f1, f0, f29
	  lfd       f0, 0x88(r1)
	  fsubs     f0, f0, f28
	  fnmsubs   f0, f30, f0, f23
	  fmadds    f0, f30, f1, f0
	  stfs      f0, 0x28(r27)
	  lwz       r4, 0x0(r28)
	  bl        -0x35A060
	  lfs       f18, 0x78(r1)
	  addi      r3, r1, 0x68
	  lwz       r4, 0x0(r28)
	  li        r5, 0
	  bl        -0x35A074
	  lfs       f0, 0x68(r1)
	  mulhw     r3, r25, r29
	  stfs      f0, 0x30(r27)
	  stfs      f18, 0x34(r27)
	  rlwinm    r0,r3,1,31,31
	  lfs       f0, 0x30(r27)
	  add       r0, r3, r0
	  mulli     r0, r0, 0x3
	  stfs      f0, 0x38(r27)
	  lfs       f0, 0x34(r27)
	  sub       r0, r29, r0
	  stfs      f0, 0x3C(r27)
	  stw       r0, 0x2C(r27)
	  bl        -0x2C9AA4
	  xoris     r0, r3, 0x8000
	  stw       r31, 0x90(r1)
	  stw       r0, 0x94(r1)
	  lfd       f0, 0x90(r1)
	  fsubs     f0, f0, f28
	  fdivs     f0, f0, f29
	  fmuls     f0, f31, f0
	  stfs      f0, 0x40(r27)
	  bl        -0x2C9AC8
	  xoris     r0, r3, 0x8000
	  stw       r31, 0x98(r1)
	  stw       r0, 0x9C(r1)
	  lfd       f0, 0x98(r1)
	  fsubs     f0, f0, f28
	  fdivs     f0, f0, f29
	  fcmpo     cr0, f0, f20
	  ble-      .loc_0x3F4
	  lfs       f1, 0x40(r27)
	  lfs       f0, 0xC40(r2)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x40(r27)

	.loc_0x3F4:
	  bl        -0x2C9AFC
	  xoris     r0, r3, 0x8000
	  addi      r29, r29, 0x1
	  stw       r0, 0x9C(r1)
	  cmpwi     r29, 0x32
	  li        r0, 0x2
	  stw       r31, 0x98(r1)
	  lfd       f0, 0x98(r1)
	  fsubs     f0, f0, f28
	  fdivs     f0, f0, f29
	  fmadds    f0, f21, f0, f22
	  stfs      f0, 0x44(r27)
	  stwu      r0, 0x24(r27)
	  blt+      .loc_0x308
	  addi      r30, r30, 0x1
	  addi      r26, r26, 0x4
	  cmpwi     r30, 0x5
	  blt+      .loc_0x214
	  psq_l     f31,0x198(r1),0,0
	  lfd       f31, 0x190(r1)
	  psq_l     f30,0x188(r1),0,0
	  lfd       f30, 0x180(r1)
	  psq_l     f29,0x178(r1),0,0
	  lfd       f29, 0x170(r1)
	  psq_l     f28,0x168(r1),0,0
	  lfd       f28, 0x160(r1)
	  psq_l     f27,0x158(r1),0,0
	  lfd       f27, 0x150(r1)
	  psq_l     f26,0x148(r1),0,0
	  lfd       f26, 0x140(r1)
	  psq_l     f25,0x138(r1),0,0
	  lfd       f25, 0x130(r1)
	  psq_l     f24,0x128(r1),0,0
	  lfd       f24, 0x120(r1)
	  psq_l     f23,0x118(r1),0,0
	  lfd       f23, 0x110(r1)
	  psq_l     f22,0x108(r1),0,0
	  lfd       f22, 0x100(r1)
	  psq_l     f21,0xF8(r1),0,0
	  lfd       f21, 0xF0(r1)
	  psq_l     f20,0xE8(r1),0,0
	  lfd       f20, 0xE0(r1)
	  psq_l     f19,0xD8(r1),0,0
	  lfd       f19, 0xD0(r1)
	  psq_l     f18,0xC8(r1),0,0
	  lfd       f18, 0xC0(r1)
	  lmw       r25, 0xA4(r1)
	  lwz       r0, 0x1A4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x1A0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80393168
 * Size:	00009C
 */
void Morimura::TChallengeSelectScene::doCreateObj(JKRArchive*)
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
	  li        r3, 0x150
	  bl        -0x36F2E8
	  mr.       r31, r3
	  beq-      .loc_0x38
	  bl        -0x47E0
	  mr        r31, r3

	.loc_0x38:
	  mr        r3, r29
	  mr        r4, r31
	  mr        r5, r30
	  bl        0xBEBC8
	  stw       r31, 0x220(r29)
	  li        r3, 0xD8
	  bl        -0x36F314
	  mr.       r0, r3
	  beq-      .loc_0x6C
	  lis       r4, 0x8049
	  addi      r4, r4, 0x46F0
	  bl        0x10478
	  mr        r0, r3

	.loc_0x6C:
	  stw       r0, 0x224(r29)
	  mr        r3, r29
	  mr        r5, r30
	  lwz       r4, 0x224(r29)
	  bl        0xBEB90
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
 * Address:	80393204
 * Size:	000034
 */
void Morimura::TChallengeSelectScene::doStart(Screen::StartSceneArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x220(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  li        r3, 0x1
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80393238
 * Size:	00000C
 */
void Morimura::TChallengeSelectScene::getResName() const
{
	/*
	.loc_0x0:
	  lis       r3, 0x8049
	  addi      r3, r3, 0x46FC
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80393244
 * Size:	000008
 */
u32 Morimura::TChallengeSelectScene::getSceneType(void) { return 0x2737; }

/*
 * --INFO--
 * Address:	8039324C
 * Size:	00000C
 */
void Morimura::TChallengeSelectScene::getOwnerID(void)
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
 * Address:	80393258
 * Size:	000014
 */
void Morimura::TChallengeSelectScene::getMemberID(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x4C45
	  lis       r3, 0x4348
	  addi      r4, r4, 0x4354
	  addi      r3, r3, 0x5345
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8039326C
 * Size:	000084
 */
efx2d::T2DChalDive::~T2DChalDive(void)
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
	  addi      r3, r3, 0x50A8
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
	  bl        -0x303624

	.loc_0x58:
	  extsh.    r0, r31
	  ble-      .loc_0x68
	  mr        r3, r30
	  bl        -0x36F21C

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
 * Address:	803932F0
 * Size:	000034
 */
void Morimura::TChallengeSelect::getDispMemberBase(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, -0x6760(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x20
	  lwz       r3, 0x90(r3)
	  b         .loc_0x24

	.loc_0x20:
	  bl        0xC0C98

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80393324
 * Size:	000014
 */
void __sinit_challengeSelect2D_cpp(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0xD18(r2)
	  subi      r3, r13, 0x6678
	  stfs      f0, -0x6678(r13)
	  stfs      f0, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80393338
 * Size:	000008
 */
@24 @Morimura::TChallengeSelect::~TChallengeSelect(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x4848
	*/
}

/*
 * --INFO--
 * Address:	80393340
 * Size:	000008
 */
@8 @efx2d::T2DChalDive::~T2DChalDive(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x8
	  b         -0xD8
	*/
}
