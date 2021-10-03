

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
 * Address:	8024E170
 * Size:	00006C
 */
void Game::Cave::ItemNode::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x1C320C
  lis       r4, 0x804C
  lis       r3, 0x804C
  addi      r4, r4, 0x1AA8
  li        r0, 0
  stw       r4, 0x0(r31)
  addi      r4, r3, 0x1B48
  lfs       f0, -0x3B28(r2)
  mr        r3, r31
  stw       r4, 0x0(r31)
  stw       r0, 0x18(r31)
  stw       r0, 0x1C(r31)
  stw       r0, 0x20(r31)
  stfs      f0, 0x24(r31)
  stfs      f0, 0x30(r31)
  stfs      f0, 0x2C(r31)
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
 * Address:	8024E1DC
 * Size:	00008C
 */
void Game::Cave::ItemNode::__ct( (Game::Cave::ItemUnit *, Game::Cave::BaseGen *, int))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r6
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  bl        0x1C3188
  lis       r4, 0x804C
  lis       r3, 0x804C
  addi      r0, r4, 0x1AA8
  lfs       f0, -0x3B28(r2)
  stw       r0, 0x0(r28)
  addi      r0, r3, 0x1B48
  mr        r3, r28
  stw       r0, 0x0(r28)
  stw       r29, 0x18(r28)
  stw       r30, 0x1C(r28)
  stw       r31, 0x20(r28)
  stfs      f0, 0x24(r28)
  stfs      f0, 0x30(r28)
  stfs      f0, 0x2C(r28)
  stfs      f0, 0x28(r28)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8024E268
 * Size:	000068
 */
void Game::Cave::ItemNode::makeGlobalData( (Game::Cave::MapNode *))
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
  lwz       r5, 0x1C(r3)
  addi      r3, r1, 0x8
  bl        -0xA7B0
  lfs       f0, 0x8(r1)
  mr        r3, r31
  stfs      f0, 0x28(r30)
  lfs       f0, 0xC(r1)
  stfs      f0, 0x2C(r30)
  lfs       f0, 0x10(r1)
  stfs      f0, 0x30(r30)
  lwz       r4, 0x1C(r30)
  bl        -0xA3B4
  stfs      f1, 0x24(r30)
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
 * Address:	8024E2D0
 * Size:	000020
 */
void Game::Cave::ItemNode::getObjectId(void)
{
/*
.loc_0x0:
  lwz       r3, 0x18(r3)
  lwz       r3, 0x0(r3)
  cmplwi    r3, 0
  beq-      .loc_0x18
  lwz       r3, 0x18(r3)
  blr       

.loc_0x18:
  li        r3, -0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8024E2F0
 * Size:	000008
 */
void Game::Cave::ItemNode::getObjectType(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8024E2F8
 * Size:	000008
 */
void Game::Cave::ItemNode::getBirthCount(void)
{
/*
.loc_0x0:
  lwz       r3, 0x20(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8024E300
 * Size:	000014
 */
void Game::Cave::ItemNode::getBirthPosition( (float &, float &))
{
/*
.loc_0x0:
  lfs       f0, 0x28(r3)
  stfs      f0, 0x0(r4)
  lfs       f0, 0x30(r3)
  stfs      f0, 0x0(r5)
  blr
*/
}

/*
 * --INFO--
 * Address:	8024E314
 * Size:	000008
 */
void Game::Cave::ItemNode::getDirection(void)
{
/*
.loc_0x0:
  lfs       f1, 0x24(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8024E31C
 * Size:	000070
 */
void Game::Cave::ItemNode::__dt(void)
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
  addi      r0, r4, 0x1B48
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804C
  li        r4, 0
  addi      r0, r5, 0x1AA8
  stw       r0, 0x0(r30)
  bl        0x1C322C

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x22A2B8

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
