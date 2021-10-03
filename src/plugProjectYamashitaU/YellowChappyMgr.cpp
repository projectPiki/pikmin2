

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
 * Address:	8012BFF0
 * Size:	000058
 */
void Game::YellowChappy::Mgr::__ct( (int, unsigned char))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1994
  lis       r4, 0x804B
  addi      r3, r31, 0x50
  subi      r4, r4, 0x1900
  stw       r4, 0x0(r31)
  addi      r0, r4, 0x38
  stw       r0, 0x4(r31)
  bl        0x6FF0
  lis       r4, 0x8048
  mr        r3, r31
  subi      r0, r4, 0x3F78
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
 * Address:	8012C048
 * Size:	00006C
 */
void Game::YellowChappy::Mgr::loadTexData(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r3
  addi      r3, r1, 0x8
  lwz       r4, -0x7C18(r13)
  bl        0x3205B8
  lwz       r0, -0x7C18(r13)
  addi      r4, r1, 0x8
  lwz       r3, -0x63D8(r13)
  stw       r0, 0x8(r1)
  bl        0x320728
  lwz       r0, 0x30(r3)
  addi      r4, r1, 0x8
  stw       r0, 0x44(r31)
  lwz       r0, -0x7C14(r13)
  lwz       r3, -0x63D8(r13)
  stw       r0, 0x8(r1)
  bl        0x32070C
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
 * Address:	8012C0B4
 * Size:	000048
 */
void Game::YellowChappy::Mgr::doAlloc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x884
  bl        -0x108228
  mr.       r4, r3
  beq-      .loc_0x2C
  bl        -0x127A0
  mr        r4, r3

.loc_0x2C:
  mr        r3, r31
  bl        0x37B8
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8012C0FC
 * Size:	000034
 */
void Game::YellowChappy::Mgr::loadAnimData(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1990
  addi      r3, r31, 0x50
  bl        0x6F04
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8012C130
 * Size:	0000C8
 */
void Game::YellowChappy::Mgr::__dt(void)
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
  subi      r3, r3, 0x1900
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
  bl        0x2E53C0

.loc_0x9C:
  extsh.    r0, r31
  ble-      .loc_0xAC
  mr        r3, r30
  bl        -0x108124

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
 * Address:	8012C1F8
 * Size:	000008
 */
void Game::YellowChappy::Mgr::getEnemyTypeID(void)
{
/*
.loc_0x0:
  li        r3, 0x2B
  blr
*/
}

/*
 * --INFO--
 * Address:	8012C200
 * Size:	000008
 */
void Game::YellowChappy::Mgr::getChangeTexture0(void)
{
/*
.loc_0x0:
  lwz       r3, 0x44(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8012C208
 * Size:	000008
 */
void Game::YellowChappy::Mgr::getChangeTexture1(void)
{
/*
.loc_0x0:
  lwz       r3, 0x48(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8012C210
 * Size:	000060
 */
void Game::YellowChappy::Mgr::createObj( (int))
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
  mulli     r3, r31, 0x300
  addi      r3, r3, 0x10
  bl        -0x108288
  lis       r4, 0x8013
  lis       r5, 0x8013
  subi      r4, r4, 0x3C88
  mr        r7, r31
  subi      r5, r5, 0x3D90
  li        r6, 0x300
  bl        -0x6A860
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
 * Address:	8012C270
 * Size:	0000F0
 */
void Game::YellowChappy::Obj::__dt(void)
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
  beq-      .loc_0xD4
  lis       r3, 0x804B
  addi      r0, r30, 0x2F0
  subi      r4, r3, 0x17B0
  stw       r4, 0x0(r30)
  addi      r3, r4, 0x1B0
  addi      r4, r4, 0x334
  stw       r3, 0x178(r30)
  lwz       r3, 0x17C(r30)
  stw       r4, 0x0(r3)
  lwz       r3, 0x17C(r30)
  sub       r0, r0, r3
  stw       r0, 0xC(r3)
  beq-      .loc_0xC4
  lis       r3, 0x804B
  addi      r0, r30, 0x2E4
  subi      r4, r3, 0x20B4
  stw       r4, 0x0(r30)
  addi      r3, r4, 0x1B0
  addi      r4, r4, 0x334
  stw       r3, 0x178(r30)
  lwz       r3, 0x17C(r30)
  stw       r4, 0x0(r3)
  lwz       r3, 0x17C(r30)
  sub       r0, r0, r3
  stw       r0, 0xC(r3)
  beq-      .loc_0xC4
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
  bl        0x2E5258

.loc_0xC4:
  extsh.    r0, r31
  ble-      .loc_0xD4
  mr        r3, r30
  bl        -0x10828C

.loc_0xD4:
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
 * Address:	8012C360
 * Size:	000010
 */
void Game::YellowChappy::Mgr::getEnemy( (int))
{
/*
.loc_0x0:
  mulli     r0, r4, 0x300
  lwz       r3, 0x4C(r3)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	8012C370
 * Size:	000008
 */
void @4@Game::YellowChappy::Mgr::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x244
*/
}
