

/*
 * --INFO--
 * Address:	80278E90
 * Size:	000384
 */
void Game::ElecBug::FSM::init(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  addi      r30, r4, 0x6D20
	  li        r4, 0xA
	  bl        -0x148650
	  li        r3, 0x10
	  bl        -0x255018
	  mr.       r4, r3
	  beq-      .loc_0x70
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  addi      r6, r5, 0x79B8
	  subi      r5, r2, 0x2F10
	  stw       r7, 0x4(r4)
	  addi      r0, r3, 0x7994
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x70:
	  mr        r3, r31
	  bl        -0x1485FC
	  li        r3, 0x10
	  bl        -0x255068
	  mr.       r4, r3
	  beq-      .loc_0xC4
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  addi      r6, r5, 0x79B8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2F08
	  addi      r0, r3, 0x7970
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xC4:
	  mr        r3, r31
	  bl        -0x148650
	  li        r3, 0x10
	  bl        -0x2550BC
	  mr.       r4, r3
	  beq-      .loc_0x118
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  addi      r6, r5, 0x79B8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2F00
	  addi      r0, r3, 0x794C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x118:
	  mr        r3, r31
	  bl        -0x1486A4
	  li        r3, 0x10
	  bl        -0x255110
	  mr.       r4, r3
	  beq-      .loc_0x16C
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  addi      r6, r5, 0x79B8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2EF8
	  addi      r0, r3, 0x7928
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x16C:
	  mr        r3, r31
	  bl        -0x1486F8
	  li        r3, 0x10
	  bl        -0x255164
	  mr.       r4, r3
	  beq-      .loc_0x1C0
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  addi      r6, r5, 0x79B8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2EF0
	  addi      r0, r3, 0x7904
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1C0:
	  mr        r3, r31
	  bl        -0x14874C
	  li        r3, 0x10
	  bl        -0x2551B8
	  mr.       r4, r3
	  beq-      .loc_0x214
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  addi      r6, r5, 0x79B8
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x14
	  addi      r0, r3, 0x78C8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x214:
	  mr        r3, r31
	  bl        -0x1487A0
	  li        r3, 0x10
	  bl        -0x25520C
	  mr.       r4, r3
	  beq-      .loc_0x268
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  li        r7, 0
	  addi      r6, r5, 0x79B8
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x20
	  addi      r0, r3, 0x78A4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x268:
	  mr        r3, r31
	  bl        -0x1487F4
	  li        r3, 0x10
	  bl        -0x255260
	  mr.       r4, r3
	  beq-      .loc_0x2BC
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x7
	  li        r7, 0
	  addi      r6, r5, 0x79B8
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x2C
	  addi      r0, r3, 0x7880
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x2BC:
	  mr        r3, r31
	  bl        -0x148848
	  li        r3, 0x10
	  bl        -0x2552B4
	  mr.       r4, r3
	  beq-      .loc_0x310
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x8
	  li        r7, 0
	  addi      r6, r5, 0x79B8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2EE8
	  addi      r0, r3, 0x785C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x310:
	  mr        r3, r31
	  bl        -0x14889C
	  li        r3, 0x10
	  bl        -0x255308
	  mr.       r4, r3
	  beq-      .loc_0x364
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x9
	  li        r7, 0
	  addi      r6, r5, 0x79B8
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x2EE0
	  addi      r0, r3, 0x7838
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x364:
	  mr        r3, r31
	  bl        -0x1488F0
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
 * Address:	80279214
 * Size:	00005C
 */
void Game::ElecBug::StateDead::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x173B0C
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x2ED8(r2)
	  li        r4, 0
	  rlwinm    r0,r0,0,26,24
	  li        r5, 0
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x174254
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80279270
 * Size:	000044
 */
void Game::ElecBug::StateDead::exec(Game::EnemyBase*)
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
	  bl        -0x13E1B0

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802792B4
 * Size:	000004
 */
void Game::ElecBug::StateDead::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802792B8
 * Size:	00004C
 */
void Game::ElecBug::StateWait::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  lfs       f0, -0x2ED8(r2)
	  stw       r0, 0x14(r1)
	  li        r4, 0x2
	  li        r5, 0
	  stfs      f0, 0x2C4(r3)
	  lwz       r0, 0x1E0(r3)
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r3)
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x1742EC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80279304
 * Size:	0000A0
 */
