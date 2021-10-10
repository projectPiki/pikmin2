

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
 * Address:	........
 * Size:	000044
 */
void check_fragmentation()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80164BF0
 * Size:	0000C0
 */
void Game::BaseHIOSection::__ct((JKRHeap*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r5, r4
	  lis       r6, 0x8048
	  stw       r0, 0x24(r1)
	  li        r4, 0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  subi      r30, r6, 0x1D60
	  li        r6, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        0x2BEB54
	  lis       r4, 0x804B
	  addi      r3, r30, 0x1C
	  addi      r0, r4, 0x1A0C
	  stw       r0, 0x0(r29)
	  bl        0x2BD6AC
	  li        r0, 0
	  stw       r0, 0x3C(r29)
	  lwz       r3, -0x77D4(r13)
	  bl        -0x141490
	  mr        r31, r3
	  lwz       r3, -0x77D4(r13)
	  bl        -0x141470
	  cmplw     r31, r3
	  beq-      .loc_0x80
	  addi      r3, r30, 0x2C
	  addi      r5, r30, 0x40
	  li        r4, 0x13A
	  crclr     6, 0x6
	  bl        -0x13A62C

	.loc_0x80:
	  li        r3, 0xB0
	  bl        -0x140DD0
	  mr.       r0, r3
	  beq-      .loc_0x9C
	  li        r4, 0x3
	  bl        0x2C01D0
	  mr        r0, r3

	.loc_0x9C:
	  stw       r0, 0x44(r29)
	  mr        r3, r29
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80164CB0
 * Size:	0000C4
 */
void Game::BaseHIOSection::__dt(void)
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
	  beq-      .loc_0xA8
	  lis       r3, 0x804B
	  addi      r0, r3, 0x1A0C
	  stw       r0, 0x0(r30)
	  lwz       r3, 0x3C(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  bl        0x2AC8E8
	  lwz       r3, 0x3C(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  li        r0, 0
	  stw       r0, 0x3C(r30)
	  lwz       r3, 0x44(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x84
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x84:
	  li        r0, 0
	  mr        r3, r30
	  stw       r0, 0x44(r30)
	  li        r4, 0
	  bl        0x2BEC60
	  extsh.    r0, r31
	  ble-      .loc_0xA8
	  mr        r3, r30
	  bl        -0x140CA0

	.loc_0xA8:
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
 * Address:	80164D74
 * Size:	000060
 */
void Game::HIORootNode::__dt(void)
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
	  beq-      .loc_0x44
	  lis       r5, 0x804B
	  li        r4, 0
	  addi      r0, r5, 0x19FC
	  stw       r0, 0x0(r30)
	  bl        0x2AC7E4
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x140D00

	.loc_0x44:
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
 * Address:	80164DD4
 * Size:	000150
 */
void Game::BaseHIOSection::setDisplay((JFWDisplay*, int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  lwz       r0, 0x24(r3)
	  li        r3, 0
	  cmplwi    r0, 0
	  bne-      .loc_0x40
	  cmplwi    r29, 0
	  beq-      .loc_0x40
	  li        r3, 0x1

	.loc_0x40:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x64
	  lis       r3, 0x8048
	  lis       r5, 0x8048
	  subi      r3, r3, 0x1D34
	  li        r4, 0x14D
	  subi      r5, r5, 0x1CF8
	  crclr     6, 0x6
	  bl        -0x13A7F4

	.loc_0x64:
	  stw       r29, 0x24(r30)
	  li        r3, 0x28
	  bl        -0x140F9C
	  mr.       r0, r3
	  beq-      .loc_0xB8
	  li        r0, 0
	  lwz       r6, -0x76E0(r13)
	  stb       r0, 0x8(r1)
	  addi      r8, r1, 0xC
	  li        r4, 0
	  li        r5, 0
	  stb       r0, 0x9(r1)
	  stb       r0, 0xA(r1)
	  stb       r0, 0xB(r1)
	  lwz       r0, 0x8(r1)
	  stw       r0, 0xC(r1)
	  lwz       r7, 0x4(r6)
	  lhz       r6, 0x4(r7)
	  lhz       r7, 0x6(r7)
	  bl        -0x138028
	  mr        r0, r3

	.loc_0xB8:
	  stw       r0, 0x28(r30)
	  li        r0, 0x1
	  lwz       r4, 0x28(r30)
	  lwz       r3, 0x24(r30)
	  stw       r4, 0x4(r3)
	  stb       r0, 0x35(r30)
	  lwz       r3, -0x6514(r13)
	  lwz       r4, 0x24(r30)
	  bl        0x2BE1C4
	  lwz       r3, -0x6514(r13)
	  mr        r4, r31
	  bl        0x2BE674
	  lwz       r3, -0x7618(r13)
	  lwz       r3, 0x10(r3)
	  lwz       r30, 0x0(r3)
	  bl        -0x130F98
	  mr        r4, r3
	  mr        r3, r30
	  bl        -0x787E8
	  lwz       r3, -0x7618(r13)
	  lwz       r3, 0x10(r3)
	  lwz       r30, 0x4(r3)
	  bl        -0x130FB4
	  mr        r4, r3
	  mr        r3, r30
	  bl        -0x78804
	  lwz       r3, -0x7708(r13)
	  li        r0, 0
	  stb       r0, 0x10C(r3)
	  lwz       r3, -0x7708(r13)
	  stb       r0, 0x130(r3)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80164F24
 * Size:	000080
 */
void Game::BaseHIOSection::initHIO((Game::HIORootNode*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bne-      .loc_0x40
	  li        r3, 0x1C
	  bl        -0x1410A0
	  mr.       r0, r3
	  beq-      .loc_0x38
	  mr        r4, r31
	  bl        0x84
	  mr        r0, r3

	.loc_0x38:
	  stw       r0, 0x3C(r31)
	  b         .loc_0x44

	.loc_0x40:
	  stw       r4, 0x3C(r31)

	.loc_0x44:
	  lwz       r3, -0x6514(r13)
	  lwz       r4, 0x3C(r31)
	  bl        0x2BE5B0
	  lwz       r3, -0x7708(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  li        r0, 0
	  stb       r0, 0x10C(r3)
	  lwz       r3, -0x7708(r13)
	  stb       r0, 0x130(r3)

	.loc_0x6C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80164FA4
 * Size:	000004
 */
void Game::BaseHIOSection::createScreenRootNode(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80164FA8
 * Size:	000008
 */
void Game::BaseHIOSection::doUpdate(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80164FB0
 * Size:	000024
 */
void Game::BaseHIOSection::addGenNode((CNode*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x3C(r3)
	  bl        0x2AC448
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80164FD4
 * Size:	000004
 */
void Game::BaseHIOSection::refreshHIO(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80164FD8
 * Size:	000054
 */
void Game::HIORootNode::__ct((Section*))
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
	  bl        0x2AC39C
	  lis       r3, 0x804B
	  subi      r0, r2, 0x5A88
	  addi      r4, r3, 0x19FC
	  mr        r3, r30
	  stw       r4, 0x0(r30)
	  stw       r31, 0x18(r30)
	  stw       r0, 0x14(r30)
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
 * Address:	8016502C
 * Size:	00002C
 */
void Section::drawInit(Graphics&, Section::EDrawInitMode)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80165058
 * Size:	000008
 */
void Section::forceFinish()
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80165060
 * Size:	000028
 */
void __sinit_baseHIOSection_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804B
	  stw       r0, -0x6CF0(r13)
	  stfsu     f0, 0x19F0(r3)
	  stfs      f0, -0x6CEC(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}
