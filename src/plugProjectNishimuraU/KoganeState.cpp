

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
 * Address:	8025CD48
 * Size:	0001D4
 */
void Game::Kogane::FSM::init((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0x5
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x12C4FC
	  li        r3, 0x10
	  bl        -0x238EC4
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  addi      r6, r5, 0x2F74
	  subi      r5, r2, 0x3768
	  stw       r7, 0x4(r4)
	  addi      r0, r3, 0x2F50
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x64:
	  mr        r3, r31
	  bl        -0x12C4A8
	  li        r3, 0x10
	  bl        -0x238F14
	  mr.       r4, r3
	  beq-      .loc_0xBC
	  lis       r3, 0x804B
	  lis       r6, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r5, 0x8048
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  lis       r3, 0x804C
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  addi      r6, r6, 0x2F74
	  addi      r5, r5, 0x5380
	  addi      r0, r3, 0x2F2C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xBC:
	  mr        r3, r31
	  bl        -0x12C500
	  li        r3, 0x10
	  bl        -0x238F6C
	  mr.       r4, r3
	  beq-      .loc_0x110
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  addi      r6, r5, 0x2F74
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3760
	  addi      r0, r3, 0x2F08
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x110:
	  mr        r3, r31
	  bl        -0x12C554
	  li        r3, 0x10
	  bl        -0x238FC0
	  mr.       r4, r3
	  beq-      .loc_0x164
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  addi      r6, r5, 0x2F74
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3758
	  addi      r0, r3, 0x2EE4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x164:
	  mr        r3, r31
	  bl        -0x12C5A8
	  li        r3, 0x10
	  bl        -0x239014
	  mr.       r4, r3
	  beq-      .loc_0x1B8
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  addi      r6, r5, 0x2F74
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3750
	  addi      r0, r3, 0x2EC0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1B8:
	  mr        r3, r31
	  bl        -0x12C5FC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025CF1C
 * Size:	000098
 */
void Game::Kogane::StateAppear::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  mr        r0, r4
	  li        r4, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r0
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  bl        -0x1557E0
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x3748(r2)
	  li        r4, 0
	  rlwinm    r0,r0,0,17,15
	  li        r5, 0
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x4000
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x157F90
	  mr        r3, r31
	  bl        -0x155CBC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025CFB4
 * Size:	000064
 */
void Game::Kogane::StateAppear::exec((Game::EnemyBase*))
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
	  bl        0x1878
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x4C:
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
 * Address:	8025D018
 * Size:	0001A0
 */
void Game::Kogane::StateAppear::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  mr        r0, r4
	  li        r4, 0x1
	  mr        r31, r0
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  rlwinm    r0,r0,0,10,8
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,26,24
	  stw       r0, 0x1E0(r31)
	  bl        -0x1558E4
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  ori       r0, r0, 0x8000
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,2,0
	  stw       r0, 0x1E0(r31)
	  bl        -0x15B6CC
	  mr        r3, r31
	  bl        -0x155E9C
	  lis       r3, 0x804B
	  li        r5, 0
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804E
	  stw       r0, 0x20(r1)
	  addi      r0, r3, 0x6A64
	  lis       r3, 0x804E
	  li        r7, 0xC3
	  stw       r0, 0x20(r1)
	  addi      r0, r3, 0x6CFC
	  li        r6, 0xC4
	  mr        r4, r31
	  sth       r7, 0x24(r1)
	  addi      r3, r1, 0x8
	  sth       r6, 0x26(r1)
	  stw       r5, 0x28(r1)
	  stw       r5, 0x2C(r1)
	  stw       r0, 0x20(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f31, 0x934(r5)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x8(r1)
	  lis       r3, 0x804B
	  lwz       r7, 0xC(r1)
	  subi      r5, r3, 0x5814
	  lwz       r6, 0x10(r1)
	  lis       r3, 0x804B
	  stw       r0, 0x14(r1)
	  subi      r0, r3, 0x5D24
	  addi      r3, r1, 0x20
	  addi      r4, r1, 0x30
	  stw       r7, 0x18(r1)
	  lfs       f2, 0x14(r1)
	  stw       r6, 0x1C(r1)
	  lfs       f1, 0x18(r1)
	  stw       r5, 0x30(r1)
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x34(r1)
	  stfs      f1, 0x38(r1)
	  stfs      f0, 0x3C(r1)
	  stw       r0, 0x30(r1)
	  stfs      f31, 0x40(r1)
	  bl        0x157168
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x304(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x5915
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  psq_l     f31,0x58(r1),0,0
	  lwz       r0, 0x64(r1)
	  lfd       f31, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025D1B8
 * Size:	000004
 */
void Game::Kogane::Obj::startBodyEffect(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025D1BC
 * Size:	000138
 */
void Game::Kogane::StateDisappear::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  lwz       r0, 0x1E0(r4)
	  lis       r5, 0x804E
	  addi      r8, r5, 0x6A64
	  lis       r6, 0x804B
	  oris      r5, r0, 0x40
	  lis       r3, 0x804E
	  stw       r5, 0x1E0(r4)
	  subi      r9, r6, 0x5808
	  li        r5, 0
	  addi      r0, r3, 0x6CFC
	  stw       r9, 0x20(r1)
	  li        r7, 0xC3
	  li        r6, 0xC4
	  mr        r31, r4
	  stw       r8, 0x20(r1)
	  addi      r3, r1, 0x8
	  sth       r7, 0x24(r1)
	  sth       r6, 0x26(r1)
	  stw       r5, 0x28(r1)
	  stw       r5, 0x2C(r1)
	  stw       r0, 0x20(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r5, 0xC0(r4)
	  lwz       r12, 0x8(r12)
	  lfs       f31, 0x934(r5)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x8(r1)
	  lis       r3, 0x804B
	  lwz       r7, 0xC(r1)
	  subi      r5, r3, 0x5814
	  lwz       r6, 0x10(r1)
	  lis       r3, 0x804B
	  stw       r0, 0x14(r1)
	  subi      r0, r3, 0x5D24
	  addi      r3, r1, 0x20
	  addi      r4, r1, 0x30
	  stw       r7, 0x18(r1)
	  lfs       f2, 0x14(r1)
	  stw       r6, 0x1C(r1)
	  lfs       f1, 0x18(r1)
	  stw       r5, 0x30(r1)
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x34(r1)
	  stfs      f1, 0x38(r1)
	  stfs      f0, 0x3C(r1)
	  stw       r0, 0x30(r1)
	  stfs      f31, 0x40(r1)
	  bl        0x15702C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x308(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xF4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  li        r4, 0x58A9
	  li        r5, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  psq_l     f31,0x58(r1),0,0
	  lwz       r0, 0x64(r1)
	  lfd       f31, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025D2F4
 * Size:	000004
 */
void Game::Kogane::Obj::finishBodyEffect(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025D2F8
 * Size:	00006C
 */
void Game::Kogane::StateDisappear::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x128C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x58
	  mr        r3, r31
	  bl        0x1080
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4C
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0x1F3(r31)
	  li        r4, 0
	  bl        -0x12224C
	  b         .loc_0x58

	.loc_0x4C:
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x122384

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025D364
 * Size:	000004
 */
void Game::Kogane::StateDisappear::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025D368
 * Size:	00006C
 */
void Game::Kogane::StateMove::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r4, 0xC0(r4)
	  lfs       f1, 0x86C(r4)
	  lfs       f2, 0x894(r4)
	  bl        0x1540
	  mr        r3, r31
	  li        r4, 0
	  bl        0x1290
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x1583A4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30C(r12)
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
 * Address:	8025D3D4
 * Size:	000004
 */
void Game::Kogane::Obj::createFartEffect(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025D3D8
 * Size:	000138
 */
void Game::Kogane::StateMove::exec((Game::EnemyBase*))
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
	  bl        0x1100
	  lfs       f1, 0x2D4(r31)
	  mr        r3, r31
	  lfs       f2, 0x2D8(r31)
	  addi      r4, r1, 0x8
	  lfs       f0, 0x2D0(r31)
	  stfs      f0, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f2, 0x10(r1)
	  lwz       r5, 0xC0(r31)
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x147E50
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x844(r3)
	  fcmpo     cr0, f1, f0
	  bgt-      .loc_0x7C
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, 0x894(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x84

	.loc_0x7C:
	  mr        r3, r31
	  bl        -0x1581B8

	.loc_0x84:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C8(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x120
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x120
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x844(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x100
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x120

	.loc_0x100:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x120:
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
 * Address:	8025D510
 * Size:	000004
 */
void Game::Kogane::StateMove::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025D514
 * Size:	00005C
 */
void Game::Kogane::StateWait::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  lwz       r4, 0xC0(r4)
	  lfs       f1, 0x8BC(r4)
	  lfs       f2, 0x8E4(r4)
	  bl        0x1394
	  lfs       f0, -0x3748(r2)
	  mr        r3, r31
	  li        r4, 0x1
	  li        r5, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x158554
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025D570
 * Size:	0000BC
 */
void Game::Kogane::StateWait::exec((Game::EnemyBase*))
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
	  bl        0xF68
	  lwz       r3, 0xC0(r31)
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, 0x8E4(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x40
	  mr        r3, r31
	  bl        -0x15830C

	.loc_0x40:
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C8(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C8(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xA4
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xA4
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA4:
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
 * Address:	8025D62C
 * Size:	000004
 */
void Game::Kogane::StateWait::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025D630
 * Size:	00011C
 */
void Game::Kogane::StatePress::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  stfd      f31, 0x50(r1)
	  psq_st    f31,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  lwz       r0, 0x1E0(r4)
	  lis       r5, 0x804E
	  addi      r8, r5, 0x6A64
	  lis       r6, 0x804B
	  rlwinm    r5,r0,0,11,9
	  lis       r3, 0x804E
	  stw       r5, 0x1E0(r4)
	  subi      r9, r6, 0x5808
	  li        r5, 0
	  addi      r0, r3, 0x6D10
	  stw       r9, 0x20(r1)
	  li        r7, 0xC5
	  li        r6, 0xC6
	  mr        r31, r4
	  stw       r8, 0x20(r1)
	  addi      r3, r1, 0x8
	  sth       r7, 0x24(r1)
	  sth       r6, 0x26(r1)
	  stw       r5, 0x28(r1)
	  stw       r5, 0x2C(r1)
	  stw       r0, 0x20(r1)
	  lwz       r12, 0x0(r4)
	  lwz       r5, 0xC0(r4)
	  lwz       r12, 0x8(r12)
	  lfs       f31, 0x934(r5)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x8(r1)
	  lis       r3, 0x804B
	  lwz       r7, 0xC(r1)
	  subi      r5, r3, 0x5814
	  lwz       r6, 0x10(r1)
	  lis       r3, 0x804B
	  stw       r0, 0x14(r1)
	  subi      r0, r3, 0x5D24
	  addi      r3, r1, 0x20
	  addi      r4, r1, 0x30
	  stw       r7, 0x18(r1)
	  lfs       f2, 0x14(r1)
	  stw       r6, 0x1C(r1)
	  lfs       f1, 0x18(r1)
	  stw       r5, 0x30(r1)
	  lfs       f0, 0x1C(r1)
	  stfs      f2, 0x34(r1)
	  stfs      f1, 0x38(r1)
	  stfs      f0, 0x3C(r1)
	  stw       r0, 0x30(r1)
	  stfs      f31, 0x40(r1)
	  bl        0x156AD0
	  mr        r3, r31
	  li        r4, 0x2
	  li        r5, 0
	  bl        -0x158714
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x318(r12)
	  mtctr     r12
	  bctrl
	  psq_l     f31,0x58(r1),0,0
	  lwz       r0, 0x64(r1)
	  lfd       f31, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025D74C
 * Size:	000004
 */
void Game::Kogane::Obj::createPressSENormal(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025D750
 * Size:	000130
 */
void Game::Kogane::StatePress::exec((Game::EnemyBase*))
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
	  bl        0xD88
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, 0x54(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C4(r31)
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x118
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x78
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x31C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x118

	.loc_0x78:
	  cmplwi    r0, 0x3
	  bne-      .loc_0xA4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2FC(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x15AECC
	  b         .loc_0x118

	.loc_0xA4:
	  cmplwi    r0, 0x4
	  bne-      .loc_0xBC
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x118

	.loc_0xBC:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x118
	  lfs       f1, 0x2C4(r31)
	  lfs       f0, -0x3744(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xF8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x118

	.loc_0xF8:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x118:
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
 * Address:	8025D880
 * Size:	000004
 */
void Game::Kogane::Obj::createItem(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025D884
 * Size:	000004
 */
void Game::Kogane::Obj::createPressSESpecial(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025D888
 * Size:	000010
 */
void Game::Kogane::StatePress::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r4)
	  blr
	*/
}
