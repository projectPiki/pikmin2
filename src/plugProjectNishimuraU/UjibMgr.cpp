

/*
 * --INFO--
 * Address:	8025979C
 * Size:	000050
 */
void Game::Ujib::Mgr::Mgr(int, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x12AB1C
	  lis       r3, 0x804C
	  lis       r4, 0x8048
	  addi      r5, r3, 0x2814
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  addi      r0, r4, 0x505C
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
 * Address:	802597EC
 * Size:	000048
 */
void Game::Ujib::Mgr::doAlloc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x858
	  bl        -0x235960
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        .loc_0x48
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x129F80
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
 * Address:	80259834
 * Size:	0000DC
 */
void Game::Ujib::Parms::Parms()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x5050
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        -0x1500B8
	  lis       r3, 0x804C
	  lis       r5, 0x6670
	  addi      r0, r3, 0x2808
	  addi      r4, r30, 0x854
	  stw       r0, 0xD8(r30)
	  li        r7, 0
	  addi      r0, r31, 0x24
	  addi      r3, r30, 0x804
	  stw       r4, 0x7F8(r30)
	  addi      r4, r30, 0x7F8
	  addi      r5, r5, 0x3031
	  addi      r6, r31, 0x34
	  stw       r7, 0x7FC(r30)
	  stw       r0, 0x800(r30)
	  bl        0x1B9DC8
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x3848(r2)
	  stw       r0, 0x804(r30)
	  addi      r3, r30, 0x82C
	  lfs       f1, -0x3844(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f0, 0x81C(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x3840(r2)
	  addi      r6, r31, 0x40
	  stfs      f1, 0x824(r30)
	  stfs      f0, 0x828(r30)
	  bl        0x1B9D8C
	  lis       r3, 0x804B
	  lfs       f2, -0x383C(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x3844(r2)
	  stw       r0, 0x82C(r30)
	  mr        r3, r30
	  lfs       f0, -0x3838(r2)
	  stfs      f2, 0x844(r30)
	  stfs      f1, 0x84C(r30)
	  stfs      f0, 0x850(r30)
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
 * Address:	80259910
 * Size:	000060
 */
void Game::Ujib::Mgr::createObj(int)
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
	  mulli     r3, r31, 0x2EC
	  addi      r3, r3, 0x10
	  bl        -0x235988
	  lis       r4, 0x8026
	  lis       r5, 0x8026
	  subi      r4, r4, 0x64B4
	  mr        r7, r31
	  subi      r5, r5, 0x6690
	  li        r6, 0x2EC
	  bl        -0x197F60
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
 * Address:	80259970
 * Size:	0000BC
 */
void Game::Ujib::Obj::~Obj()
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
	  addi      r0, r31, 0x2DC
	  addi      r4, r3, 0x2948
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
	  bl        0x1B7B8C

	.loc_0x90:
	  extsh.    r0, r30
	  ble-      .loc_0xA0
	  mr        r3, r31
	  bl        -0x235958

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
 * Address:	80259A2C
 * Size:	000010
 */
void Game::Ujib::Mgr::getEnemy(int)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x2EC
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80259A3C
 * Size:	000050
 */
void Game::Ujib::Parms::read(Stream&)
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
	  bl        0x1B9D9C
	  mr        r4, r31
	  addi      r3, r30, 0xE0
	  bl        0x1B9D90
	  mr        r4, r31
	  addi      r3, r30, 0x7F8
	  bl        0x1B9D84
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
 * Address:	80259A8C
 * Size:	0000B0
 */
void Game::Ujib::Mgr::~Mgr()
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
	  addi      r3, r3, 0x2814
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
	  bl        0x1B7A7C

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x235A68

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
 * Address:	80259B3C
 * Size:	000008
 */
void Game::Ujib::Mgr::getEnemyTypeID()
{
	/*
	.loc_0x0:
	  li        r3, 0xD
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80259B44
 * Size:	000008
 */
void Game::Ujib::Mgr::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xBC
	*/
}
