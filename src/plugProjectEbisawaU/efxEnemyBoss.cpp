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
 * Address:	803EB360
 * Size:	0001A8
 */
void efx::TDangoCrash::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stfd      f29, 0x40(r1)
	  psq_st    f29,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r4
	  mr        r31, r3
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r2, 0x1AD8
	  bl        -0x320CF0
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x7C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x7910
	  li        r4, 0x10
	  addi      r5, r5, 0x7924
	  crclr     6, 0x6
	  bl        -0x3C0D98

	.loc_0x7C:
	  lfs       f31, 0x10(r30)
	  mr        r3, r31
	  lfs       f30, 0x14(r30)
	  mr        r4, r30
	  lfs       f29, 0x18(r30)
	  bl        -0x3C3DC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x174
	  fmuls     f1, f30, f30
	  lfs       f0, 0x1AE0(r2)
	  fmuls     f2, f29, f29
	  fmadds    f1, f31, f31, f1
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xC8
	  ble-      .loc_0xCC
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0xCC

	.loc_0xC8:
	  fmr       f1, f0

	.loc_0xCC:
	  lfs       f0, 0x1AE0(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xEC
	  lfs       f0, 0x1AE4(r2)
	  fdivs     f0, f0, f1
	  fmuls     f31, f31, f0
	  fmuls     f30, f30, f0
	  fmuls     f29, f29, f0

	.loc_0xEC:
	  lfs       f5, 0x1AE0(r2)
	  lis       r3, 0x8051
	  lfsu      f3, 0x41E4(r3)
	  li        r30, 0
	  fmuls     f2, f5, f29
	  lfs       f6, 0x1AE4(r2)
	  fmuls     f4, f5, f30
	  lfs       f1, 0x4(r3)
	  lfs       f0, 0x8(r3)
	  fmsubs    f2, f5, f31, f2
	  fnmsubs   f7, f6, f31, f4
	  stfs      f5, 0xC(r1)
	  fmsubs    f4, f6, f29, f4
	  stfs      f31, 0x10(r1)
	  stfs      f4, 0x8(r1)
	  stfs      f3, 0x14(r1)
	  stfs      f2, 0x18(r1)
	  stfs      f6, 0x1C(r1)
	  stfs      f30, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f7, 0x28(r1)
	  stfs      f5, 0x2C(r1)
	  stfs      f29, 0x30(r1)
	  stfs      f0, 0x34(r1)

	.loc_0x14C:
	  lwz       r4, 0x8(r31)
	  addi      r3, r1, 0x8
	  addi      r4, r4, 0x68
	  bl        -0x3577C4
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x2
	  blt+      .loc_0x14C
	  li        r3, 0x1
	  b         .loc_0x178

	.loc_0x174:
	  li        r3, 0

	.loc_0x178:
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803EB508
 * Size:	00011C
 */
void efx::TDangoTurn::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stfd      f29, 0x40(r1)
	  psq_st    f29,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r4
	  mr        r31, r3
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r2, 0x1AE8
	  bl        -0x320E98
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x7C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x7910
	  li        r4, 0x2F
	  addi      r5, r5, 0x7924
	  crclr     6, 0x6
	  bl        -0x3C0F40

	.loc_0x7C:
	  lfs       f31, 0x4(r30)
	  addi      r3, r1, 0x8
	  lfs       f30, 0x8(r30)
	  li        r4, 0x79
	  lfs       f29, 0xC(r30)
	  lfs       f1, 0x10(r30)
	  bl        -0x301088
	  stfs      f31, 0x14(r1)
	  mr        r3, r31
	  mr        r4, r30
	  stfs      f30, 0x24(r1)
	  stfs      f29, 0x34(r1)
	  bl        -0x3C5A0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE8
	  li        r30, 0

	.loc_0xBC:
	  lwz       r5, 0x8(r31)
	  addi      r3, r1, 0x8
	  addi      r4, r5, 0x68
	  addi      r5, r5, 0xA4
	  bl        -0x3578B8
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x2
	  blt+      .loc_0xBC
	  li        r3, 0x1
	  b         .loc_0xEC

	.loc_0xE8:
	  li        r3, 0

	.loc_0xEC:
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803EB624
 * Size:	000030
 */
void efx::TKageMove::setGlobalPrmColor((Color4&))
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r3)
	  cmplwi    r6, 0
	  beqlr-
	  lbz       r5, 0x2(r4)
	  lbz       r3, 0x1(r4)
	  lbz       r0, 0x0(r4)
	  stb       r0, 0xB8(r6)
	  stb       r3, 0xB9(r6)
	  stb       r5, 0xBA(r6)
	  lbz       r0, 0x3(r4)
	  stb       r0, 0xBB(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803EB654
 * Size:	000030
 */
void efx::TKageRun::setGlobalPrmColor((Color4&))
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r3)
	  cmplwi    r6, 0
	  beqlr-
	  lbz       r5, 0x2(r4)
	  lbz       r3, 0x1(r4)
	  lbz       r0, 0x0(r4)
	  stb       r0, 0xB8(r6)
	  stb       r3, 0xB9(r6)
	  stb       r5, 0xBA(r6)
	  lbz       r0, 0x3(r4)
	  stb       r0, 0xBB(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803EB684
 * Size:	000030
 */
void efx::TKageDead1::setGlobalPrmColor((Color4&))
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r3)
	  cmplwi    r6, 0
	  beqlr-
	  lbz       r5, 0x2(r4)
	  lbz       r3, 0x1(r4)
	  lbz       r0, 0x0(r4)
	  stb       r0, 0xB8(r6)
	  stb       r3, 0xB9(r6)
	  stb       r5, 0xBA(r6)
	  lbz       r0, 0x3(r4)
	  stb       r0, 0xBB(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803EB6B4
 * Size:	0000CC
 */
void efx::TKageDead2::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  lis       r4, 0x8049
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r3, r30
	  addi      r31, r4, 0x7910
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x20
	  bl        -0x321038
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x68
	  addi      r3, r31, 0
	  addi      r5, r31, 0x14
	  li        r4, 0x67
	  crclr     6, 0x6
	  bl        -0x3C10D8

	.loc_0x68:
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x3C7A0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xAC
	  lbz       r6, 0x12(r30)
	  li        r3, 0x1
	  lbz       r5, 0x11(r30)
	  lwz       r4, 0x8(r29)
	  lbz       r0, 0x10(r30)
	  stb       r0, 0xB8(r4)
	  stb       r5, 0xB9(r4)
	  stb       r6, 0xBA(r4)
	  lbz       r0, 0x13(r30)
	  lwz       r4, 0x8(r29)
	  stb       r0, 0xBB(r4)
	  b         .loc_0xB0

	.loc_0xAC:
	  li        r3, 0

	.loc_0xB0:
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
 * Address:	........
 * Size:	000018
 */
void efx::TOootaParticle::setGlobalDynamicsScale((float))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803EB780
 * Size:	000174
 */
void efx::TOootaBombLeg::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  stw       r29, 0x54(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x7910
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x2C
	  bl        -0x32110C
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r31, 0
	  addi      r5, r31, 0x14
	  li        r4, 0x84
	  crclr     6, 0x6
	  bl        -0x3C11AC

	.loc_0x70:
	  lfs       f0, 0x10(r30)
	  mr        r3, r29
	  mr        r4, r30
	  stfs      f0, 0x14(r1)
	  lfs       f0, 0x14(r30)
	  stfs      f0, 0x18(r1)
	  lfs       f0, 0x18(r30)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0x1C(r30)
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x20(r30)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x24(r30)
	  stfs      f0, 0x10(r1)
	  bl        -0x3C8A4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x14C
	  addi      r3, r1, 0x20
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  bl        -0x3BBC0
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x18(r1)
	  lfs       f3, 0x10(r1)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x1C(r1)
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x14(r1)
	  fsubs     f2, f3, f2
	  fmuls     f3, f4, f4
	  fsubs     f1, f1, f0
	  lfs       f0, 0x1AE0(r2)
	  fmuls     f2, f2, f2
	  fmadds    f1, f1, f1, f3
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x114
	  ble-      .loc_0x118
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x118

	.loc_0x114:
	  fmr       f1, f0

	.loc_0x118:
	  lfs       f0, 0x1AF0(r2)
	  addi      r3, r1, 0x20
	  lwz       r5, 0x8(r29)
	  fdivs     f31, f1, f0
	  addi      r4, r5, 0x68
	  addi      r5, r5, 0xA4
	  bl        -0x357B94
	  lwz       r4, 0x8(r29)
	  li        r3, 0x1
	  lfs       f1, 0x4(r4)
	  fmuls     f1, f1, f31
	  stfs      f1, 0x4(r4)
	  b         .loc_0x150

	.loc_0x14C:
	  li        r3, 0

	.loc_0x150:
	  psq_l     f31,0x68(r1),0,0
	  lwz       r0, 0x74(r1)
	  lfd       f31, 0x60(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803EB8F4
 * Size:	000150
 */
void efx::TOootaFire::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr.       r30, r4
	  lis       r4, 0x8049
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  addi      r31, r4, 0x7910
	  bne-      .loc_0x40
	  addi      r3, r31, 0
	  addi      r5, r31, 0x14
	  li        r4, 0xA1
	  crclr     6, 0x6
	  bl        -0x3C12F0

	.loc_0x40:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x38
	  bl        -0x321290
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x80
	  addi      r3, r31, 0
	  addi      r5, r31, 0x14
	  li        r4, 0xA2
	  crclr     6, 0x6
	  bl        -0x3C1330

	.loc_0x80:
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x3AA6C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x130
	  lfs       f0, 0x10(r30)
	  li        r3, 0x1
	  lwz       r4, 0xC(r29)
	  stfs      f0, 0x98(r4)
	  stfs      f0, 0x9C(r4)
	  stfs      f0, 0xA0(r4)
	  stfs      f0, 0xB0(r4)
	  stfs      f0, 0xB4(r4)
	  lwz       r4, 0x20(r29)
	  stfs      f0, 0x98(r4)
	  stfs      f0, 0x9C(r4)
	  stfs      f0, 0xA0(r4)
	  stfs      f0, 0xB0(r4)
	  stfs      f0, 0xB4(r4)
	  lwz       r4, 0x34(r29)
	  stfs      f0, 0x98(r4)
	  stfs      f0, 0x9C(r4)
	  stfs      f0, 0xA0(r4)
	  stfs      f0, 0xB0(r4)
	  stfs      f0, 0xB4(r4)
	  lwz       r4, 0x48(r29)
	  stfs      f0, 0x98(r4)
	  stfs      f0, 0x9C(r4)
	  stfs      f0, 0xA0(r4)
	  stfs      f0, 0xB0(r4)
	  stfs      f0, 0xB4(r4)
	  lwz       r4, 0x5C(r29)
	  stfs      f0, 0x98(r4)
	  stfs      f0, 0x9C(r4)
	  stfs      f0, 0xA0(r4)
	  stfs      f0, 0xB0(r4)
	  stfs      f0, 0xB4(r4)
	  lwz       r4, 0x70(r29)
	  stfs      f0, 0x98(r4)
	  stfs      f0, 0x9C(r4)
	  stfs      f0, 0xA0(r4)
	  stfs      f0, 0xB0(r4)
	  stfs      f0, 0xB4(r4)
	  b         .loc_0x134

	.loc_0x130:
	  li        r3, 0

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
 * Address:	803EBA44
 * Size:	000154
 */
void efx::TKchFlickSand::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stfd      f31, 0x80(r1)
	  psq_st    f31,0x88(r1),0,0
	  stfd      f30, 0x70(r1)
	  psq_st    f30,0x78(r1),0,0
	  stfd      f29, 0x60(r1)
	  psq_st    f29,0x68(r1),0,0
	  stfd      f28, 0x50(r1)
	  psq_st    f28,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  stw       r29, 0x44(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x7910
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x44
	  bl        -0x3213E8
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x88
	  addi      r3, r31, 0
	  addi      r5, r31, 0x14
	  li        r4, 0xB5
	  crclr     6, 0x6
	  bl        -0x3C1488

	.loc_0x88:
	  lfs       f28, 0x14(r30)
	  addi      r3, r1, 0x8
	  lfs       f31, 0x4(r30)
	  li        r4, 0x79
	  lfs       f30, 0x8(r30)
	  lfs       f29, 0xC(r30)
	  lfs       f1, 0x10(r30)
	  bl        -0x3015D4
	  stfs      f31, 0x14(r1)
	  mr        r3, r29
	  mr        r4, r30
	  stfs      f30, 0x24(r1)
	  stfs      f29, 0x34(r1)
	  bl        -0x3CAEC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x114
	  li        r30, 0
	  mr        r31, r29

	.loc_0xD0:
	  lwz       r5, 0x8(r31)
	  addi      r3, r1, 0x8
	  addi      r4, r5, 0x68
	  addi      r5, r5, 0xA4
	  bl        -0x357E08
	  lwz       r3, 0x8(r31)
	  addi      r30, r30, 0x1
	  cmpwi     r30, 0x2
	  addi      r31, r31, 0x4
	  stfs      f28, 0x98(r3)
	  stfs      f28, 0x9C(r3)
	  stfs      f28, 0xA0(r3)
	  stfs      f28, 0xB0(r3)
	  stfs      f28, 0xB4(r3)
	  blt+      .loc_0xD0
	  li        r3, 0x1
	  b         .loc_0x118

	.loc_0x114:
	  li        r3, 0

	.loc_0x118:
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  psq_l     f29,0x68(r1),0,0
	  lfd       f29, 0x60(r1)
	  psq_l     f28,0x58(r1),0,0
	  lfd       f28, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r0, 0x94(r1)
	  lwz       r29, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803EBB98
 * Size:	000154
 */
void efx::TKchApSand::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stfd      f31, 0x80(r1)
	  psq_st    f31,0x88(r1),0,0
	  stfd      f30, 0x70(r1)
	  psq_st    f30,0x78(r1),0,0
	  stfd      f29, 0x60(r1)
	  psq_st    f29,0x68(r1),0,0
	  stfd      f28, 0x50(r1)
	  psq_st    f28,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  stw       r29, 0x44(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x7910
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x44
	  bl        -0x32153C
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x88
	  addi      r3, r31, 0
	  addi      r5, r31, 0x14
	  li        r4, 0xCC
	  crclr     6, 0x6
	  bl        -0x3C15DC

	.loc_0x88:
	  lfs       f28, 0x14(r30)
	  addi      r3, r1, 0x8
	  lfs       f31, 0x4(r30)
	  li        r4, 0x79
	  lfs       f30, 0x8(r30)
	  lfs       f29, 0xC(r30)
	  lfs       f1, 0x10(r30)
	  bl        -0x301728
	  stfs      f31, 0x14(r1)
	  mr        r3, r29
	  mr        r4, r30
	  stfs      f30, 0x24(r1)
	  stfs      f29, 0x34(r1)
	  bl        -0x3CB98
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x114
	  li        r30, 0
	  mr        r31, r29

	.loc_0xD0:
	  lwz       r5, 0xC(r31)
	  addi      r3, r1, 0x8
	  addi      r4, r5, 0x68
	  addi      r5, r5, 0xA4
	  bl        -0x357F5C
	  lwz       r3, 0xC(r31)
	  addi      r30, r30, 0x1
	  cmpwi     r30, 0x3
	  addi      r31, r31, 0x4
	  stfs      f28, 0x98(r3)
	  stfs      f28, 0x9C(r3)
	  stfs      f28, 0xA0(r3)
	  stfs      f28, 0xB0(r3)
	  stfs      f28, 0xB4(r3)
	  blt+      .loc_0xD0
	  li        r3, 0x1
	  b         .loc_0x118

	.loc_0x114:
	  li        r3, 0

	.loc_0x118:
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  psq_l     f29,0x68(r1),0,0
	  lfd       f29, 0x60(r1)
	  psq_l     f28,0x58(r1),0,0
	  lfd       f28, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r0, 0x94(r1)
	  lwz       r29, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803EBCEC
 * Size:	000154
 */
void efx::TKchApWat::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stfd      f31, 0x80(r1)
	  psq_st    f31,0x88(r1),0,0
	  stfd      f30, 0x70(r1)
	  psq_st    f30,0x78(r1),0,0
	  stfd      f29, 0x60(r1)
	  psq_st    f29,0x68(r1),0,0
	  stfd      f28, 0x50(r1)
	  psq_st    f28,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  stw       r29, 0x44(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x7910
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x44
	  bl        -0x321690
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x88
	  addi      r3, r31, 0
	  addi      r5, r31, 0x14
	  li        r4, 0xE3
	  crclr     6, 0x6
	  bl        -0x3C1730

	.loc_0x88:
	  lfs       f28, 0x14(r30)
	  addi      r3, r1, 0x8
	  lfs       f31, 0x4(r30)
	  li        r4, 0x79
	  lfs       f30, 0x8(r30)
	  lfs       f29, 0xC(r30)
	  lfs       f1, 0x10(r30)
	  bl        -0x30187C
	  stfs      f31, 0x14(r1)
	  mr        r3, r29
	  mr        r4, r30
	  stfs      f30, 0x24(r1)
	  stfs      f29, 0x34(r1)
	  bl        -0x3CB9C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x114
	  li        r30, 0
	  mr        r31, r29

	.loc_0xD0:
	  lwz       r5, 0x10(r31)
	  addi      r3, r1, 0x8
	  addi      r4, r5, 0x68
	  addi      r5, r5, 0xA4
	  bl        -0x3580B0
	  lwz       r3, 0x10(r31)
	  addi      r30, r30, 0x1
	  cmpwi     r30, 0x5
	  addi      r31, r31, 0x4
	  stfs      f28, 0x98(r3)
	  stfs      f28, 0x9C(r3)
	  stfs      f28, 0xA0(r3)
	  stfs      f28, 0xB0(r3)
	  stfs      f28, 0xB4(r3)
	  blt+      .loc_0xD0
	  li        r3, 0x1
	  b         .loc_0x118

	.loc_0x114:
	  li        r3, 0

	.loc_0x118:
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  psq_l     f29,0x68(r1),0,0
	  lfd       f29, 0x60(r1)
	  psq_l     f28,0x58(r1),0,0
	  lfd       f28, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r0, 0x94(r1)
	  lwz       r29, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803EBE40
 * Size:	000040
 */
void efx::TKchDiveSand::setGlobalScale((float))
{
	/*
	.loc_0x0:
	  lwz       r4, 0xC(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x14
	  stfs      f1, 0xB0(r4)
	  stfs      f1, 0xB4(r4)

	.loc_0x14:
	  lwz       r4, 0x24(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x28
	  stfs      f1, 0xB0(r4)
	  stfs      f1, 0xB4(r4)

	.loc_0x28:
	  lwz       r4, 0x3C(r3)
	  cmplwi    r4, 0
	  beqlr-
	  stfs      f1, 0xB0(r4)
	  stfs      f1, 0xB4(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803EBE80
 * Size:	000040
 */
void efx::TKchDiveWat::setGlobalScale((float))
{
	/*
	.loc_0x0:
	  lwz       r4, 0xC(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x14
	  stfs      f1, 0xB0(r4)
	  stfs      f1, 0xB4(r4)

	.loc_0x14:
	  lwz       r4, 0x24(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x28
	  stfs      f1, 0xB0(r4)
	  stfs      f1, 0xB4(r4)

	.loc_0x28:
	  lwz       r4, 0x3C(r3)
	  cmplwi    r4, 0
	  beqlr-
	  stfs      f1, 0xB0(r4)
	  stfs      f1, 0xB4(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803EBEC0
 * Size:	00002C
 */
void efx::TKchCryAB::setGlobalScale((float))
{
	/*
	.loc_0x0:
	  lwz       r4, 0xC(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x14
	  stfs      f1, 0xB0(r4)
	  stfs      f1, 0xB4(r4)

	.loc_0x14:
	  lwz       r4, 0x20(r3)
	  cmplwi    r4, 0
	  beqlr-
	  stfs      f1, 0xB0(r4)
	  stfs      f1, 0xB4(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803EBEEC
 * Size:	000018
 */
void efx::TKchCryInd::setGlobalScale((float))
{
	/*
	.loc_0x0:
	  lwz       r3, 0x8(r3)
	  cmplwi    r3, 0
	  beqlr-
	  stfs      f1, 0xB0(r3)
	  stfs      f1, 0xB4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803EBF04
 * Size:	000118
 */
void efx::TKchDamage::create((efx::Arg*))
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
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x7910
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x38
	  bl        -0x321890
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r31, 0
	  addi      r5, r31, 0x14
	  li        r4, 0x128
	  crclr     6, 0x6
	  bl        -0x3C1930

	.loc_0x70:
	  lfs       f31, 0x10(r30)
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x3C9B0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF0
	  lwz       r4, 0xC(r29)
	  li        r3, 0x1
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xB4(r4)
	  lwz       r4, 0x10(r29)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xB4(r4)
	  lwz       r4, 0x14(r29)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xB4(r4)
	  lwz       r4, 0x18(r29)
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xB4(r4)
	  b         .loc_0xF4

	.loc_0xF0:
	  li        r3, 0

	.loc_0xF4:
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
 * Address:	803EC01C
 * Size:	000018
 */
void efx::TKchSmokeHana::setGlobalScale((float))
{
	/*
	.loc_0x0:
	  lwz       r3, 0x8(r3)
	  cmplwi    r3, 0
	  beqlr-
	  stfs      f1, 0xB0(r3)
	  stfs      f1, 0xB4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803EC034
 * Size:	0000D0
 */
void efx::TKchDownsmoke::create((efx::Arg*))
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
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x7910
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x38
	  bl        -0x3219C0
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r31, 0
	  addi      r5, r31, 0x14
	  li        r4, 0x143
	  crclr     6, 0x6
	  bl        -0x3C1A60

	.loc_0x70:
	  lfs       f31, 0x10(r30)
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x3D12C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA8
	  lwz       r4, 0x8(r29)
	  li        r3, 0x1
	  stfs      f31, 0x98(r4)
	  stfs      f31, 0x9C(r4)
	  stfs      f31, 0xA0(r4)
	  stfs      f31, 0xB0(r4)
	  stfs      f31, 0xB4(r4)
	  b         .loc_0xAC

	.loc_0xA8:
	  li        r3, 0

	.loc_0xAC:
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
 * Address:	803EC104
 * Size:	00002C
 */
void efx::TKchDeadHana::setGlobalScale((float))
{
	/*
	.loc_0x0:
	  lwz       r4, 0xC(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x14
	  stfs      f1, 0xB0(r4)
	  stfs      f1, 0xB4(r4)

	.loc_0x14:
	  lwz       r4, 0x20(r3)
	  cmplwi    r4, 0
	  beqlr-
	  stfs      f1, 0xB0(r4)
	  stfs      f1, 0xB4(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803EC130
 * Size:	000004
 */
void efx::TParticleCallBack_KchYodare::init((JPABaseEmitter*, JPABaseParticle*))
{
}

/*
 * --INFO--
 * Address:	803EC134
 * Size:	00017C
 */
void efx::TParticleCallBack_KchYodare::execute((JPABaseEmitter*,
                                                JPABaseParticle*))
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
	  mr        r30, r5
	  mr        r31, r3
	  mr        r29, r4
	  mr        r3, r30
	  bl        -0x356BA4
	  fmr       f30, f1
	  mr        r3, r30
	  mr        r4, r29
	  bl        -0x356BD8
	  fmr       f31, f1
	  mr        r3, r30
	  mr        r4, r29
	  bl        -0x356C0C
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x8(r1)
	  cmplwi    r3, 0
	  stfs      f31, 0xC(r1)
	  stfs      f30, 0x10(r1)
	  beq-      .loc_0x8C
	  lwz       r12, 0x4(r3)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x90

	.loc_0x8C:
	  lfs       f1, 0x1AE0(r2)

	.loc_0x90:
	  lfs       f0, 0xC(r1)
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0xEC
	  lwz       r0, 0x7C(r30)
	  ori       r0, r0, 0x2
	  stw       r0, 0x7C(r30)
	  stfs      f1, 0xC(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r0, 0x1C(r31)
	  cmpw      r3, r0
	  bge-      .loc_0xEC
	  mulli     r0, r3, 0xC
	  lwz       r3, 0x14(r31)
	  lfs       f0, 0x8(r1)
	  add       r3, r3, r0
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x8(r3)
	  lwz       r3, 0x18(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x18(r31)

	.loc_0xEC:
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x3C(r31)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x150
	  lwz       r0, 0x7C(r30)
	  ori       r0, r0, 0x2
	  stw       r0, 0x7C(r30)
	  lfs       f0, 0x3C(r31)
	  stfs      f0, 0xC(r1)
	  lwz       r3, 0x34(r31)
	  lwz       r0, 0x38(r31)
	  cmpw      r3, r0
	  bge-      .loc_0x150
	  mulli     r0, r3, 0xC
	  lwz       r3, 0x30(r31)
	  lfs       f0, 0x8(r1)
	  add       r3, r3, r0
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x8(r3)
	  lwz       r3, 0x34(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x34(r31)

	.loc_0x150:
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
 * Address:	803EC2B0
 * Size:	000108
 */
void efx::TKchYodareBaseChaseMtx::create((efx::Arg*))
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
	  mr.       r30, r4
	  lis       r4, 0x8049
	  mr        r29, r3
	  addi      r31, r4, 0x7910
	  bne-      .loc_0x48
	  addi      r3, r31, 0
	  addi      r5, r31, 0x14
	  li        r4, 0x184
	  crclr     6, 0x6
	  bl        -0x3C1CB4

	.loc_0x48:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x54
	  bl        -0x321C54
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x88
	  addi      r3, r31, 0
	  addi      r5, r31, 0x14
	  li        r4, 0x185
	  crclr     6, 0x6
	  bl        -0x3C1CF4

	.loc_0x88:
	  addi      r3, r29, 0x18
	  lfs       f31, 0x10(r30)
	  lwz       r12, 0x18(r29)
	  li        r4, 0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r29, 0x34
	  li        r4, 0
	  lwz       r12, 0x34(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  stfs      f31, 0x50(r29)
	  mr        r3, r29
	  mr        r4, r30
	  bl        -0x3CC8C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE0
	  lwz       r3, 0x8(r29)
	  addi      r0, r29, 0x14
	  stw       r0, 0xF0(r3)

	.loc_0xE0:
	  li        r3, 0x1
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
 * Address:	803EC3B8
 * Size:	000018
 */
void efx::TKchYodareBaseChaseMtx::setGlobalScale((float))
{
	/*
	.loc_0x0:
	  lwz       r3, 0x8(r3)
	  cmplwi    r3, 0
	  beqlr-
	  stfs      f1, 0xB0(r3)
	  stfs      f1, 0xB4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803EC3D0
 * Size:	000108
 */
void setPosNrm__Q23efx11THdamaSightFR10Vector3<float> R10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  lwz       r0, 0x8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xF8
	  lfs       f5, 0x4(r5)
	  lfs       f6, 0x8(r5)
	  fmuls     f1, f5, f5
	  lfs       f4, 0x0(r5)
	  fmuls     f2, f6, f6
	  lfs       f0, 0x1AE0(r2)
	  fmadds    f1, f4, f4, f1
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x50
	  ble-      .loc_0x54
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x54

	.loc_0x50:
	  fmr       f1, f0

	.loc_0x54:
	  lfs       f0, 0x1AE0(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x74
	  lfs       f0, 0x1AE4(r2)
	  fdivs     f0, f0, f1
	  fmuls     f4, f4, f0
	  fmuls     f5, f5, f0
	  fmuls     f6, f6, f0

	.loc_0x74:
	  lfs       f1, 0x1AE0(r2)
	  lfs       f2, 0x1AE4(r2)
	  fmuls     f3, f1, f4
	  stfs      f4, 0xC(r1)
	  fmuls     f0, f1, f5
	  fnmsubs   f8, f2, f6, f3
	  fmsubs    f7, f1, f6, f0
	  fmsubs    f3, f2, f5, f3
	  fmuls     f2, f6, f8
	  fmuls     f0, f5, f7
	  stfs      f7, 0x10(r1)
	  fmuls     f1, f4, f3
	  fmsubs    f2, f5, f3, f2
	  fmsubs    f0, f4, f8, f0
	  fmsubs    f1, f6, f7, f1
	  stfs      f2, 0x8(r1)
	  lfs       f2, 0x0(r4)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f5, 0x1C(r1)
	  stfs      f8, 0x20(r1)
	  lfs       f1, 0x4(r4)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  stfs      f6, 0x2C(r1)
	  stfs      f3, 0x30(r1)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x34(r1)
	  lwz       r5, 0x8(r3)
	  addi      r3, r1, 0x8
	  addi      r4, r5, 0x68
	  addi      r5, r5, 0xA4
	  bl        -0x3587A8

	.loc_0xF8:
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803EC4D8
 * Size:	0000D0
 */
void efx::THdamaShell::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r2, 0x1AD8
	  bl        -0x321E50
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x64
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x7910
	  li        r4, 0x1B8
	  addi      r5, r5, 0x7924
	  crclr     6, 0x6
	  bl        -0x3C1EF8

	.loc_0x64:
	  lfs       f2, 0x10(r31)
	  mr        r3, r30
	  lfs       f1, 0x14(r31)
	  mr        r4, r31
	  lfs       f0, 0x18(r31)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        -0x3CE70
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB4
	  lwz       r4, 0x8(r30)
	  li        r3, 0x1
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  stfs      f0, 0x18(r4)
	  lfs       f0, 0x10(r1)
	  stfs      f1, 0x1C(r4)
	  stfs      f0, 0x20(r4)
	  b         .loc_0xB8

	.loc_0xB4:
	  li        r3, 0

	.loc_0xB8:
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
 * Address:	803EC5A8
 * Size:	0001BC
 */
void efx::THdamaHit2W::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stfd      f31, 0x80(r1)
	  psq_st    f31,0x88(r1),0,0
	  stfd      f30, 0x70(r1)
	  psq_st    f30,0x78(r1),0,0
	  stfd      f29, 0x60(r1)
	  psq_st    f29,0x68(r1),0,0
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  stw       r29, 0x54(r1)
	  mr        r29, r4
	  mr        r31, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r2, 0x1AD8
	  bl        -0x321F3C
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x80
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x7910
	  li        r4, 0x1C5
	  addi      r5, r5, 0x7924
	  crclr     6, 0x6
	  bl        -0x3C1FE4

	.loc_0x80:
	  lfs       f31, 0x10(r29)
	  mr        r30, r29
	  lfs       f30, 0x14(r29)
	  mr        r3, r31
	  lfs       f29, 0x18(r29)
	  mr        r4, r29
	  bl        -0x3D584
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x184
	  lfs       f4, 0x1AE0(r2)
	  lis       r3, 0x8051
	  lfsu      f1, 0x41E4(r3)
	  li        r29, 0
	  fmuls     f3, f4, f30
	  lfs       f5, 0x1AE4(r2)
	  fmuls     f8, f4, f31
	  lfs       f2, 0x4(r3)
	  lfs       f0, 0x8(r3)
	  fmsubs    f7, f4, f29, f3
	  fmsubs    f6, f5, f30, f8
	  stfs      f1, 0x20(r1)
	  fnmsubs   f5, f5, f29, f8
	  fmuls     f1, f30, f7
	  stfs      f31, 0x18(r1)
	  fmuls     f3, f31, f6
	  fmuls     f4, f29, f5
	  stfs      f7, 0x1C(r1)
	  fmsubs    f1, f31, f5, f1
	  fmsubs    f3, f29, f7, f3
	  stfs      f30, 0x28(r1)
	  fmsubs    f4, f30, f6, f4
	  stfs      f5, 0x2C(r1)
	  stfs      f3, 0x24(r1)
	  stfs      f4, 0x14(r1)
	  stfs      f2, 0x30(r1)
	  stfs      f1, 0x34(r1)
	  stfs      f29, 0x38(r1)
	  stfs      f6, 0x3C(r1)
	  stfs      f0, 0x40(r1)

	.loc_0x11C:
	  lwz       r4, 0xC(r31)
	  addi      r3, r1, 0x14
	  addi      r4, r4, 0x68
	  bl        -0x3589DC
	  addi      r29, r29, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r29, 0x3
	  blt+      .loc_0x11C
	  lis       r3, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804F
	  stw       r0, 0x8(r1)
	  addi      r0, r4, 0x6A78
	  li        r6, 0x9C
	  li        r5, 0
	  stw       r0, 0x8(r1)
	  subi      r0, r3, 0x6020
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  sth       r6, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r0, 0x8(r1)
	  bl        -0x3D79C
	  li        r3, 0x1
	  b         .loc_0x188

	.loc_0x184:
	  li        r3, 0

	.loc_0x188:
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  psq_l     f29,0x68(r1),0,0
	  lfd       f29, 0x60(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r0, 0x94(r1)
	  lwz       r29, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803EC764
 * Size:	000174
 */
void efx::THdamaDeadHahen1::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  stw       r29, 0x54(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x7910
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x2C
	  bl        -0x3220F0
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r31, 0
	  addi      r5, r31, 0x14
	  li        r4, 0x1E4
	  crclr     6, 0x6
	  bl        -0x3C2190

	.loc_0x70:
	  lfs       f0, 0x10(r30)
	  mr        r3, r29
	  mr        r4, r30
	  stfs      f0, 0x14(r1)
	  lfs       f0, 0x14(r30)
	  stfs      f0, 0x18(r1)
	  lfs       f0, 0x18(r30)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0x1C(r30)
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x20(r30)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x24(r30)
	  stfs      f0, 0x10(r1)
	  bl        -0x3D888
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x14C
	  addi      r3, r1, 0x20
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  bl        -0x3CBA4
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x18(r1)
	  lfs       f3, 0x10(r1)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x1C(r1)
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x14(r1)
	  fsubs     f2, f3, f2
	  fmuls     f3, f4, f4
	  fsubs     f1, f1, f0
	  lfs       f0, 0x1AE0(r2)
	  fmuls     f2, f2, f2
	  fmadds    f1, f1, f1, f3
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x114
	  ble-      .loc_0x118
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x118

	.loc_0x114:
	  fmr       f1, f0

	.loc_0x118:
	  lfs       f0, 0x1AF0(r2)
	  addi      r3, r1, 0x20
	  lwz       r5, 0x8(r29)
	  fdivs     f31, f1, f0
	  addi      r4, r5, 0x68
	  addi      r5, r5, 0xA4
	  bl        -0x358B78
	  lwz       r4, 0x8(r29)
	  li        r3, 0x1
	  lfs       f1, 0x4(r4)
	  fmuls     f1, f1, f31
	  stfs      f1, 0x4(r4)
	  b         .loc_0x150

	.loc_0x14C:
	  li        r3, 0

	.loc_0x150:
	  psq_l     f31,0x68(r1),0,0
	  lwz       r0, 0x74(r1)
	  lfd       f31, 0x60(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803EC8D8
 * Size:	00018C
 */
void efx::THdamaDeadHahen2::create((efx::Arg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  stw       r29, 0x54(r1)
	  mr        r30, r4
	  mr        r29, r3
	  mr        r3, r30
	  lis       r4, 0x8049
	  lwz       r12, 0x0(r30)
	  addi      r31, r4, 0x7910
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r31, 0x2C
	  bl        -0x322264
	  cntlzw    r0, r3
	  rlwinm.   r0,r0,27,24,31
	  bne-      .loc_0x70
	  addi      r3, r31, 0
	  addi      r5, r31, 0x14
	  li        r4, 0x200
	  crclr     6, 0x6
	  bl        -0x3C2304

	.loc_0x70:
	  lfs       f0, 0x10(r30)
	  mr        r3, r29
	  mr        r4, r30
	  stfs      f0, 0x14(r1)
	  lfs       f0, 0x14(r30)
	  stfs      f0, 0x18(r1)
	  lfs       f0, 0x18(r30)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0x1C(r30)
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x20(r30)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x24(r30)
	  stfs      f0, 0x10(r1)
	  bl        -0x3D96C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x164
	  addi      r3, r1, 0x20
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  bl        -0x3CD18
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x18(r1)
	  lfs       f3, 0x10(r1)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x1C(r1)
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x14(r1)
	  fsubs     f2, f3, f2
	  fmuls     f3, f4, f4
	  fsubs     f1, f1, f0
	  lfs       f0, 0x1AE0(r2)
	  fmuls     f2, f2, f2
	  fmadds    f1, f1, f1, f3
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x114
	  ble-      .loc_0x118
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x118

	.loc_0x114:
	  fmr       f1, f0

	.loc_0x118:
	  lfs       f0, 0x1AF0(r2)
	  mr        r31, r29
	  li        r30, 0
	  fdivs     f31, f1, f0

	.loc_0x128:
	  lwz       r5, 0x8(r31)
	  addi      r3, r1, 0x20
	  addi      r4, r5, 0x68
	  addi      r5, r5, 0xA4
	  bl        -0x358CF4
	  lwz       r3, 0x8(r31)
	  addi      r30, r30, 0x1
	  cmpwi     r30, 0x2
	  addi      r31, r31, 0x4
	  lfs       f1, 0x4(r3)
	  fmuls     f1, f1, f31
	  stfs      f1, 0x4(r3)
	  blt+      .loc_0x128
	  li        r3, 0x1
	  b         .loc_0x168

	.loc_0x164:
	  li        r3, 0

	.loc_0x168:
	  psq_l     f31,0x68(r1),0,0
	  lwz       r0, 0x74(r1)
	  lfd       f31, 0x60(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803ECA64
 * Size:	000018
 */
void efx::TOdamaFur1::setGlobalScale((float))
{
	/*
	.loc_0x0:
	  lwz       r3, 0x8(r3)
	  cmplwi    r3, 0
	  beqlr-
	  stfs      f1, 0xB0(r3)
	  stfs      f1, 0xB4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803ECA7C
 * Size:	000018
 */
void efx::TOdamaFur2::setGlobalScale((float))
{
	/*
	.loc_0x0:
	  lwz       r3, 0x8(r3)
	  cmplwi    r3, 0
	  beqlr-
	  stfs      f1, 0xB0(r3)
	  stfs      f1, 0xB4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803ECA94
 * Size:	00009C
 */
void efx::THdamaShell::__dt(void)
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
	  beq-      .loc_0x80
	  lis       r3, 0x804F
	  subi      r3, r3, 0x5FF8
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r3, 0x804E
	  addi      r3, r3, 0x6940
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x70
	  lis       r4, 0x804E
	  addi      r3, r30, 0x4
	  addi      r5, r4, 0x698C
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  addi      r0, r5, 0x14
	  stw       r0, 0x4(r30)
	  bl        -0x35CE64

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x3C8A5C

	.loc_0x80:
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
 * Address:	803ECB30
 * Size:	000008
 */
void @4 @efx::TKchYodareBaseChaseMtx::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x8F14C
	*/
}

/*
 * --INFO--
 * Address:	803ECB38
 * Size:	000008
 */
void @4 @efx::THdamaShell::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xA8
	*/
}
