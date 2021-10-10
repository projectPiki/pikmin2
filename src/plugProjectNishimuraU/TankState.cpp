

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
 * Address:	80273DE4
 * Size:	000280
 */
void Game::Tank::FSM::init((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x7
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x143598
	  li        r3, 0x10
	  bl        -0x24FF60
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  addi      r6, r5, 0x69F4
	  subi      r5, r2, 0x30F8
	  stw       r7, 0x4(r4)
	  addi      r0, r3, 0x69D0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x64:
	  mr        r3, r31
	  bl        -0x143544
	  li        r3, 0x10
	  bl        -0x24FFB0
	  mr.       r4, r3
	  beq-      .loc_0xB8
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  addi      r6, r5, 0x69F4
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x30F0
	  addi      r0, r3, 0x69AC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xB8:
	  mr        r3, r31
	  bl        -0x143598
	  li        r3, 0x10
	  bl        -0x250004
	  mr.       r4, r3
	  beq-      .loc_0x10C
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  addi      r6, r5, 0x69F4
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x30E8
	  addi      r0, r3, 0x6988
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x10C:
	  mr        r3, r31
	  bl        -0x1435EC
	  li        r3, 0x10
	  bl        -0x250058
	  mr.       r4, r3
	  beq-      .loc_0x164
	  lis       r3, 0x804B
	  lis       r6, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r5, 0x8048
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  lis       r3, 0x804C
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  addi      r6, r6, 0x69F4
	  addi      r5, r5, 0x6C68
	  addi      r0, r3, 0x6964
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x164:
	  mr        r3, r31
	  bl        -0x143644
	  li        r3, 0x10
	  bl        -0x2500B0
	  mr.       r4, r3
	  beq-      .loc_0x1BC
	  lis       r3, 0x804B
	  lis       r6, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r5, 0x8048
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  lis       r3, 0x804C
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  addi      r6, r6, 0x69F4
	  addi      r5, r5, 0x6C74
	  addi      r0, r3, 0x6940
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1BC:
	  mr        r3, r31
	  bl        -0x14369C
	  li        r3, 0x10
	  bl        -0x250108
	  mr.       r4, r3
	  beq-      .loc_0x210
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  addi      r6, r5, 0x69F4
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x30E0
	  addi      r0, r3, 0x691C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x210:
	  mr        r3, r31
	  bl        -0x1436F0
	  li        r3, 0x10
	  bl        -0x25015C
	  mr.       r4, r3
	  beq-      .loc_0x264
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  li        r7, 0
	  addi      r6, r5, 0x69F4
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x30D8
	  addi      r0, r3, 0x68F8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x264:
	  mr        r3, r31
	  bl        -0x143744
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80274064
 * Size:	000070
 */
void Game::Tank::StateDead::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x30D0(r2)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x16E98C
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x16F0B8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802740D4
 * Size:	000004
 */
void Game::Tank::Obj::finishEffect(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802740D8
 * Size:	000044
 */
void Game::Tank::StateDead::exec((Game::EnemyBase*))
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
	  bl        -0x139018

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027411C
 * Size:	000004
 */
void Game::Tank::StateDead::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80274120
 * Size:	000044
 */
void Game::Tank::StateWait::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x30D0(r2)
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  li        r5, 0
	  stfs      f0, 0x1D4(r4)
	  li        r4, 0x5
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  stw       r0, 0x230(r3)
	  bl        -0x16F14C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80274164
 * Size:	000258
 */
void Game::Tank::StateWait::exec((Game::EnemyBase*))
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
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x2A5C
	  lfs       f2, 0x200(r31)
	  fmr       f31, f1
	  lfs       f0, -0x30D0(r2)
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x68
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x238

	.loc_0x68:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x15FB7C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x90
	  mr        r3, r31
	  li        r4, 0
	  bl        0x2318
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x9C

	.loc_0x90:
	  lfs       f1, -0x30CC(r2)
	  mr        r3, r31
	  bl        -0x16CE6C

	.loc_0x9C:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x238
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x238
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x30D0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xF0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x238

	.loc_0xF0:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x15FC04
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x128
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x238

	.loc_0x128:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x226C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x160
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x238

	.loc_0x160:
	  lwz       r5, 0xC0(r31)
	  fmr       f1, f31
	  mr        r3, r31
	  li        r4, 0
	  lfs       f2, 0x3D4(r5)
	  li        r5, 0
	  li        r6, 0
	  bl        -0x161290
	  cmplwi    r3, 0
	  beq-      .loc_0x1B8
	  stw       r3, 0x230(r31)
	  mr        r3, r30
	  lfs       f0, -0x30D0(r2)
	  mr        r4, r31
	  li        r5, 0x4
	  li        r6, 0
	  stfs      f0, 0x2EC(r31)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x238

	.loc_0x1B8:
	  bl        -0x1AAD7C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x30B8(r2)
	  stw       r0, 0x8(r1)
	  lfs       f2, -0x30C8(r2)
	  lfd       f0, 0x8(r1)
	  lfs       f1, -0x30C4(r2)
	  fsubs     f3, f0, f3
	  lfs       f0, -0x30C0(r2)
	  fmuls     f2, f2, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x218
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x238

	.loc_0x218:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x238:
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
 * Address:	802743BC
 * Size:	000028
 */
void Game::Tank::StateWait::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x30B0(r2)
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x16D040
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802743E4
 * Size:	000054
 */
void Game::Tank::StateMove::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x30D0(r2)
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2F0(r4)
	  li        r4, 0x1
	  stw       r0, 0x230(r31)
	  bl        -0x16F410
	  lfs       f1, -0x30CC(r2)
	  mr        r3, r31
	  bl        -0x16D090
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80274438
 * Size:	00056C
 */
void Game::Tank::StateMove::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x130(r1)
	  mflr      r0
	  stw       r0, 0x134(r1)
	  stfd      f31, 0x120(r1)
	  psq_st    f31,0x128(r1),0,0
	  stfd      f30, 0x110(r1)
	  psq_st    f30,0x118(r1),0,0
	  stfd      f29, 0x100(r1)
	  psq_st    f29,0x108(r1),0,0
	  stfd      f28, 0xF0(r1)
	  psq_st    f28,0xF8(r1),0,0
	  stfd      f27, 0xE0(r1)
	  psq_st    f27,0xE8(r1),0,0
	  stfd      f26, 0xD0(r1)
	  psq_st    f26,0xD8(r1),0,0
	  stfd      f25, 0xC0(r1)
	  psq_st    f25,0xC8(r1),0,0
	  stfd      f24, 0xB0(r1)
	  psq_st    f24,0xB8(r1),0,0
	  stw       r31, 0xAC(r1)
	  stw       r30, 0xA8(r1)
	  stw       r29, 0xA4(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x274C
	  lwz       r12, 0x0(r31)
	  fmr       f28, f1
	  mr        r4, r31
	  addi      r3, r1, 0x80
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x88(r1)
	  lfs       f5, 0x300(r31)
	  lfs       f2, 0x2F8(r31)
	  fsubs     f1, f0, f5
	  lfs       f0, 0x80(r1)
	  lfs       f4, 0x2FC(r31)
	  fsubs     f3, f0, f2
	  lfs       f0, -0x30AC(r2)
	  fmuls     f1, f1, f1
	  stfs      f2, 0x8C(r1)
	  fmadds    f1, f3, f3, f1
	  stfs      f4, 0x90(r1)
	  stfs      f5, 0x94(r1)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xF0
	  lfs       f1, 0x2F0(r31)
	  lfs       f0, -0x30A8(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xF0
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  addi      r4, r1, 0x8C
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x15EF44
	  b         .loc_0x108

	.loc_0xF0:
	  lfs       f0, -0x30D0(r2)
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x16F29C

	.loc_0x108:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x30D0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x140
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x510

	.loc_0x140:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x15FF28
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x168
	  mr        r3, r31
	  li        r4, 0
	  bl        0x1F6C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x184

	.loc_0x168:
	  lfs       f0, -0x30D0(r2)
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x16F314
	  b         .loc_0x1CC

	.loc_0x184:
	  lwz       r5, 0xC0(r31)
	  fmr       f1, f28
	  mr        r3, r31
	  li        r4, 0
	  lfs       f2, 0x3D4(r5)
	  li        r5, 0
	  li        r6, 0
	  bl        -0x161588
	  cmplwi    r3, 0
	  beq-      .loc_0x1CC
	  stw       r3, 0x230(r31)
	  mr        r3, r31
	  lfs       f0, -0x30D0(r2)
	  stfs      f0, 0x2EC(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x16F360

	.loc_0x1CC:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2F0(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2F0(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x510
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x510
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x30D0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x234
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x510

	.loc_0x234:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x16001C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x26C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x510

	.loc_0x26C:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x1E54
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2A4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x510

	.loc_0x2A4:
	  lwz       r29, 0x230(r31)
	  cmplwi    r29, 0
	  beq-      .loc_0x4F0
	  mr        r4, r29
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r29)
	  addi      r3, r1, 0x20
	  lfs       f29, 0x3FC(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f30, 0x3D4(r5)
	  lfs       f31, 0x3AC(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f2, 0x20(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x2C
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  lwz       r12, 0x8(r12)
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x2C(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x34(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x8(r1)
	  lfs       f0, 0x10(r1)
	  lfs       f4, 0x30(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x14(r1)
	  stfs      f4, 0x18(r1)
	  stfs      f3, 0x1C(r1)
	  bl        -0x23F668
	  bl        0x19D45C
	  lwz       r12, 0x0(r31)
	  fmr       f24, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f24
	  bl        0x19D464
	  mr        r4, r31
	  fmr       f26, f1
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x44
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r29)
	  lfs       f27, 0x44(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x38(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x5C
	  fsubs     f24, f0, f27
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x50
	  lwz       r12, 0x0(r29)
	  lfs       f27, 0x60(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x54(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x74
	  fsubs     f25, f0, f27
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x68
	  lwz       r12, 0x0(r29)
	  lfs       f27, 0x7C(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x70(r1)
	  fmuls     f1, f31, f31
	  fmuls     f2, f30, f30
	  li        r3, 0x1
	  fsubs     f0, f0, f27
	  li        r4, 0
	  fmuls     f0, f0, f0
	  fmadds    f0, f24, f24, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x468
	  fcmpo     cr0, f0, f2
	  mr        r0, r4
	  ble-      .loc_0x45C
	  fabs      f0, f25
	  frsp      f0, f0
	  fcmpo     cr0, f0, f29
	  bge-      .loc_0x45C
	  mr        r0, r3

	.loc_0x45C:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x468
	  li        r4, 0x1

	.loc_0x468:
	  rlwinm.   r0,r4,0,24,31
	  bne-      .loc_0x4A0
	  lfs       f0, -0x30A0(r2)
	  fabs      f2, f26
	  lfs       f1, -0x30A4(r2)
	  fmuls     f0, f0, f28
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  mfcr      r0
	  rlwinm.   r0,r0,3,31,31
	  beq-      .loc_0x4A0
	  li        r3, 0

	.loc_0x4A0:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4CC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x510

	.loc_0x4CC:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x510

	.loc_0x4F0:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x510:
	  psq_l     f31,0x128(r1),0,0
	  lfd       f31, 0x120(r1)
	  psq_l     f30,0x118(r1),0,0
	  lfd       f30, 0x110(r1)
	  psq_l     f29,0x108(r1),0,0
	  lfd       f29, 0x100(r1)
	  psq_l     f28,0xF8(r1),0,0
	  lfd       f28, 0xF0(r1)
	  psq_l     f27,0xE8(r1),0,0
	  lfd       f27, 0xE0(r1)
	  psq_l     f26,0xD8(r1),0,0
	  lfd       f26, 0xD0(r1)
	  psq_l     f25,0xC8(r1),0,0
	  lfd       f25, 0xC0(r1)
	  psq_l     f24,0xB8(r1),0,0
	  lfd       f24, 0xB0(r1)
	  lwz       r31, 0xAC(r1)
	  lwz       r30, 0xA8(r1)
	  lwz       r0, 0x134(r1)
	  lwz       r29, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x130
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802749A4
 * Size:	000028
 */
void Game::Tank::StateMove::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x30B0(r2)
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x16D628
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802749CC
 * Size:	000104
 */
void Game::Tank::StateMoveTurn::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f1, -0x309C(r2)
	  mr        r3, r4
	  stw       r0, 0x24(r1)
	  lfs       f0, -0x30D0(r2)
	  lfs       f2, 0x2F4(r4)
	  fadds     f1, f2, f1
	  stfs      f1, 0x2F4(r4)
	  lfs       f5, 0x2F4(r4)
	  lfs       f6, 0x198(r4)
	  fmr       f1, f5
	  lfs       f7, 0x19C(r4)
	  fcmpo     cr0, f5, f0
	  lfs       f4, 0x1A0(r4)
	  lwz       r6, 0xC0(r4)
	  bge-      .loc_0x48
	  fneg      f1, f5

	.loc_0x48:
	  lfs       f2, -0x3098(r2)
	  lis       r4, 0x8050
	  lfs       f0, -0x30D0(r2)
	  addi      r5, r4, 0x71A0
	  fmuls     f1, f1, f2
	  lfs       f3, 0x35C(r6)
	  fcmpo     cr0, f5, f0
	  fctiwz    f0, f1
	  stfd      f0, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r4, r5, r0
	  lfs       f0, 0x4(r4)
	  fmadds    f4, f3, f0, f4
	  bge-      .loc_0xA8
	  lfs       f0, -0x3094(r2)
	  fmuls     f0, f5, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r5, r0
	  fneg      f0, f0
	  b         .loc_0xC0

	.loc_0xA8:
	  fmuls     f0, f5, f2
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r0, 0x1C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r5, r0

	.loc_0xC0:
	  fmadds    f1, f3, f0, f6
	  li        r0, 0
	  lfs       f0, -0x30D0(r2)
	  li        r4, 0x4
	  li        r5, 0
	  stfs      f1, 0x2F8(r3)
	  stfs      f7, 0x2FC(r3)
	  stfs      f4, 0x300(r3)
	  stw       r0, 0x230(r3)
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x16FAB8
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80274AD0
 * Size:	000364
 */
void Game::Tank::StateMoveTurn::exec((Game::EnemyBase*))
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
	  stfd      f28, 0x30(r1)
	  psq_st    f28,0x38(r1),0,0
	  stfd      f27, 0x20(r1)
	  psq_st    f27,0x28(r1),0,0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x20D0
	  lwz       r12, 0x0(r31)
	  fmr       f31, f1
	  lwz       r5, 0xC0(r31)
	  mr        r4, r31
	  lwz       r12, 0x8(r12)
	  addi      r3, r1, 0x8
	  lfs       f30, 0x2F8(r31)
	  lfs       f27, 0x300(r31)
	  lfs       f28, 0x334(r5)
	  lfs       f29, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x8(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x10(r1)
	  subi      r3, r3, 0x2E20
	  fsubs     f1, f30, f1
	  fsubs     f2, f27, f0
	  bl        -0x23FA5C
	  bl        0x19D068
	  lwz       r12, 0x0(r31)
	  fmr       f30, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f30
	  bl        0x19D070
	  fmr       f30, f1
	  lfs       f0, -0x30A0(r2)
	  lfs       f1, -0x30A4(r2)
	  fmuls     f0, f0, f28
	  fmuls     f28, f30, f29
	  fmuls     f1, f1, f0
	  fabs      f0, f28
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x100
	  lfs       f0, -0x30D0(r2)
	  fcmpo     cr0, f28, f0
	  ble-      .loc_0xFC
	  fmr       f28, f1
	  b         .loc_0x100

	.loc_0xFC:
	  fneg      f28, f1

	.loc_0x100:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f28, f1
	  bl        0x19CFE8
	  stfs      f1, 0x1FC(r31)
	  lfs       f0, -0x30D0(r2)
	  lfs       f1, 0x1FC(r31)
	  stfs      f1, 0x1A8(r31)
	  lfs       f1, 0x200(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x160
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x324

	.loc_0x160:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1605E0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1A0
	  mr        r3, r31
	  li        r4, 0
	  bl        0x18B4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1A0
	  fabs      f1, f30
	  lfs       f0, -0x3090(r2)
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x1B8

	.loc_0x1A0:
	  mr        r3, r31
	  bl        -0x16F9D4
	  lfs       f1, -0x30CC(r2)
	  mr        r3, r31
	  bl        -0x16D8F0
	  b         .loc_0x1E8

	.loc_0x1B8:
	  lwz       r5, 0xC0(r31)
	  fmr       f1, f31
	  mr        r3, r31
	  li        r4, 0
	  lfs       f2, 0x3D4(r5)
	  li        r5, 0
	  li        r6, 0
	  bl        -0x161C54
	  cmplwi    r3, 0
	  beq-      .loc_0x1E8
	  mr        r3, r31
	  bl        -0x16FA14

	.loc_0x1E8:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x324
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x324
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x30D0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x23C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x324

	.loc_0x23C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x1606BC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x274
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x324

	.loc_0x274:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x17B4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2AC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x324

	.loc_0x2AC:
	  lwz       r5, 0xC0(r31)
	  fmr       f1, f31
	  mr        r3, r31
	  li        r4, 0
	  lfs       f2, 0x3D4(r5)
	  li        r5, 0
	  li        r6, 0
	  bl        -0x161D48
	  cmplwi    r3, 0
	  beq-      .loc_0x304
	  stw       r3, 0x230(r31)
	  mr        r3, r30
	  lfs       f0, -0x30D0(r2)
	  mr        r4, r31
	  li        r5, 0x4
	  li        r6, 0
	  stfs      f0, 0x2EC(r31)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x324

	.loc_0x304:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x324:
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  psq_l     f28,0x38(r1),0,0
	  lfd       f28, 0x30(r1)
	  psq_l     f27,0x28(r1),0,0
	  lfd       f27, 0x20(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80274E34
 * Size:	000028
 */
void Game::Tank::StateMoveTurn::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, -0x30B0(r2)
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x16DAB8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80274E5C
 * Size:	000050
 */
void Game::Tank::StateChaseTurn::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x30D0(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x1734B8
	  mr        r3, r31
	  li        r4, 0x4
	  li        r5, 0
	  bl        -0x16FE90
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80274EAC
 * Size:	0005F4
 */
void Game::Tank::StateChaseTurn::exec((Game::EnemyBase*))
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
	  stfd      f25, 0xA0(r1)
	  psq_st    f25,0xA8(r1),0,0
	  stfd      f24, 0x90(r1)
	  psq_st    f24,0x98(r1),0,0
	  stw       r31, 0x8C(r1)
	  stw       r30, 0x88(r1)
	  stw       r29, 0x84(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        0x1CD8
	  lfs       f2, 0x200(r31)
	  fmr       f31, f1
	  lfs       f0, -0x30D0(r2)
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xA4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x598

	.loc_0xA4:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x160900
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xCC
	  mr        r3, r31
	  li        r4, 0
	  bl        0x1594
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE0

	.loc_0xCC:
	  mr        r3, r31
	  bl        -0x16FCDC
	  lfs       f1, -0x30CC(r2)
	  mr        r3, r31
	  bl        -0x16DBF8

	.loc_0xE0:
	  lwz       r29, 0x230(r31)
	  cmplwi    r29, 0
	  beq-      .loc_0x364
	  lfs       f0, -0x30D0(r2)
	  mr        r4, r29
	  addi      r3, r1, 0x14
	  stfs      f0, 0x2EC(r31)
	  lwz       r12, 0x0(r29)
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f28, 0x334(r5)
	  lfs       f30, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r31)
	  lfs       f24, 0x14(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f25, 0x1C(r1)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x20(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x28(r1)
	  subi      r3, r3, 0x2E20
	  fsubs     f1, f24, f1
	  fsubs     f2, f25, f0
	  bl        -0x23FEF4
	  bl        0x19CBD0
	  lwz       r12, 0x0(r31)
	  fmr       f24, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f24
	  bl        0x19CBD8
	  fmr       f29, f1
	  lfs       f0, -0x30A0(r2)
	  lfs       f1, -0x30A4(r2)
	  fmuls     f0, f0, f28
	  fmuls     f24, f29, f30
	  fmuls     f1, f1, f0
	  fabs      f0, f24
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x1BC
	  lfs       f0, -0x30D0(r2)
	  fcmpo     cr0, f24, f0
	  ble-      .loc_0x1B8
	  fmr       f24, f1
	  b         .loc_0x1BC

	.loc_0x1B8:
	  fneg      f24, f1

	.loc_0x1BC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f24, f1
	  bl        0x19CB50
	  stfs      f1, 0x1FC(r31)
	  mr        r3, r29
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x350
	  mr        r4, r31
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x38
	  lfs       f24, 0x3FC(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f25, 0x3D4(r5)
	  lfs       f26, 0x3AC(r5)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x0(r29)
	  lfs       f30, 0x38(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x2C(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x50
	  fsubs     f27, f0, f30
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x44
	  lwz       r12, 0x0(r29)
	  lfs       f30, 0x54(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  lfs       f0, 0x48(r1)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x68
	  fsubs     f28, f0, f30
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r29
	  addi      r3, r1, 0x5C
	  lwz       r12, 0x0(r29)
	  lfs       f30, 0x70(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x64(r1)
	  fmuls     f26, f26, f26
	  fmuls     f25, f25, f25
	  li        r3, 0x1
	  fsubs     f0, f0, f30
	  li        r4, 0
	  fmuls     f0, f0, f0
	  fmadds    f0, f27, f27, f0
	  fcmpo     cr0, f0, f26
	  ble-      .loc_0x310
	  fcmpo     cr0, f0, f25
	  mr        r0, r4
	  ble-      .loc_0x304
	  fabs      f0, f28
	  frsp      f0, f0
	  fcmpo     cr0, f0, f24
	  bge-      .loc_0x304
	  mr        r0, r3

	.loc_0x304:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0x310
	  li        r4, 0x1

	.loc_0x310:
	  rlwinm.   r0,r4,0,24,31
	  bne-      .loc_0x348
	  lfs       f0, -0x30A0(r2)
	  fabs      f2, f29
	  lfs       f1, -0x30A4(r2)
	  fmuls     f0, f0, f31
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  mfcr      r0
	  rlwinm.   r0,r0,3,31,31
	  beq-      .loc_0x348
	  li        r3, 0

	.loc_0x348:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x45C

	.loc_0x350:
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x230(r31)
	  bl        -0x16FF68
	  b         .loc_0x45C

	.loc_0x364:
	  mr        r4, r31
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x8
	  lfs       f26, 0x2F8(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f27, 0x300(r31)
	  lfs       f25, 0x334(r5)
	  lfs       f24, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x8(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x10(r1)
	  subi      r3, r3, 0x2E20
	  fsubs     f1, f26, f1
	  fsubs     f2, f27, f0
	  bl        -0x24014C
	  bl        0x19C978
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x19C980
	  fmr       f30, f1
	  lfs       f0, -0x30A0(r2)
	  lfs       f1, -0x30A4(r2)
	  fmuls     f0, f0, f25
	  fmuls     f24, f30, f24
	  fmuls     f1, f1, f0
	  fabs      f0, f24
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x414
	  lfs       f0, -0x30D0(r2)
	  fcmpo     cr0, f24, f0
	  ble-      .loc_0x410
	  fmr       f24, f1
	  b         .loc_0x414

	.loc_0x410:
	  fneg      f24, f1

	.loc_0x414:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f24, f1
	  bl        0x19C8F8
	  fabs      f3, f30
	  stfs      f1, 0x1FC(r31)
	  lfs       f0, -0x3090(r2)
	  lfs       f2, 0x1FC(r31)
	  frsp      f1, f3
	  stfs      f2, 0x1A8(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x45C
	  mr        r3, r31
	  bl        -0x170064

	.loc_0x45C:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x598
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x598
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x30D0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x4B0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x598

	.loc_0x4B0:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x160D0C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4E8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x598

	.loc_0x4E8:
	  mr        r3, r31
	  li        r4, 0
	  bl        0x1164
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x520
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x598

	.loc_0x520:
	  lwz       r5, 0xC0(r31)
	  fmr       f1, f31
	  mr        r3, r31
	  li        r4, 0
	  lfs       f2, 0x3D4(r5)
	  li        r5, 0
	  li        r6, 0
	  bl        -0x162398
	  cmplwi    r3, 0
	  beq-      .loc_0x578
	  stw       r3, 0x230(r31)
	  mr        r3, r30
	  lfs       f0, -0x30D0(r2)
	  mr        r4, r31
	  li        r5, 0x4
	  li        r6, 0
	  stfs      f0, 0x2EC(r31)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x598

	.loc_0x578:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x598:
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
	  psq_l     f25,0xA8(r1),0,0
	  lfd       f25, 0xA0(r1)
	  psq_l     f24,0x98(r1),0,0
	  lfd       f24, 0x90(r1)
	  lwz       r31, 0x8C(r1)
	  lwz       r30, 0x88(r1)
	  lwz       r0, 0x114(r1)
	  lwz       r29, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x110
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802754A0
 * Size:	00003C
 */
void Game::Tank::StateChaseTurn::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x173B3C
	  lfs       f1, -0x30B0(r2)
	  mr        r3, r31
	  bl        -0x16E134
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802754DC
 * Size:	000084
 */
void Game::Tank::StateAttack::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  lfs       f0, -0x30D0(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stb       r5, 0x304(r4)
	  stfs      f0, 0x2E4(r4)
	  stfs      f0, 0x2EC(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r4)
	  stw       r5, 0x230(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x173B58
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, 0
	  bl        -0x170530
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x320(r12)
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
 * Address:	80275560
 * Size:	000004
 */
void Game::Tank::Obj::createChargeSE(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80275564
 * Size:	0001E0
 */
void Game::Tank::StateAttack::exec((Game::EnemyBase*))
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
	  mr        r3, r31
	  bl        0x165C
	  lfs       f2, 0x200(r31)
	  fmr       f31, f1
	  lfs       f0, -0x30D0(r2)
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x68
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1C0

	.loc_0x68:
	  lbz       r0, 0x304(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x94
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0xF20
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x324(r12)
	  mtctr     r12
	  bctrl

	.loc_0x94:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1C0
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xD0
	  li        r0, 0x1
	  mr        r3, r31
	  stb       r0, 0x304(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x304(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1C0

	.loc_0xD0:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x1C0
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x30D0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x110
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1C0

	.loc_0x110:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x161024
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x148
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x6
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1C0

	.loc_0x148:
	  lwz       r5, 0xC0(r31)
	  fmr       f1, f31
	  mr        r3, r31
	  li        r4, 0
	  lfs       f2, 0x3D4(r5)
	  li        r5, 0
	  li        r6, 0
	  bl        -0x162678
	  cmplwi    r3, 0
	  beq-      .loc_0x1A0
	  stw       r3, 0x230(r31)
	  mr        r3, r30
	  lfs       f0, -0x30D0(r2)
	  mr        r4, r31
	  li        r5, 0x4
	  li        r6, 0
	  stfs      f0, 0x2EC(r31)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1C0

	.loc_0x1A0:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1C0:
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
 * Address:	80275744
 * Size:	000004
 */
void Game::Tank::Obj::startEffect(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80275748
 * Size:	000004
 */
void Game::Tank::Obj::createDisChargeSE(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027574C
 * Size:	000058
 */
void Game::Tank::StateAttack::cleanup((Game::EnemyBase*))
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
	  lwz       r4, 0x1E0(r4)
	  ori       r4, r4, 0x40
	  stw       r4, 0x1E0(r31)
	  stb       r0, 0x304(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x308(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x173E10
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802757A4
 * Size:	000004
 */
void Game::Tank::Obj::startYodare(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802757A8
 * Size:	000058
 */
void Game::Tank::StateFlick::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x30D0(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stw       r0, 0x230(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x173E0C
	  mr        r3, r31
	  li        r4, 0x2
	  li        r5, 0
	  bl        -0x1707E4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80275800
 * Size:	000180
 */
void Game::Tank::StateFlick::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, -0x30D0(r2)
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x164

	.loc_0x50:
	  lwz       r3, 0x188(r30)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x164
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xFC
	  lwz       r5, 0xC0(r30)
	  mr        r3, r30
	  lfs       f4, -0x308C(r2)
	  li        r4, 0
	  lfs       f1, 0x514(r5)
	  lfs       f2, 0x4C4(r5)
	  lfs       f3, 0x4EC(r5)
	  bl        -0x1620F8
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
	  bl        -0x1623E8
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
	  bl        -0x1627D4
	  lfs       f0, -0x30D0(r2)
	  stfs      f0, 0x20C(r30)

	.loc_0xFC:
	  lwz       r3, 0x188(r30)
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x164
	  lfs       f1, 0x200(r30)
	  lfs       f0, -0x30D0(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x144
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x164

	.loc_0x144:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x164:
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
 * Address:	80275980
 * Size:	000024
 */
void Game::Tank::StateFlick::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x174014
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
