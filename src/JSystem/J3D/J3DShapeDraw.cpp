

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void J3DShapeDraw::countVertex(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000184
 */
void J3DShapeDraw::addTexMtxIndexInDL(unsigned long, unsigned long,
                                      unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8008884C
 * Size:	000018
 */
void J3DShapeDraw::J3DShapeDraw(const unsigned char*, unsigned long)
{
	/*
	.loc_0x0:
	  lis       r6, 0x804A
	  addi      r0, r6, 0x2FE0
	  stw       r0, 0x0(r3)
	  stw       r4, 0x8(r3)
	  stw       r5, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80088864
 * Size:	00002C
 */
void J3DShapeDraw::draw() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  lwz       r3, 0x8(r3)
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x4(r4)
	  bl        0x60B5C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80088890
 * Size:	000048
 */
void J3DShapeDraw::~J3DShapeDraw()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x30
	  lis       r5, 0x804A
	  extsh.    r0, r4
	  addi      r0, r5, 0x2FE0
	  stw       r0, 0x0(r31)
	  ble-      .loc_0x30
	  bl        -0x64808

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}