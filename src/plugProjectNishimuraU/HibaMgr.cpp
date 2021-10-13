

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
 * Address:	8026B8BC
 * Size:	000064
 */
void Game::Hiba::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x13CC3C
	  lis       r3, 0x804C
	  lis       r4, 0x804C
	  addi      r5, r3, 0x53D4
	  lis       r3, 0x8048
	  stw       r5, 0x0(r31)
	  addi      r6, r5, 0x38
	  addi      r5, r4, 0x52F4
	  addi      r0, r3, 0x5E9C
	  stw       r6, 0x4(r31)
	  addi      r4, r5, 0x38
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  stw       r4, 0x4(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026B920
 * Size:	0000B0
 */
void Game::EnemyMgrBaseAlwaysMovieActor::__dt(void)
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
	  beq-      .loc_0x94
	  lis       r3, 0x804C
	  addi      r3, r3, 0x53D4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x84
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x84
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x84
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0x1A5BE8

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x2478FC

	.loc_0x94:
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
 * Address:	8026B9D0
 * Size:	000048
 */
void Game::Hiba::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x8D0
	  bl        -0x247B44
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        .loc_0x48
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x13C164
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x48:
	*/
}

/*
 * --INFO--
 * Address:	8026BA18
 * Size:	000190
 */
void Game::Hiba::Parms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x5E90
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        -0x16229C
	  lis       r3, 0x804C
	  lis       r5, 0x6670
	  addi      r0, r3, 0x52E8
	  addi      r4, r30, 0x8CC
	  stw       r0, 0xD8(r30)
	  li        r7, 0
	  addi      r0, r31, 0x1C
	  addi      r3, r30, 0x804
	  stw       r4, 0x7F8(r30)
	  addi      r4, r30, 0x7F8
	  addi      r5, r5, 0x3032
	  addi      r6, r31, 0x2C
	  stw       r7, 0x7FC(r30)
	  stw       r0, 0x800(r30)
	  bl        0x1A7BE4
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3360(r2)
	  stw       r0, 0x804(r30)
	  addi      r3, r30, 0x82C
	  lfs       f1, -0x335C(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f0, 0x81C(r30)
	  addi      r5, r5, 0x3031
	  lfs       f0, -0x3358(r2)
	  addi      r6, r31, 0x3C
	  stfs      f1, 0x824(r30)
	  stfs      f0, 0x828(r30)
	  bl        0x1A7BA8
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3360(r2)
	  stw       r0, 0x82C(r30)
	  addi      r3, r30, 0x854
	  lfs       f1, -0x335C(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f0, 0x844(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x3358(r2)
	  addi      r6, r31, 0x48
	  stfs      f1, 0x84C(r30)
	  stfs      f0, 0x850(r30)
	  bl        0x1A7B6C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3354(r2)
	  stw       r0, 0x854(r30)
	  addi      r3, r30, 0x87C
	  lfs       f1, -0x335C(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f0, 0x86C(r30)
	  addi      r5, r5, 0x3930
	  lfs       f0, -0x3358(r2)
	  addi      r6, r31, 0x54
	  stfs      f1, 0x874(r30)
	  stfs      f0, 0x878(r30)
	  bl        0x1A7B30
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3350(r2)
	  stw       r0, 0x87C(r30)
	  addi      r3, r30, 0x8A4
	  lfs       f1, -0x335C(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f0, 0x894(r30)
	  addi      r5, r5, 0x3931
	  lfs       f0, -0x334C(r2)
	  addi      r6, r31, 0x60
	  stfs      f1, 0x89C(r30)
	  stfs      f0, 0x8A0(r30)
	  bl        0x1A7AF4
	  lis       r3, 0x804B
	  lfs       f2, -0x3348(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x335C(r2)
	  stw       r0, 0x8A4(r30)
	  mr        r3, r30
	  lfs       f0, -0x334C(r2)
	  stfs      f2, 0x8BC(r30)
	  stfs      f1, 0x8C4(r30)
	  stfs      f0, 0x8C8(r30)
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
 * Address:	8026BBA8
 * Size:	000060
 */
void Game::Hiba::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x2DC
	  addi      r3, r3, 0x10
	  bl        -0x247C20
	  lis       r4, 0x8027
	  lis       r5, 0x8027
	  subi      r4, r4, 0x4174
	  mr        r7, r31
	  subi      r5, r5, 0x43F8
	  li        r6, 0x2DC
	  bl        -0x1AA1F8
	  stw       r3, 0x44(r30)
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
 * Address:	8026BC08
 * Size:	0000BC
 */
void Game::Hiba::Obj::__dt(void)
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
	  beq-      .loc_0xA0
	  lis       r3, 0x804C
	  addi      r0, r31, 0x2CC
	  addi      r4, r3, 0x54D4
	  stw       r4, 0x0(r31)
	  addi      r3, r4, 0x1B0
	  addi      r4, r4, 0x2FC
	  stw       r3, 0x178(r31)
	  lwz       r3, 0x17C(r31)
	  stw       r4, 0x0(r3)
	  lwz       r3, 0x17C(r31)
	  sub       r0, r0, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0x90
	  lis       r3, 0x804B
	  addi      r0, r31, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r31, 0x290
	  stw       r4, 0x0(r31)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r31)
	  lwz       r5, 0x17C(r31)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r31)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0x1A58F4

	.loc_0x90:
	  extsh.    r0, r30
	  ble-      .loc_0xA0
	  mr        r3, r31
	  bl        -0x247BF0

	.loc_0xA0:
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
 * Address:	8026BCC4
 * Size:	000010
 */
void Game::Hiba::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2DC
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026BCD4
 * Size:	000050
 */
void Game::Hiba::Parms::read((Stream&))
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
	  bl        0x1A7B04
	  mr        r4, r31
	  addi      r3, r30, 0xE0
	  bl        0x1A7AF8
	  mr        r4, r31
	  addi      r3, r30, 0x7F8
	  bl        0x1A7AEC
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
 * Address:	8026BD24
 * Size:	0000C8
 */
void Game::Hiba::Mgr::__dt(void)
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
	  lis       r3, 0x804C
	  addi      r3, r3, 0x52F4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804C
	  addi      r3, r3, 0x53D4
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x9C
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0x1A57CC

	.loc_0x9C:
	  extsh.    r0, r31
	  ble-      .loc_0xAC
	  mr        r3, r30
	  bl        -0x247D18

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
 * Address:	8026BDEC
 * Size:	000008
 */
void Game::Hiba::Mgr::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x14
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026BDF4
 * Size:	000008
 */
void Game::EnemyMgrBaseAlwaysMovieActor::isAlwaysMovieActor(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026BDFC
 * Size:	000020
 */
void Game::EnemyMgrBaseAlwaysMovieActor::doAnimation(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x13B990
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026BE1C
 * Size:	000020
 */
void Game::EnemyMgrBaseAlwaysMovieActor::doEntry(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x13B8C8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026BE3C
 * Size:	000020
 */
void Game::EnemyMgrBaseAlwaysMovieActor::doSimulation((float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x13B86C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026BE5C
 * Size:	000020
 */
void Game::EnemyMgrBaseAlwaysMovieActor::doDirectDraw((Graphics&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x13B7F0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8026BE7C
 * Size:	000008
 */
void @4 @Game::EnemyMgrBaseAlwaysMovieActor::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x560
	*/
}

/*
 * --INFO--
 * Address:	8026BE84
 * Size:	000008
 */
void @4 @Game::Hiba::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x164
	*/
}
