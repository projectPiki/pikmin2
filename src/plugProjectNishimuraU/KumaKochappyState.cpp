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
 * Address:	802E4EE8
 * Size:	00027C
 */
void Game::KumaKochappy::FSM::init((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x7
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1B469C
	  li        r3, 0x10
	  bl        -0x2C1064
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  addi      r6, r5, 0x409C
	  subi      r5, r2, 0x1500
	  stw       r7, 0x4(r4)
	  addi      r0, r3, 0x4078
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x64:
	  mr        r3, r31
	  bl        -0x1B4648
	  li        r3, 0x10
	  bl        -0x2C10B4
	  mr.       r4, r3
	  beq-      .loc_0xB8
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  addi      r6, r5, 0x409C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x14F8
	  addi      r0, r3, 0x4054
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xB8:
	  mr        r3, r31
	  bl        -0x1B469C
	  li        r3, 0x10
	  bl        -0x2C1108
	  mr.       r4, r3
	  beq-      .loc_0x10C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  addi      r6, r5, 0x409C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x14F0
	  addi      r0, r3, 0x4030
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x10C:
	  mr        r3, r31
	  bl        -0x1B46F0
	  li        r3, 0x10
	  bl        -0x2C115C
	  mr.       r4, r3
	  beq-      .loc_0x160
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  addi      r6, r5, 0x409C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x14E8
	  addi      r0, r3, 0x400C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x160:
	  mr        r3, r31
	  bl        -0x1B4744
	  li        r3, 0x10
	  bl        -0x2C11B0
	  mr.       r4, r3
	  beq-      .loc_0x1B4
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  addi      r6, r5, 0x409C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x14E0
	  addi      r0, r3, 0x3FE8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1B4:
	  mr        r3, r31
	  bl        -0x1B4798
	  li        r3, 0x10
	  bl        -0x2C1204
	  mr.       r4, r3
	  beq-      .loc_0x208
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  addi      r6, r5, 0x409C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x14D8
	  addi      r0, r3, 0x3FC4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x208:
	  mr        r3, r31
	  bl        -0x1B47EC
	  li        r3, 0x10
	  bl        -0x2C1258
	  mr.       r4, r3
	  beq-      .loc_0x260
	  lis       r3, 0x804B
	  lis       r6, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r5, 0x8049
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  lis       r3, 0x804D
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  addi      r6, r6, 0x409C
	  subi      r5, r5, 0x32D0
	  addi      r0, r3, 0x3FA0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x260:
	  mr        r3, r31
	  bl        -0x1B4844
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E5164
 * Size:	000050
 */
void Game::KumaKochappy::StateDead::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1DFA5C
	  lfs       f0, -0x14D0(r2)
	  mr        r3, r31
	  li        r4, 0x1
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1E0198
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E51B4
 * Size:	000044
 */
void Game::KumaKochappy::StateDead::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x188(r4)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x34
	  mr        r3, r4
	  li        r4, 0
	  bl        -0x1AA0F4

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E51F8
 * Size:	000004
 */
void Game::KumaKochappy::StateDead::cleanup((Game::EnemyBase*)) { }

/*
 * --INFO--
 * Address:	802E51FC
 * Size:	000058
 */
void Game::KumaKochappy::StatePress::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x14D0(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x200(r4)
	  bl        -0x1DFAFC
	  lfs       f0, -0x14D0(r2)
	  mr        r3, r31
	  li        r4, 0x4
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1E0238
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E5254
 * Size:	000044
 */
void Game::KumaKochappy::StatePress::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x188(r4)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x34
	  mr        r3, r4
	  li        r4, 0
	  bl        -0x1AA194

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E5298
 * Size:	000004
 */
void Game::KumaKochappy::StatePress::cleanup((Game::EnemyBase*)) { }

/*
 * --INFO--
 * Address:	802E529C
 * Size:	000054
 */
void Game::KumaKochappy::StateWait::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x14D0(r2)
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  li        r5, 0
	  stfs      f0, 0x2C8(r4)
	  li        r4, 0x6
	  stw       r0, 0x2CC(r3)
	  lwz       r0, 0x1E0(r3)
	  ori       r0, r0, 0x400
	  stw       r0, 0x1E0(r3)
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x1E02D8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E52F0
 * Size:	0003A8
 */
void Game::KumaKochappy::StateWait::exec((Game::EnemyBase*))
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
	  stfd      f28, 0xB0(r1)
	  psq_st    f28,0xB8(r1),0,0
	  stfd      f27, 0xA0(r1)
	  psq_st    f27,0xA8(r1),0,0
	  stfd      f26, 0x90(r1)
	  psq_st    f26,0x98(r1),0,0
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  stw       r29, 0x84(r1)
	  stw       r28, 0x80(r1)
	  lfs       f0, -0x14D0(r2)
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
	  b         .loc_0x358

	.loc_0x84:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x1D0D24
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xBC
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x358

	.loc_0xBC:
	  mr        r3, r30
	  bl        0x27D8
	  mr.       r29, r3
	  beq-      .loc_0x2A8
	  mr        r4, r29
	  lwz       r5, 0xC0(r30)
	  lwz       r12, 0x0(r29)
	  addi      r3, r1, 0x68
	  lfs       f30, 0x58C(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f31, 0x564(r5)
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
	  bl        -0x2B0338
	  bl        0x12C78C
	  lwz       r12, 0x0(r30)
	  fmr       f26, f1
	  mr        r3, r30
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x12C794
	  mr        r4, r30
	  fmr       f28, f1
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x14
	  li        r31, 0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x2C
	  fsubs     f26, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x30(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f0, 0x24(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x44
	  fsubs     f27, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x4C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f27, f27
	  lfs       f2, 0x40(r1)
	  fmuls     f0, f31, f31
	  fsubs     f2, f2, f29
	  fmadds    f1, f26, f26, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x278
	  lfs       f0, -0x14C8(r2)
	  fabs      f2, f28
	  lfs       f1, -0x14CC(r2)
	  fmuls     f0, f0, f30
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x278
	  li        r31, 0x1

	.loc_0x278:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x294
	  li        r0, 0x3
	  mr        r3, r30
	  stw       r0, 0x2CC(r30)
	  bl        -0x1E02DC
	  b         .loc_0x2C8

	.loc_0x294:
	  li        r0, 0x5
	  mr        r3, r30
	  stw       r0, 0x2CC(r30)
	  bl        -0x1E02F0
	  b         .loc_0x2C8

	.loc_0x2A8:
	  mr        r3, r30
	  bl        0x2428
	  cmplwi    r3, 0
	  beq-      .loc_0x2C8
	  li        r0, 0x6
	  mr        r3, r30
	  stw       r0, 0x2CC(r30)
	  bl        -0x1E0314

	.loc_0x2C8:
	  mr        r3, r30
	  bl        -0x1DE2BC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2E4
	  lfs       f1, -0x14C4(r2)
	  mr        r3, r30
	  bl        -0x1DE240

	.loc_0x2E4:
	  lwz       r3, 0x188(r30)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x358
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x330
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x596A
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x358

	.loc_0x330:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x358
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r6, 0
	  lwz       r5, 0x2CC(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x358:
	  psq_l     f31,0xE8(r1),0,0
	  lfd       f31, 0xE0(r1)
	  psq_l     f30,0xD8(r1),0,0
	  lfd       f30, 0xD0(r1)
	  psq_l     f29,0xC8(r1),0,0
	  lfd       f29, 0xC0(r1)
	  psq_l     f28,0xB8(r1),0,0
	  lfd       f28, 0xB0(r1)
	  psq_l     f27,0xA8(r1),0,0
	  lfd       f27, 0xA0(r1)
	  psq_l     f26,0x98(r1),0,0
	  lfd       f26, 0x90(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r29, 0x84(r1)
	  lwz       r0, 0xF4(r1)
	  lwz       r28, 0x80(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E5698
 * Size:	00003C
 */
void Game::KumaKochappy::StateWait::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1DDF44
	  lfs       f1, -0x14C0(r2)
	  mr        r3, r31
	  bl        -0x1DE32C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E56D4
 * Size:	000058
 */
void Game::KumaKochappy::StateAttack::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x14D0(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2CC(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x1E3D38
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x1E0710
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E572C
 * Size:	0004CC
 */
void Game::KumaKochappy::StateAttack::exec((Game::EnemyBase*))
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
	  stfd      f26, 0xA0(r1)
	  psq_st    f26,0xA8(r1),0,0
	  stw       r31, 0x9C(r1)
	  stw       r30, 0x98(r1)
	  stw       r29, 0x94(r1)
	  stw       r28, 0x90(r1)
	  lfs       f0, -0x14D0(r2)
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
	  b         .loc_0x47C

	.loc_0x84:
	  lwz       r5, 0x188(r30)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x47C
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x124
	  lwz       r6, 0xC0(r30)
	  mr        r3, r30
	  li        r4, 0
	  li        r5, 0
	  lfs       f1, 0x5B4(r6)
	  lfs       f2, 0x5DC(r6)
	  lfs       f3, 0x604(r6)
	  bl        -0x1D1588
	  mr        r31, r3
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x1D1CC4
	  add       r29, r31, r3
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r31, 0xC0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f4, f1
	  lfs       f1, 0x53C(r31)
	  lfs       f2, 0x4C4(r31)
	  mr        r3, r30
	  lfs       f3, 0x4EC(r31)
	  li        r4, 0
	  bl        -0x1D2714
	  cmpwi     r29, 0
	  bne-      .loc_0x47C
	  mr        r3, r30
	  li        r4, 0x8
	  li        r5, 0
	  bl        -0x1E0844
	  b         .loc_0x47C

	.loc_0x124:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x144
	  lwz       r5, 0xC0(r30)
	  mr        r3, r30
	  li        r4, 0
	  lfs       f1, 0x81C(r5)
	  bl        -0x1D19E4
	  b         .loc_0x47C

	.loc_0x144:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x47C
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x174
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x47C

	.loc_0x174:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x1D1250
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1AC
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x47C

	.loc_0x1AC:
	  mr        r3, r30
	  bl        0x22AC
	  mr.       r29, r3
	  beq-      .loc_0x3B8
	  mr        r4, r29
	  lwz       r5, 0xC0(r30)
	  lwz       r12, 0x0(r29)
	  addi      r3, r1, 0x68
	  lfs       f30, 0x58C(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f31, 0x564(r5)
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
	  bl        -0x2B0864
	  bl        0x12C260
	  lwz       r12, 0x0(r30)
	  fmr       f26, f1
	  mr        r3, r30
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x12C268
	  mr        r4, r30
	  fmr       f28, f1
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x14
	  li        r31, 0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x2C
	  fsubs     f26, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x30(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f0, 0x24(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x44
	  fsubs     f27, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x4C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f27, f27
	  lfs       f2, 0x40(r1)
	  fmuls     f0, f31, f31
	  fsubs     f2, f2, f29
	  fmadds    f1, f26, f26, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x368
	  lfs       f0, -0x14C8(r2)
	  fabs      f2, f28
	  lfs       f1, -0x14CC(r2)
	  fmuls     f0, f0, f30
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x368
	  li        r31, 0x1

	.loc_0x368:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x394
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x47C

	.loc_0x394:
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x47C

	.loc_0x3B8:
	  mr        r3, r30
	  bl        0x1EDC
	  mr.       r31, r3
	  beq-      .loc_0x45C
	  mr        r4, r30
	  addi      r3, r1, 0x80
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x88(r1)
	  lfs       f0, 0x8(r31)
	  lwz       r3, 0xC0(r30)
	  fsubs     f3, f1, f0
	  lfs       f2, 0x80(r1)
	  lfs       f1, 0x0(r31)
	  lfs       f0, 0x384(r3)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  fmuls     f0, f0, f0
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x438
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x47C

	.loc_0x438:
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x47C

	.loc_0x45C:
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x47C:
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
	  psq_l     f26,0xA8(r1),0,0
	  lfd       f26, 0xA0(r1)
	  lwz       r31, 0x9C(r1)
	  lwz       r30, 0x98(r1)
	  lwz       r29, 0x94(r1)
	  lwz       r0, 0x104(r1)
	  lwz       r28, 0x90(r1)
	  mtlr      r0
	  addi      r1, r1, 0x100
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E5BF8
 * Size:	000024
 */
void Game::KumaKochappy::StateAttack::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x1E428C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E5C1C
 * Size:	000044
 */
void Game::KumaKochappy::StateFlick::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x14D0(r2)
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  li        r5, 0
	  stw       r0, 0x2CC(r4)
	  li        r4, 0x2
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x1E0C48
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E5C60
 * Size:	0004D0
 */
void Game::KumaKochappy::StateFlick::exec((Game::EnemyBase*))
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
	  stfd      f26, 0xA0(r1)
	  psq_st    f26,0xA8(r1),0,0
	  stw       r31, 0x9C(r1)
	  stw       r30, 0x98(r1)
	  stw       r29, 0x94(r1)
	  stw       r28, 0x90(r1)
	  lfs       f0, -0x14D0(r2)
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
	  b         .loc_0x480

	.loc_0x84:
	  lwz       r5, 0x188(r30)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x480
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x148
	  mr        r3, r30
	  lwz       r31, 0xC0(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f4, f1
	  lfs       f1, 0x53C(r31)
	  lfs       f2, 0x4C4(r31)
	  mr        r3, r30
	  lfs       f3, 0x4EC(r31)
	  li        r4, 0
	  bl        -0x1D2C14
	  mr        r3, r30
	  lwz       r31, 0xC0(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f4, f1
	  lfs       f1, 0x514(r31)
	  lfs       f2, 0x4C4(r31)
	  mr        r3, r30
	  lfs       f3, 0x4EC(r31)
	  li        r4, 0
	  bl        -0x1D2890
	  mr        r3, r30
	  lwz       r31, 0xC0(r30)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f4, f1
	  lfs       f1, 0x514(r31)
	  lfs       f2, 0x4C4(r31)
	  mr        r3, r30
	  lfs       f3, 0x4EC(r31)
	  li        r4, 0
	  bl        -0x1D2608
	  lfs       f0, -0x14D0(r2)
	  stfs      f0, 0x20C(r30)
	  b         .loc_0x480

	.loc_0x148:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x480
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x178
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x480

	.loc_0x178:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x1D1788
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1B0
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x480

	.loc_0x1B0:
	  mr        r3, r30
	  bl        0x1D74
	  mr.       r29, r3
	  beq-      .loc_0x3BC
	  mr        r4, r29
	  lwz       r5, 0xC0(r30)
	  lwz       r12, 0x0(r29)
	  addi      r3, r1, 0x68
	  lfs       f30, 0x58C(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f31, 0x564(r5)
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
	  bl        -0x2B0D9C
	  bl        0x12BD28
	  lwz       r12, 0x0(r30)
	  fmr       f26, f1
	  mr        r3, r30
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x12BD30
	  mr        r4, r30
	  fmr       f28, f1
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x14
	  li        r31, 0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x2C
	  fsubs     f26, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x30(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f0, 0x24(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x44
	  fsubs     f27, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r29)
	  lfs       f29, 0x4C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f27, f27
	  lfs       f2, 0x40(r1)
	  fmuls     f0, f31, f31
	  fsubs     f2, f2, f29
	  fmadds    f1, f26, f26, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x36C
	  lfs       f0, -0x14C8(r2)
	  fabs      f2, f28
	  lfs       f1, -0x14CC(r2)
	  fmuls     f0, f0, f30
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x36C
	  li        r31, 0x1

	.loc_0x36C:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x398
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x480

	.loc_0x398:
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x480

	.loc_0x3BC:
	  mr        r3, r30
	  bl        0x19A4
	  mr.       r31, r3
	  beq-      .loc_0x460
	  mr        r4, r30
	  addi      r3, r1, 0x80
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x88(r1)
	  lfs       f0, 0x8(r31)
	  lwz       r3, 0xC0(r30)
	  fsubs     f3, f1, f0
	  lfs       f2, 0x80(r1)
	  lfs       f1, 0x0(r31)
	  lfs       f0, 0x384(r3)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  fmuls     f0, f0, f0
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x43C
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x480

	.loc_0x43C:
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x480

	.loc_0x460:
	  mr        r3, r28
	  mr        r4, r30
	  lwz       r12, 0x0(r28)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x480:
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
	  psq_l     f26,0xA8(r1),0,0
	  lfd       f26, 0xA0(r1)
	  lwz       r31, 0x9C(r1)
	  lwz       r30, 0x98(r1)
	  lwz       r29, 0x94(r1)
	  lwz       r0, 0x104(r1)
	  lwz       r28, 0x90(r1)
	  mtlr      r0
	  addi      r1, r1, 0x100
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E6130
 * Size:	000004
 */
void Game::KumaKochappy::StateFlick::cleanup((Game::EnemyBase*)) { }

/*
 * --INFO--
 * Address:	802E6134
 * Size:	000034
 */
void Game::KumaKochappy::StateWalk::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x3
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  li        r5, 0
	  stw       r0, 0x2CC(r3)
	  bl        -0x1E1150
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E6168
 * Size:	000538
 */
void Game::KumaKochappy::StateWalk::exec((Game::EnemyBase*))
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
	  stmw      r27, 0x9C(r1)
	  lfs       f0, -0x14D0(r2)
	  mr        r31, r4
	  lfs       f1, 0x200(r4)
	  mr        r29, r3
	  li        r30, 0x1
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x7C
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x4F4

	.loc_0x7C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1D1B94
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB4
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x4F4

	.loc_0xB4:
	  mr        r3, r31
	  bl        0x1968
	  mr.       r27, r3
	  beq-      .loc_0x314
	  mr        r4, r27
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r27)
	  addi      r3, r1, 0x50
	  lfs       f29, 0x334(r5)
	  lwz       r12, 0x8(r12)
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
	  bl        -0x2B1180
	  bl        0x12B944
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x12B94C
	  fmr       f31, f1
	  lfs       f0, -0x14C8(r2)
	  lfs       f1, -0x14CC(r2)
	  fmuls     f0, f0, f29
	  fmuls     f28, f31, f30
	  fmuls     f1, f1, f0
	  fabs      f0, f28
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x18C
	  lfs       f0, -0x14D0(r2)
	  fcmpo     cr0, f28, f0
	  ble-      .loc_0x188
	  fmr       f28, f1
	  b         .loc_0x18C

	.loc_0x188:
	  fneg      f28, f1

	.loc_0x18C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f28, f1
	  bl        0x12B8C4
	  stfs      f1, 0x1FC(r31)
	  mr        r4, r31
	  addi      r3, r1, 0x14
	  li        r28, 0
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f28, 0x58C(r5)
	  lfs       f29, 0x564(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r27
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r27)
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
	  mr        r4, r27
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r27)
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
	  mr        r4, r27
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r27)
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
	  bge-      .loc_0x2B8
	  lfs       f0, -0x14C8(r2)
	  fabs      f2, f31
	  lfs       f1, -0x14CC(r2)
	  fmuls     f0, f0, f28
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x2B8
	  li        r28, 0x1

	.loc_0x2B8:
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x2E0
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1E1194
	  lfs       f1, -0x14C4(r2)
	  mr        r3, r31
	  bl        -0x1DF0B0
	  b         .loc_0x3A8

	.loc_0x2E0:
	  lwz       r3, 0xC0(r31)
	  fabs      f2, f31
	  lfs       f0, -0x14C8(r2)
	  lfs       f3, 0x58C(r3)
	  lfs       f1, -0x14CC(r2)
	  frsp      f2, f2
	  fmuls     f0, f0, f3
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0x3A8
	  li        r30, 0
	  b         .loc_0x3A8

	.loc_0x314:
	  mr        r3, r31
	  bl        0x1544
	  mr.       r28, r3
	  beq-      .loc_0x398
	  mr        r4, r31
	  addi      r3, r1, 0x80
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x88(r1)
	  lfs       f0, 0x8(r28)
	  lwz       r3, 0xC0(r31)
	  fsubs     f3, f1, f0
	  lfs       f2, 0x80(r1)
	  lfs       f1, 0x0(r28)
	  lfs       f0, 0x384(r3)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  fmuls     f0, f0, f0
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x384
	  li        r0, 0x2
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1E1244
	  b         .loc_0x3A8

	.loc_0x384:
	  li        r0, 0x6
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1E1258
	  b         .loc_0x3A8

	.loc_0x398:
	  li        r0, 0x2
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1E126C

	.loc_0x3A8:
	  mr        r3, r31
	  bl        -0x1DF214
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3CC
	  lfs       f0, -0x14D0(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  b         .loc_0x4B8

	.loc_0x3CC:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x444
	  mr        r3, r31
	  lwz       r4, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  lfs       f28, 0x2E4(r4)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  bl        -0x216D3C
	  mr        r3, r31
	  lfs       f2, 0x1D4(r31)
	  lwz       r12, 0x0(r31)
	  frsp      f26, f1
	  lfs       f31, 0x1D8(r31)
	  lfs       f0, 0x1DC(r31)
	  lwz       r12, 0x64(r12)
	  stfs      f2, 0x74(r1)
	  stfs      f31, 0x78(r1)
	  stfs      f0, 0x7C(r1)
	  mtctr     r12
	  bctrl
	  bl        -0x2172D8
	  fmuls     f0, f28, f26
	  frsp      f1, f1
	  stfs      f0, 0x1D4(r31)
	  fmuls     f0, f28, f1
	  stfs      f31, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  b         .loc_0x4B8

	.loc_0x444:
	  mr        r3, r31
	  lwz       r4, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  lfs       f1, -0x14BC(r2)
	  lfs       f0, 0x2E4(r4)
	  lwz       r12, 0x64(r12)
	  fmuls     f28, f1, f0
	  mtctr     r12
	  bctrl
	  bl        -0x216DB4
	  mr        r3, r31
	  lfs       f2, 0x1D4(r31)
	  lwz       r12, 0x0(r31)
	  frsp      f26, f1
	  lfs       f31, 0x1D8(r31)
	  lfs       f0, 0x1DC(r31)
	  lwz       r12, 0x64(r12)
	  stfs      f2, 0x68(r1)
	  stfs      f31, 0x6C(r1)
	  stfs      f0, 0x70(r1)
	  mtctr     r12
	  bctrl
	  bl        -0x217350
	  fmuls     f0, f28, f26
	  frsp      f1, f1
	  stfs      f0, 0x1D4(r31)
	  fmuls     f0, f28, f1
	  stfs      f31, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)

	.loc_0x4B8:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x4F4
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x4F4
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  li        r6, 0
	  lwz       r5, 0x2CC(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4F4:
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
	  lmw       r27, 0x9C(r1)
	  lwz       r0, 0x114(r1)
	  mtlr      r0
	  addi      r1, r1, 0x110
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E66A0
 * Size:	000028
 */
void Game::KumaKochappy::StateWalk::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x14C0(r2)
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x1DF324
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E66C8
 * Size:	00004C
 */
void Game::KumaKochappy::StateWalkPath::init((Game::EnemyBase*,
                                              Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0x3
	  stw       r0, 0x2CC(r31)
	  mr        r3, r31
	  bl        -0x1E16EC
	  lfs       f1, -0x14B8(r2)
	  mr        r3, r31
	  bl        -0x1DF36C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E6714
 * Size:	000534
 */
void Game::KumaKochappy::StateWalkPath::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  stw       r0, 0x124(r1)
	  stfd      f31, 0x110(r1)
	  psq_st    f31,0x118(r1),0,0
	  stfd      f30, 0x100(r1)
	  psq_st    f30,0x108(r1),0,0
	  stfd      f29, 0xF0(r1)
	  psq_st    f29,0xF8(r1),0,0
	  stfd      f28, 0xE0(r1)
	  psq_st    f28,0xE8(r1),0,0
	  stfd      f27, 0xD0(r1)
	  psq_st    f27,0xD8(r1),0,0
	  stfd      f26, 0xC0(r1)
	  psq_st    f26,0xC8(r1),0,0
	  stw       r31, 0xBC(r1)
	  stw       r30, 0xB8(r1)
	  stw       r29, 0xB4(r1)
	  stw       r28, 0xB0(r1)
	  lfs       f0, -0x14D0(r2)
	  mr        r31, r4
	  lfs       f1, 0x200(r4)
	  mr        r30, r3
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x84
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x4E4

	.loc_0x84:
	  mr        r3, r31
	  li        r4, 0x1
	  bl        -0x1D2148
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xBC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x4E4

	.loc_0xBC:
	  mr        r3, r31
	  bl        0x13B4
	  mr.       r28, r3
	  beq-      .loc_0x2B4
	  mr        r4, r28
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r28)
	  addi      r3, r1, 0x68
	  lfs       f30, 0x58C(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f31, 0x564(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0x68(r1)
	  lwz       r12, 0x0(r31)
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
	  bl        -0x2B175C
	  bl        0x12B368
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x12B370
	  mr        r4, r31
	  fmr       f28, f1
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x14
	  li        r29, 0
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x8(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x2C
	  fsubs     f26, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x30(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x24(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x44
	  fsubs     f27, f0, f29
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x4C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  fmuls     f1, f27, f27
	  lfs       f2, 0x40(r1)
	  fmuls     f0, f31, f31
	  fsubs     f2, f2, f29
	  fmadds    f1, f26, f26, f1
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x278
	  lfs       f0, -0x14C8(r2)
	  fabs      f2, f28
	  lfs       f1, -0x14CC(r2)
	  fmuls     f0, f0, f30
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x278
	  li        r29, 0x1

	.loc_0x278:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x2A0
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1E1700
	  lfs       f1, -0x14C4(r2)
	  mr        r3, r31
	  bl        -0x1DF61C
	  b         .loc_0x418

	.loc_0x2A0:
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1E1720
	  b         .loc_0x418

	.loc_0x2B4:
	  mr        r3, r31
	  bl        0xFF8
	  mr.       r29, r3
	  beq-      .loc_0x408
	  mr        r4, r31
	  addi      r3, r1, 0xA4
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0xAC(r1)
	  lfs       f0, 0x8(r29)
	  lwz       r5, 0xC0(r31)
	  fsubs     f3, f1, f0
	  lfs       f2, 0xA4(r1)
	  lfs       f1, 0x0(r29)
	  lfs       f0, 0x384(r5)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  fmuls     f0, f0, f0
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x324
	  li        r0, 0x2
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1E1790
	  b         .loc_0x418

	.loc_0x324:
	  mr        r4, r31
	  addi      r3, r1, 0x8C
	  lwz       r12, 0x0(r31)
	  lfs       f29, 0x334(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f28, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x8C(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x94(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x0(r29)
	  lfs       f0, 0x8(r29)
	  lfs       f4, 0x90(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x80(r1)
	  stfs      f4, 0x84(r1)
	  stfs      f3, 0x88(r1)
	  bl        -0x2B1980
	  bl        0x12B144
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x12B14C
	  fmuls     f28, f1, f28
	  lfs       f0, -0x14C8(r2)
	  lfs       f1, -0x14CC(r2)
	  fmuls     f0, f0, f29
	  fabs      f2, f28
	  fmuls     f1, f1, f0
	  frsp      f0, f2
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x3DC
	  lfs       f0, -0x14D0(r2)
	  fcmpo     cr0, f28, f0
	  ble-      .loc_0x3D8
	  fmr       f28, f1
	  b         .loc_0x3DC

	.loc_0x3D8:
	  fneg      f28, f1

	.loc_0x3DC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f28, f1
	  bl        0x12B0C8
	  stfs      f1, 0x1FC(r31)
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)
	  b         .loc_0x418

	.loc_0x408:
	  li        r0, 0x2
	  mr        r3, r31
	  stw       r0, 0x2CC(r31)
	  bl        -0x1E1888

	.loc_0x418:
	  mr        r3, r31
	  bl        -0x1DF830
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x43C
	  lfs       f0, -0x14D0(r2)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  b         .loc_0x4A8

	.loc_0x43C:
	  mr        r3, r31
	  lwz       r4, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  lfs       f28, 0x474(r4)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  bl        -0x217350
	  mr        r3, r31
	  lfs       f2, 0x1D4(r31)
	  lwz       r12, 0x0(r31)
	  frsp      f26, f1
	  lfs       f30, 0x1D8(r31)
	  lfs       f0, 0x1DC(r31)
	  lwz       r12, 0x64(r12)
	  stfs      f2, 0x98(r1)
	  stfs      f30, 0x9C(r1)
	  stfs      f0, 0xA0(r1)
	  mtctr     r12
	  bctrl
	  bl        -0x2178EC
	  fmuls     f0, f28, f26
	  frsp      f1, f1
	  stfs      f0, 0x1D4(r31)
	  fmuls     f0, f28, f1
	  stfs      f30, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)

	.loc_0x4A8:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x4E4
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x4E4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2CC(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4E4:
	  psq_l     f31,0x118(r1),0,0
	  lfd       f31, 0x110(r1)
	  psq_l     f30,0x108(r1),0,0
	  lfd       f30, 0x100(r1)
	  psq_l     f29,0xF8(r1),0,0
	  lfd       f29, 0xF0(r1)
	  psq_l     f28,0xE8(r1),0,0
	  lfd       f28, 0xE0(r1)
	  psq_l     f27,0xD8(r1),0,0
	  lfd       f27, 0xD0(r1)
	  psq_l     f26,0xC8(r1),0,0
	  lfd       f26, 0xC0(r1)
	  lwz       r31, 0xBC(r1)
	  lwz       r30, 0xB8(r1)
	  lwz       r29, 0xB4(r1)
	  lwz       r0, 0x124(r1)
	  lwz       r28, 0xB0(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802E6C48
 * Size:	000028
 */
void Game::KumaKochappy::StateWalkPath::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x14C0(r2)
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x1DF8CC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
