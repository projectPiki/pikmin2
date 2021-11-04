#include "types.h"

#include "Game/PelletMgr.h"

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
 * Address:	801658EC
 * Size:	000020
 */
void Game::Pellet::getCreatureName(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x35C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x14
	  lwz       r3, 0x40(r3)
	  blr

	.loc_0x14:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x1CD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016590C
 * Size:	000034
 */
void Game::Pellet::getCreatureID(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x35C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x20
	  bl        0x10BC
	  b         .loc_0x24

	.loc_0x20:
	  li        r3, -0x1

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80165940
 * Size:	000190
 */
void Game::Pellet::getShadowParam((Game::ShadowParam&))
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
	  stfd      f27, 0x40(r1)
	  psq_st    f27,0x48(r1),0,0
	  stfd      f26, 0x30(r1)
	  psq_st    f26,0x38(r1),0,0
	  stfd      f25, 0x20(r1)
	  psq_st    f25,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lfs       f1, -0x5A50(r2)
	  lfs       f30, 0x14C(r3)
	  mr        r31, r4
	  lfs       f0, -0x5A4C(r2)
	  fabs      f2, f30
	  lfs       f31, 0x13C(r3)
	  lfs       f29, 0x15C(r3)
	  frsp      f2, f2
	  fnmsubs   f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  mr        r3, r30
	  bl        0x100C
	  mr        r4, r30
	  fmr       f28, f1
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x5A4C(r2)
	  lfs       f27, 0x8(r1)
	  fcmpo     cr0, f30, f0
	  lfs       f26, 0xC(r1)
	  lfs       f25, 0x10(r1)
	  ble-      .loc_0xE0
	  mr        r3, r30
	  bl        0xFDC
	  lfs       f0, -0x5A48(r2)
	  fmuls     f0, f0, f1
	  fmuls     f2, f31, f0
	  fmuls     f1, f30, f0
	  fmuls     f0, f29, f0
	  fsubs     f3, f27, f2
	  fsubs     f4, f26, f1
	  fsubs     f5, f25, f0
	  b         .loc_0x108

	.loc_0xE0:
	  mr        r3, r30
	  bl        0xFB0
	  lfs       f0, -0x5A48(r2)
	  fmuls     f0, f0, f1
	  fmuls     f2, f31, f0
	  fmuls     f1, f30, f0
	  fmuls     f0, f29, f0
	  fadds     f3, f27, f2
	  fadds     f4, f26, f1
	  fadds     f5, f25, f0

	.loc_0x108:
	  lfs       f0, -0x5A44(r2)
	  fabs      f2, f30
	  stfs      f3, 0x0(r31)
	  fadds     f4, f4, f0
	  lfs       f1, -0x5A40(r2)
	  frsp      f0, f2
	  stfs      f4, 0x4(r31)
	  fmuls     f0, f28, f0
	  stfs      f5, 0x8(r31)
	  stfs      f31, 0xC(r31)
	  stfs      f30, 0x10(r31)
	  stfs      f29, 0x14(r31)
	  stfs      f1, 0x18(r31)
	  stfs      f0, 0x1C(r31)
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  psq_l     f29,0x68(r1),0,0
	  lfd       f29, 0x60(r1)
	  psq_l     f28,0x58(r1),0,0
	  lfd       f28, 0x50(r1)
	  psq_l     f27,0x48(r1),0,0
	  lfd       f27, 0x40(r1)
	  psq_l     f26,0x38(r1),0,0
	  lfd       f26, 0x30(r1)
	  psq_l     f25,0x28(r1),0,0
	  lfd       f25, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x94(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80165AD0
 * Size:	000074
 */
void Game::Pellet::needShadow(void)
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
	  lwz       r4, -0x6CE0(r13)
	  lbz       r0, 0x3C(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  beq-      .loc_0x58
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x58
	  lbz       r0, 0xD8(r30)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x58

	.loc_0x54:
	  li        r31, 0x1

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80165B44
 * Size:	000008
 */
void Game::Pellet::getWallTimer(void)
{
	/*
	.loc_0x0:
	  lbz       r3, 0x3BC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80165B4C
 * Size:	000034
 */
void Game::PelletViewArg::__ct(void)
{
	/*
	.loc_0x0:
	  lfs       f1, -0x5A50(r2)
	  li        r0, 0
	  lfs       f0, -0x5A4C(r2)
	  stfs      f1, 0x18(r3)
	  stfs      f1, 0x1C(r3)
	  stfs      f1, 0x20(r3)
	  stw       r0, 0x14(r3)
	  stw       r0, 0x10(r3)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  stfs      f0, 0xC(r3)
	  stw       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80165B80
 * Size:	000220
 */
void Game::PelletView::becomePellet((Game::PelletViewArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lis       r6, 0x804B
	  lis       r5, 0x804B
	  stw       r0, 0x64(r1)
	  subi      r0, r5, 0x5D0C
	  subi      r8, r6, 0x5D48
	  li        r7, 0
	  stw       r31, 0x5C(r1)
	  li        r5, -0x1
	  li        r6, 0x1
	  mr        r31, r3
	  stw       r30, 0x58(r1)
	  stw       r29, 0x54(r1)
	  mr        r29, r4
	  addi      r4, r1, 0x20
	  stw       r0, 0x20(r1)
	  li        r0, 0xFF
	  lwz       r3, -0x6CE0(r13)
	  stw       r8, 0x20(r1)
	  stb       r7, 0x3C(r1)
	  sth       r7, 0x34(r1)
	  stb       r0, 0x36(r1)
	  stw       r7, 0x38(r1)
	  stb       r7, 0x37(r1)
	  stb       r6, 0x24(r1)
	  stb       r7, 0x3D(r1)
	  stw       r5, 0x44(r1)
	  stw       r5, 0x40(r1)
	  stb       r7, 0x3E(r1)
	  stb       r7, 0x3F(r1)
	  lwz       r0, 0x0(r29)
	  stw       r0, 0x28(r1)
	  stw       r7, 0x2C(r1)
	  stw       r5, 0x30(r1)
	  stb       r6, 0x36(r1)
	  stw       r31, 0x38(r1)
	  bl        0x78AC
	  mr.       r30, r3
	  beq-      .loc_0x1F4
	  lfs       f0, 0x4(r29)
	  stfs      f0, 0x14(r1)
	  lfs       f0, 0x8(r29)
	  stfs      f0, 0x18(r1)
	  lfs       f0, 0xC(r29)
	  stfs      f0, 0x1C(r1)
	  bl        0xD9C
	  lfs       f3, -0x5A48(r2)
	  mr        r3, r30
	  lfs       f0, 0x18(r1)
	  addi      r4, r1, 0x14
	  lfs       f2, 0x1C(r1)
	  li        r5, 0
	  fmadds    f9, f3, f1, f0
	  lfs       f0, 0x14(r1)
	  stfs      f9, 0x18(r1)
	  lwz       r7, 0x10(r29)
	  lwz       r6, 0x35C(r30)
	  lfs       f4, 0x4(r7)
	  lfs       f10, 0x214(r6)
	  lfs       f3, 0x14(r7)
	  lfs       f1, 0x24(r7)
	  fmuls     f6, f10, f4
	  lfs       f8, 0x210(r6)
	  fmuls     f4, f10, f3
	  lfs       f7, 0x0(r7)
	  fmuls     f1, f10, f1
	  lfs       f5, 0x10(r7)
	  lfs       f3, 0x20(r7)
	  fmadds    f6, f8, f7, f6
	  lfs       f11, 0x218(r6)
	  fmadds    f4, f8, f5, f4
	  lfs       f7, 0x8(r7)
	  fmadds    f1, f8, f3, f1
	  lfs       f5, 0x18(r7)
	  lfs       f3, 0x28(r7)
	  fmadds    f6, f11, f7, f6
	  fmadds    f4, f11, f5, f4
	  stfs      f8, 0x8(r1)
	  fmadds    f1, f11, f3, f1
	  fadds     f0, f0, f6
	  stfs      f10, 0xC(r1)
	  fadds     f3, f9, f4
	  fadds     f2, f2, f1
	  stfs      f11, 0x10(r1)
	  stfs      f6, 0x8(r1)
	  stfs      f4, 0xC(r1)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  stfs      f3, 0x18(r1)
	  stfs      f2, 0x1C(r1)
	  bl        -0x2AB44
	  stw       r30, 0x4(r31)
	  li        r0, 0x1
	  mr        r3, r30
	  stb       r0, 0x324(r30)
	  lwz       r4, 0x10(r29)
	  bl        0x27C8
	  lfs       f0, 0x18(r29)
	  mr        r3, r31
	  stfs      f0, 0x168(r30)
	  lfs       f0, 0x1C(r29)
	  stfs      f0, 0x16C(r30)
	  lfs       f0, 0x20(r29)
	  stfs      f0, 0x170(r30)
	  lbz       r0, 0xD8(r30)
	  ori       r0, r0, 0x34
	  stb       r0, 0xD8(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r29)
	  stw       r0, 0x8(r31)
	  lwz       r0, 0x8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x200
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1CBC
	  li        r4, 0x37F
	  subi      r5, r5, 0x1CAC
	  crclr     6, 0x6
	  bl        -0x13B72C
	  b         .loc_0x200

	.loc_0x1F4:
	  li        r0, 0
	  stw       r0, 0x4(r31)
	  stw       r0, 0x8(r31)

	.loc_0x200:
	  lwz       r0, 0x64(r1)
	  lwz       r3, 0x4(r31)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80165DA0
 * Size:	000084
 */
void Game::PelletView::viewMakeMatrix((Matrixf&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r4
	  stw       r30, 0x48(r1)
	  mr        r30, r3
	  lwz       r3, 0x4(r3)
	  bl        0xC14
	  lfs       f2, -0x5A3C(r2)
	  lis       r3, 0x8051
	  lfs       f0, -0x5A4C(r2)
	  addi      r5, r3, 0x41E4
	  fmuls     f1, f2, f1
	  addi      r3, r1, 0x14
	  stfs      f0, 0x8(r1)
	  addi      r6, r1, 0x8
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  lwz       r4, 0x4(r30)
	  addi      r4, r4, 0x168
	  bl        0x2C24E4
	  lwz       r3, 0x4(r30)
	  mr        r5, r31
	  addi      r4, r1, 0x14
	  addi      r3, r3, 0x138
	  bl        -0x7BB08
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
 * Address:	80165E24
 * Size:	00000C
 */
void Game::Pellet::clearClaim(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x3C0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80165E30
 * Size:	000018
 */
void Game::Pellet::sendClaim(void)
{
	/*
	.loc_0x0:
	  lwz       r4, 0x3C0(r3)
	  cmpwi     r4, 0xA
	  bgelr-
	  addi      r0, r4, 0x1
	  stw       r0, 0x3C0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80165E48
 * Size:	0003F4
 */
void Game::Pellet::updateClaim(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stfd      f31, 0xA0(r1)
	  psq_st    f31,0xA8(r1),0,0
	  stfd      f30, 0x90(r1)
	  psq_st    f30,0x98(r1),0,0
	  stfd      f29, 0x80(r1)
	  psq_st    f29,0x88(r1),0,0
	  stw       r31, 0x7C(r1)
	  stw       r30, 0x78(r1)
	  mr        r31, r3
	  lwz       r0, 0x3C0(r3)
	  cmpwi     r0, 0xA
	  blt-      .loc_0x3C4
	  lfs       f31, -0x5A4C(r2)
	  mr        r4, r31
	  addi      r3, r1, 0x48
	  li        r30, 0
	  fmr       f30, f31
	  fmr       f29, f31
	  bl        0x39DC0
	  li        r0, 0
	  lis       r3, 0x804B
	  subi      r4, r3, 0x437C
	  addi      r3, r1, 0x48
	  cmplwi    r0, 0
	  stw       r4, 0x38(r1)
	  stw       r0, 0x44(r1)
	  stw       r0, 0x3C(r1)
	  stw       r3, 0x40(r1)
	  bne-      .loc_0x98
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x228

	.loc_0x98:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x104

	.loc_0xB0:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x228
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)

	.loc_0x104:
	  lwz       r12, 0x38(r1)
	  addi      r3, r1, 0x38
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xB0
	  b         .loc_0x228

	.loc_0x124:
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x14(r1)
	  addi      r30, r30, 0x1
	  lfs       f1, 0x18(r1)
	  lfs       f0, 0x1C(r1)
	  fadds     f31, f31, f2
	  lwz       r0, 0x44(r1)
	  fadds     f30, f30, f1
	  fadds     f29, f29, f0
	  cmplwi    r0, 0
	  bne-      .loc_0x198
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x228

	.loc_0x198:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x20C

	.loc_0x1B8:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x228
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)

	.loc_0x20C:
	  lwz       r12, 0x38(r1)
	  addi      r3, r1, 0x38
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1B8

	.loc_0x228:
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x3C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x124
	  cmpwi     r30, 0
	  ble-      .loc_0x3B8
	  xoris     r3, r30, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x6C(r1)
	  lfd       f1, -0x5A30(r2)
	  stw       r0, 0x68(r1)
	  lfs       f5, -0x5A50(r2)
	  lfd       f0, 0x68(r1)
	  lfs       f3, 0x3B0(r31)
	  fsubs     f2, f0, f1
	  lfs       f0, 0x3AC(r31)
	  lfs       f4, 0x3B4(r31)
	  lfs       f1, -0x5A4C(r2)
	  fdivs     f2, f5, f2
	  fmuls     f31, f31, f2
	  fmuls     f30, f30, f2
	  fmuls     f29, f29, f2
	  fsubs     f2, f31, f0
	  fsubs     f3, f30, f3
	  fsubs     f4, f29, f4
	  fmuls     f0, f2, f2
	  stfs      f2, 0x2C(r1)
	  fmuls     f5, f3, f3
	  fmuls     f6, f4, f4
	  stfs      f3, 0x30(r1)
	  fadds     f0, f0, f5
	  stfs      f4, 0x34(r1)
	  fadds     f0, f6, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x2E0
	  fmadds    f0, f2, f2, f5
	  fadds     f3, f6, f0
	  fcmpo     cr0, f3, f1
	  ble-      .loc_0x2E4
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0x2E4

	.loc_0x2E0:
	  fmr       f3, f1

	.loc_0x2E4:
	  lfs       f0, -0x5A4C(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x31C
	  lfs       f0, -0x5A50(r2)
	  lfs       f2, 0x2C(r1)
	  fdivs     f3, f0, f3
	  lfs       f1, 0x30(r1)
	  lfs       f0, 0x34(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)

	.loc_0x31C:
	  mr        r4, r31
	  lfs       f2, 0x2C(r1)
	  lfs       f3, -0x5A38(r2)
	  addi      r3, r1, 0x8
	  lfs       f1, 0x30(r1)
	  lfs       f0, 0x34(r1)
	  fmuls     f2, f2, f3
	  lwz       r12, 0x0(r31)
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  lwz       r12, 0x6C(r12)
	  stfs      f2, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x34(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x8(r1)
	  mr        r3, r31
	  lfs       f4, 0xC(r1)
	  addi      r4, r1, 0x20
	  lfs       f3, 0x10(r1)
	  lfs       f2, 0x2C(r1)
	  lfs       f1, 0x30(r1)
	  lfs       f0, 0x34(r1)
	  fadds     f2, f5, f2
	  stfs      f5, 0x20(r1)
	  fadds     f1, f4, f1
	  fadds     f0, f3, f0
	  stfs      f4, 0x24(r1)
	  stfs      f3, 0x28(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stw       r0, 0x3C0(r31)

	.loc_0x3B8:
	  addi      r3, r1, 0x48
	  li        r4, -0x1
	  bl        0x39B5C

	.loc_0x3C4:
	  psq_l     f31,0xA8(r1),0,0
	  lfd       f31, 0xA0(r1)
	  psq_l     f30,0x98(r1),0,0
	  lfd       f30, 0x90(r1)
	  psq_l     f29,0x88(r1),0,0
	  lfd       f29, 0x80(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r0, 0xB4(r1)
	  lwz       r30, 0x78(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016623C
 * Size:	00000C
 */
void Game::Pellet::getBuryDepthMax(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x35C(r3)
	  lfs       f1, 0x1C0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80166248
 * Size:	00000C
 */
void Game::Pellet::getBuryDepth(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x35C(r3)
	  lfs       f1, 0x1B0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80166254
 * Size:	000124
 */
void Game::Pellet::getBuryRadius((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  lfs       f4, -0x5A28(r2)
	  lis       r4, 0x4330
	  lwz       r5, 0x35C(r3)
	  lis       r3, 0x8048
	  fmuls     f0, f4, f1
	  subi      r11, r3, 0x1CE8
	  lwz       r10, 0x48(r11)
	  li        r0, 0
	  lwz       r9, 0x4C(r11)
	  fctiwz    f0, f0
	  lwz       r8, 0x50(r11)
	  lwz       r7, 0x54(r11)
	  stfd      f0, 0x20(r1)
	  lwz       r6, 0x58(r11)
	  lwz       r31, 0x24(r1)
	  stw       r4, 0x28(r1)
	  xoris     r3, r31, 0x8000
	  lfd       f2, -0x5A30(r2)
	  stw       r3, 0x2C(r1)
	  cmpwi     r31, 0
	  lfs       f3, -0x5A24(r2)
	  lfd       f0, 0x28(r1)
	  stw       r10, 0x8(r1)
	  fsubs     f0, f0, f2
	  lfs       f6, 0x1D0(r5)
	  stw       r9, 0xC(r1)
	  lfs       f5, 0x1E0(r5)
	  fmuls     f0, f3, f0
	  stw       r8, 0x10(r1)
	  lfs       f2, 0x1F0(r5)
	  stw       r7, 0x14(r1)
	  fsubs     f0, f1, f0
	  lfs       f1, 0x200(r5)
	  stw       r6, 0x18(r1)
	  fmuls     f31, f4, f0
	  stfs      f6, 0x8(r1)
	  stfs      f5, 0xC(r1)
	  stfs      f2, 0x10(r1)
	  stfs      f1, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  blt-      .loc_0xC8
	  cmpwi     r31, 0x4
	  bgt-      .loc_0xC8
	  li        r0, 0x1

	.loc_0xC8:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0xE4
	  addi      r3, r11, 0x2C
	  addi      r5, r11, 0x3C
	  li        r4, 0x3EE
	  crclr     6, 0x6
	  bl        -0x13BCF4

	.loc_0xE4:
	  rlwinm    r0,r31,2,0,29
	  addi      r3, r1, 0xC
	  lfs       f1, -0x5A50(r2)
	  addi      r4, r1, 0x8
	  lfsx      f0, r3, r0
	  fsubs     f2, f1, f31
	  lfsx      f1, r4, r0
	  fmuls     f0, f31, f0
	  fmadds    f1, f2, f1, f0
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80166378
 * Size:	000074
 */
void Game::Pellet::stimulate((Game::Interaction&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  mr        r4, r30
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x58
	  mr        r3, r31
	  mr        r4, r30
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x5C

	.loc_0x58:
	  li        r3, 0

	.loc_0x5C:
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
 * Address:	801663EC
 * Size:	000088
 */
void Game::InteractMattuan::actPellet((Game::Pellet*))
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
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x4
	  bne-      .loc_0x64
	  lwz       r4, -0x6514(r13)
	  mr        r3, r31
	  lfs       f1, 0x8(r30)
	  lfs       f0, 0x54(r4)
	  fdivs     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r4, 0xC(r1)
	  bl        0x5088
	  b         .loc_0x6C

	.loc_0x64:
	  mr        r3, r31
	  bl        0x5070

	.loc_0x6C:
	  lwz       r0, 0x24(r1)
	  li        r3, 0x1
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80166474
 * Size:	000188
 */
void Game::InteractEat::actPellet((Game::Pellet*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x2
	  bne-      .loc_0x170
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x170
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  lis       r3, 0x804B
	  lfs       f1, 0xC(r1)
	  subi      r0, r3, 0x5814
	  lfs       f0, 0x10(r1)
	  stw       r0, 0x34(r1)
	  stfs      f2, 0x38(r1)
	  stfs      f1, 0x3C(r1)
	  stfs      f0, 0x40(r1)
	  lhz       r0, 0x43E(r31)
	  stfs      f2, 0x44(r1)
	  cmplwi    r0, 0
	  stfs      f1, 0x48(r1)
	  stfs      f0, 0x4C(r1)
	  bne-      .loc_0xF4
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x24(r1)
	  addi      r0, r3, 0x6A64
	  lis       r3, 0x804B
	  li        r4, 0x65
	  stw       r0, 0x24(r1)
	  addi      r0, r3, 0x2288
	  li        r6, 0x66
	  addi      r3, r1, 0x24
	  sth       r4, 0x28(r1)
	  addi      r4, r1, 0x34
	  sth       r6, 0x2A(r1)
	  stw       r5, 0x2C(r1)
	  stw       r5, 0x30(r1)
	  stw       r0, 0x24(r1)
	  bl        0x248AB4
	  b         .loc_0x140

	.loc_0xF4:
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x14(r1)
	  addi      r0, r3, 0x6A64
	  lis       r3, 0x804B
	  li        r4, 0x63
	  stw       r0, 0x14(r1)
	  addi      r0, r3, 0x2274
	  li        r6, 0x64
	  addi      r3, r1, 0x14
	  sth       r4, 0x18(r1)
	  addi      r4, r1, 0x34
	  sth       r6, 0x1A(r1)
	  stw       r5, 0x1C(r1)
	  stw       r5, 0x20(r1)
	  stw       r0, 0x14(r1)
	  bl        0x248A64

	.loc_0x140:
	  lwz       r3, 0x330(r31)
	  li        r4, 0x3842
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x2B4E8
	  li        r3, 0x1
	  b         .loc_0x174

	.loc_0x170:
	  li        r3, 0

	.loc_0x174:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801665FC
 * Size:	000080
 */
void Game::InteractSuck::actPellet((Game::Pellet*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  addi      r0, r5, 0x2244
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  lwz       r3, 0x4(r3)
	  cmplwi    r3, 0
	  stw       r0, 0xC(r1)
	  stw       r3, 0x8(r1)
	  beq-      .loc_0x40
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x40:
	  lwz       r3, 0x3C8(r31)
	  mr        r4, r31
	  addi      r6, r1, 0x8
	  li        r5, 0x7
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x1784
	  lwz       r0, 0x24(r1)
	  li        r3, 0x1
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016667C
 * Size:	000004
 */
void Game::Pellet::doDirectDraw((Graphics&)) { }

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Game::Pellet::directDraw((Graphics&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80166680
 * Size:	0001B0
 */
void Game::Pellet::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x41A4C
	  lis       r3, 0x804B
	  lis       r4, 0x804B
	  subi      r0, r3, 0x5994
	  lis       r3, 0x804B
	  stw       r0, 0x314(r31)
	  addi      r5, r3, 0x1F70
	  subi      r0, r4, 0x3C28
	  lis       r4, 0x804B
	  stw       r0, 0x318(r31)
	  lis       r3, 0x804F
	  addi      r0, r5, 0x1B4
	  addi      r7, r5, 0x1C0
	  stw       r5, 0x0(r31)
	  subi      r6, r4, 0x4678
	  subi      r5, r3, 0x4200
	  li        r4, 0
	  stw       r0, 0x314(r31)
	  li        r0, 0x401
	  li        r3, 0x8
	  stw       r7, 0x318(r31)
	  stw       r6, 0x33C(r31)
	  stw       r5, 0x33C(r31)
	  stb       r4, 0x354(r31)
	  stw       r4, 0x348(r31)
	  stw       r4, 0x340(r31)
	  stb       r4, 0x354(r31)
	  stw       r4, 0x34C(r31)
	  stb       r4, 0x3D0(r31)
	  stb       r4, 0x3E4(r31)
	  stb       r4, 0x3E5(r31)
	  stb       r4, 0x3E6(r31)
	  stb       r4, 0x3E7(r31)
	  stb       r4, 0x3E8(r31)
	  stb       r4, 0x3E9(r31)
	  stb       r4, 0x3EA(r31)
	  stb       r4, 0x3EB(r31)
	  stb       r4, 0x3EC(r31)
	  stb       r4, 0x3ED(r31)
	  stb       r4, 0x3EE(r31)
	  stb       r4, 0x3EF(r31)
	  stb       r4, 0x3F0(r31)
	  stb       r4, 0x3F1(r31)
	  stb       r4, 0x3F2(r31)
	  stb       r4, 0x3F3(r31)
	  stw       r6, 0x41C(r31)
	  stw       r5, 0x41C(r31)
	  stb       r4, 0x434(r31)
	  stw       r4, 0x428(r31)
	  stw       r4, 0x420(r31)
	  stb       r4, 0x434(r31)
	  stw       r4, 0x42C(r31)
	  stw       r4, 0x328(r31)
	  stw       r4, 0x174(r31)
	  sth       r0, 0x128(r31)
	  bl        -0x1428CC
	  mr.       r0, r3
	  beq-      .loc_0x104
	  bl        -0x32720
	  mr        r0, r3

	.loc_0x104:
	  stw       r0, 0x114(r31)
	  li        r3, 0x1C
	  bl        -0x1428E8
	  cmplwi    r3, 0
	  beq-      .loc_0x138
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  addi      r0, r5, 0x222C
	  li        r5, -0x1
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x5200
	  stw       r5, 0x18(r3)
	  stw       r0, 0x0(r3)

	.loc_0x138:
	  stw       r3, 0x3C8(r31)
	  mr        r4, r31
	  lwz       r3, 0x3C8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r31, 0xA8
	  li        r5, 0x8
	  bl        -0xF9B0
	  li        r3, 0x4
	  li        r0, 0
	  sth       r3, 0x43E(r31)
	  mr        r3, r31
	  stw       r0, 0x358(r31)
	  bl        0x173C
	  li        r3, 0x18
	  bl        -0x14295C
	  mr.       r0, r3
	  beq-      .loc_0x194
	  bl        0xCE6EC
	  mr        r0, r3

	.loc_0x194:
	  stw       r0, 0x334(r31)
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
 * Address:	80166830
 * Size:	00006C
 */
void Game::Pellet::constructor(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0x70
	  bl        -0x1429A8
	  mr.       r31, r3
	  beq-      .loc_0x50
	  mr        r4, r30
	  li        r5, 0x2
	  bl        0x2F6F44
	  lis       r3, 0x804B
	  addi      r4, r3, 0x21A4
	  stw       r4, 0x28(r31)
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x40
	  stw       r3, 0x10(r31)
	  stw       r0, 0x30(r31)

	.loc_0x50:
	  stw       r31, 0x330(r30)
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
 * Address:	8016689C
 * Size:	00009C
 */
void PSM::CreatureObj::__dt(void)
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
	  lis       r4, 0x804F
	  addi      r3, r30, 0x30
	  subi      r6, r4, 0xEBC
	  li        r4, 0
	  stw       r6, 0x28(r30)
	  addi      r5, r6, 0x8
	  addi      r0, r6, 0x40
	  stw       r5, 0x10(r30)
	  stw       r0, 0x30(r30)
	  bl        -0xACD00
	  cmplwi    r30, 0
	  beq-      .loc_0x70
	  lis       r4, 0x804F
	  mr        r3, r30
	  subi      r5, r4, 0xE34
	  li        r4, 0
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  stw       r0, 0x10(r30)
	  bl        0x2F655C

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x142864

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
 * Address:	80166938
 * Size:	000034
 */
void Game::Pellet::shadowOn(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r0, -0x6980(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x24
	  mr        r3, r0
	  bl        0xDB354

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016696C
 * Size:	000034
 */
void Game::Pellet::shadowOff(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r0, -0x6980(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x24
	  mr        r3, r0
	  bl        0xDB364

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void Game::Pellet::isMomijiType(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void Game::Pellet::postTexGen(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801669A0
 * Size:	000014
 */
void Game::Pellet::getJAIObject(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x330(r3)
	  cmplwi    r3, 0
	  beqlr-
	  addi      r3, r3, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801669B4
 * Size:	000008
 */
void Game::Pellet::getPSCreature(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x330(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801669BC
 * Size:	00000C
 */
void Game::Pellet::getBottomRadius(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x35C(r3)
	  lfs       f1, 0xA0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801669C8
 * Size:	00000C
 */
void Game::Pellet::getPickRadius(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x35C(r3)
	  lfs       f1, 0xB0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801669D4
 * Size:	00000C
 */
void Game::Pellet::getCylinderHeight(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x35C(r3)
	  lfs       f1, 0xC0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801669E0
 * Size:	000058
 */
void Game::Pellet::getConfigIndex(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x35C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1CBC
	  li        r4, 0x599
	  subi      r5, r5, 0x1CAC
	  crclr     6, 0x6
	  bl        -0x13C3D8

	.loc_0x3C:
	  lwz       r3, 0x35C(r31)
	  lwz       r0, 0x14(r1)
	  lha       r3, 0x258(r3)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80166A38
 * Size:	00000C
 */
void Game::Pellet::getConfigName(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x35C(r3)
	  lwz       r3, 0x40(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void Game::PelletGinkaInitArg::__ct(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80166A44
 * Size:	000130
 */
void Game::PelletIndexInitArg::__ct((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  li        r10, 0
	  stw       r0, 0x34(r1)
	  subi      r0, r5, 0x5D0C
	  li        r9, 0xFF
	  li        r8, 0x1
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lis       r3, 0x804B
	  li        r7, -0x1
	  stw       r30, 0x28(r1)
	  addi      r5, r31, 0x16
	  addi      r6, r1, 0x8
	  stw       r0, 0x0(r31)
	  subi      r0, r3, 0x5D48
	  lis       r3, 0x804B
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0x2198
	  stb       r10, 0x1C(r31)
	  sth       r10, 0x14(r31)
	  stb       r9, 0x16(r31)
	  stw       r10, 0x18(r31)
	  stb       r10, 0x17(r31)
	  stb       r8, 0x4(r31)
	  stb       r10, 0x1D(r31)
	  stw       r7, 0x24(r31)
	  stw       r7, 0x20(r31)
	  stb       r10, 0x1E(r31)
	  stb       r10, 0x1F(r31)
	  stw       r0, 0x0(r31)
	  lwz       r3, -0x6CE0(r13)
	  bl        0x82C0
	  lwz       r3, -0x6CE0(r13)
	  lbz       r4, 0x16(r31)
	  bl        0x85F8
	  mr.       r30, r3
	  bne-      .loc_0xB8
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1CBC
	  li        r4, 0x5B9
	  subi      r5, r5, 0x1CAC
	  crclr     6, 0x6
	  bl        -0x13C4B8

	.loc_0xB8:
	  lwz       r4, 0x8(r1)
	  mr        r3, r30
	  bl        0x5284
	  lwz       r0, 0x40(r3)
	  stw       r0, 0x8(r31)
	  lwz       r0, 0x8(r1)
	  stw       r0, 0x10(r31)
	  bl        -0x9D578
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  mr        r3, r31
	  lfd       f3, -0x5A30(r2)
	  stw       r0, 0x10(r1)
	  lfs       f1, -0x5A20(r2)
	  lfd       f2, 0x10(r1)
	  lfs       f0, -0x5A1C(r2)
	  fsubs     f2, f2, f3
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  stw       r0, 0xC(r31)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80166B74
 * Size:	0000F0
 */
void Game::PelletNumberInitArg::__ct((int, int))
{
	/*
	.loc_0x0:
	  lis       r8, 0x804B
	  lis       r7, 0x804B
	  subi      r8, r8, 0x5D0C
	  li        r10, 0
	  stw       r8, 0x0(r3)
	  subi      r0, r7, 0x5D48
	  li        r9, 0xFF
	  li        r8, 0x1
	  stw       r0, 0x0(r3)
	  lis       r6, 0x804B
	  li        r7, -0x1
	  cmplwi    r4, 0x14
	  stb       r10, 0x1C(r3)
	  addi      r0, r6, 0x218C
	  sth       r10, 0x14(r3)
	  stb       r9, 0x16(r3)
	  stw       r10, 0x18(r3)
	  stb       r10, 0x17(r3)
	  stb       r8, 0x4(r3)
	  stb       r10, 0x1D(r3)
	  stw       r7, 0x24(r3)
	  stw       r7, 0x20(r3)
	  stb       r10, 0x1E(r3)
	  stb       r10, 0x1F(r3)
	  stw       r0, 0x0(r3)
	  bgt-      .loc_0xD0
	  lis       r6, 0x804B
	  rlwinm    r0,r4,2,0,29
	  addi      r4, r6, 0x1A6C
	  lwzx      r0, r4, r0
	  mtctr     r0
	  bctr
	  subi      r0, r2, 0x5A18
	  stw       r0, 0x8(r3)
	  stw       r10, 0x10(r3)
	  b         .loc_0xE0
	  subi      r0, r2, 0x5A10
	  stw       r0, 0x8(r3)
	  stw       r8, 0x10(r3)
	  b         .loc_0xE0
	  lis       r4, 0x8048
	  li        r0, 0x2
	  subi      r4, r4, 0x1C8C
	  stw       r4, 0x8(r3)
	  stw       r0, 0x10(r3)
	  b         .loc_0xE0
	  lis       r4, 0x8048
	  li        r0, 0x3
	  subi      r4, r4, 0x1C80
	  stw       r4, 0x8(r3)
	  stw       r0, 0x10(r3)
	  b         .loc_0xE0

	.loc_0xD0:
	  subi      r4, r2, 0x5A18
	  li        r0, 0
	  stw       r4, 0x8(r3)
	  stw       r0, 0x10(r3)

	.loc_0xE0:
	  stw       r5, 0xC(r3)
	  li        r0, 0
	  stb       r0, 0x16(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void Game::PelletDropInitArg::__ct((Game::BasePelletMgr*, int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80166C64
 * Size:	000040
 */
void Game::Pellet::isPickable(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x3CC(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x2C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x30

	.loc_0x2C:
	  li        r3, 0

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80166CA4
 * Size:	000008
 */
void Game::PelletState::isPickable(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80166CAC
 * Size:	000288
 */
void Game::Pellet::onKill((Game::CreatureKillArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  stw       r30, 0x38(r1)
	  mr        r30, r4
	  lwz       r5, -0x6C18(r13)
	  lwz       r0, 0x44(r5)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x4C
	  lwz       r3, 0x3C8(r31)
	  mr        r4, r31
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4C:
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6980(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x78
	  mr        r4, r31
	  bl        0xDAFD0

	.loc_0x78:
	  lwz       r6, -0x6C18(r13)
	  lwz       r0, 0x44(r6)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xBC
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r5, r4, 0x590
	  stw       r31, 0xC(r1)
	  addi      r0, r3, 0x6144
	  addi      r4, r1, 0x8
	  stw       r5, 0x8(r1)
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x58(r6)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl

	.loc_0xBC:
	  lfs       f0, -0x5A4C(r2)
	  addi      r3, r31, 0x138
	  lfs       f1, -0x5A50(r2)
	  addi      r4, r1, 0x28
	  stfs      f0, 0x1C(r1)
	  addi      r5, r1, 0x1C
	  addi      r6, r1, 0x10
	  stfs      f1, 0x28(r1)
	  stfs      f1, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  stfs      f0, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  stfs      f0, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  stfs      f0, 0x18(r1)
	  bl        0x2C1534
	  lwz       r0, 0x174(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x184
	  lfs       f2, -0x5A4C(r2)
	  addi      r3, r31, 0x138
	  lfs       f1, -0x5A08(r2)
	  stfs      f2, 0x444(r31)
	  lfs       f0, -0x5A50(r2)
	  stfs      f2, 0x448(r31)
	  stfs      f2, 0x44C(r31)
	  stfs      f1, 0x450(r31)
	  stfs      f0, 0x168(r31)
	  stfs      f0, 0x16C(r31)
	  stfs      f0, 0x170(r31)
	  lwz       r4, 0x174(r31)
	  lwz       r4, 0x8(r4)
	  addi      r4, r4, 0x24
	  bl        -0x7CB20
	  lwz       r3, 0x174(r31)
	  lfs       f0, 0x168(r31)
	  lwz       r3, 0x8(r3)
	  stfs      f0, 0x18(r3)
	  lfs       f0, 0x16C(r31)
	  stfs      f0, 0x1C(r3)
	  lfs       f0, 0x170(r31)
	  stfs      f0, 0x20(r3)
	  lwz       r3, 0x174(r31)
	  bl        0x2C1E3C
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x184:
	  mr        r3, r31
	  bl        0x413D0
	  lwz       r3, 0x114(r31)
	  bl        -0x32C88
	  lwz       r3, 0x454(r31)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r30, 0
	  beq-      .loc_0x1C0
	  lbz       r0, 0x8(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x1DC

	.loc_0x1C0:
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x1F4
	  lbz       r0, 0x32C(r31)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x1F4

	.loc_0x1DC:
	  lwz       r3, 0x454(r31)
	  mr        r4, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1F4:
	  mr        r3, r31
	  bl        0xF40
	  lwz       r3, 0x358(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x228
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x358(r31)
	  li        r0, 0
	  stw       r0, 0x4(r3)
	  stw       r0, 0x358(r31)

	.loc_0x228:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x3
	  beq-      .loc_0x268
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x4
	  bne-      .loc_0x270

	.loc_0x268:
	  mr        r3, r31
	  bl        0xB76DC

	.loc_0x270:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80166F34
 * Size:	000034
 */
void start__Q24Game28StateMachine<Game::Pellet>
FPQ24Game6PelletiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0x3CC(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80166F68
 * Size:	000620
 */
void Game::Pellet::onInit((Game::CreatureInitArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  li        r5, -0x1
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r5, 0x3DC(r3)
	  stw       r5, 0x3D8(r3)
	  stb       r0, 0x3BC(r3)
	  stb       r0, 0x324(r3)
	  stb       r0, 0x325(r3)
	  bl        0x4524
	  li        r0, 0
	  lfs       f0, -0x5A4C(r2)
	  stw       r0, 0x3C0(r30)
	  mr        r3, r30
	  stfs      f0, 0x3E0(r30)
	  stw       r0, 0xC8(r30)
	  stb       r0, 0x311(r30)
	  stfs      f0, 0x3B8(r30)
	  stfs      f0, 0x438(r30)
	  stb       r0, 0x3C4(r30)
	  stb       r0, 0x3D0(r30)
	  stw       r0, 0x398(r30)
	  bl        0x38AC8
	  lfs       f0, -0x5A4C(r2)
	  cmplwi    r31, 0
	  stfs      f0, 0x418(r30)
	  bne-      .loc_0x9C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1CBC
	  li        r4, 0x660
	  subi      r5, r5, 0x1CAC
	  crclr     6, 0x6
	  bl        -0x13C9C0

	.loc_0x9C:
	  lhz       r0, 0x14(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xDC
	  lwz       r3, 0x3C8(r30)
	  mr        r4, r30
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x5A50(r2)
	  stfs      f0, 0x168(r30)
	  stfs      f0, 0x16C(r30)
	  stfs      f0, 0x170(r30)
	  b         .loc_0x174

	.loc_0xDC:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x108
	  lwz       r3, 0x3C8(r30)
	  mr        r4, r30
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x174

	.loc_0x108:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x144
	  lwz       r3, 0x3C8(r30)
	  mr        r4, r30
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x5A04(r2)
	  stfs      f0, 0x168(r30)
	  stfs      f0, 0x16C(r30)
	  stfs      f0, 0x170(r30)
	  b         .loc_0x174

	.loc_0x144:
	  lwz       r3, 0x3C8(r30)
	  mr        r4, r30
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x5A04(r2)
	  stfs      f0, 0x168(r30)
	  stfs      f0, 0x16C(r30)
	  stfs      f0, 0x170(r30)

	.loc_0x174:
	  li        r0, 0
	  stw       r0, 0x3F8(r30)
	  stw       r0, 0x3FC(r30)
	  stw       r0, 0x400(r30)
	  stw       r0, 0x404(r30)
	  stw       r0, 0x408(r30)
	  stw       r0, 0x40C(r30)
	  stw       r0, 0x410(r30)
	  stw       r0, 0x414(r30)
	  lwz       r0, 0x10(r31)
	  sth       r0, 0x43C(r30)
	  lwz       r3, 0x454(r30)
	  lwz       r4, 0x8(r31)
	  lwz       r3, 0x8(r3)
	  bl        0x4D310
	  stw       r3, 0x35C(r30)
	  lwz       r3, 0x35C(r30)
	  lhz       r0, 0x244(r3)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x1D8
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1DC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1D8:
	  lbz       r0, 0x1D(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x20C
	  li        r3, -0x1
	  bl        0x69D10
	  stw       r3, 0x3D8(r30)
	  lwz       r3, 0x35C(r30)
	  lwz       r0, 0x3D8(r30)
	  lwz       r3, 0x120(r3)
	  cmpw      r0, r3
	  ble-      .loc_0x214
	  stw       r3, 0x3D8(r30)
	  b         .loc_0x214

	.loc_0x20C:
	  li        r0, -0x1
	  stw       r0, 0x3D8(r30)

	.loc_0x214:
	  lwz       r3, 0x20(r31)
	  cmpwi     r3, -0x1
	  beq-      .loc_0x238
	  lwz       r0, 0x24(r31)
	  cmpwi     r0, -0x1
	  beq-      .loc_0x238
	  stw       r3, 0x3D8(r30)
	  lwz       r0, 0x24(r31)
	  stw       r0, 0x3DC(r30)

	.loc_0x238:
	  lbz       r0, 0x2F1(r30)
	  subi      r4, r2, 0x5A00
	  rlwinm    r0,r0,0,24,30
	  stb       r0, 0x2F1(r30)
	  lbz       r0, 0x2F1(r30)
	  rlwinm    r0,r0,0,25,31
	  stb       r0, 0x2F1(r30)
	  lwz       r0, 0xC(r31)
	  sth       r0, 0x43E(r30)
	  lwz       r3, 0x35C(r30)
	  lwz       r3, 0x40(r3)
	  bl        -0x9CB0C
	  cmpwi     r3, 0
	  bne-      .loc_0x27C
	  li        r0, 0
	  stb       r0, 0x32C(r30)
	  b         .loc_0x2A8

	.loc_0x27C:
	  lwz       r3, 0x35C(r30)
	  subi      r4, r2, 0x59F8
	  lwz       r3, 0x40(r3)
	  bl        -0x9CB30
	  cmpwi     r3, 0
	  bne-      .loc_0x2A0
	  li        r0, 0x1
	  stb       r0, 0x32C(r30)
	  b         .loc_0x2A8

	.loc_0x2A0:
	  li        r0, 0x2
	  stb       r0, 0x32C(r30)

	.loc_0x2A8:
	  lwz       r3, 0x35C(r30)
	  lwz       r4, -0x7B7C(r13)
	  lwz       r3, 0x40(r3)
	  bl        -0x9CB5C
	  cmpwi     r3, 0
	  bne-      .loc_0x2CC
	  li        r0, 0x6
	  stb       r0, 0x32C(r30)
	  b         .loc_0x334

	.loc_0x2CC:
	  lwz       r3, 0x35C(r30)
	  lwz       r4, -0x7B80(r13)
	  lwz       r3, 0x40(r3)
	  bl        -0x9CB80
	  cmpwi     r3, 0
	  bne-      .loc_0x2F0
	  li        r0, 0x4
	  stb       r0, 0x32C(r30)
	  b         .loc_0x334

	.loc_0x2F0:
	  lwz       r3, 0x35C(r30)
	  lwz       r4, -0x7B84(r13)
	  lwz       r3, 0x40(r3)
	  bl        -0x9CBA4
	  cmpwi     r3, 0
	  bne-      .loc_0x314
	  li        r0, 0x5
	  stb       r0, 0x32C(r30)
	  b         .loc_0x334

	.loc_0x314:
	  lwz       r3, 0x35C(r30)
	  lwz       r4, -0x7B88(r13)
	  lwz       r3, 0x40(r3)
	  bl        -0x9CBC8
	  cmpwi     r3, 0
	  bne-      .loc_0x334
	  li        r0, 0x3
	  stb       r0, 0x32C(r30)

	.loc_0x334:
	  lbz       r0, 0x1C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x374
	  lwz       r3, 0x454(r30)
	  lhz       r4, 0x43C(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r5, 0x440(r30)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x174(r30)
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1D0(r12)
	  mtctr     r12
	  bctrl

	.loc_0x374:
	  lwz       r0, 0x174(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x3B0
	  lwz       r3, 0x454(r30)
	  lhz       r0, 0x43C(r30)
	  lwz       r3, 0x10(r3)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r3, r0
	  stw       r0, 0x42C(r30)
	  lwz       r3, 0x174(r30)
	  bl        0x2D72D0
	  lfs       f0, -0x59F0(r2)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x31C(r30)
	  b         .loc_0x3BC

	.loc_0x3B0:
	  lwz       r3, 0x35C(r30)
	  lfs       f0, 0xA0(r3)
	  stfs      f0, 0x31C(r30)

	.loc_0x3BC:
	  lwz       r0, 0x42C(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x420
	  cmplwi    r30, 0
	  mr        r5, r30
	  beq-      .loc_0x3D8
	  addi      r5, r30, 0x314

	.loc_0x3D8:
	  addi      r3, r30, 0x41C
	  li        r4, 0
	  bl        0x2C1940
	  mr        r3, r30
	  bl        0x2FB0
	  mr        r3, r30
	  bl        0x2E58
	  mr        r3, r30
	  bl        0x2F5C
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  bne-      .loc_0x420
	  lbz       r0, 0x32C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x420
	  lfs       f0, -0x5A38(r2)
	  stfs      f0, 0x438(r30)

	.loc_0x420:
	  lwz       r3, 0x454(r30)
	  mr        r4, r30
	  lhz       r5, 0x43C(r30)
	  bl        0x5450
	  lwz       r3, 0x35C(r30)
	  subi      r4, r2, 0x59EC
	  lwz       r3, 0x160(r3)
	  bl        -0x9CCE4
	  cmpwi     r3, 0
	  bne-      .loc_0x464
	  li        r3, 0x2
	  li        r0, 0
	  stb       r3, 0x364(r30)
	  stb       r0, 0x39C(r30)
	  lwz       r3, 0x35C(r30)
	  stw       r0, 0xF0(r3)
	  b         .loc_0x49C

	.loc_0x464:
	  lwz       r3, 0x35C(r30)
	  subi      r4, r2, 0x59E4
	  lwz       r3, 0x160(r3)
	  bl        -0x9CD18
	  cmpwi     r3, 0
	  bne-      .loc_0x48C
	  li        r0, 0x1
	  stb       r0, 0x364(r30)
	  stb       r0, 0x39C(r30)
	  b         .loc_0x49C

	.loc_0x48C:
	  li        r3, 0
	  li        r0, 0x1
	  stb       r3, 0x364(r30)
	  stb       r0, 0x39C(r30)

	.loc_0x49C:
	  li        r0, 0
	  mr        r3, r30
	  stb       r0, 0x3E4(r30)
	  stb       r0, 0x3E5(r30)
	  stb       r0, 0x3E6(r30)
	  stb       r0, 0x3E7(r30)
	  stb       r0, 0x3E8(r30)
	  stb       r0, 0x3E9(r30)
	  stb       r0, 0x3EA(r30)
	  stb       r0, 0x3EB(r30)
	  stb       r0, 0x3EC(r30)
	  stb       r0, 0x3ED(r30)
	  stb       r0, 0x3EE(r30)
	  stb       r0, 0x3EF(r30)
	  stb       r0, 0x3F0(r30)
	  stb       r0, 0x3F1(r30)
	  stb       r0, 0x3F2(r30)
	  stb       r0, 0x3F3(r30)
	  stb       r0, 0x3F6(r30)
	  bl        0x160
	  sth       r3, 0x3F4(r30)
	  lha       r0, 0x3F4(r30)
	  cmpwi     r0, 0x80
	  ble-      .loc_0x504
	  li        r0, 0x80
	  sth       r0, 0x3F4(r30)

	.loc_0x504:
	  lwz       r3, 0x35C(r30)
	  lwz       r0, 0x120(r3)
	  cmpwi     r0, 0x80
	  bne-      .loc_0x520
	  li        r0, 0x3E8
	  stw       r0, 0x3D8(r30)
	  stw       r0, 0x3DC(r30)

	.loc_0x520:
	  li        r0, 0
	  mr        r3, r30
	  stw       r0, 0x178(r30)
	  bl        0x13C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1CC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x3
	  bne-      .loc_0x57C
	  mr        r3, r30
	  li        r4, 0x10
	  li        r5, 0
	  bl        0xB70A8
	  b         .loc_0x5AC

	.loc_0x57C:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x4
	  bne-      .loc_0x5AC
	  mr        r3, r30
	  li        r4, 0x12
	  li        r5, 0
	  bl        0xB7074

	.loc_0x5AC:
	  mr        r3, r30
	  li        r4, 0x1
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xAC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r6, -0x6C18(r13)
	  lwz       r0, 0x44(r6)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x608
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r5, r4, 0x590
	  stw       r30, 0xC(r1)
	  addi      r0, r3, 0x6158
	  addi      r4, r1, 0x8
	  stw       r5, 0x8(r1)
	  stw       r0, 0x8(r1)
	  lwz       r3, 0x58(r6)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl

	.loc_0x608:
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
 * Address:	80167588
 * Size:	000004
 */
void Game::Pellet::do_onInit((Game::CreatureInitArg*)) { }

/*
 * --INFO--
 * Address:	8016758C
 * Size:	000004
 */
void Game::Pellet::onCreateShape(void) { }

/*
 * --INFO--
 * Address:	80167590
 * Size:	000020
 */
void Game::Pellet::getPelletConfigMin(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x3D8(r3)
	  cmpwi     r0, 0
	  ble-      .loc_0x14
	  mr        r3, r0
	  blr

	.loc_0x14:
	  lwz       r3, 0x35C(r3)
	  lwz       r3, 0x120(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801675B0
 * Size:	000020
 */
void Game::Pellet::getPelletConfigMax(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x3DC(r3)
	  cmpwi     r0, 0
	  ble-      .loc_0x14
	  mr        r3, r0
	  blr

	.loc_0x14:
	  lwz       r3, 0x35C(r3)
	  lwz       r3, 0x130(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801675D0
 * Size:	000354
 */
void Game::Pellet::setupParticles(void)
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
	  stfd      f28, 0xA0(r1)
	  psq_st    f28,0xA8(r1),0,0
	  stfd      f27, 0x90(r1)
	  psq_st    f27,0x98(r1),0,0
	  stfd      f26, 0x80(r1)
	  psq_st    f26,0x88(r1),0,0
	  stfd      f25, 0x70(r1)
	  psq_st    f25,0x78(r1),0,0
	  stfd      f24, 0x60(r1)
	  psq_st    f24,0x68(r1),0,0
	  stfd      f23, 0x50(r1)
	  psq_st    f23,0x58(r1),0,0
	  stmw      r26, 0x38(r1)
	  mr        r27, r3
	  lfs       f0, -0x5A4C(r2)
	  lwz       r3, 0x35C(r3)
	  lfs       f25, 0xA0(r3)
	  stfs      f0, 0x2F4(r27)
	  stfs      f0, 0x2F8(r27)
	  stfs      f0, 0x2FC(r27)
	  lwz       r3, 0x35C(r27)
	  lwz       r0, 0xF0(r3)
	  stw       r0, 0x360(r27)
	  lwz       r0, 0x360(r27)
	  cmpwi     r0, 0
	  beq-      .loc_0x2F8
	  lwz       r4, 0x35C(r27)
	  subi      r3, r2, 0x59E0
	  lwz       r4, 0xE0(r4)
	  bl        -0x9CFA8
	  cmpwi     r3, 0
	  bne-      .loc_0xDC
	  lwz       r3, 0x35C(r27)
	  lfs       f1, -0x5A48(r2)
	  lfs       f0, 0xC0(r3)
	  lfs       f2, -0x59F0(r2)
	  fmuls     f0, f1, f0
	  fmuls     f0, f2, f0
	  fcmpo     cr0, f0, f25
	  ble-      .loc_0xD0
	  mr        r3, r27
	  bl        0x4AC
	  b         .loc_0x2AC

	.loc_0xD0:
	  mr        r3, r27
	  bl        .loc_0x354
	  b         .loc_0x2AC

	.loc_0xDC:
	  li        r3, 0
	  li        r0, 0x1
	  stb       r3, 0x364(r27)
	  mr        r3, r27
	  stb       r0, 0x39C(r27)
	  lwz       r29, 0x360(r27)
	  addi      r0, r29, 0x1
	  stw       r0, 0x360(r27)
	  lwz       r4, 0x360(r27)
	  bl        0x40A84
	  lis       r3, 0x8050
	  lfs       f27, -0x59D8(r2)
	  lfd       f28, -0x5A30(r2)
	  xoris     r30, r29, 0x8000
	  lfs       f29, -0x5A48(r2)
	  addi      r26, r3, 0x71A0
	  lfs       f30, -0x5A4C(r2)
	  li        r28, 0
	  lfs       f31, -0x59D4(r2)
	  lis       r31, 0x4330
	  b         .loc_0x244

	.loc_0x130:
	  stw       r30, 0xC(r1)
	  xoris     r0, r28, 0x8000
	  lwz       r3, 0x35C(r27)
	  stw       r31, 0x8(r1)
	  lfs       f0, 0xC0(r3)
	  lfd       f1, 0x8(r1)
	  fmuls     f24, f29, f0
	  stw       r0, 0x14(r1)
	  fsubs     f0, f1, f28
	  stw       r31, 0x10(r1)
	  fsubs     f2, f25, f24
	  fdivs     f1, f27, f0
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f28
	  fmuls     f1, f1, f0
	  fmr       f0, f1
	  fcmpo     cr0, f1, f30
	  bge-      .loc_0x17C
	  fneg      f0, f1

	.loc_0x17C:
	  fmuls     f0, f0, f31
	  fcmpo     cr0, f1, f30
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r26, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f26, f2, f0
	  bge-      .loc_0x1D0
	  lfs       f0, -0x59D0(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x1F0

	.loc_0x1D0:
	  fmuls     f0, f1, f31
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x1F0:
	  fmuls     f23, f2, f0
	  lfs       f0, 0x2F4(r27)
	  lfs       f1, 0x2F8(r27)
	  mr        r4, r28
	  lfs       f2, 0x2FC(r27)
	  fadds     f0, f0, f23
	  fadds     f1, f1, f30
	  fadds     f2, f2, f26
	  stfs      f0, 0x2F4(r27)
	  stfs      f1, 0x2F8(r27)
	  stfs      f2, 0x2FC(r27)
	  lwz       r3, 0x178(r27)
	  bl        0x40878
	  stfs      f23, 0x0(r3)
	  mr        r4, r28
	  stfs      f30, 0x4(r3)
	  stfs      f26, 0x8(r3)
	  lwz       r3, 0x178(r27)
	  bl        0x40860
	  stfs      f24, 0x18(r3)
	  addi      r28, r28, 0x1

	.loc_0x244:
	  cmpw      r28, r29
	  blt+      .loc_0x130
	  lfs       f25, -0x5A4C(r2)
	  mr        r4, r29
	  lfs       f0, 0x2F4(r27)
	  lwz       r3, 0x35C(r27)
	  lfs       f1, 0x2F8(r27)
	  fadds     f0, f0, f25
	  lfs       f2, 0x2FC(r27)
	  lfs       f23, 0xC0(r3)
	  fadds     f1, f1, f25
	  fadds     f2, f2, f25
	  lfs       f24, -0x5A48(r2)
	  stfs      f0, 0x2F4(r27)
	  stfs      f1, 0x2F8(r27)
	  stfs      f2, 0x2FC(r27)
	  lwz       r3, 0x178(r27)
	  bl        0x40810
	  stfs      f25, 0x0(r3)
	  fmuls     f24, f24, f23
	  mr        r4, r29
	  stfs      f25, 0x4(r3)
	  stfs      f25, 0x8(r3)
	  lwz       r3, 0x178(r27)
	  bl        0x407F4
	  stfs      f24, 0x18(r3)

	.loc_0x2AC:
	  lwz       r3, 0x360(r27)
	  lis       r0, 0x4330
	  stw       r0, 0x28(r1)
	  xoris     r0, r3, 0x8000
	  lfd       f2, -0x5A30(r2)
	  stw       r0, 0x2C(r1)
	  lfs       f4, -0x5A50(r2)
	  lfd       f1, 0x28(r1)
	  lfs       f0, 0x2F4(r27)
	  fsubs     f3, f1, f2
	  lfs       f1, 0x2F8(r27)
	  lfs       f2, 0x2FC(r27)
	  fdivs     f3, f4, f3
	  fmuls     f0, f0, f3
	  fmuls     f1, f1, f3
	  fmuls     f2, f2, f3
	  stfs      f0, 0x2F4(r27)
	  stfs      f1, 0x2F8(r27)
	  stfs      f2, 0x2FC(r27)

	.loc_0x2F8:
	  psq_l     f31,0xD8(r1),0,0
	  lfd       f31, 0xD0(r1)
	  psq_l     f30,0xC8(r1),0,0
	  lfd       f30, 0xC0(r1)
	  psq_l     f29,0xB8(r1),0,0
	  lfd       f29, 0xB0(r1)
	  psq_l     f28,0xA8(r1),0,0
	  lfd       f28, 0xA0(r1)
	  psq_l     f27,0x98(r1),0,0
	  lfd       f27, 0x90(r1)
	  psq_l     f26,0x88(r1),0,0
	  lfd       f26, 0x80(r1)
	  psq_l     f25,0x78(r1),0,0
	  lfd       f25, 0x70(r1)
	  psq_l     f24,0x68(r1),0,0
	  lfd       f24, 0x60(r1)
	  psq_l     f23,0x58(r1),0,0
	  lfd       f23, 0x50(r1)
	  lmw       r26, 0x38(r1)
	  lwz       r0, 0xE4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr

	.loc_0x354:
	*/
}

/*
 * --INFO--
 * Address:	80167924
 * Size:	000220
 */
void Game::Pellet::setupParticles_simple(void)
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
	  stfd      f25, 0x50(r1)
	  psq_st    f25,0x58(r1),0,0
	  stfd      f24, 0x40(r1)
	  psq_st    f24,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  stw       r29, 0x34(r1)
	  stw       r28, 0x30(r1)
	  mr        r29, r3
	  lwz       r5, 0x35C(r3)
	  lwz       r4, 0x360(r3)
	  lfs       f24, 0xA0(r5)
	  bl        0x407C4
	  lwz       r0, 0x360(r29)
	  lis       r31, 0x4330
	  lwz       r4, 0x35C(r29)
	  lis       r3, 0x8050
	  xoris     r0, r0, 0x8000
	  stw       r31, 0x8(r1)
	  lfd       f29, -0x5A30(r2)
	  addi      r28, r3, 0x71A0
	  stw       r0, 0xC(r1)
	  li        r30, 0
	  lfs       f3, -0x59D8(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x5A48(r2)
	  fsubs     f2, f0, f29
	  lfs       f0, 0xC0(r4)
	  lfs       f30, -0x5A4C(r2)
	  fmuls     f25, f1, f0
	  lfs       f31, -0x59D4(r2)
	  fdivs     f26, f3, f2
	  fsubs     f27, f24, f25
	  b         .loc_0x1B4

	.loc_0xC4:
	  xoris     r0, r30, 0x8000
	  stw       r31, 0x8(r1)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f29
	  fmuls     f1, f26, f0
	  fmr       f0, f1
	  fcmpo     cr0, f1, f30
	  bge-      .loc_0xEC
	  fneg      f0, f1

	.loc_0xEC:
	  fmuls     f0, f0, f31
	  fcmpo     cr0, f1, f30
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r28, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f28, f27, f0
	  bge-      .loc_0x140
	  lfs       f0, -0x59D0(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x160

	.loc_0x140:
	  fmuls     f0, f1, f31
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x160:
	  fmuls     f24, f27, f0
	  lfs       f0, 0x2F4(r29)
	  lfs       f1, 0x2F8(r29)
	  mr        r4, r30
	  lfs       f2, 0x2FC(r29)
	  fadds     f0, f0, f24
	  fadds     f1, f1, f30
	  fadds     f2, f2, f28
	  stfs      f0, 0x2F4(r29)
	  stfs      f1, 0x2F8(r29)
	  stfs      f2, 0x2FC(r29)
	  lwz       r3, 0x178(r29)
	  bl        0x405B4
	  stfs      f24, 0x0(r3)
	  mr        r4, r30
	  stfs      f30, 0x4(r3)
	  stfs      f28, 0x8(r3)
	  lwz       r3, 0x178(r29)
	  bl        0x4059C
	  stfs      f25, 0x18(r3)
	  addi      r30, r30, 0x1

	.loc_0x1B4:
	  lwz       r0, 0x360(r29)
	  cmpw      r30, r0
	  blt+      .loc_0xC4
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
	  psq_l     f25,0x58(r1),0,0
	  lfd       f25, 0x50(r1)
	  psq_l     f24,0x48(r1),0,0
	  lfd       f24, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r0, 0xC4(r1)
	  lwz       r28, 0x30(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80167B44
 * Size:	000230
 */
void Game::Pellet::setupParticles_tall(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xD0(r1)
	  mflr      r0
	  stw       r0, 0xD4(r1)
	  stfd      f31, 0xC0(r1)
	  psq_st    f31,0xC8(r1),0,0
	  stfd      f30, 0xB0(r1)
	  psq_st    f30,0xB8(r1),0,0
	  stfd      f29, 0xA0(r1)
	  psq_st    f29,0xA8(r1),0,0
	  stfd      f28, 0x90(r1)
	  psq_st    f28,0x98(r1),0,0
	  stfd      f27, 0x80(r1)
	  psq_st    f27,0x88(r1),0,0
	  stfd      f26, 0x70(r1)
	  psq_st    f26,0x78(r1),0,0
	  stfd      f25, 0x60(r1)
	  psq_st    f25,0x68(r1),0,0
	  stfd      f24, 0x50(r1)
	  psq_st    f24,0x58(r1),0,0
	  stfd      f23, 0x40(r1)
	  psq_st    f23,0x48(r1),0,0
	  stmw      r27, 0x2C(r1)
	  mr        r30, r3
	  lfs       f1, -0x5A48(r2)
	  lwz       r3, 0x35C(r3)
	  lfs       f0, -0x59CC(r2)
	  lfs       f2, 0xC0(r3)
	  lfs       f23, 0xA0(r3)
	  fmuls     f24, f1, f2
	  fmr       f25, f24
	  fcmpo     cr0, f24, f0
	  ble-      .loc_0x84
	  fmr       f25, f0

	.loc_0x84:
	  lwz       r31, 0x360(r30)
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x40580
	  xoris     r0, r31, 0x8000
	  lis       r28, 0x4330
	  stw       r0, 0xC(r1)
	  fsubs     f0, f24, f25
	  lis       r3, 0x8050
	  lfd       f29, -0x5A30(r2)
	  stw       r28, 0x8(r1)
	  fsubs     f27, f23, f25
	  lfs       f2, -0x59D8(r2)
	  lfd       f1, 0x8(r1)
	  fneg      f26, f0
	  lfs       f30, -0x5A4C(r2)
	  addi      r29, r3, 0x71A0
	  fsubs     f0, f1, f29
	  lfs       f31, -0x59D4(r2)
	  li        r27, 0
	  fdivs     f24, f2, f0
	  b         .loc_0x1CC

	.loc_0xDC:
	  xoris     r0, r27, 0x8000
	  stw       r28, 0x8(r1)
	  stw       r0, 0xC(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f29
	  fmuls     f1, f24, f0
	  fmr       f0, f1
	  fcmpo     cr0, f1, f30
	  bge-      .loc_0x104
	  fneg      f0, f1

	.loc_0x104:
	  fmuls     f0, f0, f31
	  fcmpo     cr0, f1, f30
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r29, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f28, f27, f0
	  bge-      .loc_0x158
	  lfs       f0, -0x59D0(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0
	  fneg      f0, f0
	  b         .loc_0x178

	.loc_0x158:
	  fmuls     f0, f1, f31
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fctiwz    f0, f0
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r3, r0

	.loc_0x178:
	  fmuls     f23, f27, f0
	  lfs       f0, 0x2F4(r30)
	  lfs       f1, 0x2F8(r30)
	  mr        r4, r27
	  lfs       f2, 0x2FC(r30)
	  fadds     f0, f0, f23
	  fadds     f1, f1, f26
	  fadds     f2, f2, f28
	  stfs      f0, 0x2F4(r30)
	  stfs      f1, 0x2F8(r30)
	  stfs      f2, 0x2FC(r30)
	  lwz       r3, 0x178(r30)
	  bl        0x4037C
	  stfs      f23, 0x0(r3)
	  mr        r4, r27
	  stfs      f26, 0x4(r3)
	  stfs      f28, 0x8(r3)
	  lwz       r3, 0x178(r30)
	  bl        0x40364
	  stfs      f25, 0x18(r3)
	  addi      r27, r27, 0x1

	.loc_0x1CC:
	  cmpw      r27, r31
	  blt+      .loc_0xDC
	  psq_l     f31,0xC8(r1),0,0
	  lfd       f31, 0xC0(r1)
	  psq_l     f30,0xB8(r1),0,0
	  lfd       f30, 0xB0(r1)
	  psq_l     f29,0xA8(r1),0,0
	  lfd       f29, 0xA0(r1)
	  psq_l     f28,0x98(r1),0,0
	  lfd       f28, 0x90(r1)
	  psq_l     f27,0x88(r1),0,0
	  lfd       f27, 0x80(r1)
	  psq_l     f26,0x78(r1),0,0
	  lfd       f26, 0x70(r1)
	  psq_l     f25,0x68(r1),0,0
	  lfd       f25, 0x60(r1)
	  psq_l     f24,0x58(r1),0,0
	  lfd       f24, 0x50(r1)
	  psq_l     f23,0x48(r1),0,0
	  lfd       f23, 0x40(r1)
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0xD4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Game::Pellet::setupParticles_complex(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80167D74
 * Size:	000018
 */
void Game::Pellet::panmodokiCarryable(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x35C(r3)
	  lhz       r0, 0x244(r3)
	  rlwinm    r0,r0,0,31,31
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80167D8C
 * Size:	00004C
 */
void Game::Pellet::isCarried(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x3F6(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x38

	.loc_0x30:
	  li        r3, 0x1
	  b         .loc_0x3C

	.loc_0x38:
	  li        r3, 0

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80167DD8
 * Size:	00000C
 */
void Game::Pellet::isPicked(void)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x3D0(r3)
	  rlwinm    r3,r0,0,31,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void Game::Pellet::startDisplayCarryInfo(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80167DE4
 * Size:	000044
 */
void Game::Pellet::finishDisplayCarryInfo(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x398(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  addi      r3, r3, 0x48
	  bl        -0x4CE38
	  li        r0, 0
	  stw       r0, 0x398(r31)

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80167E28
 * Size:	0000A0
 */
void Game::Pellet::getCarryInfoParam((CarryInfoParam&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x5A38(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  lfs       f0, 0x1B0(r3)
	  stfs      f0, 0x4(r4)
	  lfs       f0, 0x1B4(r3)
	  stfs      f0, 0x8(r4)
	  lfs       f0, 0x1B8(r3)
	  stfs      f0, 0xC(r4)
	  lwz       r4, 0x35C(r3)
	  lfs       f0, 0xC0(r4)
	  fadds     f0, f1, f0
	  stfs      f0, 0x10(r31)
	  stb       r0, 0x14(r31)
	  stw       r0, 0x1C(r31)
	  bl        0x2AEC
	  sth       r3, 0x18(r31)
	  lwz       r0, 0x3D8(r30)
	  cmpwi     r0, 0
	  ble-      .loc_0x74
	  b         .loc_0x7C

	.loc_0x74:
	  lwz       r3, 0x35C(r30)
	  lwz       r0, 0x120(r3)

	.loc_0x7C:
	  sth       r0, 0x16(r31)
	  lwz       r0, 0x3D4(r30)
	  stb       r0, 0x15(r31)
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
 * Address:	80167EC8
 * Size:	000068
 */
void Game::Pellet::setCarryColor((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r5, -0x6C18(r13)
	  lwz       r0, 0x44(r5)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x4C
	  lwz       r0, 0x3D4(r30)
	  cmpw      r31, r0
	  beq-      .loc_0x4C
	  stw       r31, 0x3D4(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4C:
	  stw       r31, 0x3D4(r30)
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
 * Address:	80167F30
 * Size:	000004
 */
void Game::Pellet::sound_otakaraEventStart(void) { }

/*
 * --INFO--
 * Address:	80167F34
 * Size:	00000C
 */
void Game::Pellet::clearCarryColor(void)
{
	/*
	.loc_0x0:
	  li        r0, 0x5
	  stw       r0, 0x3D4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80167F40
 * Size:	00001C
 */
void Game::Pellet::getVelocity(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x1BC(r4)
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0x1C0(r4)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x1C4(r4)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80167F5C
 * Size:	00001C
 */
void setVelocity__Q24Game6PelletFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x1BC(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x1C0(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x1C4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80167F78
 * Size:	000104
 */
void Game::Pellet::allocateTexCaster(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x3
	  beq-      .loc_0x50
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x4
	  bne-      .loc_0xF0

	.loc_0x50:
	  lwz       r0, 0x328(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xF0
	  lwz       r3, 0x35C(r31)
	  lfs       f1, 0x3AC(r31)
	  lfs       f2, 0xB0(r3)
	  lfs       f0, -0x59F0(r2)
	  stfs      f1, 0x8(r1)
	  fmuls     f0, f0, f2
	  lfs       f1, 0x3B0(r31)
	  stfs      f1, 0xC(r1)
	  lfs       f1, 0x3B4(r31)
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  bl        -0x9EA60
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x1C(r1)
	  addi      r4, r1, 0x8
	  lfd       f3, -0x5A30(r2)
	  stw       r0, 0x18(r1)
	  lfs       f1, -0x5A20(r2)
	  lfd       f2, 0x18(r1)
	  lfs       f0, -0x59D8(r2)
	  fsubs     f2, f2, f3
	  lwz       r3, -0x69B0(r13)
	  fdivs     f1, f2, f1
	  fmuls     f1, f0, f1
	  bl        0xD4C0C
	  stw       r3, 0x328(r31)
	  lwz       r3, 0x328(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xF0
	  lwz       r0, 0xB8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xE8
	  bl        0xD4964
	  b         .loc_0xF0

	.loc_0xE8:
	  lfs       f1, -0x5A48(r2)
	  bl        0xD496C

	.loc_0xF0:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016807C
 * Size:	0002F0
 */
void Game::Pellet::onSetPosition(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  lwz       r4, -0x6C18(r13)
	  lwz       r4, 0x44(r4)
	  cmpwi     r4, 0x4
	  beq-      .loc_0x14C
	  lwz       r5, 0xB8(r31)
	  li        r30, 0
	  cmplwi    r5, 0
	  bne-      .loc_0x68
	  lbz       r0, -0x6CDC(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x68
	  lwz       r3, 0x35C(r31)
	  lfs       f0, -0x5A4C(r2)
	  lfs       f1, 0x1B0(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x68
	  lbz       r0, 0x3C4(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x68
	  li        r30, 0x1

	.loc_0x68:
	  cmpwi     r4, 0x1
	  bne-      .loc_0xC4
	  cmplwi    r5, 0
	  bne-      .loc_0xC4
	  lbz       r0, 0x3C4(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xC4
	  lbz       r0, 0x32C(r31)
	  cmplwi    r0, 0x4
	  bne-      .loc_0x98
	  li        r30, 0
	  b         .loc_0xC4

	.loc_0x98:
	  cmplwi    r0, 0x5
	  bne-      .loc_0xA8
	  li        r30, 0
	  b         .loc_0xC4

	.loc_0xA8:
	  cmplwi    r0, 0x6
	  bne-      .loc_0xC4
	  mr        r3, r31
	  bl        0x66C
	  cmpwi     r3, 0x5
	  beq-      .loc_0xC4
	  li        r30, 0x1

	.loc_0xC4:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x14C
	  lwz       r3, -0x6B30(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xBC(r12)
	  mtctr     r12
	  bctrl
	  mr.       r30, r3
	  beq-      .loc_0x130
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r31, 0x3AC
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  stfs      f1, 0x3B0(r31)
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x2D1C0
	  mr        r3, r30
	  addi      r4, r31, 0x3AC
	  li        r5, 0
	  bl        -0x2CFF0
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x8BBBC
	  b         .loc_0x14C

	.loc_0x130:
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1CBC
	  li        r4, 0x916
	  subi      r5, r5, 0x1C74
	  crclr     6, 0x6
	  bl        -0x13DB84

	.loc_0x14C:
	  lis       r4, 0x8051
	  addi      r3, r31, 0x17C
	  addi      r5, r4, 0x41E4
	  addi      r4, r31, 0x3AC
	  bl        -0x2E100
	  lwz       r4, 0x180(r31)
	  mr        r3, r31
	  lwz       r0, 0x184(r31)
	  stw       r4, 0x138(r31)
	  stw       r0, 0x13C(r31)
	  lwz       r4, 0x188(r31)
	  lwz       r0, 0x18C(r31)
	  stw       r4, 0x140(r31)
	  stw       r0, 0x144(r31)
	  lwz       r4, 0x190(r31)
	  lwz       r0, 0x194(r31)
	  stw       r4, 0x148(r31)
	  stw       r0, 0x14C(r31)
	  lwz       r4, 0x198(r31)
	  lwz       r0, 0x19C(r31)
	  stw       r4, 0x150(r31)
	  stw       r0, 0x154(r31)
	  lwz       r4, 0x1A0(r31)
	  lwz       r0, 0x1A4(r31)
	  stw       r4, 0x158(r31)
	  stw       r0, 0x15C(r31)
	  lwz       r4, 0x1A8(r31)
	  lwz       r0, 0x1AC(r31)
	  stw       r4, 0x160(r31)
	  stw       r0, 0x164(r31)
	  lfs       f0, 0x3AC(r31)
	  stfs      f0, 0x444(r31)
	  lfs       f0, 0x3B0(r31)
	  stfs      f0, 0x448(r31)
	  lfs       f0, 0x3B4(r31)
	  stfs      f0, 0x44C(r31)
	  bl        0x40020
	  lfs       f1, -0x5A50(r2)
	  lfs       f0, -0x5A4C(r2)
	  stfs      f1, 0x17C(r31)
	  stfs      f0, 0x118(r31)
	  lbz       r0, 0x32C(r31)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x204
	  lfs       f0, -0x59C8(r2)
	  stfs      f0, 0x118(r31)

	.loc_0x204:
	  lwz       r3, 0x35C(r31)
	  lfs       f2, -0x59C4(r2)
	  lfs       f6, 0xD0(r3)
	  lfs       f0, 0xC0(r3)
	  lfs       f3, 0xA0(r3)
	  fdivs     f7, f0, f6
	  lfs       f4, -0x5A24(r2)
	  lfs       f5, -0x5A50(r2)
	  lfs       f0, 0x2C0(r31)
	  lfs       f1, -0x5A48(r2)
	  fdivs     f6, f3, f6
	  fmuls     f3, f7, f7
	  fmuls     f6, f6, f6
	  fdivs     f2, f3, f2
	  fmadds    f2, f6, f4, f2
	  fmuls     f1, f6, f1
	  fmuls     f2, f5, f2
	  fmuls     f1, f5, f1
	  fmuls     f0, f0, f2
	  stfs      f0, 0x2C0(r31)
	  lfs       f0, 0x2C4(r31)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x2C4(r31)
	  lfs       f0, 0x2C8(r31)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x2C8(r31)
	  lfs       f0, 0x2D0(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x2D0(r31)
	  lfs       f0, 0x2D4(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x2D4(r31)
	  lfs       f0, 0x2D8(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x2D8(r31)
	  lfs       f0, 0x2E0(r31)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x2E0(r31)
	  lfs       f0, 0x2E4(r31)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x2E4(r31)
	  lfs       f0, 0x2E8(r31)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x2E8(r31)
	  lfs       f0, 0x3AC(r31)
	  stfs      f0, 0x444(r31)
	  lfs       f0, 0x3B0(r31)
	  stfs      f0, 0x448(r31)
	  lfs       f0, 0x3B4(r31)
	  stfs      f0, 0x44C(r31)
	  lbz       r0, 0x2F1(r31)
	  ori       r0, r0, 0x1
	  stb       r0, 0x2F1(r31)
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
 * Address:	8016836C
 * Size:	000160
 */
void Game::Pellet::setPanModokiRotation((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lfs       f2, -0x5A4C(r2)
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  stfs      f1, 0x3B8(r3)
	  lfs       f4, 0x13C(r3)
	  stfs      f4, 0x8(r1)
	  fmuls     f0, f4, f4
	  lfs       f3, 0x14C(r3)
	  stfs      f3, 0xC(r1)
	  fmuls     f5, f3, f3
	  lfs       f3, 0x15C(r3)
	  fadds     f0, f0, f5
	  fmuls     f6, f3, f3
	  stfs      f3, 0x10(r1)
	  fadds     f0, f6, f0
	  fcmpo     cr0, f0, f2
	  ble-      .loc_0x6C
	  fmadds    f0, f4, f4, f5
	  fadds     f4, f6, f0
	  fcmpo     cr0, f4, f2
	  ble-      .loc_0x70
	  fsqrte    f0, f4
	  fmuls     f4, f0, f4
	  b         .loc_0x70

	.loc_0x6C:
	  fmr       f4, f2

	.loc_0x70:
	  lfs       f0, -0x5A4C(r2)
	  fcmpo     cr0, f4, f0
	  ble-      .loc_0xA8
	  lfs       f0, -0x5A50(r2)
	  lfs       f3, 0x8(r1)
	  fdivs     f4, f0, f4
	  lfs       f2, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  fmuls     f3, f3, f4
	  fmuls     f2, f2, f4
	  fmuls     f0, f0, f4
	  stfs      f3, 0x8(r1)
	  stfs      f2, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0xA8:
	  addi      r3, r1, 0x14
	  addi      r4, r1, 0x8
	  bl        0x2BFB74
	  lwz       r5, 0x14(r1)
	  addi      r3, r31, 0x1F8
	  lwz       r0, 0x18(r1)
	  addi      r4, r31, 0x138
	  stw       r5, 0x138(r31)
	  stw       r0, 0x13C(r31)
	  lwz       r5, 0x1C(r1)
	  lwz       r0, 0x20(r1)
	  stw       r5, 0x140(r31)
	  stw       r0, 0x144(r31)
	  lwz       r5, 0x24(r1)
	  lwz       r0, 0x28(r1)
	  stw       r5, 0x148(r31)
	  stw       r0, 0x14C(r31)
	  lwz       r5, 0x2C(r1)
	  lwz       r0, 0x30(r1)
	  stw       r5, 0x150(r31)
	  stw       r0, 0x154(r31)
	  lwz       r5, 0x34(r1)
	  lwz       r0, 0x38(r1)
	  stw       r5, 0x158(r31)
	  stw       r0, 0x15C(r31)
	  lwz       r5, 0x3C(r1)
	  lwz       r0, 0x40(r1)
	  stw       r5, 0x160(r31)
	  stw       r0, 0x164(r31)
	  bl        0x2AA7B0
	  addi      r3, r31, 0x1F8
	  bl        0x2AA3BC
	  lfs       f0, 0x3AC(r31)
	  addi      r3, r31, 0x138
	  addi      r4, r31, 0x180
	  stfs      f0, 0x144(r31)
	  lfs       f0, 0x3B0(r31)
	  stfs      f0, 0x154(r31)
	  lfs       f0, 0x3B4(r31)
	  stfs      f0, 0x164(r31)
	  bl        -0x7E1E8
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801684CC
 * Size:	0002D0
 */
void Game::Pellet::setOrientation((Matrixf&))
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
	  mr        r31, r3
	  mr        r30, r4
	  addi      r3, r1, 0x8
	  bl        0x2A9ED4
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  bl        0x2AA738
	  addi      r3, r1, 0x8
	  bl        0x2AA344
	  lfs       f0, 0x8(r1)
	  addi      r3, r31, 0x138
	  addi      r4, r1, 0x8
	  stfs      f0, 0x1F8(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x1FC(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x200(r31)
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x204(r31)
	  bl        0x2C0654
	  lfs       f0, 0x3AC(r31)
	  addi      r3, r31, 0x138
	  addi      r4, r31, 0x180
	  stfs      f0, 0x144(r31)
	  lfs       f0, 0x3B0(r31)
	  stfs      f0, 0x154(r31)
	  lfs       f0, 0x3B4(r31)
	  stfs      f0, 0x164(r31)
	  bl        -0x7E28C
	  lfs       f1, 0x14C(r31)
	  lfs       f0, -0x5A4C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xAC
	  lfs       f1, 0x140(r31)
	  lfs       f31, 0x160(r31)
	  b         .loc_0xB4

	.loc_0xAC:
	  lfs       f1, 0x138(r31)
	  lfs       f31, 0x158(r31)

	.loc_0xB4:
	  lfs       f0, -0x59C0(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0xC8
	  fmr       f31, f0
	  b         .loc_0xD8

	.loc_0xC8:
	  lfs       f0, -0x5A50(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0xD8
	  fmr       f31, f0

	.loc_0xD8:
	  lfs       f0, -0x5A4C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1C4
	  lfs       f0, -0x59C0(r2)
	  li        r0, 0
	  fcmpo     cr0, f31, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x10C
	  lfs       f0, -0x5A50(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x10C
	  li        r0, 0x1

	.loc_0x10C:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x130
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1CBC
	  li        r4, 0x9C8
	  subi      r5, r5, 0x1CAC
	  crclr     6, 0x6
	  bl        -0x13DFB8

	.loc_0x130:
	  lfs       f0, -0x5A50(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x148
	  lfs       f0, -0x5A4C(r2)
	  b         .loc_0x1BC

	.loc_0x148:
	  lfs       f0, -0x59C0(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x160
	  lfs       f0, -0x59BC(r2)
	  b         .loc_0x1BC

	.loc_0x160:
	  lfs       f0, -0x5A4C(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x198
	  fneg      f0, f31
	  lfs       f1, -0x59B8(r2)
	  fmuls     f1, f1, f0
	  bl        -0xA6AF8
	  lis       r4, 0x8051
	  rlwinm    r0,r3,2,0,29
	  subi      r3, r4, 0x1E00
	  lfs       f0, -0x59B4(r2)
	  lfsx      f1, r3, r0
	  fadds     f0, f1, f0
	  b         .loc_0x1BC

	.loc_0x198:
	  lfs       f0, -0x59B8(r2)
	  fmuls     f1, f0, f31
	  bl        -0xA6B20
	  lis       r4, 0x8051
	  rlwinm    r0,r3,2,0,29
	  subi      r3, r4, 0x1E00
	  lfs       f0, -0x59B4(r2)
	  lfsx      f1, r3, r0
	  fsubs     f0, f0, f1

	.loc_0x1BC:
	  stfs      f0, 0x3B8(r31)
	  b         .loc_0x2A4

	.loc_0x1C4:
	  lfs       f0, -0x59C0(r2)
	  li        r0, 0
	  fcmpo     cr0, f31, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1EC
	  lfs       f0, -0x5A50(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x1EC
	  li        r0, 0x1

	.loc_0x1EC:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x210
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1CBC
	  li        r4, 0x9CB
	  subi      r5, r5, 0x1CAC
	  crclr     6, 0x6
	  bl        -0x13E098

	.loc_0x210:
	  lfs       f0, -0x5A50(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x228
	  lfs       f0, -0x5A4C(r2)
	  b         .loc_0x29C

	.loc_0x228:
	  lfs       f0, -0x59C0(r2)
	  fcmpo     cr0, f31, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x240
	  lfs       f0, -0x59BC(r2)
	  b         .loc_0x29C

	.loc_0x240:
	  lfs       f0, -0x5A4C(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x278
	  fneg      f0, f31
	  lfs       f1, -0x59B8(r2)
	  fmuls     f1, f1, f0
	  bl        -0xA6BD8
	  lis       r4, 0x8051
	  rlwinm    r0,r3,2,0,29
	  subi      r3, r4, 0x1E00
	  lfs       f0, -0x59B4(r2)
	  lfsx      f1, r3, r0
	  fadds     f0, f1, f0
	  b         .loc_0x29C

	.loc_0x278:
	  lfs       f0, -0x59B8(r2)
	  fmuls     f1, f0, f31
	  bl        -0xA6C00
	  lis       r4, 0x8051
	  rlwinm    r0,r3,2,0,29
	  subi      r3, r4, 0x1E00
	  lfs       f0, -0x59B4(r2)
	  lfsx      f1, r3, r0
	  fsubs     f0, f0, f1

	.loc_0x29C:
	  fneg      f0, f0
	  stfs      f0, 0x3B8(r31)

	.loc_0x2A4:
	  lfs       f1, 0x3B8(r31)
	  bl        0x2A945C
	  stfs      f1, 0x3B8(r31)
	  psq_l     f31,0x28(r1),0,0
	  lwz       r0, 0x34(r1)
	  lfd       f31, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016879C
 * Size:	000028
 */
void Game::Pellet::getStateID(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x3C8(r3)
	  bl        0x97E0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801687C4
 * Size:	000260
 */
void Game::Pellet::bounceCallback((Sys::Triangle*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  stw       r29, 0x64(r1)
	  mr        r30, r3
	  addi      r3, r1, 0x14
	  mr        r4, r30
	  lwz       r5, 0x35C(r30)
	  lwz       r12, 0x0(r30)
	  lfs       f31, 0xB0(r5)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x14(r1)
	  li        r31, 0
	  lfs       f2, 0x18(r1)
	  lfs       f1, 0x1C(r1)
	  stfs      f0, 0x20(r1)
	  lfs       f0, -0x5A38(r2)
	  stfs      f2, 0x24(r1)
	  fcmpo     cr0, f31, f0
	  stfs      f1, 0x28(r1)
	  lwz       r3, 0x35C(r30)
	  lfs       f1, 0xC0(r3)
	  fsubs     f0, f2, f1
	  stfs      f1, 0x2C(r1)
	  stfs      f0, 0x24(r1)
	  ble-      .loc_0x88
	  li        r31, 0x2
	  b         .loc_0x98

	.loc_0x88:
	  lfs       f0, -0x59CC(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x98
	  li        r31, 0x1

	.loc_0x98:
	  mr        r3, r30
	  addi      r5, r1, 0x20
	  li        r4, 0
	  bl        -0x2CD2C
	  mr        r0, r3
	  mr        r3, r30
	  mr        r29, r0
	  addi      r5, r1, 0x20
	  li        r4, 0
	  bl        -0x2CD44
	  cmplwi    r3, 0
	  beq-      .loc_0x1D8
	  lbz       r0, 0x324(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x1CC
	  lis       r3, 0x804B
	  li        r4, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x44(r1)
	  addi      r0, r3, 0x6A50
	  lis       r3, 0x804E
	  li        r7, 0x279
	  stw       r0, 0x44(r1)
	  addi      r0, r3, 0x718C
	  li        r6, 0x27A
	  li        r5, 0x27B
	  sth       r7, 0x48(r1)
	  mr        r3, r29
	  sth       r6, 0x4A(r1)
	  sth       r5, 0x4C(r1)
	  stw       r4, 0x50(r1)
	  stw       r4, 0x54(r1)
	  stw       r4, 0x58(r1)
	  stw       r0, 0x44(r1)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x0(r3)
	  lis       r4, 0x804B
	  lwz       r8, 0x20(r1)
	  lis       r3, 0x804B
	  stfs      f0, 0x24(r1)
	  subi      r5, r4, 0x5814
	  lwz       r6, 0x28(r1)
	  subi      r0, r3, 0x5D24
	  lwz       r9, 0x35C(r30)
	  addi      r3, r1, 0x44
	  lwz       r7, 0x24(r1)
	  addi      r4, r1, 0x30
	  lfs       f3, 0xB0(r9)
	  stw       r8, 0x8(r1)
	  stw       r7, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  stw       r6, 0x10(r1)
	  lfs       f1, 0xC(r1)
	  stw       r5, 0x30(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x34(r1)
	  stfs      f1, 0x38(r1)
	  stfs      f0, 0x3C(r1)
	  stw       r0, 0x30(r1)
	  stfs      f3, 0x40(r1)
	  bl        0x24CE60
	  lwz       r3, 0x330(r30)
	  addi      r4, r31, 0x380B
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1D8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1CC:
	  li        r0, 0x1
	  stb       r0, 0x324(r30)
	  b         .loc_0x23C

	.loc_0x1D8:
	  lbz       r0, 0x324(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x23C
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x1
	  beq-      .loc_0x23C
	  lwz       r3, 0x330(r30)
	  addi      r4, r31, 0x3808
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  mr        r3, r30
	  stb       r0, 0x324(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1D8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x23C:
	  psq_l     f31,0x78(r1),0,0
	  lwz       r0, 0x84(r1)
	  lfd       f31, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80168A24
 * Size:	000004
 */
void Game::Pellet::onBounce(void) { }

/*
 * --INFO--
 * Address:	80168A28
 * Size:	000F84
 */
void Game::Pellet::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x2F0(r1)
	  mflr      r0
	  stw       r0, 0x2F4(r1)
	  stfd      f31, 0x2E0(r1)
	  psq_st    f31,0x2E8(r1),0,0
	  stfd      f30, 0x2D0(r1)
	  psq_st    f30,0x2D8(r1),0,0
	  stfd      f29, 0x2C0(r1)
	  psq_st    f29,0x2C8(r1),0,0
	  stfd      f28, 0x2B0(r1)
	  psq_st    f28,0x2B8(r1),0,0
	  stw       r31, 0x2AC(r1)
	  stw       r30, 0x2A8(r1)
	  stw       r29, 0x2A4(r1)
	  mr        r30, r3
	  lis       r5, 0x8048
	  mr        r4, r30
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r30)
	  subi      r31, r5, 0x1CE8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x14(r1)
	  mr        r3, r30
	  lfs       f2, 0x18(r1)
	  addi      r5, r1, 0xB0
	  lfs       f0, 0x1C(r1)
	  li        r4, 0
	  stfs      f1, 0xB0(r1)
	  stfs      f2, 0xB4(r1)
	  stfs      f0, 0xB8(r1)
	  lwz       r6, 0x35C(r30)
	  lfs       f1, 0xC0(r6)
	  fsubs     f0, f2, f1
	  stfs      f1, 0xBC(r1)
	  stfs      f0, 0xB4(r1)
	  bl        -0x2CF80
	  cmplwi    r3, 0
	  beq-      .loc_0xAC
	  li        r0, 0x1
	  stb       r0, 0x325(r30)
	  b         .loc_0xB4

	.loc_0xAC:
	  li        r0, 0
	  stb       r0, 0x325(r30)

	.loc_0xB4:
	  mr        r3, r30
	  bl        0x29F8
	  lwz       r3, 0x330(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x240
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x240
	  lwz       r3, -0x64AC(r13)
	  lwz       r0, 0x1F0(r3)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x240
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x240
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x3
	  beq-      .loc_0x154
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x4
	  bne-      .loc_0x240

	.loc_0x154:
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x174
	  addi      r3, r31, 0x80
	  addi      r5, r31, 0x3C
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x13E558

	.loc_0x174:
	  lwz       r29, -0x6780(r13)
	  cmplwi    r29, 0
	  bne-      .loc_0x194
	  addi      r3, r31, 0x80
	  addi      r5, r31, 0x3C
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x13E578

	.loc_0x194:
	  lwz       r0, 0x4(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x1B4
	  addi      r3, r31, 0x8C
	  addi      r5, r31, 0x3C
	  li        r4, 0xCF
	  crclr     6, 0x6
	  bl        -0x13E598

	.loc_0x1B4:
	  lwz       r3, 0x4(r29)
	  lwz       r29, 0x4(r3)
	  cmplwi    r29, 0
	  bne-      .loc_0x1D8
	  addi      r3, r31, 0x8C
	  addi      r5, r31, 0x98
	  li        r4, 0xD1
	  crclr     6, 0x6
	  bl        -0x13E5BC

	.loc_0x1D8:
	  lwz       r12, 0x0(r29)
	  mr        r3, r29
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x208
	  addi      r3, r31, 0xBC
	  addi      r5, r31, 0x3C
	  li        r4, 0x177
	  crclr     6, 0x6
	  bl        -0x13E5EC

	.loc_0x208:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x240
	  lwz       r3, 0x330(r30)
	  li        r4, 0x4002
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x240:
	  lwz       r3, 0x334(r30)
	  addi      r4, r1, 0xA4
	  bl        0xCC3CC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2A4
	  lwz       r0, 0xF0(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x26C
	  lwz       r3, 0x334(r30)
	  bl        0xCC29C
	  b         .loc_0x2A4

	.loc_0x26C:
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xC(r1)
	  mr        r3, r30
	  addi      r4, r1, 0xA4
	  stfs      f0, 0xA8(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2A4:
	  lbz       r0, 0x3D0(r30)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x2B8
	  mr        r3, r30
	  bl        -0x2E94

	.loc_0x2B8:
	  lbz       r0, 0x3D0(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x334
	  lwz       r29, 0x3D8(r30)
	  cmpwi     r29, 0
	  ble-      .loc_0x2D4
	  b         .loc_0x2DC

	.loc_0x2D4:
	  lwz       r3, 0x35C(r30)
	  lwz       r29, 0x120(r3)

	.loc_0x2DC:
	  mr        r3, r30
	  bl        0x1C68
	  cmpw      r3, r29
	  bge-      .loc_0x334
	  mr        r3, r30
	  li        r4, 0
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x14C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x334(r30)
	  bl        0xCC1F8
	  lbz       r0, 0x3F6(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x334
	  lwz       r12, 0x0(r30)
	  lis       r4, 0x8051
	  mr        r3, r30
	  lwz       r12, 0x68(r12)
	  addi      r4, r4, 0x41E4
	  mtctr     r12
	  bctrl

	.loc_0x334:
	  lwz       r3, 0x114(r30)
	  addi      r4, r30, 0x444
	  bl        -0x32124
	  mr        r3, r30
	  bl        -0x2D004
	  lwz       r0, 0x358(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x388
	  lwz       r3, 0x114(r30)
	  bl        -0x332E4
	  lwz       r3, 0x114(r30)
	  addi      r4, r30, 0x444
	  bl        -0x3214C
	  lwz       r3, 0x114(r30)
	  li        r4, 0
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x5C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x388:
	  lwz       r3, 0x3C8(r30)
	  mr        r4, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x3C8(r30)
	  mr        r4, r30
	  bl        0x91C0
	  cmpwi     r3, 0x6
	  bne-      .loc_0x3CC
	  addi      r3, r1, 0x98
	  bl        0x6EA28
	  mr        r3, r30
	  addi      r4, r1, 0x98
	  bl        0x6EA50
	  b         .loc_0xF48

	.loc_0x3CC:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x428
	  addi      r3, r1, 0x8C
	  bl        0x6E9F4
	  mr        r3, r30
	  addi      r4, r1, 0x8C
	  bl        0x6EA1C
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF48
	  lbz       r0, 0xD8(r30)
	  ori       r0, r0, 0x34
	  stb       r0, 0xD8(r30)
	  b         .loc_0xF48

	.loc_0x428:
	  lwz       r0, 0xB8(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x44C
	  addi      r3, r1, 0x80
	  bl        0x6E9A8
	  mr        r3, r30
	  addi      r4, r1, 0x80
	  bl        0x6E9D0
	  b         .loc_0xF48

	.loc_0x44C:
	  addi      r3, r1, 0x74
	  bl        0x6E990
	  mr        r3, r30
	  addi      r4, r1, 0x74
	  bl        0x6E9B8
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x488
	  lbz       r0, 0xD8(r30)
	  ori       r0, r0, 0x34
	  stb       r0, 0xD8(r30)

	.loc_0x488:
	  lbz       r0, 0x364(r30)
	  li        r5, 0x2
	  cmplwi    r0, 0
	  bne-      .loc_0x4A0
	  li        r4, 0x1
	  b         .loc_0x4CC

	.loc_0x4A0:
	  cmplwi    r0, 0x2
	  bne-      .loc_0x4B0
	  li        r4, 0
	  b         .loc_0x4CC

	.loc_0x4B0:
	  lbz       r0, 0xD8(r30)
	  rlwinm    r0,r0,0,30,31
	  cmpwi     r0, 0x2
	  blt-      .loc_0x4C8
	  li        r4, 0
	  b         .loc_0x4CC

	.loc_0x4C8:
	  li        r4, 0x1

	.loc_0x4CC:
	  lbz       r3, 0xD8(r30)
	  rlwinm.   r0,r3,0,29,29
	  beq-      .loc_0x4E4
	  rlwinm    r0,r3,0,30,31
	  cmpwi     r0, 0x1
	  blt-      .loc_0x4E8

	.loc_0x4E4:
	  li        r5, 0x1

	.loc_0x4E8:
	  stb       r4, 0x39C(r30)
	  lbz       r0, -0x6CDB(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x504
	  lbz       r0, 0x39C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x93C

	.loc_0x504:
	  lwz       r3, -0x6514(r13)
	  lfs       f0, 0x3AC(r30)
	  lfs       f31, 0x54(r3)
	  stfs      f0, 0x64(r1)
	  lfs       f1, 0x3B0(r30)
	  stfs      f1, 0x68(r1)
	  lfs       f0, 0x3B4(r30)
	  stfs      f0, 0x6C(r1)
	  lbz       r0, 0x3D0(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x53C
	  lfs       f0, -0x5A28(r2)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x68(r1)

	.loc_0x53C:
	  lwz       r3, 0x35C(r30)
	  addi      r31, r30, 0x1BC
	  lfs       f2, -0x5A48(r2)
	  lfs       f1, 0xC0(r3)
	  lfs       f0, -0x5A4C(r2)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x70(r1)
	  stfs      f0, 0x1E0(r30)
	  stfs      f0, 0x1E4(r30)
	  stfs      f0, 0x1E8(r30)
	  stfs      f0, 0x1D4(r30)
	  stfs      f0, 0x1D8(r30)
	  stfs      f0, 0x1DC(r30)
	  lbz       r0, 0x3F6(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x588
	  lbz       r0, 0x3D0(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x594

	.loc_0x588:
	  lwz       r0, 0xC8(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x5A8

	.loc_0x594:
	  lwz       r3, -0x6C10(r13)
	  lfs       f0, 0x4(r31)
	  lfs       f1, 0x28(r3)
	  fnmsubs   f0, f31, f1, f0
	  stfs      f0, 0x4(r31)

	.loc_0x5A8:
	  lfs       f0, -0x5A4C(r2)
	  mr        r3, r30
	  stfs      f0, 0x120(r30)
	  lfs       f0, 0x0(r31)
	  stfs      f0, 0x58(r1)
	  lfs       f0, 0x4(r31)
	  stfs      f0, 0x5C(r1)
	  lfs       f0, 0x8(r31)
	  stfs      f0, 0x60(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xB0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x638
	  lbz       r0, 0x32C(r30)
	  cmplwi    r0, 0x1
	  beq-      .loc_0x638
	  lbz       r0, 0x3D0(r30)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x638
	  lbz       r0, 0x3F6(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x638
	  lfs       f1, 0x58(r1)
	  lfs       f0, 0x11C(r30)
	  lfs       f2, 0x5C(r1)
	  fadds     f0, f1, f0
	  lfs       f1, 0x60(r1)
	  stfs      f0, 0x58(r1)
	  lfs       f0, 0x120(r30)
	  fadds     f0, f2, f0
	  stfs      f0, 0x5C(r1)
	  lfs       f0, 0x124(r30)
	  fadds     f0, f1, f0
	  stfs      f0, 0x60(r1)

	.loc_0x638:
	  lfs       f4, -0x5A4C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  li        r5, 0
	  stfs      f4, 0x11C(r30)
	  addi      r7, r1, 0x64
	  lfs       f3, -0x5A48(r2)
	  addi      r6, r1, 0x58
	  stfs      f4, 0x120(r30)
	  li        r0, -0x1
	  lfs       f0, -0x59B0(r2)
	  fmr       f1, f31
	  stfs      f4, 0x124(r30)
	  addi      r4, r1, 0x1F8
	  stw       r5, 0x20C(r1)
	  lfs       f2, 0x800(r3)
	  stw       r7, 0x1F8(r1)
	  lwz       r3, -0x6CF8(r13)
	  stw       r6, 0x1FC(r1)
	  stfs      f3, 0x200(r1)
	  stfs      f4, 0x204(r1)
	  stw       r5, 0x208(r1)
	  stw       r5, 0x23C(r1)
	  stb       r5, 0x26C(r1)
	  stb       r5, 0x211(r1)
	  stb       r5, 0x210(r1)
	  stw       r5, 0x240(r1)
	  stb       r5, 0x288(r1)
	  stw       r5, 0x28C(r1)
	  stfs      f2, 0x224(r1)
	  stfs      f0, 0x228(r1)
	  stw       r0, 0x290(r1)
	  stw       r5, 0x244(r1)
	  stb       r5, 0x212(r1)
	  stw       r30, 0x20C(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x3D0(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x760
	  lwz       r3, 0x240(r1)
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm.   r0,r0,1,31,31
	  beq-      .loc_0x728
	  lfs       f1, 0x5C(r1)
	  lfs       f0, 0x258(r1)
	  lfs       f2, 0x58(r1)
	  fmuls     f0, f1, f0
	  lfs       f1, 0x254(r1)
	  lfs       f4, 0x60(r1)
	  lfs       f3, 0x25C(r1)
	  fmadds    f1, f2, f1, f0
	  lfs       f0, -0x5A48(r2)
	  fmadds    f1, f4, f3, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x728
	  li        r0, 0

	.loc_0x728:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x748
	  lbz       r3, 0x3BC(r30)
	  cmplwi    r3, 0x64
	  bge-      .loc_0x768
	  addi      r0, r3, 0x2
	  stb       r0, 0x3BC(r30)
	  b         .loc_0x768

	.loc_0x748:
	  lbz       r3, 0x3BC(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x768
	  subi      r0, r3, 0x1
	  stb       r0, 0x3BC(r30)
	  b         .loc_0x768

	.loc_0x760:
	  li        r0, 0
	  stb       r0, 0x3BC(r30)

	.loc_0x768:
	  lfs       f0, 0x58(r1)
	  li        r0, 0
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0x5C(r1)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x60(r1)
	  stfs      f0, 0x8(r31)
	  lwz       r3, -0x6BE0(r13)
	  stw       r31, 0x1FC(r1)
	  cmplwi    r3, 0
	  stb       r0, 0x211(r1)
	  beq-      .loc_0x7A4
	  fmr       f1, f31
	  addi      r4, r1, 0x1F8
	  bl        0x5C9F0

	.loc_0x7A4:
	  lwz       r4, 0x23C(r1)
	  cmplwi    r4, 0
	  beq-      .loc_0x8E4
	  lwz       r0, 0xC8(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x7D0
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  lwz       r12, 0xE8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x7D0:
	  lwz       r0, 0x23C(r1)
	  stw       r0, 0xC8(r30)
	  lbz       r0, 0x3D0(r30)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x8EC
	  lbz       r0, 0x3F6(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x8EC
	  lfs       f1, 0x24C(r1)
	  lfs       f4, 0x4(r31)
	  lwz       r4, -0x6C10(r13)
	  lwz       r3, -0x6514(r13)
	  fmuls     f0, f4, f1
	  lfs       f13, 0x248(r1)
	  lfs       f28, 0x0(r31)
	  lfs       f7, 0x28(r4)
	  lfs       f6, 0x54(r3)
	  fmadds    f5, f28, f13, f0
	  lfs       f2, 0x250(r1)
	  lfs       f3, 0x8(r31)
	  fmuls     f6, f7, f6
	  lfs       f0, -0x5A4C(r2)
	  fmadds    f11, f3, f2, f5
	  lfs       f10, -0x59CC(r2)
	  fneg      f12, f6
	  lfs       f5, -0x5A50(r2)
	  fmuls     f6, f13, f11
	  fmuls     f9, f12, f1
	  fmuls     f7, f1, f11
	  fsubs     f8, f28, f6
	  fmuls     f6, f2, f11
	  fmadds    f11, f0, f13, f9
	  fsubs     f7, f4, f7
	  fmuls     f9, f8, f31
	  fmadds    f11, f0, f2, f11
	  fsubs     f6, f3, f6
	  fmuls     f8, f7, f31
	  fmuls     f9, f9, f10
	  fmuls     f7, f6, f31
	  fmuls     f8, f8, f10
	  fmuls     f6, f13, f11
	  fsubs     f9, f28, f9
	  fmuls     f7, f7, f10
	  fsubs     f6, f0, f6
	  fmuls     f1, f1, f11
	  stfs      f9, 0x0(r31)
	  fsubs     f8, f4, f8
	  fneg      f6, f6
	  fsubs     f4, f12, f1
	  fmuls     f1, f2, f11
	  stfs      f8, 0x4(r31)
	  fsubs     f3, f3, f7
	  fneg      f2, f4
	  fsubs     f0, f0, f1
	  stfs      f3, 0x8(r31)
	  fmuls     f3, f6, f5
	  fmuls     f1, f2, f5
	  lfs       f2, 0x0(r31)
	  fneg      f0, f0
	  fadds     f2, f2, f3
	  fmuls     f0, f0, f5
	  stfs      f2, 0x0(r31)
	  lfs       f2, 0x4(r31)
	  fadds     f1, f2, f1
	  stfs      f1, 0x4(r31)
	  lfs       f1, 0x8(r31)
	  fadds     f0, f1, f0
	  stfs      f0, 0x8(r31)
	  b         .loc_0x8EC

	.loc_0x8E4:
	  li        r0, 0
	  stw       r0, 0xC8(r30)

	.loc_0x8EC:
	  lbz       r0, 0x3D0(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x908
	  lfs       f1, 0x68(r1)
	  lfs       f0, -0x5A28(r2)
	  fadds     f0, f1, f0
	  stfs      f0, 0x68(r1)

	.loc_0x908:
	  lfs       f0, 0x64(r1)
	  stfs      f0, 0x3AC(r30)
	  lfs       f0, 0x68(r1)
	  stfs      f0, 0x3B0(r30)
	  lfs       f0, 0x6C(r1)
	  stfs      f0, 0x3B4(r30)
	  lfs       f0, 0x3AC(r30)
	  stfs      f0, 0x1B0(r30)
	  lfs       f0, 0x3B0(r30)
	  stfs      f0, 0x1B4(r30)
	  lfs       f0, 0x3B4(r30)
	  stfs      f0, 0x1B8(r30)
	  b         .loc_0xF34

	.loc_0x93C:
	  cmpwi     r5, 0
	  ble-      .loc_0xF34
	  addi      r3, r30, 0x17C
	  li        r4, 0
	  bl        -0x2F14C
	  lbz       r0, 0x3D0(r30)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x978
	  lbz       r0, 0x3F6(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x978
	  lwz       r4, 0x35C(r30)
	  mr        r3, r30
	  lfs       f1, 0x110(r4)
	  bl        0x3EF48

	.loc_0x978:
	  lwz       r3, -0x6C10(r13)
	  mr        r4, r30
	  li        r31, 0x1
	  lfs       f0, 0x28(r3)
	  fneg      f0, f0
	  stfs      f0, 0x1CC(r30)
	  lwz       r3, 0x3C8(r30)
	  bl        0x8BD4
	  cmpwi     r3, 0
	  bne-      .loc_0xB94
	  lbz       r0, 0x311(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0xB94
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x208(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB94
	  lfs       f2, 0x1BC(r30)
	  lfs       f1, 0x1C0(r30)
	  fmuls     f0, f2, f2
	  lfs       f3, 0x1C4(r30)
	  fmuls     f4, f1, f1
	  lfs       f1, -0x5A4C(r2)
	  fmuls     f3, f3, f3
	  fadds     f0, f0, f4
	  fadds     f0, f3, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0xA10
	  fmadds    f0, f2, f2, f4
	  fadds     f2, f3, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0xA14
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0xA14

	.loc_0xA10:
	  fmr       f2, f1

	.loc_0xA14:
	  lfs       f0, -0x59CC(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0xB94
	  lfs       f2, 0x1E0(r30)
	  lfs       f1, 0x1E4(r30)
	  fmuls     f0, f2, f2
	  lfs       f3, 0x1E8(r30)
	  fmuls     f4, f1, f1
	  lfs       f1, -0x5A4C(r2)
	  fmuls     f3, f3, f3
	  fadds     f0, f0, f4
	  fadds     f0, f3, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0xA68
	  fmadds    f0, f2, f2, f4
	  fadds     f2, f3, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0xA6C
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0xA6C

	.loc_0xA68:
	  fmr       f2, f1

	.loc_0xA6C:
	  lfs       f0, -0x59AC(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0xB94
	  lbz       r0, 0x3F6(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xB94
	  lwz       r4, -0x6514(r13)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  lfs       f0, 0x1B0(r30)
	  lfs       f28, 0x54(r4)
	  addi      r7, r1, 0x48
	  lfs       f5, -0x5A48(r2)
	  addi      r6, r1, 0x3C
	  stfs      f0, 0x48(r1)
	  li        r5, 0
	  lwz       r8, -0x6C10(r13)
	  li        r0, -0x1
	  lfs       f6, 0x1B4(r30)
	  fmr       f1, f28
	  lfs       f4, -0x5A4C(r2)
	  addi      r4, r1, 0x15C
	  stfs      f6, 0x4C(r1)
	  lfs       f2, 0x800(r3)
	  lfs       f3, 0x1B8(r30)
	  lfs       f0, -0x59B0(r2)
	  stfs      f3, 0x50(r1)
	  lwz       r3, -0x6CF8(r13)
	  lwz       r9, 0x35C(r30)
	  lfs       f3, 0xC0(r9)
	  fmuls     f5, f5, f3
	  fsubs     f3, f6, f5
	  stfs      f5, 0x54(r1)
	  stfs      f3, 0x4C(r1)
	  lfs       f3, 0x28(r8)
	  fneg      f3, f3
	  stfs      f4, 0x3C(r1)
	  stfs      f4, 0x44(r1)
	  stfs      f3, 0x40(r1)
	  stw       r7, 0x15C(r1)
	  stw       r6, 0x160(r1)
	  stfs      f4, 0x164(r1)
	  stfs      f4, 0x168(r1)
	  stw       r5, 0x16C(r1)
	  stw       r5, 0x1A0(r1)
	  stb       r5, 0x1D0(r1)
	  stb       r5, 0x175(r1)
	  stb       r5, 0x174(r1)
	  stw       r5, 0x1A4(r1)
	  stw       r5, 0x170(r1)
	  stb       r5, 0x1EC(r1)
	  stw       r5, 0x1F0(r1)
	  stfs      f2, 0x188(r1)
	  stfs      f0, 0x18C(r1)
	  stw       r0, 0x1F4(r1)
	  stw       r5, 0x1A8(r1)
	  stb       r5, 0x176(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x1A0(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0xB84
	  lwz       r3, -0x6BE0(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xB84
	  fmr       f1, f28
	  addi      r4, r1, 0x15C
	  bl        0x5C610

	.loc_0xB84:
	  lwz       r0, 0x1A0(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0xB94
	  li        r31, 0

	.loc_0xB94:
	  lwz       r3, -0x6514(r13)
	  rlwinm.   r0,r31,0,24,31
	  lfs       f0, -0x5A48(r2)
	  lfs       f1, 0x54(r3)
	  lfs       f30, 0x1B0(r30)
	  fmuls     f31, f1, f0
	  lfs       f29, 0x1B4(r30)
	  lfs       f28, 0x1B8(r30)
	  beq-      .loc_0xC40
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xB0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC24
	  lbz       r0, 0x3D0(r30)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0xC24
	  lbz       r0, 0x3F6(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xC24
	  lfs       f0, -0x5A4C(r2)
	  stfs      f0, 0x120(r30)
	  lfs       f1, 0x1BC(r30)
	  lfs       f0, 0x11C(r30)
	  fadds     f0, f1, f0
	  stfs      f0, 0x1BC(r30)
	  lfs       f1, 0x1C0(r30)
	  lfs       f0, 0x120(r30)
	  fadds     f0, f1, f0
	  stfs      f0, 0x1C0(r30)
	  lfs       f1, 0x1C4(r30)
	  lfs       f0, 0x124(r30)
	  fadds     f0, f1, f0
	  stfs      f0, 0x1C4(r30)

	.loc_0xC24:
	  li        r29, 0

	.loc_0xC28:
	  fmr       f1, f31
	  mr        r3, r30
	  bl        0x3F234
	  addi      r29, r29, 0x1
	  cmpwi     r29, 0x2
	  blt+      .loc_0xC28

	.loc_0xC40:
	  lwz       r4, -0x6514(r13)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  lfs       f6, -0x5A48(r2)
	  lfs       f31, 0x54(r4)
	  addi      r7, r1, 0x2C
	  lfs       f0, -0x5A50(r2)
	  addi      r6, r1, 0x20
	  stfs      f30, 0x2C(r1)
	  li        r5, 0
	  fdivs     f9, f0, f31
	  lfs       f3, -0x5A4C(r2)
	  stfs      f29, 0x30(r1)
	  li        r0, -0x1
	  lfs       f2, 0x800(r3)
	  addi      r4, r1, 0xC0
	  stfs      f28, 0x34(r1)
	  fmr       f1, f31
	  lfs       f0, -0x59B0(r2)
	  lwz       r8, 0x35C(r30)
	  lwz       r3, -0x6CF8(r13)
	  lfs       f4, 0xC0(r8)
	  fmuls     f4, f6, f4
	  stfs      f4, 0x38(r1)
	  lfs       f4, 0x1B0(r30)
	  stfs      f4, 0x20(r1)
	  fsubs     f4, f4, f30
	  lfs       f5, 0x1B4(r30)
	  fmuls     f30, f4, f9
	  stfs      f5, 0x24(r1)
	  fsubs     f7, f5, f29
	  lfs       f5, 0x1B8(r30)
	  fmuls     f29, f7, f9
	  fsubs     f8, f5, f28
	  stfs      f5, 0x28(r1)
	  stfs      f4, 0x20(r1)
	  fmuls     f28, f8, f9
	  stfs      f7, 0x24(r1)
	  stfs      f8, 0x28(r1)
	  stfs      f30, 0x20(r1)
	  stfs      f29, 0x24(r1)
	  stfs      f28, 0x28(r1)
	  stw       r7, 0xC0(r1)
	  stw       r6, 0xC4(r1)
	  stfs      f6, 0xC8(r1)
	  stfs      f3, 0xCC(r1)
	  stw       r5, 0xD0(r1)
	  stw       r5, 0x104(r1)
	  stb       r5, 0x134(r1)
	  stb       r5, 0xD9(r1)
	  stb       r5, 0xD8(r1)
	  stw       r5, 0x108(r1)
	  stw       r5, 0xD4(r1)
	  stb       r5, 0x150(r1)
	  stw       r5, 0x154(r1)
	  stfs      f2, 0xEC(r1)
	  stfs      f0, 0xF0(r1)
	  stw       r0, 0x158(r1)
	  stw       r5, 0x10C(r1)
	  stb       r5, 0xDA(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6BE0(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xD58
	  fmr       f1, f31
	  addi      r4, r1, 0xC0
	  bl        0x5C43C

	.loc_0xD58:
	  lbz       r0, 0x3D0(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xDD8
	  lwz       r3, 0x108(r1)
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm.   r0,r0,1,31,31
	  beq-      .loc_0xDA0
	  lfs       f0, 0x120(r1)
	  lfs       f2, 0x11C(r1)
	  fmuls     f1, f29, f0
	  lfs       f3, 0x124(r1)
	  lfs       f0, -0x5A48(r2)
	  fmadds    f1, f30, f2, f1
	  fmadds    f1, f28, f3, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xDA0
	  li        r0, 0

	.loc_0xDA0:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0xDC0
	  lbz       r3, 0x3BC(r30)
	  cmplwi    r3, 0x64
	  bge-      .loc_0xDE0
	  addi      r0, r3, 0x2
	  stb       r0, 0x3BC(r30)
	  b         .loc_0xDE0

	.loc_0xDC0:
	  lbz       r3, 0x3BC(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xDE0
	  subi      r0, r3, 0x1
	  stb       r0, 0x3BC(r30)
	  b         .loc_0xDE0

	.loc_0xDD8:
	  li        r0, 0
	  stb       r0, 0x3BC(r30)

	.loc_0xDE0:
	  lwz       r3, 0xC0(r1)
	  lfs       f1, -0x5A4C(r2)
	  lfs       f3, 0x8(r3)
	  lfs       f0, 0x0(r3)
	  stfs      f0, 0x1B0(r30)
	  stfs      f3, 0x1B8(r30)
	  lfs       f3, 0x1BC(r30)
	  lfs       f2, 0x1C0(r30)
	  lfs       f4, 0x1C4(r30)
	  fmuls     f0, f3, f3
	  fmuls     f2, f2, f2
	  fmuls     f4, f4, f4
	  fadds     f0, f0, f2
	  fadds     f0, f4, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0xE3C
	  fmadds    f0, f3, f3, f2
	  fadds     f2, f4, f0
	  fcmpo     cr0, f2, f1
	  ble-      .loc_0xE40
	  fsqrte    f0, f2
	  fmuls     f2, f0, f2
	  b         .loc_0xE40

	.loc_0xE3C:
	  fmr       f2, f1

	.loc_0xE40:
	  lfs       f0, -0x5A4C(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0xE7C
	  lfs       f1, -0x5A50(r2)
	  lfs       f0, 0x1BC(r30)
	  fdivs     f1, f1, f2
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1BC(r30)
	  lfs       f0, 0x1C0(r30)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1C0(r30)
	  lfs       f0, 0x1C4(r30)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1C4(r30)
	  b         .loc_0xE80

	.loc_0xE7C:
	  fmr       f2, f0

	.loc_0xE80:
	  lfs       f3, 0x11C(r30)
	  lfs       f1, 0x120(r30)
	  fmuls     f0, f3, f3
	  lfs       f4, 0x124(r30)
	  fmuls     f5, f1, f1
	  lfs       f1, -0x5A4C(r2)
	  fmuls     f4, f4, f4
	  fadds     f0, f0, f5
	  fadds     f0, f4, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0xEC8
	  fmadds    f0, f3, f3, f5
	  fadds     f0, f4, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0xECC
	  fsqrte    f1, f0
	  fmuls     f0, f1, f0
	  b         .loc_0xECC

	.loc_0xEC8:
	  fmr       f0, f1

	.loc_0xECC:
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0xF00
	  fsubs     f1, f2, f0
	  lfs       f0, 0x1BC(r30)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1BC(r30)
	  lfs       f0, 0x1C0(r30)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1C0(r30)
	  lfs       f0, 0x1C4(r30)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x1C4(r30)
	  b         .loc_0xF24

	.loc_0xF00:
	  lfs       f0, 0x1BC(r30)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x1BC(r30)
	  lfs       f0, 0x1C0(r30)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x1C0(r30)
	  lfs       f0, 0x1C4(r30)
	  fmuls     f0, f0, f2
	  stfs      f0, 0x1C4(r30)

	.loc_0xF24:
	  lfs       f0, -0x5A4C(r2)
	  stfs      f0, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  stfs      f0, 0x124(r30)

	.loc_0xF34:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1EC(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF48:
	  psq_l     f31,0x2E8(r1),0,0
	  lfd       f31, 0x2E0(r1)
	  psq_l     f30,0x2D8(r1),0,0
	  lfd       f30, 0x2D0(r1)
	  psq_l     f29,0x2C8(r1),0,0
	  lfd       f29, 0x2C0(r1)
	  psq_l     f28,0x2B8(r1),0,0
	  lfd       f28, 0x2B0(r1)
	  lwz       r31, 0x2AC(r1)
	  lwz       r30, 0x2A8(r1)
	  lwz       r0, 0x2F4(r1)
	  lwz       r29, 0x2A4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x2F0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801699AC
 * Size:	000004
 */
void Game::Pellet::do_update(void) { }

/*
 * --INFO--
 * Address:	801699B0
 * Size:	000008
 */
void PSM::Scene_Game::isCave(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Game::Pellet::move_noDynamics(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801699B8
 * Size:	00001C
 */
void Game::Pellet::getPikiBirthCount((int&, int&))
{
	/*
	.loc_0x0:
	  lwz       r6, 0x35C(r3)
	  lwz       r0, 0x150(r6)
	  stw       r0, 0x0(r4)
	  lwz       r3, 0x35C(r3)
	  lwz       r0, 0x140(r3)
	  stw       r0, 0x0(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801699D4
 * Size:	000014
 */
void Game::PelletMgr::setMovieDraw((bool))
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,0,24,31
	  cntlzw    r0, r0
	  rlwinm    r0,r0,27,5,31
	  stb       r0, 0x3C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801699E8
 * Size:	00012C
 */
void Game::Pellet::doSimulation((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  li        r4, 0x1
	  stw       r0, 0x54(r1)
	  li        r0, 0
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  stb       r4, 0x8(r1)
	  addi      r4, r1, 0x8
	  stb       r0, 0x8(r1)
	  bl        -0x2DDEC
	  cmpwi     r3, 0x2
	  bne-      .loc_0x118
	  mr        r4, r31
	  addi      r3, r1, 0x10
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lis       r3, 0x804B
	  lfs       f3, 0x10(r1)
	  addi      r0, r3, 0x1F64
	  lfs       f2, 0x18(r1)
	  lfs       f0, 0x14(r1)
	  lis       r3, 0x804B
	  stw       r0, 0xC(r1)
	  addi      r4, r3, 0x1F58
	  lfs       f1, -0x5A4C(r2)
	  lis       r3, 0x804B
	  stfs      f0, 0x20(r1)
	  addi      r5, r1, 0xC
	  lfs       f0, -0x59CC(r2)
	  li        r0, 0
	  stw       r4, 0xC(r1)
	  addi      r6, r3, 0x1F4C
	  lwz       r3, -0x6CF8(r13)
	  addi      r4, r1, 0x28
	  stfs      f3, 0x1C(r1)
	  stfs      f2, 0x24(r1)
	  stfs      f1, 0x20(r1)
	  stw       r6, 0xC(r1)
	  stfs      f3, 0x28(r1)
	  stfs      f1, 0x2C(r1)
	  stfs      f2, 0x30(r1)
	  stw       r5, 0x34(r1)
	  stb       r0, 0x38(r1)
	  stfs      f0, 0x3C(r1)
	  lwz       r3, 0x8(r3)
	  bl        0x951C
	  cmplwi    r3, 0
	  beq-      .loc_0x118
	  lfs       f1, 0x50(r3)
	  addi      r4, r1, 0x1C
	  lfs       f2, 0x54(r3)
	  lfs       f0, 0x4C(r3)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f0, 0x1C(r1)
	  stfs      f1, 0x20(r1)
	  stfs      f2, 0x24(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x59AC(r2)
	  mr        r3, r31
	  addi      r4, r1, 0x1C
	  li        r5, 0
	  fadds     f0, f0, f1
	  stfs      f0, 0x20(r1)
	  bl        -0x2E954

	.loc_0x118:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80169B14
 * Size:	000114
 */
void Game::Pellet::updateTrMatrix(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stw       r31, 0xAC(r1)
	  mr        r31, r3
	  lwz       r0, 0xB8(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x100
	  lfs       f0, 0x1B0(r31)
	  addi      r3, r1, 0x74
	  lfs       f2, -0x59C0(r2)
	  addi      r4, r1, 0x8
	  stfs      f0, 0x3AC(r31)
	  lfs       f0, 0x1B4(r31)
	  stfs      f0, 0x3B0(r31)
	  lfs       f0, 0x1B8(r31)
	  stfs      f0, 0x3B4(r31)
	  lfs       f3, 0x2FC(r31)
	  lfs       f1, 0x2F8(r31)
	  lfs       f0, 0x2F4(r31)
	  fmuls     f3, f3, f2
	  fmuls     f1, f1, f2
	  fmuls     f0, f0, f2
	  stfs      f3, 0x10(r1)
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  bl        0x2BECC4
	  addi      r3, r1, 0x44
	  addi      r4, r31, 0x1F8
	  bl        0x2BF000
	  addi      r3, r1, 0x44
	  addi      r4, r1, 0x74
	  addi      r5, r1, 0x14
	  bl        -0x7F898
	  lfs       f0, 0x3AC(r31)
	  lwz       r3, 0x14(r1)
	  stfs      f0, 0x20(r1)
	  lwz       r0, 0x18(r1)
	  lfs       f0, 0x3B0(r31)
	  stfs      f0, 0x30(r1)
	  lfs       f0, 0x3B4(r31)
	  stfs      f0, 0x40(r1)
	  stw       r3, 0x138(r31)
	  stw       r0, 0x13C(r31)
	  lwz       r3, 0x1C(r1)
	  lwz       r0, 0x20(r1)
	  stw       r3, 0x140(r31)
	  stw       r0, 0x144(r31)
	  lwz       r3, 0x24(r1)
	  lwz       r0, 0x28(r1)
	  stw       r3, 0x148(r31)
	  stw       r0, 0x14C(r31)
	  lwz       r3, 0x2C(r1)
	  lwz       r0, 0x30(r1)
	  stw       r3, 0x150(r31)
	  stw       r0, 0x154(r31)
	  lwz       r3, 0x34(r1)
	  lwz       r0, 0x38(r1)
	  stw       r3, 0x158(r31)
	  stw       r0, 0x15C(r31)
	  lwz       r3, 0x3C(r1)
	  lwz       r0, 0x40(r1)
	  stw       r3, 0x160(r31)
	  stw       r0, 0x164(r31)

	.loc_0x100:
	  lwz       r0, 0xB4(r1)
	  lwz       r31, 0xAC(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80169C28
 * Size:	00027C
 */
void Game::Pellet::doAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stw       r31, 0xBC(r1)
	  mr        r31, r3
	  stw       r30, 0xB8(r1)
	  lwz       r4, -0x6CE0(r13)
	  lbz       r0, 0x3C(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x40
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x264

	.loc_0x40:
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x64
	  lbz       r0, 0x3C(r3)
	  rlwinm.   r0,r0,0,26,26
	  beq-      .loc_0x64
	  mr        r3, r31
	  bl        -0x125C
	  b         .loc_0x8C

	.loc_0x64:
	  lwz       r3, 0x114(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x78
	  addi      r4, r31, 0x444
	  bl        -0x3305C

	.loc_0x78:
	  addi      r3, r1, 0x14
	  bl        0x6DB64
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  bl        0x6DB8C

	.loc_0x8C:
	  lwz       r3, 0x3C8(r31)
	  mr        r4, r31
	  bl        0x82D4
	  cmpwi     r3, 0x6
	  bne-      .loc_0xF0
	  addi      r3, r31, 0x41C
	  lfs       f1, 0x438(r31)
	  lwz       r12, 0x41C(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x41C
	  lwz       r30, 0x174(r31)
	  lwz       r12, 0x41C(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x8(r30)
	  lwz       r4, 0x4(r4)
	  lwz       r4, 0x28(r4)
	  lwz       r4, 0x0(r4)
	  stw       r3, 0x54(r4)
	  mr        r3, r31
	  bl        0x4F8
	  b         .loc_0x25C

	.loc_0xF0:
	  lwz       r0, 0xB8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x264
	  lwz       r0, 0x358(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x16C
	  lwz       r0, 0x174(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x16C
	  lwz       r0, 0x42C(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x16C
	  addi      r3, r31, 0x41C
	  lfs       f1, 0x438(r31)
	  lwz       r12, 0x41C(r31)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x41C
	  lwz       r30, 0x174(r31)
	  lwz       r12, 0x41C(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x8(r30)
	  lwz       r4, 0x4(r4)
	  lwz       r4, 0x28(r4)
	  lwz       r4, 0x0(r4)
	  stw       r3, 0x54(r4)
	  mr        r3, r31
	  bl        0x478

	.loc_0x16C:
	  lfs       f0, 0x1B0(r31)
	  addi      r3, r1, 0x80
	  lfs       f2, -0x59C0(r2)
	  addi      r4, r1, 0x8
	  stfs      f0, 0x3AC(r31)
	  lfs       f0, 0x1B4(r31)
	  stfs      f0, 0x3B0(r31)
	  lfs       f0, 0x1B8(r31)
	  stfs      f0, 0x3B4(r31)
	  lfs       f3, 0x2FC(r31)
	  lfs       f1, 0x2F8(r31)
	  lfs       f0, 0x2F4(r31)
	  fmuls     f3, f3, f2
	  fmuls     f1, f1, f2
	  fmuls     f0, f0, f2
	  stfs      f3, 0x10(r1)
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  bl        0x2BEA64
	  addi      r3, r1, 0x50
	  addi      r4, r31, 0x1F8
	  bl        0x2BEDA0
	  addi      r3, r1, 0x50
	  addi      r4, r1, 0x80
	  addi      r5, r1, 0x20
	  bl        -0x7FAF8
	  lfs       f0, 0x3AC(r31)
	  mr        r3, r31
	  lwz       r4, 0x20(r1)
	  stfs      f0, 0x2C(r1)
	  lwz       r0, 0x24(r1)
	  lfs       f0, 0x3B0(r31)
	  stfs      f0, 0x3C(r1)
	  lfs       f0, 0x3B4(r31)
	  stfs      f0, 0x4C(r1)
	  stw       r4, 0x138(r31)
	  stw       r0, 0x13C(r31)
	  lwz       r4, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  stw       r4, 0x140(r31)
	  stw       r0, 0x144(r31)
	  lwz       r4, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  stw       r4, 0x148(r31)
	  stw       r0, 0x14C(r31)
	  lwz       r4, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  stw       r4, 0x150(r31)
	  stw       r0, 0x154(r31)
	  lwz       r4, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  stw       r4, 0x158(r31)
	  stw       r0, 0x15C(r31)
	  lwz       r4, 0x48(r1)
	  lwz       r0, 0x4C(r1)
	  stw       r4, 0x160(r31)
	  stw       r0, 0x164(r31)
	  bl        0x3E400
	  b         .loc_0x25C
	  b         .loc_0x264

	.loc_0x25C:
	  mr        r3, r31
	  bl        0x22C

	.loc_0x264:
	  lwz       r0, 0xC4(r1)
	  lwz       r31, 0xBC(r1)
	  lwz       r30, 0xB8(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80169EA4
 * Size:	0000F0
 */
void Game::Pellet::doEntry(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, -0x6CE0(r13)
	  lbz       r0, 0x3C(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x3C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xDC

	.loc_0x3C:
	  lwz       r0, 0x358(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xC8
	  lbz       r0, 0xD8(r31)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x80
	  lwz       r3, 0x174(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F8(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xC8

	.loc_0x80:
	  lbz       r0, -0x7B98(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xB4
	  lwz       r4, -0x6C18(r13)
	  li        r3, 0
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xA8
	  cmpwi     r0, 0x3
	  bne-      .loc_0xAC

	.loc_0xA8:
	  li        r3, 0x1

	.loc_0xAC:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xDC

	.loc_0xB4:
	  lwz       r3, 0x174(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC8:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1D4(r12)
	  mtctr     r12
	  bctrl

	.loc_0xDC:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80169F94
 * Size:	000004
 */
void Game::Pellet::changeMaterial(void) { }

/*
 * --INFO--
 * Address:	80169F98
 * Size:	000020
 */
void Game::Pellet::doSetView((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x2E6F4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80169FB8
 * Size:	000020
 */
void Game::Pellet::doViewCalc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x2E60C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80169FD8
 * Size:	0000DC
 */
void Game::Pellet::theEntry(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x174(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xC8
	  lbz       r0, 0xD8(r31)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x40
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x84

	.loc_0x40:
	  lbz       r0, -0x7B98(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x74
	  lwz       r5, -0x6C18(r13)
	  li        r4, 0
	  lwz       r0, 0x44(r5)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x68
	  cmpwi     r0, 0x3
	  bne-      .loc_0x6C

	.loc_0x68:
	  li        r4, 0x1

	.loc_0x6C:
	  rlwinm.   r0,r4,0,24,31
	  beq-      .loc_0xC8

	.loc_0x74:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0x84:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1F8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016A0B4
 * Size:	00009C
 */
void Game::Pellet::entryShape(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x358(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x80
	  lwz       r3, 0x174(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x88
	  lwz       r4, 0x8(r3)
	  addi      r3, r31, 0x138
	  addi      r4, r4, 0x24
	  bl        -0x7FE20
	  lwz       r3, 0x174(r31)
	  lfs       f0, 0x168(r31)
	  lwz       r3, 0x8(r3)
	  stfs      f0, 0x18(r3)
	  lfs       f0, 0x16C(r31)
	  stfs      f0, 0x1C(r3)
	  lfs       f0, 0x170(r31)
	  stfs      f0, 0x20(r3)
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x114(r31)
	  bl        -0x34690
	  b         .loc_0x88

	.loc_0x80:
	  lwz       r3, 0x114(r31)
	  bl        -0x3469C

	.loc_0x88:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016A150
 * Size:	000024
 */
void Game::Pellet::getBoundingSphere((Sys::Sphere&))
{
	/*
	.loc_0x0:
	  lfs       f0, 0x444(r3)
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x448(r3)
	  stfs      f0, 0x4(r4)
	  lfs       f0, 0x44C(r3)
	  stfs      f0, 0x8(r4)
	  lfs       f0, 0x450(r3)
	  stfs      f0, 0xC(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016A174
 * Size:	00003C
 */
void Game::Pellet::getLODSphere((Sys::Sphere&))
{
	/*
	.loc_0x0:
	  lfs       f0, 0x444(r3)
	  stfs      f0, 0x0(r4)
	  lfs       f0, 0x448(r3)
	  stfs      f0, 0x4(r4)
	  lfs       f0, 0x44C(r3)
	  stfs      f0, 0x8(r4)
	  lwz       r0, 0x358(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x30
	  lfs       f0, 0x31C(r3)
	  stfs      f0, 0xC(r4)
	  blr

	.loc_0x30:
	  lfs       f0, 0x450(r3)
	  stfs      f0, 0xC(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016A1B0
 * Size:	000058
 */
void Game::Pellet::init_pmotions(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r6, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x35C(r3)
	  lwz       r0, 0x1A0(r3)
	  cmpwi     r0, 0
	  ble-      .loc_0x40
	  stb       r0, 0x338(r6)
	  addi      r3, r6, 0x33C
	  li        r4, 0
	  li        r5, 0
	  lwz       r0, 0x42C(r6)
	  stw       r0, 0x34C(r6)
	  bl        0x2BEAA0
	  b         .loc_0x48

	.loc_0x40:
	  li        r0, 0
	  stb       r0, 0x338(r6)

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016A208
 * Size:	0000B4
 */
void Game::Pellet::update_pmotions(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stmw      r27, 0x8C(r1)
	  mr        r27, r3
	  li        r29, 0
	  addi      r28, r27, 0x33C
	  b         .loc_0x94

	.loc_0x20:
	  mr        r3, r28
	  lfs       f1, -0x5A50(r2)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r1, 0x8
	  subi      r4, r2, 0x59A8
	  crclr     6, 0x6
	  bl        -0xA2E14
	  lwz       r3, 0x174(r27)
	  addi      r4, r1, 0x8
	  bl        0x2D4D8C
	  cmplwi    r3, 0
	  beq-      .loc_0x90
	  lhz       r30, 0x38(r3)
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r31, 0x174(r27)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x8(r31)
	  rlwinm    r0,r30,2,14,29
	  lwz       r4, 0x4(r4)
	  lwz       r4, 0x28(r4)
	  lwzx      r4, r4, r0
	  stw       r3, 0x54(r4)

	.loc_0x90:
	  addi      r29, r29, 0x1

	.loc_0x94:
	  lbz       r0, 0x338(r27)
	  cmpw      r29, r0
	  blt+      .loc_0x20
	  lmw       r27, 0x8C(r1)
	  lwz       r0, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016A2BC
 * Size:	000044
 */
void Game::Pellet::start_pmotions(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x338(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  cmplwi    r3, 0
	  mr        r5, r3
	  addi      r3, r3, 0x33C
	  beq-      .loc_0x2C
	  addi      r5, r5, 0x314

	.loc_0x2C:
	  li        r4, 0x1
	  bl        0x2BE99C

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Game::Pellet::stop_pmotions(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void Game::Pellet::start_carrymotion(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8016A300
 * Size:	00000C
 */
void Game::Pellet::stop_carrymotion(void)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x5A4C(r2)
	  stfs      f0, 0x438(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016A30C
 * Size:	000054
 */
void Game::Pellet::finish_carrymotion(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x42C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x28
	  lbz       r0, 0x434(r3)
	  ori       r0, r0, 0x2
	  stb       r0, 0x434(r3)
	  b         .loc_0x44

	.loc_0x28:
	  lwz       r3, 0x358(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016A360
 * Size:	000088
 */
void Game::Pellet::onKeyEvent((SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1C(r4)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x74
	  lbz       r0, 0x434(r31)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x74
	  cmplwi    r31, 0
	  mr        r5, r31
	  beq-      .loc_0x3C
	  addi      r5, r5, 0x314

	.loc_0x3C:
	  addi      r3, r31, 0x41C
	  li        r4, 0
	  bl        0x2BE8E4
	  lbz       r0, 0x3D0(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x6C
	  lwz       r3, -0x6514(r13)
	  lfs       f1, -0x5A38(r2)
	  lfs       f0, 0x54(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x438(r31)
	  b         .loc_0x74

	.loc_0x6C:
	  lfs       f0, -0x5A4C(r2)
	  stfs      f0, 0x438(r31)

	.loc_0x74:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016A3E8
 * Size:	0000C0
 */
void Game::Pellet::isSlotFree((short))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  extsh     r4, r31
	  cmpwi     r4, 0x270F
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x38
	  lbz       r0, 0x3F6(r30)
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  b         .loc_0xA8

	.loc_0x38:
	  extsh.    r0, r31
	  li        r3, 0
	  blt-      .loc_0x54
	  lha       r0, 0x3F4(r30)
	  cmpw      r4, r0
	  bge-      .loc_0x54
	  li        r3, 0x1

	.loc_0x54:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x78
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1CBC
	  li        r4, 0xE66
	  subi      r5, r5, 0x1CAC
	  crclr     6, 0x6
	  bl        -0x13FE1C

	.loc_0x78:
	  extsh     r6, r31
	  li        r5, 0x1
	  srawi     r3, r6, 0x3
	  subfic    r0, r3, 0xF
	  rlwinm    r4,r3,3,0,28
	  add       r3, r30, r0
	  sub       r4, r6, r4
	  lbz       r0, 0x3E4(r3)
	  slw       r3, r5, r4
	  and       r0, r3, r0
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31

	.loc_0xA8:
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
 * Address:	8016A4A8
 * Size:	00001C
 */
void Game::Pellet::getSpeicalSlot(void)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x3F6(r3)
	  li        r3, 0x270F
	  cmplwi    r0, 0
	  beq-      .loc_0x14
	  li        r3, -0x1

	.loc_0x14:
	  extsh     r3, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016A4C4
 * Size:	000054
 */
void Game::Pellet::getFreeStickSlot(void)
{
	/*
	.loc_0x0:
	  lha       r0, 0x3F4(r3)
	  li        r7, 0
	  li        r6, 0x1
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x4C

	.loc_0x18:
	  srawi     r4, r7, 0x3
	  subfic    r0, r4, 0xF
	  rlwinm    r5,r4,3,0,28
	  add       r4, r3, r0
	  sub       r5, r7, r5
	  lbz       r0, 0x3E4(r4)
	  slw       r4, r6, r5
	  and.      r0, r4, r0
	  bne-      .loc_0x44
	  extsh     r3, r7
	  blr

	.loc_0x44:
	  addi      r7, r7, 0x1
	  bdnz+     .loc_0x18

	.loc_0x4C:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016A518
 * Size:	000128
 */
void getNearFreeStickSlot__Q24Game6PelletFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  stw       r28, 0x20(r1)
	  lfs       f31, -0x59A0(r2)
	  mr        r28, r3
	  mr        r29, r4
	  li        r31, -0x1
	  li        r30, 0
	  b         .loc_0xEC

	.loc_0x3C:
	  extsh     r6, r30
	  li        r5, 0x1
	  srawi     r3, r6, 0x3
	  subfic    r0, r3, 0xF
	  rlwinm    r4,r3,3,0,28
	  add       r3, r28, r0
	  sub       r4, r6, r4
	  lbz       r0, 0x3E4(r3)
	  slw       r3, r5, r4
	  and.      r0, r3, r0
	  bne-      .loc_0xE8
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  addi      r5, r1, 0x8
	  lwz       r12, 0x180(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x4(r29)
	  lfs       f3, 0x8(r1)
	  fsubs     f4, f1, f0
	  lfs       f2, 0x0(r29)
	  lfs       f1, 0x10(r1)
	  lfs       f0, 0x8(r29)
	  fsubs     f3, f3, f2
	  fmuls     f4, f4, f4
	  fsubs     f2, f1, f0
	  lfs       f0, -0x5A4C(r2)
	  fmadds    f1, f3, f3, f4
	  fmuls     f2, f2, f2
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xD4
	  ble-      .loc_0xD8
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0xD8

	.loc_0xD4:
	  fmr       f1, f0

	.loc_0xD8:
	  fcmpo     cr0, f1, f31
	  bge-      .loc_0xE8
	  fmr       f31, f1
	  mr        r31, r30

	.loc_0xE8:
	  addi      r30, r30, 0x1

	.loc_0xEC:
	  lha       r0, 0x3F4(r28)
	  extsh     r3, r30
	  cmpw      r3, r0
	  blt+      .loc_0x3C
	  mr        r3, r31
	  psq_l     f31,0x38(r1),0,0
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016A640
 * Size:	0000E8
 */
void Game::Pellet::getRandomFreeStickSlot(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  lha       r31, 0x3F4(r3)
	  bl        -0xA10BC
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0xC(r1)
	  xoris     r0, r31, 0x8000
	  lfd       f2, -0x5A30(r2)
	  li        r9, 0x80
	  stw       r4, 0x8(r1)
	  li        r3, -0x1
	  lfs       f0, -0x5A20(r2)
	  li        r10, 0
	  lfd       f1, 0x8(r1)
	  li        r6, 0x1
	  stw       r0, 0x14(r1)
	  fsubs     f1, f1, f2
	  stw       r4, 0x10(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r8, 0x1C(r1)
	  b         .loc_0xC4

	.loc_0x7C:
	  srawi     r4, r7, 0x3
	  subfic    r0, r4, 0xF
	  rlwinm    r5,r4,3,0,28
	  add       r4, r30, r0
	  sub       r5, r7, r5
	  lbz       r0, 0x3E4(r4)
	  slw       r4, r6, r5
	  and.      r0, r4, r0
	  bne-      .loc_0xC0
	  sub       r0, r7, r8
	  srawi     r4, r0, 0x1F
	  xor       r0, r4, r0
	  sub       r0, r0, r4
	  cmpw      r0, r9
	  bge-      .loc_0xC0
	  mr        r9, r0
	  mr        r3, r10

	.loc_0xC0:
	  addi      r10, r10, 0x1

	.loc_0xC4:
	  extsh     r7, r10
	  cmpw      r7, r31
	  blt+      .loc_0x7C
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016A728
 * Size:	00020C
 */
void Game::Pellet::getPelletGoal(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  lwz       r4, -0x6C18(r13)
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x84
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x3
	  beq-      .loc_0x1D8
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x2
	  beq-      .loc_0x1D8
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x4
	  beq-      .loc_0x1D8

	.loc_0x84:
	  lwz       r0, 0x3F8(r30)
	  li        r5, -0x1
	  li        r31, 0
	  li        r3, 0
	  cmpw      r5, r0
	  bge-      .loc_0xA0
	  mr        r5, r0

	.loc_0xA0:
	  lwz       r0, 0x3FC(r30)
	  cmpw      r5, r0
	  bge-      .loc_0xB0
	  mr        r5, r0

	.loc_0xB0:
	  lwz       r0, 0x400(r30)
	  cmpw      r5, r0
	  bge-      .loc_0xC0
	  mr        r5, r0

	.loc_0xC0:
	  lwz       r0, 0x3F8(r30)
	  addi      r4, r1, 0x8
	  li        r6, 0
	  cmpw      r5, r0
	  bne-      .loc_0xE0
	  stw       r6, 0x8(r1)
	  li        r31, 0x1
	  li        r3, 0x4

	.loc_0xE0:
	  lwz       r0, 0x3FC(r30)
	  li        r6, 0x1
	  cmpw      r5, r0
	  bne-      .loc_0xFC
	  stwx      r6, r4, r3
	  addi      r31, r31, 0x1
	  addi      r3, r3, 0x4

	.loc_0xFC:
	  lwz       r0, 0x400(r30)
	  li        r6, 0x2
	  cmpw      r5, r0
	  bne-      .loc_0x114
	  stwx      r6, r4, r3
	  addi      r31, r31, 0x1

	.loc_0x114:
	  bl        -0xA129C
	  lis       r4, 0x4330
	  xoris     r0, r3, 0x8000
	  stw       r0, 0x1C(r1)
	  xoris     r0, r31, 0x8000
	  lfd       f2, -0x5A30(r2)
	  stw       r4, 0x18(r1)
	  lfs       f0, -0x5A20(r2)
	  lfd       f1, 0x18(r1)
	  stw       r0, 0x24(r1)
	  fsubs     f1, f1, f2
	  stw       r4, 0x20(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0x20(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  cmpw      r0, r31
	  blt-      .loc_0x16C
	  li        r0, 0

	.loc_0x16C:
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r1, 0x8
	  lwzx      r30, r3, r0
	  lwz       r3, -0x6CD0(r13)
	  mr        r4, r30
	  bl        0x111F4
	  lwz       r4, -0x6C18(r13)
	  mr        r31, r3
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x1B0
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r30
	  bl        0x7C810
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B0
	  li        r31, 0

	.loc_0x1B0:
	  cmplwi    r31, 0
	  bne-      .loc_0x1F0
	  lwz       r3, -0x6CD0(r13)
	  li        r4, 0x1
	  bl        0x111B4
	  mr.       r31, r3
	  bne-      .loc_0x1F0
	  lwz       r3, -0x6CD0(r13)
	  lwz       r31, 0xAC(r3)
	  b         .loc_0x1F0

	.loc_0x1D8:
	  lwz       r3, -0x6CD0(r13)
	  lwz       r0, 0xB0(r3)
	  cmplwi    r0, 0
	  mr        r31, r0
	  bne-      .loc_0x1F0
	  lwz       r31, 0xAC(r3)

	.loc_0x1F0:
	  lwz       r0, 0x44(r1)
	  mr        r3, r31
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016A934
 * Size:	00003C
 */
void Game::Pellet::getTotalPikmins(void)
{
	/*
	.loc_0x0:
	  lwz       r5, 0x3F8(r3)
	  lwz       r4, 0x3FC(r3)
	  lwz       r0, 0x400(r3)
	  add       r5, r5, r4
	  lwz       r4, 0x404(r3)
	  add       r5, r5, r0
	  lwz       r0, 0x408(r3)
	  add       r5, r5, r4
	  lwz       r4, 0x40C(r3)
	  add       r5, r5, r0
	  lwz       r0, 0x410(r3)
	  add       r5, r5, r4
	  add       r5, r5, r0
	  mr        r3, r5
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016A970
 * Size:	00006C
 */
void Game::Pellet::getTotalCarryPikmins(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  li        r29, 0

	.loc_0x24:
	  lwz       r3, -0x6D0C(r13)
	  mr        r4, r29
	  bl        -0xB150
	  lwz       r0, 0x3F8(r31)
	  addi      r29, r29, 0x1
	  cmpwi     r29, 0x7
	  addi      r31, r31, 0x4
	  mullw     r0, r0, r3
	  add       r30, r30, r0
	  blt+      .loc_0x24
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
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
 * Address:	8016A9DC
 * Size:	000078
 */
void Game::Pellet::getPikmins((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  blt-      .loc_0x30
	  cmpwi     r31, 0x7
	  bge-      .loc_0x30
	  li        r0, 0x1

	.loc_0x30:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x54
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1CBC
	  li        r4, 0xF3E
	  subi      r5, r5, 0x1CAC
	  crclr     6, 0x6
	  bl        -0x1403EC

	.loc_0x54:
	  rlwinm    r0,r31,2,0,29
	  add       r3, r30, r0
	  lwz       r3, 0x3F8(r3)
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
 * Address:	8016AA54
 * Size:	0001D4
 */
void Game::Pellet::onSlotStickStart((Game::Creature*, short))
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
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  extsh     r5, r29
	  cmpwi     r5, 0x270F
	  beq-      .loc_0xE0
	  extsh.    r0, r29
	  li        r3, 0
	  blt-      .loc_0x4C
	  lha       r0, 0x3F4(r30)
	  cmpw      r5, r0
	  bge-      .loc_0x4C
	  li        r3, 0x1

	.loc_0x4C:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x70
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1CBC
	  li        r4, 0xF4D
	  subi      r5, r5, 0x1CAC
	  crclr     6, 0x6
	  bl        -0x140480

	.loc_0x70:
	  mr        r3, r30
	  mr        r4, r29
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x168(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xAC
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1CBC
	  li        r4, 0xF4E
	  subi      r5, r5, 0x1CAC
	  crclr     6, 0x6
	  bl        -0x1404BC

	.loc_0xAC:
	  extsh     r6, r29
	  cmpwi     r6, 0x80
	  bge-      .loc_0xE0
	  srawi     r4, r6, 0x3
	  li        r3, 0x1
	  subfic    r0, r4, 0xF
	  add       r5, r30, r0
	  rlwinm    r0,r4,3,0,28
	  lbz       r4, 0x3E4(r5)
	  sub       r0, r6, r0
	  slw       r0, r3, r0
	  or        r0, r4, r0
	  stb       r0, 0x3E4(r5)

	.loc_0xE0:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x168
	  lbz       r29, 0x2B8(r31)
	  li        r0, 0
	  cmpwi     r29, 0
	  blt-      .loc_0x118
	  cmpwi     r29, 0x7
	  bge-      .loc_0x118
	  li        r0, 0x1

	.loc_0x118:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x13C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1CBC
	  li        r4, 0xF55
	  subi      r5, r5, 0x1CAC
	  crclr     6, 0x6
	  bl        -0x14054C

	.loc_0x13C:
	  rlwinm    r0,r29,2,0,29
	  mr        r3, r31
	  add       r5, r30, r0
	  lwz       r4, 0x3F8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x3F8(r5)
	  bl        -0x21504
	  lfs       f0, 0x418(r30)
	  fadds     f0, f0, f1
	  stfs      f0, 0x418(r30)
	  b         .loc_0x174

	.loc_0x168:
	  lwz       r3, 0x414(r30)
	  addi      r0, r3, 0x1
	  stw       r0, 0x414(r30)

	.loc_0x174:
	  lwz       r0, 0x3DC(r30)
	  cmpwi     r0, 0
	  ble-      .loc_0x184
	  b         .loc_0x18C

	.loc_0x184:
	  lwz       r3, 0x35C(r30)
	  lwz       r0, 0x130(r3)

	.loc_0x18C:
	  cmpwi     r0, 0x1
	  beq-      .loc_0x1B8
	  li        r0, 0x5
	  cmplwi    r30, 0
	  stw       r0, 0x3D4(r30)
	  mr        r4, r30
	  beq-      .loc_0x1AC
	  addi      r4, r30, 0x318

	.loc_0x1AC:
	  lwz       r3, -0x6DE8(r13)
	  bl        -0x4EA2C
	  stw       r3, 0x398(r30)

	.loc_0x1B8:
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
 * Address:	8016AC28
 * Size:	0001E8
 */
void Game::Pellet::onSlotStickEnd((Game::Creature*, short))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r6, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r6, 0x1CE8
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  stw       r28, 0x10(r1)
	  mr        r28, r5
	  extsh     r5, r28
	  cmpwi     r5, 0x270F
	  beq-      .loc_0xDC
	  extsh.    r0, r28
	  li        r3, 0
	  blt-      .loc_0x58
	  lha       r0, 0x3F4(r29)
	  cmpw      r5, r0
	  bge-      .loc_0x58
	  li        r3, 0x1

	.loc_0x58:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x74
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x3C
	  li        r4, 0xF70
	  crclr     6, 0x6
	  bl        -0x140658

	.loc_0x74:
	  mr        r3, r29
	  mr        r4, r28
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x168(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA8
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0xD0
	  li        r4, 0xF74
	  crclr     6, 0x6
	  bl        -0x14068C

	.loc_0xA8:
	  extsh     r6, r28
	  cmpwi     r6, 0x80
	  bge-      .loc_0xDC
	  srawi     r4, r6, 0x3
	  li        r3, 0x1
	  subfic    r0, r4, 0xF
	  add       r5, r29, r0
	  rlwinm    r0,r4,3,0,28
	  lbz       r4, 0x3E4(r5)
	  sub       r0, r6, r0
	  slw       r0, r3, r0
	  andc      r0, r4, r0
	  stb       r0, 0x3E4(r5)

	.loc_0xDC:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x15C
	  lbz       r28, 0x2B8(r30)
	  li        r0, 0
	  cmpwi     r28, 0
	  blt-      .loc_0x114
	  cmpwi     r28, 0x7
	  bge-      .loc_0x114
	  li        r0, 0x1

	.loc_0x114:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x130
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x3C
	  li        r4, 0xF7C
	  crclr     6, 0x6
	  bl        -0x140714

	.loc_0x130:
	  rlwinm    r0,r28,2,0,29
	  mr        r3, r30
	  add       r5, r29, r0
	  lwz       r4, 0x3F8(r5)
	  subi      r0, r4, 0x1
	  stw       r0, 0x3F8(r5)
	  bl        -0x216CC
	  lfs       f0, 0x418(r29)
	  fsubs     f0, f0, f1
	  stfs      f0, 0x418(r29)
	  b         .loc_0x168

	.loc_0x15C:
	  lwz       r3, 0x414(r29)
	  subi      r0, r3, 0x1
	  stw       r0, 0x414(r29)

	.loc_0x168:
	  lwz       r4, 0x3F8(r29)
	  lwz       r3, 0x3FC(r29)
	  lwz       r0, 0x400(r29)
	  add       r4, r4, r3
	  lwz       r3, 0x404(r29)
	  add       r4, r4, r0
	  lwz       r0, 0x408(r29)
	  add       r4, r4, r3
	  lwz       r3, 0x40C(r29)
	  add       r4, r4, r0
	  lwz       r0, 0x410(r29)
	  add       r4, r4, r3
	  add.      r4, r4, r0
	  bne-      .loc_0x1C8
	  lwz       r3, 0x398(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x1BC
	  addi      r3, r3, 0x48
	  bl        -0x4FE08
	  li        r0, 0
	  stw       r0, 0x398(r29)

	.loc_0x1BC:
	  lwz       r3, 0x334(r29)
	  li        r4, 0
	  bl        0xCA21C

	.loc_0x1C8:
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
 * Address:	........
 * Size:	00018C
 */
void calcStickSlotLocal__Q24Game6PelletFsR10Vector3<float>(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8016AE10
 * Size:	00021C
 */
void calcStickSlotGlobal__Q24Game6PelletFsR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r5
	  stw       r30, 0x58(r1)
	  mr        r30, r3
	  stw       r29, 0x54(r1)
	  mr        r29, r4
	  extsh     r4, r29
	  cmpwi     r4, 0x270F
	  bne-      .loc_0x44
	  lfs       f0, -0x5A4C(r2)
	  stfs      f0, 0x14(r1)
	  stfs      f0, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  b         .loc_0x1D8

	.loc_0x44:
	  extsh.    r0, r29
	  li        r3, 0
	  blt-      .loc_0x60
	  lha       r0, 0x3F4(r30)
	  cmpw      r4, r0
	  bge-      .loc_0x60
	  li        r3, 0x1

	.loc_0x60:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x84
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1CBC
	  li        r4, 0xFB0
	  subi      r5, r5, 0x1CAC
	  crclr     6, 0x6
	  bl        -0x140850

	.loc_0x84:
	  lha       r5, 0x3F4(r30)
	  lis       r4, 0x4330
	  extsh     r0, r29
	  lwz       r3, 0x35C(r30)
	  xoris     r5, r5, 0x8000
	  stw       r4, 0x20(r1)
	  xoris     r0, r0, 0x8000
	  lfd       f3, -0x5A30(r2)
	  stw       r5, 0x24(r1)
	  lfs       f4, -0x59D8(r2)
	  lfd       f0, 0x20(r1)
	  stw       r0, 0x2C(r1)
	  fsubs     f2, f0, f3
	  lfs       f1, 0x3E0(r30)
	  stw       r4, 0x28(r1)
	  lfs       f0, -0x5A4C(r2)
	  fdivs     f4, f4, f2
	  lfd       f2, 0x28(r1)
	  lfs       f5, 0xB0(r3)
	  fsubs     f2, f2, f3
	  fmadds    f4, f4, f2, f1
	  fmr       f1, f4
	  fcmpo     cr0, f4, f0
	  bge-      .loc_0xE8
	  fneg      f1, f4

	.loc_0xE8:
	  lfs       f2, -0x59D4(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x5A4C(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f1, f1, f2
	  fcmpo     cr0, f4, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f3, f5, f0
	  bge-      .loc_0x144
	  lfs       f0, -0x59D0(r2)
	  fmuls     f0, f4, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x38(r1)
	  lwz       r0, 0x3C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0x15C

	.loc_0x144:
	  fmuls     f0, f4, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x40(r1)
	  lwz       r0, 0x44(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0x15C:
	  fmuls     f1, f5, f0
	  lfs       f0, -0x5A4C(r2)
	  stfs      f3, 0x1C(r1)
	  mr        r3, r30
	  stfs      f1, 0x14(r1)
	  stfs      f0, 0x18(r1)
	  bl        .loc_0x21C
	  lwz       r4, 0x35C(r30)
	  cmpwi     r3, 0
	  lfs       f2, -0x5A48(r2)
	  lfs       f1, 0xC0(r4)
	  lfs       f0, -0x5A50(r2)
	  fmadds    f1, f2, f1, f0
	  bne-      .loc_0x1BC
	  fneg      f0, f1
	  stfs      f0, 0x18(r1)
	  lbz       r0, 0x3D0(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x1D8
	  frsp      f1, f0
	  lfs       f0, -0x5A28(r2)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x18(r1)
	  b         .loc_0x1D8

	.loc_0x1BC:
	  stfs      f1, 0x18(r1)
	  lbz       r0, 0x3D0(r30)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x1D8
	  lfs       f0, -0x5A28(r2)
	  fadds     f0, f1, f0
	  stfs      f0, 0x18(r1)

	.loc_0x1D8:
	  addi      r3, r30, 0x138
	  addi      r4, r1, 0x14
	  addi      r5, r1, 0x8
	  bl        -0x8041C
	  lfs       f1, 0xC(r1)
	  lfs       f2, 0x10(r1)
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x0(r31)
	  stfs      f1, 0x4(r31)
	  stfs      f2, 0x8(r31)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr

	.loc_0x21C:
	*/
}

/*
 * --INFO--
 * Address:	8016B02C
 * Size:	000068
 */
void Game::Pellet::getFace(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  lbz       r0, 0x364(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x20
	  li        r3, 0
	  b         .loc_0x58

	.loc_0x20:
	  addi      r4, r1, 0x8
	  bl        -0x2FD10
	  lfs       f1, 0xC(r1)
	  lfs       f0, -0x5A4C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x40
	  li        r3, 0
	  b         .loc_0x58

	.loc_0x40:
	  lfs       f0, -0x599C(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x54
	  li        r3, 0x1
	  b         .loc_0x58

	.loc_0x54:
	  li        r3, 0x2

	.loc_0x58:
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016B094
 * Size:	0002AC
 */
void Game::Pellet::startPick(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  stw       r30, 0x38(r1)
	  lbz       r0, 0x3D0(r3)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x294
	  lwz       r4, 0x35C(r31)
	  lhz       r0, 0x244(r4)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x44
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1DC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x44:
	  lwz       r0, 0x42C(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x90
	  lbz       r0, 0x434(r31)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0xAC
	  cmplwi    r31, 0
	  mr        r5, r31
	  beq-      .loc_0x6C
	  addi      r5, r31, 0x314

	.loc_0x6C:
	  addi      r3, r31, 0x41C
	  li        r4, 0
	  bl        0x2BDB80
	  lwz       r3, -0x6514(r13)
	  lfs       f1, -0x5A38(r2)
	  lfs       f0, 0x54(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x438(r31)
	  b         .loc_0xAC

	.loc_0x90:
	  lwz       r3, 0x358(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xAC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0xAC:
	  lbz       r0, 0x364(r31)
	  cmplwi    r0, 0x2
	  beq-      .loc_0xC4
	  mr        r3, r31
	  addi      r4, r1, 0x20
	  bl        -0x2FE14

	.loc_0xC4:
	  mr        r3, r31
	  addi      r4, r1, 0x2C
	  bl        -0x2FE20
	  lfs       f3, 0x34(r1)
	  lfs       f2, -0x5A28(r2)
	  lfs       f1, 0x30(r1)
	  lfs       f0, 0x2C(r1)
	  fmuls     f3, f3, f2
	  fmuls     f1, f1, f2
	  fmuls     f0, f0, f2
	  stfs      f3, 0x34(r1)
	  stfs      f0, 0x2C(r1)
	  stfs      f1, 0x30(r1)
	  lbz       r0, 0x364(r31)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x10C
	  li        r0, 0
	  b         .loc_0x148

	.loc_0x10C:
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  bl        -0x2FE68
	  lfs       f1, 0x18(r1)
	  lfs       f0, -0x5A4C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x130
	  li        r0, 0
	  b         .loc_0x148

	.loc_0x130:
	  lfs       f0, -0x599C(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x144
	  li        r0, 0x1
	  b         .loc_0x148

	.loc_0x144:
	  li        r0, 0x2

	.loc_0x148:
	  cmpwi     r0, 0
	  bne-      .loc_0x184
	  lfs       f1, 0x1B0(r31)
	  lfs       f0, 0x2C(r1)
	  fadds     f0, f1, f0
	  stfs      f0, 0x1B0(r31)
	  lfs       f1, 0x1B4(r31)
	  lfs       f0, 0x30(r1)
	  fadds     f0, f1, f0
	  stfs      f0, 0x1B4(r31)
	  lfs       f1, 0x1B8(r31)
	  lfs       f0, 0x34(r1)
	  fadds     f0, f1, f0
	  stfs      f0, 0x1B8(r31)
	  b         .loc_0x1B4

	.loc_0x184:
	  lfs       f1, 0x1B0(r31)
	  lfs       f0, 0x2C(r1)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x1B0(r31)
	  lfs       f1, 0x1B4(r31)
	  lfs       f0, 0x30(r1)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x1B4(r31)
	  lfs       f1, 0x1B8(r31)
	  lfs       f0, 0x34(r1)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x1B8(r31)

	.loc_0x1B4:
	  lwz       r30, 0x178(r31)
	  b         .loc_0x23C

	.loc_0x1BC:
	  lbz       r0, 0x364(r31)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x1D0
	  li        r0, 0
	  b         .loc_0x20C

	.loc_0x1D0:
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        -0x2FF2C
	  lfs       f1, 0xC(r1)
	  lfs       f0, -0x5A4C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1F4
	  li        r0, 0
	  b         .loc_0x20C

	.loc_0x1F4:
	  lfs       f0, -0x599C(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x208
	  li        r0, 0x1
	  b         .loc_0x20C

	.loc_0x208:
	  li        r0, 0x2

	.loc_0x20C:
	  cmpwi     r0, 0
	  bne-      .loc_0x228
	  lfs       f1, 0x4(r30)
	  lfs       f0, -0x5A28(r2)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x4(r30)
	  b         .loc_0x238

	.loc_0x228:
	  lfs       f1, 0x4(r30)
	  lfs       f0, -0x5A28(r2)
	  fadds     f0, f1, f0
	  stfs      f0, 0x4(r30)

	.loc_0x238:
	  lwz       r30, 0x1C(r30)

	.loc_0x23C:
	  cmplwi    r30, 0
	  bne+      .loc_0x1BC
	  lbz       r0, 0x3D0(r31)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x268
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x210(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x288

	.loc_0x268:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x20C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x3D0(r31)
	  ori       r0, r0, 0x2
	  stb       r0, 0x3D0(r31)

	.loc_0x288:
	  lbz       r0, 0x3D0(r31)
	  ori       r0, r0, 0x1
	  stb       r0, 0x3D0(r31)

	.loc_0x294:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016B340
 * Size:	000004
 */
void Game::Pellet::sound_otakaraEventRestart(void) { }

/*
 * --INFO--
 * Address:	8016B344
 * Size:	00017C
 */
void Game::Pellet::endPick((bool))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  mr        r30, r4
	  lbz       r0, 0x3D0(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x164
	  lwz       r3, 0x334(r31)
	  bl        0xC9BB8
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x3D4(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x214(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r30,0,24,31
	  bne-      .loc_0xB0
	  lwz       r0, 0x42C(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  lbz       r0, 0x434(r31)
	  ori       r0, r0, 0x2
	  stb       r0, 0x434(r31)
	  b         .loc_0x8C

	.loc_0x70:
	  lwz       r3, 0x358(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x8C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x8C:
	  lwz       r3, 0x35C(r31)
	  lhz       r0, 0x244(r3)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0xB0
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1E0(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB0:
	  lbz       r0, 0x3D0(r31)
	  rlwinm    r0,r0,0,24,30
	  stb       r0, 0x3D0(r31)
	  lbz       r0, 0x364(r31)
	  cmplwi    r0, 0x2
	  beq-      .loc_0xD4
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  bl        -0x300D4

	.loc_0xD4:
	  lwz       r30, 0x178(r31)
	  b         .loc_0x15C

	.loc_0xDC:
	  lbz       r0, 0x364(r31)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xF0
	  li        r0, 0
	  b         .loc_0x12C

	.loc_0xF0:
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        -0x300FC
	  lfs       f1, 0xC(r1)
	  lfs       f0, -0x5A4C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x114
	  li        r0, 0
	  b         .loc_0x12C

	.loc_0x114:
	  lfs       f0, -0x599C(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x128
	  li        r0, 0x1
	  b         .loc_0x12C

	.loc_0x128:
	  li        r0, 0x2

	.loc_0x12C:
	  cmpwi     r0, 0
	  bne-      .loc_0x148
	  lfs       f1, 0x4(r30)
	  lfs       f0, -0x5A28(r2)
	  fadds     f0, f1, f0
	  stfs      f0, 0x4(r30)
	  b         .loc_0x158

	.loc_0x148:
	  lfs       f1, 0x4(r30)
	  lfs       f0, -0x5A28(r2)
	  fsubs     f0, f1, f0
	  stfs      f0, 0x4(r30)

	.loc_0x158:
	  lwz       r30, 0x1C(r30)

	.loc_0x15C:
	  cmplwi    r30, 0
	  bne+      .loc_0xDC

	.loc_0x164:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016B4C0
 * Size:	000004
 */
void Game::Pellet::sound_otakaraEventStop(void) { }

/*
 * --INFO--
 * Address:	8016B4C4
 * Size:	00000C
 */
void Game::Pellet::clearDiscoverDisable(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stb       r0, 0x32D(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016B4D0
 * Size:	000008
 */
void Game::Pellet::startDiscoverDisable((unsigned char))
{
	/*
	.loc_0x0:
	  stb       r4, 0x32D(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016B4D8
 * Size:	000018
 */
void Game::Pellet::updateDiscoverDisable(void)
{
	/*
	.loc_0x0:
	  lbz       r4, 0x32D(r3)
	  cmplwi    r4, 0
	  beqlr-
	  subi      r0, r4, 0x1
	  stb       r0, 0x32D(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016B4F0
 * Size:	00002C
 */
void Game::Pellet::discoverDisabled(void)
{
	/*
	.loc_0x0:
	  lwz       r4, -0x6C18(r13)
	  lwz       r0, 0x44(r4)
	  cmpwi     r0, 0
	  bne-      .loc_0x24
	  lbz       r3, 0x32D(r3)
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  blr

	.loc_0x24:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016B51C
 * Size:	00002C
 */
void Game::Pellet::doSave((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lbz       r0, 0x3C4(r3)
	  mr        r3, r4
	  mr        r4, r0
	  bl        0x2AA13C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016B548
 * Size:	0001DC
 */
void Game::Pellet::doLoad((Stream&))
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
	  stw       r31, 0x6C(r1)
	  stw       r30, 0x68(r1)
	  stw       r29, 0x64(r1)
	  stw       r28, 0x60(r1)
	  mr        r31, r3
	  mr        r3, r4
	  bl        0x2A8F18
	  rlwinm    r5,r3,0,24,31
	  mr        r4, r31
	  neg       r0, r5
	  addi      r3, r1, 0xC
	  or        r0, r0, r5
	  rlwinm    r0,r0,1,31,31
	  stb       r0, 0x3C4(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f29, 0xC(r1)
	  li        r0, 0
	  lfs       f31, 0x10(r1)
	  addi      r4, r1, 0x3C
	  lfs       f30, 0x14(r1)
	  lfs       f0, -0x59CC(r2)
	  stfs      f29, 0x3C(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f31, 0x40(r1)
	  stfs      f30, 0x44(r1)
	  stw       r0, 0x48(r1)
	  stb       r0, 0x4C(r1)
	  stfs      f0, 0x50(r1)
	  lwz       r3, 0x8(r3)
	  bl        0x79D8
	  mr        r30, r3
	  li        r29, 0
	  li        r28, 0

	.loc_0xB4:
	  lwz       r3, -0x6CD0(r13)
	  mr        r4, r28
	  bl        0x10498
	  cmplwi    r3, 0
	  beq-      .loc_0xD8
	  lwz       r0, 0x23C(r3)
	  cmplw     r30, r0
	  bne-      .loc_0xD8
	  li        r29, 0x1

	.loc_0xD8:
	  addi      r28, r28, 0x1
	  cmpwi     r28, 0x3
	  blt+      .loc_0xB4
	  lwz       r3, -0x6CD0(r13)
	  lwz       r3, 0xB0(r3)
	  lwz       r0, 0x23C(r3)
	  cmplw     r0, r30
	  bne-      .loc_0xFC
	  li        r29, 0x1

	.loc_0xFC:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x1A4
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r0, r4, 0x1F64
	  lfs       f0, -0x59CC(r2)
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x1F58
	  lis       r3, 0x804B
	  addi      r5, r1, 0x8
	  stw       r0, 0x8(r1)
	  addi      r4, r3, 0x1F40
	  li        r0, 0
	  lwz       r3, -0x6CF8(r13)
	  stw       r4, 0x8(r1)
	  addi      r4, r1, 0x24
	  stfs      f29, 0x24(r1)
	  stfs      f31, 0x28(r1)
	  stfs      f30, 0x2C(r1)
	  stw       r5, 0x30(r1)
	  stb       r0, 0x34(r1)
	  stfs      f0, 0x38(r1)
	  lwz       r3, 0x8(r3)
	  bl        0x7924
	  cmplwi    r3, 0
	  beq-      .loc_0x1A4
	  lfs       f2, 0x50(r3)
	  addi      r4, r1, 0x18
	  lfs       f3, 0x54(r3)
	  li        r5, 0
	  lfs       f0, 0x4C(r3)
	  mr        r3, r31
	  lfs       f1, -0x5A48(r2)
	  stfs      f0, 0x18(r1)
	  stfs      f2, 0x1C(r1)
	  stfs      f3, 0x20(r1)
	  lwz       r6, 0x35C(r31)
	  lfs       f0, 0xC0(r6)
	  fmuls     f0, f1, f0
	  fadds     f0, f2, f0
	  stfs      f0, 0x1C(r1)
	  bl        -0x30540

	.loc_0x1A4:
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  lwz       r31, 0x6C(r1)
	  lwz       r30, 0x68(r1)
	  lwz       r29, 0x64(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r28, 0x60(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016B724
 * Size:	0000F4
 */
void Game::Pellet::onStartCapture(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x5A4C(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0xB8(r3)
	  lfs       f1, 0xC(r3)
	  lfs       f2, 0x1C(r3)
	  lfs       f3, 0x2C(r3)
	  stfs      f0, 0x1BC(r31)
	  stfs      f0, 0x1C0(r31)
	  stfs      f0, 0x1C4(r31)
	  stfs      f1, 0x1B0(r31)
	  stfs      f2, 0x1B4(r31)
	  stfs      f3, 0x1B8(r31)
	  stfs      f1, 0x444(r31)
	  stfs      f2, 0x448(r31)
	  stfs      f3, 0x44C(r31)
	  stfs      f1, 0x3AC(r31)
	  stfs      f2, 0x3B0(r31)
	  stfs      f3, 0x3B4(r31)
	  lwz       r0, 0x174(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xCC
	  addi      r3, r31, 0x138
	  addi      r4, r31, 0x3AC
	  bl        0x2BD0B0
	  lwz       r4, 0x174(r31)
	  addi      r3, r31, 0x138
	  lwz       r4, 0x8(r4)
	  addi      r4, r4, 0x24
	  bl        -0x814D8
	  lwz       r3, 0x174(r31)
	  lfs       f0, 0x168(r31)
	  lwz       r3, 0x8(r3)
	  stfs      f0, 0x18(r3)
	  lfs       f0, 0x16C(r31)
	  stfs      f0, 0x1C(r3)
	  lfs       f0, 0x170(r31)
	  stfs      f0, 0x20(r3)
	  lwz       r3, 0x174(r31)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x114(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xCC
	  bl        -0x35D50

	.loc_0xCC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1E0(r12)
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
 * Address:	........
 * Size:	00001C
 */
void Game::Pellet::getCurrentBuryDepth(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8016B818
 * Size:	000110
 */
void Game::Pellet::onUpdateCapture((Matrixf&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r0, 0x42C(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3C
	  addi      r3, r30, 0x41C
	  lfs       f1, -0x5A4C(r2)
	  lwz       r12, 0x41C(r30)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3C:
	  lwz       r31, 0x174(r30)
	  cmplwi    r31, 0
	  beq-      .loc_0x70
	  addi      r3, r30, 0x41C
	  lwz       r12, 0x41C(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x8(r31)
	  lwz       r4, 0x4(r4)
	  lwz       r4, 0x28(r4)
	  lwz       r4, 0x0(r4)
	  stw       r3, 0x54(r4)

	.loc_0x70:
	  lwz       r0, 0x358(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xDC
	  lwz       r3, 0x174(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0xE4
	  lwz       r4, 0x8(r3)
	  addi      r3, r30, 0x138
	  addi      r4, r4, 0x24
	  bl        -0x815E0
	  lwz       r3, 0x174(r30)
	  lfs       f0, 0x168(r30)
	  lwz       r3, 0x8(r3)
	  stfs      f0, 0x18(r3)
	  lfs       f0, 0x16C(r30)
	  stfs      f0, 0x1C(r3)
	  lfs       f0, 0x170(r30)
	  stfs      f0, 0x20(r3)
	  lwz       r3, 0x174(r30)
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x114(r30)
	  bl        -0x35E50
	  b         .loc_0xE4

	.loc_0xDC:
	  lwz       r3, 0x114(r30)
	  bl        -0x35E5C

	.loc_0xE4:
	  lbz       r0, 0x32C(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xF8
	  li        r0, 0x5A
	  stb       r0, 0x32D(r30)

	.loc_0xF8:
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
 * Address:	8016B928
 * Size:	000098
 */
void Game::Pellet::onEndCapture(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  addi      r4, r1, 0x8
	  stw       r31, 0x3C(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x138
	  bl        -0x81678
	  li        r0, 0x1
	  mr        r3, r31
	  stb       r0, 0x3C4(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1DC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  addi      r4, r31, 0x1B0
	  li        r5, 0
	  bl        -0x307C8
	  mr        r3, r31
	  addi      r4, r31, 0x3AC
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x1FC(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x364(r31)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x78
	  addi      r3, r1, 0x8
	  bl        -0x816FC

	.loc_0x78:
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        -0x34DC
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016B9C0
 * Size:	000270
 */
void Game::BasePelletMgr::__ct((Game::PelletList::cKind))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  extsh.    r0, r4
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  beq-      .loc_0x30
	  addi      r0, r30, 0x54
	  stw       r0, 0x4(r30)

	.loc_0x30:
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x4A10
	  addi      r31, r30, 0x18
	  stw       r0, 0x0(r30)
	  addi      r0, r3, 0x1CDC
	  mr        r3, r31
	  stw       r0, 0x0(r30)
	  bl        0x6440
	  lis       r4, 0x804B
	  mr        r3, r29
	  addi      r4, r4, 0x1EB4
	  stw       r4, 0x0(r31)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r31)
	  bl        0xBC330
	  stw       r3, 0x8(r30)
	  lwz       r3, 0x8(r30)
	  lwz       r31, 0x18(r3)
	  rlwinm    r29,r31,2,0,29
	  stw       r31, 0x50(r30)
	  mr        r3, r29
	  bl        -0x147A9C
	  stw       r3, 0xC(r30)
	  mr        r3, r29
	  bl        -0x147AA8
	  stw       r3, 0x10(r30)
	  mr        r3, r29
	  bl        -0x147AB4
	  stw       r3, 0x14(r30)
	  mr        r3, r31
	  bl        -0x147AC0
	  stw       r3, 0x4C(r30)
	  li        r5, 0
	  li        r4, 0x1
	  li        r0, 0
	  mtctr     r31
	  cmpwi     r31, 0
	  ble-      .loc_0xF4

	.loc_0xCC:
	  lbz       r3, -0x6CDC(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xE4
	  lwz       r3, 0x4C(r30)
	  stbx      r4, r3, r5
	  b         .loc_0xEC

	.loc_0xE4:
	  lwz       r3, 0x4C(r30)
	  stbx      r0, r3, r5

	.loc_0xEC:
	  addi      r5, r5, 0x1
	  bdnz+     .loc_0xCC

	.loc_0xF4:
	  cmpwi     r31, 0
	  li        r4, 0
	  ble-      .loc_0x248
	  cmpwi     r31, 0x8
	  subi      r5, r31, 0x8
	  ble-      .loc_0x210
	  addi      r0, r5, 0x7
	  li        r3, 0
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmpwi     r5, 0
	  ble-      .loc_0x210

	.loc_0x124:
	  lwz       r5, 0xC(r30)
	  li        r0, 0
	  addi      r12, r3, 0x4
	  addi      r11, r3, 0x8
	  stwx      r0, r5, r3
	  addi      r10, r3, 0xC
	  addi      r9, r3, 0x10
	  addi      r8, r3, 0x14
	  lwz       r5, 0x10(r30)
	  addi      r7, r3, 0x18
	  addi      r6, r3, 0x1C
	  addi      r4, r4, 0x8
	  stwx      r0, r5, r3
	  lwz       r5, 0x14(r30)
	  stwx      r0, r5, r3
	  addi      r3, r3, 0x20
	  lwz       r5, 0xC(r30)
	  stwx      r0, r5, r12
	  lwz       r5, 0x10(r30)
	  stwx      r0, r5, r12
	  lwz       r5, 0x14(r30)
	  stwx      r0, r5, r12
	  lwz       r5, 0xC(r30)
	  stwx      r0, r5, r11
	  lwz       r5, 0x10(r30)
	  stwx      r0, r5, r11
	  lwz       r5, 0x14(r30)
	  stwx      r0, r5, r11
	  lwz       r5, 0xC(r30)
	  stwx      r0, r5, r10
	  lwz       r5, 0x10(r30)
	  stwx      r0, r5, r10
	  lwz       r5, 0x14(r30)
	  stwx      r0, r5, r10
	  lwz       r5, 0xC(r30)
	  stwx      r0, r5, r9
	  lwz       r5, 0x10(r30)
	  stwx      r0, r5, r9
	  lwz       r5, 0x14(r30)
	  stwx      r0, r5, r9
	  lwz       r5, 0xC(r30)
	  stwx      r0, r5, r8
	  lwz       r5, 0x10(r30)
	  stwx      r0, r5, r8
	  lwz       r5, 0x14(r30)
	  stwx      r0, r5, r8
	  lwz       r5, 0xC(r30)
	  stwx      r0, r5, r7
	  lwz       r5, 0x10(r30)
	  stwx      r0, r5, r7
	  lwz       r5, 0x14(r30)
	  stwx      r0, r5, r7
	  lwz       r5, 0xC(r30)
	  stwx      r0, r5, r6
	  lwz       r5, 0x10(r30)
	  stwx      r0, r5, r6
	  lwz       r5, 0x14(r30)
	  stwx      r0, r5, r6
	  bdnz+     .loc_0x124

	.loc_0x210:
	  sub       r0, r31, r4
	  rlwinm    r6,r4,2,0,29
	  li        r5, 0
	  mtctr     r0
	  cmpw      r4, r31
	  bge-      .loc_0x248

	.loc_0x228:
	  lwz       r3, 0xC(r30)
	  stwx      r5, r3, r6
	  lwz       r3, 0x10(r30)
	  stwx      r5, r3, r6
	  lwz       r3, 0x14(r30)
	  stwx      r5, r3, r6
	  addi      r6, r6, 0x4
	  bdnz+     .loc_0x228

	.loc_0x248:
	  li        r0, 0
	  mr        r3, r30
	  stw       r0, 0x48(r30)
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
 * Address:	8016BC30
 * Size:	0000B8
 */
void CollPartMgr::~CollPartMgr()
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
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  addi      r4, r4, 0x1EB4
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x8C
	  lis       r4, 0x804B
	  addi      r4, r4, 0x1E28
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x8C
	  lis       r4, 0x804B
	  addi      r4, r4, 0x1DAC
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x8C
	  lis       r4, 0x804B
	  addi      r0, r4, 0x1D80
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x8C
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x2A58D0

	.loc_0x8C:
	  extsh.    r0, r31
	  ble-      .loc_0x9C
	  mr        r3, r30
	  bl        -0x147C14

	.loc_0x9C:
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
 * Address:	8016BCE8
 * Size:	0000A0
 */
void MonoObjectMgr<CollPart>::~MonoObjectMgr()
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
	  lis       r4, 0x804B
	  addi      r4, r4, 0x1E28
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x74
	  lis       r4, 0x804B
	  addi      r4, r4, 0x1DAC
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x74
	  lis       r4, 0x804B
	  addi      r0, r4, 0x1D80
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x74
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x2A5830

	.loc_0x74:
	  extsh.    r0, r31
	  ble-      .loc_0x84
	  mr        r3, r30
	  bl        -0x147CB4

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
 * Address:	8016BD88
 * Size:	000030
 */
void Game::BasePelletMgr::getPelletConfig((int))
{
	/*
	.loc_0x0:
	  cmpwi     r4, 0
	  blt-      .loc_0x18
	  lwz       r3, 0x8(r3)
	  lwz       r0, 0x18(r3)
	  cmpw      r4, r0
	  blt-      .loc_0x20

	.loc_0x18:
	  li        r3, 0
	  blr

	.loc_0x20:
	  mulli     r0, r4, 0x260
	  lwz       r3, 0x1C(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016BDB8
 * Size:	00007C
 */
void Game::BasePelletMgr::setUse((int))
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
	  li        r3, 0
	  blt-      .loc_0x34
	  lwz       r0, 0x50(r30)
	  cmpw      r31, r0
	  bge-      .loc_0x34
	  li        r3, 0x1

	.loc_0x34:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x58
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1CBC
	  li        r4, 0x1143
	  subi      r5, r5, 0x1CAC
	  crclr     6, 0x6
	  bl        -0x1417CC

	.loc_0x58:
	  lwz       r3, 0x4C(r30)
	  li        r0, 0x1
	  stbx      r0, r3, r31
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
 * Address:	........
 * Size:	000078
 */
void Game::BasePelletMgr::used((int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void Game::BasePelletMgr::setUseFlagAll((bool))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8016BE34
 * Size:	000298
 */
void Game::BasePelletMgr::load(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x430(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  lis       r5, 0x8048
	  stw       r0, 0x434(r1)
	  addi      r4, r4, 0x41FC
	  stmw      r23, 0x40C(r1)
	  mr        r23, r3
	  subi      r31, r5, 0x1CE8
	  li        r28, 0
	  lwz       r0, 0x158(r4)
	  cmpwi     r0, 0
	  beq-      .loc_0xC0
	  lwz       r3, -0x6514(r13)
	  lwz       r0, 0xD4(r3)
	  cmpwi     r0, 0x4
	  beq-      .loc_0xA4
	  bge-      .loc_0x60
	  cmpwi     r0, 0
	  beq-      .loc_0x88
	  blt-      .loc_0xC4
	  cmpwi     r0, 0x3
	  bge-      .loc_0xC4
	  b         .loc_0xA4

	.loc_0x60:
	  cmpwi     r0, 0x6
	  beq-      .loc_0xA4
	  bge-      .loc_0xC4
	  addi      r3, r1, 0x208
	  addi      r4, r31, 0xE0
	  subi      r5, r2, 0x5998
	  crclr     6, 0x6
	  bl        -0xA4A78
	  addi      r28, r1, 0x208
	  b         .loc_0xC4

	.loc_0x88:
	  addi      r3, r1, 0x208
	  addi      r4, r31, 0xE0
	  subi      r5, r2, 0x5994
	  crclr     6, 0x6
	  bl        -0xA4A94
	  addi      r28, r1, 0x208
	  b         .loc_0xC4

	.loc_0xA4:
	  addi      r3, r1, 0x208
	  addi      r4, r31, 0xE0
	  subi      r5, r2, 0x5990
	  crclr     6, 0x6
	  bl        -0xA4AB0
	  addi      r28, r1, 0x208
	  b         .loc_0xC4

	.loc_0xC0:
	  addi      r28, r31, 0xF8

	.loc_0xC4:
	  li        r30, 0
	  li        r27, 0
	  mr        r29, r30
	  b         .loc_0x274

	.loc_0xD4:
	  lwz       r0, 0x1C(r3)
	  li        r25, 0
	  subi      r3, r2, 0x598C
	  add       r26, r0, r30
	  sth       r27, 0x258(r26)
	  lwz       r4, 0x50(r26)
	  bl        -0xA1860
	  cmpwi     r3, 0
	  beq-      .loc_0x128
	  lwz       r6, 0x50(r26)
	  mr        r5, r28
	  addi      r3, r1, 0x8
	  subi      r4, r2, 0x5984
	  crclr     6, 0x6
	  bl        -0xA4B08
	  addi      r3, r1, 0x8
	  li        r4, 0x1
	  li        r5, 0
	  li        r6, 0x1
	  bl        -0x150E24
	  mr        r25, r3

	.loc_0x128:
	  lwz       r4, 0x70(r26)
	  li        r24, 0
	  subi      r3, r2, 0x598C
	  bl        -0xA18A8
	  cmpwi     r3, 0
	  bne-      .loc_0x150
	  lwz       r3, 0xC(r23)
	  li        r0, 0
	  stwx      r0, r3, r29
	  b         .loc_0x200

	.loc_0x150:
	  lwz       r5, 0x70(r26)
	  addi      r3, r1, 0x8
	  subi      r4, r2, 0x597C
	  crclr     6, 0x6
	  bl        -0xA4B5C
	  addi      r3, r1, 0x8
	  li        r4, 0
	  bl        -0x148F88
	  mr.       r24, r3
	  bne-      .loc_0x190
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x10C
	  addi      r6, r1, 0x8
	  li        r4, 0x11D0
	  crclr     6, 0x6
	  bl        -0x141980

	.loc_0x190:
	  lhz       r0, 0x244(r26)
	  lis       r3, 0x2102
	  addi      r4, r3, 0x10
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x1A8
	  ori       r4, r4, 0x20

	.loc_0x1A8:
	  mr        r3, r24
	  bl        -0xFC74C
	  lhz       r0, 0x244(r26)
	  mr        r24, r3
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x1F8
	  li        r4, 0
	  b         .loc_0x1E8

	.loc_0x1C8:
	  lwz       r3, 0x80(r24)
	  rlwinm    r0,r4,2,14,29
	  addi      r4, r4, 0x1
	  lwzx      r3, r3, r0
	  lwz       r0, 0xC(r3)
	  rlwinm    r0,r0,0,20,15
	  ori       r0, r0, 0x2000
	  stw       r0, 0xC(r3)

	.loc_0x1E8:
	  lhz       r0, 0x7C(r24)
	  rlwinm    r3,r4,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x1C8

	.loc_0x1F8:
	  lwz       r3, 0xC(r23)
	  stwx      r24, r3, r29

	.loc_0x200:
	  lwz       r6, 0x80(r26)
	  cmplwi    r6, 0
	  beq-      .loc_0x238
	  mr        r5, r28
	  addi      r3, r1, 0x8
	  subi      r4, r2, 0x5984
	  crclr     6, 0x6
	  bl        -0xA4C18
	  mr        r4, r24
	  mr        r5, r25
	  addi      r3, r1, 0x8
	  bl        0x2BDA48
	  lwz       r4, 0x10(r23)
	  stwx      r3, r4, r29

	.loc_0x238:
	  lwz       r6, 0x90(r26)
	  cmplwi    r6, 0
	  beq-      .loc_0x268
	  mr        r5, r28
	  addi      r3, r1, 0x8
	  subi      r4, r2, 0x5984
	  crclr     6, 0x6
	  bl        -0xA4C50
	  addi      r3, r1, 0x8
	  bl        -0x3389C
	  lwz       r4, 0x14(r23)
	  stwx      r3, r4, r29

	.loc_0x268:
	  addi      r30, r30, 0x260
	  addi      r29, r29, 0x4
	  addi      r27, r27, 0x1

	.loc_0x274:
	  lwz       r3, 0x8(r23)
	  lwz       r0, 0x18(r3)
	  cmpw      r27, r0
	  blt+      .loc_0xD4
	  lmw       r23, 0x40C(r1)
	  lwz       r0, 0x434(r1)
	  mtlr      r0
	  addi      r1, r1, 0x430
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016C0CC
 * Size:	0003E4
 */
void Game::BasePelletMgr::load_texArc((char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x430(r1)
	  mflr      r0
	  lis       r5, 0x8051
	  lis       r6, 0x8048
	  stw       r0, 0x434(r1)
	  addi      r5, r5, 0x41FC
	  stmw      r22, 0x408(r1)
	  mr        r31, r3
	  mr        r22, r4
	  subi      r30, r6, 0x1CE8
	  li        r24, 0
	  lwz       r0, 0x158(r5)
	  cmpwi     r0, 0
	  beq-      .loc_0xC4
	  lwz       r3, -0x6514(r13)
	  lwz       r0, 0xD4(r3)
	  cmpwi     r0, 0x4
	  beq-      .loc_0xA8
	  bge-      .loc_0x64
	  cmpwi     r0, 0
	  beq-      .loc_0x8C
	  blt-      .loc_0xC8
	  cmpwi     r0, 0x3
	  bge-      .loc_0xC8
	  b         .loc_0xA8

	.loc_0x64:
	  cmpwi     r0, 0x6
	  beq-      .loc_0xA8
	  bge-      .loc_0xC8
	  addi      r3, r1, 0x208
	  addi      r4, r30, 0xE0
	  subi      r5, r2, 0x5998
	  crclr     6, 0x6
	  bl        -0xA4D14
	  addi      r24, r1, 0x208
	  b         .loc_0xC8

	.loc_0x8C:
	  addi      r3, r1, 0x208
	  addi      r4, r30, 0xE0
	  subi      r5, r2, 0x5994
	  crclr     6, 0x6
	  bl        -0xA4D30
	  addi      r24, r1, 0x208
	  b         .loc_0xC8

	.loc_0xA8:
	  addi      r3, r1, 0x208
	  addi      r4, r30, 0xE0
	  subi      r5, r2, 0x5990
	  crclr     6, 0x6
	  bl        -0xA4D4C
	  addi      r24, r1, 0x208
	  b         .loc_0xC8

	.loc_0xC4:
	  addi      r24, r30, 0xF8

	.loc_0xC8:
	  mr        r5, r24
	  mr        r6, r22
	  addi      r3, r1, 0x8
	  subi      r4, r2, 0x5984
	  crclr     6, 0x6
	  bl        -0xA4D70
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        .loc_0x3E4
	  mr.       r27, r3
	  bne-      .loc_0x10C
	  addi      r3, r30, 0x2C
	  addi      r5, r30, 0x128
	  addi      r6, r1, 0x8
	  li        r4, 0x1278
	  crclr     6, 0x6
	  bl        -0x141B94

	.loc_0x10C:
	  li        r29, 0
	  li        r26, 0
	  mr        r28, r29
	  b         .loc_0x3B4

	.loc_0x11C:
	  lwz       r0, 0x1C(r3)
	  cmpwi     r26, 0
	  li        r3, 0
	  add       r25, r0, r29
	  blt-      .loc_0x140
	  lwz       r0, 0x50(r31)
	  cmpw      r26, r0
	  bge-      .loc_0x140
	  li        r3, 0x1

	.loc_0x140:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x15C
	  addi      r3, r30, 0x2C
	  addi      r5, r30, 0x3C
	  li        r4, 0x1149
	  crclr     6, 0x6
	  bl        -0x141BE4

	.loc_0x15C:
	  lwz       r3, 0x4C(r31)
	  lbzx      r0, r3, r26
	  cmplwi    r0, 0
	  beq-      .loc_0x3A8
	  sth       r26, 0x258(r25)
	  li        r23, 0
	  subi      r3, r2, 0x598C
	  lwz       r4, 0x50(r25)
	  bl        -0xA1B88
	  cmpwi     r3, 0
	  beq-      .loc_0x1B8
	  lwz       r6, 0x50(r25)
	  mr        r5, r24
	  addi      r3, r1, 0x8
	  subi      r4, r2, 0x5984
	  crclr     6, 0x6
	  bl        -0xA4E30
	  addi      r3, r1, 0x8
	  li        r4, 0x1
	  li        r5, 0
	  li        r6, 0x1
	  bl        -0x15114C
	  mr        r23, r3

	.loc_0x1B8:
	  lwz       r4, 0x70(r25)
	  li        r22, 0
	  subi      r3, r2, 0x598C
	  bl        -0xA1BD0
	  cmpwi     r3, 0
	  bne-      .loc_0x1E0
	  lwz       r3, 0xC(r31)
	  li        r0, 0
	  stwx      r0, r3, r28
	  b         .loc_0x304

	.loc_0x1E0:
	  cmplwi    r23, 0
	  bne-      .loc_0x1FC
	  addi      r3, r30, 0x2C
	  addi      r5, r30, 0x13C
	  li        r4, 0x12A8
	  crclr     6, 0x6
	  bl        -0x141C84

	.loc_0x1FC:
	  lwz       r5, 0x70(r25)
	  addi      r3, r1, 0x8
	  subi      r4, r2, 0x597C
	  crclr     6, 0x6
	  bl        -0xA4EA0
	  addi      r3, r1, 0x8
	  li        r4, 0
	  bl        -0x1492CC
	  cmplwi    r3, 0
	  mr        r22, r3
	  bne-      .loc_0x260
	  mr        r3, r23
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r23)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r0, r3
	  addi      r3, r30, 0x2C
	  mr        r22, r0
	  addi      r5, r30, 0x150
	  addi      r6, r1, 0x8
	  li        r4, 0x12B2
	  crclr     6, 0x6
	  bl        -0x141CE8

	.loc_0x260:
	  lbz       r0, 0x25A(r25)
	  cmplwi    r0, 0
	  beq-      .loc_0x294
	  lhz       r0, 0x244(r25)
	  lis       r3, 0x2102
	  addi      r4, r3, 0x10
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x284
	  ori       r4, r4, 0x20

	.loc_0x284:
	  mr        r3, r22
	  bl        -0xFCAC0
	  mr        r22, r3
	  b         .loc_0x2B8

	.loc_0x294:
	  lhz       r0, 0x244(r25)
	  lis       r3, 0x2002
	  addi      r4, r3, 0x10
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x2AC
	  ori       r4, r4, 0x20

	.loc_0x2AC:
	  mr        r3, r22
	  bl        -0xFCAE8
	  mr        r22, r3

	.loc_0x2B8:
	  lwz       r3, 0xC(r31)
	  stwx      r22, r3, r28
	  lhz       r0, 0x244(r25)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x304
	  li        r4, 0
	  b         .loc_0x2F4

	.loc_0x2D4:
	  lwz       r3, 0x80(r22)
	  rlwinm    r0,r4,2,14,29
	  addi      r4, r4, 0x1
	  lwzx      r3, r3, r0
	  lwz       r0, 0xC(r3)
	  rlwinm    r0,r0,0,20,15
	  ori       r0, r0, 0x2000
	  stw       r0, 0xC(r3)

	.loc_0x2F4:
	  lhz       r0, 0x7C(r22)
	  rlwinm    r3,r4,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x2D4

	.loc_0x304:
	  lwz       r6, 0x80(r25)
	  cmplwi    r6, 0
	  beq-      .loc_0x374
	  lwz       r5, 0x40(r25)
	  addi      r3, r1, 0x8
	  subi      r4, r2, 0x5978
	  crclr     6, 0x6
	  bl        -0xA4FB4
	  mr        r3, r27
	  mr        r5, r22
	  mr        r6, r23
	  addi      r4, r1, 0x8
	  li        r7, 0
	  bl        0x2D1958
	  lwz       r4, 0x10(r31)
	  stwx      r3, r4, r28
	  lwz       r3, 0x10(r31)
	  lwzx      r0, r3, r28
	  cmplwi    r0, 0
	  bne-      .loc_0x374
	  mr        r3, r27
	  mr        r5, r22
	  mr        r6, r23
	  addi      r4, r1, 0x8
	  li        r7, 0
	  bl        0x2D1928
	  lwz       r4, 0x10(r31)
	  stwx      r3, r4, r28

	.loc_0x374:
	  lwz       r6, 0x90(r25)
	  cmplwi    r6, 0
	  beq-      .loc_0x3A8
	  lwz       r5, 0x40(r25)
	  addi      r3, r1, 0x8
	  subi      r4, r2, 0x5978
	  crclr     6, 0x6
	  bl        -0xA5024
	  mr        r3, r27
	  addi      r4, r1, 0x8
	  bl        -0x33B24
	  lwz       r4, 0x14(r31)
	  stwx      r3, r4, r28

	.loc_0x3A8:
	  addi      r29, r29, 0x260
	  addi      r28, r28, 0x4
	  addi      r26, r26, 0x1

	.loc_0x3B4:
	  lwz       r3, 0x8(r31)
	  lwz       r0, 0x18(r3)
	  cmpw      r26, r0
	  blt+      .loc_0x11C
	  mr        r3, r31
	  mr        r4, r27
	  bl        0x124
	  lmw       r22, 0x408(r1)
	  lwz       r0, 0x434(r1)
	  mtlr      r0
	  addi      r1, r1, 0x430
	  blr

	.loc_0x3E4:
	*/
}

/*
 * --INFO--
 * Address:	8016C4B0
 * Size:	00010C
 */
void Game::BasePelletMgr::openTextArc((char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x410(r1)
	  mflr      r0
	  lis       r3, 0x8051
	  li        r5, 0
	  stw       r0, 0x414(r1)
	  addi      r3, r3, 0x41FC
	  stw       r31, 0x40C(r1)
	  mr        r31, r4
	  lwz       r0, 0x158(r3)
	  cmpwi     r0, 0
	  beq-      .loc_0xC4
	  lwz       r3, -0x6514(r13)
	  lwz       r0, 0xD4(r3)
	  cmpwi     r0, 0x4
	  beq-      .loc_0xA4
	  bge-      .loc_0x58
	  cmpwi     r0, 0
	  beq-      .loc_0x84
	  blt-      .loc_0xD0
	  cmpwi     r0, 0x3
	  bge-      .loc_0xD0
	  b         .loc_0xA4

	.loc_0x58:
	  cmpwi     r0, 0x6
	  beq-      .loc_0xA4
	  bge-      .loc_0xD0
	  lis       r4, 0x8048
	  addi      r3, r1, 0x208
	  subi      r4, r4, 0x1C08
	  subi      r5, r2, 0x5998
	  crclr     6, 0x6
	  bl        -0xA50F0
	  addi      r5, r1, 0x208
	  b         .loc_0xD0

	.loc_0x84:
	  lis       r4, 0x8048
	  addi      r3, r1, 0x208
	  subi      r4, r4, 0x1C08
	  subi      r5, r2, 0x5994
	  crclr     6, 0x6
	  bl        -0xA5110
	  addi      r5, r1, 0x208
	  b         .loc_0xD0

	.loc_0xA4:
	  lis       r4, 0x8048
	  addi      r3, r1, 0x208
	  subi      r4, r4, 0x1C08
	  subi      r5, r2, 0x5990
	  crclr     6, 0x6
	  bl        -0xA5130
	  addi      r5, r1, 0x208
	  b         .loc_0xD0

	.loc_0xC4:
	  lis       r3, 0x8048
	  subi      r0, r3, 0x1BF0
	  mr        r5, r0

	.loc_0xD0:
	  mr        r6, r31
	  addi      r3, r1, 0x8
	  subi      r4, r2, 0x5978
	  crclr     6, 0x6
	  bl        -0xA5158
	  lwz       r5, -0x77D4(r13)
	  addi      r3, r1, 0x8
	  li        r4, 0x1
	  li        r6, 0x2
	  bl        -0x151474
	  lwz       r0, 0x414(r1)
	  lwz       r31, 0x40C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x410
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016C5BC
 * Size:	000030
 */
void Game::BasePelletMgr::closeTextArc((JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016C5EC
 * Size:	0000E4
 */
void Game::BasePelletMgr::useModelMgr((int, unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r28, r3
	  mr        r29, r4
	  mr        r30, r5
	  li        r31, 0x2
	  lwz       r6, -0x6C18(r13)
	  cmplwi    r6, 0
	  beq-      .loc_0x40
	  lwz       r3, 0x58(r6)
	  lwz       r0, 0x114(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x40
	  li        r31, 0x1

	.loc_0x40:
	  li        r3, 0x1C
	  bl        -0x14878C
	  mr.       r27, r3
	  beq-      .loc_0xCC
	  li        r3, 0x14
	  bl        -0x14879C
	  mr.       r9, r3
	  beq-      .loc_0xA8
	  lis       r3, 0x804B
	  lis       r4, 0x804B
	  addi      r7, r3, 0x1AC0
	  lis       r3, 0x804B
	  lwz       r6, 0x0(r7)
	  addi      r4, r4, 0x16BC
	  lwz       r5, 0x4(r7)
	  addi      r0, r3, 0x1D74
	  lwz       r3, 0x8(r7)
	  stw       r6, 0x8(r1)
	  stw       r4, 0x0(r9)
	  stw       r0, 0x0(r9)
	  stw       r28, 0x4(r9)
	  stw       r6, 0x8(r9)
	  stw       r5, 0xC(r9)
	  stw       r5, 0xC(r1)
	  stw       r3, 0x10(r1)
	  stw       r3, 0x10(r9)

	.loc_0xA8:
	  lwz       r4, 0x8(r28)
	  mr        r3, r27
	  lwz       r5, 0xC(r28)
	  mr        r6, r29
	  lwz       r4, 0x18(r4)
	  mr        r7, r30
	  mr        r8, r31
	  bl        0x2BE450
	  mr        r27, r3

	.loc_0xCC:
	  stw       r27, 0x48(r28)
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016C6D0
 * Size:	00002C
 */
void Game::BasePelletMgr::createModelCallback((SysShape::Model*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016C6FC
 * Size:	000004
 */
void Game::BasePelletMgr::onCreateModel((SysShape::Model*)) { }

/*
 * --INFO--
 * Address:	8016C700
 * Size:	0000E4
 */
void Game::BasePelletMgr::createShape((int, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  li        r30, 0x2
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r6, -0x6C18(r13)
	  cmplwi    r6, 0
	  beq-      .loc_0x40
	  lwz       r3, 0x58(r6)
	  lwz       r0, 0x114(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x40
	  li        r30, 0x1

	.loc_0x40:
	  lwz       r3, 0x48(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  bl        0x2BE6B0
	  mr        r30, r3
	  b         .loc_0xC4

	.loc_0x58:
	  lwz       r3, 0xC(r29)
	  rlwinm    r31,r4,2,0,29
	  lwzx      r0, r3, r31
	  cmplwi    r0, 0
	  bne-      .loc_0x8C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  mr        r6, r4
	  li        r4, 0x13C5
	  subi      r3, r3, 0x1CBC
	  subi      r5, r5, 0x1B84
	  crclr     6, 0x6
	  bl        -0x142148

	.loc_0x8C:
	  li        r3, 0x14
	  bl        -0x1488EC
	  mr.       r4, r3
	  beq-      .loc_0xB4
	  lwz       r4, 0xC(r29)
	  mr        r6, r30
	  li        r5, 0
	  lwzx      r4, r4, r31
	  bl        0x2D1A2C
	  mr        r4, r3

	.loc_0xB4:
	  lwz       r3, 0x8(r4)
	  mr        r30, r4
	  li        r4, 0
	  bl        -0x106058

	.loc_0xC4:
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
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
 * Address:	8016C7E4
 * Size:	000158
 */
void Game::BasePelletMgr::setCollTree((Game::Pellet*, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  mr        r30, r4
	  stw       r29, 0x44(r1)
	  mr        r29, r3
	  lwz       r4, 0x174(r4)
	  cmplwi    r4, 0
	  bne-      .loc_0xDC
	  lwz       r3, 0x358(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r5, 0x35C(r30)
	  lis       r4, 0x8051
	  lfsu      f2, 0x41E4(r4)
	  mr        r31, r3
	  lfs       f3, 0xB0(r5)
	  lfs       f1, 0x4(r4)
	  lfs       f0, 0x8(r4)
	  stfs      f2, 0x24(r1)
	  stfs      f1, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  stfs      f3, 0x30(r1)
	  lwz       r3, 0x358(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r5, r3
	  lwz       r3, 0x114(r30)
	  mr        r4, r31
	  addi      r6, r1, 0x24
	  addi      r7, r29, 0x18
	  bl        -0x387C8
	  lwz       r3, 0x114(r30)
	  lwz       r31, 0x0(r3)
	  cmplwi    r31, 0
	  beq-      .loc_0x13C
	  lwz       r4, 0x358(r30)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x20(r31)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x24(r31)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x28(r31)
	  b         .loc_0x13C

	.loc_0xDC:
	  lwz       r3, 0x14(r29)
	  rlwinm    r0,r5,2,0,29
	  lwzx      r5, r3, r0
	  cmplwi    r5, 0
	  beq-      .loc_0x100
	  lwz       r3, 0x114(r30)
	  addi      r6, r29, 0x18
	  bl        -0x38870
	  b         .loc_0x13C

	.loc_0x100:
	  lwz       r5, 0x35C(r30)
	  lis       r3, 0x8051
	  lfsu      f2, 0x41E4(r3)
	  addi      r6, r1, 0x14
	  lfs       f3, 0xA0(r5)
	  addi      r7, r29, 0x18
	  lfs       f1, 0x4(r3)
	  li        r5, 0
	  lfs       f0, 0x8(r3)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  stfs      f3, 0x20(r1)
	  lwz       r3, 0x114(r30)
	  bl        -0x3886C

	.loc_0x13C:
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
 * Address:	8016C93C
 * Size:	000024
 */
void Game::BasePelletMgr::generatorNewPelletParm(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, 0x4
	  stw       r0, 0x14(r1)
	  bl        -0x148AA8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016C960
 * Size:	000008
 */
void Game::BasePelletMgr::generatorGetShape((Game::GenPelletParm*))
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Game::BasePelletMgr::setupSoundViewerAndBas(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8016C968
 * Size:	000018
 */
void Game::PelletIterator::__ct(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  stw       r0, 0x8(r3)
	  stw       r0, 0xC(r3)
	  stw       r0, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016C980
 * Size:	00004C
 */
void Game::PelletIterator::first(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, -0x6CE0(r13)
	  lwz       r0, 0x30(r4)
	  stw       r0, 0x8(r3)
	  lwz       r4, 0x8(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x30
	  lwz       r0, 0x18(r4)
	  stw       r0, 0x4(r3)
	  b         .loc_0x38

	.loc_0x30:
	  li        r0, 0
	  stw       r0, 0x4(r3)

	.loc_0x38:
	  bl        0x14C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016C9CC
 * Size:	000068
 */
void Game::PelletIterator::operator*(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x4(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1CBC
	  li        r4, 0x144D
	  subi      r5, r5, 0x1CAC
	  crclr     6, 0x6
	  bl        -0x1423C4

	.loc_0x3C:
	  lwz       r3, 0x4(r31)
	  lwz       r4, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x88(r12)
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
 * Address:	8016CA34
 * Size:	0000C0
 */
void Game::PelletIterator::next(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lwz       r3, 0x4(r31)
	  lwz       r4, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r31)
	  b         .loc_0x58

	.loc_0x40:
	  lis       r3, 0x8048
	  li        r4, 0x1456
	  subi      r3, r3, 0x1CBC
	  subi      r5, r2, 0x5970
	  crclr     6, 0x6
	  bl        -0x142448

	.loc_0x58:
	  lwz       r3, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xC(r31)
	  cmplw     r0, r3
	  bne-      .loc_0xAC
	  lwz       r3, 0x8(r31)
	  lwz       r0, 0x4(r3)
	  stw       r0, 0x8(r31)
	  lwz       r3, 0x8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xA4
	  lwz       r0, 0x18(r3)
	  mr        r3, r31
	  stw       r0, 0x4(r31)
	  bl        0x34
	  b         .loc_0xAC

	.loc_0xA4:
	  li        r0, 0
	  stw       r0, 0x4(r31)

	.loc_0xAC:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016CAF4
 * Size:	000010
 */
void Game::PelletIterator::isDone(void)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x4(r3)
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016CB04
 * Size:	000350
 */
void Game::PelletIterator::setFirst(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x334
	  lwz       r0, 0x0(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x44
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x90(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r31)
	  b         .loc_0x5C

	.loc_0x44:
	  lis       r3, 0x8048
	  li        r4, 0x1471
	  subi      r3, r3, 0x1CBC
	  subi      r5, r2, 0x5970
	  crclr     6, 0x6
	  bl        -0x14251C

	.loc_0x5C:
	  lwz       r3, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xC(r31)
	  cmplw     r0, r3
	  bne-      .loc_0x33C
	  lwz       r3, 0x8(r31)
	  lwz       r0, 0x4(r3)
	  stw       r0, 0x8(r31)
	  lwz       r3, 0x8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x328
	  lwz       r0, 0x18(r3)
	  stw       r0, 0x4(r31)
	  lwz       r3, 0x4(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x31C
	  lwz       r0, 0x0(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xCC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x90(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r31)
	  b         .loc_0xE4

	.loc_0xCC:
	  lis       r3, 0x8048
	  li        r4, 0x1471
	  subi      r3, r3, 0x1CBC
	  subi      r5, r2, 0x5970
	  crclr     6, 0x6
	  bl        -0x1425A4

	.loc_0xE4:
	  lwz       r3, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xC(r31)
	  cmplw     r0, r3
	  bne-      .loc_0x33C
	  lwz       r3, 0x8(r31)
	  lwz       r0, 0x4(r3)
	  stw       r0, 0x8(r31)
	  lwz       r3, 0x8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x310
	  lwz       r0, 0x18(r3)
	  stw       r0, 0x4(r31)
	  lwz       r3, 0x4(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x304
	  lwz       r0, 0x0(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x154
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x90(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r31)
	  b         .loc_0x16C

	.loc_0x154:
	  lis       r3, 0x8048
	  li        r4, 0x1471
	  subi      r3, r3, 0x1CBC
	  subi      r5, r2, 0x5970
	  crclr     6, 0x6
	  bl        -0x14262C

	.loc_0x16C:
	  lwz       r3, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xC(r31)
	  cmplw     r0, r3
	  bne-      .loc_0x33C
	  lwz       r3, 0x8(r31)
	  lwz       r0, 0x4(r3)
	  stw       r0, 0x8(r31)
	  lwz       r3, 0x8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x2F8
	  lwz       r0, 0x18(r3)
	  stw       r0, 0x4(r31)
	  lwz       r3, 0x4(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x2EC
	  lwz       r0, 0x0(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1DC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x90(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r31)
	  b         .loc_0x1F4

	.loc_0x1DC:
	  lis       r3, 0x8048
	  li        r4, 0x1471
	  subi      r3, r3, 0x1CBC
	  subi      r5, r2, 0x5970
	  crclr     6, 0x6
	  bl        -0x1426B4

	.loc_0x1F4:
	  lwz       r3, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xC(r31)
	  cmplw     r0, r3
	  bne-      .loc_0x33C
	  lwz       r3, 0x8(r31)
	  lwz       r0, 0x4(r3)
	  stw       r0, 0x8(r31)
	  lwz       r3, 0x8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x2E0
	  lwz       r0, 0x18(r3)
	  stw       r0, 0x4(r31)
	  lwz       r3, 0x4(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x2D4
	  lwz       r0, 0x0(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x264
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x90(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r31)
	  b         .loc_0x27C

	.loc_0x264:
	  lis       r3, 0x8048
	  li        r4, 0x1471
	  subi      r3, r3, 0x1CBC
	  subi      r5, r2, 0x5970
	  crclr     6, 0x6
	  bl        -0x14273C

	.loc_0x27C:
	  lwz       r3, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0xC(r31)
	  cmplw     r0, r3
	  bne-      .loc_0x33C
	  lwz       r3, 0x8(r31)
	  bl        .loc_0x350
	  stw       r3, 0x8(r31)
	  lwz       r3, 0x8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x2C8
	  lwz       r0, 0x18(r3)
	  mr        r3, r31
	  stw       r0, 0x4(r31)
	  bl        .loc_0x0
	  b         .loc_0x33C

	.loc_0x2C8:
	  li        r0, 0
	  stw       r0, 0x4(r31)
	  b         .loc_0x33C

	.loc_0x2D4:
	  li        r0, 0
	  stw       r0, 0xC(r31)
	  b         .loc_0x33C

	.loc_0x2E0:
	  li        r0, 0
	  stw       r0, 0x4(r31)
	  b         .loc_0x33C

	.loc_0x2EC:
	  li        r0, 0
	  stw       r0, 0xC(r31)
	  b         .loc_0x33C

	.loc_0x2F8:
	  li        r0, 0
	  stw       r0, 0x4(r31)
	  b         .loc_0x33C

	.loc_0x304:
	  li        r0, 0
	  stw       r0, 0xC(r31)
	  b         .loc_0x33C

	.loc_0x310:
	  li        r0, 0
	  stw       r0, 0x4(r31)
	  b         .loc_0x33C

	.loc_0x31C:
	  li        r0, 0
	  stw       r0, 0xC(r31)
	  b         .loc_0x33C

	.loc_0x328:
	  li        r0, 0
	  stw       r0, 0x4(r31)
	  b         .loc_0x33C

	.loc_0x334:
	  li        r0, 0
	  stw       r0, 0xC(r31)

	.loc_0x33C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x350:
	*/
}

/*
 * --INFO--
 * Address:	8016CE54
 * Size:	000008
 */
void TObjectNode<GenericObjectMgr>::getNext()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016CE5C
 * Size:	0000CC
 */
void Game::PelletMgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  bl        0x2A451C
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5324
	  lis       r5, 0x804B
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0x1CB0
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  stw       r0, 0x0(r31)
	  li        r0, 0
	  addi      r6, r4, 0x1C34
	  addi      r4, r3, 0x1BB4
	  stb       r0, 0x18(r31)
	  subi      r0, r5, 0x4A10
	  addi      r30, r31, 0x20
	  addi      r5, r6, 0x2C
	  stw       r0, 0x1C(r31)
	  addi      r0, r4, 0x2C
	  mr        r3, r30
	  stw       r6, 0x0(r31)
	  stw       r5, 0x1C(r31)
	  stw       r4, 0x0(r31)
	  stw       r0, 0x1C(r31)
	  bl        0x2A44BC
	  lis       r3, 0x804B
	  lis       r4, 0x804B
	  addi      r0, r3, 0x1BA4
	  lis       r3, 0x8048
	  stw       r0, 0x0(r30)
	  addi      r6, r4, 0x1ACC
	  addi      r5, r6, 0x2C
	  subi      r4, r3, 0x1B6C
	  stw       r6, 0x0(r31)
	  li        r0, 0
	  mr        r3, r31
	  stw       r5, 0x1C(r31)
	  stw       r4, 0x14(r31)
	  stb       r0, 0x3C(r31)
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
 * Address:	8016CF28
 * Size:	0000C8
 */
void NodeObjectMgr<GenericObjectMgr>::~NodeObjectMgr()
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
	  beq-      .loc_0xAC
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x20
	  addi      r3, r3, 0x1BB4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x54
	  lis       r4, 0x804B
	  addi      r3, r30, 0x20
	  addi      r0, r4, 0x1BA4
	  li        r4, 0
	  stw       r0, 0x20(r30)
	  bl        0x2A4610

	.loc_0x54:
	  cmplwi    r30, 0
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addi      r3, r3, 0x1C34
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addi      r0, r3, 0x1CB0
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  mr        r3, r30
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x0(r30)
	  bl        0x2A45C8

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x148F1C

	.loc_0xAC:
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
 * Address:	8016CFF0
 * Size:	000060
 */
void TObjectNode<GenericObjectMgr>::~TObjectNode()
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
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  addi      r0, r5, 0x1BA4
	  stw       r0, 0x0(r30)
	  bl        0x2A4568
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x148F7C

	.loc_0x44:
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
 * Address:	8016D050
 * Size:	000088
 */
void ObjectMgr<GenericObjectMgr>::~ObjectMgr()
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
	  beq-      .loc_0x6C
	  lis       r4, 0x804B
	  addi      r4, r4, 0x1C34
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x5C
	  lis       r4, 0x804B
	  addi      r0, r4, 0x1CB0
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x5C
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x2A44E0

	.loc_0x5C:
	  extsh.    r0, r31
	  ble-      .loc_0x6C
	  mr        r3, r30
	  bl        -0x149004

	.loc_0x6C:
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
 * Address:	8016D0D8
 * Size:	000070
 */
void Container<GenericObjectMgr>::~Container()
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
	  beq-      .loc_0x54
	  lis       r4, 0x804B
	  addi      r0, r4, 0x1CB0
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x2A4470

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x149074

	.loc_0x54:
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
 * Size:	0000B8
 */
void Game::PelletMgr::setUseFlagAll((bool))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8016D148
 * Size:	0000F0
 */
void Game::PelletMgr::createManagers((unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0xA4
	  bl        -0x1492BC
	  mr.       r4, r3
	  beq-      .loc_0x30
	  li        r4, 0x1
	  bl        0x8C19C
	  mr        r4, r3

	.loc_0x30:
	  stw       r4, -0x6B08(r13)
	  mr        r3, r31
	  bl        0xDF0
	  li        r3, 0xA4
	  bl        -0x1492E4
	  mr.       r4, r3
	  beq-      .loc_0x58
	  li        r4, 0x1
	  bl        0x8E734
	  mr        r4, r3

	.loc_0x58:
	  stw       r4, -0x6B00(r13)
	  mr        r3, r31
	  bl        0xDC8
	  li        r3, 0xA4
	  bl        -0x14930C
	  mr.       r4, r3
	  beq-      .loc_0x80
	  li        r4, 0x1
	  bl        0x90B04
	  mr        r4, r3

	.loc_0x80:
	  stw       r4, -0x6AF0(r13)
	  mr        r3, r31
	  bl        0xDA0
	  li        r3, 0xA4
	  bl        -0x149334
	  mr.       r4, r3
	  beq-      .loc_0xA8
	  li        r4, 0x1
	  bl        0x93594
	  mr        r4, r3

	.loc_0xA8:
	  stw       r4, -0x6AE0(r13)
	  mr        r3, r31
	  bl        0xD78
	  li        r3, 0xA4
	  bl        -0x14935C
	  mr.       r4, r3
	  beq-      .loc_0xD0
	  li        r4, 0x1
	  bl        0x95E88
	  mr        r4, r3

	.loc_0xD0:
	  stw       r4, -0x6AD8(r13)
	  mr        r3, r31
	  bl        0xD50
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016D238
 * Size:	000080
 */
void Game::PelletMgr::resetMgrs(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6B08(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6B00(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6AF0(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6AD8(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6AE0(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016D2B8
 * Size:	000050
 */
void resetMgr__Q24Game47FixedSizePelletMgr<Game::PelletFruit::Object> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x70
	  lwz       r12, 0x70(r31)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x18
	  lwz       r12, 0x18(r31)
	  lwz       r12, 0x80(r12)
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
 * Address:	8016D308
 * Size:	000050
 */
void resetMgr__Q24Game49FixedSizePelletMgr<Game::PelletCarcass::Object> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x70
	  lwz       r12, 0x70(r31)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x18
	  lwz       r12, 0x18(r31)
	  lwz       r12, 0x80(r12)
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
 * Address:	8016D358
 * Size:	000050
 */
void resetMgr__Q24Game48FixedSizePelletMgr<Game::PelletNumber::Object> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x70
	  lwz       r12, 0x70(r31)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x18
	  lwz       r12, 0x18(r31)
	  lwz       r12, 0x80(r12)
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
 * Address:	8016D3A8
 * Size:	000080
 */
void Game::PelletMgr::setupResources(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6B08(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6B00(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6AF0(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6AE0(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6AD8(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00050C
 */
void calcNearestTreasure__Q24Game9PelletMgrFR10Vector3<float> f(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8016D428
 * Size:	00004C
 */
void Iterator<Game::PelletItem::Object>::isDone()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r31)
	  sub       r0, r3, r0
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016D474
 * Size:	00004C
 */
void Iterator<Game::PelletOtakara::Object>::isDone()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r31)
	  sub       r0, r3, r0
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016D4C0
 * Size:	00021C
 */
void Game::PelletMgr::birth((Game::PelletInitArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr.       r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  li        r3, 0
	  beq-      .loc_0x38
	  lbz       r0, 0x16(r30)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x38
	  li        r3, 0x1

	.loc_0x38:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x5C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1CBC
	  li        r4, 0x1512
	  subi      r5, r5, 0x1CAC
	  crclr     6, 0x6
	  bl        -0x142ED8

	.loc_0x5C:
	  lbz       r4, 0x16(r30)
	  mr        r3, r29
	  bl        0x1BA8
	  mr.       r31, r3
	  bne-      .loc_0x8C
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1CBC
	  li        r4, 0x1514
	  subi      r5, r5, 0x1CAC
	  crclr     6, 0x6
	  bl        -0x142F08

	.loc_0x8C:
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x158
	  cmpwi     r0, 0x1
	  beq-      .loc_0x158
	  lbz       r0, -0x6CDC(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x158
	  lbz       r0, 0x17(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x158
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x8(r30)
	  bl        0x46EA0
	  mr        r4, r3
	  subi      r3, r2, 0x5968
	  lwz       r4, 0x180(r4)
	  bl        -0xA2ED4
	  cmpwi     r3, 0
	  bne-      .loc_0x158
	  lbz       r0, 0x16(r30)
	  lwz       r4, 0x10(r30)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x120
	  lwz       r3, -0x6B70(r13)
	  lwz       r3, 0xB0(r3)
	  addi      r3, r3, 0x4
	  bl        0x77E44
	  lbz       r0, 0x0(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x158
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x8(r30)
	  bl        0x46E50
	  li        r3, 0
	  b         .loc_0x200

	.loc_0x120:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x158
	  lwz       r3, -0x6B70(r13)
	  lwz       r3, 0xB0(r3)
	  addi      r3, r3, 0xC
	  bl        0x77E0C
	  lbz       r0, 0x0(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x158
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x8(r30)
	  bl        0x46E18
	  li        r3, 0
	  b         .loc_0x200

	.loc_0x158:
	  lbz       r0, 0x1F(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x1CC
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x8(r30)
	  bl        0x46DF8
	  lwz       r12, 0x0(r31)
	  mr        r4, r3
	  mr        r3, r31
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  beq-      .loc_0x1C4
	  mr        r3, r31
	  lwz       r4, 0x440(r29)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0x1
	  mr        r3, r29
	  stb       r0, 0x1C(r30)
	  mr        r4, r30
	  bl        -0x326B0
	  mr        r3, r29
	  b         .loc_0x200

	.loc_0x1C4:
	  li        r3, 0
	  b         .loc_0x200

	.loc_0x1CC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr.       r29, r3
	  beq-      .loc_0x1FC
	  lwz       r0, 0x18(r30)
	  mr        r4, r30
	  stw       r0, 0x358(r29)
	  stw       r31, 0x454(r29)
	  bl        -0x326F0

	.loc_0x1FC:
	  mr        r3, r29

	.loc_0x200:
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
 * Address:	8016D6DC
 * Size:	0001AC
 */
void Game::PelletMgr::setUse((Game::PelletInitArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0
	  stw       r30, 0x8(r1)
	  mr.       r30, r4
	  beq-      .loc_0x34
	  lbz       r0, 0x16(r30)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x34
	  li        r3, 0x1

	.loc_0x34:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x58
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1CBC
	  li        r4, 0x159B
	  subi      r5, r5, 0x1CAC
	  crclr     6, 0x6
	  bl        -0x1430F0

	.loc_0x58:
	  lbz       r4, 0x16(r30)
	  mr        r3, r31
	  bl        0x1990
	  mr.       r31, r3
	  bne-      .loc_0x88
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1CBC
	  li        r4, 0x159D
	  subi      r5, r5, 0x1CAC
	  crclr     6, 0x6
	  bl        -0x143120

	.loc_0x88:
	  lwz       r3, -0x6C18(r13)
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x140
	  lbz       r0, 0x17(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x140
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x8(r30)
	  bl        0x46C9C
	  mr        r4, r3
	  subi      r3, r2, 0x5968
	  lwz       r4, 0x180(r4)
	  bl        -0xA30D8
	  cmpwi     r3, 0
	  bne-      .loc_0x140
	  lbz       r0, 0x16(r30)
	  lwz       r4, 0x10(r30)
	  cmplwi    r0, 0x3
	  bne-      .loc_0x108
	  lwz       r3, -0x6B70(r13)
	  lwz       r3, 0xB0(r3)
	  addi      r3, r3, 0x4
	  bl        0x77C40
	  lbz       r0, 0x0(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x140
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x8(r30)
	  bl        0x46C4C
	  li        r3, 0
	  b         .loc_0x194

	.loc_0x108:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x140
	  lwz       r3, -0x6B70(r13)
	  lwz       r3, 0xB0(r3)
	  addi      r3, r3, 0xC
	  bl        0x77C08
	  lbz       r0, 0x0(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x140
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x8(r30)
	  bl        0x46C14
	  li        r3, 0
	  b         .loc_0x194

	.loc_0x140:
	  lwz       r30, 0x10(r30)
	  li        r3, 0
	  cmpwi     r30, 0
	  blt-      .loc_0x160
	  lwz       r0, 0x50(r31)
	  cmpw      r30, r0
	  bge-      .loc_0x160
	  li        r3, 0x1

	.loc_0x160:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x184
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1CBC
	  li        r4, 0x1143
	  subi      r5, r5, 0x1CAC
	  crclr     6, 0x6
	  bl        -0x14321C

	.loc_0x184:
	  lwz       r4, 0x4C(r31)
	  li        r0, 0x1
	  li        r3, 0x1
	  stbx      r0, r4, r30

	.loc_0x194:
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
 * Address:	8016D888
 * Size:	00015C
 */
void Game::PelletMgr::OtakaraItemCode::isNull(void)
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
	  lis       r3, 0x8048
	  lha       r6, 0x0(r29)
	  subi      r31, r3, 0x1CE8
	  extsh.    r0, r6
	  bne-      .loc_0x38
	  li        r3, 0x1
	  b         .loc_0x140

	.loc_0x38:
	  srawi     r0, r6, 0x8
	  li        r30, 0
	  rlwinm    r0,r0,0,24,31
	  cmplwi    r0, 0x3
	  bne-      .loc_0x54
	  lwz       r30, -0x6AE0(r13)
	  b         .loc_0x60

	.loc_0x54:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x60
	  lwz       r30, -0x6AD8(r13)

	.loc_0x60:
	  cmplwi    r30, 0
	  bne-      .loc_0x7C
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x190
	  li        r4, 0x15C6
	  crclr     6, 0x6
	  bl        -0x1432C0

	.loc_0x7C:
	  lha       r6, 0x0(r29)
	  rlwinm.   r7,r6,0,24,31
	  blt-      .loc_0x98
	  lwz       r3, 0x8(r30)
	  lwz       r0, 0x18(r3)
	  cmpw      r7, r0
	  blt-      .loc_0xA0

	.loc_0x98:
	  li        r30, 0
	  b         .loc_0xAC

	.loc_0xA0:
	  mulli     r0, r7, 0x260
	  lwz       r3, 0x1C(r3)
	  add       r30, r3, r0

	.loc_0xAC:
	  cmplwi    r30, 0
	  bne-      .loc_0xC8
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x1A4
	  li        r4, 0x15CA
	  crclr     6, 0x6
	  bl        -0x14330C

	.loc_0xC8:
	  lwz       r4, 0x180(r30)
	  subi      r3, r2, 0x5968
	  bl        -0xA3298
	  cmpwi     r3, 0
	  bne-      .loc_0x13C
	  lha       r3, 0x0(r29)
	  srawi     r0, r3, 0x8
	  rlwinm    r4,r3,0,24,31
	  rlwinm    r0,r0,0,24,31
	  cmplwi    r0, 0x3
	  bne-      .loc_0x118
	  lwz       r3, -0x6B70(r13)
	  lwz       r3, 0xB0(r3)
	  addi      r3, r3, 0x4
	  bl        0x77A78
	  lbz       r0, 0x0(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x13C
	  li        r3, 0x1
	  b         .loc_0x140

	.loc_0x118:
	  lwz       r3, -0x6B70(r13)
	  lwz       r3, 0xB0(r3)
	  addi      r3, r3, 0xC
	  bl        0x77A54
	  lbz       r0, 0x0(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x13C
	  li        r3, 0x1
	  b         .loc_0x140

	.loc_0x13C:
	  li        r3, 0

	.loc_0x140:
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
 * Address:	8016D9E4
 * Size:	0000C8
 */
void Game::PelletMgr::makePelletInitArg((Game::PelletInitArg&, char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r29, r5
	  mr        r28, r4
	  mr        r4, r29
	  lwz       r31, -0x6AE0(r13)
	  lwz       r3, 0x8(r31)
	  bl        0x46A18
	  cmplwi    r3, 0
	  mr        r30, r3
	  bne-      .loc_0x4C
	  lwz       r31, -0x6AD8(r13)
	  mr        r4, r29
	  lwz       r3, 0x8(r31)
	  bl        0x469FC
	  mr        r30, r3

	.loc_0x4C:
	  cmplwi    r30, 0
	  bne-      .loc_0x74
	  lis       r3, 0x8048
	  lis       r4, 0x8048
	  subi      r5, r4, 0x1B18
	  mr        r6, r29
	  subi      r3, r3, 0x1CBC
	  li        r4, 0x15EE
	  crclr     6, 0x6
	  bl        -0x143414

	.loc_0x74:
	  stw       r29, 0x8(r28)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0x16(r28)
	  li        r0, 0
	  mr        r3, r27
	  mr        r4, r28
	  lha       r6, 0x258(r30)
	  mr        r5, r29
	  stw       r6, 0x10(r28)
	  stw       r0, 0x18(r28)
	  bl        .loc_0xC8
	  lmw       r27, 0xC(r1)
	  li        r3, 0x1
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xC8:
	*/
}

/*
 * --INFO--
 * Address:	8016DAAC
 * Size:	0000E4
 */
void Game::PelletMgr::makeVsCarryMinMax((Game::PelletInitArg&, char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lwz       r3, -0x6C18(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0xCC
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0xCC
	  lwz       r3, -0x7B7C(r13)
	  mr        r4, r31
	  bl        -0xA3428
	  cmpwi     r3, 0
	  bne-      .loc_0x5C
	  li        r3, 0x1
	  li        r0, 0x8
	  stw       r3, 0x20(r30)
	  stw       r0, 0x24(r30)
	  b         .loc_0xCC

	.loc_0x5C:
	  lwz       r3, -0x7B80(r13)
	  mr        r4, r31
	  bl        -0xA3450
	  cmpwi     r3, 0
	  bne-      .loc_0x84
	  li        r3, 0x1
	  li        r0, 0x8
	  stw       r3, 0x20(r30)
	  stw       r0, 0x24(r30)
	  b         .loc_0xCC

	.loc_0x84:
	  lwz       r3, -0x7B84(r13)
	  mr        r4, r31
	  bl        -0xA3478
	  cmpwi     r3, 0
	  bne-      .loc_0xAC
	  li        r3, 0x1
	  li        r0, 0x8
	  stw       r3, 0x20(r30)
	  stw       r0, 0x24(r30)
	  b         .loc_0xCC

	.loc_0xAC:
	  lwz       r3, -0x7B88(r13)
	  mr        r4, r31
	  bl        -0xA34A0
	  cmpwi     r3, 0
	  bne-      .loc_0xCC
	  li        r0, 0x1
	  stw       r0, 0x20(r30)
	  stw       r0, 0x24(r30)

	.loc_0xCC:
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
 * Address:	8016DB90
 * Size:	0002EC
 */
void Game::PelletMgr::makePelletInitArg((Game::PelletInitArg&,
                                         Game::PelletMgr::OtakaraItemCode&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r3, 0x8048
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r3, 0x1CE8
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  lha       r6, 0x0(r5)
	  extsh.    r0, r6
	  bne-      .loc_0x40
	  li        r0, 0x1
	  b         .loc_0x148

	.loc_0x40:
	  srawi     r0, r6, 0x8
	  li        r28, 0
	  rlwinm    r0,r0,0,24,31
	  cmplwi    r0, 0x3
	  bne-      .loc_0x5C
	  lwz       r28, -0x6AE0(r13)
	  b         .loc_0x68

	.loc_0x5C:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x68
	  lwz       r28, -0x6AD8(r13)

	.loc_0x68:
	  cmplwi    r28, 0
	  bne-      .loc_0x84
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x190
	  li        r4, 0x15C6
	  crclr     6, 0x6
	  bl        -0x1435D0

	.loc_0x84:
	  lha       r6, 0x0(r30)
	  rlwinm.   r7,r6,0,24,31
	  blt-      .loc_0xA0
	  lwz       r3, 0x8(r28)
	  lwz       r0, 0x18(r3)
	  cmpw      r7, r0
	  blt-      .loc_0xA8

	.loc_0xA0:
	  li        r28, 0
	  b         .loc_0xB4

	.loc_0xA8:
	  mulli     r0, r7, 0x260
	  lwz       r3, 0x1C(r3)
	  add       r28, r3, r0

	.loc_0xB4:
	  cmplwi    r28, 0
	  bne-      .loc_0xD0
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x1A4
	  li        r4, 0x15CA
	  crclr     6, 0x6
	  bl        -0x14361C

	.loc_0xD0:
	  lwz       r4, 0x180(r28)
	  subi      r3, r2, 0x5968
	  bl        -0xA35A8
	  cmpwi     r3, 0
	  bne-      .loc_0x144
	  lha       r3, 0x0(r30)
	  srawi     r0, r3, 0x8
	  rlwinm    r4,r3,0,24,31
	  rlwinm    r0,r0,0,24,31
	  cmplwi    r0, 0x3
	  bne-      .loc_0x120
	  lwz       r3, -0x6B70(r13)
	  lwz       r3, 0xB0(r3)
	  addi      r3, r3, 0x4
	  bl        0x77768
	  lbz       r0, 0x0(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x144
	  li        r0, 0x1
	  b         .loc_0x148

	.loc_0x120:
	  lwz       r3, -0x6B70(r13)
	  lwz       r3, 0xB0(r3)
	  addi      r3, r3, 0xC
	  bl        0x77744
	  lbz       r0, 0x0(r3)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x144
	  li        r0, 0x1
	  b         .loc_0x148

	.loc_0x144:
	  li        r0, 0

	.loc_0x148:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x158
	  li        r3, 0
	  b         .loc_0x2CC

	.loc_0x158:
	  lha       r6, 0x0(r30)
	  li        r28, 0
	  srawi     r0, r6, 0x8
	  rlwinm    r0,r0,0,24,31
	  cmplwi    r0, 0x3
	  bne-      .loc_0x178
	  lwz       r28, -0x6AE0(r13)
	  b         .loc_0x184

	.loc_0x178:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x184
	  lwz       r28, -0x6AD8(r13)

	.loc_0x184:
	  cmplwi    r28, 0
	  bne-      .loc_0x1A0
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x190
	  li        r4, 0x1628
	  crclr     6, 0x6
	  bl        -0x1436EC

	.loc_0x1A0:
	  lha       r6, 0x0(r30)
	  rlwinm.   r7,r6,0,24,31
	  blt-      .loc_0x1BC
	  lwz       r3, 0x8(r28)
	  lwz       r0, 0x18(r3)
	  cmpw      r7, r0
	  blt-      .loc_0x1C4

	.loc_0x1BC:
	  li        r28, 0
	  b         .loc_0x1D0

	.loc_0x1C4:
	  mulli     r0, r7, 0x260
	  lwz       r3, 0x1C(r3)
	  add       r28, r3, r0

	.loc_0x1D0:
	  cmplwi    r28, 0
	  bne-      .loc_0x1EC
	  addi      r3, r31, 0x2C
	  addi      r5, r31, 0x1A4
	  li        r4, 0x162C
	  crclr     6, 0x6
	  bl        -0x143738

	.loc_0x1EC:
	  lwz       r3, 0x40(r28)
	  li        r0, 0
	  stw       r3, 0x8(r29)
	  lha       r3, 0x0(r30)
	  srawi     r3, r3, 0x8
	  stb       r3, 0x16(r29)
	  lha       r3, 0x0(r30)
	  rlwinm    r3,r3,0,24,31
	  stw       r3, 0x10(r29)
	  stw       r0, 0x18(r29)
	  lwz       r3, -0x6C18(r13)
	  lwz       r28, 0x8(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x2C8
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x2C8
	  lwz       r3, -0x7B7C(r13)
	  mr        r4, r28
	  bl        -0xA3708
	  cmpwi     r3, 0
	  bne-      .loc_0x258
	  li        r3, 0x1
	  li        r0, 0x8
	  stw       r3, 0x20(r29)
	  stw       r0, 0x24(r29)
	  b         .loc_0x2C8

	.loc_0x258:
	  lwz       r3, -0x7B80(r13)
	  mr        r4, r28
	  bl        -0xA3730
	  cmpwi     r3, 0
	  bne-      .loc_0x280
	  li        r3, 0x1
	  li        r0, 0x8
	  stw       r3, 0x20(r29)
	  stw       r0, 0x24(r29)
	  b         .loc_0x2C8

	.loc_0x280:
	  lwz       r3, -0x7B84(r13)
	  mr        r4, r28
	  bl        -0xA3758
	  cmpwi     r3, 0
	  bne-      .loc_0x2A8
	  li        r3, 0x1
	  li        r0, 0x8
	  stw       r3, 0x20(r29)
	  stw       r0, 0x24(r29)
	  b         .loc_0x2C8

	.loc_0x2A8:
	  lwz       r3, -0x7B88(r13)
	  mr        r4, r28
	  bl        -0xA3780
	  cmpwi     r3, 0
	  bne-      .loc_0x2C8
	  li        r0, 0x1
	  stw       r0, 0x20(r29)
	  stw       r0, 0x24(r29)

	.loc_0x2C8:
	  li        r3, 0x1

	.loc_0x2CC:
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
 * Address:	8016DE7C
 * Size:	000060
 */
void Game::PelletMgr::makeOtakaraItemCode((char*,
                                           Game::PelletMgr::OtakaraItemCode&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x24(r1)
	  addi      r4, r1, 0x8
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  bl        0xB9FA8
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lha       r0, 0x258(r3)
	  lwz       r4, 0x8(r1)
	  rlwinm    r0,r0,0,24,31
	  rlwinm    r3,r4,8,16,23
	  add       r0, r3, r0
	  sth       r0, 0x0(r31)
	  b         .loc_0x4C

	.loc_0x44:
	  li        r0, 0
	  sth       r0, 0x0(r31)

	.loc_0x4C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016DEDC
 * Size:	000034
 */
void Game::PelletMgr::OtakaraItemCode::read((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r3, r4
	  bl        0x2A6870
	  sth       r3, 0x0(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016DF10
 * Size:	000060
 */
void Game::PelletMgr::OtakaraItemCode::write((Stream&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r4, 0x414(r4)
	  bl        0x2A6500
	  lha       r4, 0x0(r30)
	  mr        r3, r31
	  bl        0x2A77F0
	  lis       r4, 0x8048
	  mr        r3, r31
	  subi      r4, r4, 0x1B00
	  crclr     6, 0x6
	  bl        0x2A6288
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
 * Address:	8016DF70
 * Size:	00006C
 */
void Game::PelletMgr::addMgr((Game::BasePelletMgr*))
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
	  li        r3, 0x1C
	  bl        -0x14A0F0
	  mr.       r31, r3
	  beq-      .loc_0x40
	  bl        0x2A33F0
	  lis       r3, 0x804B
	  addi      r0, r3, 0x1BA4
	  stw       r0, 0x0(r31)

	.loc_0x40:
	  stw       r30, 0x18(r31)
	  mr        r4, r31
	  addi      r3, r29, 0x20
	  bl        0x2A344C
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
 * Address:	8016DFDC
 * Size:	0001E4
 */
void Game::PelletMgr::doAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x1B5C
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016E1C0
 * Size:	00004C
 */
void Iterator<GenericObjectMgr>::isDone()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r31)
	  sub       r0, r3, r0
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016E20C
 * Size:	0001E4
 */
void Game::PelletMgr::doEntry(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x1B5C
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016E3F0
 * Size:	0001F4
 */
void Game::PelletMgr::doSetView((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r5, r5, 0x1B5C
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  mr        r31, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016E5E4
 * Size:	0001E4
 */
void Game::PelletMgr::doViewCalc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x1B5C
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016E7C8
 * Size:	0001F4
 */
void Game::PelletMgr::doSimulation((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x1B5C
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  fmr       f1, f31
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016E9BC
 * Size:	000004
 */
void Game::PelletMgr::doDirectDraw((Graphics&)) { }

/*
 * --INFO--
 * Address:	8016E9C0
 * Size:	0001F4
 */
void Game::PelletMgr::doSimpleDraw((Viewport*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r5, r5, 0x1B5C
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  mr        r31, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016EBB4
 * Size:	0001D4
 */
void Game::PelletMgr::setupSoundViewerAndBas(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x1B5C
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1A4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1A4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x114
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x114:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x188

	.loc_0x134:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1A4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x188:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x134

	.loc_0x1A4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016ED88
 * Size:	000014
 */
void Game::PelletMgr::decode((long, unsigned char&, int&))
{
	/*
	.loc_0x0:
	  rlwinm    r3,r4,8,24,31
	  rlwinm    r0,r4,0,8,31
	  stb       r3, 0x0(r5)
	  stw       r0, 0x0(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016ED9C
 * Size:	00000C
 */
void Game::PelletMgr::encode((unsigned char, int))
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,24,0,7
	  or        r3, r0, r5
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016EDA8
 * Size:	0000B4
 */
void Game::PelletMgr::getCaveName((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,8,24,31
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  rlwinm    r30,r4,0,8,31
	  mr        r4, r0
	  bl        0x304
	  mr.       r31, r3
	  bne-      .loc_0x48
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1CBC
	  li        r4, 0x16F9
	  subi      r5, r5, 0x1CAC
	  crclr     6, 0x6
	  bl        -0x1447AC

	.loc_0x48:
	  cmpwi     r30, 0
	  blt-      .loc_0x60
	  lwz       r3, 0x8(r31)
	  lwz       r0, 0x18(r3)
	  cmpw      r30, r0
	  blt-      .loc_0x68

	.loc_0x60:
	  li        r31, 0
	  b         .loc_0x74

	.loc_0x68:
	  mulli     r0, r30, 0x260
	  lwz       r3, 0x1C(r3)
	  add       r31, r3, r0

	.loc_0x74:
	  cmplwi    r31, 0
	  bne-      .loc_0x98
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1CBC
	  li        r4, 0x16FB
	  subi      r5, r5, 0x1CAC
	  crclr     6, 0x6
	  bl        -0x1447FC

	.loc_0x98:
	  lwz       r0, 0x14(r1)
	  lwz       r3, 0x40(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016EE5C
 * Size:	000270
 */
void Game::PelletMgr::getCaveID((char*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x34(r1)
	  li        r0, 0
	  addi      r5, r5, 0x1B5C
	  stmw      r27, 0x1C(r1)
	  cmplwi    r0, 0
	  mr        r31, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x238

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x238
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x238

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  li        r27, 0
	  li        r29, 0
	  mr        r28, r3
	  b         .loc_0x16C

	.loc_0x100:
	  cmpwi     r27, 0
	  blt-      .loc_0x110
	  cmpw      r27, r0
	  blt-      .loc_0x118

	.loc_0x110:
	  li        r3, 0
	  b         .loc_0x120

	.loc_0x118:
	  lwz       r0, 0x1C(r3)
	  add       r3, r0, r29

	.loc_0x120:
	  lwz       r30, 0x40(r3)
	  mr        r3, r31
	  bl        -0xA4674
	  mr        r5, r3
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0xA4914
	  cmpwi     r3, 0
	  bne-      .loc_0x164
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,24,0,7
	  or        r3, r0, r27
	  b         .loc_0x25C

	.loc_0x164:
	  addi      r29, r29, 0x260
	  addi      r27, r27, 0x1

	.loc_0x16C:
	  lwz       r3, 0x8(r28)
	  lwz       r0, 0x18(r3)
	  cmpw      r27, r0
	  blt+      .loc_0x100
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1A8
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x238

	.loc_0x1A8:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x21C

	.loc_0x1C8:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x238
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x21C:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1C8

	.loc_0x238:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  li        r3, -0x1

	.loc_0x25C:
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000200
 */
void Game::PelletMgr::getMgrByIndex((int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8016F0CC
 * Size:	00021C
 */
void Game::PelletMgr::getMgrByID((unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r5, r5, 0x1B5C
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x54
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xDC

	.loc_0x54:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xC0

	.loc_0x6C:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xDC
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xC0:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x6C

	.loc_0xDC:
	  rlwinm    r31,r30,0,24,31
	  b         .loc_0x1E0

	.loc_0xE4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r0, r3
	  mr        r30, r0
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplw     r31, r0
	  bne-      .loc_0x124
	  mr        r3, r30
	  b         .loc_0x204

	.loc_0x124:
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x150
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1E0

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C4

	.loc_0x170:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1E0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1C4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x170

	.loc_0x1E0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xE4
	  li        r3, 0

	.loc_0x204:
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
 * Address:	........
 * Size:	0000BC
 */
void Game::PelletMgr::dumpAllPellets(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8016F2E8
 * Size:	0000E0
 */
void Game::PelletMgr::__dt(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  beq-      .loc_0xC4
	  lis       r3, 0x804B
	  addi      r3, r3, 0x1ACC
	  stw       r3, 0x0(r31)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x1C(r31)
	  beq-      .loc_0xB4
	  lis       r3, 0x804B
	  addic.    r0, r31, 0x20
	  addi      r3, r3, 0x1BB4
	  stw       r3, 0x0(r31)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x1C(r31)
	  beq-      .loc_0x6C
	  lis       r4, 0x804B
	  addi      r3, r31, 0x20
	  addi      r0, r4, 0x1BA4
	  li        r4, 0
	  stw       r0, 0x20(r31)
	  bl        0x2A2238

	.loc_0x6C:
	  cmplwi    r31, 0
	  beq-      .loc_0xB4
	  lis       r3, 0x804B
	  addi      r3, r3, 0x1C34
	  stw       r3, 0x0(r31)
	  addi      r0, r3, 0x2C
	  stw       r0, 0x1C(r31)
	  beq-      .loc_0xB4
	  lis       r3, 0x804B
	  addi      r0, r3, 0x1CB0
	  stw       r0, 0x0(r31)
	  beq-      .loc_0xB4
	  lis       r4, 0x804B
	  mr        r3, r31
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x0(r31)
	  bl        0x2A21F0

	.loc_0xB4:
	  extsh.    r0, r30
	  ble-      .loc_0xC4
	  mr        r3, r31
	  bl        -0x14B2F4

	.loc_0xC4:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016F3C8
 * Size:	00000C
 */
void Game::PelletMgr::getMgrName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x1B6C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016F3D4
 * Size:	000038
 */
void Iterator<GenericObjectMgr>::operator*()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
	  lwz       r4, 0x4(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016F40C
 * Size:	0000E4
 */
void Iterator<GenericObjectMgr>::next()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xD0

	.loc_0x40:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD0
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)

	.loc_0xB4:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60

	.loc_0xD0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016F4F0
 * Size:	0000DC
 */
void Iterator<GenericObjectMgr>::first()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xC8

	.loc_0x3C:
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xAC

	.loc_0x58:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xC8
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)

	.loc_0xAC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x58

	.loc_0xC8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016F5CC
 * Size:	000038
 */
void Iterator<Game::PelletItem::Object>::operator*()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
	  lwz       r4, 0x4(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016F604
 * Size:	0000E4
 */
void Iterator<Game::PelletItem::Object>::next()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xD0

	.loc_0x40:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD0
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)

	.loc_0xB4:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60

	.loc_0xD0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016F6E8
 * Size:	0000DC
 */
void Iterator<Game::PelletItem::Object>::first()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xC8

	.loc_0x3C:
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xAC

	.loc_0x58:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xC8
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)

	.loc_0xAC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x58

	.loc_0xC8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016F7C4
 * Size:	000038
 */
void Iterator<Game::PelletOtakara::Object>::operator*()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
	  lwz       r4, 0x4(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016F7FC
 * Size:	0000E4
 */
void Iterator<Game::PelletOtakara::Object>::next()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xD0

	.loc_0x40:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD0
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)

	.loc_0xB4:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60

	.loc_0xD0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016F8E0
 * Size:	0000DC
 */
void Iterator<Game::PelletOtakara::Object>::first()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xC8

	.loc_0x3C:
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xAC

	.loc_0x58:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xC8
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)

	.loc_0xAC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x58

	.loc_0xC8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016F9BC
 * Size:	000008
 */
void generatorBirth__Q24Game13BasePelletMgrFR10Vector3<float> R10Vector3<float>
PQ24Game13GenPelletParm(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016F9C4
 * Size:	000004
 */
void Game::BasePelletMgr::generatorWrite((Stream&, Game::GenPelletParm*)) { }

/*
 * --INFO--
 * Address:	8016F9C8
 * Size:	000004
 */
void Game::BasePelletMgr::generatorRead((Stream&, Game::GenPelletParm*,
                                         unsigned long))
{
}

/*
 * --INFO--
 * Address:	8016F9CC
 * Size:	00000C
 */
void Game::BasePelletMgr::generatorLocalVersion(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x3030
	  addi      r3, r3, 0x3030
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8016F9D8
 * Size:	000004
 */
void Game::BasePelletMgr::doAnimation(void) { }

/*
 * --INFO--
 * Address:	8016F9DC
 * Size:	000004
 */
void Game::BasePelletMgr::doEntry(void) { }

/*
 * --INFO--
 * Address:	8016F9E0
 * Size:	000004
 */
void Game::BasePelletMgr::doSetView((int)) { }

/*
 * --INFO--
 * Address:	8016F9E4
 * Size:	000004
 */
void Game::BasePelletMgr::doViewCalc(void) { }

/*
 * --INFO--
 * Address:	8016F9E8
 * Size:	000004
 */
void Game::BasePelletMgr::doSimulation((float)) { }

/*
 * --INFO--
 * Address:	8016F9EC
 * Size:	000004
 */
void Game::BasePelletMgr::doDirectDraw((Graphics&)) { }

/*
 * --INFO--
 * Address:	8016F9F0
 * Size:	000070
 */
void Container<CollPart>::~Container()
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
	  beq-      .loc_0x54
	  lis       r4, 0x804B
	  addi      r0, r4, 0x1D80
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x2A1B58

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x14B98C

	.loc_0x54:
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
 * Address:	8016FA60
 * Size:	000088
 */
void ObjectMgr<CollPart>::~ObjectMgr()
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
	  beq-      .loc_0x6C
	  lis       r4, 0x804B
	  addi      r4, r4, 0x1DAC
	  stw       r4, 0x0(r30)
	  addi      r0, r4, 0x2C
	  stw       r0, 0x1C(r30)
	  beq-      .loc_0x5C
	  lis       r4, 0x804B
	  addi      r0, r4, 0x1D80
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x5C
	  lis       r5, 0x804B
	  li        r4, 0
	  subi      r0, r5, 0x5324
	  stw       r0, 0x0(r30)
	  bl        0x2A1AD0

	.loc_0x5C:
	  extsh.    r0, r31
	  ble-      .loc_0x6C
	  mr        r3, r30
	  bl        -0x14BA14

	.loc_0x6C:
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
 * Address:	8016FAE8
 * Size:	000084
 */
void WPExcludeSpot::satisfy(Game::WayPoint*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r4

	.loc_0x1C:
	  lwz       r3, -0x6CD0(r13)
	  mr        r4, r31
	  bl        0xBF90
	  cmplwi    r3, 0
	  beq-      .loc_0x44
	  lwz       r0, 0x23C(r3)
	  cmplw     r30, r0
	  bne-      .loc_0x44
	  li        r3, 0
	  b         .loc_0x6C

	.loc_0x44:
	  addi      r31, r31, 0x1
	  cmpwi     r31, 0x3
	  blt+      .loc_0x1C
	  lwz       r3, -0x6CD0(r13)
	  lwz       r3, 0xB0(r3)
	  lwz       r0, 0x23C(r3)
	  sub       r3, r30, r0
	  sub       r0, r0, r30
	  or        r0, r3, r0
	  rlwinm    r3,r0,1,31,31

	.loc_0x6C:
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
 * Address:	8016FB6C
 * Size:	0004DC
 */
void satisfy__Q223 @unnamed @pelletMgr_cpp @6NotOffFPQ24Game8WayPoint(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stfd      f30, 0x60(r1)
	  psq_st    f30,0x68(r1),0,0
	  stfd      f29, 0x50(r1)
	  psq_st    f29,0x58(r1),0,0
	  stfd      f28, 0x40(r1)
	  psq_st    f28,0x48(r1),0,0
	  lbz       r0, 0x34(r4)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x40
	  li        r3, 0
	  b         .loc_0x4AC

	.loc_0x40:
	  lwz       r3, -0x6BB8(r13)
	  lfs       f29, 0x4C(r4)
	  cmplwi    r3, 0
	  lfs       f28, 0x54(r4)
	  beq-      .loc_0x278
	  beq-      .loc_0x5C
	  addi      r3, r3, 0x30

	.loc_0x5C:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x560
	  stw       r0, 0x3C(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x30(r1)
	  stw       r0, 0x34(r1)
	  stw       r3, 0x38(r1)
	  bne-      .loc_0x98
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)
	  b         .loc_0x120

	.loc_0x98:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)
	  b         .loc_0x104

	.loc_0xB0:
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x120
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)

	.loc_0x104:
	  lwz       r12, 0x30(r1)
	  addi      r3, r1, 0x30
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xB0

	.loc_0x120:
	  lfs       f31, -0x5A4C(r2)
	  lfs       f30, -0x5964(r2)
	  b         .loc_0x258

	.loc_0x12C:
	  lwz       r3, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x1C(r1)
	  lfs       f1, 0x14(r1)
	  fsubs     f0, f0, f28
	  fsubs     f1, f1, f29
	  fmuls     f0, f0, f0
	  fmadds    f0, f1, f1, f0
	  fcmpo     cr0, f0, f31
	  ble-      .loc_0x188
	  ble-      .loc_0x18C
	  fsqrte    f1, f0
	  fmuls     f0, f1, f0
	  b         .loc_0x18C

	.loc_0x188:
	  fmr       f0, f31

	.loc_0x18C:
	  fcmpo     cr0, f0, f30
	  bge-      .loc_0x19C
	  li        r3, 0
	  b         .loc_0x4AC

	.loc_0x19C:
	  lwz       r0, 0x3C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1C8
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)
	  b         .loc_0x258

	.loc_0x1C8:
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)
	  b         .loc_0x23C

	.loc_0x1E8:
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x258
	  lwz       r3, 0x38(r1)
	  lwz       r4, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x34(r1)

	.loc_0x23C:
	  lwz       r12, 0x30(r1)
	  addi      r3, r1, 0x30
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x1E8

	.loc_0x258:
	  lwz       r3, 0x38(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x34(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x12C

	.loc_0x278:
	  lwz       r3, -0x6B50(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x4A8
	  beq-      .loc_0x28C
	  addi      r3, r3, 0x30

	.loc_0x28C:
	  li        r0, 0
	  lis       r4, 0x804B
	  addi      r4, r4, 0x560
	  stw       r0, 0x2C(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x20(r1)
	  stw       r0, 0x24(r1)
	  stw       r3, 0x28(r1)
	  bne-      .loc_0x2C8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x350

	.loc_0x2C8:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x334

	.loc_0x2E0:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x350
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x334:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x2E0

	.loc_0x350:
	  lfs       f30, -0x5A4C(r2)
	  lfs       f31, -0x5964(r2)
	  b         .loc_0x488

	.loc_0x35C:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x10(r1)
	  lfs       f1, 0x8(r1)
	  fsubs     f0, f0, f28
	  fsubs     f1, f1, f29
	  fmuls     f0, f0, f0
	  fmadds    f0, f1, f1, f0
	  fcmpo     cr0, f0, f30
	  ble-      .loc_0x3B8
	  ble-      .loc_0x3BC
	  fsqrte    f1, f0
	  fmuls     f0, f1, f0
	  b         .loc_0x3BC

	.loc_0x3B8:
	  fmr       f0, f30

	.loc_0x3BC:
	  fcmpo     cr0, f0, f31
	  bge-      .loc_0x3CC
	  li        r3, 0
	  b         .loc_0x4AC

	.loc_0x3CC:
	  lwz       r0, 0x2C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x3F8
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x488

	.loc_0x3F8:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x46C

	.loc_0x418:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x488
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x46C:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x418

	.loc_0x488:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x24(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x35C

	.loc_0x4A8:
	  li        r3, 0x1

	.loc_0x4AC:
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  psq_l     f29,0x58(r1),0,0
	  lfd       f29, 0x50(r1)
	  psq_l     f28,0x48(r1),0,0
	  lwz       r0, 0x84(r1)
	  lfd       f28, 0x40(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80170048
 * Size:	000044
 */
void onSetPosition__Q24Game6PelletFR10Vector3<float>(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x3AC(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x3B0(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x3B4(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1B0(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017008C
 * Size:	000008
 */
void Game::Pellet::inWater(void)
{
	/*
	.loc_0x0:
	  lbz       r3, 0x325(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80170094
 * Size:	000008
 */
void Game::Pellet::getBedamaColor(void)
{
	/*
	.loc_0x0:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017009C
 * Size:	000008
 */
void Game::Pellet::getSound_PosPtr(void)
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x3AC
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801700A4
 * Size:	000008
 */
void Game::Pellet::getFaceDir(void)
{
	/*
	.loc_0x0:
	  lfs       f1, 0x3B8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801700AC
 * Size:	000008
 */
void Game::Pellet::deferPikiCollision(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801700B4
 * Size:	000004
 */
void Game::Pellet::sound_otakaraEventFinish(void) { }

/*
 * --INFO--
 * Address:	801700B8
 * Size:	0000BC
 */
void PSM::EventBase::__dt(void)
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
	  beq-      .loc_0xA0
	  lis       r3, 0x804B
	  addi      r4, r3, 0x21A4
	  stw       r4, 0x28(r30)
	  addi      r3, r4, 0x8
	  addi      r0, r4, 0x40
	  stw       r3, 0x10(r30)
	  stw       r0, 0x30(r30)
	  beq-      .loc_0x90
	  lis       r4, 0x804F
	  addi      r3, r30, 0x30
	  subi      r6, r4, 0xEBC
	  li        r4, 0
	  stw       r6, 0x28(r30)
	  addi      r5, r6, 0x8
	  addi      r0, r6, 0x40
	  stw       r5, 0x10(r30)
	  stw       r0, 0x30(r30)
	  bl        -0xB653C
	  cmplwi    r30, 0
	  beq-      .loc_0x90
	  lis       r4, 0x804F
	  mr        r3, r30
	  subi      r5, r4, 0xE34
	  li        r4, 0
	  stw       r5, 0x28(r30)
	  addi      r0, r5, 0x8
	  stw       r0, 0x10(r30)
	  bl        0x2ECD20

	.loc_0x90:
	  extsh.    r0, r31
	  ble-      .loc_0xA0
	  mr        r3, r30
	  bl        -0x14C0A0

	.loc_0xA0:
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
 * Address:	80170174
 * Size:	000008
 */
void PSM::CreatureObj::getCastType(void)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017017C
 * Size:	000010
 */
void PSM::CreatureObj::getJAIObject(void)
{
	/*
	.loc_0x0:
	  cmplwi    r3, 0
	  beqlr-
	  addi      r3, r3, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017018C
 * Size:	000010
 */
void PSM::CreatureObj::getHandleArea((unsigned char))
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4C(r3)
	  rlwinm    r0,r4,2,22,29
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017019C
 * Size:	000004
 */
void PSM::CreatureObj::onCalcOn(void) { }

/*
 * --INFO--
 * Address:	801701A0
 * Size:	00000C
 */
void Game::PelletGoalStateArg::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8048
	  subi      r3, r3, 0x1ACC
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801701AC
 * Size:	000004
 */
void init__Q24Game28StateMachine<Game::Pellet> FPQ24Game6Pellet(void) { }

/*
 * --INFO--
 * Address:	801701B0
 * Size:	000008
 */
void NodeObjectMgr<GenericObjectMgr>::get(void*)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x18(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801701B8
 * Size:	000008
 */
void NodeObjectMgr<GenericObjectMgr>::getNext(void*)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801701C0
 * Size:	000008
 */
void NodeObjectMgr<GenericObjectMgr>::getStart()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x30(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801701C8
 * Size:	000008
 */
void NodeObjectMgr<GenericObjectMgr>::getEnd()
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801701D0
 * Size:	000018
 */
void NodeObjectMgr<GenericObjectMgr>::resetMgr()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x30(r3)
	  stw       r0, 0x2C(r3)
	  stw       r0, 0x28(r3)
	  stw       r0, 0x24(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801701E8
 * Size:	000018
 */
void MonoObjectMgr<Game::PelletFruit::Object>::resetMgr()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x28(r3)
	  stw       r0, 0x24(r3)
	  stw       r0, 0x20(r3)
	  stw       r0, 0x2C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80170200
 * Size:	000018
 */
void MonoObjectMgr<Game::PelletCarcass::Object>::resetMgr()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x28(r3)
	  stw       r0, 0x24(r3)
	  stw       r0, 0x20(r3)
	  stw       r0, 0x2C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80170218
 * Size:	000018
 */
void MonoObjectMgr<Game::PelletNumber::Object>::resetMgr()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x28(r3)
	  stw       r0, 0x24(r3)
	  stw       r0, 0x20(r3)
	  stw       r0, 0x2C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80170230
 * Size:	000040
 */
void MonoObjectMgr<CollPart>::getNext(void*)
{
	/*
	.loc_0x0:
	  lwz       r5, 0x24(r3)
	  addi      r6, r4, 0x1
	  sub       r0, r5, r6
	  mtctr     r0
	  cmpw      r6, r5
	  bge-      .loc_0x38

	.loc_0x18:
	  lwz       r4, 0x2C(r3)
	  lbzx      r0, r4, r6
	  cmplwi    r0, 0
	  bne-      .loc_0x30
	  mr        r3, r6
	  blr

	.loc_0x30:
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0x18

	.loc_0x38:
	  mr        r3, r5
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80170270
 * Size:	000030
 */
void MonoObjectMgr<CollPart>::getStart()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, -0x1
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801702A0
 * Size:	000008
 */
void MonoObjectMgr<CollPart>::getEnd()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x24(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801702A8
 * Size:	000010
 */
void MonoObjectMgr<CollPart>::getAt(int)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x64
	  lwz       r3, 0x28(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801702B8
 * Size:	000008
 */
void MonoObjectMgr<CollPart>::getTo()
{
	/*
	.loc_0x0:
	  lwz       r3, 0x24(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801702C0
 * Size:	000080
 */
void MonoObjectMgr<CollPart>::doAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0x58

	.loc_0x28:
	  lwz       r3, 0x2C(r29)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lwz       r0, 0x28(r29)
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  addi      r31, r31, 0x64
	  addi      r30, r30, 0x1

	.loc_0x58:
	  lwz       r0, 0x24(r29)
	  cmpw      r30, r0
	  blt+      .loc_0x28
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
 * Address:	80170340
 * Size:	000080
 */
void MonoObjectMgr<CollPart>::doEntry()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0x58

	.loc_0x28:
	  lwz       r3, 0x2C(r29)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lwz       r0, 0x28(r29)
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  addi      r31, r31, 0x64
	  addi      r30, r30, 0x1

	.loc_0x58:
	  lwz       r0, 0x24(r29)
	  cmpw      r30, r0
	  blt+      .loc_0x28
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
 * Address:	801703C0
 * Size:	000090
 */
void MonoObjectMgr<CollPart>::doSetView(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0x64

	.loc_0x30:
	  lwz       r3, 0x2C(r28)
	  lbzx      r0, r3, r29
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  lwz       r0, 0x28(r28)
	  mr        r4, r30
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  addi      r31, r31, 0x64
	  addi      r29, r29, 0x1

	.loc_0x64:
	  lwz       r0, 0x24(r28)
	  cmpw      r29, r0
	  blt+      .loc_0x30
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
 * Address:	80170450
 * Size:	000080
 */
void MonoObjectMgr<CollPart>::doViewCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  b         .loc_0x58

	.loc_0x28:
	  lwz       r3, 0x2C(r29)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lwz       r0, 0x28(r29)
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  addi      r31, r31, 0x64
	  addi      r30, r30, 0x1

	.loc_0x58:
	  lwz       r0, 0x24(r29)
	  cmpw      r30, r0
	  blt+      .loc_0x28
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
 * Address:	801704D0
 * Size:	000090
 */
void MonoObjectMgr<CollPart>::doSimulation(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  stw       r31, 0x14(r1)
	  li        r31, 0
	  stw       r30, 0x10(r1)
	  li        r30, 0
	  stw       r29, 0xC(r1)
	  mr        r29, r3
	  b         .loc_0x64

	.loc_0x30:
	  lwz       r3, 0x2C(r29)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  lwz       r0, 0x28(r29)
	  fmr       f1, f31
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  addi      r31, r31, 0x64
	  addi      r30, r30, 0x1

	.loc_0x64:
	  lwz       r0, 0x24(r29)
	  cmpw      r30, r0
	  blt+      .loc_0x30
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  lwz       r29, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80170560
 * Size:	000090
 */
void MonoObjectMgr<CollPart>::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0x64

	.loc_0x30:
	  lwz       r3, 0x2C(r28)
	  lbzx      r0, r3, r30
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  lwz       r0, 0x28(r28)
	  mr        r4, r29
	  add       r3, r0, r31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  addi      r31, r31, 0x64
	  addi      r30, r30, 0x1

	.loc_0x64:
	  lwz       r0, 0x24(r28)
	  cmpw      r30, r0
	  blt+      .loc_0x30
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
 * Address:	801705F0
 * Size:	000018
 */
void MonoObjectMgr<CollPart>::resetMgr()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x28(r3)
	  stw       r0, 0x24(r3)
	  stw       r0, 0x20(r3)
	  stw       r0, 0x2C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80170608
 * Size:	000030
 */
void MonoObjectMgr<CollPart>::clearMgr()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  li        r6, 0
	  stw       r0, 0x20(r3)
	  li        r5, 0x1
	  b         .loc_0x20

	.loc_0x14:
	  lwz       r4, 0x2C(r3)
	  stbx      r5, r4, r6
	  addi      r6, r6, 0x1

	.loc_0x20:
	  lwz       r0, 0x24(r3)
	  cmpw      r6, r0
	  blt+      .loc_0x14
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80170638
 * Size:	000004
 */
void MonoObjectMgr<CollPart>::onAlloc() { }

/*
 * --INFO--
 * Address:	8017063C
 * Size:	000010
 */
void MonoObjectMgr<CollPart>::get(void*)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x64
	  lwz       r3, 0x28(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017064C
 * Size:	0001E4
 */
void ObjectMgr<GenericObjectMgr>::doAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x1B5C
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80170830
 * Size:	0001E4
 */
void ObjectMgr<GenericObjectMgr>::doEntry()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x1B5C
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80170A14
 * Size:	0001F4
 */
void ObjectMgr<GenericObjectMgr>::doSetView(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r5, r5, 0x1B5C
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  mr        r31, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80170C08
 * Size:	0001E4
 */
void ObjectMgr<GenericObjectMgr>::doViewCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x1B5C
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80170DEC
 * Size:	0001F4
 */
void ObjectMgr<GenericObjectMgr>::doSimulation(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x1B5C
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  fmr       f1, f31
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80170FE0
 * Size:	0001F4
 */
void ObjectMgr<GenericObjectMgr>::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r5, r5, 0x1B5C
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  mr        r31, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801711D4
 * Size:	00002C
 */
void Container<GenericObjectMgr>::getObject(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80171200
 * Size:	000008
 */
void Container<GenericObjectMgr>::getAt(int)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80171208
 * Size:	000008
 */
void Container<GenericObjectMgr>::getTo()
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80171210
 * Size:	00002C
 */
void Container<CollPart>::getObject(void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017123C
 * Size:	000008
 */
void Container<CollPart>::getAt(int)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80171244
 * Size:	000008
 */
void Container<CollPart>::getTo()
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017124C
 * Size:	000030
 */
void Delegate1<Game::BasePelletMgr, SysShape::Model*>::invoke(SysShape::Model*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r5, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0xAF740
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8017127C
 * Size:	0001F4
 */
void ObjectMgr<CollPart>::doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r5, r5, 0x22E4
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  mr        r31, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80171470
 * Size:	00004C
 */
void Iterator<CollPart>::isDone()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x8(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r31)
	  sub       r0, r3, r0
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801714BC
 * Size:	0001F4
 */
void ObjectMgr<CollPart>::doSimulation(float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x22E4
	  stfd      f31, 0x18(r1)
	  fmr       f31, f1
	  cmplwi    r0, 0
	  stw       r4, 0x8(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  fmr       f1, f31
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801716B0
 * Size:	0001E4
 */
void ObjectMgr<CollPart>::doViewCalc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x22E4
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80171894
 * Size:	0001F4
 */
void ObjectMgr<CollPart>::doSetView(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r5, r5, 0x22E4
	  stw       r31, 0x1C(r1)
	  cmplwi    r0, 0
	  mr        r31, r4
	  stw       r0, 0x14(r1)
	  stw       r5, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x50:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xBC

	.loc_0x68:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xBC:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x68
	  b         .loc_0x1C0

	.loc_0xDC:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r4, r31
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x130
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1C0

	.loc_0x130:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1A4

	.loc_0x150:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1C0
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x1A4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x150

	.loc_0x1C0:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xDC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80171A88
 * Size:	0001E4
 */
void ObjectMgr<CollPart>::doEntry()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x22E4
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80171C6C
 * Size:	0001E4
 */
void ObjectMgr<CollPart>::doAnimation()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  addi      r4, r4, 0x22E4
	  cmplwi    r0, 0
	  stw       r0, 0x14(r1)
	  stw       r4, 0x8(r1)
	  stw       r0, 0xC(r1)
	  stw       r3, 0x10(r1)
	  bne-      .loc_0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x48:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0xB4:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60
	  b         .loc_0x1B4

	.loc_0xD4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x1B4

	.loc_0x124:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)
	  b         .loc_0x198

	.loc_0x144:
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1B4
	  lwz       r3, 0x10(r1)
	  lwz       r4, 0xC(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0xC(r1)

	.loc_0x198:
	  lwz       r12, 0x8(r1)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x144

	.loc_0x1B4:
	  lwz       r3, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0xC(r1)
	  cmplw     r4, r3
	  bne+      .loc_0xD4
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80171E50
 * Size:	00009C
 */
void MonoObjectMgr<CollPart>::MonoObjectMgr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x29F52C
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  subi      r0, r4, 0x5324
	  lis       r6, 0x804B
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0x1D80
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  stw       r0, 0x0(r31)
	  li        r8, 0
	  addi      r7, r4, 0x1DAC
	  addi      r5, r3, 0x1E28
	  stb       r8, 0x18(r31)
	  subi      r0, r6, 0x4A10
	  addi      r6, r7, 0x2C
	  addi      r4, r5, 0x2C
	  stw       r0, 0x1C(r31)
	  li        r0, 0x1
	  mr        r3, r31
	  stw       r7, 0x0(r31)
	  stw       r6, 0x1C(r31)
	  stw       r5, 0x0(r31)
	  stw       r4, 0x1C(r31)
	  stb       r0, 0x18(r31)
	  stw       r8, 0x24(r31)
	  stw       r8, 0x20(r31)
	  stw       r8, 0x28(r31)
	  stw       r8, 0x2C(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80171EEC
 * Size:	00009C
 */
void transit__Q24Game28StateMachine<Game::Pellet>
FPQ24Game6PelletiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r5,2,0,29
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r6
	  lwz       r30, 0x3CC(r4)
	  lwz       r3, 0x14(r3)
	  cmplwi    r30, 0
	  lwzx      r31, r3, r0
	  beq-      .loc_0x50
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r30)
	  stw       r0, 0x18(r27)

	.loc_0x50:
	  lwz       r0, 0xC(r27)
	  cmpw      r31, r0
	  blt-      .loc_0x60

	.loc_0x5C:
	  b         .loc_0x5C

	.loc_0x60:
	  lwz       r3, 0x4(r27)
	  rlwinm    r0,r31,2,0,29
	  mr        r4, r28
	  mr        r5, r29
	  lwzx      r3, r3, r0
	  stw       r3, 0x3CC(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80171F88
 * Size:	000004
 */
void init__Q24Game24FSMState<Game::Pellet>
FPQ24Game6PelletPQ24Game8StateArg(void)
{
}

/*
 * --INFO--
 * Address:	80171F8C
 * Size:	000004
 */
void cleanup__Q24Game24FSMState<Game::Pellet> FPQ24Game6Pellet(void) { }

/*
 * --INFO--
 * Address:	80171F90
 * Size:	00001C
 */
void getCurrID__Q24Game28StateMachine<Game::Pellet> FPQ24Game6Pellet(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x3CC(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x14
	  lwz       r3, 0x4(r3)
	  blr

	.loc_0x14:
	  li        r3, -0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80171FAC
 * Size:	000038
 */
void exec__Q24Game28StateMachine<Game::Pellet> FPQ24Game6Pellet(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x3CC(r4)
	  cmplwi    r3, 0
	  beq-      .loc_0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80171FE4
 * Size:	000004
 */
void exec__Q24Game24FSMState<Game::Pellet> FPQ24Game6Pellet(void) { }

/*
 * --INFO--
 * Address:	80171FE8
 * Size:	00009C
 */
void resetMgrAndResources__Q24Game49FixedSizePelletMgr<
    Game::PelletOtakara::Object>
Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  li        r8, 0
	  li        r9, 0
	  mr        r7, r8
	  mr        r6, r8
	  mr        r5, r8
	  mr        r4, r8
	  b         .loc_0x68

	.loc_0x40:
	  lwz       r3, 0xC(r31)
	  stwx      r7, r3, r8
	  lwz       r3, 0x10(r31)
	  stwx      r6, r3, r8
	  lwz       r3, 0x14(r31)
	  stwx      r5, r3, r8
	  addi      r8, r8, 0x4
	  lwz       r3, 0x4C(r31)
	  stbx      r4, r3, r9
	  addi      r9, r9, 0x1

	.loc_0x68:
	  lwz       r0, 0x50(r31)
	  cmpw      r9, r0
	  blt+      .loc_0x40
	  lwz       r0, 0x48(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  li        r0, 0
	  stw       r0, 0x48(r31)

	.loc_0x88:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80172084
 * Size:	000050
 */
void resetMgr__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x70
	  lwz       r12, 0x70(r31)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x18
	  lwz       r12, 0x18(r31)
	  lwz       r12, 0x80(r12)
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
 * Address:	801720D4
 * Size:	00009C
 */
void resetMgrAndResources__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object>
Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  li        r8, 0
	  li        r9, 0
	  mr        r7, r8
	  mr        r6, r8
	  mr        r5, r8
	  mr        r4, r8
	  b         .loc_0x68

	.loc_0x40:
	  lwz       r3, 0xC(r31)
	  stwx      r7, r3, r8
	  lwz       r3, 0x10(r31)
	  stwx      r6, r3, r8
	  lwz       r3, 0x14(r31)
	  stwx      r5, r3, r8
	  addi      r8, r8, 0x4
	  lwz       r3, 0x4C(r31)
	  stbx      r4, r3, r9
	  addi      r9, r9, 0x1

	.loc_0x68:
	  lwz       r0, 0x50(r31)
	  cmpw      r9, r0
	  blt+      .loc_0x40
	  lwz       r0, 0x48(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  li        r0, 0
	  stw       r0, 0x48(r31)

	.loc_0x88:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80172170
 * Size:	000050
 */
void resetMgr__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x70
	  lwz       r12, 0x70(r31)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x18
	  lwz       r12, 0x18(r31)
	  lwz       r12, 0x80(r12)
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
 * Address:	801721C0
 * Size:	000038
 */
void Iterator<CollPart>::operator*()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x8(r3)
	  lwz       r4, 0x4(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801721F8
 * Size:	0000E4
 */
void Iterator<CollPart>::next()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xD0

	.loc_0x40:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xB4

	.loc_0x60:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD0
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)

	.loc_0xB4:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x60

	.loc_0xD0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801722DC
 * Size:	0000DC
 */
void Iterator<CollPart>::first()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0xC(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xC8

	.loc_0x3C:
	  lwz       r3, 0x8(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)
	  b         .loc_0xAC

	.loc_0x58:
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xC8
	  lwz       r3, 0x8(r31)
	  lwz       r4, 0x4(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r31)

	.loc_0xAC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x58

	.loc_0xC8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801723B8
 * Size:	000018
 */
void MonoObjectMgr<Game::PelletItem::Object>::resetMgr()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x28(r3)
	  stw       r0, 0x24(r3)
	  stw       r0, 0x20(r3)
	  stw       r0, 0x2C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801723D0
 * Size:	000018
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::resetMgr()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x28(r3)
	  stw       r0, 0x24(r3)
	  stw       r0, 0x20(r3)
	  stw       r0, 0x2C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	801723E8
 * Size:	000028
 */
void __sinit_pelletMgr_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804B
	  stw       r0, -0x6CE8(r13)
	  stfsu     f0, 0x1A60(r3)
	  stfs      f0, -0x6CE4(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80172410
 * Size:	000008
 */
void @16 @PSM::EventBase::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x10
	  b         -0x235C
	*/
}

/*
 * --INFO--
 * Address:	80172418
 * Size:	000008
 */
void @48
    @PSM::CreatureObj::startSound((unsigned char, unsigned long, unsigned long))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         0x2EB568
	*/
}

/*
 * --INFO--
 * Address:	80172420
 * Size:	000008
 */
void @48
    @PSM::CreatureObj::startSound((JAISound**, unsigned long, unsigned long))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         0x2EB5EC
	*/
}

/*
 * --INFO--
 * Address:	80172428
 * Size:	000008
 */
void @48 @PSM::CreatureObj::startSound((unsigned long, unsigned long))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         0x2EB51C
	*/
}

/*
 * --INFO--
 * Address:	80172430
 * Size:	000008
 */
void @48 @PSM::EventBase::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x30
	  b         -0x237C
	*/
}

/*
 * --INFO--
 * Address:	80172438
 * Size:	000008
 */
void @788 @Game::Pellet::onKeyEvent((SysShape::KeyEvent const&))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x314
	  b         -0x80DC
	*/
}

/*
 * --INFO--
 * Address:	80172440
 * Size:	000008
 */
void @792 @Game::Pellet::getCarryInfoParam((CarryInfoParam&))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x318
	  b         -0xA61C
	*/
}

/*
 * --INFO--
 * Address:	80172448
 * Size:	000008
 */
void MonoObjectMgr<CollPart>::@28 @resetMgr()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1E5C
	*/
}

/*
 * --INFO--
 * Address:	80172450
 * Size:	000008
 */
void MonoObjectMgr<CollPart>::@28 @doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1EF4
	*/
}

/*
 * --INFO--
 * Address:	80172458
 * Size:	000008
 */
void MonoObjectMgr<CollPart>::@28 @doSimulation(float)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1F8C
	*/
}

/*
 * --INFO--
 * Address:	80172460
 * Size:	000008
 */
void MonoObjectMgr<CollPart>::@28 @doViewCalc()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x2014
	*/
}

/*
 * --INFO--
 * Address:	80172468
 * Size:	000008
 */
void MonoObjectMgr<CollPart>::@28 @doSetView(int)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x20AC
	*/
}

/*
 * --INFO--
 * Address:	80172470
 * Size:	000008
 */
void MonoObjectMgr<CollPart>::@28 @doEntry()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x2134
	*/
}

/*
 * --INFO--
 * Address:	80172478
 * Size:	000008
 */
void MonoObjectMgr<CollPart>::@28 @doAnimation()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x21BC
	*/
}

/*
 * --INFO--
 * Address:	80172480
 * Size:	000008
 */
void ObjectMgr<CollPart>::@28 @doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1208
	*/
}

/*
 * --INFO--
 * Address:	80172488
 * Size:	000008
 */
void ObjectMgr<CollPart>::@28 @doSimulation(float)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xFD0
	*/
}

/*
 * --INFO--
 * Address:	80172490
 * Size:	000008
 */
void ObjectMgr<CollPart>::@28 @doViewCalc()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xDE4
	*/
}

/*
 * --INFO--
 * Address:	80172498
 * Size:	000008
 */
void ObjectMgr<CollPart>::@28 @doSetView(int)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xC08
	*/
}

/*
 * --INFO--
 * Address:	801724A0
 * Size:	000008
 */
void ObjectMgr<CollPart>::@28 @doEntry()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0xA1C
	*/
}

/*
 * --INFO--
 * Address:	801724A8
 * Size:	000008
 */
void ObjectMgr<CollPart>::@28 @doAnimation()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x840
	*/
}

/*
 * --INFO--
 * Address:	801724B0
 * Size:	000008
 */
void ObjectMgr<GenericObjectMgr>::@28 @doDirectDraw(Graphics&)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x14D4
	*/
}

/*
 * --INFO--
 * Address:	801724B8
 * Size:	000008
 */
void ObjectMgr<GenericObjectMgr>::@28 @doSimulation(float)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x16D0
	*/
}

/*
 * --INFO--
 * Address:	801724C0
 * Size:	000008
 */
void ObjectMgr<GenericObjectMgr>::@28 @doViewCalc()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x18BC
	*/
}

/*
 * --INFO--
 * Address:	801724C8
 * Size:	000008
 */
void ObjectMgr<GenericObjectMgr>::@28 @doSetView(int)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1AB8
	*/
}

/*
 * --INFO--
 * Address:	801724D0
 * Size:	000008
 */
void ObjectMgr<GenericObjectMgr>::@28 @doEntry()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1CA4
	*/
}

/*
 * --INFO--
 * Address:	801724D8
 * Size:	000008
 */
void ObjectMgr<GenericObjectMgr>::@28 @doAnimation()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x1E90
	*/
}

/*
 * --INFO--
 * Address:	801724E0
 * Size:	000008
 */
void NodeObjectMgr<GenericObjectMgr>::@28 @resetMgr()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x2314
	*/
}

/*
 * --INFO--
 * Address:	801724E8
 * Size:	000008
 */
void @28 @Game::PelletMgr::doSimpleDraw((Viewport*))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x3B2C
	*/
}

/*
 * --INFO--
 * Address:	801724F0
 * Size:	000008
 */
void @28 @Game::PelletMgr::doDirectDraw((Graphics&))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x3B38
	*/
}

/*
 * --INFO--
 * Address:	801724F8
 * Size:	000008
 */
void @28 @Game::PelletMgr::doSimulation((float))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x3D34
	*/
}

/*
 * --INFO--
 * Address:	80172500
 * Size:	000008
 */
void @28 @Game::PelletMgr::doViewCalc(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x3F20
	*/
}

/*
 * --INFO--
 * Address:	80172508
 * Size:	000008
 */
void @28 @Game::PelletMgr::doSetView((int))
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x411C
	*/
}

/*
 * --INFO--
 * Address:	80172510
 * Size:	000008
 */
void @28 @Game::PelletMgr::doEntry(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x4308
	*/
}

/*
 * --INFO--
 * Address:	80172518
 * Size:	000008
 */
void @28 @Game::PelletMgr::doAnimation(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x1C
	  b         -0x4540
	*/
}
