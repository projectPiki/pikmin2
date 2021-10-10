

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
 * Address:	80250824
 * Size:	0000CC
 */
void Game::Cave::ObjectLayout::__ct((Game::Cave::MapNode*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x804C
	  stw       r0, 0x14(r1)
	  addi      r0, r5, 0x1BB8
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x804C
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  stw       r0, 0x0(r31)
	  addi      r0, r3, 0x1BA8
	  li        r3, 0x20
	  stw       r0, 0x0(r31)
	  bl        -0x22C8B0
	  stw       r3, 0x4(r31)
	  li        r0, 0
	  cmplwi    r30, 0
	  lwz       r3, 0x4(r31)
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x4(r31)
	  stw       r0, 0x4(r3)
	  lwz       r3, 0x4(r31)
	  stw       r0, 0x8(r3)
	  lwz       r3, 0x4(r31)
	  stw       r0, 0xC(r3)
	  lwz       r3, 0x4(r31)
	  stw       r0, 0x10(r3)
	  lwz       r3, 0x4(r31)
	  stw       r0, 0x14(r3)
	  lwz       r3, 0x4(r31)
	  stw       r0, 0x18(r3)
	  lwz       r3, 0x4(r31)
	  stw       r0, 0x1C(r3)
	  beq-      .loc_0xB0
	  lwz       r0, 0x1C(r30)
	  lwz       r3, 0x4(r31)
	  stw       r0, 0x0(r3)
	  lwz       r0, 0x24(r30)
	  lwz       r3, 0x4(r31)
	  stw       r0, 0x4(r3)
	  lwz       r0, 0x20(r30)
	  lwz       r3, 0x4(r31)
	  stw       r0, 0x8(r3)

	.loc_0xB0:
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
 * Address:	802508F0
 * Size:	000010
 */
void Game::Cave::ObjectLayout::setNode((int, Game::ObjectLayoutNode*))
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4(r3)
	  rlwinm    r0,r4,2,0,29
	  stwx      r5, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80250900
 * Size:	000048
 */
void Game::Cave::ObjectLayout::getCount((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,2,0,29
	  lwz       r3, 0x4(r3)
	  lwzx      r3, r3, r0
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x38

	.loc_0x34:
	  li        r3, 0

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80250948
 * Size:	000040
 */
void Game::Cave::ObjectLayout::getNode((int, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,2,0,29
	  lwz       r3, 0x4(r3)
	  lwzx      r3, r3, r0
	  cmplwi    r3, 0
	  beq-      .loc_0x2C
	  mr        r4, r5
	  bl        0x1C0D30
	  b         .loc_0x30

	.loc_0x2C:
	  li        r3, 0

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}
