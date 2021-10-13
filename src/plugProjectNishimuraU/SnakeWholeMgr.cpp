

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
 * Address:	802CE2DC
 * Size:	000050
 */
void Game::SnakeWhole::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x19F65C
	  lis       r3, 0x804D
	  lis       r4, 0x8049
	  addi      r5, r3, 0x2358
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  subi      r0, r4, 0x47E4
	  stw       r5, 0x4(r31)
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
 * Address:	802CE32C
 * Size:	000048
 */
void Game::SnakeWhole::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x8A8
	  bl        -0x2AA4A0
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        .loc_0x48
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x19EAC0
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
 * Address:	802CE374
 * Size:	000154
 */
void Game::SnakeWhole::Parms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  subi      r30, r4, 0x47F8
	  bl        -0x1C4BF8
	  lis       r3, 0x804D
	  lis       r5, 0x6670
	  addi      r0, r3, 0x2438
	  addi      r4, r31, 0x8A4
	  stw       r0, 0xD8(r31)
	  li        r7, 0
	  addi      r0, r30, 0x30
	  addi      r3, r31, 0x804
	  stw       r4, 0x7F8(r31)
	  addi      r4, r31, 0x7F8
	  addi      r5, r5, 0x3031
	  addi      r6, r30, 0x40
	  stw       r7, 0x7FC(r31)
	  stw       r0, 0x800(r31)
	  bl        0x145288
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1B18(r2)
	  stw       r0, 0x804(r31)
	  addi      r3, r31, 0x82C
	  lfs       f1, -0x1B14(r2)
	  addi      r4, r31, 0x7F8
	  stfs      f0, 0x81C(r31)
	  addi      r5, r5, 0x3131
	  lfs       f0, -0x1B10(r2)
	  addi      r6, r30, 0x4C
	  stfs      f1, 0x824(r31)
	  stfs      f0, 0x828(r31)
	  bl        0x14524C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1B0C(r2)
	  stw       r0, 0x82C(r31)
	  addi      r3, r31, 0x854
	  lfs       f1, -0x1B14(r2)
	  addi      r4, r31, 0x7F8
	  stfs      f0, 0x844(r31)
	  addi      r5, r5, 0x3132
	  lfs       f0, -0x1B08(r2)
	  addi      r6, r30, 0x5C
	  stfs      f1, 0x84C(r31)
	  stfs      f0, 0x850(r31)
	  bl        0x145210
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1B10(r2)
	  stw       r0, 0x854(r31)
	  addi      r3, r31, 0x87C
	  lfs       f1, -0x1B14(r2)
	  addi      r4, r31, 0x7F8
	  stfs      f0, 0x86C(r31)
	  addi      r5, r5, 0x3231
	  lfs       f0, -0x1B08(r2)
	  addi      r6, r30, 0x6C
	  stfs      f1, 0x874(r31)
	  stfs      f0, 0x878(r31)
	  bl        0x1451D4
	  lis       r3, 0x804B
	  lfs       f2, -0x1B04(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x1B14(r2)
	  stw       r0, 0x87C(r31)
	  mr        r3, r31
	  lfs       f0, -0x1B00(r2)
	  stfs      f2, 0x894(r31)
	  stfs      f1, 0x89C(r31)
	  stfs      f0, 0x8A0(r31)
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
 * Address:	802CE4C8
 * Size:	000060
 */
void Game::SnakeWhole::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x340
	  addi      r3, r3, 0x10
	  bl        -0x2AA540
	  lis       r4, 0x802D
	  lis       r5, 0x802D
	  subi      r4, r4, 0x1868
	  mr        r7, r31
	  subi      r5, r5, 0x1AD8
	  li        r6, 0x340
	  bl        -0x20CB18
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
 * Address:	802CE528
 * Size:	0000BC
 */
void Game::SnakeWhole::Obj::__dt(void)
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
	  lis       r3, 0x804D
	  addi      r0, r31, 0x330
	  addi      r4, r3, 0x2478
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
	  bl        0x142FD4

	.loc_0x90:
	  extsh.    r0, r30
	  ble-      .loc_0xA0
	  mr        r3, r31
	  bl        -0x2AA510

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
 * Address:	802CE5E4
 * Size:	000010
 */
void Game::SnakeWhole::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x340
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CE5F4
 * Size:	000068
 */
void Game::SnakeWhole::Mgr::loadModelData(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x19E4FC
	  li        r5, 0
	  b         .loc_0x40

	.loc_0x20:
	  lwz       r3, 0x80(r4)
	  rlwinm    r0,r5,2,14,29
	  addi      r5, r5, 0x1
	  lwzx      r3, r3, r0
	  lwz       r0, 0xC(r3)
	  rlwinm    r0,r0,0,20,15
	  ori       r0, r0, 0x2000
	  stw       r0, 0xC(r3)

	.loc_0x40:
	  lwz       r4, 0x1C(r31)
	  rlwinm    r0,r5,0,16,31
	  lhz       r3, 0x7C(r4)
	  cmplw     r0, r3
	  blt+      .loc_0x20
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CE65C
 * Size:	0000B0
 */
void Game::SnakeWhole::Mgr::__dt(void)
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
	  lis       r3, 0x804D
	  addi      r3, r3, 0x2358
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
	  bl        0x142EAC

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x2AA638

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
 * Address:	802CE70C
 * Size:	000008
 */
void Game::SnakeWhole::Mgr::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x46
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CE714
 * Size:	00002C
 */
void Game::SnakeWhole::Mgr::doLoadBmd((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x2124
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x30
	  bl        -0x25EE98
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802CE740
 * Size:	000050
 */
void Game::SnakeWhole::Parms::read((Stream&))
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
	  bl        0x145098
	  mr        r4, r31
	  addi      r3, r30, 0xE0
	  bl        0x14508C
	  mr        r4, r31
	  addi      r3, r30, 0x7F8
	  bl        0x145080
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
 * Address:	802CE790
 * Size:	000008
 */
void @4 @Game::SnakeWhole::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x138
	*/
}
