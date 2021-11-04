

/*
 * --INFO--
 * Address:	802A43FC
 * Size:	000224
 */
void Game::Damagumo::FSM::init(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x6
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x173BB0
	  li        r3, 0x10
	  bl        -0x280578
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  subi      r6, r5, 0x294C
	  subi      r5, r2, 0x2518
	  stw       r7, 0x4(r4)
	  subi      r0, r3, 0x2970
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x64:
	  mr        r3, r31
	  bl        -0x173B5C
	  li        r3, 0x10
	  bl        -0x2805C8
	  mr.       r4, r3
	  beq-      .loc_0xB8
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  subi      r6, r5, 0x294C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2510
	  subi      r0, r3, 0x2994
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xB8:
	  mr        r3, r31
	  bl        -0x173BB0
	  li        r3, 0x10
	  bl        -0x28061C
	  mr.       r4, r3
	  beq-      .loc_0x10C
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  subi      r6, r5, 0x294C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2508
	  subi      r0, r3, 0x29B8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x10C:
	  mr        r3, r31
	  bl        -0x173C04
	  li        r3, 0x10
	  bl        -0x280670
	  mr.       r4, r3
	  beq-      .loc_0x160
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  subi      r6, r5, 0x294C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2500
	  subi      r0, r3, 0x29DC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x160:
	  mr        r3, r31
	  bl        -0x173C58
	  li        r3, 0x10
	  bl        -0x2806C4
	  mr.       r4, r3
	  beq-      .loc_0x1B4
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  subi      r6, r5, 0x294C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x24F8
	  subi      r0, r3, 0x2A00
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1B4:
	  mr        r3, r31
	  bl        -0x173CAC
	  li        r3, 0x10
	  bl        -0x280718
	  mr.       r4, r3
	  beq-      .loc_0x208
	  lis       r3, 0x804B
	  lis       r5, 0x804D
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804D
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  subi      r6, r5, 0x294C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x24F0
	  subi      r0, r3, 0x2A24
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x208:
	  mr        r3, r31
	  bl        -0x173D00
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A4620
 * Size:	0000CC
 */
void Game::Damagumo::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x20F8
	  mr        r3, r31
	  bl        0x35C0
	  mr        r3, r31
	  bl        -0x19EF28
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x24E8(r2)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1A2CF0
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x19F678
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x52484
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x14
	  li        r4, 0xA
	  li        r6, 0x2
	  bl        -0x50F54
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A46EC
 * Size:	00008C
 */
void Game::Damagumo::StateDead::exec(Game::EnemyBase*)
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
	  beq-      .loc_0x78
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x50
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x264(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x2428
	  b         .loc_0x78

	.loc_0x50:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x64
	  li        r0, 0x1
	  stb       r0, 0x2DC(r31)
	  b         .loc_0x78

	.loc_0x64:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x78
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x169670

	.loc_0x78:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A4778
 * Size:	000004
 */
void Game::Damagumo::StateDead::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A477C
 * Size:	000084
 */
void Game::Damagumo::StateStay::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r3, -0x1
	  lfs       f0, -0x24E8(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  li        r5, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r3, 0x2C8(r4)
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r6, 0x1E0(r31)
	  oris      r6, r6, 0x40
	  stw       r6, 0x1E0(r31)
	  lwz       r6, 0x1E0(r31)
	  rlwinm    r6,r6,0,17,15
	  stw       r6, 0x1E0(r31)
	  lwz       r6, 0x1E0(r31)
	  oris      r6, r6, 0x4000
	  stw       r6, 0x1E0(r31)
	  stw       r0, 0x230(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x19F7DC
	  mr        r3, r31
	  bl        -0x19D508
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A4800
 * Size:	0000B8
 */
void Game::Damagumo::StateStay::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r31, r4
	  mr        r30, r3
	  lwz       r5, 0xC0(r31)
	  li        r4, 0
	  mr        r3, r31
	  lfs       f31, 0x3AC(r5)
	  fmr       f1, f31
	  bl        -0x18FD78
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4C
	  li        r0, 0x1
	  b         .loc_0x70

	.loc_0x4C:
	  fmr       f1, f31
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x190124
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x6C
	  li        r0, 0x1
	  b         .loc_0x70

	.loc_0x6C:
	  li        r0, 0

	.loc_0x70:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x98
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x98:
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A48B8
 * Size:	000004
 */
void Game::Damagumo::StateStay::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A48BC
 * Size:	0000B4
 */
void Game::Damagumo::StateLand::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x24E4(r2)
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2C8(r4)
	  stfs      f0, 0x2D8(r4)
	  lwz       r0, 0x1E0(r4)
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x8000
	  stw       r0, 0x1E0(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,2,0
	  stw       r0, 0x1E0(r4)
	  bl        -0x1A2F48
	  li        r0, 0
	  lfs       f0, -0x24E8(r2)
	  stw       r0, 0x230(r31)
	  mr        r3, r31
	  li        r4, 0x1
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x19F938
	  lwz       r3, -0x6980(r13)
	  mr        r4, r31
	  bl        -0x62B68
	  lwz       r3, -0x6980(r13)
	  mr        r4, r31
	  li        r5, 0x1
	  bl        -0x62858
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A4970
 * Size:	0001E8
 */
void Game::Damagumo::StateLand::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r4
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x39B0
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1D0
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xC8
	  lwz       r0, 0x1E0(r31)
	  li        r30, 0
	  rlwinm    r0,r0,0,10,8
	  stw       r0, 0x1E0(r31)

	.loc_0x50:
	  lwz       r5, 0x280(r31)
	  mr        r3, r31
	  mr        r4, r30
	  bl        0x2D24
	  addi      r30, r30, 0x1
	  cmpwi     r30, 0x4
	  blt+      .loc_0x50
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x8(r1)
	  addi      r5, r1, 0x14
	  lfs       f1, 0xC(r1)
	  li        r4, 0xF
	  lfs       f0, 0x10(r1)
	  li        r6, 0x2
	  stfs      f2, 0x14(r1)
	  lwz       r3, -0x6960(r13)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  bl        -0x527E0
	  lwz       r3, -0x6958(r13)
	  addi      r5, r1, 0x14
	  li        r4, 0xF
	  li        r6, 0x2
	  bl        -0x512B0
	  b         .loc_0x1D0

	.loc_0xC8:
	  cmplwi    r0, 0x3
	  bne-      .loc_0xE4
	  lwz       r5, 0x280(r31)
	  mr        r3, r31
	  li        r4, 0x3
	  bl        0x2CA4
	  b         .loc_0x1D0

	.loc_0xE4:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x100
	  lwz       r5, 0x280(r31)
	  mr        r3, r31
	  li        r4, 0
	  bl        0x2C88
	  b         .loc_0x1D0

	.loc_0x100:
	  cmplwi    r0, 0x5
	  bne-      .loc_0x11C
	  lwz       r5, 0x280(r31)
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x2C6C
	  b         .loc_0x1D0

	.loc_0x11C:
	  cmplwi    r0, 0x6
	  bne-      .loc_0x138
	  lwz       r5, 0x280(r31)
	  mr        r3, r31
	  li        r4, 0x2
	  bl        0x2C50
	  b         .loc_0x1D0

	.loc_0x138:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x1D0
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x24E8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x178
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1D0

	.loc_0x178:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x190498
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1B0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1D0

	.loc_0x1B0:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1D0:
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
 * Address:	802A4B58
 * Size:	00005C
 */
void Game::Damagumo::StateLand::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x1B54
	  mr        r3, r31
	  bl        0x22F8
	  lwz       r0, 0x1E0(r31)
	  mr        r4, r31
	  lfs       f0, -0x24E0(r2)
	  li        r5, 0
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x2D8(r31)
	  lwz       r3, -0x6980(r13)
	  bl        -0x62A9C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A4BB4
 * Size:	000098
 */
void Game::Damagumo::StateWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x24E8(r2)
	  stw       r0, 0x24(r1)
	  li        r0, -0x1
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r0, 0x2C8(r4)
	  stfs      f0, 0x2C0(r4)
	  bl        -0x1DB638
	  xoris     r0, r3, 0x8000
	  lis       r4, 0x4330
	  stw       r0, 0xC(r1)
	  li        r0, 0
	  lfd       f2, -0x24D0(r2)
	  mr        r3, r31
	  stw       r4, 0x8(r1)
	  li        r4, 0x2
	  lfs       f3, -0x24DC(r2)
	  li        r5, 0
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x24D8(r2)
	  fsubs     f2, f0, f2
	  lfs       f0, -0x24E8(r2)
	  fmuls     f2, f3, f2
	  fdivs     f1, f2, f1
	  fadds     f1, f3, f1
	  stfs      f1, 0x2C4(r31)
	  stw       r0, 0x230(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x19FC30
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A4C4C
 * Size:	0000F4
 */
void Game::Damagumo::StateWait::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x24E8(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r5, -0x6514(r13)
	  lfs       f2, 0x2C0(r4)
	  lfs       f1, 0x54(r5)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2C0(r4)
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x58
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x2C8(r31)
	  bl        -0x19F9FC
	  b         .loc_0xA0

	.loc_0x58:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x190654
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x80
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2C8(r31)
	  bl        -0x19FA24
	  b         .loc_0xA0

	.loc_0x80:
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, 0x2C4(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xA0
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x2C8(r31)
	  bl        -0x19FA48

	.loc_0xA0:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xDC
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xDC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C8(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xDC:
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
 * Address:	802A4D40
 * Size:	000004
 */
void Game::Damagumo::StateWait::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A4D44
 * Size:	000064
 */
void Game::Damagumo::StateFlick::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x24E8(r2)
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x2C8(r4)
	  li        r0, 0
	  li        r4, 0x3
	  stfs      f0, 0x2C0(r31)
	  stw       r0, 0x230(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x19FD84
	  mr        r3, r31
	  bl        0x19E8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A4DA8
 * Size:	0000C8
 */
void Game::Damagumo::StateFlick::exec(Game::EnemyBase*)
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
	  beq-      .loc_0xB4
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x64
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  lfs       f4, -0x24C8(r2)
	  li        r4, 0
	  lfs       f1, 0x53C(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x191CD8
	  lfs       f0, -0x24E8(r2)
	  mr        r3, r31
	  stfs      f0, 0x20C(r31)
	  bl        0x1DE4
	  b         .loc_0xB4

	.loc_0x64:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xB4
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x24E8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x9C
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xB4

	.loc_0x9C:
	  lwz       r12, 0x0(r3)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A4E70
 * Size:	000024
 */
void Game::Damagumo::StateFlick::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        0x191C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A4E94
 * Size:	000098
 */
void Game::Damagumo::StateWalk::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x24E8(r2)
	  stw       r0, 0x24(r1)
	  li        r0, -0x1
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r0, 0x2C8(r4)
	  stfs      f0, 0x2C0(r4)
	  bl        -0x1DB918
	  xoris     r0, r3, 0x8000
	  lis       r4, 0x4330
	  stw       r0, 0xC(r1)
	  li        r0, 0
	  lfd       f2, -0x24D0(r2)
	  mr        r3, r31
	  stw       r4, 0x8(r1)
	  lfs       f3, -0x24C4(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x24D8(r2)
	  fsubs     f2, f0, f2
	  lfs       f0, -0x24E8(r2)
	  fmuls     f2, f3, f2
	  fdivs     f1, f2, f1
	  fadds     f1, f3, f1
	  stfs      f1, 0x2C4(r31)
	  stw       r0, 0x230(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        0x17DC
	  mr        r3, r31
	  bl        0x1154
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A4F2C
 * Size:	000100
 */
void Game::Damagumo::StateWalk::exec(Game::EnemyBase*)
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
	  bl        0x111C
	  lwz       r5, -0x6514(r13)
	  mr        r3, r31
	  lfs       f1, 0x2C0(r31)
	  li        r4, 0
	  lfs       f0, 0x54(r5)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C0(r31)
	  bl        -0x190914
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x60
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2C8(r31)
	  bl        0x1788
	  b         .loc_0x80

	.loc_0x60:
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, 0x2C4(r31)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x80
	  li        r0, 0x3
	  mr        r3, r31
	  stw       r0, 0x2C8(r31)
	  bl        0x1764

	.loc_0x80:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x24E8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xB8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xE8

	.loc_0xB8:
	  mr        r3, r31
	  bl        0x176C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C8(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xE8:
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
 * Address:	802A502C
 * Size:	000004
 */
void Game::Damagumo::StateWalk::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802A5030
 * Size:	000028
 */
void __sinit_DamagumoState_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804D
	  stw       r0, -0x6918(r13)
	  stfsu     f0, -0x2A30(r3)
	  stfs      f0, -0x6914(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
