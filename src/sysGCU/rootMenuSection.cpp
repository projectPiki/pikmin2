

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
 * Address:	8044CACC
 * Size:	000048
 */
void RootMenuSection::RootMenuSection(JKRHeap*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r4
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  li        r6, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x28520
	  lis       r4, 0x804F
	  mr        r3, r31
	  subi      r0, r4, 0x2D28
	  stw       r0, 0x0(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044CB14
 * Size:	000070
 */
void RootMenuSection::~RootMenuSection()
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
	  lis       r4, 0x804F
	  subi      r0, r4, 0x2D28
	  stw       r0, 0x0(r30)
	  beq-      .loc_0x44
	  lis       r5, 0x804F
	  li        r4, 0
	  subi      r0, r5, 0x42C8
	  stw       r0, 0x0(r30)
	  bl        -0x291B0

	.loc_0x44:
	  extsh.    r0, r31
	  ble-      .loc_0x54
	  mr        r3, r30
	  bl        -0x428AB0

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
 * Address:	8044CB84
 * Size:	000024
 */
void RootMenuSection::setChildSection(JKRHeap*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        -0x28778
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044CBA8
 * Size:	000004
 */
void RootMenuSection::drawInit(Graphics&)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044CBAC
 * Size:	000008
 */
void RootMenuSection::doUpdate()
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044CBB4
 * Size:	000004
 */
void RootMenuSection::doDraw(Graphics&)
{
	/*
	.loc_0x0:
	  blr
	*/
}
