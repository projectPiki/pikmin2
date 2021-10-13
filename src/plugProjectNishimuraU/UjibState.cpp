

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
 * Address:	8025B1A8
 * Size:	000478
 */
void Game::Ujib::FSM::init((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0xD
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x12A95C
	  li        r3, 0x10
	  bl        -0x237324
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r7, 0
	  addi      r6, r5, 0x2E4C
	  subi      r5, r2, 0x37C8
	  stw       r7, 0x4(r4)
	  addi      r0, r3, 0x2E28
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x64:
	  mr        r3, r31
	  bl        -0x12A908
	  li        r3, 0x10
	  bl        -0x237374
	  mr.       r4, r3
	  beq-      .loc_0xB8
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  addi      r6, r5, 0x2E4C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x37C0
	  addi      r0, r3, 0x2E04
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xB8:
	  mr        r3, r31
	  bl        -0x12A95C
	  li        r3, 0x10
	  bl        -0x2373C8
	  mr.       r4, r3
	  beq-      .loc_0x10C
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  addi      r6, r5, 0x2E4C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x37B8
	  addi      r0, r3, 0x2DE0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x10C:
	  mr        r3, r31
	  bl        -0x12A9B0
	  li        r3, 0x10
	  bl        -0x23741C
	  mr.       r4, r3
	  beq-      .loc_0x160
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x3
	  li        r7, 0
	  addi      r6, r5, 0x2E4C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x37B0
	  addi      r0, r3, 0x2DBC
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x160:
	  mr        r3, r31
	  bl        -0x12AA04
	  li        r3, 0x10
	  bl        -0x237470
	  mr.       r4, r3
	  beq-      .loc_0x1B4
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  addi      r6, r5, 0x2E4C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x37A8
	  addi      r0, r3, 0x2D98
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1B4:
	  mr        r3, r31
	  bl        -0x12AA58
	  li        r3, 0x10
	  bl        -0x2374C4
	  mr.       r4, r3
	  beq-      .loc_0x208
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  addi      r6, r5, 0x2E4C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x37A0
	  addi      r0, r3, 0x2D74
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x208:
	  mr        r3, r31
	  bl        -0x12AAAC
	  li        r3, 0x10
	  bl        -0x237518
	  mr.       r4, r3
	  beq-      .loc_0x260
	  lis       r3, 0x804B
	  lis       r6, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r5, 0x8048
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  lis       r3, 0x804C
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  addi      r6, r6, 0x2E4C
	  addi      r5, r5, 0x5368
	  addi      r0, r3, 0x2D50
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x260:
	  mr        r3, r31
	  bl        -0x12AB04
	  li        r3, 0x10
	  bl        -0x237570
	  mr.       r4, r3
	  beq-      .loc_0x2B8
	  lis       r3, 0x804B
	  lis       r6, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r5, 0x8048
	  stw       r0, 0x0(r4)
	  li        r0, 0x7
	  lis       r3, 0x804C
	  li        r7, 0
	  stw       r0, 0x4(r4)
	  addi      r6, r6, 0x2E4C
	  addi      r5, r5, 0x5374
	  addi      r0, r3, 0x2D2C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x2B8:
	  mr        r3, r31
	  bl        -0x12AB5C
	  li        r3, 0x10
	  bl        -0x2375C8
	  mr.       r4, r3
	  beq-      .loc_0x30C
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x8
	  li        r7, 0
	  addi      r6, r5, 0x2E4C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3798
	  addi      r0, r3, 0x2D08
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x30C:
	  mr        r3, r31
	  bl        -0x12ABB0
	  li        r3, 0x10
	  bl        -0x23761C
	  mr.       r4, r3
	  beq-      .loc_0x360
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0x9
	  li        r7, 0
	  addi      r6, r5, 0x2E4C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3790
	  addi      r0, r3, 0x2CE4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x360:
	  mr        r3, r31
	  bl        -0x12AC04
	  li        r3, 0x10
	  bl        -0x237670
	  mr.       r4, r3
	  beq-      .loc_0x3B4
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0xA
	  li        r7, 0
	  addi      r6, r5, 0x2E4C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3788
	  addi      r0, r3, 0x2CC0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x3B4:
	  mr        r3, r31
	  bl        -0x12AC58
	  li        r3, 0x10
	  bl        -0x2376C4
	  mr.       r4, r3
	  beq-      .loc_0x408
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0xB
	  li        r7, 0
	  addi      r6, r5, 0x2E4C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3780
	  addi      r0, r3, 0x2C9C
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x408:
	  mr        r3, r31
	  bl        -0x12ACAC
	  li        r3, 0x10
	  bl        -0x237718
	  mr.       r4, r3
	  beq-      .loc_0x45C
	  lis       r3, 0x804B
	  lis       r5, 0x804C
	  subi      r0, r3, 0x65C
	  lis       r3, 0x804C
	  stw       r0, 0x0(r4)
	  li        r0, 0xC
	  li        r7, 0
	  addi      r6, r5, 0x2E4C
	  stw       r0, 0x4(r4)
	  subi      r5, r2, 0x3778
	  addi      r0, r3, 0x2C78
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x45C:
	  mr        r3, r31
	  bl        -0x12AD00
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025B620
 * Size:	00005C
 */
void Game::Ujib::StateDead::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x155F18
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x3774(r2)
	  li        r4, 0
	  rlwinm    r0,r0,0,26,24
	  li        r5, 0
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x156660
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025B67C
 * Size:	000044
 */
void Game::Ujib::StateDead::exec((Game::EnemyBase*))
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
	  bl        -0x1205BC

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025B6C0
 * Size:	000004
 */
void Game::Ujib::StateDead::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025B6C4
 * Size:	000064
 */
void Game::Ujib::StatePress::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x3774(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  stfs      f0, 0x200(r4)
	  bl        -0x155FC4
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x3774(r2)
	  li        r4, 0x1
	  rlwinm    r0,r0,0,26,24
	  li        r5, 0
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x15670C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025B728
 * Size:	000044
 */
void Game::Ujib::StatePress::exec((Game::EnemyBase*))
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
	  bl        -0x120668

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025B76C
 * Size:	000004
 */
void Game::Ujib::StatePress::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025B770
 * Size:	0000BC
 */
void Game::Ujib::StateStay::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1730
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x1E0(r31)
	  li        r0, 0x1
	  mr        r3, r31
	  ori       r4, r4, 0x1
	  stw       r4, 0x1E0(r31)
	  stb       r0, 0x2C1(r31)
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  bl        -0x15404C
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x3774(r2)
	  li        r4, 0x2
	  rlwinm    r0,r0,0,21,19
	  li        r5, 0
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,17,15
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x4000
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x156808
	  mr        r3, r31
	  bl        -0x154534
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025B82C
 * Size:	0000B0
 */
void Game::Ujib::StateStay::exec((Game::EnemyBase*))
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
	  mr        r3, r30
	  bl        -0x16DC
	  lwz       r7, 0xC0(r30)
	  mr        r3, r30
	  li        r4, 0
	  li        r5, 0
	  lfs       f1, 0x424(r7)
	  li        r6, 0
	  lfs       f2, 0x3D4(r7)
	  bl        -0x148820
	  mr.       r31, r3
	  bne-      .loc_0x60
	  mr        r3, r30
	  bl        -0x124C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x94

	.loc_0x60:
	  mr        r3, r30
	  bl        -0x1784
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x94
	  stw       r31, 0x230(r30)
	  mr        r3, r29
	  mr        r4, r30
	  li        r5, 0x3
	  lwz       r12, 0x0(r29)
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x94:
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
 * Address:	8025B8DC
 * Size:	000084
 */
void Game::Ujib::StateStay::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  mr        r0, r4
	  li        r4, 0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r0
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x1E0(r31)
	  li        r0, 0
	  mr        r3, r31
	  rlwinm    r4,r4,0,0,30
	  stw       r4, 0x1E0(r31)
	  stb       r0, 0x2C1(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,10,8
	  stw       r0, 0x1E0(r31)
	  bl        -0x15419C
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x8000
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,2,0
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
 * Address:	8025B960
 * Size:	000080
 */
void Game::Ujib::StateAppear::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1984
	  mr        r3, r31
	  bl        -0x154204
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x3774(r2)
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  lwz       r0, 0x1E0(r31)
	  ori       r0, r0, 0x800
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x159FE4
	  mr        r3, r31
	  li        r4, 0x2
	  li        r5, 0
	  bl        -0x1569BC
	  mr        r3, r31
	  bl        -0xAF0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025B9E0
 * Size:	000080
 */
void Game::Ujib::StateAppear::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x70
	  lfs       f1, 0x200(r4)
	  lfs       f0, -0x3774(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x58
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x70

	.loc_0x58:
	  lwz       r12, 0x0(r3)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025BA60
 * Size:	00003C
 */
void Game::Ujib::StateAppear::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1542E4
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,11,9
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
 * Address:	8025BA9C
 * Size:	00006C
 */
void Game::Ujib::StateDive::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x154338
	  lwz       r0, 0x1E0(r31)
	  mr        r3, r31
	  lfs       f0, -0x3774(r2)
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x15A15C
	  mr        r3, r31
	  li        r4, 0x3
	  li        r5, 0
	  bl        -0x156AE4
	  mr        r3, r31
	  bl        -0xB8C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025BB08
 * Size:	000050
 */
void Game::Ujib::StateDive::exec((Game::EnemyBase*))
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
 * Address:	8025BB58
 * Size:	00003C
 */
void Game::Ujib::StateDive::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x1543DC
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,10,8
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
 * Address:	8025BB94
 * Size:	000034
 */
void Game::Ujib::StateMove::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x4
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  li        r5, 0
	  stw       r0, 0x2C4(r3)
	  bl        -0x156BB0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025BBC8
 * Size:	0004C8
 */
void Game::Ujib::StateMove::exec((Game::EnemyBase*))
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
	  mr        r31, r4
	  mr        r30, r3
	  lwz       r7, 0xC0(r31)
	  li        r4, 0
	  mr        r3, r31
	  li        r5, 0
	  lfs       f1, 0x424(r7)
	  li        r6, 0
	  lfs       f2, 0x3D4(r7)
	  bl        -0x148BE8
	  mr.       r28, r3
	  beq-      .loc_0x3C4
	  stw       r28, 0x230(r31)
	  mr        r4, r28
	  addi      r3, r1, 0x50
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
	  bl        -0x226B9C
	  bl        0x1B5F28
	  lwz       r12, 0x0(r31)
	  fmr       f26, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f26
	  bl        0x1B5F30
	  fmr       f31, f1
	  lfs       f0, -0x376C(r2)
	  lfs       f1, -0x3770(r2)
	  fmuls     f0, f0, f29
	  fmuls     f28, f31, f30
	  fmuls     f1, f1, f0
	  fabs      f0, f28
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x148
	  lfs       f0, -0x3774(r2)
	  fcmpo     cr0, f28, f0
	  ble-      .loc_0x144
	  fmr       f28, f1
	  b         .loc_0x148

	.loc_0x144:
	  fneg      f28, f1

	.loc_0x148:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f28, f1
	  bl        0x1B5EA8
	  stfs      f1, 0x1FC(r31)
	  mr        r3, r31
	  lfs       f0, 0x1FC(r31)
	  stfs      f0, 0x1A8(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r4, 0xC0(r31)
	  lwz       r12, 0x64(r12)
	  lfs       f29, 0x2E4(r4)
	  mtctr     r12
	  bctrl
	  bl        -0x18C538
	  mr        r3, r31
	  lfs       f2, 0x1D4(r31)
	  lwz       r12, 0x0(r31)
	  frsp      f26, f1
	  lfs       f30, 0x1D8(r31)
	  lfs       f0, 0x1DC(r31)
	  lwz       r12, 0x64(r12)
	  stfs      f2, 0x74(r1)
	  stfs      f30, 0x78(r1)
	  stfs      f0, 0x7C(r1)
	  mtctr     r12
	  bctrl
	  bl        -0x18CAD4
	  fmuls     f0, f29, f26
	  mr        r4, r31
	  frsp      f1, f1
	  addi      r3, r1, 0x14
	  li        r29, 0
	  stfs      f0, 0x1D4(r31)
	  fmuls     f0, f29, f1
	  stfs      f30, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
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
	  bge-      .loc_0x2E0
	  lfs       f0, -0x376C(r2)
	  fabs      f2, f31
	  lfs       f1, -0x3770(r2)
	  fmuls     f0, f0, f28
	  frsp      f2, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x2E0
	  li        r29, 0x1

	.loc_0x2E0:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x2FC
	  li        r0, 0xB
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x156C1C
	  b         .loc_0x3FC

	.loc_0x2FC:
	  mr        r4, r31
	  addi      r3, r1, 0x68
	  lwz       r12, 0x0(r31)
	  lfs       f26, 0x198(r31)
	  lwz       r12, 0x8(r12)
	  lfs       f27, 0x19C(r31)
	  lfs       f28, 0x1A0(r31)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x6C(r1)
	  lfs       f2, 0x68(r1)
	  fsubs     f3, f0, f27
	  lfs       f1, 0x70(r1)
	  fsubs     f2, f2, f26
	  lfs       f0, -0x3774(r2)
	  fsubs     f1, f1, f28
	  fmuls     f3, f3, f3
	  fmuls     f4, f1, f1
	  fmadds    f1, f2, f2, f3
	  fadds     f1, f4, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x364
	  ble-      .loc_0x368
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x368

	.loc_0x364:
	  fmr       f1, f0

	.loc_0x368:
	  lwz       r4, 0xC0(r31)
	  lfs       f0, 0x35C(r4)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x38C
	  li        r0, 0x9
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x156CAC
	  b         .loc_0x3FC

	.loc_0x38C:
	  lfs       f1, 0x58C(r4)
	  mr        r3, r31
	  lfs       f2, 0x564(r4)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  bl        -0x148F1C
	  cmplwi    r3, 0
	  beq-      .loc_0x3FC
	  li        r0, 0xB
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x156CE4
	  b         .loc_0x3FC

	.loc_0x3C4:
	  mr        r3, r31
	  bl        -0x195C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x3EC
	  mr        r3, r31
	  bl        -0x1B20
	  stw       r3, 0x2C4(r31)
	  mr        r3, r31
	  bl        -0x156D0C
	  b         .loc_0x3FC

	.loc_0x3EC:
	  li        r0, 0x9
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x156D20

	.loc_0x3FC:
	  mr        r3, r31
	  bl        -0x1FA4
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3774(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x43C
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x478

	.loc_0x43C:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x478
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x478
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x478:
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
 * Address:	8025C090
 * Size:	000004
 */
void Game::Ujib::StateMove::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025C094
 * Size:	000034
 */
void Game::Ujib::StateMoveSide::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x4
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  li        r5, 0
	  stw       r0, 0x2C4(r3)
	  bl        -0x1570B0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025C0C8
 * Size:	000130
 */
void Game::Ujib::StateMoveSide::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r7, 0xC0(r31)
	  lfs       f1, 0x424(r7)
	  lfs       f2, 0x3D4(r7)
	  bl        -0x1490B0
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x156E78
	  b         .loc_0x9C

	.loc_0x58:
	  mr        r3, r31
	  bl        -0x1AF0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8C
	  mr        r3, r31
	  bl        -0x1AD8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x9C
	  li        r0, 0x7
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x156EAC
	  b         .loc_0x9C

	.loc_0x8C:
	  li        r0, 0x9
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x156EC0

	.loc_0x9C:
	  mr        r3, r31
	  bl        -0x2144
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3774(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xDC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x118

	.loc_0xDC:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x118
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x118
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
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
 * Address:	8025C1F8
 * Size:	000004
 */
void Game::Ujib::StateMoveSide::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025C1FC
 * Size:	000034
 */
void Game::Ujib::StateMoveCentre::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x4
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  li        r5, 0
	  stw       r0, 0x2C4(r3)
	  bl        -0x157218
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025C230
 * Size:	000130
 */
void Game::Ujib::StateMoveCentre::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r7, 0xC0(r31)
	  lfs       f1, 0x424(r7)
	  lfs       f2, 0x3D4(r7)
	  bl        -0x149218
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x156FE0
	  b         .loc_0x9C

	.loc_0x58:
	  mr        r3, r31
	  bl        -0x1C58
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8C
	  mr        r3, r31
	  bl        -0x1998
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x9C
	  li        r0, 0x8
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x157014
	  b         .loc_0x9C

	.loc_0x8C:
	  li        r0, 0x9
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x157028

	.loc_0x9C:
	  mr        r3, r31
	  bl        -0x22AC
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3774(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xDC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x118

	.loc_0xDC:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x118
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x118
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
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
 * Address:	8025C360
 * Size:	000004
 */
void Game::Ujib::StateMoveCentre::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025C364
 * Size:	000034
 */
void Game::Ujib::StateMoveTop::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x4
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  li        r5, 0
	  stw       r0, 0x2C4(r3)
	  bl        -0x157380
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025C398
 * Size:	000130
 */
void Game::Ujib::StateMoveTop::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r7, 0xC0(r31)
	  lfs       f1, 0x424(r7)
	  lfs       f2, 0x3D4(r7)
	  bl        -0x149380
	  cmplwi    r3, 0
	  beq-      .loc_0x58
	  li        r0, 0x5
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x157148
	  b         .loc_0x9C

	.loc_0x58:
	  mr        r3, r31
	  bl        -0x1DC0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8C
	  mr        r3, r31
	  bl        -0x1878
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x9C
	  li        r0, 0xA
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x15717C
	  b         .loc_0x9C

	.loc_0x8C:
	  li        r0, 0x9
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x157190

	.loc_0x9C:
	  mr        r3, r31
	  bl        -0x2414
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3774(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xDC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x118

	.loc_0xDC:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x118
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x118
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
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
 * Address:	8025C4C8
 * Size:	000004
 */
void Game::Ujib::StateMoveTop::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025C4CC
 * Size:	000034
 */
void Game::Ujib::StateGoHome::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x4
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  li        r5, 0
	  stw       r0, 0x2C4(r3)
	  bl        -0x1574E8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025C500
 * Size:	0001DC
 */
void Game::Ujib::StateGoHome::exec((Game::EnemyBase*))
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
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r31, r4
	  mr        r30, r3
	  lfs       f1, 0x19C(r31)
	  addi      r4, r1, 0x14
	  lfs       f2, 0x1A0(r31)
	  mr        r3, r31
	  lfs       f0, 0x198(r31)
	  stfs      f0, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f2, 0x1C(r1)
	  lwz       r5, 0xC0(r31)
	  lfs       f1, 0x2E4(r5)
	  lfs       f2, 0x30C(r5)
	  lfs       f3, 0x334(r5)
	  bl        -0x146F88
	  lwz       r7, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  lfs       f1, 0x564(r7)
	  li        r6, 0
	  lfs       f2, 0x58C(r7)
	  bl        -0x149534
	  cmplwi    r3, 0
	  beq-      .loc_0xA4
	  li        r0, 0xB
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x1572FC
	  b         .loc_0x130

	.loc_0xA4:
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
	  lfs       f0, -0x3774(r2)
	  fsubs     f1, f1, f29
	  fmuls     f3, f3, f3
	  fmuls     f4, f1, f1
	  fmadds    f1, f2, f2, f3
	  fadds     f1, f4, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x10C
	  ble-      .loc_0x110
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x110

	.loc_0x10C:
	  fmr       f1, f0

	.loc_0x110:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x384(r3)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x130
	  li        r0, 0x4
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x15738C

	.loc_0x130:
	  mr        r3, r31
	  bl        -0x2610
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3774(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x170
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1AC

	.loc_0x170:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1AC
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x1AC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1AC:
	  psq_l     f31,0x58(r1),0,0
	  lfd       f31, 0x50(r1)
	  psq_l     f30,0x48(r1),0,0
	  lfd       f30, 0x40(r1)
	  psq_l     f29,0x38(r1),0,0
	  lfd       f29, 0x30(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r0, 0x64(r1)
	  lwz       r30, 0x28(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025C6DC
 * Size:	000004
 */
void Game::Ujib::StateGoHome::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025C6E0
 * Size:	000058
 */
void Game::Ujib::StateAttack1::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, -0x3774(r2)
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0x5
	  stfs      f0, 0x1D4(r31)
	  mr        r3, r31
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        -0x15770C
	  li        r0, -0x1
	  mr        r3, r31
	  stw       r0, 0x2C4(r31)
	  bl        -0x1730
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025C738
 * Size:	000140
 */
void Game::Ujib::StateAttack1::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r7, 0xC0(r31)
	  lfs       f1, 0x424(r7)
	  lfs       f2, 0x3D4(r7)
	  bl        -0x149720
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  li        r0, 0x5
	  stw       r0, 0x2C4(r31)
	  b         .loc_0x90

	.loc_0x50:
	  mr        r3, r31
	  bl        -0x2158
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x88
	  mr        r3, r31
	  bl        -0x1C10
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x7C
	  li        r0, 0xA
	  stw       r0, 0x2C4(r31)
	  b         .loc_0x90

	.loc_0x7C:
	  li        r0, 0x8
	  stw       r0, 0x2C4(r31)
	  b         .loc_0x90

	.loc_0x88:
	  li        r0, 0x9
	  stw       r0, 0x2C4(r31)

	.loc_0x90:
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3774(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xC8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x128

	.loc_0xC8:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x128
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x100
	  mr        r3, r31
	  bl        -0x21EC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x128
	  mr        r3, r31
	  bl        -0x19B4
	  b         .loc_0x128

	.loc_0x100:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x128
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x2C4(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x128:
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
 * Address:	8025C878
 * Size:	000004
 */
void Game::Ujib::StateAttack1::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025C87C
 * Size:	000048
 */
void Game::Ujib::StateAttack2::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  lfs       f0, -0x3774(r2)
	  stw       r0, 0x14(r1)
	  li        r4, 0x6
	  li        r5, 0
	  lwz       r0, 0x1E0(r3)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r3)
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x1578AC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025C8C4
 * Size:	000218
 */
void Game::Ujib::StateAttack2::exec((Game::EnemyBase*))
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
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        -0x28D8
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x1E8
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x68
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x20
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x1E8

	.loc_0x68:
	  cmplwi    r0, 0x3
	  bne-      .loc_0x80
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r31)
	  b         .loc_0x1E8

	.loc_0x80:
	  cmplwi    r0, 0x4
	  bne-      .loc_0xB8
	  lwz       r6, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  lfs       f1, 0x5B4(r6)
	  lfs       f2, 0x5DC(r6)
	  lfs       f3, 0x604(r6)
	  bl        -0x148708
	  mr        r3, r31
	  li        r4, 0
	  bl        -0x148E40
	  b         .loc_0x1E8

	.loc_0xB8:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x1E8
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3774(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0xF8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1E8

	.loc_0xF8:
	  lwz       r0, 0x1F4(r31)
	  cmpwi     r0, 0
	  beq-      .loc_0x128
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0xC
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1E8

	.loc_0x128:
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
	  lfs       f0, -0x3774(r2)
	  fsubs     f1, f1, f29
	  fmuls     f3, f3, f3
	  fmuls     f4, f1, f1
	  fmadds    f1, f2, f2, f3
	  fadds     f1, f4, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x190
	  ble-      .loc_0x194
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0x194

	.loc_0x190:
	  fmr       f1, f0

	.loc_0x194:
	  lwz       r3, 0xC0(r31)
	  lfs       f0, 0x35C(r3)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1C8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x1E8

	.loc_0x1C8:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1E8:
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
 * Address:	8025CADC
 * Size:	000010
 */
void Game::Ujib::StateAttack2::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1E0(r4)
	  rlwinm    r0,r0,0,11,9
	  stw       r0, 0x1E0(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025CAEC
 * Size:	00003C
 */
void Game::Ujib::StateEat::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  lfs       f0, -0x3774(r2)
	  stw       r0, 0x14(r1)
	  li        r4, 0x7
	  li        r5, 0
	  stfs      f0, 0x1D4(r3)
	  stfs      f0, 0x1D8(r3)
	  stfs      f0, 0x1DC(r3)
	  bl        -0x157B10
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025CB28
 * Size:	0001A8
 */
void Game::Ujib::StateEat::exec((Game::EnemyBase*))
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
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  bl        -0x2B3C
	  lfs       f1, 0x200(r31)
	  lfs       f0, -0x3774(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x74
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x178

	.loc_0x74:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x178
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xB0
	  lwz       r5, 0xC0(r31)
	  mr        r3, r31
	  li        r4, 0
	  lfs       f1, 0x81C(r5)
	  bl        -0x148D44
	  mr        r3, r31
	  bl        -0x1B50
	  b         .loc_0x178

	.loc_0xB0:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x178
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
	  lfs       f0, -0x3774(r2)
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
	  li        r5, 0x9
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x178

	.loc_0x158:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
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
 * Address:	8025CCD0
 * Size:	000004
 */
void Game::Ujib::StateEat::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  blr
	*/
}
