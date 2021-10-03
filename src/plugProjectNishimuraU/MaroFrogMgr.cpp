

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
 * Address:	8026152C
 * Size:	000050
 */
void Game::MaroFrog::Mgr::__ct( (int, unsigned char))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1328AC
  lis       r3, 0x804C
  lis       r4, 0x8048
  addi      r5, r3, 0x3AA0
  mr        r3, r31
  stw       r5, 0x0(r31)
  addi      r5, r5, 0x38
  addi      r0, r4, 0x5770
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
 * Address:	8026157C
 * Size:	000048
 */
void Game::MaroFrog::Mgr::doAlloc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x8A8
  bl        -0x23D6F0
  mr.       r4, r3
  beq-      .loc_0x2C
  bl        -0x93E8
  mr        r4, r3

.loc_0x2C:
  mr        r3, r31
  bl        -0x131D10
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802615C4
 * Size:	000060
 */
void Game::MaroFrog::Mgr::createObj( (int))
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
  mulli     r3, r31, 0x2F0
  addi      r3, r3, 0x10
  bl        -0x23D63C
  lis       r4, 0x8026
  lis       r5, 0x8026
  addi      r4, r4, 0x17E0
  mr        r7, r31
  addi      r5, r5, 0x1624
  li        r6, 0x2F0
  bl        -0x19FC14
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
 * Address:	80261624
 * Size:	0000EC
 */
void Game::MaroFrog::Obj::__dt(void)
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
  beq-      .loc_0xD0
  lis       r3, 0x804C
  addi      r5, r30, 0x2E0
  addi      r4, r3, 0x3B80
  stw       r4, 0x0(r30)
  addi      r3, r4, 0x1B0
  addi      r0, r4, 0x304
  stw       r3, 0x178(r30)
  lwz       r3, 0x17C(r30)
  stw       r0, 0x0(r3)
  lwz       r3, 0x17C(r30)
  sub       r0, r5, r3
  stw       r0, 0xC(r3)
  beq-      .loc_0xC0
  lis       r3, 0x804C
  addi      r4, r3, 0x24D0
  stw       r4, 0x0(r30)
  addi      r3, r4, 0x1B0
  addi      r0, r4, 0x304
  stw       r3, 0x178(r30)
  lwz       r3, 0x17C(r30)
  stw       r0, 0x0(r3)
  lwz       r3, 0x17C(r30)
  sub       r0, r5, r3
  stw       r0, 0xC(r3)
  beq-      .loc_0xC0
  lis       r3, 0x804B
  addi      r0, r30, 0x2BC
  subi      r4, r3, 0x5CDC
  addi      r3, r30, 0x290
  stw       r4, 0x0(r30)
  addi      r5, r4, 0x1B0
  addi      r6, r4, 0x2F8
  li        r4, -0x1
  stw       r5, 0x178(r30)
  lwz       r5, 0x17C(r30)
  stw       r6, 0x0(r5)
  lwz       r5, 0x17C(r30)
  sub       r0, r0, r5
  stw       r0, 0xC(r5)
  bl        0x1AFEA8

.loc_0xC0:
  extsh.    r0, r31
  ble-      .loc_0xD0
  mr        r3, r30
  bl        -0x23D63C

.loc_0xD0:
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
 * Address:	80261710
 * Size:	000010
 */
void Game::MaroFrog::Mgr::getEnemy( (int))
{
/*
.loc_0x0:
  mulli     r0, r4, 0x2F0
  lwz       r3, 0x44(r3)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	80261720
 * Size:	0000B0
 */
void Game::MaroFrog::Mgr::__dt(void)
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
  addi      r3, r3, 0x3AA0
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
  bl        0x1AFDE8

.loc_0x84:
  extsh.    r0, r31
  ble-      .loc_0x94
  mr        r3, r30
  bl        -0x23D6FC

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
 * Address:	802617D0
 * Size:	000008
 */
void Game::MaroFrog::Mgr::getEnemyTypeID(void)
{
/*
.loc_0x0:
  li        r3, 0x12
  blr
*/
}

/*
 * --INFO--
 * Address:	802617D8
 * Size:	000008
 */
void @4@Game::MaroFrog::Mgr::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0xBC
*/
}
