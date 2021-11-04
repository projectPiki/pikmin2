#include "types.h"

namespace Game {

/*
 * --INFO--
 * Address:	802563C4
 * Size:	00037C
 */
void Frog::FSM::init(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0xA
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x125B78
	  li        r3, 0x10
	  bl        -0x232540
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  addi      r6, r5, 0x22F0
	  subi      r5, r2, 0x3938
	  stw       r7, 0x4(r4)
	  addi      r0, r3, 0x22CC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x64:
	  mr        r3, r31
	  bl        -0x125B24
	  li        r3, 0x10
	  bl        -0x232590
	  mr.       r4, r3
	  beq-      .loc_0xB8
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  addi      r6, r5, 0x22F0
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3930
	  addi      r0, r3, 0x22A8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xB8:
	  mr        r3, r31
	  bl        -0x125B78
	  li        r3, 0x10
	  bl        -0x2325E4
	  mr.       r4, r3
	  beq-      .loc_0x10C
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  addi      r6, r5, 0x22F0
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3928
	  addi      r0, r3, 0x2284
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x10C:
	  mr        r3, r31
	  bl        -0x125BCC
	  li        r3, 0x10
	  bl        -0x232638
	  mr.       r4, r3
	  beq-      .loc_0x160
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  addi      r6, r5, 0x22F0
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3920
	  addi      r0, r3, 0x2260
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x160:
	  mr        r3, r31
	  bl        -0x125C20
	  li        r3, 0x10
	  bl        -0x23268C
	  mr.       r4, r3
	  beq-      .loc_0x1B8
	  lis       r3, 0x804B
	  lis       r6, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r5, 0x8048
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  lis       r3, 0x804C
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  addi      r6, r6, 0x22F0
	  addi      r5, r5, 0x4D08
	  addi      r0, r3, 0x223C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1B8:
	  mr        r3, r31
	  bl        -0x125C78
	  li        r3, 0x10
	  bl        -0x2326E4
	  mr.       r4, r3
	  beq-      .loc_0x20C
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  addi      r6, r5, 0x22F0
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3918
	  addi      r0, r3, 0x2218
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x20C:
	  mr        r3, r31
	  bl        -0x125CCC
	  li        r3, 0x10
	  bl        -0x232738
	  mr.       r4, r3
	  beq-      .loc_0x260
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  li        r7, 0
	  addi      r6, r5, 0x22F0
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3910
	  addi      r0, r3, 0x21F4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x260:
	  mr        r3, r31
	  bl        -0x125D20
	  li        r3, 0x10
	  bl        -0x23278C
	  mr.       r4, r3
	  beq-      .loc_0x2B4
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x7
	  li        r7, 0
	  addi      r6, r5, 0x22F0
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3908
	  addi      r0, r3, 0x21D0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x2B4:
	  mr        r3, r31
	  bl        -0x125D74
	  li        r3, 0x10
	  bl        -0x2327E0
	  mr.       r4, r3
	  beq-      .loc_0x30C
	  lis       r3, 0x804B
	  lis       r6, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r5, 0x8048
	  stw       r0, 0x0(r4)
	  li        r0, 0x8
	  lis       r3, 0x804C
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  addi      r6, r6, 0x22F0
	  addi      r5, r5, 0x4D14
	  addi      r0, r3, 0x21AC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x30C:
	  mr        r3, r31
	  bl        -0x125DCC
	  li        r3, 0x10
	  bl        -0x232838
	  mr.       r4, r3
	  beq-      .loc_0x360
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x9
	  li        r7, 0
	  addi      r6, r5, 0x22F0
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3900
	  addi      r0, r3, 0x2188
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x360:
	  mr        r3, r31
	  bl        -0x125E20
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80256740
 * Size:	000068
 */
void Frog::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x38F8(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x151060
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x15178C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802567A8
 * Size:	000078
 */
void Frog::StateDead::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r3, 0x188(r4)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x64
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x50
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2EC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x2D1C
	  b         .loc_0x64

	.loc_0x50:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x64
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x11B718

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
 * Address:	80256820
 * Size:	000008
 */
void Frog::Obj::getDownSmokeScale()
{
	/*
	.loc_0x0:
	  lfs       f1, -0x38F4(r2)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80256828
 * Size:	000004
 */
void Frog::StateDead::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	8025682C
 * Size:	0000A0
 */
void Frog::StateWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x38F8(r2)
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  stw       r0, 0x230(r4)
	  bl        -0x18D2B8
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x38E0(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x38F0(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x38EC(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x38E8(r2)
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x7C
	  mr        r3, r31
	  li        r4, 0x2
	  li        r5, 0
	  bl        -0x15189C
	  b         .loc_0x8C

	.loc_0x7C:
	  mr        r3, r31
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x1518B0

	.loc_0x8C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802568CC
 * Size:	000440
 */
void Frog::StateWait::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x110(r1)
	  mflr      r0
	  stw       r0, 0x114(r1)
	  stfd      f31, 0x100(r1)
	  psq_st    f31,0x108(r1),0,0
	  stfd      f30, 0xF0(r1)
	  psq_st    f30,0xF8(r1),0,0
	  stfd      f29, 0xE0(r1)
	  psq_st    f29,0xE8(r1),0,0
	  stfd      f28, 0xD0(r1)
	  psq_st    f28,0xD8(r1),0,0
	  stfd      f27, 0xC0(r1)
	  psq_st    f27,0xC8(r1),0,0
	  stfd      f26, 0xB0(r1)
	  psq_st    f26,0xB8(r1),0,0
	  stw       r31, 0xAC(r1)
	  stw       r30, 0xA8(r1)
	  stw       r29, 0xA4(r1)
	  stw       r28, 0xA0(r1)
	  lfs       f0, -0x38F8(r2)
	  mr        r30, r4
	  lfs       f1, 0x200(r4)
	  mr        r28, r3
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x84
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3F0

	.loc_0x84:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x142300
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x100
	  mr        r4, r30
	  addi      r3, r1, 0x8C
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x90(r1)
	  mr        r3, r30
	  lfs       f2, 0x94(r1)
	  lfs       f0, 0x8C(r1)
	  stfs      f0, 0x2C8(r30)
	  stfs      f1, 0x2CC(r30)
	  stfs      f2, 0x2D0(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x300(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3F0

	.loc_0x100:
	  lwz       r3, 0x188(r30)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x3F0
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x3F0
	  mr        r3, r30
	  bl        0x25DC
	  lwz       r6, 0xC0(r30)
	  mr        r3, r30
	  li        r4, 0
	  li        r5, 0
	  lfs       f2, 0x3D4(r6)
	  li        r6, 0
	  bl        -0x1439B8
	  mr.       r29, r3
	  beq-      .loc_0x3D0
	  stw       r29, 0x230(r30)
	  mr        r4, r29
	  lfs       f0, -0x38F8(r2)
	  addi      r3, r1, 0x68
	  stfs      f0, 0x2C4(r30)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f2, 0x68(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x74
	  lfs       f1, 0x6C(r1)
	  lfs       f0, 0x70(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x50(r1)
	  stfs      f1, 0x54(r1)
	  stfs      f0, 0x58(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x74(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x7C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x50(r1)
	  lfs       f0, 0x58(r1)
	  lfs       f4, 0x78(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x5C(r1)
	  stfs      f4, 0x60(r1)
	  stfs      f3, 0x64(r1)
	  bl        -0x221990
	  bl        0x1BB134
	  lwz       r12, 0x0(r30)
	  fmr       f26, f1
	  mr        r3, r30
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x1BB13C
	  mr        r4, r30
	  lwz       r5, 0xC0(r30)
	  lwz       r12, 0x0(r30)
	  fmr       f30, f1
	  addi      r3, r1, 0x14
	  lfs       f28, 0x58C(r5)
	  lwz       r12, 0x8(r12)
	  li        r31, 0
	  lfs       f29, 0x564(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r29)
	  lfs       f31, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x2C
	  fsubs     f26, f0, f31
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r29)
	  lfs       f31, 0x30(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f0, 0x24(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x44
	  fsubs     f27, f0, f31
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r29)
	  lfs       f31, 0x4C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f27, f27
	  lfs       f2, 0x40(r1)
	  fmuls     f0, f29, f29
	  fsubs     f2, f2, f31
	  fmadds    f1, f26, f26, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x300
	  lfs       f0, -0x38D4(r2)
	  fabs      f2, f30
	  lfs       f1, -0x38D8(r2)
	  fmuls     f0, f0, f28
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x300
	  li        r31, 0x1

	.loc_0x300:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x370
	  mr        r4, r29
	  addi      r3, r1, 0x80
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x84(r1)
	  mr        r3, r30
	  lfs       f2, 0x88(r1)
	  lfs       f0, 0x80(r1)
	  stfs      f0, 0x2C8(r30)
	  stfs      f1, 0x2CC(r30)
	  stfs      f2, 0x2D0(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x300(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3F0

	.loc_0x370:
	  fabs      f1, f30
	  lfs       f0, -0x38D0(r2)
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x3AC
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3F0

	.loc_0x3AC:
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x3F0

	.loc_0x3D0:
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x3F0:
	  psq_l     f31,0x108(r1),0,0
	  lfd       f31, 0x100(r1)
	  psq_l     f30,0xF8(r1),0,0
	  lfd       f30, 0xF0(r1)
	  psq_l     f29,0xE8(r1),0,0
	  lfd       f29, 0xE0(r1)
	  psq_l     f28,0xD8(r1),0,0
	  lfd       f28, 0xD0(r1)
	  psq_l     f27,0xC8(r1),0,0
	  lfd       f27, 0xC0(r1)
	  psq_l     f26,0xB8(r1),0,0
	  lfd       f26, 0xB0(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  lwz       r29, 0xA4(r1)
	  lwz       r0, 0x114(r1)
	  lwz       r28, 0xA0(r1)
	  mtlr      r0
	  addi      r1, r1, 0x110
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80256D0C
 * Size:	000004
 */
void Frog::Obj::attackNaviPosition() { }

/*
 * --INFO--
 * Address:	80256D10
 * Size:	000004
 */
void Frog::StateWait::cleanup(Game::EnemyBase*) { }

/*
 * --INFO--
 * Address:	80256D14
 * Size:	000060
 */
void Frog::StateTurn::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, -0x1
	  lfs       f0, -0x38F8(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r3, 0x2D4(r4)
	  mr        r3, r31
	  stw       r0, 0x230(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x155380
	  mr        r3, r31
	  li        r4, 0x4
	  li        r5, 0
	  bl        -0x151D58
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80256D74
 * Size:	0003AC
 */
void Frog::StateTurn::exec(Game::EnemyBase*)
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
	  stw       r31, 0x7C(r1)
	  stw       r30, 0x78(r1)
	  stw       r29, 0x74(r1)
	  stw       r28, 0x70(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x21FC
	  lwz       r6, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  lfs       f2, 0x3D4(r6)
	  li        r6, 0
	  bl        -0x143D98
	  mr.       r28, r3
	  beq-      .loc_0x2C8
	  lfs       f0, -0x38F8(r2)
	  mr        r4, r28
	  addi      r3, r1, 0x50
	  stfs      f0, 0x2C4(r31)
	  lwz       r12, 0x0(r28)
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f29, 0x334(r5)
	  lfs       f30, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x5C
	  lwz       r12, 0x0(r31)
	  lfs       f26, 0x50(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f27, 0x58(r1)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x5C(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x64(r1)
	  subi      r3, r3, 0x2E20
	  fsubs     f1, f26, f1
	  fsubs     f2, f27, f0
	  bl        -0x221D50
	  bl        0x1BAD74
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x1BAD7C
	  fmr       f31, f1
	  lfs       f0, -0x38D4(r2)
	  lfs       f1, -0x38D8(r2)
	  fmuls     f0, f0, f29
	  fmuls     f28, f31, f30
	  fmuls     f1, f1, f0
	  fabs      f0, f28
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x150
	  lfs       f0, -0x38F8(r2)
	  fcmpo     cr0, f28, f0
	  ble-      .loc_0x14C
	  fmr       f28, f1
	  b         .loc_0x150

	.loc_0x14C:
	  fneg      f28, f1

	.loc_0x150:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f28, f1
	  bl        0x1BACF4
	  stfs      f1, 0x1FC(r31)
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  li        r29, 0
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f28, 0x58C(r5)
	  lfs       f29, 0x564(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r28)
	  lfs       f30, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x2C
	  fsubs     f26, f0, f30
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r28)
	  lfs       f30, 0x30(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x24(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x44
	  fsubs     f27, f0, f30
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r28)
	  lfs       f30, 0x4C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f27, f27
	  lfs       f2, 0x40(r1)
	  fmuls     f0, f29, f29
	  fsubs     f2, f2, f30
	  fmadds    f1, f26, f26, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x27C
	  lfs       f0, -0x38D4(r2)
	  fabs      f2, f31
	  lfs       f1, -0x38D8(r2)
	  fmuls     f0, f0, f28
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x27C
	  li        r29, 0x1

	.loc_0x27C:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x29C
	  stw       r28, 0x230(r31)
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x151D68
	  b         .loc_0x2D8

	.loc_0x29C:
	  fabs      f1, f31
	  lfs       f0, -0x38D0(r2)
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x2D8
	  li        r0, 0x1
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x151D94
	  b         .loc_0x2D8

	.loc_0x2C8:
	  li        r0, 0x1
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x151DA8

	.loc_0x2D8:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1429FC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2FC
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x151DCC

	.loc_0x2FC:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x38F8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x320
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x151DF0

	.loc_0x320:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x35C
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x35C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2D4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x35C:
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
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  lwz       r29, 0x74(r1)
	  lwz       r0, 0xE4(r1)
	  lwz       r28, 0x70(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80257120
 * Size:	0000AC
 */
void Frog::StateTurn::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1557BC
	  lwz       r0, 0x2D4(r31)
	  cmpwi     r0, 0x3
	  bne-      .loc_0x98
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x230(r31)
	  lfs       f0, 0x14(r1)
	  cmplwi    r4, 0
	  lfs       f1, 0x18(r1)
	  lfs       f2, 0x1C(r1)
	  beq-      .loc_0x78
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  lfs       f2, 0x10(r1)

	.loc_0x78:
	  stfs      f0, 0x2C8(r31)
	  mr        r3, r31
	  stfs      f1, 0x2CC(r31)
	  stfs      f2, 0x2D0(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x300(r12)
	  mtctr     r12
	  bctrl

	.loc_0x98:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802571CC
 * Size:	0000E8
 */
void Frog::StateJump::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x38F8(r2)
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r3, r30
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x155840
	  lwz       r0, 0x1F4(r30)
	  cmpwi     r0, 0
	  beq-      .loc_0xB4
	  lwz       r31, 0xC0(r30)
	  bl        -0x18DC80
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x38E0(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x38F0(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x38EC(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, 0x86C(r31)
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xB4
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xCC

	.loc_0xB4:
	  mr        r3, r30
	  bl        0x2224
	  mr        r3, r30
	  li        r4, 0x5
	  li        r5, 0
	  bl        -0x152290

	.loc_0xCC:
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
 * Address:	802572B4
 * Size:	000118
 */
void Frog::StateJump::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x104
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xE4
	  mr        r3, r31
	  bl        0x1D04
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f2, -0x38F8(r2)
	  li        r4, 0
	  lfs       f1, 0x514(r5)
	  lfs       f3, 0x4EC(r5)
	  lfs       f4, -0x38CC(r2)
	  bl        -0x143B78
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f2, -0x38F8(r2)
	  li        r4, 0
	  lfs       f1, 0x514(r5)
	  lfs       f3, 0x4EC(r5)
	  lfs       f4, -0x38CC(r2)
	  bl        -0x143E54
	  lwz       r0, 0x280(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xB4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x582C
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x104

	.loc_0xB4:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x5825
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x104

	.loc_0xE4:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x104
	  lwz       r12, 0x0(r3)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x104:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802573CC
 * Size:	000048
 */
void Frog::StateJump::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r4)
	  bl        -0x155A74
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80257414
 * Size:	000058
 */
void Frog::StateJumpWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x4
	  stw       r0, 0x1E0(r4)
	  bl        -0x155A78
	  mr        r3, r31
	  li        r4, 0x6
	  li        r5, 0
	  bl        -0x152450
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025746C
 * Size:	00008C
 */
void Frog::StateJumpWait::exec(Game::EnemyBase*)
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
	  lwz       r3, 0xC0(r4)
	  lfs       f1, 0x2C0(r4)
	  lfs       f0, 0x81C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x38
	  mr        r3, r31
	  bl        -0x152200

	.loc_0x38:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x74
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x74
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x74:
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
 * Address:	802574F8
 * Size:	00003C
 */
void Frog::StateJumpWait::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  bl        -0x155BA4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80257534
 * Size:	00008C
 */
void Frog::StateFall::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x38F8(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stb       r0, 0x2D9(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,30,28
	  stw       r0, 0x1E0(r4)
	  bl        -0x155BB0
	  mr        r3, r31
	  li        r4, 0x7
	  li        r5, 0
	  bl        -0x152588
	  lwz       r3, 0xC0(r31)
	  lfs       f0, -0x38F8(r2)
	  lfs       f1, 0x894(r3)
	  fneg      f1, f1
	  stfs      f0, 0x1C8(r31)
	  stfs      f1, 0x1CC(r31)
	  stfs      f0, 0x1D0(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802575C0
 * Size:	000040
 */
void Frog::StateFall::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0xC8(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x30
	  lwz       r12, 0x0(r3)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
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
 * Address:	80257600
 * Size:	000038
 */
void Frog::StateFall::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stb       r0, 0x2D9(r4)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r4)
	  bl        -0x155CA8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80257638
 * Size:	000074
 */
void Frog::StateAttack::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stb       r0, 0x2D9(r4)
	  bl        0x1B44
	  lfs       f0, -0x38F8(r2)
	  mr        r3, r31
	  stfs      f0, 0x2C4(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  bl        -0x155CA8
	  lfs       f0, -0x38F8(r2)
	  mr        r3, r31
	  li        r4, 0x8
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x152690
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802576AC
 * Size:	00016C
 */
void Frog::StateAttack::exec(Game::EnemyBase*)
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
	  lwz       r5, 0x188(r4)
	  mr        r30, r3
	  mr        r31, r4
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x13C
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x13C
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x38F8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x80
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x13C

	.loc_0x80:
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x8
	  lfs       f31, 0x198(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f30, 0x19C(r31)
	  lfs       f29, 0x1A0(r31)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  fsubs     f3, f0, f30
	  lfs       f1, 0x10(r1)
	  fsubs     f2, f2, f31
	  lfs       f0, -0x38F8(r2)
	  fsubs     f1, f1, f29
	  fmuls     f3, f3, f3
	  fmuls     f4, f1, f1
	  fmadds    f1, f2, f2, f3
	  fadds     f1, f4, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xE4
	  ble-      .loc_0xE8
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0xE8

	.loc_0xE4:
	  fmr       f1, f0

	.loc_0xE8:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x35C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x11C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x13C

	.loc_0x11C:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x13C:
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  psq_l     f29,0x28(r1),0,0
	  lfd       f29, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80257818
 * Size:	000044
 */
void Frog::StateAttack::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x1CAC
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  bl        -0x155EC8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025785C
 * Size:	000054
 */
void Frog::StateFail::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x38F8(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x20C(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x155EBC
	  mr        r3, r31
	  li        r4, 0x9
	  li        r5, 0
	  bl        -0x152894
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802578B0
 * Size:	0001A8
 */
void Frog::StateFail::exec(Game::EnemyBase*)
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
	  lwz       r5, 0x188(r4)
	  mr        r30, r3
	  mr        r31, r4
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x178
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x178
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x38F8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x80
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x178

	.loc_0x80:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1432E0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x178

	.loc_0xB8:
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lfs       f31, 0x198(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f30, 0x19C(r31)
	  lfs       f29, 0x1A0(r31)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0xC(r1)
	  lfs       f2, 0x8(r1)
	  fsubs     f3, f0, f30
	  lfs       f1, 0x10(r1)
	  fsubs     f2, f2, f31
	  lfs       f0, -0x38F8(r2)
	  fsubs     f1, f1, f29
	  fmuls     f3, f3, f3
	  fmuls     f4, f1, f1
	  fmadds    f1, f2, f2, f3
	  fadds     f1, f4, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x120
	  ble-      .loc_0x124
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x124

	.loc_0x120:
	  fmr       f1, f0

	.loc_0x124:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x35C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x158
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x8
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x178

	.loc_0x158:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x178:
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  psq_l     f29,0x28(r1),0,0
	  lfd       f29, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80257A58
 * Size:	000024
 */
void Frog::StateFail::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x1560EC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80257A7C
 * Size:	000044
 */
void Frog::StateTurnToHome::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x38F8(r2)
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  li        r5, 0
	  stw       r0, 0x2D4(r4)
	  li        r4, 0x4
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x152AA8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80257AC0
 * Size:	000224
 */
void Frog::StateTurnToHome::exec(Game::EnemyBase*)
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
	  stfd      f27, 0x30(r1)
	  psq_st    f27,0x38(r1),0,0
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  lwz       r12, 0x0(r4)
	  mr        r30, r3
	  lwz       r5, 0xC0(r4)
	  mr        r31, r4
	  lwz       r12, 0x8(r12)
	  addi      r3, r1, 0x14
	  lfs       f31, 0x198(r4)
	  lfs       f27, 0x1A0(r4)
	  lfs       f28, 0x58C(r5)
	  lfs       f29, 0x334(r5)
	  lfs       f30, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  lfs       f4, 0x14(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x1C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f3, 0x18(r1)
	  fsubs     f1, f31, f4
	  fsubs     f2, f27, f0
	  stfs      f4, 0x8(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        -0x222A50
	  bl        0x1BA074
	  lwz       r12, 0x0(r31)
	  fmr       f31, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f31
	  bl        0x1BA07C
	  fmr       f31, f1
	  lfs       f0, -0x38D4(r2)
	  lfs       f1, -0x38D8(r2)
	  fmuls     f0, f0, f29
	  fmuls     f29, f31, f30
	  fmuls     f1, f1, f0
	  fabs      f0, f29
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x104
	  lfs       f0, -0x38F8(r2)
	  fcmpo     cr0, f29, f0
	  ble-      .loc_0x100
	  fmr       f29, f1
	  b         .loc_0x104

	.loc_0x100:
	  fneg      f29, f1

	.loc_0x104:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f29, f1
	  bl        0x1B9FF4
	  lfs       f0, -0x38D4(r2)
	  fabs      f2, f31
	  stfs      f1, 0x1FC(r31)
	  fmuls     f0, f0, f28
	  lfs       f1, -0x38D8(r2)
	  lfs       f3, 0x1FC(r31)
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  stfs      f3, 0x1A8(r31)
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x160
	  li        r0, 0x9
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x15297C

	.loc_0x160:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1435D0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x184
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x1529A0

	.loc_0x184:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x38F8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x1A8
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x1529C4

	.loc_0x1A8:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1E4
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x1E4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2D4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1E4:
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  psq_l     f29,0x58(r1),0,0
	  lfd       f29, 0x50(r1)
	  psq_l     f28,0x48(r1),0,0
	  lfd       f28, 0x40(r1)
	  psq_l     f27,0x38(r1),0,0
	  lfd       f27, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r0, 0x84(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80257CE4
 * Size:	000060
 */
void Frog::StateTurnToHome::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  lwz       r0, 0x2D4(r4)
	  cmpwi     r0, 0x3
	  bne-      .loc_0x4C
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xC(r1)
	  lfs       f2, 0x10(r1)
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x2C8(r31)
	  stfs      f1, 0x2CC(r31)
	  stfs      f2, 0x2D0(r31)

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
 * Address:	80257D44
 * Size:	00005C
 */
void Frog::StateGoHome::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, -0x1
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  lfs       f0, -0x38F8(r2)
	  stw       r5, 0x2D4(r4)
	  li        r4, 0x3
	  li        r5, 0
	  stb       r0, 0x2D8(r3)
	  stfs      f0, 0x2C0(r3)
	  lwz       r0, 0x1E0(r3)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r3)
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x152D88
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80257DA0
 * Size:	000200
 */
void Frog::StateGoHome::exec(Game::EnemyBase*)
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
	  lbz       r0, 0x2D8(r4)
	  mr        r30, r3
	  mr        r31, r4
	  cmplwi    r0, 0
	  beq-      .loc_0xE4
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x19C(r31)
	  mr        r3, r31
	  lfs       f2, 0x1A0(r31)
	  addi      r4, r1, 0x14
	  lfs       f0, 0x198(r31)
	  lfs       f31, 0x8(r1)
	  stfs      f0, 0x14(r1)
	  lfs       f30, 0x10(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f2, 0x1C(r1)
	  lwz       r5, 0xC0(r31)
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x142848
	  lfs       f0, 0x1C(r1)
	  lfs       f1, 0x14(r1)
	  fsubs     f2, f30, f0
	  lwz       r3, 0xC0(r31)
	  fsubs     f3, f31, f1
	  lfs       f0, 0x384(r3)
	  fmuls     f1, f2, f2
	  fmuls     f0, f0, f0
	  fmadds    f1, f3, f3, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xC8
	  li        r0, 0x1
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x152BC0
	  b         .loc_0xF4

	.loc_0xC8:
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, -0x38C8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xF4
	  mr        r3, r31
	  bl        0x1248
	  b         .loc_0xF4

	.loc_0xE4:
	  lfs       f0, -0x38F8(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)

	.loc_0xF4:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x143844
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x118
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x152C14

	.loc_0x118:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x38F8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x13C
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2D4(r31)
	  bl        -0x152C38

	.loc_0x13C:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C0(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1D8
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x184
	  li        r0, 0x1
	  stb       r0, 0x2D8(r31)
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x1D8

	.loc_0x184:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x1B0
	  li        r0, 0
	  lfs       f1, -0x38C4(r2)
	  stb       r0, 0x2D8(r31)
	  mr        r3, r31
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  bl        0x15C4
	  b         .loc_0x1D8

	.loc_0x1B0:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x1D8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2D4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1D8:
	  psq_l     f31,0x48(r1),0,0
	  lfd       f31, 0x40(r1)
	  psq_l     f30,0x38(r1),0,0
	  lfd       f30, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r0, 0x54(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80257FA0
 * Size:	00010C
 */
void Frog::StateGoHome::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x2D4(r4)
	  cmpwi     r0, 0x3
	  bne-      .loc_0xF8
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x8
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f10, 0x8(r1)
	  lfs       f4, 0x198(r31)
	  lfs       f3, 0x10(r1)
	  lfs       f6, 0x1A0(r31)
	  fsubs     f7, f4, f10
	  lfs       f8, -0x38F8(r2)
	  fsubs     f9, f6, f3
	  lfs       f2, 0xC(r1)
	  fmadds    f0, f7, f7, f8
	  lfs       f5, 0x19C(r31)
	  fmuls     f1, f9, f9
	  fadds     f1, f1, f0
	  fcmpo     cr0, f1, f8
	  ble-      .loc_0x88
	  ble-      .loc_0x8C
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x8C

	.loc_0x88:
	  fmr       f1, f8

	.loc_0x8C:
	  lfs       f0, -0x38F8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xB0
	  lfs       f0, -0x38F0(r2)
	  fdivs     f0, f0, f1
	  fmuls     f7, f7, f0
	  fmuls     f8, f8, f0
	  fmuls     f9, f9, f0
	  b         .loc_0xB4

	.loc_0xB0:
	  fmr       f1, f0

	.loc_0xB4:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x564(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xD4
	  stfs      f4, 0x2C8(r31)
	  stfs      f5, 0x2CC(r31)
	  stfs      f6, 0x2D0(r31)
	  b         .loc_0xF8

	.loc_0xD4:
	  fmuls     f7, f7, f0
	  fmuls     f8, f8, f0
	  fmuls     f9, f9, f0
	  fadds     f7, f7, f10
	  fadds     f8, f8, f2
	  fadds     f9, f9, f3
	  stfs      f7, 0x2C8(r31)
	  stfs      f8, 0x2CC(r31)
	  stfs      f9, 0x2D0(r31)

	.loc_0xF8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}
} // namespace Game
