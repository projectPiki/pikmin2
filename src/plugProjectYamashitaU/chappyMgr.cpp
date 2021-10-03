

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
 * Address:	80119784
 * Size:	000050
 */
void Game::Chappy::Mgr::__ct( (int, unsigned char))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x10ED8
  lis       r3, 0x804B
  lis       r4, 0x8048
  subi      r5, r3, 0x3DE4
  mr        r3, r31
  stw       r5, 0x0(r31)
  addi      r5, r5, 0x38
  subi      r0, r4, 0x50E0
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
 * Address:	801197D4
 * Size:	0000B0
 */
void Game::ChappyBase::Mgr::__dt(void)
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
  lis       r3, 0x804B
  subi      r3, r3, 0x21E8
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
  bl        0x2F7D34

.loc_0x84:
  extsh.    r0, r31
  ble-      .loc_0x94
  mr        r3, r30
  bl        -0xF57B0

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
 * Address:	80119884
 * Size:	00006C
 */
void Game::Chappy::Mgr::loadTexData(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r3
  addi      r3, r1, 0x8
  lwz       r4, -0x7C38(r13)
  bl        0x332D7C
  lwz       r0, -0x7C38(r13)
  addi      r4, r1, 0x8
  lwz       r3, -0x63D8(r13)
  stw       r0, 0x8(r1)
  bl        0x332EEC
  lwz       r0, 0x30(r3)
  addi      r4, r1, 0x8
  stw       r0, 0x44(r31)
  lwz       r0, -0x7C34(r13)
  lwz       r3, -0x63D8(r13)
  stw       r0, 0x8(r1)
  bl        0x332ED0
  lwz       r0, 0x30(r3)
  stw       r0, 0x48(r31)
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	801198F0
 * Size:	000048
 */
void Game::Chappy::Mgr::doAlloc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x884
  bl        -0xF5A64
  mr.       r4, r3
  beq-      .loc_0x2C
  bl        .loc_0x48
  mr        r4, r3

.loc_0x2C:
  mr        r3, r31
  bl        0x15F7C
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
 * Address:	80119938
 * Size:	00012C
 */
void Game::ChappyBase::Parms::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8048
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r4, 0x5138
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        -0x101BC
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x3DF0
  li        r8, 0
  stw       r0, 0xD8(r30)
  addi      r7, r30, 0x880
  addi      r0, r31, 0x70
  addi      r3, r30, 0x808
  stb       r8, 0x7F8(r30)
  addi      r4, r30, 0x7FC
  addi      r5, r5, 0x3031
  addi      r6, r31, 0x7C
  stb       r8, 0x7F9(r30)
  stw       r7, 0x7FC(r30)
  stw       r8, 0x800(r30)
  stw       r0, 0x804(r30)
  bl        0x2F9CBC
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x6850(r2)
  stw       r0, 0x808(r30)
  addi      r3, r30, 0x830
  lfs       f1, -0x684C(r2)
  addi      r4, r30, 0x7FC
  stfs      f0, 0x820(r30)
  addi      r5, r5, 0x3032
  lfs       f0, -0x6848(r2)
  addi      r6, r31, 0x88
  stfs      f1, 0x828(r30)
  stfs      f0, 0x82C(r30)
  bl        0x2F9C80
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, -0x6844(r2)
  stw       r0, 0x830(r30)
  addi      r3, r30, 0x858
  lfs       f1, -0x684C(r2)
  addi      r4, r30, 0x7FC
  stfs      f0, 0x848(r30)
  addi      r5, r5, 0x3033
  lfs       f0, -0x6840(r2)
  addi      r6, r31, 0x98
  stfs      f1, 0x850(r30)
  stfs      f0, 0x854(r30)
  bl        0x2F9C44
  lis       r3, 0x804B
  lfs       f2, -0x683C(r2)
  subi      r0, r3, 0x5344
  lfs       f1, -0x684C(r2)
  stw       r0, 0x858(r30)
  li        r0, 0
  lfs       f0, -0x6840(r2)
  mr        r3, r30
  stfs      f2, 0x870(r30)
  stfs      f1, 0x878(r30)
  stfs      f0, 0x87C(r30)
  stb       r0, 0x7F8(r30)
  stb       r0, 0x7F9(r30)
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
 * Address:	80119A64
 * Size:	000050
 */
void Game::ChappyBase::Parms::read( (Stream &))
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
  bl        0x2F9D74
  mr        r4, r31
  addi      r3, r30, 0xE0
  bl        0x2F9D68
  mr        r4, r31
  addi      r3, r30, 0x7FC
  bl        0x2F9D5C
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
 * Address:	80119AB4
 * Size:	0000C8
 */
void Game::Chappy::Mgr::__dt(void)
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
  lis       r3, 0x804B
  subi      r3, r3, 0x3DE4
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x38
  stw       r0, 0x4(r30)
  beq-      .loc_0x9C
  lis       r3, 0x804B
  subi      r3, r3, 0x21E8
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
  bl        0x2F7A3C

.loc_0x9C:
  extsh.    r0, r31
  ble-      .loc_0xAC
  mr        r3, r30
  bl        -0xF5AA8

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
 * Address:	80119B7C
 * Size:	000008
 */
void Game::Chappy::Mgr::getEnemyTypeID(void)
{
/*
.loc_0x0:
  li        r3, 0x2
  blr
*/
}

/*
 * --INFO--
 * Address:	80119B84
 * Size:	000060
 */
void Game::Chappy::Mgr::createObj( (int))
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
  mulli     r3, r31, 0x2F4
  addi      r3, r3, 0x10
  bl        -0xF5BFC
  lis       r4, 0x8011
  lis       r5, 0x8011
  addi      r4, r4, 0x5F90
  mr        r7, r31
  addi      r5, r5, 0x649C
  li        r6, 0x2F4
  bl        -0x581D4
  stw       r3, 0x4C(r30)
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
 * Address:	80119BE4
 * Size:	000010
 */
void Game::Chappy::Mgr::getEnemy( (int))
{
/*
.loc_0x0:
  mulli     r0, r4, 0x2F4
  lwz       r3, 0x4C(r3)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	80119BF4
 * Size:	000008
 */
void @4@Game::Chappy::Mgr::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x144
*/
}