void Game::ElecBug::StateWait::exec(Game::EnemyBase*)
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
	  lfs       f1, 0x2C4(r4)
	  lfs       f0, 0x844(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x38
	  mr        r3, r31
	  bl        -0x174098

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
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x74:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
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
 * Address:	802793A4
 * Size:	000004
 */
void Game::ElecBug::StateWait::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802793A8
 * Size:	00005C
 */
void Game::ElecBug::StateTurn::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x2200
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x2ED8(r2)
	  li        r4, 0x1
	  ori       r0, r0, 0x40
	  li        r5, 0
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x1743E8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80279404
 * Size:	000200
 */
void Game::ElecBug::StateTurn::exec(Game::EnemyBase*)
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
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  lwz       r12, 0x0(r4)
	  mr        r30, r3
	  lwz       r5, 0xC0(r4)
	  mr        r31, r4
	  lwz       r12, 0x8(r12)
	  addi      r3, r1, 0x14
	  lfs       f31, 0x2C8(r4)
	  lfs       f28, 0x2D0(r4)
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
	  fsubs     f2, f28, f0
	  stfs      f4, 0x8(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        -0x244388
	  bl        0x19873C
	  lwz       r12, 0x0(r31)
	  fmr       f31, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f31
	  bl        0x198744
	  fmr       f31, f1
	  lfs       f0, -0x2ED0(r2)
	  lfs       f1, -0x2ED4(r2)
	  fmuls     f0, f0, f29
	  fmuls     f29, f31, f30
	  fmuls     f1, f1, f0
	  fabs      f0, f29
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0xF8
	  lfs       f0, -0x2ED8(r2)
	  fcmpo     cr0, f29, f0
	  ble-      .loc_0xF4
	  fmr       f29, f1
	  b         .loc_0xF8

	.loc_0xF4:
	  fneg      f29, f1

	.loc_0xF8:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f29, f1
	  bl        0x1986BC
	  fabs      f3, f31
	  stfs      f1, 0x1FC(r31)
	  lfs       f0, -0x2ECC(r2)
	  lfs       f2, 0x1FC(r31)
	  frsp      f1, f3
	  stfs      f2, 0x1A8(r31)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x140
	  mr        r3, r31
	  bl        -0x1742A0

	.loc_0x140:
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, -0x2EC8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x158
	  mr        r3, r31
	  bl        -0x1742B8

	.loc_0x158:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1C8
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x1C8
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, -0x2EC8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1A8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1C8

	.loc_0x1A8:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1C8:
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  psq_l     f28,0x38(r1),0,0
	  lfd       f28, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80279604
 * Size:	000004
 */
void Game::ElecBug::StateTurn::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80279608
 * Size:	00003C
 */
void Game::ElecBug::StateMove::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  mr        r0, r4
	  mr        r3, r0
	  li        r4, 0x1
	  lwz       r0, 0x1E0(r3)
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r3)
	  bl        -0x17462C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80279644
 * Size:	00013C
 */
void Game::ElecBug::StateMove::exec(Game::EnemyBase*)
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
	  addi      r3, r1, 0x8
	  lfs       f1, 0x2CC(r4)
	  lfs       f2, 0x2D0(r4)
	  lfs       f0, 0x2C8(r4)
	  stfs      f0, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f2, 0x1C(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x10(r1)
	  lfs       f0, 0x1C(r1)
	  lfs       f2, 0x8(r1)
	  fsubs     f3, f1, f0
	  lfs       f1, 0x14(r1)
	  lfs       f0, -0x2EC4(r2)
	  fsubs     f2, f2, f1
	  fmuls     f1, f3, f3
	  fmadds    f1, f2, f2, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x94
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  addi      r4, r1, 0x14
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x1640F4
	  b         .loc_0x9C

	.loc_0x94:
	  mr        r3, r31
	  bl        -0x17443C

	.loc_0x9C:
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, -0x2EC8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xB4
	  mr        r3, r31
	  bl        -0x174454

	.loc_0xB4:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x124
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x124
	  lfs       f1, 0x2C0(r31)
	  lfs       f0, -0x2EC8(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x104
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x124

	.loc_0x104:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x124:
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
 * Address:	80279780
 * Size:	000004
 */
void Game::ElecBug::StateMove::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80279784
 * Size:	00007C
 */
void Game::ElecBug::StateCharge::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2ED8(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stb       r0, 0x2D4(r4)
	  stfs      f0, 0x2C4(r4)
	  bl        0x1FB8
	  mr        r3, r31
	  bl        0x24AC
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x2ED8(r2)
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x177E0C
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, 0
	  bl        -0x1747E4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80279800
 * Size:	000554
 */
void Game::ElecBug::StateCharge::exec(Game::EnemyBase*)
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
	  stfd      f29, 0x130(r1)
	  psq_st    f29,0x138(r1),0,0
	  stfd      f28, 0x120(r1)
	  psq_st    f28,0x128(r1),0,0
	  stfd      f27, 0x110(r1)
	  psq_st    f27,0x118(r1),0,0
	  stmw      r27, 0xFC(r1)
	  lbz       r0, 0x2D4(r4)
	  mr        r29, r3
	  mr        r31, r4
	  cmplwi    r0, 0
	  bne-      .loc_0x364
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, -0x2EC0(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x364
	  li        r0, 0x1
	  addi      r3, r1, 0x44
	  stb       r0, 0x2D4(r31)
	  li        r30, 0
	  lwz       r12, 0x0(r4)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f30, 0x44(r1)
	  li        r4, 0x1C
	  lfs       f31, 0x48(r1)
	  lfs       f29, 0x4C(r1)
	  lwz       r3, -0x6E20(r13)
	  bl        -0x16BBEC
	  cmplwi    r3, 0
	  beq-      .loc_0x2F0
	  beq-      .loc_0xA4
	  addi      r3, r3, 0x4

	.loc_0xA4:
	  li        r0, 0
	  lis       r4, 0x804C
	  addi      r4, r4, 0x78EC
	  stw       r0, 0x5C(r1)
	  cmplwi    r0, 0
	  stw       r4, 0x50(r1)
	  stw       r0, 0x54(r1)
	  stw       r3, 0x58(r1)
	  bne-      .loc_0xE0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x168

	.loc_0xE0:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x14C

	.loc_0xF8:
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x168
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)

	.loc_0x14C:
	  lwz       r12, 0x50(r1)
	  addi      r3, r1, 0x50
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xF8

	.loc_0x168:
	  addi      r27, r1, 0x60
	  b         .loc_0x2D0

	.loc_0x170:
	  lwz       r3, 0x58(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r28, r3
	  cmplw     r31, r28
	  beq-      .loc_0x214
	  bl        0x1DF0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x214
	  mr        r4, r28
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x3C(r1)
	  lfs       f2, 0x38(r1)
	  fsubs     f3, f31, f0
	  lfs       f1, 0x40(r1)
	  fsubs     f2, f30, f2
	  lfs       f0, -0x2ED8(r2)
	  fsubs     f1, f29, f1
	  fmuls     f3, f3, f3
	  fmuls     f4, f1, f1
	  fmadds    f1, f2, f2, f3
	  fadds     f1, f4, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1F8
	  ble-      .loc_0x1FC
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x1FC

	.loc_0x1F8:
	  fmr       f1, f0

	.loc_0x1FC:
	  lfs       f0, -0x2EBC(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x214
	  stw       r28, 0x0(r27)
	  addi      r27, r27, 0x4
	  addi      r30, r30, 0x1

	.loc_0x214:
	  lwz       r0, 0x5C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x240
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x2D0

	.loc_0x240:
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)
	  b         .loc_0x2B4

	.loc_0x260:
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x5C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2D0
	  lwz       r3, 0x58(r1)
	  lwz       r4, 0x54(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x54(r1)

	.loc_0x2B4:
	  lwz       r12, 0x50(r1)
	  addi      r3, r1, 0x50
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x260

	.loc_0x2D0:
	  lwz       r3, 0x58(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x54(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x170

	.loc_0x2F0:
	  cmpwi     r30, 0
	  beq-      .loc_0x364
	  bl        -0x1B0558
	  xoris     r0, r3, 0x8000
	  lis       r5, 0x4330
	  stw       r0, 0xE4(r1)
	  xoris     r0, r30, 0x8000
	  lfd       f2, -0x2EA8(r2)
	  addi      r4, r1, 0x60
	  stw       r5, 0xE0(r1)
	  mr        r3, r31
	  lfs       f0, -0x2EB8(r2)
	  lfd       f1, 0xE0(r1)
	  stw       r0, 0xEC(r1)
	  fsubs     f1, f1, f2
	  stw       r5, 0xE8(r1)
	  fdivs     f1, f1, f0
	  lfd       f0, 0xE8(r1)
	  fsubs     f0, f0, f2
	  fmuls     f0, f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0xF0(r1)
	  lwz       r0, 0xF4(r1)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r4, r4, r0
	  bl        0x1C9C
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)

	.loc_0x364:
	  lwz       r28, 0x2D8(r31)
	  cmplwi    r28, 0
	  beq-      .loc_0x49C
	  mr        r4, r31
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r28)
	  lfs       f29, 0x2C(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f30, 0x34(r1)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x20(r1)
	  mr        r4, r31
	  lfs       f0, 0x28(r1)
	  addi      r3, r1, 0x14
	  fsubs     f28, f29, f1
	  lwz       r12, 0x0(r31)
	  fsubs     f27, f30, f0
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x8(r12)
	  fadds     f28, f28, f29
	  fadds     f27, f27, f30
	  lfs       f31, 0x334(r5)
	  mtctr     r12
	  bctrl
	  lfs       f4, 0x14(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x1C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f3, 0x18(r1)
	  fsubs     f1, f28, f4
	  fsubs     f2, f27, f0
	  stfs      f4, 0x8(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        -0x244B00
	  bl        0x197FC4
	  lwz       r12, 0x0(r31)
	  fmr       f30, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f30
	  bl        0x197FCC
	  lfs       f2, -0x2EB4(r2)
	  lfs       f0, -0x2ED0(r2)
	  fmuls     f30, f1, f2
	  lfs       f1, -0x2ED4(r2)
	  fmuls     f0, f0, f31
	  fabs      f2, f30
	  fmuls     f1, f1, f0
	  frsp      f0, f2
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x474
	  lfs       f0, -0x2ED8(r2)
	  fcmpo     cr0, f30, f0
	  ble-      .loc_0x470
	  fmr       f30, f1
	  b         .loc_0x474

	.loc_0x470:
	  fneg      f30, f1

	.loc_0x474:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f30, f1
	  bl        0x197F44
	  stfs      f1, 0x1FC(r31)
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)

	.loc_0x49C:
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, -0x2EB0(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x504
	  lwz       r0, 0x2D8(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x4DC
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x504

	.loc_0x4DC:
	  mr        r3, r31
	  bl        0x2080
	  mr        r3, r29
	  mr        r4, r31
	  lwz       r12, 0x0(r29)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x504:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  psq_l     f31,0x158(r1),0,0
	  lfd       f31, 0x150(r1)
	  psq_l     f30,0x148(r1),0,0
	  lfd       f30, 0x140(r1)
	  psq_l     f29,0x138(r1),0,0
	  lfd       f29, 0x130(r1)
	  psq_l     f28,0x128(r1),0,0
	  lfd       f28, 0x120(r1)
	  psq_l     f27,0x118(r1),0,0
	  lfd       f27, 0x110(r1)
	  lmw       r27, 0xFC(r1)
	  lwz       r0, 0x164(r1)
	  mtlr      r0
	  addi      r1, r1, 0x160
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80279D54
 * Size:	00004C
 */
void Game::EnemyIterator<Game::ElecBug::Obj>::isDone()
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
 * Address:	80279DA0
 * Size:	000064
 */
void Game::ElecBug::StateCharge::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x17843C
	  bl        -0x1B081C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x2EA8(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x2EA0(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x2EB8(r2)
	  fsubs     f2, f2, f3
	  fmuls     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0x2C0(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80279E04
 * Size:	000060
 */
void Game::ElecBug::StateDischarge::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2ED8(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C4(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x178470
	  mr        r3, r31
	  li        r4, 0x4
	  li        r5, 0
	  bl        -0x174E48
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80279E64
 * Size:	0000E8
 */
void Game::ElecBug::StateDischarge::exec(Game::EnemyBase*)
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
	  lwz       r4, 0x2D8(r4)
	  cmplwi    r4, 0
	  beq-      .loc_0x34
	  mr        r3, r31
	  bl        0x208C
	  b         .loc_0x44

	.loc_0x34:
	  mr        r3, r31
	  bl        0x1EC4
	  mr        r3, r31
	  bl        -0x174C04

	.loc_0x44:
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x86C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x60
	  mr        r3, r31
	  bl        -0x174C20

	.loc_0x60:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xBC
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x94
	  lwz       r4, 0x2D8(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0xBC
	  mr        r3, r31
	  bl        0x1DB0
	  b         .loc_0xBC

	.loc_0x94:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xBC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xBC:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
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
 * Address:	80279F4C
 * Size:	00006C
 */
void Game::ElecBug::StateDischarge::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1785E8
	  bl        -0x1B09C8
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  mr        r3, r31
	  lfd       f3, -0x2EA8(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x2EA0(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x2EB8(r2)
	  fsubs     f2, f2, f3
	  fmuls     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0x2C0(r31)
	  bl        0x1DC0
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80279FB8
 * Size:	00006C
 */
void Game::ElecBug::StateChildCharge::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2ED8(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C4(r4)
	  bl        0x1C88
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x2ED8(r2)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x178630
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, 0
	  bl        -0x175008
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027A024
 * Size:	000228
 */
void Game::ElecBug::StateChildCharge::exec(Game::EnemyBase*)
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
	  lwz       r31, 0x2D8(r4)
	  mr        r29, r3
	  mr        r30, r4
	  cmplwi    r31, 0
	  beq-      .loc_0x174
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r31
	  addi      r3, r1, 0x20
	  lwz       r12, 0x0(r31)
	  lfs       f30, 0x2C(r1)
	  lwz       r12, 0x8(r12)
	  lfs       f31, 0x34(r1)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x20(r1)
	  mr        r4, r30
	  lfs       f0, 0x28(r1)
	  addi      r3, r1, 0x14
	  fsubs     f29, f30, f1
	  lwz       r12, 0x0(r30)
	  fsubs     f28, f31, f0
	  lwz       r5, 0xC0(r30)
	  lwz       r12, 0x8(r12)
	  fadds     f29, f29, f30
	  fadds     f28, f28, f31
	  lfs       f31, 0x334(r5)
	  mtctr     r12
	  bctrl
	  lfs       f4, 0x14(r1)
	  lis       r3, 0x8051
	  lfs       f0, 0x1C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f3, 0x18(r1)
	  fsubs     f1, f29, f4
	  fsubs     f2, f28, f0
	  stfs      f4, 0x8(r1)
	  stfs      f3, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  bl        -0x244FFC
	  bl        0x197AC8
	  lwz       r12, 0x0(r30)
	  fmr       f30, f1
	  mr        r3, r30
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f30
	  bl        0x197AD0
	  lfs       f2, -0x2EB4(r2)
	  lfs       f0, -0x2ED0(r2)
	  fmuls     f30, f1, f2
	  lfs       f1, -0x2ED4(r2)
	  fmuls     f0, f0, f31
	  fabs      f2, f30
	  fmuls     f1, f1, f0
	  frsp      f0, f2
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x14C
	  lfs       f0, -0x2ED8(r2)
	  fcmpo     cr0, f30, f0
	  ble-      .loc_0x148
	  fmr       f30, f1
	  b         .loc_0x14C

	.loc_0x148:
	  fneg      f30, f1

	.loc_0x14C:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f30, f1
	  bl        0x197A48
	  stfs      f1, 0x1FC(r30)
	  lfs       f0, 0x1FC(r30)
	  stfs      f0, 0x1A8(r30)

	.loc_0x174:
	  lfs       f1, 0x2C4(r30)
	  lfs       f0, -0x2E9C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1D8
	  cmplwi    r31, 0
	  beq-      .loc_0x1B0
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1D8

	.loc_0x1B0:
	  mr        r3, r30
	  bl        0x1B88
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1D8:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r30)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r30)
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
 * Address:	8027A24C
 * Size:	000064
 */
void Game::ElecBug::StateChildCharge::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1788E8
	  bl        -0x1B0CC8
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f3, -0x2EA8(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x2EA0(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x2EB8(r2)
	  fsubs     f2, f2, f3
	  fmuls     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0x2C0(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027A2B0
 * Size:	000060
 */
void Game::ElecBug::StateChildDischarge::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2ED8(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C4(r4)
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r4)
	  stfs      f0, 0x1D4(r4)
	  stfs      f0, 0x1D8(r4)
	  stfs      f0, 0x1DC(r4)
	  bl        -0x17891C
	  mr        r3, r31
	  li        r4, 0x4
	  li        r5, 0
	  bl        -0x1752F4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027A310
 * Size:	0000C0
 */
void Game::ElecBug::StateChildDischarge::exec(Game::EnemyBase*)
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
	  lwz       r0, 0x2D8(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x86C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x58
	  mr        r3, r31
	  bl        -0x1750B0
	  b         .loc_0x58

	.loc_0x48:
	  mr        r3, r31
	  bl        0x1A04
	  mr        r3, r31
	  bl        -0x1750C4

	.loc_0x58:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x94
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x94
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x94:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
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
 * Address:	8027A3D0
 * Size:	00006C
 */
void Game::ElecBug::StateChildDischarge::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x178A6C
	  bl        -0x1B0E4C
	  xoris     r3, r3, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  mr        r3, r31
	  lfd       f3, -0x2EA8(r2)
	  stw       r0, 0x8(r1)
	  lfs       f1, -0x2EA0(r2)
	  lfd       f2, 0x8(r1)
	  lfs       f0, -0x2EB8(r2)
	  fsubs     f2, f2, f3
	  fmuls     f1, f1, f2
	  fdivs     f0, f1, f0
	  stfs      f0, 0x2C0(r31)
	  bl        0x193C
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027A43C
 * Size:	000070
 */
void Game::ElecBug::StateReverse::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x2ED8(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x2C4(r4)
	  bl        0x1904
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x2ED8(r2)
	  li        r4, 0x5
	  ori       r0, r0, 0x40
	  li        r5, 0
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,0,30
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x175490
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027A4AC
 * Size:	0000D8
 */
void Game::ElecBug::StateReverse::exec(Game::EnemyBase*)
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
	  lfs       f1, 0x2C4(r4)
	  lfs       f0, 0x81C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x38
	  mr        r3, r31
	  bl        -0x175240

	.loc_0x38:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x2ED8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x70
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xC0

	.loc_0x70:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xC0
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xC0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC0:
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
 * Address:	8027A584
 * Size:	000010
 */
void Game::ElecBug::StateReverse::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r4)
	  ori       r0, r0, 0x1
	  stw       r0, 0x1E0(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027A594
 * Size:	000048
 */
void Game::ElecBug::StateReturn::init(Game::EnemyBase*, Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  lfs       f0, -0x2ED8(r2)
	  stw       r0, 0x14(r1)
	  li        r4, 0x6
	  li        r5, 0
	  lwz       r0, 0x1E0(r3)
	  ori       r0, r0, 0x40
	  stw       r0, 0x1E0(r3)
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x1755C4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027A5DC
 * Size:	000050
 */
void Game::ElecBug::StateReturn::exec(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x40
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x40
	  lwz       r12, 0x0(r3)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027A62C
 * Size:	000004
 */
void Game::ElecBug::StateReturn::cleanup(Game::EnemyBase*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8027A630
 * Size:	000038
 */
void Game::EnemyIterator<Game::ElecBug::Obj>::operator*()
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
	  lwz       r12, 0x10(r12)
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
 * Address:	8027A668
 * Size:	0000E4
 */
void Game::EnemyIterator<Game::ElecBug::Obj>::next()
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
	  lwz       r12, 0x10(r12)
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
 * Address:	8027A74C
 * Size:	0000DC
 */
void Game::EnemyIterator<Game::ElecBug::Obj>::first()
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
	  lwz       r12, 0x10(r12)
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
