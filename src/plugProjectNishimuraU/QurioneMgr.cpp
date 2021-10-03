

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8025FA8C
 * Size:	000094
 */
void Game::Qurione::Generator::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x8048
  lis       r4, 0x804F
  stw       r0, 0x14(r1)
  subi      r0, r4, 0x4AD8
  lis       r4, 0x3F3F
  li        r6, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r5, r5, 0x5408
  addi      r4, r4, 0x3F3F
  stw       r0, 0x0(r3)
  lis       r3, 0x804B
  subi      r0, r3, 0x2450
  mr        r7, r31
  stw       r6, 0x10(r31)
  addi      r3, r7, 0x18
  stw       r6, 0xC(r31)
  stw       r6, 0x8(r31)
  stw       r6, 0x4(r31)
  stw       r5, 0x14(r31)
  stw       r0, 0x0(r31)
  bl        0x1B37C0
  lis       r3, 0x804C
  lfs       f1, -0x36A0(r2)
  addi      r0, r3, 0x362C
  lfs       f0, -0x369C(r2)
  stw       r0, 0x0(r31)
  mr        r3, r31
  stfs      f1, 0x24(r31)
  stfs      f0, 0x28(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8025FB20
 * Size:	00000C
 */
void Game::Qurione::Generator::getLatestVersion(void)
{
/*
.loc_0x0:
  lis       r3, 0x3030
  addi      r3, r3, 0x3030
  blr
*/
}

/*
 * --INFO--
 * Address:	8025FB2C
 * Size:	000074
 */
void Game::Qurione::Generator::doRead( (Stream &))
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
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r30, 0x18
  bl        0x1B38D4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x50
  mr        r3, r30
  mr        r4, r31
  bl        0xAC
  b         .loc_0x5C

.loc_0x50:
  mr        r3, r30
  mr        r4, r31
  bl        0xE8

.loc_0x5C:
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
 * Address:	8025FBA0
 * Size:	000080
 */
void Game::Qurione::Generator::doWrite( (Stream &))
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
  lwz       r4, 0x414(r4)
  bl        0x1B4870
  lfs       f1, 0x24(r30)
  mr        r3, r31
  bl        0x1B5C78
  lis       r4, 0x8048
  mr        r3, r31
  addi      r4, r4, 0x5420
  crclr     6, 0x6
  bl        0x1B45F8
  lfs       f1, 0x28(r30)
  mr        r3, r31
  bl        0x1B5C58
  lis       r4, 0x8048
  mr        r3, r31
  addi      r4, r4, 0x542C
  crclr     6, 0x6
  bl        0x1B45D8
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
 * Address:	8025FC20
 * Size:	00004C
 */
void Game::Qurione::Generator::doReadLatestVersion( (Stream &))
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
  bl        0x1B516C
  stfs      f1, 0x24(r30)
  mr        r3, r31
  bl        0x1B5160
  stfs      f1, 0x28(r30)
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
 * Address:	8025FC6C
 * Size:	000004
 */
void Game::Qurione::Generator::doReadOldVersion( (Stream &))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8025FC70
 * Size:	000050
 */
void Game::Qurione::Mgr::__ct( (int, unsigned char))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x130FF0
  lis       r3, 0x804C
  lis       r4, 0x8048
  addi      r5, r3, 0x354C
  mr        r3, r31
  stw       r5, 0x0(r31)
  addi      r5, r5, 0x38
  addi      r0, r4, 0x543C
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
 * Address:	8025FCC0
 * Size:	000048
 */
void Game::Qurione::Mgr::doAlloc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x8D0
  bl        -0x23BE34
  mr.       r4, r3
  beq-      .loc_0x2C
  bl        .loc_0x48
  mr        r4, r3

.loc_0x2C:
  mr        r3, r31
  bl        -0x130454
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
 * Address:	8025FD08
 * Size:	000190
 */
void Game::Qurione::Parms::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8048
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  addi      r31, r4, 0x53F8
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        -0x15658C
  lis       r3, 0x804C
  lis       r5, 0x6670
  addi      r0, r3, 0x3540
  addi      r4, r30, 0x8CC
  stw       r0, 0xD8(r30)
  li        r7, 0
  addi      r0, r31, 0x58
  addi      r3, r30, 0x804
  stw       r4, 0x7F8(r30)
  addi      r4, r30, 0x7F8
  addi      r5, r5, 0x3031
  addi      r6, r31, 0x68
  stw       r7, 0x7FC(r30)
  stw       r0, 0x800(r30)
  bl        0x1B38F4
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x3698(r2)
  stw       r0, 0x804(r30)
  addi      r3, r30, 0x82C
  lfs       f1, -0x3694(r2)
  addi      r4, r30, 0x7F8
  stfs      f0, 0x81C(r30)
  addi      r5, r5, 0x3032
  lfs       f0, -0x3690(r2)
  addi      r6, r31, 0x74
  stfs      f1, 0x824(r30)
  stfs      f0, 0x828(r30)
  bl        0x1B38B8
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x368C(r2)
  stw       r0, 0x82C(r30)
  addi      r3, r30, 0x854
  lfs       f1, -0x3694(r2)
  addi      r4, r30, 0x7F8
  stfs      f0, 0x844(r30)
  addi      r5, r5, 0x3033
  lfs       f0, -0x3688(r2)
  addi      r6, r31, 0x84
  stfs      f1, 0x84C(r30)
  stfs      f0, 0x850(r30)
  bl        0x1B387C
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x3684(r2)
  stw       r0, 0x854(r30)
  addi      r3, r30, 0x87C
  lfs       f1, -0x3694(r2)
  addi      r4, r30, 0x7F8
  stfs      f0, 0x86C(r30)
  addi      r5, r5, 0x3034
  lfs       f0, -0x3680(r2)
  addi      r6, r31, 0x94
  stfs      f1, 0x874(r30)
  stfs      f0, 0x878(r30)
  bl        0x1B3840
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x367C(r2)
  stw       r0, 0x87C(r30)
  addi      r3, r30, 0x8A4
  lfs       f1, -0x3694(r2)
  addi      r4, r30, 0x7F8
  stfs      f0, 0x894(r30)
  addi      r5, r5, 0x3035
  lfs       f0, -0x3678(r2)
  addi      r6, r31, 0xA0
  stfs      f1, 0x89C(r30)
  stfs      f0, 0x8A0(r30)
  bl        0x1B3804
  lis       r3, 0x804B
  lfs       f2, -0x3674(r2)
  subi      r0, r3, 0x5344
  lfs       f1, -0x3694(r2)
  stw       r0, 0x8A4(r30)
  mr        r3, r30
  lfs       f0, -0x3688(r2)
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
 * Address:	8025FE98
 * Size:	000060
 */
void Game::Qurione::Mgr::createObj( (int))
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
  mulli     r3, r31, 0x30C
  addi      r3, r3, 0x10
  bl        -0x23BF10
  lis       r4, 0x8026
  lis       r5, 0x8026
  addi      r4, r4, 0x178
  mr        r7, r31
  subi      r5, r5, 0x108
  li        r6, 0x30C
  bl        -0x19E4E8
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
 * Address:	8025FEF8
 * Size:	0000BC
 */
void Game::Qurione::Obj::__dt(void)
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
  addi      r0, r31, 0x2FC
  addi      r4, r3, 0x3748
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
  bl        0x1B1604

.loc_0x90:
  extsh.    r0, r30
  ble-      .loc_0xA0
  mr        r3, r31
  bl        -0x23BEE0

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
 * Address:	8025FFB4
 * Size:	000010
 */
void Game::Qurione::Mgr::getEnemy( (int))
{
/*
.loc_0x0:
  mulli     r0, r4, 0x30C
  lwz       r3, 0x44(r3)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	8025FFC4
 * Size:	000050
 */
void Game::Qurione::Parms::read( (Stream &))
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
  bl        0x1B3814
  mr        r4, r31
  addi      r3, r30, 0xE0
  bl        0x1B3808
  mr        r4, r31
  addi      r3, r30, 0x7F8
  bl        0x1B37FC
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
 * Address:	80260014
 * Size:	0000B0
 */
void Game::Qurione::Mgr::__dt(void)
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
  addi      r3, r3, 0x354C
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
  bl        0x1B14F4

.loc_0x84:
  extsh.    r0, r31
  ble-      .loc_0x94
  mr        r3, r30
  bl        -0x23BFF0

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
 * Address:	802600C4
 * Size:	000008
 */
void Game::Qurione::Mgr::getEnemyTypeID(void)
{
/*
.loc_0x0:
  li        r3, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802600CC
 * Size:	00002C
 */
void Game::Qurione::Mgr::doLoadBmd( (void *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x2024
  mr        r3, r4
  stw       r0, 0x14(r1)
  addi      r4, r5, 0x10
  bl        -0x1F0850
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802600F8
 * Size:	000070
 */
void Game::Qurione::Generator::__dt(void)
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
  beq-      .loc_0x54
  lis       r4, 0x804C
  addi      r0, r4, 0x362C
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804B
  li        r4, 0
  subi      r0, r5, 0x2450
  stw       r0, 0x0(r30)
  bl        0x1B1450

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x23C094

.loc_0x54:
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
 * Address:	80260168
 * Size:	000008
 */
void Game::Qurione::Generator::getInitialParam(void)
{
/*
.loc_0x0:
  addi      r3, r3, 0x24
  blr
*/
}

/*
 * --INFO--
 * Address:	80260170
 * Size:	000008
 */
void @4@Game::Qurione::Mgr::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x160
*/
}
